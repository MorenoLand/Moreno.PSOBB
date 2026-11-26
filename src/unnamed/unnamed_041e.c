#include "protos.h"

void f_0041e3c0(void)
{
    FN_ENTER(0x0041e3c0);
    /* 0041e3c0: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e3c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e3c7: ret 4 */ FN_RET(0x0041e3c0); r_esp += 8; return;
}

void f_0041e3f8(void) /* sub_41E3F8 */
{
    FN_ENTER(0x0041e3f8);
    /* 0041e3f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3f9: mov ebx, esp */ r_ebx = r_esp;
    /* 0041e3fb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0041e3fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041e400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041e401: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041e404: mov esi, ecx */ r_esi = r_ecx;
    /* 0041e406: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0041e409: lea ebp, [esi + 0x898] */ r_ebp = (u32)(r_esi+0x898u);
    /* 0041e40f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041e412: ja 0x41e7f8 */ if ((!fC&&!fZ)) goto L_0041e7f8;
L_0041e418:; BB(0x0041e418);
    /* 0041e418: mov eax, dword ptr [eax*4 + 0x8fb4b4] */ r_eax = R32((u32)(r_eax*4+0x8fb4b4u));
    /* 0041e41f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041e7f8:; BB(0x0041e7f8);
    /* 0041e7f8: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e7fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e7fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e7fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e7fe: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e800: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e801: ret 4 */ FN_RET(0x0041e3f8); r_esp += 8; return;
}

void f_0041e421(void)
{
    FN_ENTER(0x0041e421);
    /* 0041e421: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 0041e427: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e42a: jne 0x41e7f8 */ if (!fZ) goto L_0041e7f8;
L_0041e430:; BB(0x0041e430);
    /* 0041e430: jmp 0x41e804 */ goto L_0041e804;
L_0041e7f8:; BB(0x0041e7f8);
    /* 0041e7f8: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e7fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e7fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e7fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e7fe: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e800: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e801: ret 4 */ FN_RET(0x0041e421); r_esp += 8; return;
L_0041e804:; BB(0x0041e804);
    /* 0041e804: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e806: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e808: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041e80a: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e80c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41e812u); call_ind(t); }
    /* 0041e812: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041e816: mov ebp, dword ptr [esi + 0x684] */ r_ebp = R32((u32)(r_esi+0x684u));
    /* 0041e81c: movzx edi, word ptr [esi + 0x394] */ r_edi = (u32)R16((u32)(r_esi+0x394u));
    /* 0041e823: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041e828: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041e82e: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041e834: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041e838: mov edx, 8 */ r_edx = 0x8u;
    /* 0041e83d: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041e842: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0041e847: mov word ptr [esp + 6], bp */ W16((u32)(r_esp+0x6u), (u16)r_ebp);
    /* 0041e84c: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0041e850: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041e854: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0041e858: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041e85b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41e860u); f_008003e0();
    /* 0041e860: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e863: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e864: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e865: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e866: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e868: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e869: ret 4 */ FN_RET(0x0041e421); r_esp += 8; return;
}

void f_0041e435(void)
{
    FN_ENTER(0x0041e435);
    /* 0041e435: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e437: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x41e43cu); f_007751b0();
    /* 0041e43c: fld dword ptr [0x8fbd80] */ FPUSH(R_F32((u32)(0x8fbd80u)));
    /* 0041e442: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041e444: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0041e448: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0041e44d: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041e452: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041e457: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0041e45b: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0041e45f: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041e463: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0041e467: mov eax, dword ptr [esi + 0x6a8] */ r_eax = R32((u32)(r_esi+0x6a8u));
    /* 0041e46d: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0041e471: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e474: jge 0x41e4dc */ if ((fS==fO)) goto L_0041e4dc;
L_0041e476:; BB(0x0041e476);
    /* 0041e476: fld dword ptr [0x8fbd7c] */ FPUSH(R_F32((u32)(0x8fbd7cu)));
    /* 0041e47c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e47f: mov dword ptr [esi + 0x6a8], eax */ W32((u32)(r_esi+0x6a8u), r_eax);
    /* 0041e485: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0041e489: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041e48b: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041e48d: fcom dword ptr [edi + 0x6b0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x6b0u))); 
    /* 0041e493: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e495: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e496: je 0x41ebb9 */ if (fZ) goto L_0041ebb9;
L_0041e49c:; BB(0x0041e49c);
    /* 0041e49c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0041e49f: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e4a2: jl 0x41e4a6 */ if ((fS!=fO)) goto L_0041e4a6;
L_0041e4a4:; BB(0x0041e4a4);
    /* 0041e4a4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0041e4a6:; BB(0x0041e4a6);
    /* 0041e4a6: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0041e4aa: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041e4ac: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041e4ae: fcom dword ptr [edi + 0x6b0] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x6b0u))); 
    /* 0041e4b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e4b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e4b7: jne 0x41e49c */ if (!fZ) goto L_0041e49c;
L_0041e4b9:; BB(0x0041e4b9);
    /* 0041e4b9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0041e4bb:; BB(0x0041e4bb);
    /* 0041e4bb: push 0x435c0000 */ { u32 v = 0x435c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4c0: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e4c2: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4c7: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x41e4ccu); f_00520c08();
    /* 0041e4cc: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0041e4d0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0041e4d4: fstp dword ptr [edi + 0x6b0] */ W_F32((u32)(r_edi+0x6b0u), ST(0)); FPOP();
    /* 0041e4da: jmp 0x41e4e7 */ goto L_0041e4e7;
L_0041e4dc:; BB(0x0041e4dc);
    /* 0041e4dc: fld dword ptr [esi + ebp*4 + 0x6b0] */ FPUSH(R_F32((u32)(r_esi+r_ebp*4+0x6b0u)));
    /* 0041e4e3: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
L_0041e4e7:; BB(0x0041e4e7);
    /* 0041e4e7: imul ebp, ebp, 0x1555 */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)0x1555u; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e4ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041e4ef: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41e4f4u); f_0082dcbc();
    /* 0041e4f4: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0041e4f8: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 0041e4fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041e500: mov dword ptr [esi + 0x3a0], 0 */ W32((u32)(r_esi+0x3a0u), 0x0u);
    /* 0041e50a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41e50fu); f_0082ddd8();
    /* 0041e50f: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0041e513: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 0041e519: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e51b: call 0x4235f8 */ r_esp -= 4; W32(r_esp, 0x41e520u); f_004235f8();
    /* 0041e520: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e523: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e524: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e525: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e526: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e528: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e529: ret 4 */ FN_RET(0x0041e435); r_esp += 8; return;
L_0041ebb9:; BB(0x0041ebb9);
    /* 0041ebb9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041ebbb: jmp 0x41e4bb */ goto L_0041e4bb;
}

void f_0041e52c(void)
{
    FN_ENTER(0x0041e52c);
    /* 0041e52c: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
    /* 0041e533: jmp 0x41e7f8 */ goto L_0041e7f8;
L_0041e7f8:; BB(0x0041e7f8);
    /* 0041e7f8: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e7fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e7fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e7fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e7fe: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e800: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e801: ret 4 */ FN_RET(0x0041e52c); r_esp += 8; return;
}

