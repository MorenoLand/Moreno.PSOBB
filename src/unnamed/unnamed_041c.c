#include "protos.h"

void f_0041c04d(void)
{
    FN_ENTER(0x0041c04d);
    /* 0041c04d: mov edx, dword ptr [ebp + 0x6ec] */ r_edx = R32((u32)(r_ebp+0x6ecu));
    /* 0041c053: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0041c056: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0041c05c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041c05e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041c05f: ja 0x41c0d4 */ if ((!fC&&!fZ)) goto L_0041c0d4;
L_0041c061:; BB(0x0041c061);
    /* 0041c061: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041c064: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c06a: je 0x41c15f */ if (fZ) goto L_0041c15f;
L_0041c070:; BB(0x0041c070);
    /* 0041c070: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c072: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c074: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041c077: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041c079: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c07fu); call_ind(t); }
    /* 0041c07f: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0041c083: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041c087: mov edx, 0x13 */ r_edx = 0x13u;
    /* 0041c08c: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041c091: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041c096: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 0041c09c: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0041c0a1: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0041c0a6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041c0a9: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 0041c0b0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041c0b4: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 0041c0ba: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 0041c0c0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041c0c4: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0041c0c8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c0cdu); f_008003e0();
    /* 0041c0cd: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c0d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c0d1: ret 4 */ FN_RET(0x0041c04d); r_esp += 8; return;
L_0041c0d4:; BB(0x0041c0d4);
    /* 0041c0d4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c0d6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c0d8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0041c0db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041c0dd: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c0e3u); call_ind(t); }
    /* 0041c0e3: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0041c0e7: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 0041c0ec: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 0041c0f1: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 0041c0f6: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0041c0fb: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 0041c101: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0041c106: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 0041c10b: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0041c10f: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 0041c116: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041c11a: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 0041c120: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 0041c126: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0041c12a: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0041c12e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c133u); f_008003e0();
    /* 0041c133: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c136: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c137: ret 4 */ FN_RET(0x0041c04d); r_esp += 8; return;
L_0041c15f:; BB(0x0041c15f);
    /* 0041c15f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c163: ret 4 */ FN_RET(0x0041c04d); r_esp += 8; return;
}

void f_0041c13a(void)
{
    FN_ENTER(0x0041c13a);
    /* 0041c13a: mov eax, dword ptr [ebp + 0x86c] */ r_eax = R32((u32)(r_ebp+0x86cu));
    /* 0041c140: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041c143: mov dword ptr [ebp + 0x86c], eax */ W32((u32)(r_ebp+0x86cu), r_eax);
    /* 0041c149: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c14c: jle 0x41c15f */ if ((fZ||fS!=fO)) goto L_0041c15f;
L_0041c14e:; BB(0x0041c14e);
    /* 0041c14e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041c150: call 0x41a874 */ r_esp -= 4; W32(r_esp, 0x41c155u); f_0041a874();
    /* 0041c155: mov dword ptr [ebp + 0x86c], 0 */ W32((u32)(r_ebp+0x86cu), 0x0u);
L_0041c15f:; BB(0x0041c15f);
    /* 0041c15f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c163: ret 4 */ FN_RET(0x0041c13a); r_esp += 8; return;
}

void f_0041c15f(void)
{
    FN_ENTER(0x0041c15f);
    /* 0041c15f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c163: ret 4 */ FN_RET(0x0041c15f); r_esp += 8; return;
}

void f_0041c168(void) /* sub_41C168 */
{
    FN_ENTER(0x0041c168);
    /* 0041c168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041c169: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041c16f: mov edi, ecx */ r_edi = r_ecx;
    /* 0041c171: lea edx, [edi + 0x87c] */ r_edx = (u32)(r_edi+0x87cu);
    /* 0041c177: mov eax, dword ptr [esp + 0xb0] */ r_eax = R32((u32)(r_esp+0xb0u));
    /* 0041c17e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041c181: ja 0x41c63a */ if ((!fC&&!fZ)) goto L_0041c63a;
L_0041c187:; BB(0x0041c187);
    /* 0041c187: mov eax, dword ptr [eax*4 + 0x8fb39c] */ r_eax = R32((u32)(r_eax*4+0x8fb39cu));
    /* 0041c18e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041c63a:; BB(0x0041c63a);
    /* 0041c63a: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c641: ret 4 */ FN_RET(0x0041c168); r_esp += 8; return;
}

void f_0041c190(void)
{
    FN_ENTER(0x0041c190);
    /* 0041c190: mov eax, dword ptr [edi + 0x770] */ r_eax = R32((u32)(r_edi+0x770u));
    /* 0041c196: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c19b: jg 0x41c2c7 */ if ((!fZ&&fS==fO)) goto L_0041c2c7;
L_0041c1a1:; BB(0x0041c1a1);
    /* 0041c1a1: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c1a7: mov eax, dword ptr [edi + 0x6ec] */ r_eax = R32((u32)(r_edi+0x6ecu));
    /* 0041c1ad: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c1af: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c1b2: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41c1b7u); f_004c6c54();
    /* 0041c1b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c1b9: jne 0x41c2c7 */ if (!fZ) goto L_0041c2c7;
L_0041c1bf:; BB(0x0041c1bf);
    /* 0041c1bf: mov eax, dword ptr [edi + 0x870] */ r_eax = R32((u32)(r_edi+0x870u));
    /* 0041c1c5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c1c8: je 0x41c644 */ if (fZ) goto L_0041c644;
L_0041c1ce:; BB(0x0041c1ce);
    /* 0041c1ce: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c1d4: mov eax, dword ptr [edi + 0x6ec] */ r_eax = R32((u32)(r_edi+0x6ecu));
    /* 0041c1da: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c1dc: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c1df: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41c1e4u); f_004c6c54();
    /* 0041c1e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c1e6: je 0x41c250 */ if (fZ) goto L_0041c250;
L_0041c1e8:; BB(0x0041c1e8);
    /* 0041c1e8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c1ea: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c1ec: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c1ee: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c1f0: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c1f6u); call_ind(t); }
    /* 0041c1f6: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c1fa: mov byte ptr [esp + 0x1c], 0x12 */ W8((u32)(r_esp+0x1cu), 0x12u);
    /* 0041c1ff: mov edx, 7 */ r_edx = 0x7u;
    /* 0041c204: mov byte ptr [esp + 0x1d], 5 */ W8((u32)(r_esp+0x1du), 0x5u);
    /* 0041c209: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 0041c20e: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c214: mov word ptr [esp + 0x20], dx */ W16((u32)(r_esp+0x20u), (u16)r_edx);
    /* 0041c219: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 0041c21e: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0041c222: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c229: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0041c22d: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c233: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c239: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0041c23d: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0041c241: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c246u); f_008003e0();
    /* 0041c246: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c24c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c24d: ret 4 */ FN_RET(0x0041c190); r_esp += 8; return;
L_0041c250:; BB(0x0041c250);
    /* 0041c250: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c252: call 0x41c730 */ r_esp -= 4; W32(r_esp, 0x41c257u); f_0041c730();
    /* 0041c257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c259: je 0x41c63a */ if (fZ) goto L_0041c63a;
L_0041c25f:; BB(0x0041c25f);
    /* 0041c25f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c261: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c263: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c265: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c267: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c26du); call_ind(t); }
    /* 0041c26d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c271: mov byte ptr [esp + 8], 0x12 */ W8((u32)(r_esp+0x8u), 0x12u);
    /* 0041c276: mov edx, 0xf */ r_edx = 0xfu;
    /* 0041c27b: mov byte ptr [esp + 9], 5 */ W8((u32)(r_esp+0x9u), 0x5u);
    /* 0041c280: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0041c285: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c28b: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 0041c290: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0041c295: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0041c299: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c2a0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0041c2a4: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c2aa: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c2b0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0041c2b4: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0041c2b8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c2bdu); f_008003e0();
    /* 0041c2bd: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c2c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c2c4: ret 4 */ FN_RET(0x0041c190); r_esp += 8; return;
L_0041c2c7:; BB(0x0041c2c7);
    /* 0041c2c7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2c9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2cb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c2cd: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c2cf: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c2d5u); call_ind(t); }
    /* 0041c2d5: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c2d9: mov byte ptr [esp + 0x44], 0x12 */ W8((u32)(r_esp+0x44u), 0x12u);
    /* 0041c2de: mov edx, 8 */ r_edx = 0x8u;
    /* 0041c2e3: mov byte ptr [esp + 0x45], 5 */ W8((u32)(r_esp+0x45u), 0x5u);
    /* 0041c2e8: mov word ptr [esp + 0x46], ax */ W16((u32)(r_esp+0x46u), (u16)r_eax);
    /* 0041c2ed: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c2f3: mov word ptr [esp + 0x48], dx */ W16((u32)(r_esp+0x48u), (u16)r_edx);
    /* 0041c2f8: mov word ptr [esp + 0x4a], ax */ W16((u32)(r_esp+0x4au), (u16)r_eax);
    /* 0041c2fd: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 0041c301: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c308: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0041c30c: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c312: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c318: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0041c31c: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0041c320: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c325u); f_008003e0();
    /* 0041c325: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c32b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c32c: ret 4 */ FN_RET(0x0041c190); r_esp += 8; return;
L_0041c63a:; BB(0x0041c63a);
    /* 0041c63a: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c641: ret 4 */ FN_RET(0x0041c190); r_esp += 8; return;
L_0041c644:; BB(0x0041c644);
    /* 0041c644: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c646: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c648: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c64a: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c64c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c652u); call_ind(t); }
    /* 0041c652: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c656: mov byte ptr [esp + 0x30], 0x12 */ W8((u32)(r_esp+0x30u), 0x12u);
    /* 0041c65b: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0041c660: mov byte ptr [esp + 0x31], 5 */ W8((u32)(r_esp+0x31u), 0x5u);
    /* 0041c665: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 0041c66a: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c670: mov word ptr [esp + 0x34], dx */ W16((u32)(r_esp+0x34u), (u16)r_edx);
    /* 0041c675: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 0041c67a: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0041c67e: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c685: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0041c689: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c68f: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c695: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0041c699: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0041c69d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c6a2u); f_008003e0();
    /* 0041c6a2: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c6a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c6a9: ret 4 */ FN_RET(0x0041c190); r_esp += 8; return;
}

