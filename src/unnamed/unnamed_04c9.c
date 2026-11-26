#include "protos.h"

void f_004c92f8(void) /* sub_4C92F8 */
{
    FN_ENTER(0x004c92f8);
    /* 004c92f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c92f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c92fa: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c92fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c92ff: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004c9303: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c9306: ja 0x4c96d2 */ if ((!fC&&!fZ)) goto L_004c96d2;
L_004c930c:; BB(0x004c930c);
    /* 004c930c: mov eax, dword ptr [eax*4 + 0x907d2c] */ r_eax = R32((u32)(r_eax*4+0x907d2cu));
    /* 004c9313: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c96d2:; BB(0x004c96d2);
    /* 004c96d2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c96d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c96d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c96d7: ret 4 */ FN_RET(0x004c92f8); r_esp += 8; return;
}

void f_004c9315(void)
{
    FN_ENTER(0x004c9315);
    /* 004c9315: mov eax, dword ptr [ebp + 0x8b0] */ r_eax = R32((u32)(r_ebp+0x8b0u));
    /* 004c931b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c931d: jne 0x4c9333 */ if (!fZ) goto L_004c9333;
L_004c931f:; BB(0x004c931f);
    /* 004c931f: mov eax, dword ptr [ebp + 0x85c] */ r_eax = R32((u32)(r_ebp+0x85cu));
    /* 004c9325: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9328: jne 0x4c96d2 */ if (!fZ) goto L_004c96d2;
L_004c932e:; BB(0x004c932e);
    /* 004c932e: jmp 0x4c96da */ goto L_004c96da;
L_004c9333:; BB(0x004c9333);
    /* 004c9333: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c9339: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c933b: je 0x4c934c */ if (fZ) goto L_004c934c;
L_004c933d:; BB(0x004c933d);
    /* 004c933d: mov edx, dword ptr [ebp + 0x67c] */ r_edx = R32((u32)(r_ebp+0x67cu));
    /* 004c9343: mov eax, edx */ r_eax = r_edx;
    /* 004c9345: mov edi, 0x9080e0 */ r_edi = 0x9080e0u;
    /* 004c934a: jmp 0x4c9368 */ goto L_004c9368;
L_004c934c:; BB(0x004c934c);
    /* 004c934c: mov edx, dword ptr [ebp + 0x67c] */ r_edx = R32((u32)(r_ebp+0x67cu));
    /* 004c9352: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9355: jge 0x4c9360 */ if ((fS==fO)) goto L_004c9360;
L_004c9357:; BB(0x004c9357);
    /* 004c9357: mov eax, edx */ r_eax = r_edx;
    /* 004c9359: mov edi, 0x9088c0 */ r_edi = 0x9088c0u;
    /* 004c935e: jmp 0x4c9368 */ goto L_004c9368;
L_004c9360:; BB(0x004c9360);
    /* 004c9360: lea eax, [edx - 0x32] */ r_eax = (u32)(r_edx+0xffffffceu);
    /* 004c9363: mov edi, 0x908160 */ r_edi = 0x908160u;
L_004c9368:; BB(0x004c9368);
    /* 004c9368: mov eax, dword ptr [edi + eax*4] */ r_eax = R32((u32)(r_edi+r_eax*4));
    /* 004c936b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c936e: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9371: jne 0x4c9758 */ if (!fZ) goto L_004c9758;
L_004c9377:; BB(0x004c9377);
    /* 004c9377: mov dword ptr [ebp + 0x67c], 0 */ W32((u32)(r_ebp+0x67cu), 0x0u);
    /* 004c9381: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c9383: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9385: jmp 0x4c9368 */ goto L_004c9368;
L_004c96d2:; BB(0x004c96d2);
    /* 004c96d2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c96d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c96d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c96d7: ret 4 */ FN_RET(0x004c9315); r_esp += 8; return;
L_004c96da:; BB(0x004c96da);
    /* 004c96da: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c96e0: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c96e2: je 0x4c96f3 */ if (fZ) goto L_004c96f3;
L_004c96e4:; BB(0x004c96e4);
    /* 004c96e4: mov edx, dword ptr [ebp + 0x67c] */ r_edx = R32((u32)(r_ebp+0x67cu));
    /* 004c96ea: mov eax, edx */ r_eax = r_edx;
    /* 004c96ec: mov edi, 0x9080e0 */ r_edi = 0x9080e0u;
    /* 004c96f1: jmp 0x4c970f */ goto L_004c970f;
L_004c96f3:; BB(0x004c96f3);
    /* 004c96f3: mov edx, dword ptr [ebp + 0x67c] */ r_edx = R32((u32)(r_ebp+0x67cu));
    /* 004c96f9: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c96fc: jge 0x4c9707 */ if ((fS==fO)) goto L_004c9707;
L_004c96fe:; BB(0x004c96fe);
    /* 004c96fe: mov eax, edx */ r_eax = r_edx;
    /* 004c9700: mov edi, 0x9088c0 */ r_edi = 0x9088c0u;
    /* 004c9705: jmp 0x4c970f */ goto L_004c970f;
L_004c9707:; BB(0x004c9707);
    /* 004c9707: lea eax, [edx - 0x32] */ r_eax = (u32)(r_edx+0xffffffceu);
    /* 004c970a: mov edi, 0x908160 */ r_edi = 0x908160u;
L_004c970f:; BB(0x004c970f);
    /* 004c970f: mov eax, dword ptr [edi + eax*4] */ r_eax = R32((u32)(r_edi+r_eax*4));
    /* 004c9712: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c9715: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9718: jne 0x4c972a */ if (!fZ) goto L_004c972a;
L_004c971a:; BB(0x004c971a);
    /* 004c971a: mov dword ptr [ebp + 0x67c], 0 */ W32((u32)(r_ebp+0x67cu), 0x0u);
    /* 004c9724: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c9726: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9728: jmp 0x4c970f */ goto L_004c970f;
L_004c972a:; BB(0x004c972a);
    /* 004c972a: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c972d: je 0x4c9745 */ if (fZ) goto L_004c9745;
L_004c972f:; BB(0x004c972f);
    /* 004c972f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c9730: mov dword ptr [ebp + 0x67c], edx */ W32((u32)(r_ebp+0x67cu), r_edx);
    /* 004c9736: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9738: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c973du); f_004c3074();
    /* 004c973d: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9740: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9741: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9742: ret 4 */ FN_RET(0x004c9315); r_esp += 8; return;
L_004c9745:; BB(0x004c9745);
    /* 004c9745: mov dword ptr [ebp + 0x67c], 0x32 */ W32((u32)(r_ebp+0x67cu), 0x32u);
    /* 004c974f: mov edx, 0x32 */ r_edx = 0x32u;
    /* 004c9754: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9756: jmp 0x4c970f */ goto L_004c970f;
L_004c9758:; BB(0x004c9758);
    /* 004c9758: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c975b: je 0x4c977d */ if (fZ) goto L_004c977d;
L_004c975d:; BB(0x004c975d);
    /* 004c975d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c975e: mov dword ptr [ebp + 0x67c], edx */ W32((u32)(r_ebp+0x67cu), r_edx);
    /* 004c9764: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9766: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c976bu); f_004c3074();
    /* 004c976b: mov dword ptr [ebp + 0x8b0], 0 */ W32((u32)(r_ebp+0x8b0u), 0x0u);
    /* 004c9775: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9779: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c977a: ret 4 */ FN_RET(0x004c9315); r_esp += 8; return;
L_004c977d:; BB(0x004c977d);
    /* 004c977d: mov dword ptr [ebp + 0x67c], 0x32 */ W32((u32)(r_ebp+0x67cu), 0x32u);
    /* 004c9787: mov edx, 0x32 */ r_edx = 0x32u;
    /* 004c978c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c978e: jmp 0x4c9368 */ goto L_004c9368;
}

