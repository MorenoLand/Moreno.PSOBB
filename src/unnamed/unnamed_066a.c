#include "protos.h"

void f_0066a060(void) /* sub_66A060 */
{
    FN_ENTER(0x0066a060);
    /* 0066a060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a061: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066a063: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0066a069: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066a06b: je 0x66a071 */ if (fZ) goto L_0066a071;
L_0066a06d:; BB(0x0066a06d);
    /* 0066a06d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a06e: ret 4 */ FN_RET(0x0066a060); r_esp += 8; return;
L_0066a071:; BB(0x0066a071);
    /* 0066a071: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a073: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66a078u); f_0073ec50();
    /* 0066a078: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0066a07c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a07d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a07f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a080: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x66a085u); f_007354fc();
    /* 0066a085: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a088: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0066a08e: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x66a093u); f_007a61a4();
    /* 0066a093: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a096: je 0x66a115 */ if (fZ) goto L_0066a115;
L_0066a098:; BB(0x0066a098);
    /* 0066a098: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0066a09a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0066a09c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x66a0a1u); f_00792fe8();
    /* 0066a0a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a0a4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0a8: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066a0ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a0b1: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x66a0b6u); f_00735db8();
L_0066a0b6:; BB(0x0066a0b6);
    /* 0066a0b6: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066a0bc: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x66a0c1u); f_0073608c();
    /* 0066a0c1: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066a0c7: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x66a0ccu); f_00736458();
    /* 0066a0cc: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0066a0d2: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066a0d9: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066a0de: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066a0e5: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0066a0eb: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066a0f2: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066a0f7: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066a0fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066a102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a104: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0066a10b: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66a110u); f_00791748();
    /* 0066a110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066a111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a112: ret 4 */ FN_RET(0x0066a060); r_esp += 8; return;
L_0066a115:; BB(0x0066a115);
    /* 0066a115: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a117: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0066a119: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x66a11eu); f_00792fe8();
    /* 0066a11e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a121: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a125: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066a12b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a12d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a12e: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x66a133u); f_00735db8();
    /* 0066a133: jmp 0x66a0b6 */ goto L_0066a0b6;
}

