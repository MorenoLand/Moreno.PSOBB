#include "protos.h"

void f_0067300c(void) /* sub_67300C */
{
    FN_ENTER(0x0067300c);
    /* 0067300c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067300d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067300f: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 00673015: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00673017: jg 0x673025 */ if ((!fZ&&fS==fO)) goto L_00673025;
L_00673019:; BB(0x00673019);
    /* 00673019: mov dword ptr [ebx + 0xd0], 0 */ W32((u32)(r_ebx+0xd0u), 0x0u);
    /* 00673023: jmp 0x67302f */ goto L_0067302f;
L_00673025:; BB(0x00673025);
    /* 00673025: mov dword ptr [ebx + 0xd0], 1 */ W32((u32)(r_ebx+0xd0u), 0x1u);
L_0067302f:; BB(0x0067302f);
    /* 0067302f: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x673034u); f_00670fb8();
    /* 00673034: cmp eax, dword ptr [ebx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067303a: jne 0x673048 */ if (!fZ) goto L_00673048;
L_0067303c:; BB(0x0067303c);
    /* 0067303c: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 00673046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673047: ret  */ FN_RET(0x0067300c); r_esp += 4; return;
L_00673048:; BB(0x00673048);
    /* 00673048: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00673052: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673053: ret  */ FN_RET(0x0067300c); r_esp += 4; return;
}

void f_00673054(void) /* sub_673054 */
{
    FN_ENTER(0x00673054);
    /* 00673054: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673055: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00673057: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x67305cu); f_004f7c84();
    /* 0067305c: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
    /* 00673062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673064: je 0x6730fa */ if (fZ) goto L_006730fa;
L_0067306a:; BB(0x0067306a);
    /* 0067306a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067306d: jne 0x6730a7 */ if (!fZ) goto L_006730a7;
L_0067306f:; BB(0x0067306f);
    /* 0067306f: fld dword ptr [0x93a82c] */ FPUSH(R_F32((u32)(0x93a82cu)));
    /* 00673075: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 0067307b: fcom dword ptr [0x93a828] */ fx_compare(ST(0), R_F32((u32)(0x93a828u))); 
    /* 00673081: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00673083: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00673084: jb 0x67309f */ if (fC) goto L_0067309f;
L_00673086:; BB(0x00673086);
    /* 00673086: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00673088: mov dword ptr [ebp + 0xc8], 3 */ W32((u32)(r_ebp+0xc8u), 0x3u);
    /* 00673092: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00673097: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 0067309d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067309e: ret  */ FN_RET(0x00673054); r_esp += 4; return;
L_0067309f:; BB(0x0067309f);
    /* 0067309f: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 006730a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006730a6: ret  */ FN_RET(0x00673054); r_esp += 4; return;
L_006730a7:; BB(0x006730a7);
    /* 006730a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006730aa: jne 0x6730e1 */ if (!fZ) goto L_006730e1;
L_006730ac:; BB(0x006730ac);
    /* 006730ac: fld dword ptr [0x93a834] */ FPUSH(R_F32((u32)(0x93a834u)));
    /* 006730b2: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 006730b8: fcom dword ptr [0x93a830] */ fx_compare(ST(0), R_F32((u32)(0x93a830u))); 
    /* 006730be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006730c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006730c1: ja 0x6730d9 */ if ((!fC&&!fZ)) goto L_006730d9;
L_006730c3:; BB(0x006730c3);
    /* 006730c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006730c5: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
    /* 006730cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006730d1: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 006730d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006730d8: ret  */ FN_RET(0x00673054); r_esp += 4; return;
L_006730d9:; BB(0x006730d9);
    /* 006730d9: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 006730df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006730e0: ret  */ FN_RET(0x00673054); r_esp += 4; return;
L_006730e1:; BB(0x006730e1);
    /* 006730e1: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x6730e6u); f_00670fb8();
    /* 006730e6: cmp eax, dword ptr [ebp + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006730ec: je 0x673111 */ if (fZ) goto L_00673111;
L_006730ee:; BB(0x006730ee);
    /* 006730ee: mov dword ptr [ebp + 0xc8], 1 */ W32((u32)(r_ebp+0xc8u), 0x1u);
    /* 006730f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006730f9: ret  */ FN_RET(0x00673054); r_esp += 4; return;
L_006730fa:; BB(0x006730fa);
    /* 006730fa: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x6730ffu); f_00670fb8();
    /* 006730ff: cmp eax, dword ptr [ebp + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00673105: jne 0x673111 */ if (!fZ) goto L_00673111;
L_00673107:; BB(0x00673107);
    /* 00673107: mov dword ptr [ebp + 0xc8], 2 */ W32((u32)(r_ebp+0xc8u), 0x2u);
L_00673111:; BB(0x00673111);
    /* 00673111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673112: ret  */ FN_RET(0x00673054); r_esp += 4; return;
}

void f_00673114(void) /* sub_673114 */
{
    FN_ENTER(0x00673114);
    /* 00673114: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673115: mov ebp, esp */ r_ebp = r_esp;
    /* 00673117: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673119: push 0x8e942c */ { u32 v = 0x8e942cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067311e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673125: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067312c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067312f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673132: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673135: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673138: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067313b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00673140: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00673147: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x67314cu); f_008581c5();
    /* 0067314c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067314d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00673150: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673152: je 0x6731a4 */ if (fZ) goto L_006731a4;
L_00673154:; BB(0x00673154);
    /* 00673154: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067315b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673162: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673165: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00673167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067316a: push 0x9c97e8 */ { u32 v = 0x9c97e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067316f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673171: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x673176u); f_005b7a84();
    /* 00673176: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673179: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00673180:; BB(0x00673180);
    /* 00673180: mov dword ptr [0xa8fe24], eax */ W32((u32)(0xa8fe24u), r_eax);
    /* 00673185: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067318c: call 0x671000 */ r_esp -= 4; W32(r_esp, 0x673191u); f_00671000();
    /* 00673191: mov dword ptr [0xa8fe20], eax */ W32((u32)(0xa8fe20u), r_eax);
    /* 00673196: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673199: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006731a0: mov esp, ebp */ r_esp = r_ebp;
    /* 006731a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006731a3: ret  */ FN_RET(0x00673114); r_esp += 4; return;
L_006731a4:; BB(0x006731a4);
    /* 006731a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006731a6: jmp 0x673180 */ goto L_00673180;
}

void f_006731a8(void) /* sub_6731A8 */
{
    FN_ENTER(0x006731a8);
    /* 006731a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006731a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006731ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006731ad: call 0x6731cc */ r_esp -= 4; W32(r_esp, 0x6731b2u); f_006731cc();
    /* 006731b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006731b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006731b8: jne 0x6731be */ if (!fZ) goto L_006731be;
L_006731ba:; BB(0x006731ba);
    /* 006731ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006731bb: ret 4 */ FN_RET(0x006731a8); r_esp += 8; return;
L_006731be:; BB(0x006731be);
    /* 006731be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006731bf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6731c4u); f_005c2f74();
    /* 006731c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006731c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006731c6: ret 4 */ FN_RET(0x006731a8); r_esp += 8; return;
}