void f_004c9387(void)
{
    FN_ENTER(0x004c9387);
    /* 004c9387: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9389: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4c938eu); f_007751b0();
    /* 004c938e: fld dword ptr [0x908524] */ FPUSH(R_F32((u32)(0x908524u)));
    /* 004c9394: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c9396: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c939a: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c939f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c93a4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c93a8: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c93ac: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c93b0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c93b4: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 004c93b8: mov ecx, edi */ r_ecx = r_edi;
    /* 004c93ba: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c93bfu); f_0082dcbc();
    /* 004c93bf: fld dword ptr [0xa4855c] */ FPUSH(R_F32((u32)(0xa4855cu)));
    /* 004c93c5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c93c7: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c93ca: mov ecx, edi */ r_ecx = r_edi;
    /* 004c93cc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c93d1u); f_0082ddd8();
    /* 004c93d1: fld dword ptr [0xa4855c] */ FPUSH(R_F32((u32)(0xa4855cu)));
    /* 004c93d7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c93d9: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c93dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c93de: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c93e3u); f_004c32c4();
    /* 004c93e3: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c93e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c93e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c93e8: ret 4 */ FN_RET(0x004c9387); r_esp += 8; return;
}

void f_004c93eb(void)
{
    FN_ENTER(0x004c93eb);
    /* 004c93eb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c93ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c93f0: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x4c93f6u); call_ind(t); }
    /* 004c93f6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c93f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c93fb: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x4c9401u); call_ind(t); }
    /* 004c9401: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9404: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9405: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9406: ret 4 */ FN_RET(0x004c93eb); r_esp += 8; return;
}

void f_004c9409(void)
{
    FN_ENTER(0x004c9409);
    /* 004c9409: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c940c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c940e: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4c9414u); call_ind(t); }
    /* 004c9414: mov dword ptr [ebp + 0x3ec], 2 */ W32((u32)(r_ebp+0x3ecu), 0x2u);
    /* 004c941e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9420: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4c9425u); f_004c473c();
    /* 004c9425: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c942b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004c942e: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c9431: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c9434: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c943a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c943c: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4c9442u); call_ind(t); }
    /* 004c9442: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c9445: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9447: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c944du); call_ind(t); }
    /* 004c944d: mov edx, dword ptr [ebp + 0x688] */ r_edx = R32((u32)(r_ebp+0x688u));
    /* 004c9453: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004c9456: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9458: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c945a: jle 0x4c946c */ if ((fZ||fS!=fO)) goto L_004c946c;
L_004c945c:; BB(0x004c945c);
    /* 004c945c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004c945e: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004c9461: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004c9464: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c9467: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c946a: jl 0x4c945c */ if ((fS!=fO)) goto L_004c945c;
L_004c946c:; BB(0x004c946c);
    /* 004c946c: fld dword ptr [0x908520] */ FPUSH(R_F32((u32)(0x908520u)));
    /* 004c9472: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9474: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004c9477: fild dword ptr [ebp + 0x6d8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6d8u)));
    /* 004c947d: fmul dword ptr [0x90892c] */ ST(0) = ST(0) * R_F32((u32)(0x90892cu));
    /* 004c9483: fadd dword ptr [0x908930] */ ST(0) = ST(0) + R_F32((u32)(0x908930u));
    /* 004c9489: mov dword ptr [ebp + 0x85c], eax */ W32((u32)(r_ebp+0x85cu), r_eax);
    /* 004c948f: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c9495: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c9497: fstp dword ptr [ebp + 0x874] */ W_F32((u32)(r_ebp+0x874u), ST(0)); FPOP();
    /* 004c949d: mov dword ptr [ebp + 0x860], eax */ W32((u32)(r_ebp+0x860u), r_eax);
    /* 004c94a3: mov dword ptr [ebp + 0x87c], 0x43af0000 */ W32((u32)(r_ebp+0x87cu), 0x43af0000u);
    /* 004c94ad: mov dword ptr [ebp + 0x86c], eax */ W32((u32)(r_ebp+0x86cu), r_eax);
    /* 004c94b3: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c94b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c94b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c94b8: ret 4 */ FN_RET(0x004c9409); r_esp += 8; return;
}

void f_004c94bb(void)
{
    FN_ENTER(0x004c94bb);
    /* 004c94bb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c94bd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c94bf: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c94c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c94c4: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c94cau); call_ind(t); }
    /* 004c94ca: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c94ce: mov edi, dword ptr [ebp + 0x67c] */ r_edi = R32((u32)(r_ebp+0x67cu));
    /* 004c94d4: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c94da: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c94df: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c94e6: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c94ea: mov word ptr [esp + 6], di */ W16((u32)(r_esp+0x6u), (u16)r_edi);
    /* 004c94ef: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004c94f4: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c94f9: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c94fe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c9502: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c9508: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c950c: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c9510: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c9515u); f_008587a5();
    /* 004c9515: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c9519: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c951d: fdiv dword ptr [0x908518] */ ST(0) = ST(0) / R_F32((u32)(0x908518u));
    /* 004c9523: fmul dword ptr [0x90851c] */ ST(0) = ST(0) * R_F32((u32)(0x90851cu));
    /* 004c9529: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c952c: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c9530: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c9535: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c953a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c953e: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c9542: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c9546: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c954a: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004c954e: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c9552: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c9557u); f_008003e0();
    /* 004c9557: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c955a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c955b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c955c: ret 4 */ FN_RET(0x004c94bb); r_esp += 8; return;
}