void f_0066a138(void) /* sub_66A138 */
{
    FN_ENTER(0x0066a138);
    /* 0066a138: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a139: mov ebp, esp */ r_ebp = r_esp;
    /* 0066a13b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a13d: push 0x8e8b78 */ { u32 v = 0x8e8b78u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a142: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066a148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a149: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066a150: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a153: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066a156: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066a159: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066a15c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066a15f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a162: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a163: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a164: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a166: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x66a16bu); f_00814298();
    /* 0066a16b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066a172: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a174: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66a179u); f_005caba4();
    /* 0066a179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a17c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066a17f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066a181: je 0x66a1ab */ if (fZ) goto L_0066a1ab;
L_0066a183:; BB(0x0066a183);
    /* 0066a183: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066a18a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066a191: push 0x66a270 */ { u32 v = 0x66a270u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a196: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a19c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066a19f: call 0x788938 */ r_esp -= 4; W32(r_esp, 0x66a1a4u); f_00788938();
    /* 0066a1a4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066a1ab:; BB(0x0066a1ab);
    /* 0066a1ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a1ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066a1b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0066a1b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a1b8: ret 4 */ FN_RET(0x0066a138); r_esp += 8; return;
}

void f_0066a1bc(void) /* sub_66A1BC */
{
    FN_ENTER(0x0066a1bc);
    /* 0066a1bc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a1bf: fld dword ptr [0x939a2c] */ FPUSH(R_F32((u32)(0x939a2cu)));
    /* 0066a1c5: fadd dword ptr [ecx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc8u));
    /* 0066a1cb: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 0066a1d1: fst dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0));
    /* 0066a1d7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066a1da: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066a1dd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066a1e0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0066a1e3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0066a1e6: fadd dword ptr [eax*4 + 0x939998] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x939998u));
    /* 0066a1ed: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066a1ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066a1f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066a1f2: jae 0x66a1fe */ if (!fC) goto L_0066a1fe;
L_0066a1f4:; BB(0x0066a1f4);
    /* 0066a1f4: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
L_0066a1fe:; BB(0x0066a1fe);
    /* 0066a1fe: mov eax, dword ptr [ecx + 0xcc] */ r_eax = R32((u32)(r_ecx+0xccu));
    /* 0066a204: add eax, 0x150 */ {  u32 a = r_eax; u32 b = 0x150u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066a209: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 0066a20f: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x66a214u); f_006698e0();
    /* 0066a214: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a217: ret  */ FN_RET(0x0066a1bc); r_esp += 4; return;
}

void f_0066a218(void) /* sub_66A218 */
{
    FN_ENTER(0x0066a218);
    /* 0066a218: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a219: mov edi, ecx */ r_edi = r_ecx;
    /* 0066a21b: mov ecx, edi */ r_ecx = r_edi;
    /* 0066a21d: call 0x669bd8 */ r_esp -= 4; W32(r_esp, 0x66a222u); f_00669bd8();
    /* 0066a222: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0066a228: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066a22a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066a22c: jg 0x66a230 */ if ((!fZ&&fS==fO)) goto L_0066a230;
L_0066a22e:; BB(0x0066a22e);
    /* 0066a22e: mov eax, edx */ r_eax = r_edx;
L_0066a230:; BB(0x0066a230);
    /* 0066a230: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066a231: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a233: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a235: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066a238: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a23a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a23c: mov dword ptr [edi + 0x8c], eax */ W32((u32)(r_edi+0x8cu), r_eax);
    /* 0066a242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a244: jne 0x66a25a */ if (!fZ) goto L_0066a25a;
L_0066a246:; BB(0x0066a246);
    /* 0066a246: push 0x939b5c */ { u32 v = 0x939b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a24b: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a250: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a255u); f_0061cdb0();
    /* 0066a255: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a258: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066a259: ret  */ FN_RET(0x0066a218); r_esp += 4; return;
L_0066a25a:; BB(0x0066a25a);
    /* 0066a25a: push 0x939b6c */ { u32 v = 0x939b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a25f: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a264: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a269u); f_0061cdb0();
    /* 0066a269: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a26c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066a26d: ret  */ FN_RET(0x0066a218); r_esp += 4; return;
}

void f_0066a270(void) /* sub_66A270 */
{
    FN_ENTER(0x0066a270);
    /* 0066a270: mov eax, dword ptr [0xa3b0e8] */ r_eax = R32((u32)(0xa3b0e8u));
    /* 0066a275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a277: jne 0x66a2a2 */ if (!fZ) goto L_0066a2a2;
L_0066a279:; BB(0x0066a279);
    /* 0066a279: call 0x6d2dec */ r_esp -= 4; W32(r_esp, 0x66a27eu); f_006d2dec();
    /* 0066a27e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a280: je 0x66a298 */ if (fZ) goto L_0066a298;
L_0066a282:; BB(0x0066a282);
    /* 0066a282: push 0x3fe */ { u32 v = 0x3feu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a287: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x66a28cu); f_006bb100();
    /* 0066a28c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a28e: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x66a293u); f_007a60dc();
    /* 0066a293: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a296: jmp 0x66a2af */ goto L_0066a2af;
L_0066a298:; BB(0x0066a298);
    /* 0066a298: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a29a: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x66a29fu); f_007a60dc();
    /* 0066a29f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066a2a0: jmp 0x66a2af */ goto L_0066a2af;
L_0066a2a2:; BB(0x0066a2a2);
    /* 0066a2a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a2a5: jne 0x66a2af */ if (!fZ) goto L_0066a2af;
L_0066a2a7:; BB(0x0066a2a7);
    /* 0066a2a7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a2a9: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x66a2aeu); f_007a60dc();
    /* 0066a2ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0066a2af:; BB(0x0066a2af);
    /* 0066a2af: call 0x6c2f54 */ r_esp -= 4; W32(r_esp, 0x66a2b4u); f_006c2f54();
    /* 0066a2b4: ret  */ FN_RET(0x0066a270); r_esp += 4; return;
}

void f_0066a2b8(void) /* sub_66A2B8 */
{
    FN_ENTER(0x0066a2b8);
    /* 0066a2b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a2b9: mov esi, ecx */ r_esi = r_ecx;
    /* 0066a2bb: fld dword ptr [0x9399fc] */ FPUSH(R_F32((u32)(0x9399fcu)));
    /* 0066a2c1: fadd dword ptr [esi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc8u));
    /* 0066a2c7: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 0066a2cd: call 0x66d274 */ r_esp -= 4; W32(r_esp, 0x66a2d2u); f_0066d274();
    /* 0066a2d2: fld dword ptr [0x9399f8] */ FPUSH(R_F32((u32)(0x9399f8u)));
    /* 0066a2d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066a2da: fcomp dword ptr [esi + 0xc8] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xc8u))); FPOP();
    /* 0066a2e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066a2e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066a2e3: jae 0x66a2ef */ if (!fC) goto L_0066a2ef;
L_0066a2e5:; BB(0x0066a2e5);
    /* 0066a2e5: mov dword ptr [esi + 0xc8], 0 */ W32((u32)(r_esi+0xc8u), 0x0u);
L_0066a2ef:; BB(0x0066a2ef);
    /* 0066a2ef: mov ecx, esi */ r_ecx = r_esi;
    /* 0066a2f1: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x66a2f6u); f_006698e0();
    /* 0066a2f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066a2f7: ret  */ FN_RET(0x0066a2b8); r_esp += 4; return;
}

void f_0066a2f8(void) /* sub_66A2F8 */
{
    FN_ENTER(0x0066a2f8);
    /* 0066a2f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a2f9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a2fc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066a2fe: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0066a301: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066a303: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a308: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a30d: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x66a310u); call_ind(t); }
    /* 0066a310: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a312: jne 0x66a319 */ if (!fZ) goto L_0066a319;
L_0066a314:; BB(0x0066a314);
    /* 0066a314: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a317: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a318: ret  */ FN_RET(0x0066a2f8); r_esp += 4; return;
L_0066a319:; BB(0x0066a319);
    /* 0066a319: call 0x66d458 */ r_esp -= 4; W32(r_esp, 0x66a31eu); f_0066d458();
    /* 0066a31e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a320: je 0x66a327 */ if (fZ) goto L_0066a327;
L_0066a322:; BB(0x0066a322);
    /* 0066a322: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a327u); f_0061cdb0();
L_0066a327:; BB(0x0066a327);
    /* 0066a327: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 0066a32d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a32f: jne 0x66a33b */ if (!fZ) goto L_0066a33b;
L_0066a331:; BB(0x0066a331);
    /* 0066a331: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a333: call 0x66d184 */ r_esp -= 4; W32(r_esp, 0x66a338u); f_0066d184();
    /* 0066a338: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066a339: jmp 0x66a348 */ goto L_0066a348;
L_0066a33b:; BB(0x0066a33b);
    /* 0066a33b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a33e: jne 0x66a348 */ if (!fZ) goto L_0066a348;
L_0066a340:; BB(0x0066a340);
    /* 0066a340: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a342: call 0x66d184 */ r_esp -= 4; W32(r_esp, 0x66a347u); f_0066d184();
    /* 0066a347: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0066a348:; BB(0x0066a348);
    /* 0066a348: call 0x66d4a8 */ r_esp -= 4; W32(r_esp, 0x66a34du); f_0066d4a8();
    /* 0066a34d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x66a352u); f_0082d7b0();
    /* 0066a352: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0066a355: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66a35au); f_0082d838();
    /* 0066a35a: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0066a35d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a35f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66a364u); f_0082d8bc();
    /* 0066a364: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a366: call 0x66d210 */ r_esp -= 4; W32(r_esp, 0x66a36bu); f_0066d210();
    /* 0066a36b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066a36c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x66a371u); f_0082dbac();
    /* 0066a371: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 0066a377: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0066a37a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0066a37e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066a383: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066a387: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0066a38b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066a38f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0066a392: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0066a396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a397: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a399: call 0x66d234 */ r_esp -= 4; W32(r_esp, 0x66a39eu); f_0066d234();
    /* 0066a39e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a3a1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x66a3a6u); f_0082dab0();
    /* 0066a3a6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66a3abu); f_0082da80();
    /* 0066a3ab: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a3ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a3af: ret  */ FN_RET(0x0066a2f8); r_esp += 4; return;
}

void f_0066a3b0(void) /* sub_66A3B0 */
{
    FN_ENTER(0x0066a3b0);
    /* 0066a3b0: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0066a3b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066a3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066a3ba: jg 0x66a3be */ if ((!fZ&&fS==fO)) goto L_0066a3be;
L_0066a3bc:; BB(0x0066a3bc);
    /* 0066a3bc: mov eax, edx */ r_eax = r_edx;
L_0066a3be:; BB(0x0066a3be);
    /* 0066a3be: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066a3bf: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a3c1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a3c3: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066a3c6: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a3c8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a3ca: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 0066a3d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a3d2: jne 0x66a3e7 */ if (!fZ) goto L_0066a3e7;
L_0066a3d4:; BB(0x0066a3d4);
    /* 0066a3d4: push 0x939b6c */ { u32 v = 0x939b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a3d9: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a3de: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a3e3u); f_0061cdb0();
    /* 0066a3e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a3e6: ret  */ FN_RET(0x0066a3b0); r_esp += 4; return;
L_0066a3e7:; BB(0x0066a3e7);
    /* 0066a3e7: push 0x939b5c */ { u32 v = 0x939b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a3ec: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a3f1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a3f6u); f_0061cdb0();
    /* 0066a3f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a3f9: ret  */ FN_RET(0x0066a3b0); r_esp += 4; return;
}

void f_0066a3fc(void)
{
    FN_ENTER(0x0066a3fc);
    /* 0066a3fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a3fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0066a3ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a401: push 0x8e8ba0 */ { u32 v = 0x8e8ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a406: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066a40c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a40d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066a414: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a417: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066a41a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066a41d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066a420: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066a423: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a428: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066a42f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66a434u); f_005caba4();
    /* 0066a434: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066a435: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066a438: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a43a: je 0x66a473 */ if (fZ) goto L_0066a473;
L_0066a43c:; BB(0x0066a43c);
    /* 0066a43c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066a443: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066a44a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a44d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a453: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066a456: call 0x66a478 */ r_esp -= 4; W32(r_esp, 0x66a45bu); f_0066a478();
    /* 0066a45b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066a45e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066a465:; BB(0x0066a465);
    /* 0066a465: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a468: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066a46f: mov esp, ebp */ r_esp = r_ebp;
    /* 0066a471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a472: ret  */ FN_RET(0x0066a3fc); r_esp += 4; return;
L_0066a473:; BB(0x0066a473);
    /* 0066a473: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066a475: jmp 0x66a465 */ goto L_0066a465;
}

void f_0066a478(void) /* sub_66A478 */
{
    FN_ENTER(0x0066a478);
    /* 0066a478: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a479: mov esi, ecx */ r_esi = r_ecx;
    /* 0066a47b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a47f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a483: mov ecx, esi */ r_ecx = r_esi;
    /* 0066a485: call 0x66a4c0 */ r_esp -= 4; W32(r_esp, 0x66a48au); f_0066a4c0();
    /* 0066a48a: mov dword ptr [esi], 0xb352e0 */ W32((u32)(r_esi), 0xb352e0u);
    /* 0066a490: mov eax, dword ptr [0x9c9554] */ r_eax = R32((u32)(0x9c9554u));
    /* 0066a495: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0066a498: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0066a49e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066a4a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066a4a2: jg 0x66a4a6 */ if ((!fZ&&fS==fO)) goto L_0066a4a6;
L_0066a4a4:; BB(0x0066a4a4);
    /* 0066a4a4: mov eax, edx */ r_eax = r_edx;
L_0066a4a6:; BB(0x0066a4a6);
    /* 0066a4a6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066a4a7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a4a9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a4ab: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066a4ae: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a4b0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066a4b2: mov dword ptr [esi + 0x8c], eax */ W32((u32)(r_esi+0x8cu), r_eax);
    /* 0066a4b8: mov eax, esi */ r_eax = r_esi;
    /* 0066a4ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066a4bb: ret 8 */ FN_RET(0x0066a478); r_esp += 12; return;
}

void f_0066a4c0(void) /* sub_66A4C0 */
{
    FN_ENTER(0x0066a4c0);
    /* 0066a4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066a4c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a4c5: push 0x8e8bd6 */ { u32 v = 0x8e8bd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a4ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066a4d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a4d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066a4d8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a4db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066a4de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0066a4e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0066a4e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066a4e7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a4ea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a4ed: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0066a4f0: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x66a4f5u); f_0066982c();
    /* 0066a4f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066a4fc: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066a4ff: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0066a505: mov dword ptr [ebx], 0xb35200 */ W32((u32)(r_ebx), 0xb35200u);
    /* 0066a50b: mov esi, dword ptr [0x9c9548] */ r_esi = R32((u32)(0x9c9548u));
    /* 0066a511: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 0066a51b: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 0066a51e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0066a520: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a521: mov dword ptr [ebx + 0xcc], edi */ W32((u32)(r_ebx+0xccu), r_edi);
    /* 0066a527: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066a528: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a52a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a52c: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066a52f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a531: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a533: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 0066a539: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 0066a53f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66a544u); f_005b8610();
    /* 0066a544: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066a547: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 0066a54d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a54f: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 0066a555: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66a55au); f_005b8610();
    /* 0066a55a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066a55d: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 0066a563: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a565: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 0066a56b: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x66a570u); f_005b8638();
    /* 0066a570: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066a573: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0066a579: mov eax, dword ptr [0xa8fcb8] */ r_eax = R32((u32)(0xa8fcb8u));
    /* 0066a57e: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 0066a584: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66a589u); f_006dc358();
    /* 0066a589: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066a58c: je 0x66a5b4 */ if (fZ) goto L_0066a5b4;
L_0066a58e:; BB(0x0066a58e);
    /* 0066a58e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066a591: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
L_0066a59b:; BB(0x0066a59b);
    /* 0066a59b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066a59e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066a5a1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066a5a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a5a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066a5ae: mov esp, ebp */ r_esp = r_ebp;
    /* 0066a5b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a5b1: ret 8 */ FN_RET(0x0066a4c0); r_esp += 12; return;
L_0066a5b4:; BB(0x0066a5b4);
    /* 0066a5b4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0066a5bb: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a5c0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66a5c5u); f_008581c5();
    /* 0066a5c5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066a5c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a5cb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066a5ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a5d0: je 0x66a609 */ if (fZ) goto L_0066a609;
L_0066a5d2:; BB(0x0066a5d2);
    /* 0066a5d2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0066a5d9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066a5e0: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a5e5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066a5e8: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066a5eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066a5ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a5ef: call 0x640fb4 */ r_esp -= 4; W32(r_esp, 0x66a5f4u); f_00640fb4();
    /* 0066a5f4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0066a5fb:; BB(0x0066a5fb);
    /* 0066a5fb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066a5fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066a601: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 0066a607: jmp 0x66a59b */ goto L_0066a59b;
L_0066a609:; BB(0x0066a609);
    /* 0066a609: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066a60b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066a60e: jmp 0x66a5fb */ goto L_0066a5fb;
}

void f_0066a610(void) /* sub_66A610 */
{
    FN_ENTER(0x0066a610);
    /* 0066a610: call 0x669048 */ r_esp -= 4; W32(r_esp, 0x66a615u); f_00669048();
    /* 0066a615: ret  */ FN_RET(0x0066a610); r_esp += 4; return;
}

void f_0066a618(void) /* sub_66A618 */
{
    FN_ENTER(0x0066a618);
    /* 0066a618: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a619: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a61a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a61b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a61c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a61f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066a621: push 0x936508 */ { u32 v = 0x936508u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a626: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a62b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a630u); f_0061cdb0();
    /* 0066a630: push 0x936518 */ { u32 v = 0x936518u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a635: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 0066a63a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a63fu); f_0061cdb0();
    /* 0066a63f: push 0x936528 */ { u32 v = 0x936528u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a644: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a649: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a64eu); f_0061cdb0();
    /* 0066a64e: push 0x936538 */ { u32 v = 0x936538u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a653: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a658: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a65du); f_0061cdb0();
    /* 0066a65d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a660: lea edx, [ebx + 0x68] */ r_edx = (u32)(r_ebx+0x68u);
    /* 0066a663: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a665: lea ecx, [ebx + 0xc0] */ r_ecx = (u32)(r_ebx+0xc0u);
    /* 0066a66b: mov esi, eax */ r_esi = r_eax;
    /* 0066a66d: mov edi, edx */ r_edi = r_edx;
    /* 0066a66f: mov ebp, ecx */ r_ebp = r_ecx;
L_0066a671:; BB(0x0066a671);
    /* 0066a671: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0066a678: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0066a67d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0066a685: mov dword ptr [esp + 8], 0xc0400000 */ W32((u32)(r_esp+0x8u), 0xc0400000u);
    /* 0066a68d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x66a692u); f_0082d990();
    /* 0066a692: mov ecx, edi */ r_ecx = r_edi;
    /* 0066a694: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66a699u); f_0082d838();
    /* 0066a699: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0066a69c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a69e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66a6a3u); f_0082d8bc();
    /* 0066a6a3: lea edx, [esi + 0x9c955c] */ r_edx = (u32)(r_esi+0x9c955cu);
    /* 0066a6a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a6aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a6ac: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x66a6b1u); f_00830aa0();
    /* 0066a6b1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66a6b6u); f_0082da80();
    /* 0066a6b6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0066a6bb: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x66a6c0u); f_0082d990();
    /* 0066a6c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066a6c2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66a6c7u); f_0082d838();
    /* 0066a6c7: mov edx, dword ptr [ebx + 0x84] */ r_edx = R32((u32)(r_ebx+0x84u));
    /* 0066a6cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a6cf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66a6d4u); f_0082d8bc();
    /* 0066a6d4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0066a6d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a6d8: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0066a6dc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a6de: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x66a6e3u); f_00830aa0();
    /* 0066a6e3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66a6e8u); f_0082da80();
    /* 0066a6e8: fld dword ptr [0x9399e0] */ FPUSH(R_F32((u32)(0x9399e0u)));
    /* 0066a6ee: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0066a6f2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0066a6f4: mov eax, dword ptr [esi + ebx + 0xc0] */ r_eax = R32((u32)(r_esi+r_ebx+0xc0u));
    /* 0066a6fb: fld dword ptr [esi + ebx + 0xc4] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0xc4u)));
    /* 0066a702: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066a704: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066a708: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066a70a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0066a70e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0066a712: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0066a716: mov eax, dword ptr [esi + ebx + 0xc8] */ r_eax = R32((u32)(r_esi+r_ebx+0xc8u));
    /* 0066a71d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0066a721: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0066a724: mov eax, 0xffff0000 */ r_eax = 0xffff0000u;
    /* 0066a729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a72a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a72b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a72c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a72d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a732u); f_0061cdb0();
    /* 0066a732: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a737: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a738: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a73du); f_0061cdb0();
    /* 0066a73d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a740: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066a743: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066a746: cmp esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a749: jl 0x66a671 */ if ((fS!=fO)) goto L_0066a671;
L_0066a74f:; BB(0x0066a74f);
    /* 0066a74f: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0066a755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066a757: jle 0x66a7b3 */ if ((fZ||fS!=fO)) goto L_0066a7b3;
L_0066a759:; BB(0x0066a759);
    /* 0066a759: mov dword ptr [ebx + 0x100], 0 */ W32((u32)(r_ebx+0x100u), 0x0u);
L_0066a763:; BB(0x0066a763);
    /* 0066a763: push 0x939b7c */ { u32 v = 0x939b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a768: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a76d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a772u); f_0061cdb0();
    /* 0066a772: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a775: mov eax, dword ptr [ebx + 0x100] */ r_eax = R32((u32)(r_ebx+0x100u));
    /* 0066a77b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a77d: je 0x66a799 */ if (fZ) goto L_0066a799;
L_0066a77f:; BB(0x0066a77f);
    /* 0066a77f: push 0x939b8c */ { u32 v = 0x939b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a784: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a789: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a78eu); f_0061cdb0();
    /* 0066a78e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a791: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a794: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066a795: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a796: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066a797: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066a798: ret  */ FN_RET(0x0066a618); r_esp += 4; return;
L_0066a799:; BB(0x0066a799);
    /* 0066a799: push 0x939b9c */ { u32 v = 0x939b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a79e: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a7a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a7a8u); f_0061cdb0();
    /* 0066a7a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a7ab: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a7ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066a7af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a7b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066a7b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066a7b2: ret  */ FN_RET(0x0066a618); r_esp += 4; return;
L_0066a7b3:; BB(0x0066a7b3);
    /* 0066a7b3: mov dword ptr [ebx + 0x100], 1 */ W32((u32)(r_ebx+0x100u), 0x1u);
    /* 0066a7bd: jmp 0x66a763 */ goto L_0066a763;
}

void f_0066a7c0(void) /* sub_66A7C0 */
{
    FN_ENTER(0x0066a7c0);
    /* 0066a7c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a7c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a7c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a7c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a7c4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a7c7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066a7c9: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a7cd: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a7d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066a7d3: call 0x668b74 */ r_esp -= 4; W32(r_esp, 0x66a7d8u); f_00668b74();
    /* 0066a7d8: mov dword ptr [ebx], 0xb35020 */ W32((u32)(r_ebx), 0xb35020u);
    /* 0066a7de: mov eax, dword ptr [0x9c9534] */ r_eax = R32((u32)(0x9c9534u));
    /* 0066a7e3: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0066a7e6: lea eax, [ebx + 0xf0] */ r_eax = (u32)(r_ebx+0xf0u);
    /* 0066a7ec: lea edx, [ebx + 0x68] */ r_edx = (u32)(r_ebx+0x68u);
    /* 0066a7ef: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0066a7f2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0066a7f4: lea esi, [ebx + 0xc0] */ r_esi = (u32)(r_ebx+0xc0u);
    /* 0066a7fa: lea ecx, [ebx + 0x100] */ r_ecx = (u32)(r_ebx+0x100u);
    /* 0066a800: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0066a804: mov ebp, eax */ r_ebp = r_eax;
L_0066a806:; BB(0x0066a806);
    /* 0066a806: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0066a80b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x66a810u); f_0082d990();
    /* 0066a810: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0066a813: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66a818u); f_0082d838();
    /* 0066a818: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0066a81b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a81d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66a822u); f_0082d8bc();
    /* 0066a822: lea edx, [edi + 0x9c955c] */ r_edx = (u32)(r_edi+0x9c955cu);
    /* 0066a828: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a829: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a82b: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x66a830u); f_00830aa0();
    /* 0066a830: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66a835u); f_0082da80();
    /* 0066a835: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0066a839: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 0066a840: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066a843: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066a846: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066a849: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0066a84b: ja 0x66a806 */ if ((!fC&&!fZ)) goto L_0066a806;
L_0066a84d:; BB(0x0066a84d);
    /* 0066a84d: mov edx, dword ptr [ebx + 0x8c] */ r_edx = R32((u32)(r_ebx+0x8cu));
    /* 0066a853: mov dword ptr [ebx], 0xb35260 */ W32((u32)(r_ebx), 0xb35260u);
    /* 0066a859: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066a85b: mov eax, dword ptr [0x9c954c] */ r_eax = R32((u32)(0x9c954cu));
    /* 0066a860: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0066a863: jle 0x66a8a6 */ if ((fZ||fS!=fO)) goto L_0066a8a6;
L_0066a865:; BB(0x0066a865);
    /* 0066a865: mov dword ptr [ebx + 0x100], 0 */ W32((u32)(r_ebx+0x100u), 0x0u);
L_0066a86f:; BB(0x0066a86f);
    /* 0066a86f: mov edx, dword ptr [ebx + 0xb4] */ r_edx = R32((u32)(r_ebx+0xb4u));
    /* 0066a875: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a877: je 0x66a89a */ if (fZ) goto L_0066a89a;
L_0066a879:; BB(0x0066a879);
    /* 0066a879: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066a87d: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066a882: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066a886: mov esi, dword ptr [ebx + 0xb4] */ r_esi = R32((u32)(r_ebx+0xb4u));
    /* 0066a88c: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 0066a890: or edx, 0xffff0004 */ {  u32 a = r_edx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066a896: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
L_0066a89a:; BB(0x0066a89a);
    /* 0066a89a: mov eax, ebx */ r_eax = r_ebx;
    /* 0066a89c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a89f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066a8a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a8a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066a8a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066a8a3: ret 8 */ FN_RET(0x0066a7c0); r_esp += 12; return;
L_0066a8a6:; BB(0x0066a8a6);
    /* 0066a8a6: mov dword ptr [ebx + 0x100], 1 */ W32((u32)(r_ebx+0x100u), 0x1u);
    /* 0066a8b0: jmp 0x66a86f */ goto L_0066a86f;
}

void f_0066a8b4(void) /* sub_66A8B4 */
{
    FN_ENTER(0x0066a8b4);
    /* 0066a8b4: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a8b7: mov eax, dword ptr [ecx + 0x100] */ r_eax = R32((u32)(r_ecx+0x100u));
    /* 0066a8bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a8bf: je 0x66a921 */ if (fZ) goto L_0066a921;
L_0066a8c1:; BB(0x0066a8c1);
    /* 0066a8c1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0066a8c4: push dword ptr [ecx + 0x88] */ { u32 v = R32((u32)(r_ecx+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a8ca: push 0x939bb0 */ { u32 v = 0x939bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8d0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x66a8d5u); f_00857e29();
    /* 0066a8d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a8d8: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 0066a8dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a8de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a8e0: je 0x66a90f */ if (fZ) goto L_0066a90f;
L_0066a8e2:; BB(0x0066a8e2);
    /* 0066a8e2: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 0066a8e6: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0066a8ea: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 0066a8ee: mov ebp, eax */ r_ebp = r_eax;
L_0066a8f0:; BB(0x0066a8f0);
    /* 0066a8f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8f1: call 0x859b37 */ r_esp -= 4; W32(r_esp, 0x66a8f6u); f_00859b37();
    /* 0066a8f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066a8f7: mov word ptr [esp + ebp*2], ax */ W16((u32)(r_esp+r_ebp*2), (u16)r_eax);
    /* 0066a8fb: movzx edx, word ptr [esp + ebp*2 + 2] */ r_edx = (u32)R16((u32)(r_esp+r_ebp*2+0x2u));
    /* 0066a900: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066a903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a905: jne 0x66a8f0 */ if (!fZ) goto L_0066a8f0;
L_0066a907:; BB(0x0066a907);
    /* 0066a907: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0066a90b: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
L_0066a90f:; BB(0x0066a90f);
    /* 0066a90f: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 0066a914: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0066a917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a918: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a919: call 0x66a92c */ r_esp -= 4; W32(r_esp, 0x66a91eu); f_0066a92c();
    /* 0066a91e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066a921:; BB(0x0066a921);
    /* 0066a921: mov eax, 1 */ r_eax = 0x1u;
    /* 0066a926: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a929: ret 4 */ FN_RET(0x0066a8b4); r_esp += 8; return;
}

void f_0066a92c(void) /* sub_66A92C */
{
    FN_ENTER(0x0066a92c);
    /* 0066a92c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a92d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066a92f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a931: push 0x8e8bfc */ { u32 v = 0x8e8bfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a936: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066a93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a93d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066a944: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066a947: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066a94a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066a94d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066a950: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066a953: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a955: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066a95c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66a961u); f_005caba4();
    /* 0066a961: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066a962: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066a965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a967: je 0x66a9a5 */ if (fZ) goto L_0066a9a5;
L_0066a969:; BB(0x0066a969);
    /* 0066a969: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066a970: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066a977: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 0066a97b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066a97e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a97f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a982: push dword ptr [0xaca328] */ { u32 v = R32((u32)(0xaca328u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a988: call 0x66a9ac */ r_esp -= 4; W32(r_esp, 0x66a98du); f_0066a9ac();
    /* 0066a98d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066a990: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066a997:; BB(0x0066a997);
    /* 0066a997: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a99a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066a9a1: mov esp, ebp */ r_esp = r_ebp;
    /* 0066a9a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a9a4: ret  */ FN_RET(0x0066a92c); r_esp += 4; return;
L_0066a9a5:; BB(0x0066a9a5);
    /* 0066a9a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066a9a7: jmp 0x66a997 */ goto L_0066a997;
}

void f_0066a9ac(void) /* sub_66A9AC */
{
    FN_ENTER(0x0066a9ac);
    /* 0066a9ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9ad: mov esi, ecx */ r_esi = r_ecx;
    /* 0066a9af: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a9b3: mov ecx, esi */ r_ecx = r_esi;
    /* 0066a9b5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x66a9bau); f_008193cc();
    /* 0066a9ba: mov dword ptr [esi], 0xb352c0 */ W32((u32)(r_esi), 0xb352c0u);
    /* 0066a9c0: mov eax, dword ptr [0x9c9550] */ r_eax = R32((u32)(0x9c9550u));
    /* 0066a9c5: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0066a9c8: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 0066a9cb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9cd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066a9d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9d2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x66a9d7u); f_00857dec();
    /* 0066a9d7: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 0066a9dc: mov dword ptr [esi + 0x5c], 0xffffffff */ W32((u32)(r_esi+0x5cu), 0xffffffffu);
    /* 0066a9e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a9e5: mov word ptr [esi + 0x5a], ax */ W16((u32)(r_esi+0x5au), (u16)r_eax);
    /* 0066a9e9: mov dword ptr [esi + 0x64], 0 */ W32((u32)(r_esi+0x64u), 0x0u);
    /* 0066a9f0: mov word ptr [esi + 0x68], dx */ W16((u32)(r_esi+0x68u), (u16)r_edx);
    /* 0066a9f4: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 0066a9f7: mov eax, esi */ r_eax = r_esi;
    /* 0066a9f9: mov dword ptr [esi + 0x60], 0x18 */ W32((u32)(r_esi+0x60u), 0x18u);
    /* 0066aa00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066aa03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066aa04: ret 0xc */ FN_RET(0x0066a9ac); r_esp += 16; return;
}

void f_0066aa08(void) /* sub_66AA08 */
{
    FN_ENTER(0x0066aa08);
    /* 0066aa08: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 0066aa0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aa0d: je 0x66aa30 */ if (fZ) goto L_0066aa30;
L_0066aa0f:; BB(0x0066aa0f);
    /* 0066aa0f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aa12: je 0x66aa2a */ if (fZ) goto L_0066aa2a;
L_0066aa14:; BB(0x0066aa14);
    /* 0066aa14: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aa17: jne 0x66aa1f */ if (!fZ) goto L_0066aa1f;
L_0066aa19:; BB(0x0066aa19);
    /* 0066aa19: call 0x66aa68 */ r_esp -= 4; W32(r_esp, 0x66aa1eu); f_0066aa68();
    /* 0066aa1e: ret  */ FN_RET(0x0066aa08); r_esp += 4; return;
L_0066aa1f:; BB(0x0066aa1f);
    /* 0066aa1f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066aa22: jne 0x66aa2f */ if (!fZ) goto L_0066aa2f;
L_0066aa24:; BB(0x0066aa24);
    /* 0066aa24: call 0x66aa38 */ r_esp -= 4; W32(r_esp, 0x66aa29u); f_0066aa38();
    /* 0066aa29: ret  */ FN_RET(0x0066aa08); r_esp += 4; return;
L_0066aa2a:; BB(0x0066aa2a);
    /* 0066aa2a: call 0x66aa80 */ r_esp -= 4; W32(r_esp, 0x66aa2fu); f_0066aa80();
L_0066aa2f:; BB(0x0066aa2f);
    /* 0066aa2f: ret  */ FN_RET(0x0066aa08); r_esp += 4; return;
L_0066aa30:; BB(0x0066aa30);
    /* 0066aa30: call 0x66ad20 */ r_esp -= 4; W32(r_esp, 0x66aa35u); f_0066ad20();
    /* 0066aa35: ret  */ FN_RET(0x0066aa08); r_esp += 4; return;
}

void f_0066aa38(void) /* sub_66AA38 */
{
    FN_ENTER(0x0066aa38);
    /* 0066aa38: fld dword ptr [ecx + 0x64] */ FPUSH(R_F32((u32)(r_ecx+0x64u)));
    /* 0066aa3b: fsub dword ptr [0x9399d0] */ ST(0) = ST(0) - R_F32((u32)(0x9399d0u));
    /* 0066aa41: fcom dword ptr [0x9399d4] */ fx_compare(ST(0), R_F32((u32)(0x9399d4u))); 
    /* 0066aa47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066aa49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066aa4a: jb 0x66aa50 */ if (fC) goto L_0066aa50;
L_0066aa4c:; BB(0x0066aa4c);
    /* 0066aa4c: fstp dword ptr [ecx + 0x64] */ W_F32((u32)(r_ecx+0x64u), ST(0)); FPOP();
    /* 0066aa4f: ret  */ FN_RET(0x0066aa38); r_esp += 4; return;
L_0066aa50:; BB(0x0066aa50);
    /* 0066aa50: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066aa52: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0066aa56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066aa58: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0066aa5b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066aa61: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0066aa65: ret  */ FN_RET(0x0066aa38); r_esp += 4; return;
}

void f_0066aa68(void) /* sub_66AA68 */
{
    FN_ENTER(0x0066aa68);
    /* 0066aa68: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0066aa6b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066aa6e: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0066aa71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066aa73: jge 0x66aa7c */ if ((fS==fO)) goto L_0066aa7c;
L_0066aa75:; BB(0x0066aa75);
    /* 0066aa75: mov dword ptr [ecx + 0x6c], 3 */ W32((u32)(r_ecx+0x6cu), 0x3u);
L_0066aa7c:; BB(0x0066aa7c);
    /* 0066aa7c: ret  */ FN_RET(0x0066aa68); r_esp += 4; return;
}

void f_0066aa80(void) /* sub_66AA80 */
{
    FN_ENTER(0x0066aa80);
    /* 0066aa80: fld dword ptr [0x9399d0] */ FPUSH(R_F32((u32)(0x9399d0u)));
    /* 0066aa86: fadd dword ptr [ecx + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x64u));
    /* 0066aa89: fcom dword ptr [0x9399cc] */ fx_compare(ST(0), R_F32((u32)(0x9399ccu))); 
    /* 0066aa8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066aa91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066aa92: jbe 0x66aaad */ if ((fC||fZ)) goto L_0066aaad;
L_0066aa94:; BB(0x0066aa94);
    /* 0066aa94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066aa96: mov dword ptr [ecx + 0x6c], 2 */ W32((u32)(r_ecx+0x6cu), 0x2u);
    /* 0066aa9d: mov eax, 0x437f0000 */ r_eax = 0x437f0000u;
    /* 0066aaa2: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0066aaa5: mov dword ptr [ecx + 0x60], 0x5a */ W32((u32)(r_ecx+0x60u), 0x5au);
    /* 0066aaac: ret  */ FN_RET(0x0066aa80); r_esp += 4; return;
L_0066aaad:; BB(0x0066aaad);
    /* 0066aaad: fstp dword ptr [ecx + 0x64] */ W_F32((u32)(r_ecx+0x64u), ST(0)); FPOP();
    /* 0066aab0: ret  */ FN_RET(0x0066aa80); r_esp += 4; return;
}

void f_0066aab4(void) /* sub_66AAB4 */
{
    FN_ENTER(0x0066aab4);
    /* 0066aab4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066aab5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066aab6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066aab7: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066aaba: mov edi, ecx */ r_edi = r_ecx;
    /* 0066aabc: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0066aac0: movzx eax, word ptr [edi + 0x68] */ r_eax = (u32)R16((u32)(r_edi+0x68u));
    /* 0066aac4: mov ecx, edi */ r_ecx = r_edi;
    /* 0066aac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066aac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066aac8: call 0x66ac98 */ r_esp -= 4; W32(r_esp, 0x66aacdu); f_0066ac98();
    /* 0066aacd: lea esi, [edi + 0x1c] */ r_esi = (u32)(r_edi+0x1cu);
    /* 0066aad0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066aad1: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x66aad6u); f_007ac344();
    /* 0066aad6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066aad7: fld dword ptr [0x9399c8] */ FPUSH(R_F32((u32)(0x9399c8u)));
    /* 0066aadd: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0066aae1: fld dword ptr [edi + 0x64] */ FPUSH(R_F32((u32)(r_edi+0x64u)));
    /* 0066aae4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066aae6: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0066aae8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066aaec: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066aaf0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0066aaf2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0066aaf6: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0066aafa: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0066aafd: fadd dword ptr [eax*4 + 0x939990] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x939990u));
    /* 0066ab04: fsubr dword ptr [esp + 0x10] */ ST(0) = R_F32((u32)(r_esp+0x10u)) - ST(0);
    /* 0066ab08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066ab0a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0066ab0e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0066ab13: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066ab18: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0066ab1c: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0066ab20: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0066ab24: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0066ab28: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0066ab2c: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0066ab30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066ab32: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066ab35: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0066ab38: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0066ab3c: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66ab41u); f_007ac12c();
    /* 0066ab41: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0066ab45: fld dword ptr [0x9399c8] */ FPUSH(R_F32((u32)(0x9399c8u)));
    /* 0066ab4b: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0066ab4f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066ab53: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066ab56: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066ab5a: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0066ab5e: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66ab63u); f_007ac12c();
    /* 0066ab63: fld dword ptr [0x9399c4] */ FPUSH(R_F32((u32)(0x9399c4u)));
    /* 0066ab69: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0066ab6d: fld dword ptr [0x9399c8] */ FPUSH(R_F32((u32)(0x9399c8u)));
    /* 0066ab73: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0066ab77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066ab79: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066ab7c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066ab80: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066ab84: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0066ab88: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66ab8du); f_007ac12c();
    /* 0066ab8d: fld dword ptr [0x9399c8] */ FPUSH(R_F32((u32)(0x9399c8u)));
    /* 0066ab93: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0066ab97: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0066ab9b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066ab9e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0066aba2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066aba6: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0066abaa: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66abafu); f_007ac12c();
    /* 0066abaf: fld dword ptr [0x9399c4] */ FPUSH(R_F32((u32)(0x9399c4u)));
    /* 0066abb5: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0066abb9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0066abbd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066abc0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0066abc4: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066abc8: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0066abcc: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66abd1u); f_007ac12c();
    /* 0066abd1: fld dword ptr [0x9399c8] */ FPUSH(R_F32((u32)(0x9399c8u)));
    /* 0066abd7: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0066abdb: fld dword ptr [0x9399c4] */ FPUSH(R_F32((u32)(0x9399c4u)));
    /* 0066abe1: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0066abe5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066abe7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066abea: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066abee: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066abf2: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0066abf6: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66abfbu); f_007ac12c();
    /* 0066abfb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0066abff: fld dword ptr [0x9399c4] */ FPUSH(R_F32((u32)(0x9399c4u)));
    /* 0066ac05: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0066ac09: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066ac0d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066ac10: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066ac14: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0066ac18: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66ac1du); f_007ac12c();
    /* 0066ac1d: fld dword ptr [0x9399c4] */ FPUSH(R_F32((u32)(0x9399c4u)));
    /* 0066ac23: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0066ac27: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0066ac2b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066ac2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0066ac2f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066ac32: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066ac34: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066ac38: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066ac3c: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0066ac40: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66ac45u); f_007ac12c();
    /* 0066ac45: fld dword ptr [edi + 0x64] */ FPUSH(R_F32((u32)(r_edi+0x64u)));
    /* 0066ac48: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0066ac4c: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0066ac51: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066ac56: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0066ac5a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0066ac5e: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0066ac62: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0066ac66: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0066ac6a: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0066ac6d: or ebp, 0xffffff */ {  u32 a = r_ebp; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0066ac73: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x66ac78u); f_0082dbac();
    /* 0066ac78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac7a: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066ac7e: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066ac82: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x66ac87u); f_007ac12c();
    /* 0066ac87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ac8a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x66ac8fu); f_0082dab0();
    /* 0066ac8f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066ac92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ac93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066ac94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066ac95: ret  */ FN_RET(0x0066aab4); r_esp += 4; return;
}

void f_0066ac98(void) /* sub_66AC98 */
{
    FN_ENTER(0x0066ac98);
    /* 0066ac98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac9a: mov ebp, 0x9c94a0 */ r_ebp = 0x9c94a0u;
    /* 0066ac9f: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0066aca3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66aca8u); f_006dc358();
    /* 0066aca8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066acab: je 0x66acbf */ if (fZ) goto L_0066acbf;
L_0066acad:; BB(0x0066acad);
    /* 0066acad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0066acb0: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0066acb2: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0066acb5: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0066acb8: mov eax, edi */ r_eax = r_edi;
    /* 0066acba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066acbb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066acbc: ret 8 */ FN_RET(0x0066ac98); r_esp += 12; return;
L_0066acbf:; BB(0x0066acbf);
    /* 0066acbf: mov edx, dword ptr [0xa48a3c] */ r_edx = R32((u32)(0xa48a3cu));
    /* 0066acc5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066acc8: je 0x66ace2 */ if (fZ) goto L_0066ace2;
L_0066acca:; BB(0x0066acca);
    /* 0066acca: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066accd: jne 0x66acd6 */ if (!fZ) goto L_0066acd6;
L_0066accf:; BB(0x0066accf);
    /* 0066accf: mov ebp, 0x9c94b8 */ r_ebp = 0x9c94b8u;
    /* 0066acd4: jmp 0x66ace7 */ goto L_0066ace7;
L_0066acd6:; BB(0x0066acd6);
    /* 0066acd6: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066acd9: jne 0x66ace7 */ if (!fZ) goto L_0066ace7;
L_0066acdb:; BB(0x0066acdb);
    /* 0066acdb: mov ebp, 0x9c94d0 */ r_ebp = 0x9c94d0u;
    /* 0066ace0: jmp 0x66ace7 */ goto L_0066ace7;
L_0066ace2:; BB(0x0066ace2);
    /* 0066ace2: mov ebp, 0x9c94a8 */ r_ebp = 0x9c94a8u;
L_0066ace7:; BB(0x0066ace7);
    /* 0066ace7: movzx edx, word ptr [esp + 0x10] */ r_edx = (u32)R16((u32)(r_esp+0x10u));
    /* 0066acec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066aced: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66acf2u); f_006dc358();
    /* 0066acf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066acf3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066acf5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066acf7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066acf9: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066acfb: jmp 0x66acad */ goto L_0066acad;
}

void f_0066ad00(void) /* sub_66AD00 */
{
    FN_ENTER(0x0066ad00);
    /* 0066ad00: mov dword ptr [0xa8fca8], 0x3f800000 */ W32((u32)(0xa8fca8u), 0x3f800000u);
    /* 0066ad0a: mov dword ptr [0xa8fcac], 0x41000000 */ W32((u32)(0xa8fcacu), 0x41000000u);
    /* 0066ad14: mov dword ptr [0xa8fcb0], 0x3fc00000 */ W32((u32)(0xa8fcb0u), 0x3fc00000u);
    /* 0066ad1e: ret  */ FN_RET(0x0066ad00); r_esp += 4; return;
}

void f_0066ad20(void) /* sub_66AD20 */
{
    FN_ENTER(0x0066ad20);
    /* 0066ad20: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0066ad23: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ad26: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0066ad29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ad2b: jge 0x66ad34 */ if ((fS==fO)) goto L_0066ad34;
L_0066ad2d:; BB(0x0066ad2d);
    /* 0066ad2d: mov dword ptr [ecx + 0x6c], 1 */ W32((u32)(r_ecx+0x6cu), 0x1u);
L_0066ad34:; BB(0x0066ad34);
    /* 0066ad34: ret  */ FN_RET(0x0066ad20); r_esp += 4; return;
}

void f_0066ad38(void) /* sub_66AD38 */
{
    FN_ENTER(0x0066ad38);
    /* 0066ad38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad39: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ad3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad3d: push 0x8e8c24 */ { u32 v = 0x8e8c24u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066ad48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066ad50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ad53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066ad56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066ad59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066ad5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066ad5f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066ad6b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66ad70u); f_008581c5();
    /* 0066ad70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066ad71: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066ad74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ad76: je 0x66add8 */ if (fZ) goto L_0066add8;
L_0066ad78:; BB(0x0066ad78);
    /* 0066ad78: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066ad7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066ad86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ad89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ad8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad8e: push 0x9c951c */ { u32 v = 0x9c951cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad93: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad95: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x66ad9au); f_005b7a84();
    /* 0066ad9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ad9d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066ada4:; BB(0x0066ada4);
    /* 0066ada4: mov dword ptr [0xa8fcbc], ecx */ W32((u32)(0xa8fcbcu), r_ecx);
    /* 0066adaa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066adb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066adb3: je 0x66adba */ if (fZ) goto L_0066adba;
L_0066adb5:; BB(0x0066adb5);
    /* 0066adb5: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x66adbau); f_005b90d0();
L_0066adba:; BB(0x0066adba);
    /* 0066adba: push 0x939b38 */ { u32 v = 0x939b38u; r_esp -= 4; W32(r_esp, v); }
    /* 0066adbf: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x66adc4u); f_008009dc();
    /* 0066adc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066adc5: mov dword ptr [0xa8fcb8], eax */ W32((u32)(0xa8fcb8u), r_eax);
    /* 0066adca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066adcd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066add4: mov esp, ebp */ r_esp = r_ebp;
    /* 0066add6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066add7: ret  */ FN_RET(0x0066ad38); r_esp += 4; return;
L_0066add8:; BB(0x0066add8);
    /* 0066add8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066adda: jmp 0x66ada4 */ goto L_0066ada4;
}

void f_0066addc(void) /* sub_66ADDC */
{
    FN_ENTER(0x0066addc);
    /* 0066addc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066addd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066addf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066ade1: call 0x66ae00 */ r_esp -= 4; W32(r_esp, 0x66ade6u); f_0066ae00();
    /* 0066ade6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066adea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066adec: jne 0x66adf2 */ if (!fZ) goto L_0066adf2;
L_0066adee:; BB(0x0066adee);
    /* 0066adee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066adef: ret 4 */ FN_RET(0x0066addc); r_esp += 8; return;
L_0066adf2:; BB(0x0066adf2);
    /* 0066adf2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066adf3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66adf8u); f_005c2f74();
    /* 0066adf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066adf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066adfa: ret 4 */ FN_RET(0x0066addc); r_esp += 8; return;
}

void f_0066ae00(void) /* sub_66AE00 */
{
    FN_ENTER(0x0066ae00);
    /* 0066ae00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae01: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ae03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae05: push 0x8e8c40 */ { u32 v = 0x8e8c40u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066ae10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066ae18: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ae1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066ae1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066ae21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066ae24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066ae27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066ae2a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066ae31: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ae34: mov dword ptr [eax], 0xb35440 */ W32((u32)(r_eax), 0xb35440u);
    /* 0066ae3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae3b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x66ae40u); f_007b4e84();
    /* 0066ae40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066ae41: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ae44: call 0x66c2ac */ r_esp -= 4; W32(r_esp, 0x66ae49u); f_0066c2ac();
    /* 0066ae49: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066ae50: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ae53: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x66ae58u); f_0066873c();
    /* 0066ae58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ae5b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066ae62: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ae64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ae65: ret  */ FN_RET(0x0066ae00); r_esp += 4; return;
}

void f_0066ae68(void) /* sub_66AE68 */
{
    FN_ENTER(0x0066ae68);
    /* 0066ae68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066ae6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066ae6d: call 0x66ae8c */ r_esp -= 4; W32(r_esp, 0x66ae72u); f_0066ae8c();
    /* 0066ae72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066ae76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066ae78: jne 0x66ae7e */ if (!fZ) goto L_0066ae7e;
L_0066ae7a:; BB(0x0066ae7a);
    /* 0066ae7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066ae7b: ret 4 */ FN_RET(0x0066ae68); r_esp += 8; return;
L_0066ae7e:; BB(0x0066ae7e);
    /* 0066ae7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae7f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66ae84u); f_005c2f74();
    /* 0066ae84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066ae85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066ae86: ret 4 */ FN_RET(0x0066ae68); r_esp += 8; return;
}

void f_0066ae8c(void) /* sub_66AE8C */
{
    FN_ENTER(0x0066ae8c);
    /* 0066ae8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae8d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ae8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae91: push 0x8e8c5c */ { u32 v = 0x8e8c5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066ae9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066aea4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066aea7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066aeaa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066aead: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066aeb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066aeb3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066aeb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066aebd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066aec0: mov dword ptr [eax], 0xb354a0 */ W32((u32)(r_eax), 0xb354a0u);
    /* 0066aec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066aec7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x66aeccu); f_007b4e84();
    /* 0066aecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066aecd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066aed4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066aed7: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x66aedcu); f_0066873c();
    /* 0066aedc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066aedf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066aee6: mov esp, ebp */ r_esp = r_ebp;
    /* 0066aee8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066aee9: ret  */ FN_RET(0x0066ae8c); r_esp += 4; return;
}

void f_0066aeec(void) /* sub_66AEEC */
{
    FN_ENTER(0x0066aeec);
    /* 0066aeec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066aeed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066aeee: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066aef1: mov edi, ecx */ r_edi = r_ecx;
    /* 0066aef3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x66aef8u); f_004f7c84();
    /* 0066aef8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aefb: je 0x66b1bc */ if (fZ) goto L_0066b1bc;
L_0066af01:; BB(0x0066af01);
    /* 0066af01: movzx eax, word ptr [edi + 0xe6] */ r_eax = (u32)R16((u32)(r_edi+0xe6u));
    /* 0066af08: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066af0a: jne 0x66af52 */ if (!fZ) goto L_0066af52;
L_0066af0c:; BB(0x0066af0c);
    /* 0066af0c: movsx edx, word ptr [edi + 0xe0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xe0u));
    /* 0066af13: cmp dx, word ptr [edi + 0xe2] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_edi+0xe2u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0066af1a: je 0x66af52 */ if (fZ) goto L_0066af52;
L_0066af1c:; BB(0x0066af1c);
    /* 0066af1c: movsx eax, word ptr [edi + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xe4u));
    /* 0066af23: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066af26: je 0x66af42 */ if (fZ) goto L_0066af42;
L_0066af28:; BB(0x0066af28);
    /* 0066af28: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0066af2d: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
    /* 0066af34: mov ecx, edi */ r_ecx = r_edi;
    /* 0066af36: call 0x66b1c4 */ r_esp -= 4; W32(r_esp, 0x66af3bu); f_0066b1c4();
    /* 0066af3b: movsx edx, word ptr [edi + 0xe0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xe0u));
L_0066af42:; BB(0x0066af42);
    /* 0066af42: mov word ptr [edi + 0xe2], dx */ W16((u32)(r_edi+0xe2u), (u16)r_edx);
    /* 0066af49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066af4b: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
L_0066af52:; BB(0x0066af52);
    /* 0066af52: mov edx, dword ptr [edi + 0x1b8] */ r_edx = R32((u32)(r_edi+0x1b8u));
    /* 0066af58: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0066af5b: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0066af5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066af61: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0066af65: mov dword ptr [edi + 0x1b8], eax */ W32((u32)(r_edi+0x1b8u), r_eax);
    /* 0066af6b: mov dword ptr [edi + 0x1bc], eax */ W32((u32)(r_edi+0x1bcu), r_eax);
    /* 0066af71: mov dword ptr [edi + 0x1c0], eax */ W32((u32)(r_edi+0x1c0u), r_eax);
    /* 0066af77: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0066af79:; BB(0x0066af79);
    /* 0066af79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066af7a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66af7fu); f_0068d5a8();
    /* 0066af7f: mov ebx, eax */ r_ebx = r_eax;
    /* 0066af81: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066af84: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066af86: je 0x66b01d */ if (fZ) goto L_0066b01d;
L_0066af8c:; BB(0x0066af8c);
    /* 0066af8c: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 0066af92: cmp edx, dword ptr [edi + 0xc0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066af98: jne 0x66afa4 */ if (!fZ) goto L_0066afa4;
L_0066af9a:; BB(0x0066af9a);
    /* 0066af9a: mov dword ptr [edi + 0x1c0], 1 */ W32((u32)(r_edi+0x1c0u), 0x1u);
L_0066afa4:; BB(0x0066afa4);
    /* 0066afa4: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066afaa: mov esi, 0 */ r_esi = 0x0u;
    /* 0066afaf: jne 0x66afdc */ if (!fZ) goto L_0066afdc;
L_0066afb1:; BB(0x0066afb1);
    /* 0066afb1: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0066afb4: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0066afb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066afb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066afb9: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66afbeu); f_0078ea50();
    /* 0066afbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066afc1: fld dword ptr [edi + 0xac] */ FPUSH(R_F32((u32)(r_edi+0xacu)));
    /* 0066afc7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066afc9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066afcb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066afcd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066afce: jb 0x66afdc */ if (fC) goto L_0066afdc;
L_0066afd0:; BB(0x0066afd0);
    /* 0066afd0: add dword ptr [edi + 0x1bc], 1 */ { u32 ad = (u32)(r_edi+0x1bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0066afd7: mov esi, 1 */ r_esi = 0x1u;
L_0066afdc:; BB(0x0066afdc);
    /* 0066afdc: mov edx, dword ptr [edi + 0x1b8] */ r_edx = R32((u32)(r_edi+0x1b8u));
    /* 0066afe2: mov dword ptr [edi + edx*4 + 0x1a8], esi */ W32((u32)(r_edi+r_edx*4+0x1a8u), r_esi);
    /* 0066afe9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066afeb: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x66aff0u); f_006936b4();
    /* 0066aff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066aff1: mov edx, dword ptr [edi + 0x1b8] */ r_edx = R32((u32)(r_edi+0x1b8u));
    /* 0066aff7: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0066affa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066affc: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066affe: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b000: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b002: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b004: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b006: lea ebx, [edi + ecx + 0xe8] */ r_ebx = (u32)(r_edi+r_ecx+0xe8u);
    /* 0066b00d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b00e: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x66b013u); f_00857fed();
    /* 0066b013: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b016: add dword ptr [edi + 0x1b8], 1 */ { u32 ad = (u32)(r_edi+0x1b8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0066b01d:; BB(0x0066b01d);
    /* 0066b01d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066b020: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b023: jl 0x66af79 */ if ((fS!=fO)) goto L_0066af79;
L_0066b029:; BB(0x0066b029);
    /* 0066b029: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0066b02c: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0066b030: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0066b034: mov eax, dword ptr [edi + 0x1b8] */ r_eax = R32((u32)(r_edi+0x1b8u));
    /* 0066b03a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b03d: jge 0x66b0c6 */ if ((fS==fO)) goto L_0066b0c6;
L_0066b043:; BB(0x0066b043);
    /* 0066b043: mov ebp, eax */ r_ebp = r_eax;
    /* 0066b045: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0066b047: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066b04a: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b04d: jl 0x66b099 */ if ((fS!=fO)) goto L_0066b099;
L_0066b04f:; BB(0x0066b04f);
    /* 0066b04f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0066b052: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b054: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b056: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b058: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b05a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b05c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0066b05e:; BB(0x0066b05e);
    /* 0066b05e: mov ebp, 0x30 */ r_ebp = 0x30u;
    /* 0066b063: mov word ptr [ecx + edi + 0xe8], bp */ W16((u32)(r_ecx+r_edi+0xe8u), (u16)r_ebp);
    /* 0066b06b: mov word ptr [ecx + edi + 0x118], bp */ W16((u32)(r_ecx+r_edi+0x118u), (u16)r_ebp);
    /* 0066b073: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066b076: mov word ptr [ecx + edi + 0x148], bp */ W16((u32)(r_ecx+r_edi+0x148u), (u16)r_ebp);
    /* 0066b07e: mov word ptr [ecx + edi + 0x178], bp */ W16((u32)(r_ecx+r_edi+0x178u), (u16)r_ebp);
    /* 0066b086: mov word ptr [ecx + edi + 0x1a8], bp */ W16((u32)(r_ecx+r_edi+0x1a8u), (u16)r_ebp);
    /* 0066b08e: add ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b094: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b097: jl 0x66b05e */ if ((fS!=fO)) goto L_0066b05e;
L_0066b099:; BB(0x0066b099);
    /* 0066b099: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0066b09c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b09e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b0a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b0a2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b0a4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b0a6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0066b0a8:; BB(0x0066b0a8);
    /* 0066b0a8: mov ebp, 0x30 */ r_ebp = 0x30u;
    /* 0066b0ad: mov word ptr [ecx + edi + 0xe8], bp */ W16((u32)(r_ecx+r_edi+0xe8u), (u16)r_ebp);
    /* 0066b0b5: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b0b8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066b0bb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b0be: jl 0x66b0a8 */ if ((fS!=fO)) goto L_0066b0a8;
L_0066b0c0:; BB(0x0066b0c0);
    /* 0066b0c0: mov eax, dword ptr [edi + 0x1b8] */ r_eax = R32((u32)(r_edi+0x1b8u));
L_0066b0c6:; BB(0x0066b0c6);
    /* 0066b0c6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b0c8: je 0x66b0e3 */ if (fZ) goto L_0066b0e3;
L_0066b0ca:; BB(0x0066b0ca);
    /* 0066b0ca: mov ecx, dword ptr [edi + 0x1c8] */ r_ecx = R32((u32)(r_edi+0x1c8u));
    /* 0066b0d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b0d2: je 0x66b0e3 */ if (fZ) goto L_0066b0e3;
L_0066b0d4:; BB(0x0066b0d4);
    /* 0066b0d4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66b0d9u); f_007127b0();
    /* 0066b0d9: mov dword ptr [edi + 0x1c8], 0 */ W32((u32)(r_edi+0x1c8u), 0x0u);
L_0066b0e3:; BB(0x0066b0e3);
    /* 0066b0e3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b0e9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66b0eeu); f_0068d5a8();
    /* 0066b0ee: mov ebp, eax */ r_ebp = r_eax;
    /* 0066b0f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b0f3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b0f5: je 0x66b16e */ if (fZ) goto L_0066b16e;
L_0066b0f7:; BB(0x0066b0f7);
    /* 0066b0f7: mov edx, dword ptr [ebp + 0x3f0] */ r_edx = R32((u32)(r_ebp+0x3f0u));
    /* 0066b0fd: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b103: jne 0x66b16e */ if (!fZ) goto L_0066b16e;
L_0066b105:; BB(0x0066b105);
    /* 0066b105: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0066b108: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0066b10b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b10c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b10d: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66b112u); f_0078ea50();
    /* 0066b112: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b115: fld dword ptr [0x939c20] */ FPUSH(R_F32((u32)(0x939c20u)));
    /* 0066b11b: fadd dword ptr [edi + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xacu));
    /* 0066b121: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066b123: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066b125: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066b127: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066b128: jb 0x66b148 */ if (fC) goto L_0066b148;
L_0066b12a:; BB(0x0066b12a);
    /* 0066b12a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066b12c: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x66b131u); f_0068bfa0();
    /* 0066b131: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b133: je 0x66b16e */ if (fZ) goto L_0066b16e;
L_0066b135:; BB(0x0066b135);
    /* 0066b135: mov dword ptr [edi + 0x1e4], 1 */ W32((u32)(r_edi+0x1e4u), 0x1u);
    /* 0066b13f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066b141: call 0x688bc0 */ r_esp -= 4; W32(r_esp, 0x66b146u); f_00688bc0();
    /* 0066b146: jmp 0x66b16e */ goto L_0066b16e;
L_0066b148:; BB(0x0066b148);
    /* 0066b148: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066b14a: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x66b14fu); f_0068bfa0();
    /* 0066b14f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b151: jne 0x66b16e */ if (!fZ) goto L_0066b16e;
L_0066b153:; BB(0x0066b153);
    /* 0066b153: mov edx, dword ptr [edi + 0x1e4] */ r_edx = R32((u32)(r_edi+0x1e4u));
    /* 0066b159: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b15b: je 0x66b16e */ if (fZ) goto L_0066b16e;
L_0066b15d:; BB(0x0066b15d);
    /* 0066b15d: mov dword ptr [edi + 0x1e4], 0 */ W32((u32)(r_edi+0x1e4u), 0x0u);
    /* 0066b167: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066b169: call 0x688bac */ r_esp -= 4; W32(r_esp, 0x66b16eu); f_00688bac();
L_0066b16e:; BB(0x0066b16e);
    /* 0066b16e: mov ecx, edi */ r_ecx = r_edi;
    /* 0066b170: call 0x66b1c4 */ r_esp -= 4; W32(r_esp, 0x66b175u); f_0066b1c4();
    /* 0066b175: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 0066b17b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b17d: je 0x66b1bc */ if (fZ) goto L_0066b1bc;
L_0066b17f:; BB(0x0066b17f);
    /* 0066b17f: fld dword ptr [0x939c14] */ FPUSH(R_F32((u32)(0x939c14u)));
    /* 0066b185: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 0066b18b: fld dword ptr [0x939c1c] */ FPUSH(R_F32((u32)(0x939c1cu)));
    /* 0066b191: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066b193: fst dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0));
    /* 0066b199: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066b19b: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0066b19e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066b1a1: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0066b1a4: fadd dword ptr [edx*4 + 0x939bc8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x939bc8u));
    /* 0066b1ab: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066b1ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066b1af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066b1b0: ja 0x66b1bc */ if ((!fC&&!fZ)) goto L_0066b1bc;
L_0066b1b2:; BB(0x0066b1b2);
    /* 0066b1b2: mov dword ptr [edi + 0xc8], 0 */ W32((u32)(r_edi+0xc8u), 0x0u);
L_0066b1bc:; BB(0x0066b1bc);
    /* 0066b1bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066b1bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b1c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066b1c1: ret  */ FN_RET(0x0066aeec); r_esp += 4; return;
}