void f_006731cc(void) /* sub_6731CC */
{
    FN_ENTER(0x006731cc);
    /* 006731cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006731cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006731cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006731d1: push 0x8e9448 */ { u32 v = 0x8e9448u; r_esp -= 4; W32(r_esp, v); }
    /* 006731d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006731dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006731dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006731e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006731e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006731ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006731ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006731f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006731f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006731f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006731f9: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 006731ff: mov dword ptr [ecx], 0xb361c0 */ W32((u32)(r_ecx), 0xb361c0u);
    /* 00673205: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673207: je 0x673223 */ if (fZ) goto L_00673223;
L_00673209:; BB(0x00673209);
    /* 00673209: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067320c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00673210: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00673215: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00673219: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
L_00673223:; BB(0x00673223);
    /* 00673223: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 00673229: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067322b: je 0x673247 */ if (fZ) goto L_00673247;
L_0067322d:; BB(0x0067322d);
    /* 0067322d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673230: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00673234: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00673239: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0067323d: mov dword ptr [ecx + 0xd8], 0 */ W32((u32)(r_ecx+0xd8u), 0x0u);
L_00673247:; BB(0x00673247);
    /* 00673247: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067324e: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x673253u); f_006131f4();
    /* 00673253: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673256: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067325d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067325f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673260: ret  */ FN_RET(0x006731cc); r_esp += 4; return;
}

void f_00673264(void) /* sub_673264 */
{
    FN_ENTER(0x00673264);
    /* 00673264: mov ecx, dword ptr [0xa8fe34] */ r_ecx = R32((u32)(0xa8fe34u));
    /* 0067326a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067326c: je 0x673281 */ if (fZ) goto L_00673281;
L_0067326e:; BB(0x0067326e);
    /* 0067326e: je 0x673277 */ if (fZ) goto L_00673277;
L_00673270:; BB(0x00673270);
    /* 00673270: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673272: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x673277u); f_004066a8();
L_00673277:; BB(0x00673277);
    /* 00673277: mov dword ptr [0xa8fe34], 0 */ W32((u32)(0xa8fe34u), 0x0u);
L_00673281:; BB(0x00673281);
    /* 00673281: ret  */ FN_RET(0x00673264); r_esp += 4; return;
}

void f_00673284(void)
{
    FN_ENTER(0x00673284);
    /* 00673284: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673285: mov ebp, esp */ r_ebp = r_esp;
    /* 00673287: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673289: push 0x8e9470 */ { u32 v = 0x8e9470u; r_esp -= 4; W32(r_esp, v); }
    /* 0067328e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673295: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067329c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067329f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006732a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006732a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006732a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006732ab: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 006732b0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006732b7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6732bcu); f_005caba4();
    /* 006732bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006732bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006732c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006732c2: je 0x6732fb */ if (fZ) goto L_006732fb;
L_006732c4:; BB(0x006732c4);
    /* 006732c4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006732cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006732d2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006732d5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006732db: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006732de: call 0x673300 */ r_esp -= 4; W32(r_esp, 0x6732e3u); f_00673300();
    /* 006732e3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006732e6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006732ed:; BB(0x006732ed);
    /* 006732ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006732f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006732f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006732f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006732fa: ret  */ FN_RET(0x00673284); r_esp += 4; return;
L_006732fb:; BB(0x006732fb);
    /* 006732fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006732fd: jmp 0x6732ed */ goto L_006732ed;
}

void f_00673300(void) /* sub_673300 */
{
    FN_ENTER(0x00673300);
    /* 00673300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673301: mov ebp, esp */ r_ebp = r_esp;
    /* 00673303: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673305: push 0x8e948c */ { u32 v = 0x8e948cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067330a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673311: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673318: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067331b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067331e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00673321: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00673324: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00673327: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067332a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067332d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00673330: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00673333: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x673338u); f_006132e4();
    /* 00673338: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067333f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673342: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00673345: mov dword ptr [ecx], 0xb361c0 */ W32((u32)(r_ecx), 0xb361c0u);
    /* 0067334b: mov eax, dword ptr [0x9c9814] */ r_eax = R32((u32)(0x9c9814u));
    /* 00673350: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00673351: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00673354: call dword ptr [0xb361d4] */ { u32 t = R32((u32)(0xb361d4u)); r_esp -= 4; W32(r_esp, 0x67335au); call_ind(t); }
    /* 0067335a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00673361: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00673368: mov dword ptr [ebp - 0x34], 0x42700000 */ W32((u32)(r_ebp+0xffffffccu), 0x42700000u);
    /* 0067336f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x673374u); f_0082d7b0();
    /* 00673374: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00673376: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x67337bu); f_00830cd8();
    /* 0067337b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067337e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673381: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x673386u); f_0082d838();
    /* 00673386: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673389: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0067338c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067338e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x673393u); f_0082d8bc();
    /* 00673393: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00673396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673397: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0067339a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067339c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6733a1u); f_00830aa0();
    /* 006733a1: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 006733a4: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 006733a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006733aa: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6733afu); f_00509590();
    /* 006733af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006733b2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006733b5: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 006733bb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6733c0u); f_0082da80();
    /* 006733c0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006733c3: mov ecx, dword ptr [eax + 0xd4] */ r_ecx = R32((u32)(r_eax+0xd4u));
    /* 006733c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006733cb: je 0x6733d2 */ if (fZ) goto L_006733d2;
L_006733cd:; BB(0x006733cd);
    /* 006733cd: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x6733d2u); f_00508f48();
L_006733d2:; BB(0x006733d2);
    /* 006733d2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006733d9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006733e0: mov dword ptr [ebp - 0x28], 0xc2700000 */ W32((u32)(r_ebp+0xffffffd8u), 0xc2700000u);
    /* 006733e7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6733ecu); f_0082d7b0();
    /* 006733ec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006733ee: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x6733f3u); f_00830cd8();
    /* 006733f3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006733f6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006733f9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6733feu); f_0082d838();
    /* 006733fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673401: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00673404: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00673406: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x67340bu); f_0082d8bc();
    /* 0067340b: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0067340e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067340f: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00673412: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00673414: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x673419u); f_00830aa0();
    /* 00673419: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0067341c: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 00673421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673422: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x673427u); f_00509590();
    /* 00673427: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067342a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067342d: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 00673433: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x673438u); f_0082da80();
    /* 00673438: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067343b: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00673441: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673443: je 0x67344a */ if (fZ) goto L_0067344a;
L_00673445:; BB(0x00673445);
    /* 00673445: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x67344au); f_00508f48();
L_0067344a:; BB(0x0067344a);
    /* 0067344a: call 0x671040 */ r_esp -= 4; W32(r_esp, 0x67344fu); f_00671040();
    /* 0067344f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673452: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673454: je 0x673462 */ if (fZ) goto L_00673462;
L_00673456:; BB(0x00673456);
    /* 00673456: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00673460: jmp 0x67346c */ goto L_0067346c;
L_00673462:; BB(0x00673462);
    /* 00673462: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
L_0067346c:; BB(0x0067346c);
    /* 0067346c: mov edx, dword ptr [0xa8fe34] */ r_edx = R32((u32)(0xa8fe34u));
    /* 00673472: mov edi, dword ptr [0xa8fe30] */ r_edi = R32((u32)(0xa8fe30u));
    /* 00673478: mov dword ptr [ebx + 0xcc], 0x3f800000 */ W32((u32)(r_ebx+0xccu), 0x3f800000u);
    /* 00673482: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00673488: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0067348b: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0067348e: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 00673491: mov eax, ebx */ r_eax = r_ebx;
    /* 00673493: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673496: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673499: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067349c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006734a3: mov esp, ebp */ r_esp = r_ebp;
    /* 006734a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006734a6: ret 8 */ FN_RET(0x00673300); r_esp += 12; return;
}