void f_0041c32f(void)
{
    FN_ENTER(0x0041c32f);
    /* 0041c32f: mov eax, dword ptr [edi + 0x86c] */ r_eax = R32((u32)(r_edi+0x86cu));
    /* 0041c335: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041c338: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c33b: jge 0x41c34d */ if ((fS==fO)) goto L_0041c34d;
L_0041c33d:; BB(0x0041c33d);
    /* 0041c33d: mov dword ptr [edi + 0x86c], eax */ W32((u32)(r_edi+0x86cu), r_eax);
    /* 0041c343: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c349: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c34a: ret 4 */ FN_RET(0x0041c32f); r_esp += 8; return;
L_0041c34d:; BB(0x0041c34d);
    /* 0041c34d: mov edx, dword ptr [edi + 0x6ec] */ r_edx = R32((u32)(r_edi+0x6ecu));
    /* 0041c353: mov dword ptr [edi + 0x86c], 0 */ W32((u32)(r_edi+0x86cu), 0x0u);
    /* 0041c35d: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0041c360: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0041c366: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041c368: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041c369: ja 0x41c37f */ if ((!fC&&!fZ)) goto L_0041c37f;
L_0041c36b:; BB(0x0041c36b);
    /* 0041c36b: mov dword ptr [edi + 0x870], 1 */ W32((u32)(r_edi+0x870u), 0x1u);
    /* 0041c375: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c37b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c37c: ret 4 */ FN_RET(0x0041c32f); r_esp += 8; return;
L_0041c37f:; BB(0x0041c37f);
    /* 0041c37f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0041c382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c383: mov dword ptr [edi + 0x87c], eax */ W32((u32)(r_edi+0x87cu), r_eax);
    /* 0041c389: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c38b: call 0x41bfa8 */ r_esp -= 4; W32(r_esp, 0x41c390u); f_0041bfa8();
    /* 0041c390: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c392: call 0x41bf24 */ r_esp -= 4; W32(r_esp, 0x41c397u); f_0041bf24();
    /* 0041c397: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c39d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c39e: ret 4 */ FN_RET(0x0041c32f); r_esp += 8; return;
}

void f_0041c3a1(void)
{
    FN_ENTER(0x0041c3a1);
    /* 0041c3a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c3a4: call 0x41bf7c */ r_esp -= 4; W32(r_esp, 0x41c3a9u); f_0041bf7c();
    /* 0041c3a9: jmp 0x41c63a */ goto L_0041c63a;
L_0041c63a:; BB(0x0041c63a);
    /* 0041c63a: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c641: ret 4 */ FN_RET(0x0041c3a1); r_esp += 8; return;
}