void f_0041e538(void)
{
    FN_ENTER(0x0041e538);
    /* 0041e538: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0041e53d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0041e544: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e546: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41e54bu); f_007aa094();
    /* 0041e54b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041e54d: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e54f: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x41e555u); call_ind(t); }
    /* 0041e555: mov dword ptr [esi + 0x3ec], 2 */ W32((u32)(r_esi+0x3ecu), 0x2u);
    /* 0041e55f: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e561: call 0x41a018 */ r_esp -= 4; W32(r_esp, 0x41e566u); f_0041a018();
    /* 0041e566: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0041e56c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041e571: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041e576: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0041e57c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041e57e: mov dword ptr [esi + 0x86c], edx */ W32((u32)(r_esi+0x86cu), r_edx);
    /* 0041e584: mov dword ptr [esi + 0x870], edx */ W32((u32)(r_esi+0x870u), r_edx);
    /* 0041e58a: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e58d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e58e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e58f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e590: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e592: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e593: ret 4 */ FN_RET(0x0041e538); r_esp += 8; return;
}

void f_0041e596(void)
{
    FN_ENTER(0x0041e596);
    /* 0041e596: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 0041e59c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e59f: jne 0x41e7f8 */ if (!fZ) goto L_0041e7f8;
L_0041e5a5:; BB(0x0041e5a5);
    /* 0041e5a5: jmp 0x41e86c */ goto L_0041e86c;
L_0041e7f8:; BB(0x0041e7f8);
    /* 0041e7f8: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e7fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e7fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e7fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e7fe: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e800: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e801: ret 4 */ FN_RET(0x0041e596); r_esp += 8; return;
L_0041e86c:; BB(0x0041e86c);
    /* 0041e86c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e86e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e870: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041e872: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e874: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41e87au); call_ind(t); }
    /* 0041e87a: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041e87e: mov ebp, dword ptr [esi + 0x684] */ r_ebp = R32((u32)(r_esi+0x684u));
    /* 0041e884: movzx edi, word ptr [esi + 0x394] */ r_edi = (u32)R16((u32)(r_esi+0x394u));
    /* 0041e88b: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0041e890: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041e896: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041e89c: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 0041e8a1: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0041e8a6: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 0041e8ab: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0041e8b0: mov word ptr [esp + 0x1a], bp */ W16((u32)(r_esp+0x1au), (u16)r_ebp);
    /* 0041e8b5: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0041e8b9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0041e8bd: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0041e8c1: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0041e8c5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41e8cau); f_008003e0();
    /* 0041e8ca: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e8cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e8ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e8cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e8d0: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e8d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e8d3: ret 4 */ FN_RET(0x0041e596); r_esp += 8; return;
}