void f_006734ac(void) /* sub_6734AC */
{
    FN_ENTER(0x006734ac);
    /* 006734ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006734ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006734af: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6734b4u); f_004f7c84();
    /* 006734b4: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 006734ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006734bc: je 0x67354e */ if (fZ) goto L_0067354e;
L_006734c2:; BB(0x006734c2);
    /* 006734c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006734c5: jne 0x6734ff */ if (!fZ) goto L_006734ff;
L_006734c7:; BB(0x006734c7);
    /* 006734c7: fld dword ptr [0x93a890] */ FPUSH(R_F32((u32)(0x93a890u)));
    /* 006734cd: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 006734d3: fcom dword ptr [0x93a88c] */ fx_compare(ST(0), R_F32((u32)(0x93a88cu))); 
    /* 006734d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006734db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006734dc: jb 0x6734f7 */ if (fC) goto L_006734f7;
L_006734de:; BB(0x006734de);
    /* 006734de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006734e0: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
    /* 006734ea: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 006734ef: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 006734f5: jmp 0x673561 */ goto L_00673561;
L_006734f7:; BB(0x006734f7);
    /* 006734f7: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 006734fd: jmp 0x673561 */ goto L_00673561;
L_006734ff:; BB(0x006734ff);
    /* 006734ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673502: jne 0x673539 */ if (!fZ) goto L_00673539;
L_00673504:; BB(0x00673504);
    /* 00673504: fld dword ptr [0x93a898] */ FPUSH(R_F32((u32)(0x93a898u)));
    /* 0067350a: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 00673510: fcom dword ptr [0x93a894] */ fx_compare(ST(0), R_F32((u32)(0x93a894u))); 
    /* 00673516: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00673518: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00673519: ja 0x673531 */ if ((!fC&&!fZ)) goto L_00673531;
L_0067351b:; BB(0x0067351b);
    /* 0067351b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067351d: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00673527: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00673529: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 0067352f: jmp 0x673561 */ goto L_00673561;
L_00673531:; BB(0x00673531);
    /* 00673531: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 00673537: jmp 0x673561 */ goto L_00673561;
L_00673539:; BB(0x00673539);
    /* 00673539: call 0x671008 */ r_esp -= 4; W32(r_esp, 0x67353eu); f_00671008();
    /* 0067353e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673540: je 0x673561 */ if (fZ) goto L_00673561;
L_00673542:; BB(0x00673542);
    /* 00673542: mov dword ptr [ebx + 0xc8], 1 */ W32((u32)(r_ebx+0xc8u), 0x1u);
    /* 0067354c: jmp 0x673561 */ goto L_00673561;
L_0067354e:; BB(0x0067354e);
    /* 0067354e: call 0x671024 */ r_esp -= 4; W32(r_esp, 0x673553u); f_00671024();
    /* 00673553: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673555: je 0x673561 */ if (fZ) goto L_00673561;
L_00673557:; BB(0x00673557);
    /* 00673557: mov dword ptr [ebx + 0xc8], 2 */ W32((u32)(r_ebx+0xc8u), 0x2u);
L_00673561:; BB(0x00673561);
    /* 00673561: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00673563: call 0x67356c */ r_esp -= 4; W32(r_esp, 0x673568u); f_0067356c();
    /* 00673568: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673569: ret  */ FN_RET(0x006734ac); r_esp += 4; return;
}

void f_0067356c(void) /* sub_67356C */
{
    FN_ENTER(0x0067356c);
    /* 0067356c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067356d: mov esi, ecx */ r_esi = r_ecx;
    /* 0067356f: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00673575: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673578: je 0x67359a */ if (fZ) goto L_0067359a;
L_0067357a:; BB(0x0067357a);
    /* 0067357a: mov ecx, dword ptr [esi + 0xd4] */ r_ecx = R32((u32)(r_esi+0xd4u));
    /* 00673580: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673582: je 0x673589 */ if (fZ) goto L_00673589;
L_00673584:; BB(0x00673584);
    /* 00673584: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x673589u); f_00508f48();
L_00673589:; BB(0x00673589);
    /* 00673589: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 0067358f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673591: je 0x673598 */ if (fZ) goto L_00673598;
L_00673593:; BB(0x00673593);
    /* 00673593: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x673598u); f_00508f48();
L_00673598:; BB(0x00673598);
    /* 00673598: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00673599: ret  */ FN_RET(0x0067356c); r_esp += 4; return;
L_0067359a:; BB(0x0067359a);
    /* 0067359a: mov ecx, dword ptr [esi + 0xd4] */ r_ecx = R32((u32)(r_esi+0xd4u));
    /* 006735a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006735a2: je 0x6735a9 */ if (fZ) goto L_006735a9;
L_006735a4:; BB(0x006735a4);
    /* 006735a4: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x6735a9u); f_00509580();
L_006735a9:; BB(0x006735a9);
    /* 006735a9: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 006735af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006735b1: je 0x673598 */ if (fZ) goto L_00673598;
L_006735b3:; BB(0x006735b3);
    /* 006735b3: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x6735b8u); f_00509580();
    /* 006735b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006735b9: ret  */ FN_RET(0x0067356c); r_esp += 4; return;
}

void f_006735bc(void) /* sub_6735BC */
{
    FN_ENTER(0x006735bc);
    /* 006735bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006735bd: mov esi, ecx */ r_esi = r_ecx;
    /* 006735bf: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 006735c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006735c7: je 0x673625 */ if (fZ) goto L_00673625;
L_006735c9:; BB(0x006735c9);
    /* 006735c9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006735cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006735ce: je 0x673625 */ if (fZ) goto L_00673625;
L_006735d0:; BB(0x006735d0);
    /* 006735d0: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6735d5u); f_0082dbac();
    /* 006735d5: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006735d8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6735ddu); f_00829cc8();
    /* 006735dd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6735e2u); f_0082d7b0();
    /* 006735e2: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006735e5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6735eau); f_0082d838();
    /* 006735ea: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006735ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006735ef: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6735f4u); f_0082d8bc();
    /* 006735f4: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 006735fa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006735fd: je 0x673613 */ if (fZ) goto L_00673613;
L_006735ff:; BB(0x006735ff);
    /* 006735ff: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 00673605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673606: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00673608: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067360d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067360e: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x673613u); f_0082fa0c();
L_00673613:; BB(0x00673613);
    /* 00673613: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00673616: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x67361bu); f_00831758();
    /* 0067361b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x673620u); f_0082da80();
    /* 00673620: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x673625u); f_0082dab0();
L_00673625:; BB(0x00673625);
    /* 00673625: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00673626: ret  */ FN_RET(0x006735bc); r_esp += 4; return;
}

void f_00673628(void) /* sub_673628 */
{
    FN_ENTER(0x00673628);
    /* 00673628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673629: mov ebp, esp */ r_ebp = r_esp;
    /* 0067362b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067362d: push 0x8e94b4 */ { u32 v = 0x8e94b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00673632: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673639: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673640: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673643: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673646: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673649: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067364c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067364f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00673654: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067365b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x673660u); f_008581c5();
    /* 00673660: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673661: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00673664: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673666: je 0x6736b8 */ if (fZ) goto L_006736b8;
L_00673668:; BB(0x00673668);
    /* 00673668: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067366f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673676: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673679: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067367b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067367c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067367d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067367e: push 0x9c9804 */ { u32 v = 0x9c9804u; r_esp -= 4; W32(r_esp, v); }
    /* 00673683: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673685: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67368au); f_005b7a84();
    /* 0067368a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067368d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00673694:; BB(0x00673694);
    /* 00673694: mov dword ptr [0xa8fe34], eax */ W32((u32)(0xa8fe34u), r_eax);
    /* 00673699: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006736a0: call 0x671000 */ r_esp -= 4; W32(r_esp, 0x6736a5u); f_00671000();
    /* 006736a5: mov dword ptr [0xa8fe30], eax */ W32((u32)(0xa8fe30u), r_eax);
    /* 006736aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006736ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006736b4: mov esp, ebp */ r_esp = r_ebp;
    /* 006736b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006736b7: ret  */ FN_RET(0x00673628); r_esp += 4; return;
L_006736b8:; BB(0x006736b8);
    /* 006736b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006736ba: jmp 0x673694 */ goto L_00673694;
}

