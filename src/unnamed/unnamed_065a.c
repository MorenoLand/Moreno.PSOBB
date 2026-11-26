#include "protos.h"

void f_0065a064(void) /* sub_65A064 */
{
    FN_ENTER(0x0065a064);
    /* 0065a064: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a065: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065a067: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065a069: call 0x65a088 */ r_esp -= 4; W32(r_esp, 0x65a06eu); f_0065a088();
    /* 0065a06e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065a072: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a074: jne 0x65a07a */ if (!fZ) goto L_0065a07a;
L_0065a076:; BB(0x0065a076);
    /* 0065a076: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065a077: ret 4 */ FN_RET(0x0065a064); r_esp += 8; return;
L_0065a07a:; BB(0x0065a07a);
    /* 0065a07a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a07b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65a080u); f_005c2f74();
    /* 0065a080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a081: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065a082: ret 4 */ FN_RET(0x0065a064); r_esp += 8; return;
}

void f_0065a088(void) /* sub_65A088 */
{
    FN_ENTER(0x0065a088);
    /* 0065a088: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a089: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a08b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a08d: push 0x8e7326 */ { u32 v = 0x8e7326u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a092: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a099: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065a0a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a0a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065a0a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065a0a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065a0ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065a0af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065a0b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a0b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a0bc: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a0bf: mov dword ptr [eax], 0xb329a0 */ W32((u32)(r_eax), 0xb329a0u);
    /* 0065a0c5: call 0x7adbe0 */ r_esp -= 4; W32(r_esp, 0x65a0cau); f_007adbe0();
    /* 0065a0ca: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a0cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0ce: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0d0: movzx ecx, word ptr [edx + 0x30] */ r_ecx = (u32)R16((u32)(r_edx+0x30u));
    /* 0065a0d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0d5: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x65a0dau); f_00686258();
    /* 0065a0da: mov ebx, eax */ r_ebx = r_eax;
    /* 0065a0dc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a0df: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a0e1: je 0x65a112 */ if (fZ) goto L_0065a112;
L_0065a0e7:; BB(0x0065a0e7);
    /* 0065a0e7: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a0ea: mov edx, 6 */ r_edx = 0x6u;
    /* 0065a0ef: mov word ptr [ebx + 0x32c], dx */ W16((u32)(r_ebx+0x32cu), (u16)r_edx);
    /* 0065a0f6: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0065a0f9: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a0fc: je 0x65a135 */ if (fZ) goto L_0065a135;
L_0065a0fe:; BB(0x0065a0fe);
    /* 0065a0fe: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a101: movzx edx, word ptr [esi + 0x30] */ r_edx = (u32)R16((u32)(r_esi+0x30u));
    /* 0065a105: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 0065a108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a109: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a10a: call 0x688ee4 */ r_esp -= 4; W32(r_esp, 0x65a10fu); f_00688ee4();
    /* 0065a10f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065a112:; BB(0x0065a112);
    /* 0065a112: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065a119: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a11c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x65a121u); f_008171e8();
    /* 0065a121: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065a124: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a127: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a12a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a131: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a134: ret  */ FN_RET(0x0065a088); r_esp += 4; return;
L_0065a135:; BB(0x0065a135);
    /* 0065a135: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065a137: call 0x69adc8 */ r_esp -= 4; W32(r_esp, 0x65a13cu); f_0069adc8();
    /* 0065a13c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a13f: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 0065a145: or edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0065a14b: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 0065a151: jmp 0x65a0fe */ goto L_0065a0fe;
}

void f_0065a154(void) /* sub_65A154 */
{
    FN_ENTER(0x0065a154);
    /* 0065a154: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a155: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a157: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a159: push 0x8e734c */ { u32 v = 0x8e734cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a15e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a165: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065a16c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a16f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065a172: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0065a175: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0065a178: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0065a17b: mov eax, dword ptr [0x9c7e58] */ r_eax = R32((u32)(0x9c7e58u));
    /* 0065a180: cmp eax, dword ptr [ecx + 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a186: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065a189: jne 0x65a1a8 */ if (!fZ) goto L_0065a1a8;
L_0065a18b:; BB(0x0065a18b);
    /* 0065a18b: mov edx, ecx */ r_edx = r_ecx;
    /* 0065a18d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0065a191: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a196: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0065a19a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a19d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a1a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a1a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a1a7: ret  */ FN_RET(0x0065a154); r_esp += 4; return;
L_0065a1a8:; BB(0x0065a1a8);
    /* 0065a1a8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a1ae: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65a1b3u); f_0068d5a8();
    /* 0065a1b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a1b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a1b6: je 0x65a285 */ if (fZ) goto L_0065a285;
L_0065a1bc:; BB(0x0065a1bc);
    /* 0065a1bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a1bf: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 0065a1c2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065a1c5: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065a1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a1c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a1ca: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x65a1cfu); f_007a9180();
    /* 0065a1cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a1d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a1d5: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 0065a1d8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a1da: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065a1dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a1de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a1df: jb 0x65a263 */ if (fC) goto L_0065a263;
L_0065a1e5:; BB(0x0065a1e5);
    /* 0065a1e5: mov ecx, edx */ r_ecx = r_edx;
    /* 0065a1e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a1e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a1eb: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x65a1f0u); f_007b52c4();
    /* 0065a1f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a1f3: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0065a1f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a1fb: jne 0x65a285 */ if (!fZ) goto L_0065a285;
L_0065a201:; BB(0x0065a201);
    /* 0065a201: mov dword ptr [eax + 0xb4], 1 */ W32((u32)(r_eax+0xb4u), 0x1u);
    /* 0065a20b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a20d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0065a214: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65a219u); f_005caba4();
    /* 0065a219: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a21a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065a21d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a21f: je 0x65a285 */ if (fZ) goto L_0065a285;
L_0065a221:; BB(0x0065a221);
    /* 0065a221: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0065a228: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a22f: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a235: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a238: movzx edx, word ptr [ebx + 0xac] */ r_edx = (u32)R16((u32)(r_ebx+0xacu));
    /* 0065a23f: mov ecx, eax */ r_ecx = r_eax;
    /* 0065a241: push dword ptr [ebx + 0x88] */ { u32 v = R32((u32)(r_ebx+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a247: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a24d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065a250: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a251: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a254: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a255: call 0x65a2e0 */ r_esp -= 4; W32(r_esp, 0x65a25au); f_0065a2e0();
    /* 0065a25a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0065a261: jmp 0x65a285 */ goto L_0065a285;
L_0065a263:; BB(0x0065a263);
    /* 0065a263: mov eax, edx */ r_eax = r_edx;
    /* 0065a265: movzx edx, word ptr [eax + 0xac] */ r_edx = (u32)R16((u32)(r_eax+0xacu));
    /* 0065a26c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a26d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65a272u); f_0068d5a8();
    /* 0065a272: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a273: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a275: je 0x65a285 */ if (fZ) goto L_0065a285;
L_0065a277:; BB(0x0065a277);
    /* 0065a277: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a27a: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 0065a280: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065a283: je 0x65a299 */ if (fZ) goto L_0065a299;
L_0065a285:; BB(0x0065a285);
    /* 0065a285: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a288: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a28b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a28e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a295: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a298: ret  */ FN_RET(0x0065a154); r_esp += 4; return;
L_0065a299:; BB(0x0065a299);
    /* 0065a299: mov eax, dword ptr [eax + 0xdf0] */ r_eax = R32((u32)(r_eax+0xdf0u));
    /* 0065a29f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a2a1: jne 0x65a285 */ if (!fZ) goto L_0065a285;
L_0065a2a3:; BB(0x0065a2a3);
    /* 0065a2a3: mov ecx, edx */ r_ecx = r_edx;
    /* 0065a2a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2a9: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x65a2aeu); f_007b52ec();
    /* 0065a2ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a2b1: movzx edx, word ptr [eax + 0xac] */ r_edx = (u32)R16((u32)(r_eax+0xacu));
    /* 0065a2b8: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 0065a2c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2c3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65a2c8u); f_0068d5a8();
    /* 0065a2c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a2c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a2cb: je 0x65a285 */ if (fZ) goto L_0065a285;
L_0065a2cd:; BB(0x0065a2cd);
    /* 0065a2cd: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0065a2d1: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a2d7: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0065a2db: jmp 0x65a285 */ goto L_0065a285;
}

void f_0065a2e0(void) /* sub_65A2E0 */
{
    FN_ENTER(0x0065a2e0);
    /* 0065a2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a2e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2e5: push 0x8e7368 */ { u32 v = 0x8e7368u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065a2f8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a2fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065a2fe: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0065a301: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0065a304: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0065a307: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065a30a: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a30d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0065a310: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0065a313: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065a316: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0065a31a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0065a31d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065a320: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0065a323: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065a326: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0065a329: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065a32c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x65a331u); f_008193cc();
    /* 0065a331: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a338: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0065a33b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a33e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065a341: mov dword ptr [eax], 0xb329a0 */ W32((u32)(r_eax), 0xb329a0u);
    /* 0065a347: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0065a349: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0065a34c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a34f: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0065a352: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0065a355: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 0065a358: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0065a35f: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 0065a362: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 0065a365: mov word ptr [eax + 0x30], dx */ W16((u32)(r_eax+0x30u), (u16)r_edx);
    /* 0065a369: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a36c: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0065a36f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065a372: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0065a375: call 0x7b34c0 */ r_esp -= 4; W32(r_esp, 0x65a37au); f_007b34c0();
    /* 0065a37a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0065a37d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a37f: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065a382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a383: push dword ptr [0xaacac0] */ { u32 v = R32((u32)(0xaacac0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a389: push 0x92ed58 */ { u32 v = 0x92ed58u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a38e: call 0x5ba3f4 */ r_esp -= 4; W32(r_esp, 0x65a393u); f_005ba3f4();
    /* 0065a393: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065a396: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0065a399: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065a39c: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065a39f: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065a3a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a3a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a3ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a3ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a3af: ret 0x18 */ FN_RET(0x0065a2e0); r_esp += 28; return;
}

void f_0065a3b4(void) /* sub_65A3B4 */
{
    FN_ENTER(0x0065a3b4);
    /* 0065a3b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3b5: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a3b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3b9: push 0x8e7390 */ { u32 v = 0x8e7390u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a3c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065a3cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a3cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065a3d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065a3d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065a3d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065a3db: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3e0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065a3e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65a3ecu); f_005caba4();
    /* 0065a3ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a3ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065a3f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a3f2: je 0x65a42b */ if (fZ) goto L_0065a42b;
L_0065a3f4:; BB(0x0065a3f4);
    /* 0065a3f4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065a3fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a402: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a405: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a40b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a40e: call 0x65a430 */ r_esp -= 4; W32(r_esp, 0x65a413u); f_0065a430();
    /* 0065a413: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a416: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065a41d:; BB(0x0065a41d);
    /* 0065a41d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a420: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a427: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a429: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a42a: ret  */ FN_RET(0x0065a3b4); r_esp += 4; return;
L_0065a42b:; BB(0x0065a42b);
    /* 0065a42b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a42d: jmp 0x65a41d */ goto L_0065a41d;
}

void f_0065a430(void) /* sub_65A430 */
{
    FN_ENTER(0x0065a430);
    /* 0065a430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a431: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a435: push 0x8e73ac */ { u32 v = 0x8e73acu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a43a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a441: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065a448: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a44b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065a44e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065a451: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065a454: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065a457: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065a45a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a45d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065a460: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065a463: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65a468u); f_007b4b48();
    /* 0065a468: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a46f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065a472: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a475: mov dword ptr [ecx], 0xb32970 */ W32((u32)(r_ecx), 0xb32970u);
    /* 0065a47b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a47c: call dword ptr [0xb32984] */ { u32 t = R32((u32)(0xb32984u)); r_esp -= 4; W32(r_esp, 0x65a482u); call_ind(t); }
    /* 0065a482: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065a485: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0065a48b: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 0065a495: mov eax, 3 */ r_eax = 0x3u;
    /* 0065a49a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a49c: push 0x9c7e5c */ { u32 v = 0x9c7e5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a4a1: mov word ptr [ecx + 0xac], ax */ W16((u32)(r_ecx+0xacu), (u16)r_eax);
    /* 0065a4a8: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 0065a4ae: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65a4b3u); f_007b9a88();
    /* 0065a4b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065a4b6: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65a4bbu); f_007b4f54();
    /* 0065a4bb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065a4be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a4c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a4c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a4ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a4cb: ret 8 */ FN_RET(0x0065a430); r_esp += 12; return;
}

void f_0065a4d0(void) /* sub_65A4D0 */
{
    FN_ENTER(0x0065a4d0);
    /* 0065a4d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0065a4d4: mov dword ptr [0x9c7e58], eax */ W32((u32)(0x9c7e58u), r_eax);
    /* 0065a4d9: ret  */ FN_RET(0x0065a4d0); r_esp += 4; return;
}

void f_0065a4dc(void) /* sub_65A4DC */
{
    FN_ENTER(0x0065a4dc);
    /* 0065a4dc: mov dword ptr [0x9c7e58], 0xffffffff */ W32((u32)(0x9c7e58u), 0xffffffffu);
    /* 0065a4e6: ret  */ FN_RET(0x0065a4dc); r_esp += 4; return;
}

void f_0065a4e8(void) /* sub_65A4E8 */
{
    FN_ENTER(0x0065a4e8);
    /* 0065a4e8: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0065a4eb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065a4ee: je 0x65a4f1 */ if (fZ) goto L_0065a4f1;
L_0065a4f0:; BB(0x0065a4f0);
    /* 0065a4f0: ret  */ FN_RET(0x0065a4e8); r_esp += 4; return;
L_0065a4f1:; BB(0x0065a4f1);
    /* 0065a4f1: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0065a4f5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a4fa: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0065a4fe: ret  */ FN_RET(0x0065a4e8); r_esp += 4; return;
}

void f_0065a500(void) /* sub_65A500 */
{
    FN_ENTER(0x0065a500);
    /* 0065a500: mov dword ptr [0xa8f848], 0x3f800000 */ W32((u32)(0xa8f848u), 0x3f800000u);
    /* 0065a50a: mov dword ptr [0xa8f84c], 0x41000000 */ W32((u32)(0xa8f84cu), 0x41000000u);
    /* 0065a514: mov dword ptr [0xa8f850], 0x3fc00000 */ W32((u32)(0xa8f850u), 0x3fc00000u);
    /* 0065a51e: ret  */ FN_RET(0x0065a500); r_esp += 4; return;
}

void f_0065a520(void) /* sub_65A520 */
{
    FN_ENTER(0x0065a520);
    /* 0065a520: mov dword ptr [0xa8f864], 0 */ W32((u32)(0xa8f864u), 0x0u);
    /* 0065a52a: ret  */ FN_RET(0x0065a520); r_esp += 4; return;
}

void f_0065a52c(void) /* sub_65A52C */
{
    FN_ENTER(0x0065a52c);
    /* 0065a52c: mov dword ptr [0xa8f864], 1 */ W32((u32)(0xa8f864u), 0x1u);
    /* 0065a536: ret  */ FN_RET(0x0065a52c); r_esp += 4; return;
}

void f_0065a538(void) /* sub_65A538 */
{
    FN_ENTER(0x0065a538);
    /* 0065a538: mov dword ptr [0xa8f858], 0x3f800000 */ W32((u32)(0xa8f858u), 0x3f800000u);
    /* 0065a542: mov dword ptr [0xa8f85c], 0x41000000 */ W32((u32)(0xa8f85cu), 0x41000000u);
    /* 0065a54c: mov dword ptr [0xa8f860], 0x3fc00000 */ W32((u32)(0xa8f860u), 0x3fc00000u);
    /* 0065a556: ret  */ FN_RET(0x0065a538); r_esp += 4; return;
}

void f_0065a558(void) /* sub_65A558 */
{
    FN_ENTER(0x0065a558);
    /* 0065a558: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a559: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065a55b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065a55d: call 0x65a57c */ r_esp -= 4; W32(r_esp, 0x65a562u); f_0065a57c();
    /* 0065a562: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065a566: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065a568: jne 0x65a56e */ if (!fZ) goto L_0065a56e;
L_0065a56a:; BB(0x0065a56a);
    /* 0065a56a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065a56b: ret 4 */ FN_RET(0x0065a558); r_esp += 8; return;
L_0065a56e:; BB(0x0065a56e);
    /* 0065a56e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a56f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65a574u); f_005c2f74();
    /* 0065a574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a575: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065a576: ret 4 */ FN_RET(0x0065a558); r_esp += 8; return;
}

void f_0065a57c(void) /* sub_65A57C */
{
    FN_ENTER(0x0065a57c);
    /* 0065a57c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a57d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a57f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a581: push 0x8e73c8 */ { u32 v = 0x8e73c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a586: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a58c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a58d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065a594: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a597: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065a59a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065a59d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065a5a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065a5a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065a5a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a5ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a5b0: mov eax, dword ptr [ecx + 0xa0] */ r_eax = R32((u32)(r_ecx+0xa0u));
    /* 0065a5b6: mov dword ptr [ecx], 0xb32a70 */ W32((u32)(r_ecx), 0xb32a70u);
    /* 0065a5bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a5be: je 0x65a5d4 */ if (fZ) goto L_0065a5d4;
L_0065a5c0:; BB(0x0065a5c0);
    /* 0065a5c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a5c1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x65a5c6u); f_0082e960();
    /* 0065a5c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a5c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a5ca: mov dword ptr [ecx + 0xa0], 0 */ W32((u32)(r_ecx+0xa0u), 0x0u);
L_0065a5d4:; BB(0x0065a5d4);
    /* 0065a5d4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065a5db: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x65a5e0u); f_007ba1f0();
    /* 0065a5e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a5e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a5ea: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a5ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a5ed: ret  */ FN_RET(0x0065a57c); r_esp += 4; return;
}

void f_0065a5f0(void) /* sub_65A5F0 */
{
    FN_ENTER(0x0065a5f0);
    /* 0065a5f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a5f1: mov ebx, esp */ r_ebx = r_esp;
    /* 0065a5f3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0065a5f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a5f7: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a5fa: mov esi, ecx */ r_esi = r_ecx;
    /* 0065a5fc: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
    /* 0065a602: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a604: je 0x65aa6b */ if (fZ) goto L_0065aa6b;
L_0065a60a:; BB(0x0065a60a);
    /* 0065a60a: mov ecx, dword ptr [esi + 0x94] */ r_ecx = R32((u32)(r_esi+0x94u));
    /* 0065a610: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 0065a613: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a615: je 0x65aa64 */ if (fZ) goto L_0065aa64;
L_0065a61b:; BB(0x0065a61b);
    /* 0065a61b: fldz  */ FPUSH(0.0);
    /* 0065a61d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0065a621: fldz  */ FPUSH(0.0);
    /* 0065a623: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0065a627: fldz  */ FPUSH(0.0);
    /* 0065a629: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0065a62d: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0065a631: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0065a635: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0065a639: mov ebp, eax */ r_ebp = r_eax;
L_0065a63b:; BB(0x0065a63b);
    /* 0065a63b: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0065a63f: movsx ecx, word ptr [ebp + 0x32] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32u));
    /* 0065a643: add edi, dword ptr [esi + 0x98] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x98u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065a649: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a64c: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0065a64f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065a651: jle 0x65ac1b */ if ((fZ||fS!=fO)) goto L_0065ac1b;
L_0065a657:; BB(0x0065a657);
    /* 0065a657: mov word ptr [ebp + 0x32], cx */ W16((u32)(r_ebp+0x32u), (u16)r_ecx);
L_0065a65b:; BB(0x0065a65b);
    /* 0065a65b: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0065a65e: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 0065a661: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0065a664: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0065a667: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0065a66a: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 0065a66d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a66f: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0065a672: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a674: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0065a677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a679: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0065a67c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a67d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065a680: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x65a685u); f_0082e900();
    /* 0065a685: fcomp dword ptr [esi + 0x68] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x68u))); FPOP();
    /* 0065a688: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a68a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a68b: jb 0x65a69d */ if (fC) goto L_0065a69d;
L_0065a68d:; BB(0x0065a68d);
    /* 0065a68d: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0065a690: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0065a693: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065a695: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0065a698: fchs  */ ST(0) = -ST(0);
    /* 0065a69a: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
L_0065a69d:; BB(0x0065a69d);
    /* 0065a69d: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a6a0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x65a6a5u); f_0082e900();
    /* 0065a6a5: fcomp dword ptr [esi + 0x6c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x6cu))); FPOP();
    /* 0065a6a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a6aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a6ab: jb 0x65a6bd */ if (fC) goto L_0065a6bd;
L_0065a6ad:; BB(0x0065a6ad);
    /* 0065a6ad: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0065a6b0: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0065a6b3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065a6b5: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0065a6b8: fchs  */ ST(0) = -ST(0);
    /* 0065a6ba: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
L_0065a6bd:; BB(0x0065a6bd);
    /* 0065a6bd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a6c0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x65a6c5u); f_0082e900();
    /* 0065a6c5: fcomp dword ptr [esi + 0x70] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x70u))); FPOP();
    /* 0065a6c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a6ca: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0065a6cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a6ce: jb 0x65a6da */ if (fC) goto L_0065a6da;
L_0065a6d0:; BB(0x0065a6d0);
    /* 0065a6d0: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0065a6d3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065a6d5: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0065a6d8: fchs  */ ST(0) = -ST(0);
L_0065a6da:; BB(0x0065a6da);
    /* 0065a6da: fld dword ptr [0x9383bc] */ FPUSH(R_F32((u32)(0x9383bcu)));
    /* 0065a6e0: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0065a6e3: fmul dword ptr [0x9383b8] */ ST(0) = ST(0) * R_F32((u32)(0x9383b8u));
    /* 0065a6e9: fld dword ptr [0x9383b4] */ FPUSH(R_F32((u32)(0x9383b4u)));
    /* 0065a6ef: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0065a6f2: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0065a6f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0065a6f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a6f9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0065a6fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a6fd: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0065a700: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0065a703: fst dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0));
    /* 0065a706: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a709: je 0x65abce */ if (fZ) goto L_0065abce;
L_0065a70f:; BB(0x0065a70f);
    /* 0065a70f: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a715: jne 0x65a8ac */ if (!fZ) goto L_0065a8ac;
L_0065a71b:; BB(0x0065a71b);
    /* 0065a71b: movsx edx, word ptr [ebp + 0x32] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32u));
    /* 0065a71f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a721: jne 0x65a8ac */ if (!fZ) goto L_0065a8ac;
L_0065a727:; BB(0x0065a727);
    /* 0065a727: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065a729: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 0065a730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a731: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x65a736u); f_007b4d18();
    /* 0065a736: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a737: fld dword ptr [0x9383e0] */ FPUSH(R_F32((u32)(0x9383e0u)));
    /* 0065a73d: fld dword ptr [0x9383e0] */ FPUSH(R_F32((u32)(0x9383e0u)));
    /* 0065a743: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0065a747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a749: je 0x65a799 */ if (fZ) goto L_0065a799;
L_0065a74b:; BB(0x0065a74b);
    /* 0065a74b: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0065a74e: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0065a751: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 0065a754: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0065a757: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 0065a75a: fsub dword ptr [ebp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4u));
    /* 0065a75d: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0065a760: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0065a763: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 0065a766: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a768: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0065a76c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a76e: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0065a772: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a774: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0065a778: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a77a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a77c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a77e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a780: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a782: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a784: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065a786: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065a788: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065a78a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a78c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a78d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a78f: jb 0x65a793 */ if (fC) goto L_0065a793;
L_0065a791:; BB(0x0065a791);
    /* 0065a791: fst st(1) */ ST(1) = ST(0);
L_0065a793:; BB(0x0065a793);
    /* 0065a793: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a795: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_0065a799:; BB(0x0065a799);
    /* 0065a799: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0065a79d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065a79f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a7a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a7a2: jb 0x65ab38 */ if (fC) goto L_0065ab38;
L_0065a7a8:; BB(0x0065a7a8);
    /* 0065a7a8: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0065a7ab: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7ad: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0065a7b0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7b2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065a7b4: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0065a7b7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7b9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065a7bb: fcomp dword ptr [0x9383dc] */ fx_compare(ST(0), R_F32((u32)(0x9383dcu))); FPOP();
    /* 0065a7c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a7c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a7c4: jbe 0x65aa73 */ if ((fC||fZ)) goto L_0065aa73;
L_0065a7ca:; BB(0x0065a7ca);
    /* 0065a7ca: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0065a7cd: fsub dword ptr [ebp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xcu));
    /* 0065a7d0: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0065a7d3: fsub dword ptr [ebp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x10u));
    /* 0065a7d6: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0065a7d9: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 0065a7dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a7de: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0065a7e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a7e4: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0065a7e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a7ea: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0065a7ee: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a7f2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a7f6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a7fa: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065a7fc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065a7fe: fcomp dword ptr [0x9383e4] */ fx_compare(ST(0), R_F32((u32)(0x9383e4u))); FPOP();
    /* 0065a804: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a806: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a807: jbe 0x65a810 */ if ((fC||fZ)) goto L_0065a810;
L_0065a809:; BB(0x0065a809);
    /* 0065a809: mov dword ptr [ebp + 0x38], 1 */ W32((u32)(r_ebp+0x38u), 0x1u);
L_0065a810:; BB(0x0065a810);
    /* 0065a810: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65a815u); f_008587a5();
    /* 0065a815: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065a818: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065a81b: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065a821: fcomp dword ptr [0x9383c4] */ fx_compare(ST(0), R_F32((u32)(0x9383c4u))); FPOP();
    /* 0065a827: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a829: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a82a: jb 0x65a831 */ if (fC) goto L_0065a831;
L_0065a82c:; BB(0x0065a82c);
    /* 0065a82c: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0065a82f: jmp 0x65a8ac */ goto L_0065a8ac;
L_0065a831:; BB(0x0065a831);
    /* 0065a831: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65a836u); f_008587a5();
    /* 0065a836: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065a83a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a83e: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065a844: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065a84a: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065a850: fmul dword ptr [0x9383ac] */ ST(0) = ST(0) * R_F32((u32)(0x9383acu));
    /* 0065a856: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 0065a859: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0065a85c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65a861u); f_008587a5();
    /* 0065a861: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065a865: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a869: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065a86f: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065a875: fmul dword ptr [0x9383ac] */ ST(0) = ST(0) * R_F32((u32)(0x9383acu));
    /* 0065a87b: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0065a87e: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0065a881: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65a886u); f_008587a5();
    /* 0065a886: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065a88a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a88e: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065a894: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065a89a: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065a8a0: fmul dword ptr [0x9383ac] */ ST(0) = ST(0) * R_F32((u32)(0x9383acu));
    /* 0065a8a6: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 0065a8a9: fst dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0));
L_0065a8ac:; BB(0x0065a8ac);
    /* 0065a8ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a8ad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065a8b0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x65a8b5u); f_0082e900();
    /* 0065a8b5: fcomp dword ptr [0x9383e8] */ fx_compare(ST(0), R_F32((u32)(0x9383e8u))); FPOP();
    /* 0065a8bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a8bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a8be: jbe 0x65a908 */ if ((fC||fZ)) goto L_0065a908;
L_0065a8c0:; BB(0x0065a8c0);
    /* 0065a8c0: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0065a8c3: jne 0x65a902 */ if (!fZ) goto L_0065a902;
L_0065a8c5:; BB(0x0065a8c5);
    /* 0065a8c5: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0065a8c8: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0065a8cb: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0065a8cd: fmul qword ptr [0x9382f8] */ ST(0) = ST(0) * R_F64((u32)(0x9382f8u));
    /* 0065a8d3: fdiv qword ptr [0x9382f0] */ ST(0) = ST(0) / R_F64((u32)(0x9382f0u));
    /* 0065a8d9: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065a8dd: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065a8e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065a8e7: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065a8eb: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065a8ef: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065a8f3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065a8f7: movsx ecx, word ptr [esp + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 0065a8fc: mov word ptr [ebp + 0x2e], cx */ W16((u32)(r_ebp+0x2eu), (u16)r_ecx);
    /* 0065a900: jmp 0x65a90f */ goto L_0065a90f;
L_0065a902:; BB(0x0065a902);
    /* 0065a902: movsx ecx, word ptr [ebp + 0x2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2eu));
    /* 0065a906: jmp 0x65a90f */ goto L_0065a90f;
L_0065a908:; BB(0x0065a908);
    /* 0065a908: movsx ecx, word ptr [ebp + 0x2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2eu));
    /* 0065a90c: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
L_0065a90f:; BB(0x0065a90f);
    /* 0065a90f: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 0065a913: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a915: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0065a918: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0065a91c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a920: fmul dword ptr [0x9383a8] */ ST(0) = ST(0) * R_F32((u32)(0x9383a8u));
    /* 0065a926: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065a92a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065a92f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065a934: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065a938: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065a93c: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065a940: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065a944: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0065a948: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a94a: mov word ptr [ebp + 0x2c], cx */ W16((u32)(r_ebp+0x2cu), (u16)r_ecx);
    /* 0065a94e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a950: jne 0x65a9cd */ if (!fZ) goto L_0065a9cd;
L_0065a952:; BB(0x0065a952);
    /* 0065a952: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0065a955: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 0065a958: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0065a95b: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 0065a95e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0065a960: fmul qword ptr [0x9382f8] */ ST(0) = ST(0) * R_F64((u32)(0x9382f8u));
    /* 0065a966: fdiv qword ptr [0x9382f0] */ ST(0) = ST(0) / R_F64((u32)(0x9382f0u));
    /* 0065a96c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065a970: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065a975: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065a97a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065a97e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065a982: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065a986: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065a98a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0065a98e: sub edx, dword ptr [esi + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065a991: sub edx, dword ptr [ebp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065a994: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0065a997: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0065a99b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a99f: fmul dword ptr [0x9383c0] */ ST(0) = ST(0) * R_F32((u32)(0x9383c0u));
    /* 0065a9a5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065a9a9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065a9ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065a9b3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065a9b7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065a9bb: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065a9bf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065a9c3: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0065a9c7: add edi, dword ptr [ebp + 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065a9ca: mov dword ptr [ebp + 0x24], edi */ W32((u32)(r_ebp+0x24u), r_edi);
L_0065a9cd:; BB(0x0065a9cd);
    /* 0065a9cd: movsx edi, word ptr [ebp + 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x30u));
    /* 0065a9d1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0065a9d3: jl 0x65aa0f */ if ((fS!=fO)) goto L_0065aa0f;
L_0065a9d5:; BB(0x0065a9d5);
    /* 0065a9d5: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065a9d8: jg 0x65aa0f */ if ((!fZ&&fS==fO)) goto L_0065aa0f;
L_0065a9da:; BB(0x0065a9da);
    /* 0065a9da: mov edx, dword ptr [0xa8f87c] */ r_edx = R32((u32)(0xa8f87cu));
    /* 0065a9e0: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0065a9e3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065a9e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065a9e7: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0065a9ea: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a9ec: fadd dword ptr [ecx + edi*4 + 0x93836c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0x93836cu));
    /* 0065a9f3: fld dword ptr [ecx + edi*4 + 0x938330] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x938330u)));
    /* 0065a9fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065a9fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a9fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a9ff: ja 0x65aa08 */ if ((!fC&&!fZ)) goto L_0065aa08;
L_0065aa01:; BB(0x0065aa01);
    /* 0065aa01: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0065aa03: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0065aa06: jmp 0x65aa3e */ goto L_0065aa3e;
L_0065aa08:; BB(0x0065aa08);
    /* 0065aa08: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065aa0a: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0065aa0d: jmp 0x65aa3e */ goto L_0065aa3e;
L_0065aa0f:; BB(0x0065aa0f);
    /* 0065aa0f: mov ecx, dword ptr [0xa8f87c] */ r_ecx = R32((u32)(0xa8f87cu));
    /* 0065aa15: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0065aa18: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065aa1a: fld dword ptr [edx + ecx*8 + 0x93836c] */ FPUSH(R_F32((u32)(r_edx+r_ecx*8+0x93836cu)));
    /* 0065aa21: fadd dword ptr [ebp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x28u));
    /* 0065aa24: fld dword ptr [edx + ecx*8 + 0x938330] */ FPUSH(R_F32((u32)(r_edx+r_ecx*8+0x938330u)));
    /* 0065aa2b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065aa2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065aa2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065aa30: ja 0x65aa39 */ if ((!fC&&!fZ)) goto L_0065aa39;
L_0065aa32:; BB(0x0065aa32);
    /* 0065aa32: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0065aa34: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0065aa37: jmp 0x65aa3e */ goto L_0065aa3e;
L_0065aa39:; BB(0x0065aa39);
    /* 0065aa39: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065aa3b: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
L_0065aa3e:; BB(0x0065aa3e);
    /* 0065aa3e: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 0065aa45: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0065aa48:; BB(0x0065aa48);
    /* 0065aa48: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0065aa4c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065aa4f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0065aa53: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065aa56: jne 0x65a63b */ if (!fZ) goto L_0065a63b;
L_0065aa5c:; BB(0x0065aa5c);
    /* 0065aa5c: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0065aa60: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_0065aa64:; BB(0x0065aa64);
    /* 0065aa64: add dword ptr [esi + 0x98], 1 */ { u32 ad = (u32)(r_esi+0x98u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0065aa6b:; BB(0x0065aa6b);
    /* 0065aa6b: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065aa6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065aa6f: mov esp, ebx */ r_esp = r_ebx;
    /* 0065aa71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065aa72: ret  */ FN_RET(0x0065a5f0); r_esp += 4; return;
L_0065aa73:; BB(0x0065aa73);
    /* 0065aa73: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65aa78u); f_008587a5();
    /* 0065aa78: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065aa7c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065aa80: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065aa86: fmul dword ptr [0x9383d4] */ ST(0) = ST(0) * R_F32((u32)(0x9383d4u));
    /* 0065aa8c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065aa90: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065aa95: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065aa9a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065aa9e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065aaa2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065aaa6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065aaaa: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0065aaae: mov word ptr [ebp + 0x32], dx */ W16((u32)(r_ebp+0x32u), (u16)r_edx);
    /* 0065aab2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65aab7u); f_008587a5();
    /* 0065aab7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065aabb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065aabf: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065aac5: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065aacb: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065aad1: fmul dword ptr [0x9383b0] */ ST(0) = ST(0) * R_F32((u32)(0x9383b0u));
    /* 0065aad7: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 0065aada: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0065aadd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65aae2u); f_008587a5();
    /* 0065aae2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065aae6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065aaea: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065aaf0: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065aaf6: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065aafc: fmul dword ptr [0x9383b0] */ ST(0) = ST(0) * R_F32((u32)(0x9383b0u));
    /* 0065ab02: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0065ab05: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0065ab08: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65ab0du); f_008587a5();
    /* 0065ab0d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065ab11: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065ab15: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065ab1b: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065ab21: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065ab27: fmul dword ptr [0x9383b0] */ ST(0) = ST(0) * R_F32((u32)(0x9383b0u));
    /* 0065ab2d: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 0065ab30: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0065ab33: jmp 0x65a810 */ goto L_0065a810;
L_0065ab38:; BB(0x0065ab38);
    /* 0065ab38: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65ab3du); f_008587a5();
    /* 0065ab3d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065ab41: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065ab45: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065ab4b: fmul dword ptr [0x9383d4] */ ST(0) = ST(0) * R_F32((u32)(0x9383d4u));
    /* 0065ab51: fmul dword ptr [0x9383c8] */ ST(0) = ST(0) * R_F32((u32)(0x9383c8u));
    /* 0065ab57: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065ab5b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065ab60: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065ab65: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065ab69: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065ab6d: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065ab71: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065ab75: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0065ab79: mov word ptr [ebp + 0x32], dx */ W16((u32)(r_ebp+0x32u), (u16)r_edx);
    /* 0065ab7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab7e: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0065ab82: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065ab85: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x65ab8au); f_0082dc9c();
    /* 0065ab8a: fdivr dword ptr [0x9383b0] */ ST(0) = R_F32((u32)(0x9383b0u)) / ST(0);
    /* 0065ab90: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0065ab94: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0065ab96: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0065ab9a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065ab9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065aba0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0065aba2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065aba4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065aba6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065aba8: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0065abac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065abae: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0065abb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065abb4: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0065abb8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065abba: fchs  */ ST(0) = -ST(0);
    /* 0065abbc: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0065abbf: fchs  */ ST(0) = -ST(0);
    /* 0065abc1: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0065abc4: fchs  */ ST(0) = -ST(0);
    /* 0065abc6: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0065abc9: jmp 0x65a810 */ goto L_0065a810;
L_0065abce:; BB(0x0065abce);
    /* 0065abce: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0065abd1: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 0065abd4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065abd6: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0065abd9: fsub dword ptr [ebp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4u));
    /* 0065abdc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065abde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065abe0: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0065abe3: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 0065abe6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065abe8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065abea: fcomp dword ptr [0x9383e4] */ fx_compare(ST(0), R_F32((u32)(0x9383e4u))); FPOP();
    /* 0065abf0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065abf2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065abf3: jae 0x65ac01 */ if (!fC) goto L_0065ac01;
L_0065abf5:; BB(0x0065abf5);
    /* 0065abf5: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 0065abfc: jmp 0x65a70f */ goto L_0065a70f;
L_0065ac01:; BB(0x0065ac01);
    /* 0065ac01: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ac07: je 0x65ac11 */ if (fZ) goto L_0065ac11;
L_0065ac09:; BB(0x0065ac09);
    /* 0065ac09: sar edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0065ac0c: jmp 0x65a70f */ goto L_0065a70f;
L_0065ac11:; BB(0x0065ac11);
    /* 0065ac11: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065ac13: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0065ac16: jmp 0x65aa48 */ goto L_0065aa48;
L_0065ac1b:; BB(0x0065ac1b);
    /* 0065ac1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065ac1d: mov word ptr [ebp + 0x32], dx */ W16((u32)(r_ebp+0x32u), (u16)r_edx);
    /* 0065ac21: jmp 0x65a65b */ goto L_0065a65b;
}

void f_0065abc0(void)
{
    FN_ENTER(0x0065abc0);
    goto L_0065abc0;
L_0065a63b:; BB(0x0065a63b);
    /* 0065a63b: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0065a63f: movsx ecx, word ptr [ebp + 0x32] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32u));
    /* 0065a643: add edi, dword ptr [esi + 0x98] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x98u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065a649: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a64c: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0065a64f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065a651: jle 0x65ac1b */ if ((fZ||fS!=fO)) goto L_0065ac1b;
L_0065a657:; BB(0x0065a657);
    /* 0065a657: mov word ptr [ebp + 0x32], cx */ W16((u32)(r_ebp+0x32u), (u16)r_ecx);
L_0065a65b:; BB(0x0065a65b);
    /* 0065a65b: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0065a65e: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 0065a661: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0065a664: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0065a667: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0065a66a: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 0065a66d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a66f: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0065a672: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a674: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0065a677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a679: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0065a67c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a67d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065a680: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x65a685u); f_0082e900();
    /* 0065a685: fcomp dword ptr [esi + 0x68] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x68u))); FPOP();
    /* 0065a688: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a68a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a68b: jb 0x65a69d */ if (fC) goto L_0065a69d;
L_0065a68d:; BB(0x0065a68d);
    /* 0065a68d: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0065a690: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0065a693: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065a695: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0065a698: fchs  */ ST(0) = -ST(0);
    /* 0065a69a: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
L_0065a69d:; BB(0x0065a69d);
    /* 0065a69d: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a6a0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x65a6a5u); f_0082e900();
    /* 0065a6a5: fcomp dword ptr [esi + 0x6c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x6cu))); FPOP();
    /* 0065a6a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a6aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a6ab: jb 0x65a6bd */ if (fC) goto L_0065a6bd;
L_0065a6ad:; BB(0x0065a6ad);
    /* 0065a6ad: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0065a6b0: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0065a6b3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065a6b5: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0065a6b8: fchs  */ ST(0) = -ST(0);
    /* 0065a6ba: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
L_0065a6bd:; BB(0x0065a6bd);
    /* 0065a6bd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065a6c0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x65a6c5u); f_0082e900();
    /* 0065a6c5: fcomp dword ptr [esi + 0x70] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x70u))); FPOP();
    /* 0065a6c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a6ca: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0065a6cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a6ce: jb 0x65a6da */ if (fC) goto L_0065a6da;
L_0065a6d0:; BB(0x0065a6d0);
    /* 0065a6d0: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0065a6d3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0065a6d5: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0065a6d8: fchs  */ ST(0) = -ST(0);
L_0065a6da:; BB(0x0065a6da);
    /* 0065a6da: fld dword ptr [0x9383bc] */ FPUSH(R_F32((u32)(0x9383bcu)));
    /* 0065a6e0: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0065a6e3: fmul dword ptr [0x9383b8] */ ST(0) = ST(0) * R_F32((u32)(0x9383b8u));
    /* 0065a6e9: fld dword ptr [0x9383b4] */ FPUSH(R_F32((u32)(0x9383b4u)));
    /* 0065a6ef: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0065a6f2: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0065a6f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0065a6f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a6f9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0065a6fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a6fd: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0065a700: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0065a703: fst dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0));
    /* 0065a706: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a709: je 0x65abce */ if (fZ) goto L_0065abce;
L_0065a70f:; BB(0x0065a70f);
    /* 0065a70f: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a715: jne 0x65a8ac */ if (!fZ) goto L_0065a8ac;
L_0065a71b:; BB(0x0065a71b);
    /* 0065a71b: movsx edx, word ptr [ebp + 0x32] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32u));
    /* 0065a71f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a721: jne 0x65a8ac */ if (!fZ) goto L_0065a8ac;
L_0065a727:; BB(0x0065a727);
    /* 0065a727: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065a729: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 0065a730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a731: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x65a736u); f_007b4d18();
    /* 0065a736: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a737: fld dword ptr [0x9383e0] */ FPUSH(R_F32((u32)(0x9383e0u)));
    /* 0065a73d: fld dword ptr [0x9383e0] */ FPUSH(R_F32((u32)(0x9383e0u)));
    /* 0065a743: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0065a747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a749: je 0x65a799 */ if (fZ) goto L_0065a799;
L_0065a74b:; BB(0x0065a74b);
    /* 0065a74b: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0065a74e: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0065a751: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 0065a754: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0065a757: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 0065a75a: fsub dword ptr [ebp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4u));
    /* 0065a75d: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0065a760: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0065a763: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 0065a766: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a768: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0065a76c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a76e: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0065a772: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a774: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0065a778: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a77a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a77c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a77e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a780: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a782: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a784: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065a786: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065a788: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065a78a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a78c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a78d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a78f: jb 0x65a793 */ if (fC) goto L_0065a793;
L_0065a791:; BB(0x0065a791);
    /* 0065a791: fst st(1) */ ST(1) = ST(0);
L_0065a793:; BB(0x0065a793);
    /* 0065a793: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a795: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_0065a799:; BB(0x0065a799);
    /* 0065a799: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0065a79d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065a79f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a7a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a7a2: jb 0x65ab38 */ if (fC) goto L_0065ab38;
L_0065a7a8:; BB(0x0065a7a8);
    /* 0065a7a8: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0065a7ab: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7ad: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0065a7b0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7b2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065a7b4: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0065a7b7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7b9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065a7bb: fcomp dword ptr [0x9383dc] */ fx_compare(ST(0), R_F32((u32)(0x9383dcu))); FPOP();
    /* 0065a7c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a7c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a7c4: jbe 0x65aa73 */ if ((fC||fZ)) goto L_0065aa73;
L_0065a7ca:; BB(0x0065a7ca);
    /* 0065a7ca: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0065a7cd: fsub dword ptr [ebp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xcu));
    /* 0065a7d0: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0065a7d3: fsub dword ptr [ebp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x10u));
    /* 0065a7d6: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0065a7d9: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 0065a7dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a7de: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0065a7e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a7e4: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0065a7e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a7ea: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0065a7ee: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065a7f2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7f4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a7f6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065a7f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065a7fa: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0065a7fc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065a7fe: fcomp dword ptr [0x9383e4] */ fx_compare(ST(0), R_F32((u32)(0x9383e4u))); FPOP();
    /* 0065a804: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a806: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a807: jbe 0x65a810 */ if ((fC||fZ)) goto L_0065a810;
L_0065a809:; BB(0x0065a809);
    /* 0065a809: mov dword ptr [ebp + 0x38], 1 */ W32((u32)(r_ebp+0x38u), 0x1u);
L_0065a810:; BB(0x0065a810);
    /* 0065a810: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65a815u); f_008587a5();
    /* 0065a815: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065a818: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065a81b: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065a821: fcomp dword ptr [0x9383c4] */ fx_compare(ST(0), R_F32((u32)(0x9383c4u))); FPOP();
    /* 0065a827: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a829: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a82a: jb 0x65a831 */ if (fC) goto L_0065a831;
L_0065a82c:; BB(0x0065a82c);
    /* 0065a82c: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0065a82f: jmp 0x65a8ac */ goto L_0065a8ac;
L_0065a831:; BB(0x0065a831);
    /* 0065a831: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65a836u); f_008587a5();
    /* 0065a836: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065a83a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a83e: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065a844: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065a84a: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065a850: fmul dword ptr [0x9383ac] */ ST(0) = ST(0) * R_F32((u32)(0x9383acu));
    /* 0065a856: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 0065a859: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0065a85c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65a861u); f_008587a5();
    /* 0065a861: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065a865: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a869: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065a86f: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065a875: fmul dword ptr [0x9383ac] */ ST(0) = ST(0) * R_F32((u32)(0x9383acu));
    /* 0065a87b: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0065a87e: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0065a881: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65a886u); f_008587a5();
    /* 0065a886: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065a88a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a88e: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065a894: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065a89a: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065a8a0: fmul dword ptr [0x9383ac] */ ST(0) = ST(0) * R_F32((u32)(0x9383acu));
    /* 0065a8a6: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 0065a8a9: fst dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0));
L_0065a8ac:; BB(0x0065a8ac);
    /* 0065a8ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a8ad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065a8b0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x65a8b5u); f_0082e900();
    /* 0065a8b5: fcomp dword ptr [0x9383e8] */ fx_compare(ST(0), R_F32((u32)(0x9383e8u))); FPOP();
    /* 0065a8bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a8bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a8be: jbe 0x65a908 */ if ((fC||fZ)) goto L_0065a908;
L_0065a8c0:; BB(0x0065a8c0);
    /* 0065a8c0: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0065a8c3: jne 0x65a902 */ if (!fZ) goto L_0065a902;
L_0065a8c5:; BB(0x0065a8c5);
    /* 0065a8c5: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0065a8c8: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0065a8cb: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0065a8cd: fmul qword ptr [0x9382f8] */ ST(0) = ST(0) * R_F64((u32)(0x9382f8u));
    /* 0065a8d3: fdiv qword ptr [0x9382f0] */ ST(0) = ST(0) / R_F64((u32)(0x9382f0u));
    /* 0065a8d9: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065a8dd: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065a8e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065a8e7: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065a8eb: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065a8ef: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065a8f3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065a8f7: movsx ecx, word ptr [esp + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 0065a8fc: mov word ptr [ebp + 0x2e], cx */ W16((u32)(r_ebp+0x2eu), (u16)r_ecx);
    /* 0065a900: jmp 0x65a90f */ goto L_0065a90f;
L_0065a902:; BB(0x0065a902);
    /* 0065a902: movsx ecx, word ptr [ebp + 0x2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2eu));
    /* 0065a906: jmp 0x65a90f */ goto L_0065a90f;
L_0065a908:; BB(0x0065a908);
    /* 0065a908: movsx ecx, word ptr [ebp + 0x2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2eu));
    /* 0065a90c: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
L_0065a90f:; BB(0x0065a90f);
    /* 0065a90f: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 0065a913: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a915: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0065a918: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0065a91c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a920: fmul dword ptr [0x9383a8] */ ST(0) = ST(0) * R_F32((u32)(0x9383a8u));
    /* 0065a926: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065a92a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065a92f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065a934: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065a938: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065a93c: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065a940: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065a944: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0065a948: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a94a: mov word ptr [ebp + 0x2c], cx */ W16((u32)(r_ebp+0x2cu), (u16)r_ecx);
    /* 0065a94e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a950: jne 0x65a9cd */ if (!fZ) goto L_0065a9cd;
L_0065a952:; BB(0x0065a952);
    /* 0065a952: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0065a955: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 0065a958: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0065a95b: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 0065a95e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0065a960: fmul qword ptr [0x9382f8] */ ST(0) = ST(0) * R_F64((u32)(0x9382f8u));
    /* 0065a966: fdiv qword ptr [0x9382f0] */ ST(0) = ST(0) / R_F64((u32)(0x9382f0u));
    /* 0065a96c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065a970: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065a975: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065a97a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065a97e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065a982: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065a986: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065a98a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0065a98e: sub edx, dword ptr [esi + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065a991: sub edx, dword ptr [ebp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065a994: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0065a997: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0065a99b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065a99f: fmul dword ptr [0x9383c0] */ ST(0) = ST(0) * R_F32((u32)(0x9383c0u));
    /* 0065a9a5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065a9a9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065a9ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065a9b3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065a9b7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065a9bb: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065a9bf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065a9c3: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0065a9c7: add edi, dword ptr [ebp + 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065a9ca: mov dword ptr [ebp + 0x24], edi */ W32((u32)(r_ebp+0x24u), r_edi);
L_0065a9cd:; BB(0x0065a9cd);
    /* 0065a9cd: movsx edi, word ptr [ebp + 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x30u));
    /* 0065a9d1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0065a9d3: jl 0x65aa0f */ if ((fS!=fO)) goto L_0065aa0f;
L_0065a9d5:; BB(0x0065a9d5);
    /* 0065a9d5: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065a9d8: jg 0x65aa0f */ if ((!fZ&&fS==fO)) goto L_0065aa0f;
L_0065a9da:; BB(0x0065a9da);
    /* 0065a9da: mov edx, dword ptr [0xa8f87c] */ r_edx = R32((u32)(0xa8f87cu));
    /* 0065a9e0: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0065a9e3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065a9e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065a9e7: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0065a9ea: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a9ec: fadd dword ptr [ecx + edi*4 + 0x93836c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0x93836cu));
    /* 0065a9f3: fld dword ptr [ecx + edi*4 + 0x938330] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4+0x938330u)));
    /* 0065a9fa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065a9fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065a9fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065a9ff: ja 0x65aa08 */ if ((!fC&&!fZ)) goto L_0065aa08;
L_0065aa01:; BB(0x0065aa01);
    /* 0065aa01: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0065aa03: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0065aa06: jmp 0x65aa3e */ goto L_0065aa3e;
L_0065aa08:; BB(0x0065aa08);
    /* 0065aa08: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065aa0a: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0065aa0d: jmp 0x65aa3e */ goto L_0065aa3e;
L_0065aa0f:; BB(0x0065aa0f);
    /* 0065aa0f: mov ecx, dword ptr [0xa8f87c] */ r_ecx = R32((u32)(0xa8f87cu));
    /* 0065aa15: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0065aa18: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065aa1a: fld dword ptr [edx + ecx*8 + 0x93836c] */ FPUSH(R_F32((u32)(r_edx+r_ecx*8+0x93836cu)));
    /* 0065aa21: fadd dword ptr [ebp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x28u));
    /* 0065aa24: fld dword ptr [edx + ecx*8 + 0x938330] */ FPUSH(R_F32((u32)(r_edx+r_ecx*8+0x938330u)));
    /* 0065aa2b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065aa2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065aa2f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065aa30: ja 0x65aa39 */ if ((!fC&&!fZ)) goto L_0065aa39;
L_0065aa32:; BB(0x0065aa32);
    /* 0065aa32: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0065aa34: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0065aa37: jmp 0x65aa3e */ goto L_0065aa3e;
L_0065aa39:; BB(0x0065aa39);
    /* 0065aa39: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065aa3b: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
L_0065aa3e:; BB(0x0065aa3e);
    /* 0065aa3e: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 0065aa45: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0065aa48:; BB(0x0065aa48);
    /* 0065aa48: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0065aa4c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065aa4f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0065aa53: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065aa56: jne 0x65a63b */ if (!fZ) goto L_0065a63b;
L_0065aa5c:; BB(0x0065aa5c);
    /* 0065aa5c: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0065aa60: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0065aa64: add dword ptr [esi + 0x98], 1 */ { u32 ad = (u32)(r_esi+0x98u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0065aa6b: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065aa6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065aa6f: mov esp, ebx */ r_esp = r_ebx;
    /* 0065aa71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065aa72: ret  */ FN_RET(0x0065abc0); r_esp += 4; return;
L_0065aa73:; BB(0x0065aa73);
    /* 0065aa73: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65aa78u); f_008587a5();
    /* 0065aa78: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065aa7c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065aa80: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065aa86: fmul dword ptr [0x9383d4] */ ST(0) = ST(0) * R_F32((u32)(0x9383d4u));
    /* 0065aa8c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065aa90: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065aa95: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065aa9a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065aa9e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065aaa2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065aaa6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065aaaa: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0065aaae: mov word ptr [ebp + 0x32], dx */ W16((u32)(r_ebp+0x32u), (u16)r_edx);
    /* 0065aab2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65aab7u); f_008587a5();
    /* 0065aab7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065aabb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065aabf: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065aac5: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065aacb: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065aad1: fmul dword ptr [0x9383b0] */ ST(0) = ST(0) * R_F32((u32)(0x9383b0u));
    /* 0065aad7: fadd dword ptr [ebp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18u));
    /* 0065aada: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0065aadd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65aae2u); f_008587a5();
    /* 0065aae2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065aae6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065aaea: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065aaf0: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065aaf6: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065aafc: fmul dword ptr [0x9383b0] */ ST(0) = ST(0) * R_F32((u32)(0x9383b0u));
    /* 0065ab02: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0065ab05: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0065ab08: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65ab0du); f_008587a5();
    /* 0065ab0d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065ab11: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065ab15: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065ab1b: fadd dword ptr [0x9383d0] */ ST(0) = ST(0) + R_F32((u32)(0x9383d0u));
    /* 0065ab21: fmul dword ptr [0x9383cc] */ ST(0) = ST(0) * R_F32((u32)(0x9383ccu));
    /* 0065ab27: fmul dword ptr [0x9383b0] */ ST(0) = ST(0) * R_F32((u32)(0x9383b0u));
    /* 0065ab2d: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 0065ab30: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0065ab33: jmp 0x65a810 */ goto L_0065a810;
L_0065ab38:; BB(0x0065ab38);
    /* 0065ab38: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x65ab3du); f_008587a5();
    /* 0065ab3d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065ab41: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0065ab45: fdiv dword ptr [0x9383d8] */ ST(0) = ST(0) / R_F32((u32)(0x9383d8u));
    /* 0065ab4b: fmul dword ptr [0x9383d4] */ ST(0) = ST(0) * R_F32((u32)(0x9383d4u));
    /* 0065ab51: fmul dword ptr [0x9383c8] */ ST(0) = ST(0) * R_F32((u32)(0x9383c8u));
    /* 0065ab57: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0065ab5b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0065ab60: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065ab65: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065ab69: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0065ab6d: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065ab71: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0065ab75: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0065ab79: mov word ptr [ebp + 0x32], dx */ W16((u32)(r_ebp+0x32u), (u16)r_edx);
    /* 0065ab7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab7e: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0065ab82: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065ab85: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x65ab8au); f_0082dc9c();
    /* 0065ab8a: fdivr dword ptr [0x9383b0] */ ST(0) = R_F32((u32)(0x9383b0u)) / ST(0);
    /* 0065ab90: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0065ab94: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0065ab96: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0065ab9a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
L_0065ab9b:; BB(0x0065ab9b);
    /* 0065ab9b: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ab9c: and al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065ab9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0065aba0:; BB(0x0065aba0);
    /* 0065aba0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0065aba2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065aba4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0065aba6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065aba8: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0065abac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065abae: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0065abb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065abb4: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0065abb8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065abba: fchs  */ ST(0) = -ST(0);
    /* 0065abbc: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0065abbf: fchs  */ ST(0) = -ST(0);
L_0065abc0:; BB(0x0065abc0);
    /* 0065abc0: loopne 0x65ab9b */ r_ecx--; if (r_ecx && !fZ) goto L_0065ab9b;
    /* 0065abc1: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0065abc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065abc3: sbb al, 0xd9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xd9u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0065abc4: fchs  */ ST(0) = -ST(0);
    /* 0065abc5: loopne 0x65aba0 */ r_ecx--; if (r_ecx && !fZ) goto L_0065aba0;
    /* 0065abc6: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0065abc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065abc8: and cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065abc9: jmp 0x65a810 */ goto L_0065a810;
    /* 0065abca: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065abcb: cld  */ rt_df = 0;
    UNSUP(0x0065abcc, "falls out of decoded code");
L_0065abce:; BB(0x0065abce);
    /* 0065abce: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0065abd1: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 0065abd4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065abd6: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0065abd9: fsub dword ptr [ebp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4u));
    /* 0065abdc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065abde: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065abe0: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0065abe3: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 0065abe6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065abe8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0065abea: fcomp dword ptr [0x9383e4] */ fx_compare(ST(0), R_F32((u32)(0x9383e4u))); FPOP();
    /* 0065abf0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065abf2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065abf3: jae 0x65ac01 */ if (!fC) goto L_0065ac01;
L_0065abf5:; BB(0x0065abf5);
    /* 0065abf5: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 0065abfc: jmp 0x65a70f */ goto L_0065a70f;
L_0065ac01:; BB(0x0065ac01);
    /* 0065ac01: test edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ac07: je 0x65ac11 */ if (fZ) goto L_0065ac11;
L_0065ac09:; BB(0x0065ac09);
    /* 0065ac09: sar edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0065ac0c: jmp 0x65a70f */ goto L_0065a70f;
L_0065ac11:; BB(0x0065ac11);
    /* 0065ac11: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065ac13: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0065ac16: jmp 0x65aa48 */ goto L_0065aa48;
L_0065ac1b:; BB(0x0065ac1b);
    /* 0065ac1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065ac1d: mov word ptr [ebp + 0x32], dx */ W16((u32)(r_ebp+0x32u), (u16)r_edx);
    /* 0065ac21: jmp 0x65a65b */ goto L_0065a65b;
}

void f_0065ac28(void) /* sub_65AC28 */
{
    FN_ENTER(0x0065ac28);
    /* 0065ac28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac2b: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ac2e: mov edi, ecx */ r_edi = r_ecx;
    /* 0065ac30: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0065ac35: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ac38: je 0x65ac68 */ if (fZ) goto L_0065ac68;
L_0065ac3a:; BB(0x0065ac3a);
    /* 0065ac3a: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac3f: mov ecx, edi */ r_ecx = r_edi;
    /* 0065ac41: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0065ac43: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac48: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65ac4bu); call_ind(t); }
    /* 0065ac4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ac4d: je 0x65ac68 */ if (fZ) goto L_0065ac68;
L_0065ac4f:; BB(0x0065ac4f);
    /* 0065ac4f: mov eax, dword ptr [edi + 0xa0] */ r_eax = R32((u32)(r_edi+0xa0u));
    /* 0065ac55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ac57: je 0x65afb1 */ if (fZ) goto L_0065afb1;
L_0065ac5d:; BB(0x0065ac5d);
    /* 0065ac5d: mov ecx, edi */ r_ecx = r_edi;
    /* 0065ac5f: call 0x65afb8 */ r_esp -= 4; W32(r_esp, 0x65ac64u); f_0065afb8();
    /* 0065ac64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ac66: jne 0x65ac6f */ if (!fZ) goto L_0065ac6f;
L_0065ac68:; BB(0x0065ac68);
    /* 0065ac68: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065ac6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065ac6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065ac6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065ac6e: ret  */ FN_RET(0x0065ac28); r_esp += 4; return;
L_0065ac6f:; BB(0x0065ac6f);
    /* 0065ac6f: mov esi, dword ptr [edi + 0xa0] */ r_esi = R32((u32)(r_edi+0xa0u));
    /* 0065ac75: mov ebx, dword ptr [edi + 0x94] */ r_ebx = R32((u32)(r_edi+0x94u));
    /* 0065ac7b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65ac80u); f_0082d7b0();
    /* 0065ac80: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0065ac83: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ac85: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x65ac8au); f_008316b4();
    /* 0065ac8a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0065ac8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ac8f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65ac94u); f_0082d8bc();
    /* 0065ac94: fldz  */ FPUSH(0.0);
    /* 0065ac96: fldz  */ FPUSH(0.0);
    /* 0065ac98: fldz  */ FPUSH(0.0);
    /* 0065ac9a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0065ac9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065aca1: je 0x65acc6 */ if (fZ) goto L_0065acc6;
L_0065aca3:; BB(0x0065aca3);
    /* 0065aca3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0065aca5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065aca7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065aca9: fld dword ptr [eax + 0x178] */ FPUSH(R_F32((u32)(r_eax+0x178u)));
    /* 0065acaf: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 0065acb2: fld dword ptr [eax + 0x17c] */ FPUSH(R_F32((u32)(r_eax+0x17cu)));
    /* 0065acb8: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 0065acbb: fld dword ptr [eax + 0x180] */ FPUSH(R_F32((u32)(r_eax+0x180u)));
    /* 0065acc1: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 0065acc4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0065acc6:; BB(0x0065acc6);
    /* 0065acc6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065acc8: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0065accc: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0065acd0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_0065acd4:; BB(0x0065acd4);
    /* 0065acd4: mov eax, ebx */ r_eax = r_ebx;
    /* 0065acd6: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065acd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065acdb: je 0x65afac */ if (fZ) goto L_0065afac;
L_0065ace1:; BB(0x0065ace1);
    /* 0065ace1: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 0065ace4: movzx eax, word ptr [esi + 0x2c] */ r_eax = (u32)R16((u32)(r_esi+0x2cu));
    /* 0065ace8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065acea: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0065aced: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065acef: jle 0x65af9b */ if ((fZ||fS!=fO)) goto L_0065af9b;
L_0065acf5:; BB(0x0065acf5);
    /* 0065acf5: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065acfa: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0065acfd: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
L_0065ad01:; BB(0x0065ad01);
    /* 0065ad01: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0065ad05: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0065ad09: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0065ad0b: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0065ad0e: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0065ad11: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0065ad14: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0065ad17: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065ad19: fsub st(6), st(0) */ ST(6) = ST(6) - ST(0);
    /* 0065ad1b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ad1d: fsub st(5), st(0) */ ST(5) = ST(5) - ST(0);
    /* 0065ad1f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ad21: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0065ad23: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ad25: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0065ad27: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0065ad2b: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0065ad2f: fmul dword ptr [0x938320] */ ST(0) = ST(0) * R_F32((u32)(0x938320u));
    /* 0065ad35: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0065ad38: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0065ad3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ad3e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0065ad42: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 0065ad44: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0065ad47: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0065ad49: je 0x65ad86 */ if (fZ) goto L_0065ad86;
L_0065ad4b:; BB(0x0065ad4b);
    /* 0065ad4b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065ad4d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065ad4f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0065ad51: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065ad53: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065ad55: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065ad57: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065ad59: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065ad5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ad5d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065ad5f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ad61: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065ad63: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065ad65: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0065ad67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ad69: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0065ad6b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065ad6d: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0065ad6f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065ad71: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0065ad73: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0065ad75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065ad77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065ad78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ad7a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0065ad7c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065ad7e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065ad80: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ad82: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ad84: jbe 0x65adc2 */ if ((fC||fZ)) goto L_0065adc2;
L_0065ad86:; BB(0x0065ad86);
    /* 0065ad86: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ad88: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ad8a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065ad8c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0065ad8e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0065ad90: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0065ad92: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0065ad96: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0065ad9a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0065ad9e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065ada0: fst dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0));
    /* 0065ada3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065ada5: fst dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0));
    /* 0065ada8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065adaa: fst dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0));
    /* 0065adad: mov dword ptr [esi + 0x34], 1 */ W32((u32)(r_esi+0x34u), 0x1u);
    /* 0065adb4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065adb6: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0065adb8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0065adba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0065adbc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0065adbe: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0065adc0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0065adc2:; BB(0x0065adc2);
    /* 0065adc2: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0065adc4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065adc6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0065adc8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065adca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065adcc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0065adce: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65add3u); f_0082d7b0();
    /* 0065add3: mov ecx, esi */ r_ecx = r_esi;
    /* 0065add5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65addau); f_0082d838();
    /* 0065adda: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0065adde: movsx edx, word ptr [esi + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 0065ade2: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0065ade6: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0065adeb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065adf0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0065adf4: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0065adf8: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0065adfc: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0065ae00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ae02: add edx, dword ptr [esp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065ae06: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65ae0bu); f_0082d8bc();
    /* 0065ae0b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ae0d: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x65ae12u); f_007a94a0();
    /* 0065ae12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065ae13: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x65ae18u); f_00807ac0();
    /* 0065ae18: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ae1b: jne 0x65aeb6 */ if (!fZ) goto L_0065aeb6;
L_0065ae21:; BB(0x0065ae21);
    /* 0065ae21: movsx eax, word ptr [esi + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x30u));
    /* 0065ae25: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ae28: jne 0x65ae57 */ if (!fZ) goto L_0065ae57;
L_0065ae2a:; BB(0x0065ae2a);
    /* 0065ae2a: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065ae30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ae32: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65ae37u); f_005b8624();
    /* 0065ae37: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ae39: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65ae3eu); f_00829cc8();
    /* 0065ae3e: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065ae44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ae46: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65ae4bu); f_005b8610();
    /* 0065ae4b: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ae4d: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65ae52u); f_00831758();
    /* 0065ae52: jmp 0x65af89 */ goto L_0065af89;
L_0065ae57:; BB(0x0065ae57);
    /* 0065ae57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ae5a: jne 0x65ae89 */ if (!fZ) goto L_0065ae89;
L_0065ae5c:; BB(0x0065ae5c);
    /* 0065ae5c: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065ae62: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ae64: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65ae69u); f_005b8624();
    /* 0065ae69: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ae6b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65ae70u); f_00829cc8();
    /* 0065ae70: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065ae76: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ae78: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65ae7du); f_005b8610();
    /* 0065ae7d: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ae7f: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65ae84u); f_00831758();
    /* 0065ae84: jmp 0x65af89 */ goto L_0065af89;
L_0065ae89:; BB(0x0065ae89);
    /* 0065ae89: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065ae8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ae91: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65ae96u); f_005b8624();
    /* 0065ae96: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ae98: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65ae9du); f_00829cc8();
    /* 0065ae9d: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065aea3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aea5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65aeaau); f_005b8610();
    /* 0065aeaa: mov ecx, eax */ r_ecx = r_eax;
    /* 0065aeac: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65aeb1u); f_00831758();
    /* 0065aeb1: jmp 0x65af89 */ goto L_0065af89;
L_0065aeb6:; BB(0x0065aeb6);
    /* 0065aeb6: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x65aebbu); f_0082fa9c();
    /* 0065aebb: movsx eax, word ptr [esi + 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x30u));
    /* 0065aebf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065aec2: jne 0x65af05 */ if (!fZ) goto L_0065af05;
L_0065aec4:; BB(0x0065aec4);
    /* 0065aec4: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065aeca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aecc: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65aed1u); f_005b8624();
    /* 0065aed1: mov ecx, eax */ r_ecx = r_eax;
    /* 0065aed3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65aed8u); f_00829cc8();
    /* 0065aed8: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065aede: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aee0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65aee5u); f_005b8610();
    /* 0065aee5: mov edi, eax */ r_edi = r_eax;
    /* 0065aee7: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065aeed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aeef: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65aef4u); f_005b8638();
    /* 0065aef4: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065aef7: mov ecx, edi */ r_ecx = r_edi;
    /* 0065aef9: mov edx, eax */ r_edx = r_eax;
    /* 0065aefb: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65af00u); f_0083bd00();
    /* 0065af00: jmp 0x65af84 */ goto L_0065af84;
L_0065af05:; BB(0x0065af05);
    /* 0065af05: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065af08: jne 0x65af48 */ if (!fZ) goto L_0065af48;
L_0065af0a:; BB(0x0065af0a);
    /* 0065af0a: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065af10: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065af12: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65af17u); f_005b8624();
    /* 0065af17: mov ecx, eax */ r_ecx = r_eax;
    /* 0065af19: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65af1eu); f_00829cc8();
    /* 0065af1e: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065af24: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065af26: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65af2bu); f_005b8610();
    /* 0065af2b: mov edi, eax */ r_edi = r_eax;
    /* 0065af2d: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065af33: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065af35: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65af3au); f_005b8638();
    /* 0065af3a: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065af3d: mov ecx, edi */ r_ecx = r_edi;
    /* 0065af3f: mov edx, eax */ r_edx = r_eax;
    /* 0065af41: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65af46u); f_0083bd00();
    /* 0065af46: jmp 0x65af84 */ goto L_0065af84;
L_0065af48:; BB(0x0065af48);
    /* 0065af48: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065af4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065af50: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65af55u); f_005b8624();
    /* 0065af55: mov ecx, eax */ r_ecx = r_eax;
    /* 0065af57: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65af5cu); f_00829cc8();
    /* 0065af5c: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065af62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065af64: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65af69u); f_005b8610();
    /* 0065af69: mov edi, eax */ r_edi = r_eax;
    /* 0065af6b: mov ecx, dword ptr [0xa8f878] */ r_ecx = R32((u32)(0xa8f878u));
    /* 0065af71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065af73: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65af78u); f_005b8638();
    /* 0065af78: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065af7b: mov ecx, edi */ r_ecx = r_edi;
    /* 0065af7d: mov edx, eax */ r_edx = r_eax;
    /* 0065af7f: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65af84u); f_0083bd00();
L_0065af84:; BB(0x0065af84);
    /* 0065af84: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x65af89u); f_0082faac();
L_0065af89:; BB(0x0065af89);
    /* 0065af89: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x65af8eu); f_007a94b0();
    /* 0065af8e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65af93u); f_0082da80();
    /* 0065af93: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065af96: jmp 0x65acd4 */ goto L_0065acd4;
L_0065af9b:; BB(0x0065af9b);
    /* 0065af9b: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065afa0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0065afa3: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0065afa7: jmp 0x65ad01 */ goto L_0065ad01;
L_0065afac:; BB(0x0065afac);
    /* 0065afac: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65afb1u); f_0082da80();
L_0065afb1:; BB(0x0065afb1);
    /* 0065afb1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065afb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065afb5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065afb6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065afb7: ret  */ FN_RET(0x0065ac28); r_esp += 4; return;
}

void f_0065afb8(void) /* sub_65AFB8 */
{
    FN_ENTER(0x0065afb8);
    /* 0065afb8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065afb9: mov esi, ecx */ r_esi = r_ecx;
    /* 0065afbb: mov eax, dword ptr [0xa8f87c] */ r_eax = R32((u32)(0xa8f87cu));
    /* 0065afc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065afc2: jne 0x65b05e */ if (!fZ) goto L_0065b05e;
L_0065afc8:; BB(0x0065afc8);
    /* 0065afc8: movsx ecx, word ptr [esi + 0x90] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x90u));
    /* 0065afcf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065afd1: jne 0x65b004 */ if (!fZ) goto L_0065b004;
L_0065afd3:; BB(0x0065afd3);
    /* 0065afd3: call 0x671040 */ r_esp -= 4; W32(r_esp, 0x65afd8u); f_00671040();
    /* 0065afd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065afda: je 0x65afe5 */ if (fZ) goto L_0065afe5;
L_0065afdc:; BB(0x0065afdc);
    /* 0065afdc: movsx ecx, word ptr [esi + 0x90] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x90u));
    /* 0065afe3: jmp 0x65b051 */ goto L_0065b051;
L_0065afe5:; BB(0x0065afe5);
    /* 0065afe5: mov eax, 2 */ r_eax = 0x2u;
    /* 0065afea: mov word ptr [esi + 0x90], ax */ W16((u32)(r_esi+0x90u), (u16)r_eax);
    /* 0065aff1: mov edx, 0x28 */ r_edx = 0x28u;
    /* 0065aff6: mov word ptr [esi + 0x92], dx */ W16((u32)(r_esi+0x92u), (u16)r_edx);
    /* 0065affd: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0065b002: jmp 0x65b051 */ goto L_0065b051;
L_0065b004:; BB(0x0065b004);
    /* 0065b004: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b007: jne 0x65b034 */ if (!fZ) goto L_0065b034;
L_0065b009:; BB(0x0065b009);
    /* 0065b009: movsx eax, word ptr [esi + 0x92] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x92u));
    /* 0065b010: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b013: mov word ptr [esi + 0x92], ax */ W16((u32)(r_esi+0x92u), (u16)r_eax);
    /* 0065b01a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0065b01d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065b01f: jg 0x65b051 */ if ((!fZ&&fS==fO)) goto L_0065b051;
L_0065b021:; BB(0x0065b021);
    /* 0065b021: mov eax, 3 */ r_eax = 0x3u;
    /* 0065b026: mov word ptr [esi + 0x90], ax */ W16((u32)(r_esi+0x90u), (u16)r_eax);
    /* 0065b02d: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0065b032: jmp 0x65b051 */ goto L_0065b051;
L_0065b034:; BB(0x0065b034);
    /* 0065b034: call 0x671040 */ r_esp -= 4; W32(r_esp, 0x65b039u); f_00671040();
    /* 0065b039: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b03b: jne 0x65b046 */ if (!fZ) goto L_0065b046;
L_0065b03d:; BB(0x0065b03d);
    /* 0065b03d: movsx ecx, word ptr [esi + 0x90] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x90u));
    /* 0065b044: jmp 0x65b051 */ goto L_0065b051;
L_0065b046:; BB(0x0065b046);
    /* 0065b046: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065b048: mov word ptr [esi + 0x90], ax */ W16((u32)(r_esi+0x90u), (u16)r_eax);
    /* 0065b04f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0065b051:; BB(0x0065b051);
    /* 0065b051: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065b054: mov eax, 0 */ r_eax = 0x0u;
    /* 0065b059: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0065b05c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065b05d: ret  */ FN_RET(0x0065afb8); r_esp += 4; return;
L_0065b05e:; BB(0x0065b05e);
    /* 0065b05e: mov eax, 1 */ r_eax = 0x1u;
    /* 0065b063: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065b064: ret  */ FN_RET(0x0065afb8); r_esp += 4; return;
}