void f_0041e5aa(void)
{
    FN_ENTER(0x0041e5aa);
    /* 0041e5aa: mov edi, dword ptr [esi + 0x86c] */ r_edi = R32((u32)(r_esi+0x86cu));
    /* 0041e5b0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e5b2: je 0x41e9d8 */ if (fZ) goto L_0041e9d8;
L_0041e5b8:; BB(0x0041e5b8);
    /* 0041e5b8: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e5bb: je 0x41e966 */ if (fZ) goto L_0041e966;
L_0041e5c1:; BB(0x0041e5c1);
    /* 0041e5c1: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e5c4: je 0x41e657 */ if (fZ) goto L_0041e657;
L_0041e5ca:; BB(0x0041e5ca);
    /* 0041e5ca: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e5cd: jne 0x41e61e */ if (!fZ) goto L_0041e61e;
L_0041e5cf:; BB(0x0041e5cf);
    /* 0041e5cf: fld dword ptr [esi + 0x888] */ FPUSH(R_F32((u32)(r_esi+0x888u)));
    /* 0041e5d5: fcomp dword ptr [0x8fbd7c] */ fx_compare(ST(0), R_F32((u32)(0x8fbd7cu))); FPOP();
    /* 0041e5db: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e5dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e5de: jae 0x41e677 */ if (!fC) goto L_0041e677;
L_0041e5e4:; BB(0x0041e5e4);
    /* 0041e5e4: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0041e5ea: fcomp dword ptr [0x8fbd5c] */ fx_compare(ST(0), R_F32((u32)(0x8fbd5cu))); FPOP();
    /* 0041e5f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e5f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e5f3: jae 0x41e677 */ if (!fC) goto L_0041e677;
L_0041e5f9:; BB(0x0041e5f9);
    /* 0041e5f9: fld dword ptr [esi + 0x888] */ FPUSH(R_F32((u32)(r_esi+0x888u)));
    /* 0041e5ff: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0041e601: fdiv dword ptr [0x8fbd70] */ ST(0) = ST(0) / R_F32((u32)(0x8fbd70u));
    /* 0041e607: fstp dword ptr [esi + 0x88c] */ W_F32((u32)(r_esi+0x88cu), ST(0)); FPOP();
    /* 0041e60d: mov edi, 4 */ r_edi = 0x4u;
    /* 0041e612: mov dword ptr [esi + 0x86c], 4 */ W32((u32)(r_esi+0x86cu), 0x4u);
    /* 0041e61c: jmp 0x41e677 */ goto L_0041e677;
L_0041e61e:; BB(0x0041e61e);
    /* 0041e61e: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e621: jne 0x41e677 */ if (!fZ) goto L_0041e677;
L_0041e623:; BB(0x0041e623);
    /* 0041e623: fld dword ptr [esi + 0x888] */ FPUSH(R_F32((u32)(r_esi+0x888u)));
    /* 0041e629: fcomp dword ptr [0x8fbd7c] */ fx_compare(ST(0), R_F32((u32)(0x8fbd7cu))); FPOP();
    /* 0041e62f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e631: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e632: jbe 0x41e677 */ if ((fC||fZ)) goto L_0041e677;
L_0041e634:; BB(0x0041e634);
    /* 0041e634: mov dword ptr [esi + 0x86c], 5 */ W32((u32)(r_esi+0x86cu), 0x5u);
    /* 0041e63e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e640: mov dword ptr [esi + 0x888], eax */ W32((u32)(r_esi+0x888u), r_eax);
    /* 0041e646: mov edi, 5 */ r_edi = 0x5u;
    /* 0041e64b: mov dword ptr [esi + 0x870], 0 */ W32((u32)(r_esi+0x870u), 0x0u);
    /* 0041e655: jmp 0x41e677 */ goto L_0041e677;
L_0041e657:; BB(0x0041e657);
    /* 0041e657: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0041e65d: fcomp dword ptr [0x8fbd58] */ fx_compare(ST(0), R_F32((u32)(0x8fbd58u))); FPOP();
    /* 0041e663: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e665: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e666: jbe 0x41e677 */ if ((fC||fZ)) goto L_0041e677;
L_0041e668:; BB(0x0041e668);
    /* 0041e668: mov dword ptr [esi + 0x86c], 3 */ W32((u32)(r_esi+0x86cu), 0x3u);
    /* 0041e672: mov edi, 3 */ r_edi = 0x3u;
L_0041e677:; BB(0x0041e677);
    /* 0041e677: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e67a: je 0x41e92b */ if (fZ) goto L_0041e92b;
L_0041e680:; BB(0x0041e680);
    /* 0041e680: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e683: je 0x41e8e2 */ if (fZ) goto L_0041e8e2;
L_0041e689:; BB(0x0041e689);
    /* 0041e689: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e68c: je 0x41e76e */ if (fZ) goto L_0041e76e;
L_0041e692:; BB(0x0041e692);
    /* 0041e692: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e695: jne 0x41e729 */ if (!fZ) goto L_0041e729;
L_0041e69b:; BB(0x0041e69b);
    /* 0041e69b: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e69d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41e6a2u); f_007aa094();
    /* 0041e6a2: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0041e6a9: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e6ac: je 0x41e8d6 */ if (fZ) goto L_0041e8d6;
L_0041e6b2:; BB(0x0041e6b2);
    /* 0041e6b2: fld dword ptr [0x8fbd64] */ FPUSH(R_F32((u32)(0x8fbd64u)));
    /* 0041e6b8: fld dword ptr [esi + 0x88c] */ FPUSH(R_F32((u32)(r_esi+0x88cu)));
    /* 0041e6be: fadd dword ptr [esi + 0x888] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x888u));
    /* 0041e6c4: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0041e6ca: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0041e6cd: fld dword ptr [esi + 0x898] */ FPUSH(R_F32((u32)(r_esi+0x898u)));
    /* 0041e6d3: fld dword ptr [esi + 0x8a0] */ FPUSH(R_F32((u32)(r_esi+0x8a0u)));
    /* 0041e6d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041e6db: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0041e6dd: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0041e6df: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041e6e1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0041e6e3: fst dword ptr [esi + 0x888] */ W_F32((u32)(r_esi+0x888u), ST(0));
    /* 0041e6e9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0041e6eb: fstp dword ptr [esi + 0x898] */ W_F32((u32)(r_esi+0x898u), ST(0)); FPOP();
    /* 0041e6f1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041e6f3: fstp dword ptr [esi + 0x8a0] */ W_F32((u32)(r_esi+0x8a0u), ST(0)); FPOP();
    /* 0041e6f9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0041e6fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041e6fd: fst dword ptr [esi + 0x5e0] */ W_F32((u32)(r_esi+0x5e0u), ST(0));
    /* 0041e703: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0041e705: fadd dword ptr [esi + 0x5e8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5e8u));
    /* 0041e70b: fstp dword ptr [esi + 0x5e4] */ W_F32((u32)(r_esi+0x5e4u), ST(0)); FPOP();
    /* 0041e711: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041e714: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e716: mov edx, ebp */ r_edx = r_ebp;
    /* 0041e718: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x41e71du); f_0082ebac();
    /* 0041e71d: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e720: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e721: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e722: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e723: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e725: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e726: ret 4 */ FN_RET(0x0041e5aa); r_esp += 8; return;
L_0041e729:; BB(0x0041e729);
    /* 0041e729: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e72c: jne 0x41e7f8 */ if (!fZ) goto L_0041e7f8;
L_0041e732:; BB(0x0041e732);
    /* 0041e732: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e734: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41e739u); f_007aa094();
    /* 0041e739: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e73b: call 0x41ebc0 */ r_esp -= 4; W32(r_esp, 0x41e740u); f_0041ebc0();
    /* 0041e740: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 0041e746: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e749: mov dword ptr [esi + 0x870], eax */ W32((u32)(r_esi+0x870u), r_eax);
    /* 0041e74f: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e752: jl 0x41e7f8 */ if ((fS!=fO)) goto L_0041e7f8;
L_0041e758:; BB(0x0041e758);
    /* 0041e758: mov dword ptr [esi + 0x86c], 6 */ W32((u32)(r_esi+0x86cu), 0x6u);
    /* 0041e762: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e766: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e767: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e768: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e76a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e76b: ret 4 */ FN_RET(0x0041e5aa); r_esp += 8; return;
L_0041e76e:; BB(0x0041e76e);
    /* 0041e76e: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e770: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41e775u); f_007aa094();
    /* 0041e775: fld dword ptr [0xa436e4] */ FPUSH(R_F32((u32)(0xa436e4u)));
    /* 0041e77b: fadd dword ptr [esi + 0x888] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x888u));
    /* 0041e781: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0041e787: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 0041e78d: fcomp dword ptr [0x8fbd60] */ fx_compare(ST(0), R_F32((u32)(0x8fbd60u))); FPOP();
    /* 0041e793: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e795: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041e797: fst dword ptr [esi + 0x888] */ W_F32((u32)(r_esi+0x888u), ST(0));
    /* 0041e79d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041e79f: fstp dword ptr [esi + 0x5e0] */ W_F32((u32)(r_esi+0x5e0u), ST(0)); FPOP();
    /* 0041e7a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e7a6: jb 0x41e7ca */ if (fC) goto L_0041e7ca;
L_0041e7a8:; BB(0x0041e7a8);
    /* 0041e7a8: fld dword ptr [0x8fbd64] */ FPUSH(R_F32((u32)(0x8fbd64u)));
    /* 0041e7ae: fld dword ptr [esi + 0x898] */ FPUSH(R_F32((u32)(r_esi+0x898u)));
    /* 0041e7b4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041e7b6: fld dword ptr [esi + 0x8a0] */ FPUSH(R_F32((u32)(r_esi+0x8a0u)));
    /* 0041e7bc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0041e7be: fstp dword ptr [esi + 0x898] */ W_F32((u32)(r_esi+0x898u), ST(0)); FPOP();
    /* 0041e7c4: fstp dword ptr [esi + 0x8a0] */ W_F32((u32)(r_esi+0x8a0u), ST(0)); FPOP();
L_0041e7ca:; BB(0x0041e7ca);
    /* 0041e7ca: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0041e7cd: mov edx, ebp */ r_edx = r_ebp;
    /* 0041e7cf: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x41e7d4u); f_0082ebac();
    /* 0041e7d4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e7d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e7db: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041e7de: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x41e7e3u); f_007a8c74();
    /* 0041e7e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e7e6: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0041e7ec: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 0041e7ef: fstp dword ptr [esi + 0x5e4] */ W_F32((u32)(r_esi+0x5e4u), ST(0)); FPOP();
    /* 0041e7f5: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
L_0041e7f8:; BB(0x0041e7f8);
    /* 0041e7f8: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e7fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e7fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e7fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e7fe: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e800: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e801: ret 4 */ FN_RET(0x0041e5aa); r_esp += 8; return;
L_0041e8d6:; BB(0x0041e8d6);
    /* 0041e8d6: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e8d8: call 0x41ebc0 */ r_esp -= 4; W32(r_esp, 0x41e8ddu); f_0041ebc0();
    /* 0041e8dd: jmp 0x41e6b2 */ goto L_0041e6b2;
L_0041e8e2:; BB(0x0041e8e2);
    /* 0041e8e2: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0041e8e5: mov edx, ebp */ r_edx = r_ebp;
    /* 0041e8e7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x41e8ecu); f_0082ebac();
    /* 0041e8ec: fld dword ptr [0xa436e4] */ FPUSH(R_F32((u32)(0xa436e4u)));
    /* 0041e8f2: fadd dword ptr [esi + 0x888] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x888u));
    /* 0041e8f8: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0041e8fe: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0041e901: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041e903: fst dword ptr [esi + 0x888] */ W_F32((u32)(r_esi+0x888u), ST(0));
    /* 0041e909: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0041e90b: fst dword ptr [esi + 0x5e0] */ W_F32((u32)(r_esi+0x5e0u), ST(0));
    /* 0041e911: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0041e913: fadd dword ptr [esi + 0x5e8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5e8u));
    /* 0041e919: fstp dword ptr [esi + 0x5e4] */ W_F32((u32)(r_esi+0x5e4u), ST(0)); FPOP();
    /* 0041e91f: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e923: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e924: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e925: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e927: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e928: ret 4 */ FN_RET(0x0041e5aa); r_esp += 8; return;
L_0041e92b:; BB(0x0041e92b);
    /* 0041e92b: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0041e92e: mov edx, ebp */ r_edx = r_ebp;
    /* 0041e930: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x41e935u); f_0082ebac();
    /* 0041e935: fld dword ptr [esi + 0x888] */ FPUSH(R_F32((u32)(r_esi+0x888u)));
    /* 0041e93b: fadd dword ptr [esi + 0x5e0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5e0u));
    /* 0041e941: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0041e944: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041e946: fst dword ptr [esi + 0x5e0] */ W_F32((u32)(r_esi+0x5e0u), ST(0));
    /* 0041e94c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0041e94e: fadd dword ptr [esi + 0x5e8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5e8u));
    /* 0041e954: fstp dword ptr [esi + 0x5e4] */ W_F32((u32)(r_esi+0x5e4u), ST(0)); FPOP();
    /* 0041e95a: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e95d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e95e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e95f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e960: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e962: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e963: ret 4 */ FN_RET(0x0041e5aa); r_esp += 8; return;
L_0041e966:; BB(0x0041e966);
    /* 0041e966: fld dword ptr [esi + 0x5e0] */ FPUSH(R_F32((u32)(r_esi+0x5e0u)));
    /* 0041e96c: fcomp dword ptr [0x8fbe08] */ fx_compare(ST(0), R_F32((u32)(0x8fbe08u))); FPOP();
    /* 0041e972: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e974: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e975: jbe 0x41e677 */ if ((fC||fZ)) goto L_0041e677;
L_0041e97b:; BB(0x0041e97b);
    /* 0041e97b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041e97d: mov dword ptr [esi + 0x86c], 2 */ W32((u32)(r_esi+0x86cu), 0x2u);
    /* 0041e987: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e989: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x41e98fu); call_ind(t); }
    /* 0041e98f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041e991: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e993: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x41e999u); call_ind(t); }
    /* 0041e999: mov dword ptr [esi + 0x3ec], 1 */ W32((u32)(r_esi+0x3ecu), 0x1u);
    /* 0041e9a3: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0041e9a6: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e9a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e9a9: call 0x41ebf0 */ r_esp -= 4; W32(r_esp, 0x41e9aeu); f_0041ebf0();
    /* 0041e9ae: mov ecx, esi */ r_ecx = r_esi;
    /* 0041e9b0: call 0x41ec70 */ r_esp -= 4; W32(r_esp, 0x41e9b5u); f_0041ec70();
    /* 0041e9b5: lea edi, [esi + 0x644] */ r_edi = (u32)(r_esi+0x644u);
    /* 0041e9bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e9bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e9be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e9bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041e9c0: push 0x323 */ { u32 v = 0x323u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e9c5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41e9cau); f_00814298();
    /* 0041e9ca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e9cd: mov edi, dword ptr [esi + 0x86c] */ r_edi = R32((u32)(r_esi+0x86cu));
    /* 0041e9d3: jmp 0x41e677 */ goto L_0041e677;
L_0041e9d8:; BB(0x0041e9d8);
    /* 0041e9d8: mov edi, dword ptr [esi + 0x870] */ r_edi = R32((u32)(r_esi+0x870u));
    /* 0041e9de: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041e9e1: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0041e9e5: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 0041e9e9: fcomp dword ptr [0x8fbd54] */ fx_compare(ST(0), R_F32((u32)(0x8fbd54u))); FPOP();
    /* 0041e9ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e9f1: mov dword ptr [esi + 0x870], edi */ W32((u32)(r_esi+0x870u), r_edi);
    /* 0041e9f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041e9f8: jae 0x41ea05 */ if (!fC) goto L_0041ea05;
L_0041e9fa:; BB(0x0041e9fa);
    /* 0041e9fa: mov edi, dword ptr [esi + 0x86c] */ r_edi = R32((u32)(r_esi+0x86cu));
    /* 0041ea00: jmp 0x41e677 */ goto L_0041e677;
L_0041ea05:; BB(0x0041ea05);
    /* 0041ea05: mov dword ptr [esi + 0x86c], 1 */ W32((u32)(r_esi+0x86cu), 0x1u);
    /* 0041ea0f: mov ecx, esi */ r_ecx = r_esi;
    /* 0041ea11: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x41ea16u); f_00419ff0();
    /* 0041ea16: fld dword ptr [0x8fbe04] */ FPUSH(R_F32((u32)(0x8fbe04u)));
    /* 0041ea1c: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0041ea1f: fld dword ptr [0x8fbe0c] */ FPUSH(R_F32((u32)(0x8fbe0cu)));
    /* 0041ea25: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0041ea28: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0041ea2e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041ea30: fstp dword ptr [esi + 0x898] */ W_F32((u32)(r_esi+0x898u), ST(0)); FPOP();
    /* 0041ea36: fstp dword ptr [esi + 0x8a0] */ W_F32((u32)(r_esi+0x8a0u), ST(0)); FPOP();
    /* 0041ea3c: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041ea41: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0041ea47: mov dword ptr [esi + 0x89c], 0 */ W32((u32)(r_esi+0x89cu), 0x0u);
    /* 0041ea51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041ea52: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x41ea57u); f_007828e4();
    /* 0041ea57: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0041ea5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ea5e: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0041ea62: fcomp dword ptr [0x8fbd50] */ fx_compare(ST(0), R_F32((u32)(0x8fbd50u))); FPOP();
    /* 0041ea68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041ea6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041ea6b: ja 0x41ea96 */ if ((!fC&&!fZ)) goto L_0041ea96;
L_0041ea6d:; BB(0x0041ea6d);
    /* 0041ea6d: fld qword ptr [0x8fba00] */ FPUSH(R_F64((u32)(0x8fba00u)));
    /* 0041ea73: fld qword ptr [0x8fb9f8] */ FPUSH(R_F64((u32)(0x8fb9f8u)));
    /* 0041ea79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041ea7b: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0041ea7f: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0041ea83: mov dword ptr [esi + 0x884], 0 */ W32((u32)(r_esi+0x884u), 0x0u);
    /* 0041ea8d: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
    /* 0041ea94: jmp 0x41eb10 */ goto L_0041eb10;
L_0041ea96:; BB(0x0041ea96);
    /* 0041ea96: fld dword ptr [0xa436e4] */ FPUSH(R_F32((u32)(0xa436e4u)));
    /* 0041ea9c: fld dword ptr [0x8fbd4c] */ FPUSH(R_F32((u32)(0x8fbd4cu)));
    /* 0041eaa2: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0041eaa4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041eaa6: fdivr dword ptr [0x8fbd6c] */ ST(0) = R_F32((u32)(0x8fbd6cu)) / ST(0);
    /* 0041eaac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041eaae: fchs  */ ST(0) = -ST(0);
    /* 0041eab0: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0041eab4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041eab5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041eab8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x41eabdu); f_0082dc9c();
    /* 0041eabd: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0041eac1: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0041eac5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0041eac7: fst dword ptr [esi + 0x884] */ W_F32((u32)(r_esi+0x884u), ST(0));
    /* 0041eacd: fld qword ptr [0x8fba08] */ FPUSH(R_F64((u32)(0x8fba08u)));
    /* 0041ead3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0041ead5: fld qword ptr [0x8fba00] */ FPUSH(R_F64((u32)(0x8fba00u)));
    /* 0041eadb: fld qword ptr [0x8fb9f8] */ FPUSH(R_F64((u32)(0x8fb9f8u)));
    /* 0041eae1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041eae3: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0041eae5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041eae7: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0041eae9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041eaeb: fstp qword ptr [esp + 0x50] */ W_F64((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0041eaef: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0041eaf3: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0041eaf7: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0041eafc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041eb01: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0041eb05: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0041eb09: fistp dword ptr [esi + 0x5c] */ W32((u32)(r_esi+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0041eb0c: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
L_0041eb10:; BB(0x0041eb10);
    /* 0041eb10: fld dword ptr [esi + 0x898] */ FPUSH(R_F32((u32)(r_esi+0x898u)));
    /* 0041eb16: fld dword ptr [esi + 0x8a0] */ FPUSH(R_F32((u32)(r_esi+0x8a0u)));
    /* 0041eb1c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0041eb1e: fld dword ptr [0x8fbd68] */ FPUSH(R_F32((u32)(0x8fbd68u)));
    /* 0041eb24: fld dword ptr [0x8fbd48] */ FPUSH(R_F32((u32)(0x8fbd48u)));
    /* 0041eb2a: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 0041eb2d: fadd dword ptr [esi + 0x5e8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x5e8u));
    /* 0041eb33: fld dword ptr [esi + 0x898] */ FPUSH(R_F32((u32)(r_esi+0x898u)));
    /* 0041eb39: fmul dword ptr [esi + 0x884] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x884u));
    /* 0041eb3f: fld dword ptr [esi + 0x8a0] */ FPUSH(R_F32((u32)(r_esi+0x8a0u)));
    /* 0041eb45: fmul dword ptr [esi + 0x884] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x884u));
    /* 0041eb4b: mov edi, dword ptr [esi + 0x86c] */ r_edi = R32((u32)(r_esi+0x86cu));
    /* 0041eb51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041eb53: fst dword ptr [esi + 0x898] */ W_F32((u32)(r_esi+0x898u), ST(0));
    /* 0041eb59: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0041eb5b: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0041eb5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041eb60: fst dword ptr [esi + 0x8a0] */ W_F32((u32)(r_esi+0x8a0u), ST(0));
    /* 0041eb66: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0041eb68: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041eb6a: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0041eb6d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041eb6f: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 0041eb72: fstp dword ptr [esi + 0x5e4] */ W_F32((u32)(r_esi+0x5e4u), ST(0)); FPOP();
    /* 0041eb78: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 0041eb7b: fmul qword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x50u));
    /* 0041eb7f: fdiv qword ptr [esp + 0x58] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x58u));
    /* 0041eb83: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0041eb87: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0041eb8c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041eb91: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0041eb95: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0041eb99: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041eb9c: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0041eba0: mov dword ptr [esi + 0x888], 0x41700000 */ W32((u32)(r_esi+0x888u), 0x41700000u);
    /* 0041ebaa: mov dword ptr [esi + 0x5e0], 0xc32a0000 */ W32((u32)(r_esi+0x5e0u), 0xc32a0000u);
    /* 0041ebb4: jmp 0x41e677 */ goto L_0041e677;
}

void f_0041e7f8(void)
{
    FN_ENTER(0x0041e7f8);
    /* 0041e7f8: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041e7fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e7fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e7fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041e7fe: mov esp, ebx */ r_esp = r_ebx;
    /* 0041e800: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041e801: ret 4 */ FN_RET(0x0041e7f8); r_esp += 8; return;
}

void f_0041ebc0(void) /* sub_41EBC0 */
{
    FN_ENTER(0x0041ebc0);
    /* 0041ebc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041ebc1: mov edi, ecx */ r_edi = r_ecx;
    /* 0041ebc3: mov ecx, edi */ r_ecx = r_edi;
    /* 0041ebc5: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ebca: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41ebcfu); f_007aaa30();
    /* 0041ebcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041ebd1: je 0x41ebeb */ if (fZ) goto L_0041ebeb;
L_0041ebd3:; BB(0x0041ebd3);
    /* 0041ebd3: add edi, 0x644 */ {  u32 a = r_edi; u32 b = 0x644u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041ebd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041ebdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ebdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ebdd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041ebde: push 0x318 */ { u32 v = 0x318u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ebe3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41ebe8u); f_00814298();
    /* 0041ebe8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0041ebeb:; BB(0x0041ebeb);
    /* 0041ebeb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041ebec: ret  */ FN_RET(0x0041ebc0); r_esp += 4; return;
}

void f_0041ebf0(void) /* sub_41EBF0 */
{
    FN_ENTER(0x0041ebf0);
    /* 0041ebf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041ebf1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041ebf4: mov esi, ecx */ r_esi = r_ecx;
    /* 0041ebf6: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0041ebfa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041ebfc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0041ebff: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0041ec02: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0041ec05: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0041ec09: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041ec0d: mov eax, dword ptr [esi + 0x6ac] */ r_eax = R32((u32)(r_esi+0x6acu));
    /* 0041ec13: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ec16: jge 0x41ec49 */ if ((fS==fO)) goto L_0041ec49;
L_0041ec18:; BB(0x0041ec18);
    /* 0041ec18: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041ec1c: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0041ec20: fmul dword ptr [0x8fbd40] */ ST(0) = ST(0) * R_F32((u32)(0x8fbd40u));
    /* 0041ec26: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0041ec2a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041ec2d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0041ec31: mov dword ptr [esi + 0x6ac], eax */ W32((u32)(r_esi+0x6acu), r_eax);
    /* 0041ec37: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041ec3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec3b: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ec41: call 0x426efc */ r_esp -= 4; W32(r_esp, 0x41ec46u); f_00426efc();
    /* 0041ec46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041ec49:; BB(0x0041ec49);
    /* 0041ec49: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0041ec4c: push 0x840 */ { u32 v = 0x840u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec51: mov esi, dword ptr [esi + 0x780] */ r_esi = R32((u32)(r_esi+0x780u));
    /* 0041ec57: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ec59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec5a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41ec5fu); f_0050b7a4();
    /* 0041ec5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec61: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x41ec66u); f_004d4288();
    /* 0041ec66: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041ec69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041ec6a: ret 4 */ FN_RET(0x0041ebf0); r_esp += 8; return;
}

void f_0041ec70(void) /* sub_41EC70 */
{
    FN_ENTER(0x0041ec70);
    /* 0041ec70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec71: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0041ec73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ec75: call 0x41ecb4 */ r_esp -= 4; W32(r_esp, 0x41ec7au); f_0041ecb4();
    /* 0041ec7a: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41ec7fu); f_00420a44();
    /* 0041ec7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ec81: jne 0x41ec97 */ if (!fZ) goto L_0041ec97;
L_0041ec83:; BB(0x0041ec83);
    /* 0041ec83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec85: push 0x9a3ed8 */ { u32 v = 0x9a3ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec8a: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0041ec8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ec8e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ec90: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x41ec95u); f_0051fdf8();
    /* 0041ec95: jmp 0x41eca8 */ goto L_0041eca8;
L_0041ec97:; BB(0x0041ec97);
    /* 0041ec97: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ec9a: jne 0x41eca8 */ if (!fZ) goto L_0041eca8;
L_0041ec9c:; BB(0x0041ec9c);
    /* 0041ec9c: push 0x9a3ed8 */ { u32 v = 0x9a3ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041eca1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041eca3: call 0x41ece4 */ r_esp -= 4; W32(r_esp, 0x41eca8u); f_0041ece4();
L_0041eca8:; BB(0x0041eca8);
    /* 0041eca8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ecaa: call 0x41ed38 */ r_esp -= 4; W32(r_esp, 0x41ecafu); f_0041ed38();
    /* 0041ecaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ecb0: ret  */ FN_RET(0x0041ec70); r_esp += 4; return;
}

void f_0041ecb4(void) /* sub_41ECB4 */
{
    FN_ENTER(0x0041ecb4);
    /* 0041ecb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041ecb5: mov ebp, dword ptr [0xa436d0] */ r_ebp = R32((u32)(0xa436d0u));
    /* 0041ecbb: mov edx, dword ptr [0x9a3ef8] */ r_edx = R32((u32)(0x9a3ef8u));
    /* 0041ecc1: mov eax, dword ptr [0xa436bc] */ r_eax = R32((u32)(0xa436bcu));
    /* 0041ecc6: push dword ptr [eax*4 + 0xa43734] */ { u32 v = R32((u32)(r_eax*4+0xa43734u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041eccd: push dword ptr [edx*4 + 0xa43738] */ { u32 v = R32((u32)(r_edx*4+0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ecd4: push dword ptr [ebp*4 + 0xa4374c] */ { u32 v = R32((u32)(r_ebp*4+0xa4374cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ecdb: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x41ece0u); f_00520c98();
    /* 0041ece0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ece1: ret  */ FN_RET(0x0041ecb4); r_esp += 4; return;
}

void f_0041ece4(void) /* sub_41ECE4 */
{
    FN_ENTER(0x0041ece4);
    /* 0041ece4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041ece5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ece6: mov edi, ecx */ r_edi = r_ecx;
    /* 0041ece8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0041ecec: mov ecx, dword ptr [edi + 0x77c] */ r_ecx = R32((u32)(r_edi+0x77cu));
    /* 0041ecf2: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0041ecf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ecf6: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x41ecfbu); f_006ac1a4();
    /* 0041ecfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ecfd: mov eax, dword ptr [edi + 0x77c] */ r_eax = R32((u32)(r_edi+0x77cu));
    /* 0041ed03: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0041ed09: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0041ed0c: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0041ed0f: mov eax, dword ptr [edi + 0x77c] */ r_eax = R32((u32)(r_edi+0x77cu));
    /* 0041ed15: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0041ed1b: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 0041ed22: mov ecx, dword ptr [edi + 0x77c] */ r_ecx = R32((u32)(r_edi+0x77cu));
    /* 0041ed28: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0041ed2a: lea ebx, [ebx + 0xc] */ r_ebx = (u32)(r_ebx+0xcu);
    /* 0041ed2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed2e: call dword ptr [edi + 0x40] */ { u32 t = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, 0x41ed31u); call_ind(t); }
    /* 0041ed31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041ed32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041ed33: ret 4 */ FN_RET(0x0041ece4); r_esp += 8; return;
}

void f_0041ed38(void) /* sub_41ED38 */
{
    FN_ENTER(0x0041ed38);
    /* 0041ed38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed39: mov ebp, dword ptr [0xa436c4] */ r_ebp = R32((u32)(0xa436c4u));
    /* 0041ed3f: mov edx, dword ptr [0x9a3eec] */ r_edx = R32((u32)(0x9a3eecu));
    /* 0041ed45: mov eax, dword ptr [0xa436b0] */ r_eax = R32((u32)(0xa436b0u));
    /* 0041ed4a: push dword ptr [eax*4 + 0xa43734] */ { u32 v = R32((u32)(r_eax*4+0xa43734u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ed51: push dword ptr [edx*4 + 0xa43738] */ { u32 v = R32((u32)(r_edx*4+0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ed58: push dword ptr [ebp*4 + 0xa4374c] */ { u32 v = R32((u32)(r_ebp*4+0xa4374cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ed5f: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x41ed64u); f_00520c98();
    /* 0041ed64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041ed65: ret  */ FN_RET(0x0041ed38); r_esp += 4; return;
}

void f_0041ed68(void) /* sub_41ED68 */
{
    FN_ENTER(0x0041ed68);
    /* 0041ed68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed6b: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041ed6e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0041ed70: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 0041ed74: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041ed77: ja 0x41f176 */ if ((!fC&&!fZ)) goto L_0041f176;
L_0041ed7d:; BB(0x0041ed7d);
    /* 0041ed7d: mov eax, dword ptr [eax*4 + 0x8fb4e4] */ r_eax = R32((u32)(r_eax*4+0x8fb4e4u));
    /* 0041ed84: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041f176:; BB(0x0041f176);
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041ed68); r_esp += 8; return;
}

void f_0041ed86(void)
{
    FN_ENTER(0x0041ed86);
    /* 0041ed86: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0041ed89: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0041ed8c: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0041ed8f: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 0041ed92: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0041ed95: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0041ed99: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0041ed9d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041ed9e: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x41eda3u); f_007828e4();
    /* 0041eda3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041eda4: fcomp dword ptr [0x8fbeb0] */ fx_compare(ST(0), R_F32((u32)(0x8fbeb0u))); FPOP();
    /* 0041edaa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041edac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041edad: jbe 0x41f176 */ if ((fC||fZ)) goto L_0041f176;
L_0041edb3:; BB(0x0041edb3);
    /* 0041edb3: mov esi, dword ptr [ebp + 0x684] */ r_esi = R32((u32)(r_ebp+0x684u));
    /* 0041edb9: cmp esi, 0x32 */ {  u32 a = r_esi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041edbc: jge 0x41edda */ if ((fS==fO)) goto L_0041edda;
L_0041edbe:; BB(0x0041edbe);
    /* 0041edbe: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41edc3u); f_00420a44();
    /* 0041edc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041edc5: jne 0x41edce */ if (!fZ) goto L_0041edce;
L_0041edc7:; BB(0x0041edc7);
    /* 0041edc7: mov edx, 0x9a3cb0 */ r_edx = 0x9a3cb0u;
    /* 0041edcc: jmp 0x41edf7 */ goto L_0041edf7;
L_0041edce:; BB(0x0041edce);
    /* 0041edce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041edd1: jne 0x41edf7 */ if (!fZ) goto L_0041edf7;
L_0041edd3:; BB(0x0041edd3);
    /* 0041edd3: mov edx, 0x9a3d28 */ r_edx = 0x9a3d28u;
    /* 0041edd8: jmp 0x41edf7 */ goto L_0041edf7;
L_0041edda:; BB(0x0041edda);
    /* 0041edda: add esi, -0x32 */ {  u32 a = r_esi; u32 b = 0xffffffceu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041eddd: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41ede2u); f_00420a44();
    /* 0041ede2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ede4: jne 0x41eded */ if (!fZ) goto L_0041eded;
L_0041ede6:; BB(0x0041ede6);
    /* 0041ede6: mov edx, 0x9a3cf0 */ r_edx = 0x9a3cf0u;
    /* 0041edeb: jmp 0x41edf7 */ goto L_0041edf7;
L_0041eded:; BB(0x0041eded);
    /* 0041eded: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041edf0: jne 0x41edf7 */ if (!fZ) goto L_0041edf7;
L_0041edf2:; BB(0x0041edf2);
    /* 0041edf2: mov edx, 0x9a3d78 */ r_edx = 0x9a3d78u;
L_0041edf7:; BB(0x0041edf7);
    /* 0041edf7: mov edi, dword ptr [ebp + 0x684] */ r_edi = R32((u32)(r_ebp+0x684u));
L_0041edfd:; BB(0x0041edfd);
    /* 0041edfd: mov eax, dword ptr [edx + esi*4] */ r_eax = R32((u32)(r_edx+r_esi*4));
    /* 0041ee00: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041ee03: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ee06: jne 0x41f17f */ if (!fZ) goto L_0041f17f;
L_0041ee0c:; BB(0x0041ee0c);
    /* 0041ee0c: mov dword ptr [ebp + 0x684], 0 */ W32((u32)(r_ebp+0x684u), 0x0u);
    /* 0041ee16: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0041ee18: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041ee1a: jmp 0x41edfd */ goto L_0041edfd;
L_0041f176:; BB(0x0041f176);
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041ed86); r_esp += 8; return;
L_0041f17f:; BB(0x0041f17f);
    /* 0041f17f: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f182: je 0x41f194 */ if (fZ) goto L_0041f194;
L_0041f184:; BB(0x0041f184);
    /* 0041f184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f185: mov dword ptr [ebp + 0x684], edi */ W32((u32)(r_ebp+0x684u), r_edi);
    /* 0041f18b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041f18d: call 0x41a808 */ r_esp -= 4; W32(r_esp, 0x41f192u); f_0041a808();
    /* 0041f192: jmp 0x41f176 */ goto L_0041f176;
L_0041f194:; BB(0x0041f194);
    /* 0041f194: mov dword ptr [ebp + 0x684], 0x32 */ W32((u32)(r_ebp+0x684u), 0x32u);
    /* 0041f19e: mov edi, 0x32 */ r_edi = 0x32u;
    /* 0041f1a3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041f1a5: jmp 0x41edfd */ goto L_0041edfd;
}

void f_0041ee1c(void)
{
    FN_ENTER(0x0041ee1c);
    /* 0041ee1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ee1e: call 0x41f21c */ r_esp -= 4; W32(r_esp, 0x41ee23u); f_0041f21c();
    /* 0041ee23: jmp 0x41f176 */ goto L_0041f176;
L_0041f176:; BB(0x0041f176);
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041ee1c); r_esp += 8; return;
}

void f_0041ee28(void)
{
    FN_ENTER(0x0041ee28);
    /* 0041ee28: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0041ee2e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041ee30: mov eax, 4 */ r_eax = 0x4u;
    /* 0041ee35: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ee38: mov ecx, 0x3000 */ r_ecx = 0x3000u;
    /* 0041ee3d: jle 0x41ee41 */ if ((fZ||fS!=fO)) goto L_0041ee41;
L_0041ee3f:; BB(0x0041ee3f);
    /* 0041ee3f: mov edi, eax */ r_edi = r_eax;
L_0041ee41:; BB(0x0041ee41);
    /* 0041ee41: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41ee46u); f_0082ddd8();
    /* 0041ee46: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0041ee4a: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0041ee4d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41ee52u); f_0082dcbc();
    /* 0041ee52: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0041ee55: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0041ee59: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0041ee61: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41ee66u); f_0082ddd8();
    /* 0041ee66: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0041ee6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041ee6c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0041ee6e: jle 0x41f1bc */ if ((fZ||fS!=fO)) goto L_0041f1bc;
L_0041ee74:; BB(0x0041ee74);
    /* 0041ee74: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 0041ee78: mov esi, eax */ r_esi = r_eax;
    /* 0041ee7a: mov dword ptr [esp + 0x64], ebx */ W32((u32)(r_esp+0x64u), r_ebx);
L_0041ee7e:; BB(0x0041ee7e);
    /* 0041ee7e: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 0041ee85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ee86: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x41ee8bu); f_00520f3c();
    /* 0041ee8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041ee8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ee8e: je 0x41eeec */ if (fZ) goto L_0041eeec;
L_0041ee90:; BB(0x0041ee90);
    /* 0041ee90: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0041ee94: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0041ee97: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0041ee9b: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0041ee9e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0041eea2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0041eea5: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0041eea9: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0041eeac: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x41eeb1u); f_0082f9c4();
    /* 0041eeb1: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0041eeb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041eeb6: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x41eebbu); f_007828e4();
    /* 0041eebb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041eebd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041eec0: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0041eec4: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0041eec8: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x41eecdu); f_0082f9e0();
    /* 0041eecd: fcomp dword ptr [esp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x60u))); FPOP();
    /* 0041eed1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041eed3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041eed4: jbe 0x41eeec */ if ((fC||fZ)) goto L_0041eeec;
L_0041eed6:; BB(0x0041eed6);
    /* 0041eed6: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0041eeda: movzx ebx, word ptr [ebx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0041eede: mov eax, edx */ r_eax = r_edx;
    /* 0041eee0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041eee3: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0041eee7: mov word ptr [esp + eax*2 + 0x24], bx */ W16((u32)(r_esp+r_eax*2+0x24u), (u16)r_ebx);
L_0041eeec:; BB(0x0041eeec);
    /* 0041eeec: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041eeef: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041eef1: jl 0x41ee7e */ if ((fS!=fO)) goto L_0041ee7e;
L_0041eef3:; BB(0x0041eef3);
    /* 0041eef3: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0041eef7: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 0041eefb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0041eefd: jle 0x41f1bc */ if ((fZ||fS!=fO)) goto L_0041f1bc;
L_0041ef03:; BB(0x0041ef03);
    /* 0041ef03: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ef06: je 0x41f1aa */ if (fZ) goto L_0041f1aa;
L_0041ef0c:; BB(0x0041ef0c);
    /* 0041ef0c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ef0e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x41ef13u); f_007751b0();
    /* 0041ef13: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 0041ef17: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 0041ef1b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041ef1d: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0041ef21: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0041ef26: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041ef2b: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041ef30: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0041ef34: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0041ef38: fistp dword ptr [esp + 0x58] */ W32((u32)(r_esp+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 0041ef3c: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0041ef40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ef42: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0041ef46: movzx edx, word ptr [esp + eax*2 + 0x24] */ r_edx = (u32)R16((u32)(r_esp+r_eax*2+0x24u));
    /* 0041ef4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ef4c: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x41ef51u); f_00520fcc();
L_0041ef51:; BB(0x0041ef51);
    /* 0041ef51: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ef53: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x41ef58u); f_005213d8();
    /* 0041ef58: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ef5a: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x41ef5fu); f_00521410();
    /* 0041ef5f: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
L_0041ef65:; BB(0x0041ef65);
    /* 0041ef65: fld dword ptr [0xa436e8] */ FPUSH(R_F32((u32)(0xa436e8u)));
    /* 0041ef6b: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0041ef71: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0041ef73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041ef75: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0041ef77: fstp dword ptr [ebp + 0x39c] */ W_F32((u32)(r_ebp+0x39cu), ST(0)); FPOP();
    /* 0041ef7d: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 0041ef83: mov dword ptr [ebp + 0x3a0], 0 */ W32((u32)(r_ebp+0x3a0u), 0x0u);
    /* 0041ef8d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ef8f: call 0x4235f8 */ r_esp -= 4; W32(r_esp, 0x41ef94u); f_004235f8();
    /* 0041ef94: jmp 0x41f176 */ goto L_0041f176;
L_0041f176:; BB(0x0041f176);
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041ee28); r_esp += 8; return;
L_0041f1aa:; BB(0x0041f1aa);
    /* 0041f1aa: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0041f1af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f1b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041f1b2: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x41f1b7u); f_00520fcc();
    /* 0041f1b7: jmp 0x41ef51 */ goto L_0041ef51;
L_0041f1bc:; BB(0x0041f1bc);
    /* 0041f1bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041f1be: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x41f1c3u); f_00520f68();
    /* 0041f1c3: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0041f1c6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41f1cbu); f_0082dcbc();
    /* 0041f1cb: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0041f1ce: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
    /* 0041f1d4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41f1d9u); f_0082ddd8();
    /* 0041f1d9: fst dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0));
    /* 0041f1df: jmp 0x41ef65 */ goto L_0041ef65;
}

void f_0041ef99(void)
{
    FN_ENTER(0x0041ef99);
    /* 0041ef99: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041ef9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041ef9e: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x41efa4u); call_ind(t); }
    /* 0041efa4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041efa7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041efa9: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x41efafu); call_ind(t); }
    /* 0041efaf: mov ecx, dword ptr [ebp + 0x6e0] */ r_ecx = R32((u32)(r_ebp+0x6e0u));
    /* 0041efb5: call 0x427a58 */ r_esp -= 4; W32(r_esp, 0x41efbau); f_00427a58();
    /* 0041efba: jmp 0x41f176 */ goto L_0041f176;
L_0041f176:; BB(0x0041f176);
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041ef99); r_esp += 8; return;
}

void f_0041efbf(void)
{
    FN_ENTER(0x0041efbf);
    /* 0041efbf: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041efc2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041efc4: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x41efcau); call_ind(t); }
    /* 0041efca: mov dword ptr [ebp + 0x3ec], 2 */ W32((u32)(r_ebp+0x3ecu), 0x2u);
    /* 0041efd4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041efd6: call 0x41a018 */ r_esp -= 4; W32(r_esp, 0x41efdbu); f_0041a018();
    /* 0041efdb: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0041efe1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0041efe4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041efe9: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041efee: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0041eff4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041eff6: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x41effcu); call_ind(t); }
    /* 0041effc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041efff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041f001: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x41f007u); call_ind(t); }
    /* 0041f007: fild dword ptr [ebp + 0x6e4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6e4u)));
    /* 0041f00d: fmul dword ptr [0x8fbf60] */ ST(0) = ST(0) * R_F32((u32)(0x8fbf60u));
    /* 0041f013: fadd dword ptr [0x8fbf64] */ ST(0) = ST(0) + R_F32((u32)(0x8fbf64u));
    /* 0041f019: mov ecx, dword ptr [ebp + 0x6e0] */ r_ecx = R32((u32)(r_ebp+0x6e0u));
    /* 0041f01f: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 0041f025: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041f027: mov dword ptr [ebp + 0x86c], eax */ W32((u32)(r_ebp+0x86cu), r_eax);
    /* 0041f02d: mov dword ptr [ebp + 0x870], eax */ W32((u32)(r_ebp+0x870u), r_eax);
    /* 0041f033: call 0x427bb4 */ r_esp -= 4; W32(r_esp, 0x41f038u); f_00427bb4();
    /* 0041f038: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x41f03du); f_00420a44();
    /* 0041f03d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f040: jne 0x41f176 */ if (!fZ) goto L_0041f176;
L_0041f046:; BB(0x0041f046);
    /* 0041f046: jmp 0x41f1e4 */ goto L_0041f1e4;
L_0041f176:; BB(0x0041f176);
    /* 0041f176: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041f179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f17a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f17b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f17c: ret 4 */ FN_RET(0x0041efbf); r_esp += 8; return;
L_0041f1e4:; BB(0x0041f1e4);
    /* 0041f1e4: mov eax, dword ptr [ebp + 0x6e4] */ r_eax = R32((u32)(r_ebp+0x6e4u));
    /* 0041f1ea: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f1ed: jne 0x41f176 */ if (!fZ) goto L_0041f176;
L_0041f1ef:; BB(0x0041f1ef);
    /* 0041f1ef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f1f2: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0041f1f6: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 0041f1fa: fmul dword ptr [0x8fbf60] */ ST(0) = ST(0) * R_F32((u32)(0x8fbf60u));
    /* 0041f200: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f203: fadd dword ptr [0x8fbf64] */ ST(0) = ST(0) + R_F32((u32)(0x8fbf64u));
    /* 0041f209: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 0041f20f: mov dword ptr [ebp + 0x6e4], eax */ W32((u32)(r_ebp+0x6e4u), r_eax);
    /* 0041f215: jmp 0x41f176 */ goto L_0041f176;
}