void f_006736bc(void) /* sub_6736BC */
{
    FN_ENTER(0x006736bc);
    /* 006736bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006736bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006736bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006736c1: call 0x6736e0 */ r_esp -= 4; W32(r_esp, 0x6736c6u); f_006736e0();
    /* 006736c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006736ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006736cc: jne 0x6736d2 */ if (!fZ) goto L_006736d2;
L_006736ce:; BB(0x006736ce);
    /* 006736ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006736cf: ret 4 */ FN_RET(0x006736bc); r_esp += 8; return;
L_006736d2:; BB(0x006736d2);
    /* 006736d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006736d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6736d8u); f_005c2f74();
    /* 006736d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006736d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006736da: ret 4 */ FN_RET(0x006736bc); r_esp += 8; return;
}

void f_006736e0(void) /* sub_6736E0 */
{
    FN_ENTER(0x006736e0);
    /* 006736e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006736e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006736e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006736e5: push 0x8e94d0 */ { u32 v = 0x8e94d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006736ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006736f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006736f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006736f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006736fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006736fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673701: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673704: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00673707: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067370a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067370d: mov dword ptr [ecx], 0xb36290 */ W32((u32)(r_ecx), 0xb36290u);
    /* 00673713: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067371a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x67371fu); f_006131f4();
    /* 0067371f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673722: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673729: mov esp, ebp */ r_esp = r_ebp;
    /* 0067372b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067372c: ret  */ FN_RET(0x006736e0); r_esp += 4; return;
}

void f_00673730(void) /* sub_673730 */
{
    FN_ENTER(0x00673730);
    /* 00673730: mov ecx, dword ptr [0xa8fe44] */ r_ecx = R32((u32)(0xa8fe44u));
    /* 00673736: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673738: je 0x67374d */ if (fZ) goto L_0067374d;
L_0067373a:; BB(0x0067373a);
    /* 0067373a: je 0x673743 */ if (fZ) goto L_00673743;
L_0067373c:; BB(0x0067373c);
    /* 0067373c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067373e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x673743u); f_004066a8();
L_00673743:; BB(0x00673743);
    /* 00673743: mov dword ptr [0xa8fe44], 0 */ W32((u32)(0xa8fe44u), 0x0u);
L_0067374d:; BB(0x0067374d);
    /* 0067374d: ret  */ FN_RET(0x00673730); r_esp += 4; return;
}

void f_00673750(void)
{
    FN_ENTER(0x00673750);
    /* 00673750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673751: mov ebp, esp */ r_ebp = r_esp;
    /* 00673753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673755: push 0x8e94f8 */ { u32 v = 0x8e94f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067375a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673761: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673768: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067376b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067376e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673771: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673774: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00673777: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067377c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00673783: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x673788u); f_005caba4();
    /* 00673788: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673789: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067378c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067378e: je 0x6737c7 */ if (fZ) goto L_006737c7;
L_00673790:; BB(0x00673790);
    /* 00673790: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00673797: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067379e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006737a1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006737a7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006737aa: call 0x6737cc */ r_esp -= 4; W32(r_esp, 0x6737afu); f_006737cc();
    /* 006737af: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006737b2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006737b9:; BB(0x006737b9);
    /* 006737b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006737bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006737c3: mov esp, ebp */ r_esp = r_ebp;
    /* 006737c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006737c6: ret  */ FN_RET(0x00673750); r_esp += 4; return;
L_006737c7:; BB(0x006737c7);
    /* 006737c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006737c9: jmp 0x6737b9 */ goto L_006737b9;
}

void f_006737cc(void) /* sub_6737CC */
{
    FN_ENTER(0x006737cc);
    /* 006737cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006737cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006737cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006737d1: push 0x8e9514 */ { u32 v = 0x8e9514u; r_esp -= 4; W32(r_esp, v); }
    /* 006737d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006737dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006737dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006737e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006737e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006737ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006737ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006737f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006737f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006737f6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006737f9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006737fc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006737ff: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x673804u); f_006132e4();
    /* 00673804: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067380b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067380e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00673811: mov dword ptr [ecx], 0xb36290 */ W32((u32)(r_ecx), 0xb36290u);
    /* 00673817: mov eax, dword ptr [0x9c9830] */ r_eax = R32((u32)(0x9c9830u));
    /* 0067381c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067381d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00673820: call dword ptr [0xb362a4] */ { u32 t = R32((u32)(0xb362a4u)); r_esp -= 4; W32(r_esp, 0x673826u); call_ind(t); }
    /* 00673826: call 0x671040 */ r_esp -= 4; W32(r_esp, 0x67382bu); f_00671040();
    /* 0067382b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067382e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673830: je 0x67383e */ if (fZ) goto L_0067383e;
L_00673832:; BB(0x00673832);
    /* 00673832: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 0067383c: jmp 0x673848 */ goto L_00673848;
L_0067383e:; BB(0x0067383e);
    /* 0067383e: mov dword ptr [ebx + 0xc8], 3 */ W32((u32)(r_ebx+0xc8u), 0x3u);
L_00673848:; BB(0x00673848);
    /* 00673848: mov edx, dword ptr [0xa8fe44] */ r_edx = R32((u32)(0xa8fe44u));
    /* 0067384e: mov edi, dword ptr [0xa8fe40] */ r_edi = R32((u32)(0xa8fe40u));
    /* 00673854: mov dword ptr [ebx + 0xcc], 0x3f800000 */ W32((u32)(r_ebx+0xccu), 0x3f800000u);
    /* 0067385e: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00673864: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00673867: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0067386a: mov dword ptr [ebx + 0x24], edi */ W32((u32)(r_ebx+0x24u), r_edi);
    /* 0067386d: mov eax, ebx */ r_eax = r_ebx;
    /* 0067386f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673872: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00673875: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673878: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067387f: mov esp, ebp */ r_esp = r_ebp;
    /* 00673881: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673882: ret 8 */ FN_RET(0x006737cc); r_esp += 12; return;
}

void f_00673888(void) /* sub_673888 */
{
    FN_ENTER(0x00673888);
    /* 00673888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673889: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0067388b: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
    /* 00673891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673893: je 0x673925 */ if (fZ) goto L_00673925;
L_00673899:; BB(0x00673899);
    /* 00673899: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067389c: jne 0x6738d6 */ if (!fZ) goto L_006738d6;
L_0067389e:; BB(0x0067389e);
    /* 0067389e: fld dword ptr [0x93a8e0] */ FPUSH(R_F32((u32)(0x93a8e0u)));
    /* 006738a4: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 006738aa: fcom dword ptr [0x93a8dc] */ fx_compare(ST(0), R_F32((u32)(0x93a8dcu))); 
    /* 006738b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006738b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006738b3: jb 0x6738ce */ if (fC) goto L_006738ce;
L_006738b5:; BB(0x006738b5);
    /* 006738b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006738b7: mov dword ptr [ebp + 0xc8], 3 */ W32((u32)(r_ebp+0xc8u), 0x3u);
    /* 006738c1: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 006738c6: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 006738cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006738cd: ret  */ FN_RET(0x00673888); r_esp += 4; return;
L_006738ce:; BB(0x006738ce);
    /* 006738ce: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 006738d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006738d5: ret  */ FN_RET(0x00673888); r_esp += 4; return;
L_006738d6:; BB(0x006738d6);
    /* 006738d6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006738d9: jne 0x673910 */ if (!fZ) goto L_00673910;
L_006738db:; BB(0x006738db);
    /* 006738db: fld dword ptr [0x93a8e8] */ FPUSH(R_F32((u32)(0x93a8e8u)));
    /* 006738e1: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 006738e7: fcom dword ptr [0x93a8e4] */ fx_compare(ST(0), R_F32((u32)(0x93a8e4u))); 
    /* 006738ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006738ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006738f0: ja 0x673908 */ if ((!fC&&!fZ)) goto L_00673908;
L_006738f2:; BB(0x006738f2);
    /* 006738f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006738f4: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
    /* 006738fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673900: mov dword ptr [ebp + 0xcc], eax */ W32((u32)(r_ebp+0xccu), r_eax);
    /* 00673906: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673907: ret  */ FN_RET(0x00673888); r_esp += 4; return;
L_00673908:; BB(0x00673908);
    /* 00673908: fstp dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0)); FPOP();
    /* 0067390e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067390f: ret  */ FN_RET(0x00673888); r_esp += 4; return;
L_00673910:; BB(0x00673910);
    /* 00673910: call 0x671008 */ r_esp -= 4; W32(r_esp, 0x673915u); f_00671008();
    /* 00673915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673917: je 0x673938 */ if (fZ) goto L_00673938;
L_00673919:; BB(0x00673919);
    /* 00673919: mov dword ptr [ebp + 0xc8], 1 */ W32((u32)(r_ebp+0xc8u), 0x1u);
    /* 00673923: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673924: ret  */ FN_RET(0x00673888); r_esp += 4; return;
L_00673925:; BB(0x00673925);
    /* 00673925: call 0x671024 */ r_esp -= 4; W32(r_esp, 0x67392au); f_00671024();
    /* 0067392a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067392c: je 0x673938 */ if (fZ) goto L_00673938;
L_0067392e:; BB(0x0067392e);
    /* 0067392e: mov dword ptr [ebp + 0xc8], 2 */ W32((u32)(r_ebp+0xc8u), 0x2u);
L_00673938:; BB(0x00673938);
    /* 00673938: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673939: ret  */ FN_RET(0x00673888); r_esp += 4; return;
}

void f_0067393c(void) /* sub_67393C */
{
    FN_ENTER(0x0067393c);
    /* 0067393c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067393d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067393f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673941: push 0x8e953c */ { u32 v = 0x8e953cu; r_esp -= 4; W32(r_esp, v); }
    /* 00673946: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067394c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067394d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673954: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673957: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067395a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067395d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673960: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00673963: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00673968: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067396f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x673974u); f_008581c5();
    /* 00673974: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673975: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00673978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067397a: je 0x6739cc */ if (fZ) goto L_006739cc;
L_0067397c:; BB(0x0067397c);
    /* 0067397c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00673983: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067398a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067398d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067398f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673992: push 0x9c9820 */ { u32 v = 0x9c9820u; r_esp -= 4; W32(r_esp, v); }
    /* 00673997: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673999: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67399eu); f_005b7a84();
    /* 0067399e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006739a1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006739a8:; BB(0x006739a8);
    /* 006739a8: mov dword ptr [0xa8fe44], eax */ W32((u32)(0xa8fe44u), r_eax);
    /* 006739ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006739b4: call 0x671000 */ r_esp -= 4; W32(r_esp, 0x6739b9u); f_00671000();
    /* 006739b9: mov dword ptr [0xa8fe40], eax */ W32((u32)(0xa8fe40u), r_eax);
    /* 006739be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006739c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006739c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006739ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006739cb: ret  */ FN_RET(0x0067393c); r_esp += 4; return;
L_006739cc:; BB(0x006739cc);
    /* 006739cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006739ce: jmp 0x6739a8 */ goto L_006739a8;
}

void f_006739d0(void) /* sub_6739D0 */
{
    FN_ENTER(0x006739d0);
    /* 006739d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006739d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006739d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006739d5: call 0x6739f4 */ r_esp -= 4; W32(r_esp, 0x6739dau); f_006739f4();
    /* 006739da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006739de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006739e0: jne 0x6739e6 */ if (!fZ) goto L_006739e6;
L_006739e2:; BB(0x006739e2);
    /* 006739e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006739e3: ret 4 */ FN_RET(0x006739d0); r_esp += 8; return;
L_006739e6:; BB(0x006739e6);
    /* 006739e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006739e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6739ecu); f_005c2f74();
    /* 006739ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006739ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006739ee: ret 4 */ FN_RET(0x006739d0); r_esp += 8; return;
}

void f_006739f4(void) /* sub_6739F4 */
{
    FN_ENTER(0x006739f4);
    /* 006739f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006739f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006739f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006739f9: push 0x8e9558 */ { u32 v = 0x8e9558u; r_esp -= 4; W32(r_esp, v); }
    /* 006739fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673a04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673a05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673a0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673a0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673a12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673a15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673a18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00673a1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00673a1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673a21: mov dword ptr [ecx], 0xb36360 */ W32((u32)(r_ecx), 0xb36360u);
    /* 00673a27: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673a2e: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x673a33u); f_006131f4();
    /* 00673a33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673a36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673a3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00673a3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673a40: ret  */ FN_RET(0x006739f4); r_esp += 4; return;
}

void f_00673a44(void) /* sub_673A44 */
{
    FN_ENTER(0x00673a44);
    /* 00673a44: mov ecx, dword ptr [0xa8fe54] */ r_ecx = R32((u32)(0xa8fe54u));
    /* 00673a4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673a4c: je 0x673a61 */ if (fZ) goto L_00673a61;
L_00673a4e:; BB(0x00673a4e);
    /* 00673a4e: je 0x673a57 */ if (fZ) goto L_00673a57;
L_00673a50:; BB(0x00673a50);
    /* 00673a50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673a52: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x673a57u); f_004066a8();
L_00673a57:; BB(0x00673a57);
    /* 00673a57: mov dword ptr [0xa8fe54], 0 */ W32((u32)(0xa8fe54u), 0x0u);
L_00673a61:; BB(0x00673a61);
    /* 00673a61: ret  */ FN_RET(0x00673a44); r_esp += 4; return;
}

void f_00673a64(void)
{
    FN_ENTER(0x00673a64);
    /* 00673a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673a65: mov ebp, esp */ r_ebp = r_esp;
    /* 00673a67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673a69: push 0x8e9580 */ { u32 v = 0x8e9580u; r_esp -= 4; W32(r_esp, v); }
    /* 00673a6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673a75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673a7c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673a7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673a82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673a85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673a88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00673a8b: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00673a90: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00673a97: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x673a9cu); f_005caba4();
    /* 00673a9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673a9d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00673aa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673aa2: je 0x673adb */ if (fZ) goto L_00673adb;
L_00673aa4:; BB(0x00673aa4);
    /* 00673aa4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00673aab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673ab2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00673ab5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00673abb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673abe: call 0x673ae0 */ r_esp -= 4; W32(r_esp, 0x673ac3u); f_00673ae0();
    /* 00673ac3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673ac6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00673acd:; BB(0x00673acd);
    /* 00673acd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673ad0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673ad7: mov esp, ebp */ r_esp = r_ebp;
    /* 00673ad9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673ada: ret  */ FN_RET(0x00673a64); r_esp += 4; return;
L_00673adb:; BB(0x00673adb);
    /* 00673adb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673add: jmp 0x673acd */ goto L_00673acd;
}

void f_00673ae0(void) /* sub_673AE0 */
{
    FN_ENTER(0x00673ae0);
    /* 00673ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00673ae3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673ae5: push 0x8e959c */ { u32 v = 0x8e959cu; r_esp -= 4; W32(r_esp, v); }
    /* 00673aea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673af1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673af8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673afb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673afe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00673b01: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00673b04: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00673b07: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00673b0a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00673b0d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00673b10: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00673b13: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x673b18u); f_006132e4();
    /* 00673b18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673b1f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673b22: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00673b25: mov dword ptr [ecx], 0xb36360 */ W32((u32)(r_ecx), 0xb36360u);
    /* 00673b2b: mov eax, dword ptr [0x9c9858] */ r_eax = R32((u32)(0x9c9858u));
    /* 00673b30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00673b31: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00673b34: call dword ptr [0xb36374] */ { u32 t = R32((u32)(0xb36374u)); r_esp -= 4; W32(r_esp, 0x673b3au); call_ind(t); }
    /* 00673b3a: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x673b3fu); f_00670fb8();
    /* 00673b3f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00673b42: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00673b45: je 0x673b77 */ if (fZ) goto L_00673b77;
L_00673b47:; BB(0x00673b47);
    /* 00673b47: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
L_00673b51:; BB(0x00673b51);
    /* 00673b51: mov eax, edx */ r_eax = r_edx;
    /* 00673b53: mov dword ptr [edx + 0xcc], 0x3f800000 */ W32((u32)(r_edx+0xccu), 0x3f800000u);
    /* 00673b5d: mov dword ptr [edx + 0xb0], 0 */ W32((u32)(r_edx+0xb0u), 0x0u);
    /* 00673b67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673b6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673b71: mov esp, ebp */ r_esp = r_ebp;
    /* 00673b73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673b74: ret 8 */ FN_RET(0x00673ae0); r_esp += 12; return;
L_00673b77:; BB(0x00673b77);
    /* 00673b77: mov dword ptr [edx + 0xc8], 3 */ W32((u32)(r_edx+0xc8u), 0x3u);
    /* 00673b81: jmp 0x673b51 */ goto L_00673b51;
}

void f_00673b84(void) /* sub_673B84 */
{
    FN_ENTER(0x00673b84);
    /* 00673b84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00673b85: mov edi, ecx */ r_edi = r_ecx;
    /* 00673b87: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x673b8cu); f_004f7c84();
    /* 00673b8c: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00673b92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673b94: je 0x673c27 */ if (fZ) goto L_00673c27;
L_00673b9a:; BB(0x00673b9a);
    /* 00673b9a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673b9d: jne 0x673bd7 */ if (!fZ) goto L_00673bd7;
L_00673b9f:; BB(0x00673b9f);
    /* 00673b9f: fld dword ptr [0x93a938] */ FPUSH(R_F32((u32)(0x93a938u)));
    /* 00673ba5: fadd dword ptr [edi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xccu));
    /* 00673bab: fcom dword ptr [0x93a934] */ fx_compare(ST(0), R_F32((u32)(0x93a934u))); 
    /* 00673bb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00673bb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00673bb4: jb 0x673bcf */ if (fC) goto L_00673bcf;
L_00673bb6:; BB(0x00673bb6);
    /* 00673bb6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00673bb8: mov dword ptr [edi + 0xc8], 3 */ W32((u32)(r_edi+0xc8u), 0x3u);
    /* 00673bc2: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00673bc7: mov dword ptr [edi + 0xcc], eax */ W32((u32)(r_edi+0xccu), r_eax);
    /* 00673bcd: jmp 0x673c3b */ goto L_00673c3b;
L_00673bcf:; BB(0x00673bcf);
    /* 00673bcf: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 00673bd5: jmp 0x673c3b */ goto L_00673c3b;
L_00673bd7:; BB(0x00673bd7);
    /* 00673bd7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673bda: jne 0x673c11 */ if (!fZ) goto L_00673c11;
L_00673bdc:; BB(0x00673bdc);
    /* 00673bdc: fld dword ptr [0x93a940] */ FPUSH(R_F32((u32)(0x93a940u)));
    /* 00673be2: fadd dword ptr [edi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xccu));
    /* 00673be8: fcom dword ptr [0x93a93c] */ fx_compare(ST(0), R_F32((u32)(0x93a93cu))); 
    /* 00673bee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00673bf0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00673bf1: ja 0x673c09 */ if ((!fC&&!fZ)) goto L_00673c09;
L_00673bf3:; BB(0x00673bf3);
    /* 00673bf3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00673bf5: mov dword ptr [edi + 0xc8], 0 */ W32((u32)(r_edi+0xc8u), 0x0u);
    /* 00673bff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00673c01: mov dword ptr [edi + 0xcc], eax */ W32((u32)(r_edi+0xccu), r_eax);
    /* 00673c07: jmp 0x673c3b */ goto L_00673c3b;
L_00673c09:; BB(0x00673c09);
    /* 00673c09: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 00673c0f: jmp 0x673c3b */ goto L_00673c3b;
L_00673c11:; BB(0x00673c11);
    /* 00673c11: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x673c16u); f_00670fb8();
    /* 00673c16: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673c19: je 0x673c3b */ if (fZ) goto L_00673c3b;
L_00673c1b:; BB(0x00673c1b);
    /* 00673c1b: mov dword ptr [edi + 0xc8], 1 */ W32((u32)(r_edi+0xc8u), 0x1u);
    /* 00673c25: jmp 0x673c3b */ goto L_00673c3b;
L_00673c27:; BB(0x00673c27);
    /* 00673c27: call 0x670fb8 */ r_esp -= 4; W32(r_esp, 0x673c2cu); f_00670fb8();
    /* 00673c2c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673c2f: jne 0x673c3b */ if (!fZ) goto L_00673c3b;
L_00673c31:; BB(0x00673c31);
    /* 00673c31: mov dword ptr [edi + 0xc8], 2 */ W32((u32)(r_edi+0xc8u), 0x2u);
L_00673c3b:; BB(0x00673c3b);
    /* 00673c3b: mov ecx, dword ptr [0xa8fe54] */ r_ecx = R32((u32)(0xa8fe54u));
    /* 00673c41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673c43: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x673c48u); f_005b8638();
    /* 00673c48: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00673c4b: fld dword ptr [0x93a92c] */ FPUSH(R_F32((u32)(0x93a92cu)));
    /* 00673c51: fadd dword ptr [edi + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xb0u));
    /* 00673c57: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00673c5a: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fO = (a >> 31) & 1; } }
    /* 00673c5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00673c5f: fadd dword ptr [edx*4 + 0x93a920] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93a920u));
    /* 00673c66: fadd dword ptr [0x93a930] */ ST(0) = ST(0) + R_F32((u32)(0x93a930u));
    /* 00673c6c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00673c6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00673c70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00673c71: jae 0x673c7d */ if (!fC) goto L_00673c7d;
L_00673c73:; BB(0x00673c73);
    /* 00673c73: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00673c75: fstp dword ptr [edi + 0xb0] */ W_F32((u32)(r_edi+0xb0u), ST(0)); FPOP();
    /* 00673c7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00673c7c: ret  */ FN_RET(0x00673b84); r_esp += 4; return;
L_00673c7d:; BB(0x00673c7d);
    /* 00673c7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00673c7f: fstp dword ptr [edi + 0xb0] */ W_F32((u32)(r_edi+0xb0u), ST(0)); FPOP();
    /* 00673c85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00673c86: ret  */ FN_RET(0x00673b84); r_esp += 4; return;
}

void f_00673c88(void) /* sub_673C88 */
{
    FN_ENTER(0x00673c88);
    /* 00673c88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00673c89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673c8a: mov esi, ecx */ r_esi = r_ecx;
    /* 00673c8c: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00673c92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673c94: je 0x673d36 */ if (fZ) goto L_00673d36;
L_00673c9a:; BB(0x00673c9a);
    /* 00673c9a: mov eax, dword ptr [0xa8fe50] */ r_eax = R32((u32)(0xa8fe50u));
    /* 00673c9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673ca1: je 0x673d36 */ if (fZ) goto L_00673d36;
L_00673ca7:; BB(0x00673ca7);
    /* 00673ca7: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x673cacu); f_0082dbac();
    /* 00673cac: mov ecx, dword ptr [0xa8fe50] */ r_ecx = R32((u32)(0xa8fe50u));
    /* 00673cb2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x673cb7u); f_00829cc8();
    /* 00673cb7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x673cbcu); f_0082d7b0();
    /* 00673cbc: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00673cbf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x673cc4u); f_0082d838();
    /* 00673cc4: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00673cc7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00673cc9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x673cceu); f_0082d8bc();
    /* 00673cce: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00673cd4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673cd7: je 0x673ced */ if (fZ) goto L_00673ced;
L_00673cd9:; BB(0x00673cd9);
    /* 00673cd9: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 00673cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673ce0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00673ce2: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00673ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673ce8: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x673cedu); f_0082fa0c();
L_00673ced:; BB(0x00673ced);
    /* 00673ced: mov ecx, dword ptr [0xa8fe54] */ r_ecx = R32((u32)(0xa8fe54u));
    /* 00673cf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673cf5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x673cfau); f_005b8610();
    /* 00673cfa: mov ecx, eax */ r_ecx = r_eax;
    /* 00673cfc: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x673d01u); f_00831758();
    /* 00673d01: mov ecx, dword ptr [0xa8fe54] */ r_ecx = R32((u32)(0xa8fe54u));
    /* 00673d07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d09: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x673d0eu); f_005b8610();
    /* 00673d0e: mov ebp, eax */ r_ebp = r_eax;
    /* 00673d10: mov ecx, dword ptr [0xa8fe54] */ r_ecx = R32((u32)(0xa8fe54u));
    /* 00673d16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d18: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x673d1du); f_005b8638();
    /* 00673d1d: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00673d23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00673d25: mov edx, eax */ r_edx = r_eax;
    /* 00673d27: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x673d2cu); f_0083bd00();
    /* 00673d2c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x673d31u); f_0082da80();
    /* 00673d31: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x673d36u); f_0082dab0();
L_00673d36:; BB(0x00673d36);
    /* 00673d36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673d37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00673d38: ret  */ FN_RET(0x00673c88); r_esp += 4; return;
}

void f_00673d3c(void) /* sub_673D3C */
{
    FN_ENTER(0x00673d3c);
    /* 00673d3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673d3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00673d3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673d41: push 0x8e95c4 */ { u32 v = 0x8e95c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673d4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673d54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673d57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673d5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673d5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673d60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00673d63: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d68: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00673d6f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x673d74u); f_008581c5();
    /* 00673d74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673d75: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00673d78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673d7a: je 0x673dcc */ if (fZ) goto L_00673dcc;
L_00673d7c:; BB(0x00673d7c);
    /* 00673d7c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00673d83: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673d8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673d8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00673d8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673d91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673d92: push 0x9c9848 */ { u32 v = 0x9c9848u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d97: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673d99: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x673d9eu); f_005b7a84();
    /* 00673d9e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673da1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00673da8:; BB(0x00673da8);
    /* 00673da8: mov dword ptr [0xa8fe54], eax */ W32((u32)(0xa8fe54u), r_eax);
    /* 00673dad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673db4: call 0x671000 */ r_esp -= 4; W32(r_esp, 0x673db9u); f_00671000();
    /* 00673db9: mov dword ptr [0xa8fe50], eax */ W32((u32)(0xa8fe50u), r_eax);
    /* 00673dbe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673dc1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673dc8: mov esp, ebp */ r_esp = r_ebp;
    /* 00673dca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673dcb: ret  */ FN_RET(0x00673d3c); r_esp += 4; return;
L_00673dcc:; BB(0x00673dcc);
    /* 00673dcc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00673dce: jmp 0x673da8 */ goto L_00673da8;
}

void f_00673dd0(void) /* sub_673DD0 */
{
    FN_ENTER(0x00673dd0);
    /* 00673dd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00673dd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00673dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00673dd5: call 0x673df4 */ r_esp -= 4; W32(r_esp, 0x673ddau); f_00673df4();
    /* 00673dda: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00673dde: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673de0: jne 0x673de6 */ if (!fZ) goto L_00673de6;
L_00673de2:; BB(0x00673de2);
    /* 00673de2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673de3: ret 4 */ FN_RET(0x00673dd0); r_esp += 8; return;
L_00673de6:; BB(0x00673de6);
    /* 00673de6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00673de7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x673decu); f_005c2f74();
    /* 00673dec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673ded: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673dee: ret 4 */ FN_RET(0x00673dd0); r_esp += 8; return;
}

void f_00673df4(void) /* sub_673DF4 */
{
    FN_ENTER(0x00673df4);
    /* 00673df4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673df5: mov ebp, esp */ r_ebp = r_esp;
    /* 00673df7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673df9: push 0x8e95e0 */ { u32 v = 0x8e95e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673dfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673e05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673e0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673e0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673e12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673e15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673e18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00673e1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00673e1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673e25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673e28: mov dword ptr [eax], 0xb36460 */ W32((u32)(r_eax), 0xb36460u);
    /* 00673e2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673e2f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x673e34u); f_007b4e84();
    /* 00673e34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673e35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673e38: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x673e3du); f_007b9c8c();
    /* 00673e3d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673e44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673e47: call 0x674320 */ r_esp -= 4; W32(r_esp, 0x673e4cu); f_00674320();
    /* 00673e4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673e4f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673e56: mov esp, ebp */ r_esp = r_ebp;
    /* 00673e58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673e59: ret  */ FN_RET(0x00673df4); r_esp += 4; return;
}

void f_00673e5c(void) /* sub_673E5C */
{
    FN_ENTER(0x00673e5c);
    /* 00673e5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00673e5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00673e5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00673e61: call 0x673e80 */ r_esp -= 4; W32(r_esp, 0x673e66u); f_00673e80();
    /* 00673e66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00673e6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00673e6c: jne 0x673e72 */ if (!fZ) goto L_00673e72;
L_00673e6e:; BB(0x00673e6e);
    /* 00673e6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673e6f: ret 4 */ FN_RET(0x00673e5c); r_esp += 8; return;
L_00673e72:; BB(0x00673e72);
    /* 00673e72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00673e73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x673e78u); f_005c2f74();
    /* 00673e78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673e79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00673e7a: ret 4 */ FN_RET(0x00673e5c); r_esp += 8; return;
}

void f_00673e80(void) /* sub_673E80 */
{
    FN_ENTER(0x00673e80);
    /* 00673e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00673e83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673e85: push 0x8e95fc */ { u32 v = 0x8e95fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00673e8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673e90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673e91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673e98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673e9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673e9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00673ea1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00673ea4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00673ea7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00673eaa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673eb1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673eb4: mov dword ptr [eax], 0xb364e0 */ W32((u32)(r_eax), 0xb364e0u);
    /* 00673eba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673ebb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x673ec0u); f_007b4e84();
    /* 00673ec0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673ec1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673ec4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x673ec9u); f_007b9c8c();
    /* 00673ec9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673ed0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673ed3: call 0x674410 */ r_esp -= 4; W32(r_esp, 0x673ed8u); f_00674410();
    /* 00673ed8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673edb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673ee2: mov esp, ebp */ r_esp = r_ebp;
    /* 00673ee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673ee5: ret  */ FN_RET(0x00673e80); r_esp += 4; return;
}

void f_00673ee8(void) /* sub_673EE8 */
{
    FN_ENTER(0x00673ee8);
    /* 00673ee8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673eea: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00673eee: call 0x674ab4 */ r_esp -= 4; W32(r_esp, 0x673ef3u); f_00674ab4();
    /* 00673ef3: ret 4 */ FN_RET(0x00673ee8); r_esp += 8; return;
}

void f_00673ef8(void) /* sub_673EF8 */
{
    FN_ENTER(0x00673ef8);
    /* 00673ef8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00673ef9: mov esi, ecx */ r_esi = r_ecx;
    /* 00673efb: mov ecx, esi */ r_ecx = r_esi;
    /* 00673efd: call 0x674b1c */ r_esp -= 4; W32(r_esp, 0x673f02u); f_00674b1c();
    /* 00673f02: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f04: call 0x674474 */ r_esp -= 4; W32(r_esp, 0x673f09u); f_00674474();
    /* 00673f09: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f0b: call 0x674e6c */ r_esp -= 4; W32(r_esp, 0x673f10u); f_00674e6c();
    /* 00673f10: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f12: call 0x674d24 */ r_esp -= 4; W32(r_esp, 0x673f17u); f_00674d24();
    /* 00673f17: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f19: call 0x674460 */ r_esp -= 4; W32(r_esp, 0x673f1eu); f_00674460();
    /* 00673f1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673f20: je 0x673f3b */ if (fZ) goto L_00673f3b;
L_00673f22:; BB(0x00673f22);
    /* 00673f22: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f24: call 0x6744a4 */ r_esp -= 4; W32(r_esp, 0x673f29u); f_006744a4();
    /* 00673f29: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f2b: call 0x67437c */ r_esp -= 4; W32(r_esp, 0x673f30u); f_0067437c();
    /* 00673f30: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00673f32: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f34: call 0x674aa0 */ r_esp -= 4; W32(r_esp, 0x673f39u); f_00674aa0();
    /* 00673f39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00673f3a: ret  */ FN_RET(0x00673ef8); r_esp += 4; return;
L_00673f3b:; BB(0x00673f3b);
    /* 00673f3b: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f3d: call 0x6744bc */ r_esp -= 4; W32(r_esp, 0x673f42u); f_006744bc();
    /* 00673f42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00673f43: ret  */ FN_RET(0x00673ef8); r_esp += 4; return;
}

void f_00673f44(void) /* sub_673F44 */
{
    FN_ENTER(0x00673f44);
    /* 00673f44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00673f45: mov esi, ecx */ r_esi = r_ecx;
    /* 00673f47: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 00673f4d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00673f50: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
    /* 00673f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00673f58: jl 0x673f85 */ if ((fS!=fO)) goto L_00673f85;
L_00673f5a:; BB(0x00673f5a);
    /* 00673f5a: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00673f5d: lea eax, [esi + 0xe4] */ r_eax = (u32)(r_esi+0xe4u);
    /* 00673f63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673f64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00673f65: call 0x7a8c04 */ r_esp -= 4; W32(r_esp, 0x673f6au); f_007a8c04();
    /* 00673f6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673f6d: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00673f70: add eax, dword ptr [esi + 0xf0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xf0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00673f76: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00673f79: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 00673f7c: mov ecx, esi */ r_ecx = r_esi;
    /* 00673f7e: call 0x674f18 */ r_esp -= 4; W32(r_esp, 0x673f83u); f_00674f18();
    /* 00673f83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00673f84: ret  */ FN_RET(0x00673f44); r_esp += 4; return;
L_00673f85:; BB(0x00673f85);
    /* 00673f85: mov eax, dword ptr [esi + 0xfc] */ r_eax = R32((u32)(r_esi+0xfcu));
    /* 00673f8b: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 00673f91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673f93: je 0x673f9e */ if (fZ) goto L_00673f9e;
L_00673f95:; BB(0x00673f95);
    /* 00673f95: mov dword ptr [esi + 0x60], 0x8000 */ W32((u32)(r_esi+0x60u), 0x8000u);
    /* 00673f9c: jmp 0x673fa5 */ goto L_00673fa5;
L_00673f9e:; BB(0x00673f9e);
    /* 00673f9e: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
L_00673fa5:; BB(0x00673fa5);
    /* 00673fa5: mov ecx, esi */ r_ecx = r_esi;
    /* 00673fa7: call 0x674fd0 */ r_esp -= 4; W32(r_esp, 0x673facu); f_00674fd0();
    /* 00673fac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673fae: mov ecx, esi */ r_ecx = r_esi;
    /* 00673fb0: call 0x674aa0 */ r_esp -= 4; W32(r_esp, 0x673fb5u); f_00674aa0();
    /* 00673fb5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00673fb6: ret  */ FN_RET(0x00673f44); r_esp += 4; return;
}

void f_00673fb8(void)
{
    FN_ENTER(0x00673fb8);
    /* 00673fb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673fb9: mov ebp, esp */ r_ebp = r_esp;
    /* 00673fbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673fbd: push 0x8e9632 */ { u32 v = 0x8e9632u; r_esp -= 4; W32(r_esp, v); }
    /* 00673fc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673fc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673fc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00673fd0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673fd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00673fd6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00673fd9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00673fdc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00673fdf: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00673fe4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00673feb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x673ff0u); f_005caba4();
    /* 00673ff0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00673ff3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673ff6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00673ff9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673ffb: je 0x67409e */ if (fZ) goto L_0067409e;
L_00674001:; BB(0x00674001);
    /* 00674001: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00674008: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067400f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00674012: mov ecx, eax */ r_ecx = r_eax;
    /* 00674014: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 00674019: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0067401c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067401d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00674020: call 0x675008 */ r_esp -= 4; W32(r_esp, 0x674025u); f_00675008();
    /* 00674025: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067402c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067402f: mov dword ptr [ecx], 0xb36460 */ W32((u32)(r_ecx), 0xb36460u);
    /* 00674035: mov eax, dword ptr [0x9c9918] */ r_eax = R32((u32)(0x9c9918u));
    /* 0067403a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067403c: push 0x9c98c0 */ { u32 v = 0x9c98c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674041: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00674044: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x674049u); f_007b9a88();
    /* 00674049: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067404c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x674051u); f_007b4f54();
    /* 00674051: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00674054: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 0067405a: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0067405f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00674062: jle 0x674080 */ if ((fZ||fS!=fO)) goto L_00674080;
L_00674064:; BB(0x00674064);
    /* 00674064: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00674067: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0067406c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067406d: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x674072u); f_007b52c4();
    /* 00674072: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00674075: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00674078: cmp ebx, dword ptr [eax + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067407e: jl 0x674064 */ if ((fS!=fO)) goto L_00674064;
L_00674080:; BB(0x00674080);
    /* 00674080: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00674087:; BB(0x00674087);
    /* 00674087: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067408a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067408d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00674090: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00674093: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067409a: mov esp, ebp */ r_esp = r_ebp;
    /* 0067409c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067409d: ret  */ FN_RET(0x00673fb8); r_esp += 4; return;
L_0067409e:; BB(0x0067409e);
    /* 0067409e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006740a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006740a3: jmp 0x674087 */ goto L_00674087;
}