void f_0041c3ae(void)
{
    FN_ENTER(0x0041c3ae);
    /* 0041c3ae: push dword ptr [edi + 0x87c] */ { u32 v = R32((u32)(r_edi+0x87cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c3b4: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c3b6: call 0x41bfa8 */ r_esp -= 4; W32(r_esp, 0x41c3bbu); f_0041bfa8();
    /* 0041c3bb: jmp 0x41c63a */ goto L_0041c63a;
L_0041c63a:; BB(0x0041c63a);
    /* 0041c63a: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c641: ret 4 */ FN_RET(0x0041c3ae); r_esp += 8; return;
}

void f_0041c3c0(void)
{
    FN_ENTER(0x0041c3c0);
    /* 0041c3c0: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0041c3c2: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0041c3c7: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0041c3ce: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c3d0: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x41c3d6u); call_ind(t); }
    /* 0041c3d6: mov dword ptr [edi + 0x3ec], 1 */ W32((u32)(r_edi+0x3ecu), 0x1u);
    /* 0041c3e0: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c3e2: call 0x41b0bc */ r_esp -= 4; W32(r_esp, 0x41c3e7u); f_0041b0bc();
    /* 0041c3e7: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0041c3ed: mov dword ptr [edi + 0x86c], 0x64 */ W32((u32)(r_edi+0x86cu), 0x64u);
    /* 0041c3f7: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041c3fc: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0041c402: mov dword ptr [edi + 0x870], 0 */ W32((u32)(r_edi+0x870u), 0x0u);
    /* 0041c40c: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c412: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c413: ret 4 */ FN_RET(0x0041c3c0); r_esp += 8; return;
}

void f_0041c416(void)
{
    FN_ENTER(0x0041c416);
    /* 0041c416: mov eax, dword ptr [edi + 0x870] */ r_eax = R32((u32)(r_edi+0x870u));
    /* 0041c41c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c41f: je 0x41c6ac */ if (fZ) goto L_0041c6ac;
L_0041c425:; BB(0x0041c425);
    /* 0041c425: mov eax, dword ptr [edi + 0x6ec] */ r_eax = R32((u32)(r_edi+0x6ecu));
    /* 0041c42b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0041c42e: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c434: jne 0x41c51e */ if (!fZ) goto L_0041c51e;
L_0041c43a:; BB(0x0041c43a);
    /* 0041c43a: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c440: jne 0x41c4b6 */ if (!fZ) goto L_0041c4b6;
L_0041c442:; BB(0x0041c442);
    /* 0041c442: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c448: je 0x41c63a */ if (fZ) goto L_0041c63a;
L_0041c44e:; BB(0x0041c44e);
    /* 0041c44e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c450: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c452: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c454: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c456: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c45cu); call_ind(t); }
    /* 0041c45c: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c460: mov byte ptr [esp + 0x58], 0x12 */ W8((u32)(r_esp+0x58u), 0x12u);
    /* 0041c465: mov edx, 8 */ r_edx = 0x8u;
    /* 0041c46a: mov byte ptr [esp + 0x59], 5 */ W8((u32)(r_esp+0x59u), 0x5u);
    /* 0041c46f: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 0041c474: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c47a: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 0041c47f: mov word ptr [esp + 0x5e], ax */ W16((u32)(r_esp+0x5eu), (u16)r_eax);
    /* 0041c484: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0041c488: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c48f: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0041c493: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c499: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c49f: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0041c4a3: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 0041c4a7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c4acu); f_008003e0();
    /* 0041c4ac: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c4b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c4b3: ret 4 */ FN_RET(0x0041c416); r_esp += 8; return;
L_0041c4b6:; BB(0x0041c4b6);
    /* 0041c4b6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4b8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4ba: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c4bc: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c4be: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c4c4u); call_ind(t); }
    /* 0041c4c4: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c4c8: mov byte ptr [esp + 0x6c], 0x12 */ W8((u32)(r_esp+0x6cu), 0x12u);
    /* 0041c4cd: mov edx, 0xf */ r_edx = 0xfu;
    /* 0041c4d2: mov byte ptr [esp + 0x6d], 5 */ W8((u32)(r_esp+0x6du), 0x5u);
    /* 0041c4d7: mov word ptr [esp + 0x6e], ax */ W16((u32)(r_esp+0x6eu), (u16)r_eax);
    /* 0041c4dc: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c4e2: mov word ptr [esp + 0x70], dx */ W16((u32)(r_esp+0x70u), (u16)r_edx);
    /* 0041c4e7: mov word ptr [esp + 0x72], ax */ W16((u32)(r_esp+0x72u), (u16)r_eax);
    /* 0041c4ec: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 0041c4f0: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c4f7: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 0041c4fb: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c501: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c507: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0041c50b: mov dword ptr [esp + 0x7c], edi */ W32((u32)(r_esp+0x7cu), r_edi);
    /* 0041c50f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c514u); f_008003e0();
    /* 0041c514: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c51a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c51b: ret 4 */ FN_RET(0x0041c416); r_esp += 8; return;
L_0041c51e:; BB(0x0041c51e);
    /* 0041c51e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c520: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c522: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c524: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c526: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c52cu); call_ind(t); }
    /* 0041c52c: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c530: mov byte ptr [esp + 0x80], 0x12 */ W8((u32)(r_esp+0x80u), 0x12u);
    /* 0041c538: mov edx, 7 */ r_edx = 0x7u;
    /* 0041c53d: mov byte ptr [esp + 0x81], 5 */ W8((u32)(r_esp+0x81u), 0x5u);
    /* 0041c545: mov word ptr [esp + 0x82], ax */ W16((u32)(r_esp+0x82u), (u16)r_eax);
    /* 0041c54d: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c553: mov word ptr [esp + 0x84], dx */ W16((u32)(r_esp+0x84u), (u16)r_edx);
    /* 0041c55b: mov word ptr [esp + 0x86], ax */ W16((u32)(r_esp+0x86u), (u16)r_eax);
    /* 0041c563: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 0041c56a: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c571: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0041c578: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c57e: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c584: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0041c58b: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 0041c592: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c597u); f_008003e0();
    /* 0041c597: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c59d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c59e: ret 4 */ FN_RET(0x0041c416); r_esp += 8; return;
L_0041c63a:; BB(0x0041c63a);
    /* 0041c63a: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c641: ret 4 */ FN_RET(0x0041c416); r_esp += 8; return;
L_0041c6ac:; BB(0x0041c6ac);
    /* 0041c6ac: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6ae: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6b0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c6b2: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c6b4: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c6bau); call_ind(t); }
    /* 0041c6ba: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c6be: mov byte ptr [esp + 0x94], 0x12 */ W8((u32)(r_esp+0x94u), 0x12u);
    /* 0041c6c6: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0041c6cb: mov byte ptr [esp + 0x95], 5 */ W8((u32)(r_esp+0x95u), 0x5u);
    /* 0041c6d3: mov word ptr [esp + 0x96], ax */ W16((u32)(r_esp+0x96u), (u16)r_eax);
    /* 0041c6db: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c6e1: mov word ptr [esp + 0x98], dx */ W16((u32)(r_esp+0x98u), (u16)r_edx);
    /* 0041c6e9: mov word ptr [esp + 0x9a], ax */ W16((u32)(r_esp+0x9au), (u16)r_eax);
    /* 0041c6f1: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 0041c6f8: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c6ff: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0041c706: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c70c: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c712: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0041c719: mov dword ptr [esp + 0xa4], edi */ W32((u32)(r_esp+0xa4u), r_edi);
    /* 0041c720: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c725u); f_008003e0();
    /* 0041c725: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c72b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c72c: ret 4 */ FN_RET(0x0041c416); r_esp += 8; return;
}

void f_0041c5a1(void)
{
    FN_ENTER(0x0041c5a1);
    /* 0041c5a1: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c5a3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41c5a8u); f_007aa094();
    /* 0041c5a8: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c5aa: call 0x41ebc0 */ r_esp -= 4; W32(r_esp, 0x41c5afu); f_0041ebc0();
    /* 0041c5af: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c5b1: call 0x41c768 */ r_esp -= 4; W32(r_esp, 0x41c5b6u); f_0041c768();
    /* 0041c5b6: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c5bb: push dword ptr [edi + 0x87c] */ { u32 v = R32((u32)(r_edi+0x87cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c5c1: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c5c4: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x41c5c9u); f_007a8c74();
    /* 0041c5c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c5cc: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0041c5cf: mov ecx, eax */ r_ecx = r_eax;
    /* 0041c5d1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x41c5d6u); f_0082dcbc();
    /* 0041c5d6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0041c5da: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0041c5dd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x41c5e2u); f_0082ddd8();
    /* 0041c5e2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041c5e5: fld dword ptr [0x8fbdfc] */ FPUSH(R_F32((u32)(0x8fbdfcu)));
    /* 0041c5eb: mov eax, dword ptr [edi + 0x768] */ r_eax = R32((u32)(r_edi+0x768u));
    /* 0041c5f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c5f3: je 0x41c61b */ if (fZ) goto L_0041c61b;
L_0041c5f5:; BB(0x0041c5f5);
    /* 0041c5f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0041c5f7: mov eax, 0x40000000 */ r_eax = 0x40000000u;
    /* 0041c5fc: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c5ff: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0041c603: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0041c607: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041c609: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041c60c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0041c610: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c612: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041c616: call 0x41c79c */ r_esp -= 4; W32(r_esp, 0x41c61bu); f_0041c79c();
L_0041c61b:; BB(0x0041c61b);
    /* 0041c61b: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c61e: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0041c622: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0041c626: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041c628: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041c62b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0041c62f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0041c633: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c635: call 0x520aa8 */ r_esp -= 4; W32(r_esp, 0x41c63au); f_00520aa8();
    /* 0041c63a: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c641: ret 4 */ FN_RET(0x0041c5a1); r_esp += 8; return;
}

void f_0041c63a(void)
{
    FN_ENTER(0x0041c63a);
    /* 0041c63a: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c641: ret 4 */ FN_RET(0x0041c63a); r_esp += 8; return;
}

void f_0041c730(void) /* sub_41C730 */
{
    FN_ENTER(0x0041c730);
    /* 0041c730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041c731: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0041c733: mov eax, dword ptr [ebp + 0x6ec] */ r_eax = R32((u32)(r_ebp+0x6ecu));
    /* 0041c739: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041c73b: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c741: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c744: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41c749u); f_004c6c54();
    /* 0041c749: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c74b: jne 0x41c751 */ if (!fZ) goto L_0041c751;
L_0041c74d:; BB(0x0041c74d);
    /* 0041c74d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041c74f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c750: ret  */ FN_RET(0x0041c730); r_esp += 4; return;
L_0041c751:; BB(0x0041c751);
    /* 0041c751: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 0041c757: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041c75a: jl 0x41c763 */ if ((fS!=fO)) goto L_0041c763;
L_0041c75c:; BB(0x0041c75c);
    /* 0041c75c: mov eax, 1 */ r_eax = 0x1u;
    /* 0041c761: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c762: ret  */ FN_RET(0x0041c730); r_esp += 4; return;
L_0041c763:; BB(0x0041c763);
    /* 0041c763: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041c765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c766: ret  */ FN_RET(0x0041c730); r_esp += 4; return;
}

void f_0041c768(void) /* sub_41C768 */
{
    FN_ENTER(0x0041c768);
    /* 0041c768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041c769: mov edi, ecx */ r_edi = r_ecx;
    /* 0041c76b: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c76d: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c772: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x41c777u); f_007aaa30();
    /* 0041c777: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041c779: je 0x41c782 */ if (fZ) goto L_0041c782;
L_0041c77b:; BB(0x0041c77b);
    /* 0041c77b: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c77d: call 0x41c784 */ r_esp -= 4; W32(r_esp, 0x41c782u); f_0041c784();
L_0041c782:; BB(0x0041c782);
    /* 0041c782: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c783: ret  */ FN_RET(0x0041c768); r_esp += 4; return;
}

void f_0041c784(void) /* sub_41C784 */
{
    FN_ENTER(0x0041c784);
    /* 0041c784: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c786: mov eax, dword ptr [ecx + 0x780] */ r_eax = R32((u32)(r_ecx+0x780u));
    /* 0041c78c: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0041c78f: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c792: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c793: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x41c798u); f_0050b7a4();
    /* 0041c798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c79b: ret  */ FN_RET(0x0041c784); r_esp += 4; return;
}

void f_0041c79c(void) /* sub_41C79C */
{
    FN_ENTER(0x0041c79c);
    /* 0041c79c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041c79f: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0041c7a3: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0041c7a7: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0041c7ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041c7ad: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0041c7af: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 0041c7b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041c7b4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0041c7b6: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 0041c7b9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0041c7bb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0041c7bf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041c7c2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0041c7c6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041c7c9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0041c7d1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0041c7d4: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x41c7d9u); f_0082f9e0();
    /* 0041c7d9: fcomp dword ptr [0x8fbdf0] */ fx_compare(ST(0), R_F32((u32)(0x8fbdf0u))); FPOP();
    /* 0041c7df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041c7e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041c7e2: jbe 0x41c7ee */ if ((fC||fZ)) goto L_0041c7ee;
L_0041c7e4:; BB(0x0041c7e4);
    /* 0041c7e4: fld dword ptr [0x8fbdf4] */ FPUSH(R_F32((u32)(0x8fbdf4u)));
    /* 0041c7ea: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_0041c7ee:; BB(0x0041c7ee);
    /* 0041c7ee: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0041c7f2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c7f5: ret 0xc */ FN_RET(0x0041c79c); r_esp += 16; return;
}

void f_0041c7f8(void) /* sub_41C7F8 */
{
    FN_ENTER(0x0041c7f8);
    /* 0041c7f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7f9: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041c7ff: mov edi, ecx */ r_edi = r_ecx;
    /* 0041c801: mov eax, dword ptr [esp + 0xa8] */ r_eax = R32((u32)(r_esp+0xa8u));
    /* 0041c808: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041c80b: ja 0x41cc8c */ if ((!fC&&!fZ)) goto L_0041cc8c;
L_0041c811:; BB(0x0041c811);
    /* 0041c811: mov eax, dword ptr [eax*4 + 0x8fb3cc] */ r_eax = R32((u32)(r_eax*4+0x8fb3ccu));
    /* 0041c818: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041cc8c:; BB(0x0041cc8c);
    /* 0041cc8c: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cc92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cc93: ret 4 */ FN_RET(0x0041c7f8); r_esp += 8; return;
}

void f_0041c81a(void)
{
    FN_ENTER(0x0041c81a);
    /* 0041c81a: mov eax, dword ptr [edi + 0x770] */ r_eax = R32((u32)(r_edi+0x770u));
    /* 0041c820: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c825: jg 0x41c9b6 */ if ((!fZ&&fS==fO)) goto L_0041c9b6;
L_0041c82b:; BB(0x0041c82b);
    /* 0041c82b: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c831: mov eax, dword ptr [edi + 0x6ec] */ r_eax = R32((u32)(r_edi+0x6ecu));
    /* 0041c837: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c839: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c83c: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41c841u); f_004c6c54();
    /* 0041c841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c843: jne 0x41c9b6 */ if (!fZ) goto L_0041c9b6;
L_0041c849:; BB(0x0041c849);
    /* 0041c849: mov edx, dword ptr [edi + 0x6ec] */ r_edx = R32((u32)(r_edi+0x6ecu));
    /* 0041c84f: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0041c852: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0041c858: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041c85a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041c85b: jbe 0x41c8c5 */ if ((fC||fZ)) goto L_0041c8c5;
L_0041c85d:; BB(0x0041c85d);
    /* 0041c85d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c85f: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0041c861: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c863: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c865: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c86bu); call_ind(t); }
    /* 0041c86b: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c86f: mov byte ptr [esp + 0x28], 0x12 */ W8((u32)(r_esp+0x28u), 0x12u);
    /* 0041c874: mov edx, 0x1a */ r_edx = 0x1au;
    /* 0041c879: mov byte ptr [esp + 0x29], 5 */ W8((u32)(r_esp+0x29u), 0x5u);
    /* 0041c87e: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 0041c883: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c889: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 0041c88e: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 0041c893: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0041c897: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c89e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0041c8a2: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c8a8: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c8ae: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0041c8b2: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0041c8b6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c8bbu); f_008003e0();
    /* 0041c8bb: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c8c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c8c2: ret 4 */ FN_RET(0x0041c81a); r_esp += 8; return;
L_0041c8c5:; BB(0x0041c8c5);
    /* 0041c8c5: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c8cb: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041c8ce: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c8d0: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41c8d5u); f_004c6c54();
    /* 0041c8d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c8d7: je 0x41c941 */ if (fZ) goto L_0041c941;
L_0041c8d9:; BB(0x0041c8d9);
    /* 0041c8d9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8db: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8dd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c8df: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c8e1: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c8e7u); call_ind(t); }
    /* 0041c8e7: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c8eb: mov byte ptr [esp + 0x14], 0x12 */ W8((u32)(r_esp+0x14u), 0x12u);
    /* 0041c8f0: mov edx, 7 */ r_edx = 0x7u;
    /* 0041c8f5: mov byte ptr [esp + 0x15], 5 */ W8((u32)(r_esp+0x15u), 0x5u);
    /* 0041c8fa: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0041c8ff: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c905: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0041c90a: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 0041c90f: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0041c913: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c91a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0041c91e: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c924: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c92a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0041c92e: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0041c932: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c937u); f_008003e0();
    /* 0041c937: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c93d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c93e: ret 4 */ FN_RET(0x0041c81a); r_esp += 8; return;
L_0041c941:; BB(0x0041c941);
    /* 0041c941: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c943: call 0x41c730 */ r_esp -= 4; W32(r_esp, 0x41c948u); f_0041c730();
    /* 0041c948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c94a: je 0x41cc8c */ if (fZ) goto L_0041cc8c;
L_0041c950:; BB(0x0041c950);
    /* 0041c950: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c952: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c954: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c956: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c958: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c95eu); call_ind(t); }
    /* 0041c95e: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c962: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 0041c966: mov edx, 0xf */ r_edx = 0xfu;
    /* 0041c96b: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0041c970: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0041c975: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c97b: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0041c980: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0041c985: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0041c988: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c98f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041c993: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041c999: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041c99f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0041c9a3: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0041c9a7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41c9acu); f_008003e0();
    /* 0041c9ac: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041c9b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041c9b3: ret 4 */ FN_RET(0x0041c81a); r_esp += 8; return;
L_0041c9b6:; BB(0x0041c9b6);
    /* 0041c9b6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9b8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9ba: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041c9bc: mov ecx, edi */ r_ecx = r_edi;
    /* 0041c9be: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41c9c4u); call_ind(t); }
    /* 0041c9c4: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041c9c8: mov byte ptr [esp + 0x3c], 0x12 */ W8((u32)(r_esp+0x3cu), 0x12u);
    /* 0041c9cd: mov edx, 8 */ r_edx = 0x8u;
    /* 0041c9d2: mov byte ptr [esp + 0x3d], 5 */ W8((u32)(r_esp+0x3du), 0x5u);
    /* 0041c9d7: mov word ptr [esp + 0x3e], ax */ W16((u32)(r_esp+0x3eu), (u16)r_eax);
    /* 0041c9dc: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041c9e2: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
    /* 0041c9e7: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 0041c9ec: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0041c9f0: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041c9f7: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0041c9fb: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041ca01: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041ca07: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0041ca0b: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0041ca0f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41ca14u); f_008003e0();
    /* 0041ca14: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041ca1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041ca1b: ret 4 */ FN_RET(0x0041c81a); r_esp += 8; return;
L_0041cc8c:; BB(0x0041cc8c);
    /* 0041cc8c: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cc92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cc93: ret 4 */ FN_RET(0x0041c81a); r_esp += 8; return;
}

void f_0041ca1e(void)
{
    FN_ENTER(0x0041ca1e);
    /* 0041ca1e: mov ecx, edi */ r_ecx = r_edi;
    /* 0041ca20: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x41ca25u); f_00419ff0();
    /* 0041ca25: jmp 0x41cc8c */ goto L_0041cc8c;
L_0041cc8c:; BB(0x0041cc8c);
    /* 0041cc8c: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cc92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cc93: ret 4 */ FN_RET(0x0041ca1e); r_esp += 8; return;
}

void f_0041ca2a(void)
{
    FN_ENTER(0x0041ca2a);
    /* 0041ca2a: mov ecx, edi */ r_ecx = r_edi;
    /* 0041ca2c: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x41ca31u); f_0041a004();
    /* 0041ca31: jmp 0x41cc8c */ goto L_0041cc8c;
L_0041cc8c:; BB(0x0041cc8c);
    /* 0041cc8c: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cc92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cc93: ret 4 */ FN_RET(0x0041ca2a); r_esp += 8; return;
}

void f_0041ca36(void)
{
    FN_ENTER(0x0041ca36);
    /* 0041ca36: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0041ca38: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0041ca3d: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0041ca44: mov ecx, edi */ r_ecx = r_edi;
    /* 0041ca46: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x41ca4cu); call_ind(t); }
    /* 0041ca4c: mov dword ptr [edi + 0x3ec], 1 */ W32((u32)(r_edi+0x3ecu), 0x1u);
    /* 0041ca56: mov ecx, edi */ r_ecx = r_edi;
    /* 0041ca58: call 0x41b0bc */ r_esp -= 4; W32(r_esp, 0x41ca5du); f_0041b0bc();
    /* 0041ca5d: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0041ca63: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041ca68: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0041ca6e: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041ca74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041ca75: ret 4 */ FN_RET(0x0041ca36); r_esp += 8; return;
}

void f_0041ca78(void)
{
    FN_ENTER(0x0041ca78);
    /* 0041ca78: mov edx, dword ptr [edi + 0x6ec] */ r_edx = R32((u32)(r_edi+0x6ecu));
    /* 0041ca7e: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0041ca81: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0041ca87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041ca89: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041ca8a: ja 0x41cbf4 */ if ((!fC&&!fZ)) goto L_0041cbf4;
L_0041ca90:; BB(0x0041ca90);
    /* 0041ca90: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041ca93: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ca99: jne 0x41cb83 */ if (!fZ) goto L_0041cb83;
L_0041ca9f:; BB(0x0041ca9f);
    /* 0041ca9f: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041caa5: jne 0x41cb1b */ if (!fZ) goto L_0041cb1b;
L_0041caa7:; BB(0x0041caa7);
    /* 0041caa7: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041caad: je 0x41cc8c */ if (fZ) goto L_0041cc8c;
L_0041cab3:; BB(0x0041cab3);
    /* 0041cab3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cab5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cab7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041cab9: mov ecx, edi */ r_ecx = r_edi;
    /* 0041cabb: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41cac1u); call_ind(t); }
    /* 0041cac1: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041cac5: mov byte ptr [esp + 0x50], 0x12 */ W8((u32)(r_esp+0x50u), 0x12u);
    /* 0041caca: mov edx, 8 */ r_edx = 0x8u;
    /* 0041cacf: mov byte ptr [esp + 0x51], 5 */ W8((u32)(r_esp+0x51u), 0x5u);
    /* 0041cad4: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 0041cad9: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041cadf: mov word ptr [esp + 0x54], dx */ W16((u32)(r_esp+0x54u), (u16)r_edx);
    /* 0041cae4: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 0041cae9: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 0041caed: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041caf4: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0041caf8: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041cafe: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041cb04: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0041cb08: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 0041cb0c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41cb11u); f_008003e0();
    /* 0041cb11: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cb17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cb18: ret 4 */ FN_RET(0x0041ca78); r_esp += 8; return;
L_0041cb1b:; BB(0x0041cb1b);
    /* 0041cb1b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb1d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb1f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041cb21: mov ecx, edi */ r_ecx = r_edi;
    /* 0041cb23: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41cb29u); call_ind(t); }
    /* 0041cb29: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041cb2d: mov byte ptr [esp + 0x64], 0x12 */ W8((u32)(r_esp+0x64u), 0x12u);
    /* 0041cb32: mov edx, 0xf */ r_edx = 0xfu;
    /* 0041cb37: mov byte ptr [esp + 0x65], 5 */ W8((u32)(r_esp+0x65u), 0x5u);
    /* 0041cb3c: mov word ptr [esp + 0x66], ax */ W16((u32)(r_esp+0x66u), (u16)r_eax);
    /* 0041cb41: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041cb47: mov word ptr [esp + 0x68], dx */ W16((u32)(r_esp+0x68u), (u16)r_edx);
    /* 0041cb4c: mov word ptr [esp + 0x6a], ax */ W16((u32)(r_esp+0x6au), (u16)r_eax);
    /* 0041cb51: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 0041cb55: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041cb5c: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0041cb60: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041cb66: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041cb6c: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0041cb70: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0041cb74: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41cb79u); f_008003e0();
    /* 0041cb79: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cb7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cb80: ret 4 */ FN_RET(0x0041ca78); r_esp += 8; return;
L_0041cb83:; BB(0x0041cb83);
    /* 0041cb83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb85: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb87: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041cb89: mov ecx, edi */ r_ecx = r_edi;
    /* 0041cb8b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41cb91u); call_ind(t); }
    /* 0041cb91: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041cb95: mov byte ptr [esp + 0x78], 0x12 */ W8((u32)(r_esp+0x78u), 0x12u);
    /* 0041cb9a: mov edx, 7 */ r_edx = 0x7u;
    /* 0041cb9f: mov byte ptr [esp + 0x79], 5 */ W8((u32)(r_esp+0x79u), 0x5u);
    /* 0041cba4: mov word ptr [esp + 0x7a], ax */ W16((u32)(r_esp+0x7au), (u16)r_eax);
    /* 0041cba9: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041cbaf: mov word ptr [esp + 0x7c], dx */ W16((u32)(r_esp+0x7cu), (u16)r_edx);
    /* 0041cbb4: mov word ptr [esp + 0x7e], ax */ W16((u32)(r_esp+0x7eu), (u16)r_eax);
    /* 0041cbb9: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0041cbbd: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041cbc4: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0041cbcb: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041cbd1: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041cbd7: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 0041cbde: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 0041cbe5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41cbeau); f_008003e0();
    /* 0041cbea: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cbf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cbf1: ret 4 */ FN_RET(0x0041ca78); r_esp += 8; return;
L_0041cbf4:; BB(0x0041cbf4);
    /* 0041cbf4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cbf6: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0041cbf8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0041cbfa: mov ecx, edi */ r_ecx = r_edi;
    /* 0041cbfc: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41cc02u); call_ind(t); }
    /* 0041cc02: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0041cc06: mov byte ptr [esp + 0x8c], 0x12 */ W8((u32)(r_esp+0x8cu), 0x12u);
    /* 0041cc0e: mov edx, 0x1a */ r_edx = 0x1au;
    /* 0041cc13: mov byte ptr [esp + 0x8d], 5 */ W8((u32)(r_esp+0x8du), 0x5u);
    /* 0041cc1b: mov word ptr [esp + 0x8e], ax */ W16((u32)(r_esp+0x8eu), (u16)r_eax);
    /* 0041cc23: mov eax, dword ptr [edi + 0x684] */ r_eax = R32((u32)(r_edi+0x684u));
    /* 0041cc29: mov word ptr [esp + 0x90], dx */ W16((u32)(r_esp+0x90u), (u16)r_edx);
    /* 0041cc31: mov word ptr [esp + 0x92], ax */ W16((u32)(r_esp+0x92u), (u16)r_eax);
    /* 0041cc39: lea ecx, [esp + 0x8c] */ r_ecx = (u32)(r_esp+0x8cu);
    /* 0041cc40: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 0041cc47: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0041cc4e: mov eax, dword ptr [edi + 0x698] */ r_eax = R32((u32)(r_edi+0x698u));
    /* 0041cc54: mov edi, dword ptr [edi + 0x69c] */ r_edi = R32((u32)(r_edi+0x69cu));
    /* 0041cc5a: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0041cc61: mov dword ptr [esp + 0x9c], edi */ W32((u32)(r_esp+0x9cu), r_edi);
    /* 0041cc68: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41cc6du); f_008003e0();
    /* 0041cc6d: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cc73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cc74: ret 4 */ FN_RET(0x0041ca78); r_esp += 8; return;
L_0041cc8c:; BB(0x0041cc8c);
    /* 0041cc8c: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cc92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cc93: ret 4 */ FN_RET(0x0041ca78); r_esp += 8; return;
}

void f_0041cc77(void)
{
    FN_ENTER(0x0041cc77);
    /* 0041cc77: mov ecx, edi */ r_ecx = r_edi;
    /* 0041cc79: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x41cc7eu); f_007aa094();
    /* 0041cc7e: mov ecx, edi */ r_ecx = r_edi;
    /* 0041cc80: call 0x41ebc0 */ r_esp -= 4; W32(r_esp, 0x41cc85u); f_0041ebc0();
    /* 0041cc85: mov ecx, edi */ r_ecx = r_edi;
    /* 0041cc87: call 0x41c768 */ r_esp -= 4; W32(r_esp, 0x41cc8cu); f_0041c768();
    /* 0041cc8c: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cc92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cc93: ret 4 */ FN_RET(0x0041cc77); r_esp += 8; return;
}

void f_0041cc8c(void)
{
    FN_ENTER(0x0041cc8c);
    /* 0041cc8c: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cc92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041cc93: ret 4 */ FN_RET(0x0041cc8c); r_esp += 8; return;
}

void f_0041cc98(void) /* sub_41CC98 */
{
    FN_ENTER(0x0041cc98);
    /* 0041cc98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc99: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc9f: mov esi, ecx */ r_esi = r_ecx;
    /* 0041cca1: lea edx, [esi + 0x87c] */ r_edx = (u32)(r_esi+0x87cu);
    /* 0041cca7: mov eax, dword ptr [esp + 0xc8] */ r_eax = R32((u32)(r_esp+0xc8u));
    /* 0041ccae: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041ccb1: ja 0x41d298 */ if ((!fC&&!fZ)) goto L_0041d298;
L_0041ccb7:; BB(0x0041ccb7);
    /* 0041ccb7: mov eax, dword ptr [eax*4 + 0x8fb3fc] */ r_eax = R32((u32)(r_eax*4+0x8fb3fcu));
    /* 0041ccbe: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0041d298:; BB(0x0041d298);
    /* 0041d298: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d29e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d29f: ret 4 */ FN_RET(0x0041cc98); r_esp += 8; return;
}

void f_0041ccc0(void)
{
    FN_ENTER(0x0041ccc0);
    /* 0041ccc0: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 0041ccc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ccc9: je 0x41d2a2 */ if (fZ) goto L_0041d2a2;
L_0041cccf:; BB(0x0041cccf);
    /* 0041cccf: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ccd5: mov eax, dword ptr [esi + 0x6ec] */ r_eax = R32((u32)(r_esi+0x6ecu));
    /* 0041ccdb: mov ecx, esi */ r_ecx = r_esi;
    /* 0041ccdd: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041cce0: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41cce5u); f_004c6c54();
    /* 0041cce5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cce7: je 0x41cd51 */ if (fZ) goto L_0041cd51;
L_0041cce9:; BB(0x0041cce9);
    /* 0041cce9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cceb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cced: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041ccef: mov ecx, esi */ r_ecx = r_esi;
    /* 0041ccf1: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41ccf7u); call_ind(t); }
    /* 0041ccf7: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041ccfb: mov byte ptr [esp + 0x48], 0x12 */ W8((u32)(r_esp+0x48u), 0x12u);
    /* 0041cd00: mov edx, 3 */ r_edx = 0x3u;
    /* 0041cd05: mov byte ptr [esp + 0x49], 5 */ W8((u32)(r_esp+0x49u), 0x5u);
    /* 0041cd0a: mov word ptr [esp + 0x4a], ax */ W16((u32)(r_esp+0x4au), (u16)r_eax);
    /* 0041cd0f: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041cd15: mov word ptr [esp + 0x4c], dx */ W16((u32)(r_esp+0x4cu), (u16)r_edx);
    /* 0041cd1a: mov word ptr [esp + 0x4e], ax */ W16((u32)(r_esp+0x4eu), (u16)r_eax);
    /* 0041cd1f: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0041cd23: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041cd2a: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0041cd2e: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041cd34: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041cd3a: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0041cd3e: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 0041cd42: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41cd47u); f_008003e0();
    /* 0041cd47: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cd4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041cd4e: ret 4 */ FN_RET(0x0041ccc0); r_esp += 8; return;
L_0041cd51:; BB(0x0041cd51);
    /* 0041cd51: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041cd57: mov eax, dword ptr [esi + 0x6ec] */ r_eax = R32((u32)(r_esi+0x6ecu));
    /* 0041cd5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cd5f: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041cd62: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41cd67u); f_004c6c54();
    /* 0041cd67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cd69: je 0x41cdd3 */ if (fZ) goto L_0041cdd3;
L_0041cd6b:; BB(0x0041cd6b);
    /* 0041cd6b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd6d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd6f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041cd71: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cd73: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41cd79u); call_ind(t); }
    /* 0041cd79: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041cd7d: mov byte ptr [esp + 0x34], 0x12 */ W8((u32)(r_esp+0x34u), 0x12u);
    /* 0041cd82: mov edx, 4 */ r_edx = 0x4u;
    /* 0041cd87: mov byte ptr [esp + 0x35], 5 */ W8((u32)(r_esp+0x35u), 0x5u);
    /* 0041cd8c: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 0041cd91: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041cd97: mov word ptr [esp + 0x38], dx */ W16((u32)(r_esp+0x38u), (u16)r_edx);
    /* 0041cd9c: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 0041cda1: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 0041cda5: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041cdac: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0041cdb0: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041cdb6: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041cdbc: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0041cdc0: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0041cdc4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41cdc9u); f_008003e0();
    /* 0041cdc9: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cdcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041cdd0: ret 4 */ FN_RET(0x0041ccc0); r_esp += 8; return;
L_0041cdd3:; BB(0x0041cdd3);
    /* 0041cdd3: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cdd5: call 0x41d39c */ r_esp -= 4; W32(r_esp, 0x41cddau); f_0041d39c();
    /* 0041cdda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cddc: je 0x41ce45 */ if (fZ) goto L_0041ce45;
L_0041cdde:; BB(0x0041cdde);
    /* 0041cdde: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cde0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cde2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041cde4: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cde6: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41cdecu); call_ind(t); }
    /* 0041cdec: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041cdf0: mov byte ptr [esp + 0x20], 0x12 */ W8((u32)(r_esp+0x20u), 0x12u);
    /* 0041cdf5: mov edx, 5 */ r_edx = 0x5u;
    /* 0041cdfa: mov byte ptr [esp + 0x21], dl */ W8((u32)(r_esp+0x21u), (u8)r_edx);
    /* 0041cdfe: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 0041ce03: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041ce09: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 0041ce0e: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 0041ce13: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0041ce17: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041ce1e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0041ce22: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041ce28: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041ce2e: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0041ce32: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0041ce36: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41ce3bu); f_008003e0();
    /* 0041ce3b: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041ce41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041ce42: ret 4 */ FN_RET(0x0041ccc0); r_esp += 8; return;
L_0041ce45:; BB(0x0041ce45);
    /* 0041ce45: movzx eax, word ptr [0xa43774] */ r_eax = (u32)R16((u32)(0xa43774u));
    /* 0041ce4c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce4f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x41ce54u); f_007be19c();
    /* 0041ce54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ce57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ce59: je 0x41ce62 */ if (fZ) goto L_0041ce62;
L_0041ce5b:; BB(0x0041ce5b);
    /* 0041ce5b: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 0041ce60: jmp 0x41ce67 */ goto L_0041ce67;
L_0041ce62:; BB(0x0041ce62);
    /* 0041ce62: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
L_0041ce67:; BB(0x0041ce67);
    /* 0041ce67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce68: mov edx, dword ptr [esi + 0x6ec] */ r_edx = R32((u32)(r_esi+0x6ecu));
    /* 0041ce6e: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041ce71: mov ecx, esi */ r_ecx = r_esi;
    /* 0041ce73: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x41ce78u); f_004c6c54();
    /* 0041ce78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ce7a: je 0x41d298 */ if (fZ) goto L_0041d298;
L_0041ce80:; BB(0x0041ce80);
    /* 0041ce80: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce82: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce84: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041ce86: mov ecx, esi */ r_ecx = r_esi;
    /* 0041ce88: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41ce8eu); call_ind(t); }
    /* 0041ce8e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041ce92: mov byte ptr [esp + 0xc], 0x12 */ W8((u32)(r_esp+0xcu), 0x12u);
    /* 0041ce97: mov edx, 9 */ r_edx = 0x9u;
    /* 0041ce9c: mov byte ptr [esp + 0xd], 5 */ W8((u32)(r_esp+0xdu), 0x5u);
    /* 0041cea1: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0041cea6: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041ceac: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0041ceb1: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0041ceb6: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0041ceba: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041cec1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0041cec5: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041cecb: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041ced1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0041ced5: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0041ced9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41cedeu); f_008003e0();
    /* 0041cede: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cee4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041cee5: ret 4 */ FN_RET(0x0041ccc0); r_esp += 8; return;
L_0041d298:; BB(0x0041d298);
    /* 0041d298: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d29e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d29f: ret 4 */ FN_RET(0x0041ccc0); r_esp += 8; return;
L_0041d2a2:; BB(0x0041d2a2);
    /* 0041d2a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2a4: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2a6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041d2a8: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d2aa: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d2b0u); call_ind(t); }
    /* 0041d2b0: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041d2b4: mov byte ptr [esp + 0x5c], 0x12 */ W8((u32)(r_esp+0x5cu), 0x12u);
    /* 0041d2b9: mov edx, 0x17 */ r_edx = 0x17u;
    /* 0041d2be: mov byte ptr [esp + 0x5d], 5 */ W8((u32)(r_esp+0x5du), 0x5u);
    /* 0041d2c3: mov word ptr [esp + 0x5e], ax */ W16((u32)(r_esp+0x5eu), (u16)r_eax);
    /* 0041d2c8: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041d2ce: mov word ptr [esp + 0x60], dx */ W16((u32)(r_esp+0x60u), (u16)r_edx);
    /* 0041d2d3: mov word ptr [esp + 0x62], ax */ W16((u32)(r_esp+0x62u), (u16)r_eax);
    /* 0041d2d8: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 0041d2dc: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041d2e3: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 0041d2e7: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041d2ed: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041d2f3: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0041d2f7: mov dword ptr [esp + 0x6c], esi */ W32((u32)(r_esp+0x6cu), r_esi);
    /* 0041d2fb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d300u); f_008003e0();
    /* 0041d300: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d306: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d307: ret 4 */ FN_RET(0x0041ccc0); r_esp += 8; return;
}

void f_0041cee8(void)
{
    FN_ENTER(0x0041cee8);
    /* 0041cee8: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 0041ceee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041cef1: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cef4: jge 0x41cf06 */ if ((fS==fO)) goto L_0041cf06;
L_0041cef6:; BB(0x0041cef6);
    /* 0041cef6: mov dword ptr [esi + 0x86c], eax */ W32((u32)(r_esi+0x86cu), r_eax);
    /* 0041cefc: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cf02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041cf03: ret 4 */ FN_RET(0x0041cee8); r_esp += 8; return;
L_0041cf06:; BB(0x0041cf06);
    /* 0041cf06: mov edx, dword ptr [esi + 0x6ec] */ r_edx = R32((u32)(r_esi+0x6ecu));
    /* 0041cf0c: mov dword ptr [esi + 0x86c], 0 */ W32((u32)(r_esi+0x86cu), 0x0u);
    /* 0041cf16: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0041cf19: fcomp dword ptr [0x8fbe10] */ fx_compare(ST(0), R_F32((u32)(0x8fbe10u))); FPOP();
    /* 0041cf1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041cf21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0041cf22: ja 0x41cf38 */ if ((!fC&&!fZ)) goto L_0041cf38;
L_0041cf24:; BB(0x0041cf24);
    /* 0041cf24: mov dword ptr [esi + 0x870], 1 */ W32((u32)(r_esi+0x870u), 0x1u);
    /* 0041cf2e: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cf34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041cf35: ret 4 */ FN_RET(0x0041cee8); r_esp += 8; return;
L_0041cf38:; BB(0x0041cf38);
    /* 0041cf38: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0041cf3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf3c: mov dword ptr [esi + 0x87c], eax */ W32((u32)(r_esi+0x87cu), r_eax);
    /* 0041cf42: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cf44: call 0x41bfa8 */ r_esp -= 4; W32(r_esp, 0x41cf49u); f_0041bfa8();
    /* 0041cf49: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cf4b: call 0x41bf24 */ r_esp -= 4; W32(r_esp, 0x41cf50u); f_0041bf24();
    /* 0041cf50: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cf56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041cf57: ret 4 */ FN_RET(0x0041cee8); r_esp += 8; return;
}

void f_0041cf5a(void)
{
    FN_ENTER(0x0041cf5a);
    /* 0041cf5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf5b: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cf5d: call 0x41bf7c */ r_esp -= 4; W32(r_esp, 0x41cf62u); f_0041bf7c();
    /* 0041cf62: jmp 0x41d298 */ goto L_0041d298;
L_0041d298:; BB(0x0041d298);
    /* 0041d298: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d29e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d29f: ret 4 */ FN_RET(0x0041cf5a); r_esp += 8; return;
}

void f_0041cf67(void)
{
    FN_ENTER(0x0041cf67);
    /* 0041cf67: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041cf6a: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cf6c: call 0x41bfa8 */ r_esp -= 4; W32(r_esp, 0x41cf71u); f_0041bfa8();
    /* 0041cf71: jmp 0x41d298 */ goto L_0041d298;
L_0041d298:; BB(0x0041d298);
    /* 0041d298: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d29e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d29f: ret 4 */ FN_RET(0x0041cf67); r_esp += 8; return;
}

void f_0041cf76(void)
{
    FN_ENTER(0x0041cf76);
    /* 0041cf76: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0041cf78: mov eax, 1 */ r_eax = 0x1u;
    /* 0041cf7d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0041cf84: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cf86: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x41cf8cu); call_ind(t); }
    /* 0041cf8c: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 0041cf96: mov ecx, esi */ r_ecx = r_esi;
    /* 0041cf98: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x41cf9du); f_00419130();
    /* 0041cf9d: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0041cfa3: and eax, 0xfffff17f */ {  u32 a = r_eax; u32 b = 0xfffff17fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041cfa8: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0041cfae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041cfb0: mov dword ptr [esi + 0x86c], edx */ W32((u32)(r_esi+0x86cu), r_edx);
    /* 0041cfb6: mov dword ptr [esi + 0x870], edx */ W32((u32)(r_esi+0x870u), r_edx);
    /* 0041cfbc: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041cfc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041cfc3: ret 4 */ FN_RET(0x0041cf76); r_esp += 8; return;
}

void f_0041cfc6(void)
{
    FN_ENTER(0x0041cfc6);
    /* 0041cfc6: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 0041cfcc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cfcf: je 0x41d30a */ if (fZ) goto L_0041d30a;
L_0041cfd5:; BB(0x0041cfd5);
    /* 0041cfd5: mov eax, dword ptr [esi + 0x6ec] */ r_eax = R32((u32)(r_esi+0x6ecu));
    /* 0041cfdb: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0041cfde: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cfe4: jne 0x41d0eb */ if (!fZ) goto L_0041d0eb;
L_0041cfea:; BB(0x0041cfea);
    /* 0041cfea: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cff0: jne 0x41d068 */ if (!fZ) goto L_0041d068;
L_0041cff2:; BB(0x0041cff2);
    /* 0041cff2: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cff8: je 0x41d298 */ if (fZ) goto L_0041d298;
L_0041cffe:; BB(0x0041cffe);
    /* 0041cffe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d000: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d002: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041d004: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d006: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d00cu); call_ind(t); }
    /* 0041d00c: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041d010: mov byte ptr [esp + 0x70], 0x12 */ W8((u32)(r_esp+0x70u), 0x12u);
    /* 0041d015: mov edx, 5 */ r_edx = 0x5u;
    /* 0041d01a: mov byte ptr [esp + 0x71], dl */ W8((u32)(r_esp+0x71u), (u8)r_edx);
    /* 0041d01e: mov word ptr [esp + 0x72], ax */ W16((u32)(r_esp+0x72u), (u16)r_eax);
    /* 0041d023: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041d029: mov word ptr [esp + 0x74], dx */ W16((u32)(r_esp+0x74u), (u16)r_edx);
    /* 0041d02e: mov word ptr [esp + 0x76], ax */ W16((u32)(r_esp+0x76u), (u16)r_eax);
    /* 0041d033: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 0041d037: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041d03e: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 0041d042: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041d048: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041d04e: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 0041d052: mov dword ptr [esp + 0x80], esi */ W32((u32)(r_esp+0x80u), r_esi);
    /* 0041d059: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d05eu); f_008003e0();
    /* 0041d05e: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d064: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d065: ret 4 */ FN_RET(0x0041cfc6); r_esp += 8; return;
L_0041d068:; BB(0x0041d068);
    /* 0041d068: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d06a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d06c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041d06e: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d070: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d076u); call_ind(t); }
    /* 0041d076: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041d07a: mov byte ptr [esp + 0x84], 0x12 */ W8((u32)(r_esp+0x84u), 0x12u);
    /* 0041d082: mov edx, 4 */ r_edx = 0x4u;
    /* 0041d087: mov byte ptr [esp + 0x85], 5 */ W8((u32)(r_esp+0x85u), 0x5u);
    /* 0041d08f: mov word ptr [esp + 0x86], ax */ W16((u32)(r_esp+0x86u), (u16)r_eax);
    /* 0041d097: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041d09d: mov word ptr [esp + 0x88], dx */ W16((u32)(r_esp+0x88u), (u16)r_edx);
    /* 0041d0a5: mov word ptr [esp + 0x8a], ax */ W16((u32)(r_esp+0x8au), (u16)r_eax);
    /* 0041d0ad: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 0041d0b4: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041d0bb: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 0041d0c2: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041d0c8: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041d0ce: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0041d0d5: mov dword ptr [esp + 0x94], esi */ W32((u32)(r_esp+0x94u), r_esi);
    /* 0041d0dc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d0e1u); f_008003e0();
    /* 0041d0e1: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d0e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d0e8: ret 4 */ FN_RET(0x0041cfc6); r_esp += 8; return;
L_0041d0eb:; BB(0x0041d0eb);
    /* 0041d0eb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0ef: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041d0f1: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d0f3: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d0f9u); call_ind(t); }
    /* 0041d0f9: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041d0fd: mov byte ptr [esp + 0x98], 0x12 */ W8((u32)(r_esp+0x98u), 0x12u);
    /* 0041d105: mov edx, 3 */ r_edx = 0x3u;
    /* 0041d10a: mov byte ptr [esp + 0x99], 5 */ W8((u32)(r_esp+0x99u), 0x5u);
    /* 0041d112: mov word ptr [esp + 0x9a], ax */ W16((u32)(r_esp+0x9au), (u16)r_eax);
    /* 0041d11a: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041d120: mov word ptr [esp + 0x9c], dx */ W16((u32)(r_esp+0x9cu), (u16)r_edx);
    /* 0041d128: mov word ptr [esp + 0x9e], ax */ W16((u32)(r_esp+0x9eu), (u16)r_eax);
    /* 0041d130: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 0041d137: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041d13e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 0041d145: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041d14b: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041d151: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 0041d158: mov dword ptr [esp + 0xa8], esi */ W32((u32)(r_esp+0xa8u), r_esi);
    /* 0041d15f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d164u); f_008003e0();
    /* 0041d164: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d16a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d16b: ret 4 */ FN_RET(0x0041cfc6); r_esp += 8; return;
L_0041d298:; BB(0x0041d298);
    /* 0041d298: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d29e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d29f: ret 4 */ FN_RET(0x0041cfc6); r_esp += 8; return;
L_0041d30a:; BB(0x0041d30a);
    /* 0041d30a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d30c: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d30e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0041d310: mov ecx, esi */ r_ecx = r_esi;
    /* 0041d312: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x41d318u); call_ind(t); }
    /* 0041d318: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0041d31c: mov byte ptr [esp + 0xac], 0x12 */ W8((u32)(r_esp+0xacu), 0x12u);
    /* 0041d324: mov edx, 0x17 */ r_edx = 0x17u;
    /* 0041d329: mov byte ptr [esp + 0xad], 5 */ W8((u32)(r_esp+0xadu), 0x5u);
    /* 0041d331: mov word ptr [esp + 0xae], ax */ W16((u32)(r_esp+0xaeu), (u16)r_eax);
    /* 0041d339: mov eax, dword ptr [esi + 0x684] */ r_eax = R32((u32)(r_esi+0x684u));
    /* 0041d33f: mov word ptr [esp + 0xb0], dx */ W16((u32)(r_esp+0xb0u), (u16)r_edx);
    /* 0041d347: mov word ptr [esp + 0xb2], ax */ W16((u32)(r_esp+0xb2u), (u16)r_eax);
    /* 0041d34f: lea ecx, [esp + 0xac] */ r_ecx = (u32)(r_esp+0xacu);
    /* 0041d356: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 0041d35d: mov dword ptr [esp + 0xb4], eax */ W32((u32)(r_esp+0xb4u), r_eax);
    /* 0041d364: mov eax, dword ptr [esi + 0x698] */ r_eax = R32((u32)(r_esi+0x698u));
    /* 0041d36a: mov esi, dword ptr [esi + 0x69c] */ r_esi = R32((u32)(r_esi+0x69cu));
    /* 0041d370: mov dword ptr [esp + 0xb8], eax */ W32((u32)(r_esp+0xb8u), r_eax);
    /* 0041d377: mov dword ptr [esp + 0xbc], esi */ W32((u32)(r_esp+0xbcu), r_esi);
    /* 0041d37e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x41d383u); f_008003e0();
    /* 0041d383: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041d389: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d38a: ret 4 */ FN_RET(0x0041cfc6); r_esp += 8; return;
}