void f_004c955f(void)
{
    FN_ENTER(0x004c955f);
    /* 004c955f: mov eax, dword ptr [ebp + 0x85c] */ r_eax = R32((u32)(r_ebp+0x85cu));
    /* 004c9565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9567: je 0x4c9659 */ if (fZ) goto L_004c9659;
L_004c956d:; BB(0x004c956d);
    /* 004c956d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9570: jne 0x4c96d2 */ if (!fZ) goto L_004c96d2;
L_004c9576:; BB(0x004c9576);
    /* 004c9576: fld dword ptr [ebp + 0x874] */ FPUSH(R_F32((u32)(r_ebp+0x874u)));
    /* 004c957c: fdiv dword ptr [ebp + 0x87c] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x87cu));
    /* 004c9582: fmul dword ptr [0x908524] */ ST(0) = ST(0) * R_F32((u32)(0x908524u));
    /* 004c9588: fdiv dword ptr [0x908514] */ ST(0) = ST(0) / R_F32((u32)(0x908514u));
    /* 004c958e: mov ecx, dword ptr [ebp + 0x86c] */ r_ecx = R32((u32)(r_ebp+0x86cu));
    /* 004c9594: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c9598: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c959d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c95a2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c95a6: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c95aa: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c95ae: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c95b2: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 004c95b6: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c95b8: mov dword ptr [ebp + 0x86c], ecx */ W32((u32)(r_ebp+0x86cu), r_ecx);
    /* 004c95be: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c95c3u); f_0082dcbc();
    /* 004c95c3: fld dword ptr [ebp + 0x87c] */ FPUSH(R_F32((u32)(r_ebp+0x87cu)));
    /* 004c95c9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c95cb: mov ecx, dword ptr [ebp + 0x86c] */ r_ecx = R32((u32)(r_ebp+0x86cu));
    /* 004c95d1: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c95d4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c95d9u); f_0082ddd8();
    /* 004c95d9: fld dword ptr [ebp + 0x87c] */ FPUSH(R_F32((u32)(r_ebp+0x87cu)));
    /* 004c95df: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c95e1: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c95e4: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 004c95e8: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c95ec: fmul dword ptr [0x908510] */ ST(0) = ST(0) * R_F32((u32)(0x908510u));
    /* 004c95f2: fadd dword ptr [ebp + 0x87c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x87cu));
    /* 004c95f8: fcom dword ptr [0x90850c] */ fx_compare(ST(0), R_F32((u32)(0x90850cu))); 
    /* 004c95fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c9600: fstp dword ptr [ebp + 0x87c] */ W_F32((u32)(r_ebp+0x87cu), ST(0)); FPOP();
    /* 004c9606: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c9607: jae 0x4c9613 */ if (!fC) goto L_004c9613;
L_004c9609:; BB(0x004c9609);
    /* 004c9609: mov dword ptr [ebp + 0x85c], 2 */ W32((u32)(r_ebp+0x85cu), 0x2u);
L_004c9613:; BB(0x004c9613);
    /* 004c9613: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c9619: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c961c: mov dword ptr [ebp + 0x860], eax */ W32((u32)(r_ebp+0x860u), r_eax);
    /* 004c9622: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9625: jle 0x4c9638 */ if ((fZ||fS!=fO)) goto L_004c9638;
L_004c9627:; BB(0x004c9627);
    /* 004c9627: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9629: call 0x41a874 */ r_esp -= 4; W32(r_esp, 0x4c962eu); f_0041a874();
    /* 004c962e: mov dword ptr [ebp + 0x860], 0 */ W32((u32)(r_ebp+0x860u), 0x0u);
L_004c9638:; BB(0x004c9638);
    /* 004c9638: lea edx, [ebp + 0x63c] */ r_edx = (u32)(r_ebp+0x63cu);
    /* 004c963e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c9641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c9642: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c9643: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c9644: push 0x412 */ { u32 v = 0x412u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9649: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4c964eu); f_008144b0();
    /* 004c964e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c9651: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9656: ret 4 */ FN_RET(0x004c955f); r_esp += 8; return;
L_004c9659:; BB(0x004c9659);
    /* 004c9659: mov edx, dword ptr [ebp + 0x860] */ r_edx = R32((u32)(r_ebp+0x860u));
    /* 004c965f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c9662: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004c9666: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c966a: fcomp dword ptr [0x9086b8] */ fx_compare(ST(0), R_F32((u32)(0x9086b8u))); FPOP();
    /* 004c9670: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c9672: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c9673: jae 0x4c9683 */ if (!fC) goto L_004c9683;
L_004c9675:; BB(0x004c9675);
    /* 004c9675: mov dword ptr [ebp + 0x860], edx */ W32((u32)(r_ebp+0x860u), r_edx);
    /* 004c967b: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c967e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c967f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9680: ret 4 */ FN_RET(0x004c955f); r_esp += 8; return;
L_004c9683:; BB(0x004c9683);
    /* 004c9683: mov dword ptr [ebp + 0x860], 0 */ W32((u32)(r_ebp+0x860u), 0x0u);
    /* 004c968d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c968f: mov dword ptr [ebp + 0x85c], 1 */ W32((u32)(r_ebp+0x85cu), 0x1u);
    /* 004c9699: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c969eu); f_004c32b0();
    /* 004c969e: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004c96a1: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004c96a4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c96a6: fmul qword ptr [0x908208] */ ST(0) = ST(0) * R_F64((u32)(0x908208u));
    /* 004c96ac: fdiv qword ptr [0x908200] */ ST(0) = ST(0) / R_F64((u32)(0x908200u));
    /* 004c96b2: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c96b6: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c96bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c96c0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c96c4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c96c8: fistp dword ptr [ebp + 0x86c] */ W32((u32)(r_ebp+0x86cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c96ce: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
L_004c96d2:; BB(0x004c96d2);
    /* 004c96d2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c96d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c96d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c96d7: ret 4 */ FN_RET(0x004c955f); r_esp += 8; return;
}

void f_004c96d2(void)
{
    FN_ENTER(0x004c96d2);
    /* 004c96d2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c96d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c96d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c96d7: ret 4 */ FN_RET(0x004c96d2); r_esp += 8; return;
}

void f_004c9794(void) /* sub_4C9794 */
{
    FN_ENTER(0x004c9794);
    /* 004c9794: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c9795: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c9798: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c979a: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004c979e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c97a1: ja 0x4c9997 */ if ((!fC&&!fZ)) goto L_004c9997;
L_004c97a7:; BB(0x004c97a7);
    /* 004c97a7: mov eax, dword ptr [eax*4 + 0x907d5c] */ r_eax = R32((u32)(r_eax*4+0x907d5cu));
    /* 004c97ae: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c9997:; BB(0x004c9997);
    /* 004c9997: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c999a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c999b: ret 4 */ FN_RET(0x004c9794); r_esp += 8; return;
}

void f_004c97b0(void)
{
    FN_ENTER(0x004c97b0);
    /* 004c97b0: fld dword ptr [ebp + 0x698] */ FPUSH(R_F32((u32)(r_ebp+0x698u)));
    /* 004c97b6: fld dword ptr [ebp + 0x69c] */ FPUSH(R_F32((u32)(r_ebp+0x69cu)));
    /* 004c97bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c97be: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c97c2: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c97c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c97cc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c97d0: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c97d4: fistp dword ptr [ebp + 0x768] */ W32((u32)(r_ebp+0x768u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c97da: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c97de: fcomp dword ptr [0x908508] */ fx_compare(ST(0), R_F32((u32)(0x908508u))); FPOP();
    /* 004c97e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c97e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c97e7: jbe 0x4c97fa */ if ((fC||fZ)) goto L_004c97fa;
L_004c97e9:; BB(0x004c97e9);
    /* 004c97e9: mov dword ptr [ebp + 0x86c], 0x180 */ W32((u32)(r_ebp+0x86cu), 0x180u);
    /* 004c97f3: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c97f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c97f7: ret 4 */ FN_RET(0x004c97b0); r_esp += 8; return;
L_004c97fa:; BB(0x004c97fa);
    /* 004c97fa: mov dword ptr [ebp + 0x86c], 0xfffffe80 */ W32((u32)(r_ebp+0x86cu), 0xfffffe80u);
    /* 004c9804: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9807: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9808: ret 4 */ FN_RET(0x004c97b0); r_esp += 8; return;
}

void f_004c980b(void)
{
    FN_ENTER(0x004c980b);
    /* 004c980b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c980d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4c9812u); f_007751b0();
    /* 004c9812: fld dword ptr [0x908504] */ FPUSH(R_F32((u32)(0x908504u)));
    /* 004c9818: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c981a: fstp dword ptr [ebp + 0x690] */ W_F32((u32)(r_ebp+0x690u), ST(0)); FPOP();
    /* 004c9820: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9822: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4c9827u); f_00520bf4();
    /* 004c9827: fstp dword ptr [ebp + 0x694] */ W_F32((u32)(r_ebp+0x694u), ST(0)); FPOP();
    /* 004c982d: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9830: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9831: ret 4 */ FN_RET(0x004c980b); r_esp += 8; return;
}

void f_004c9834(void)
{
    FN_ENTER(0x004c9834);
    /* 004c9834: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004c9837: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004c983c: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004c9843: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9845: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c984bu); call_ind(t); }
    /* 004c984b: mov dword ptr [ebp + 0x3ec], 2 */ W32((u32)(r_ebp+0x3ecu), 0x2u);
    /* 004c9855: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9857: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4c985cu); f_004c473c();
    /* 004c985c: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c9862: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004c9865: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c9868: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c986b: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c9871: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9873: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4c9879u); call_ind(t); }
    /* 004c9879: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c987c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c987e: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c9884u); call_ind(t); }
    /* 004c9884: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9886: call 0x4c99ac */ r_esp -= 4; W32(r_esp, 0x4c988bu); f_004c99ac();
    /* 004c988b: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c988e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c988f: ret 4 */ FN_RET(0x004c9834); r_esp += 8; return;
}

void f_004c9892(void)
{
    FN_ENTER(0x004c9892);
    /* 004c9892: mov eax, dword ptr [ebp + 0x85c] */ r_eax = R32((u32)(r_ebp+0x85cu));
    /* 004c9898: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c989d: jge 0x4c98bd */ if ((fS==fO)) goto L_004c98bd;
L_004c989f:; BB(0x004c989f);
    /* 004c989f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c98a5: mov eax, dword ptr [ebp + 0x6e0] */ r_eax = R32((u32)(r_ebp+0x6e0u));
    /* 004c98ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c98ad: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c98b0: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c98b5u); f_004c6c54();
    /* 004c98b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c98b7: je 0x4c9997 */ if (fZ) goto L_004c9997;
L_004c98bd:; BB(0x004c98bd);
    /* 004c98bd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c98bf: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 004c98c1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c98c4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c98c6: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c98ccu); call_ind(t); }
    /* 004c98cc: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c98d0: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c98d6: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c98da: mov edx, 0x26 */ r_edx = 0x26u;
    /* 004c98df: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c98e4: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c98e9: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c98ef: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c98f4: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c98f9: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c9900: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c9904: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c990a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c990e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c9912: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c9917u); f_008587a5();
    /* 004c9917: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004c991b: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004c991f: fdiv dword ptr [0x9084fc] */ ST(0) = ST(0) / R_F32((u32)(0x9084fcu));
    /* 004c9925: fmul dword ptr [0x908500] */ ST(0) = ST(0) * R_F32((u32)(0x908500u));
    /* 004c992b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c992e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c9932: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c9937: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c993c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c9940: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c9944: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c9948: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c994c: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004c9950: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c9954: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c9959u); f_008003e0();
    /* 004c9959: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c995c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c995d: ret 4 */ FN_RET(0x004c9892); r_esp += 8; return;
L_004c9997:; BB(0x004c9997);
    /* 004c9997: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c999a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c999b: ret 4 */ FN_RET(0x004c9892); r_esp += 8; return;
}

void f_004c9960(void)
{
    FN_ENTER(0x004c9960);
    /* 004c9960: mov edx, dword ptr [ebp + 0x86c] */ r_edx = R32((u32)(r_ebp+0x86cu));
    /* 004c9966: mov eax, dword ptr [ebp + 0x768] */ r_eax = R32((u32)(r_ebp+0x768u));
    /* 004c996c: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 004c996f: mov dword ptr [ebp + 0x768], ecx */ W32((u32)(r_ebp+0x768u), r_ecx);
    /* 004c9975: mov ecx, dword ptr [ebp + 0x86c] */ r_ecx = R32((u32)(r_ebp+0x86cu));
    /* 004c997b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004c997d: jl 0x4c999e */ if ((fS!=fO)) goto L_004c999e;
L_004c997f:; BB(0x004c997f);
    /* 004c997f: lea eax, [edx + eax + 0x9800] */ r_eax = (u32)(r_edx+r_eax+0x9800u);
    /* 004c9986: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
L_004c9989:; BB(0x004c9989);
    /* 004c9989: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c998b: call 0x4c99ac */ r_esp -= 4; W32(r_esp, 0x4c9990u); f_004c99ac();
    /* 004c9990: add dword ptr [ebp + 0x85c], 1 */ { u32 ad = (u32)(r_ebp+0x85cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c9997: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c999a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c999b: ret 4 */ FN_RET(0x004c9960); r_esp += 8; return;
L_004c999e:; BB(0x004c999e);
    /* 004c999e: lea eax, [edx + eax - 0x9800] */ r_eax = (u32)(r_edx+r_eax+0xffff6800u);
    /* 004c99a5: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 004c99a8: jmp 0x4c9989 */ goto L_004c9989;
}

void f_004c9997(void)
{
    FN_ENTER(0x004c9997);
    /* 004c9997: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c999a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c999b: ret 4 */ FN_RET(0x004c9997); r_esp += 8; return;
}

void f_004c99ac(void) /* sub_4C99AC */
{
    FN_ENTER(0x004c99ac);
    /* 004c99ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c99ad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c99af: mov ecx, dword ptr [ebp + 0x768] */ r_ecx = R32((u32)(r_ebp+0x768u));
    /* 004c99b5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c99bau); f_0082dcbc();
    /* 004c99ba: fld dword ptr [0x9084f8] */ FPUSH(R_F32((u32)(0x9084f8u)));
    /* 004c99c0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c99c2: mov ecx, dword ptr [ebp + 0x768] */ r_ecx = R32((u32)(r_ebp+0x768u));
    /* 004c99c8: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c99cb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c99d0u); f_0082ddd8();
    /* 004c99d0: fmul dword ptr [0x9084f8] */ ST(0) = ST(0) * R_F32((u32)(0x9084f8u));
    /* 004c99d6: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c99d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c99da: ret  */ FN_RET(0x004c99ac); r_esp += 4; return;
}

void f_004c99dc(void) /* sub_4C99DC */
{
    FN_ENTER(0x004c99dc);
    /* 004c99dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c99dd: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c99e0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c99e2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004c99e6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c99e9: ja 0x4c9bf2 */ if ((!fC&&!fZ)) goto L_004c9bf2;
L_004c99ef:; BB(0x004c99ef);
    /* 004c99ef: mov eax, dword ptr [eax*4 + 0x907d8c] */ r_eax = R32((u32)(r_eax*4+0x907d8cu));
    /* 004c99f6: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c9bf2:; BB(0x004c9bf2);
    /* 004c9bf2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9bf6: ret 4 */ FN_RET(0x004c99dc); r_esp += 8; return;
}

void f_004c99f8(void)
{
    FN_ENTER(0x004c99f8);
    /* 004c99f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c99fa: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c99ffu); f_004c32b0();
    /* 004c99ff: jmp 0x4c9bf2 */ goto L_004c9bf2;
L_004c9bf2:; BB(0x004c9bf2);
    /* 004c9bf2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9bf6: ret 4 */ FN_RET(0x004c99f8); r_esp += 8; return;
}

void f_004c9a04(void)
{
    FN_ENTER(0x004c9a04);
    /* 004c9a04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9a06: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c9a0bu); f_004c32c4();
    /* 004c9a0b: jmp 0x4c9bf2 */ goto L_004c9bf2;
L_004c9bf2:; BB(0x004c9bf2);
    /* 004c9bf2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9bf6: ret 4 */ FN_RET(0x004c9a04); r_esp += 8; return;
}

void f_004c9a10(void)
{
    FN_ENTER(0x004c9a10);
    /* 004c9a10: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004c9a13: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004c9a18: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004c9a1f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9a21: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c9a27u); call_ind(t); }
    /* 004c9a27: mov dword ptr [ebp + 0x3ec], 2 */ W32((u32)(r_ebp+0x3ecu), 0x2u);
    /* 004c9a31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9a33: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4c9a38u); f_004c473c();
    /* 004c9a38: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c9a3e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004c9a41: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c9a44: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c9a47: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c9a4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9a4f: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4c9a55u); call_ind(t); }
    /* 004c9a55: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c9a58: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9a5a: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c9a60u); call_ind(t); }
    /* 004c9a60: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004c9a63: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004c9a66: mov dword ptr [ebp + 0x874], 0 */ W32((u32)(r_ebp+0x874u), 0x0u);
    /* 004c9a70: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c9a72: fchs  */ ST(0) = -ST(0);
    /* 004c9a74: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
    /* 004c9a7a: mov dword ptr [ebp + 0x3ac], 0 */ W32((u32)(r_ebp+0x3acu), 0x0u);
    /* 004c9a84: fchs  */ ST(0) = -ST(0);
    /* 004c9a86: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 004c9a8c: lea edx, [ebp + 0x3a8] */ r_edx = (u32)(r_ebp+0x3a8u);
    /* 004c9a92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c9a93: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c9a98u); f_007828e4();
    /* 004c9a98: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c9a9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c9a9d: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 004c9aa3: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 004c9aa9: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c9aab: fmul qword ptr [0x9081f8] */ ST(0) = ST(0) * R_F64((u32)(0x9081f8u));
    /* 004c9ab1: fdiv qword ptr [0x9081f0] */ ST(0) = ST(0) / R_F64((u32)(0x9081f0u));
    /* 004c9ab7: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c9abb: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c9ac0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c9ac5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c9ac9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c9acd: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c9ad0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c9ad4: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ad7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9ad8: ret 4 */ FN_RET(0x004c9a10); r_esp += 8; return;
}

void f_004c9adb(void)
{
    FN_ENTER(0x004c9adb);
    /* 004c9adb: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c9ae1: fcomp dword ptr [0x9084e8] */ fx_compare(ST(0), R_F32((u32)(0x9084e8u))); FPOP();
    /* 004c9ae7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c9ae9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c9aea: jb 0x4c9bf2 */ if (fC) goto L_004c9bf2;
L_004c9af0:; BB(0x004c9af0);
    /* 004c9af0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9af2: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9af4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c9af7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c9af9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c9affu); call_ind(t); }
    /* 004c9aff: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c9b03: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c9b09: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c9b0d: mov edx, 0x13 */ r_edx = 0x13u;
    /* 004c9b12: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c9b17: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c9b1c: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c9b22: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c9b27: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c9b2c: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c9b33: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c9b37: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c9b3d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c9b41: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c9b45: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c9b4au); f_008587a5();
    /* 004c9b4a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004c9b4e: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 004c9b52: fdiv dword ptr [0x9084ec] */ ST(0) = ST(0) / R_F32((u32)(0x9084ecu));
    /* 004c9b58: fmul dword ptr [0x9084f0] */ ST(0) = ST(0) * R_F32((u32)(0x9084f0u));
    /* 004c9b5e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c9b61: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c9b65: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c9b6a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c9b6f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c9b73: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c9b77: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c9b7b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c9b7f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004c9b83: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c9b87: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c9b8cu); f_008003e0();
    /* 004c9b8c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9b8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9b90: ret 4 */ FN_RET(0x004c9adb); r_esp += 8; return;
L_004c9bf2:; BB(0x004c9bf2);
    /* 004c9bf2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9bf6: ret 4 */ FN_RET(0x004c9adb); r_esp += 8; return;
}

void f_004c9b93(void)
{
    FN_ENTER(0x004c9b93);
    /* 004c9b93: fld dword ptr [0x9086bc] */ FPUSH(R_F32((u32)(0x9086bcu)));
    /* 004c9b99: fadd dword ptr [ebp + 0x874] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x874u));
    /* 004c9b9f: fld dword ptr [0x90892c] */ FPUSH(R_F32((u32)(0x90892cu)));
    /* 004c9ba5: fld dword ptr [0x908930] */ FPUSH(R_F32((u32)(0x908930u)));
    /* 004c9bab: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004c9bad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c9baf: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c9bb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c9bb3: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c9bb9: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 004c9bbf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c9bc0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c9bc2: jb 0x4c9bc6 */ if (fC) goto L_004c9bc6;
L_004c9bc4:; BB(0x004c9bc4);
    /* 004c9bc4: fst st(2) */ ST(2) = ST(0);
L_004c9bc6:; BB(0x004c9bc6);
    /* 004c9bc6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c9bc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c9bca: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c9bcc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c9bce: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004c9bd1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c9bd3: fst dword ptr [ebp + 0x874] */ W_F32((u32)(r_ebp+0x874u), ST(0));
    /* 004c9bd9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c9bdb: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c9bde: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004c9be0: fstp dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0)); FPOP();
    /* 004c9be6: fmul dword ptr [ebp + 0x3a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a8u));
    /* 004c9bec: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004c9bef: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c9bf2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9bf6: ret 4 */ FN_RET(0x004c9b93); r_esp += 8; return;
}

void f_004c9bf2(void)
{
    FN_ENTER(0x004c9bf2);
    /* 004c9bf2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c9bf6: ret 4 */ FN_RET(0x004c9bf2); r_esp += 8; return;
}

void f_004c9bfc(void) /* sub_4C9BFC */
{
    FN_ENTER(0x004c9bfc);
    /* 004c9bfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c9bfd: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c9c00: mov edi, ecx */ r_edi = r_ecx;
    /* 004c9c02: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c9c06: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c9c09: ja 0x4c9ed4 */ if ((!fC&&!fZ)) goto L_004c9ed4;
L_004c9c0f:; BB(0x004c9c0f);
    /* 004c9c0f: mov eax, dword ptr [eax*4 + 0x907dbc] */ r_eax = R32((u32)(r_eax*4+0x907dbcu));
    /* 004c9c16: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c9ed4:; BB(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9bfc); r_esp += 8; return;
}

void f_004c9c18(void)
{
    FN_ENTER(0x004c9c18);
    /* 004c9c18: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 004c9c1c: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 004c9c20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9c22: lea ecx, [edi + 0x6e4] */ r_ecx = (u32)(r_edi+0x6e4u);
    /* 004c9c28: mov esi, eax */ r_esi = r_eax;
    /* 004c9c2a: mov ebx, ecx */ r_ebx = r_ecx;
L_004c9c2c:; BB(0x004c9c2c);
    /* 004c9c2c: mov edx, dword ptr [esi + edi + 0x6e4] */ r_edx = R32((u32)(r_esi+r_edi+0x6e4u));
    /* 004c9c33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c9c35: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x4c9c38u); call_ind(t); }
    /* 004c9c38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9c3a: jne 0x4c9f06 */ if (!fZ) goto L_004c9f06;
L_004c9c40:; BB(0x004c9c40);
    /* 004c9c40: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c9c43: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004c9c46: cmp esi, 0x70 */ {  u32 a = r_esi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9c49: jl 0x4c9c2c */ if ((fS!=fO)) goto L_004c9c2c;
L_004c9c4b:; BB(0x004c9c4b);
    /* 004c9c4b: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004c9c4f: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 004c9c53: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c9c59: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c9c5b: je 0x4c9c6c */ if (fZ) goto L_004c9c6c;
L_004c9c5d:; BB(0x004c9c5d);
    /* 004c9c5d: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c9c63: mov ecx, eax */ r_ecx = r_eax;
    /* 004c9c65: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004c9c6a: jmp 0x4c9c88 */ goto L_004c9c88;
L_004c9c6c:; BB(0x004c9c6c);
    /* 004c9c6c: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c9c72: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9c75: jge 0x4c9c80 */ if ((fS==fO)) goto L_004c9c80;
L_004c9c77:; BB(0x004c9c77);
    /* 004c9c77: mov ecx, eax */ r_ecx = r_eax;
    /* 004c9c79: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004c9c7e: jmp 0x4c9c88 */ goto L_004c9c88;
L_004c9c80:; BB(0x004c9c80);
    /* 004c9c80: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004c9c83: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004c9c88:; BB(0x004c9c88);
    /* 004c9c88: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004c9c8b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c9c8e: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9c91: jne 0x4c9edb */ if (!fZ) goto L_004c9edb;
L_004c9c97:; BB(0x004c9c97);
    /* 004c9c97: mov dword ptr [edi + 0x67c], 0 */ W32((u32)(r_edi+0x67cu), 0x0u);
    /* 004c9ca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9ca3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c9ca5: jmp 0x4c9c88 */ goto L_004c9c88;
L_004c9ed4:; BB(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9c18); r_esp += 8; return;
L_004c9edb:; BB(0x004c9edb);
    /* 004c9edb: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9ede: je 0x4c9ef0 */ if (fZ) goto L_004c9ef0;
L_004c9ee0:; BB(0x004c9ee0);
    /* 004c9ee0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c9ee1: mov dword ptr [edi + 0x67c], eax */ W32((u32)(r_edi+0x67cu), r_eax);
    /* 004c9ee7: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9ee9: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c9eeeu); f_004c3074();
    /* 004c9eee: jmp 0x4c9ed4 */ goto L_004c9ed4;
L_004c9ef0:; BB(0x004c9ef0);
    /* 004c9ef0: mov dword ptr [edi + 0x67c], 0x32 */ W32((u32)(r_edi+0x67cu), 0x32u);
    /* 004c9efa: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c9eff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c9f01: jmp 0x4c9c88 */ goto L_004c9c88;
L_004c9f06:; BB(0x004c9f06);
    /* 004c9f06: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004c9f0a: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 004c9f0e: jmp 0x4c9ed4 */ goto L_004c9ed4;
}

void f_004c9ca7(void)
{
    FN_ENTER(0x004c9ca7);
    /* 004c9ca7: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9ca9: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x4c9caeu); f_004c0b50();
    /* 004c9cae: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004c9cb3: mov ecx, dword ptr [edi + 0x85c] */ r_ecx = R32((u32)(r_edi+0x85cu));
    /* 004c9cb9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c9cbc: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c9cbe: mov dword ptr [edi + 0x85c], ecx */ W32((u32)(r_edi+0x85cu), r_ecx);
    /* 004c9cc4: mov eax, ecx */ r_eax = r_ecx;
    /* 004c9cc6: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004c9cc9: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c9ccc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004c9cce: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 004c9cd1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c9cd3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c9cd5: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c9cd7: cmp ecx, 0x13 */ {  u32 a = r_ecx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9cda: jne 0x4c9ed4 */ if (!fZ) goto L_004c9ed4;
L_004c9ce0:; BB(0x004c9ce0);
    /* 004c9ce0: jmp 0x4c9f10 */ goto L_004c9f10;
L_004c9ed4:; BB(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9ca7); r_esp += 8; return;
L_004c9f10:; BB(0x004c9f10);
    /* 004c9f10: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9f12: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x4c9f17u); f_0052126c();
    /* 004c9f17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9f19: je 0x4c9f24 */ if (fZ) goto L_004c9f24;
L_004c9f1b:; BB(0x004c9f1b);
    /* 004c9f1b: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9f1d: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4c9f22u); f_005213d8();
    /* 004c9f22: jmp 0x4c9f30 */ goto L_004c9f30;
L_004c9f24:; BB(0x004c9f24);
    /* 004c9f24: push 0x9088b4 */ { u32 v = 0x9088b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9f29: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9f2b: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4c9f30u); f_005213ec();
L_004c9f30:; BB(0x004c9f30);
    /* 004c9f30: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9f32: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c9f37u); f_004c0b5c();
    /* 004c9f37: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9f39: call 0x4c0a9c */ r_esp -= 4; W32(r_esp, 0x4c9f3eu); f_004c0a9c();
    /* 004c9f3e: jmp 0x4c9ed4 */ goto L_004c9ed4;
}

void f_004c9ce5(void)
{
    FN_ENTER(0x004c9ce5);
    /* 004c9ce5: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9ce7: call 0x4c0b34 */ r_esp -= 4; W32(r_esp, 0x4c9cecu); f_004c0b34();
    /* 004c9cec: jmp 0x4c9ed4 */ goto L_004c9ed4;
L_004c9ed4:; BB(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9ce5); r_esp += 8; return;
}

void f_004c9cf1(void)
{
    FN_ENTER(0x004c9cf1);
    /* 004c9cf1: mov eax, dword ptr [edi + 0x3bc] */ r_eax = R32((u32)(r_edi+0x3bcu));
    /* 004c9cf7: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 004c9cfd: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9cff: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x4c9d04u); f_004c0b50();
    /* 004c9d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9d06: je 0x4c9d11 */ if (fZ) goto L_004c9d11;
L_004c9d08:; BB(0x004c9d08);
    /* 004c9d08: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9d0a: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4c9d0fu); f_005213d8();
    /* 004c9d0f: jmp 0x4c9d1d */ goto L_004c9d1d;
L_004c9d11:; BB(0x004c9d11);
    /* 004c9d11: push 0x9088b4 */ { u32 v = 0x9088b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9d16: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9d18: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4c9d1du); f_005213ec();
L_004c9d1d:; BB(0x004c9d1d);
    /* 004c9d1d: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9d1f: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c9d24u); f_004c0b5c();
    /* 004c9d24: jmp 0x4c9ed4 */ goto L_004c9ed4;
L_004c9ed4:; BB(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9cf1); r_esp += 8; return;
}

void f_004c9d29(void)
{
    FN_ENTER(0x004c9d29);
    /* 004c9d29: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c9d2f: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c9d34: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 004c9d3a: jmp 0x4c9ed4 */ goto L_004c9ed4;
L_004c9ed4:; BB(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9d29); r_esp += 8; return;
}

void f_004c9d3f(void)
{
    FN_ENTER(0x004c9d3f);
    /* 004c9d3f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004c9d41: mov eax, 1 */ r_eax = 0x1u;
    /* 004c9d46: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004c9d4d: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9d4f: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c9d55u); call_ind(t); }
    /* 004c9d55: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 004c9d5f: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9d61: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c9d66u); f_004cb184();
    /* 004c9d66: fld dword ptr [0x9084e0] */ FPUSH(R_F32((u32)(0x9084e0u)));
    /* 004c9d6c: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 004c9d72: mov dword ptr [edi + 0x6f8], 0x3ca3d70a */ W32((u32)(r_edi+0x6f8u), 0x3ca3d70au);
    /* 004c9d7c: and edx, 0xffffffc9 */ {  u32 a = r_edx; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c9d7f: mov dword ptr [edi + 0x714], 0x3ca3d70a */ W32((u32)(r_edi+0x714u), 0x3ca3d70au);
    /* 004c9d89: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004c9d8f: mov dword ptr [edi + 0x3c8], edx */ W32((u32)(r_edi+0x3c8u), r_edx);
    /* 004c9d95: mov dword ptr [edi + 0x730], 0x3ca3d70a */ W32((u32)(r_edi+0x730u), 0x3ca3d70au);
    /* 004c9d9f: mov dword ptr [edi + 0x74c], 0x3ca3d70a */ W32((u32)(r_edi+0x74cu), 0x3ca3d70au);
    /* 004c9da9: mov dword ptr [edi + 0x85c], 0 */ W32((u32)(r_edi+0x85cu), 0x0u);
    /* 004c9db3: mov edx, dword ptr [0xa48500] */ r_edx = R32((u32)(0xa48500u));
    /* 004c9db9: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004c9dbc: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c9dc0: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c9dc5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c9dca: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c9dce: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c9dd2: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c9dd6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c9dda: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004c9dde: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c9de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c9de2: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x4c9de7u); f_00782a34();
    /* 004c9de7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c9dea: fld dword ptr [0x9084dc] */ FPUSH(R_F32((u32)(0x9084dcu)));
    /* 004c9df0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c9df2: fstp dword ptr [edi + 0x874] */ W_F32((u32)(r_edi+0x874u), ST(0)); FPOP();
    /* 004c9df8: jmp 0x4c9ed4 */ goto L_004c9ed4;
L_004c9ed4:; BB(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9d3f); r_esp += 8; return;
}

void f_004c9dfd(void)
{
    FN_ENTER(0x004c9dfd);
    /* 004c9dfd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9dff: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9e01: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c9e03: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9e05: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c9e0bu); call_ind(t); }
    /* 004c9e0b: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c9e0f: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c9e15: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c9e19: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c9e1e: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c9e23: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c9e28: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c9e2e: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c9e33: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c9e38: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c9e3f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c9e43: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c9e49: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c9e4d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c9e51: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c9e56u); f_008587a5();
    /* 004c9e56: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c9e5a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c9e5e: fdiv dword ptr [0x9084d4] */ ST(0) = ST(0) / R_F32((u32)(0x9084d4u));
    /* 004c9e64: fmul dword ptr [0x9084d8] */ ST(0) = ST(0) * R_F32((u32)(0x9084d8u));
    /* 004c9e6a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c9e6d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c9e71: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c9e76: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c9e7b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c9e7f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c9e83: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c9e87: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c9e8b: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004c9e8f: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c9e93: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c9e98u); f_008003e0();
    /* 004c9e98: jmp 0x4c9ed4 */ goto L_004c9ed4;
L_004c9ed4:; BB(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9dfd); r_esp += 8; return;
}

void f_004c9e9a(void)
{
    FN_ENTER(0x004c9e9a);
    /* 004c9e9a: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9e9c: call 0x4c0b78 */ r_esp -= 4; W32(r_esp, 0x4c9ea1u); f_004c0b78();
    /* 004c9ea1: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 004c9ea5: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 004c9ea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9eab: lea ecx, [edi + 0x6e4] */ r_ecx = (u32)(r_edi+0x6e4u);
    /* 004c9eb1: mov esi, eax */ r_esi = r_eax;
    /* 004c9eb3: mov ebx, ecx */ r_ebx = r_ecx;
L_004c9eb5:; BB(0x004c9eb5);
    /* 004c9eb5: mov edx, dword ptr [esi + edi + 0x6e4] */ r_edx = R32((u32)(r_esi+r_edi+0x6e4u));
    /* 004c9ebc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c9ebe: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4c9ec1u); call_ind(t); }
    /* 004c9ec1: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c9ec4: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004c9ec7: cmp esi, 0x70 */ {  u32 a = r_esi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9eca: jl 0x4c9eb5 */ if ((fS!=fO)) goto L_004c9eb5;
L_004c9ecc:; BB(0x004c9ecc);
    /* 004c9ecc: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 004c9ed0: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9e9a); r_esp += 8; return;
}

void f_004c9ed4(void)
{
    FN_ENTER(0x004c9ed4);
    /* 004c9ed4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c9ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c9ed8: ret 4 */ FN_RET(0x004c9ed4); r_esp += 8; return;
}

void f_004c9f40(void) /* sub_4C9F40 */
{
    FN_ENTER(0x004c9f40);
    /* 004c9f40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c9f41: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c9f44: mov esi, ecx */ r_esi = r_ecx;
    /* 004c9f46: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 004c9f4a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c9f4d: ja 0x4ca2b2 */ if ((!fC&&!fZ)) goto L_004ca2b2;
L_004c9f53:; BB(0x004c9f53);
    /* 004c9f53: mov eax, dword ptr [eax*4 + 0x907dec] */ r_eax = R32((u32)(r_eax*4+0x907decu));
    /* 004c9f5a: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004ca2b2:; BB(0x004ca2b2);
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004c9f40); r_esp += 8; return;
}

void f_004c9f5c(void)
{
    FN_ENTER(0x004c9f5c);
    /* 004c9f5c: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 004c9f60: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 004c9f64: lea ecx, [esi + 0x6e4] */ r_ecx = (u32)(r_esi+0x6e4u);
    /* 004c9f6a: lea eax, [esi + 0x754] */ r_eax = (u32)(r_esi+0x754u);
    /* 004c9f70: mov ebx, eax */ r_ebx = r_eax;
    /* 004c9f72: mov edi, ecx */ r_edi = r_ecx;
L_004c9f74:; BB(0x004c9f74);
    /* 004c9f74: mov ecx, edi */ r_ecx = r_edi;
    /* 004c9f76: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x4c9f7bu); f_00577244();
    /* 004c9f7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9f7d: jne 0x4ca2e4 */ if (!fZ) goto L_004ca2e4;
L_004c9f83:; BB(0x004c9f83);
    /* 004c9f83: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c9f86: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9f88: jg 0x4c9f74 */ if ((!fZ&&fS==fO)) goto L_004c9f74;
L_004c9f8a:; BB(0x004c9f8a);
    /* 004c9f8a: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 004c9f8e: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004c9f92: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c9f98: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c9f9a: je 0x4c9fab */ if (fZ) goto L_004c9fab;
L_004c9f9c:; BB(0x004c9f9c);
    /* 004c9f9c: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c9fa2: mov ecx, eax */ r_ecx = r_eax;
    /* 004c9fa4: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004c9fa9: jmp 0x4c9fc7 */ goto L_004c9fc7;
L_004c9fab:; BB(0x004c9fab);
    /* 004c9fab: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c9fb1: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c9fb4: jge 0x4c9fbf */ if ((fS==fO)) goto L_004c9fbf;
L_004c9fb6:; BB(0x004c9fb6);
    /* 004c9fb6: mov ecx, eax */ r_ecx = r_eax;
    /* 004c9fb8: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004c9fbd: jmp 0x4c9fc7 */ goto L_004c9fc7;
L_004c9fbf:; BB(0x004c9fbf);
    /* 004c9fbf: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004c9fc2: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004c9fc7:; BB(0x004c9fc7);
    /* 004c9fc7: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004c9fca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c9fcd: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c9fd0: jne 0x4ca2b9 */ if (!fZ) goto L_004ca2b9;
L_004c9fd6:; BB(0x004c9fd6);
    /* 004c9fd6: mov dword ptr [esi + 0x67c], 0 */ W32((u32)(r_esi+0x67cu), 0x0u);
    /* 004c9fe0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c9fe2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c9fe4: jmp 0x4c9fc7 */ goto L_004c9fc7;
L_004ca2b2:; BB(0x004ca2b2);
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004c9f5c); r_esp += 8; return;
L_004ca2b9:; BB(0x004ca2b9);
    /* 004ca2b9: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca2bc: je 0x4ca2ce */ if (fZ) goto L_004ca2ce;
L_004ca2be:; BB(0x004ca2be);
    /* 004ca2be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ca2bf: mov dword ptr [esi + 0x67c], eax */ W32((u32)(r_esi+0x67cu), r_eax);
    /* 004ca2c5: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca2c7: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4ca2ccu); f_004c3074();
    /* 004ca2cc: jmp 0x4ca2b2 */ goto L_004ca2b2;
L_004ca2ce:; BB(0x004ca2ce);
    /* 004ca2ce: mov dword ptr [esi + 0x67c], 0x32 */ W32((u32)(r_esi+0x67cu), 0x32u);
    /* 004ca2d8: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004ca2dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ca2df: jmp 0x4c9fc7 */ goto L_004c9fc7;
L_004ca2e4:; BB(0x004ca2e4);
    /* 004ca2e4: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 004ca2e8: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 004ca2ec: jmp 0x4ca2b2 */ goto L_004ca2b2;
}

void f_004c9fe6(void)
{
    FN_ENTER(0x004c9fe6);
    /* 004c9fe6: mov ecx, esi */ r_ecx = r_esi;
    /* 004c9fe8: call 0x4c0b34 */ r_esp -= 4; W32(r_esp, 0x4c9fedu); f_004c0b34();
    /* 004c9fed: jmp 0x4ca2b2 */ goto L_004ca2b2;
L_004ca2b2:; BB(0x004ca2b2);
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004c9fe6); r_esp += 8; return;
}

void f_004c9ff2(void)
{
    FN_ENTER(0x004c9ff2);
    /* 004c9ff2: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 004c9ff8: mov dword ptr [esi + 0x3b8], eax */ W32((u32)(r_esi+0x3b8u), r_eax);
    /* 004c9ffe: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca000: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x4ca005u); f_004c0b50();
    /* 004ca005: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ca007: je 0x4ca012 */ if (fZ) goto L_004ca012;
L_004ca009:; BB(0x004ca009);
    /* 004ca009: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca00b: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4ca010u); f_005213d8();
    /* 004ca010: jmp 0x4ca01e */ goto L_004ca01e;
L_004ca012:; BB(0x004ca012);
    /* 004ca012: push 0x9088b4 */ { u32 v = 0x9088b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ca017: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca019: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4ca01eu); f_005213ec();
L_004ca01e:; BB(0x004ca01e);
    /* 004ca01e: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 004ca024: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 004ca027: fld dword ptr [esi + 0x3a4] */ FPUSH(R_F32((u32)(r_esi+0x3a4u)));
    /* 004ca02d: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 004ca030: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ca032: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 004ca035: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ca037: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004ca03b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004ca03d: fmul qword ptr [0x9081e8] */ ST(0) = ST(0) * R_F64((u32)(0x9081e8u));
    /* 004ca043: fdiv qword ptr [0x9081e0] */ ST(0) = ST(0) / R_F64((u32)(0x9081e0u));
    /* 004ca049: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004ca04c: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004ca050: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004ca055: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ca05a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004ca05e: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004ca062: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ca066: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004ca06a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004ca06e: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ca070: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 004ca073: add edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ca079: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ca07f: jle 0x4ca09f */ if ((fZ||fS!=fO)) goto L_004ca09f;
L_004ca081:; BB(0x004ca081);
    /* 004ca081: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ca086u); f_0082dcbc();
    /* 004ca086: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004ca089: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ca08c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ca091u); f_0082ddd8();
    /* 004ca091: fld dword ptr [0x9084cc] */ FPUSH(R_F32((u32)(0x9084ccu)));
    /* 004ca097: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ca099: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004ca09d: jmp 0x4ca0b5 */ goto L_004ca0b5;
L_004ca09f:; BB(0x004ca09f);
    /* 004ca09f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ca0a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ca0a3: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4ca0a8u); f_007828e4();
    /* 004ca0a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ca0a9: fld dword ptr [0x9084d0] */ FPUSH(R_F32((u32)(0x9084d0u)));
    /* 004ca0af: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ca0b1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_004ca0b5:; BB(0x004ca0b5);
    /* 004ca0b5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ca0b7: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 004ca0ba: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004ca0bd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004ca0bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ca0c1: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004ca0c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ca0c6: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 004ca0cc: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 004ca0d2: mov ecx, esi */ r_ecx = r_esi;
    /* 004ca0d4: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4ca0d9u); f_004c0b5c();
    /* 004ca0d9: jmp 0x4ca2b2 */ goto L_004ca2b2;
L_004ca2b2:; BB(0x004ca2b2);
    /* 004ca2b2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ca2b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ca2b6: ret 4 */ FN_RET(0x004c9ff2); r_esp += 8; return;
}

