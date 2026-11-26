#include "protos.h"

void f_0064f024(void) /* sub_64F024 */
{
    FN_ENTER(0x0064f024);
    /* 0064f024: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064f025: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f028: mov edi, ecx */ r_edi = r_ecx;
    /* 0064f02a: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0064f02e: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064f033: jl 0x64f103 */ if ((fS!=fO)) goto L_0064f103;
L_0064f039:; BB(0x0064f039);
    /* 0064f039: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0064f03f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f041: je 0x64f103 */ if (fZ) goto L_0064f103;
L_0064f047:; BB(0x0064f047);
    /* 0064f047: je 0x64f110 */ if (fZ) goto L_0064f110;
L_0064f04d:; BB(0x0064f04d);
    /* 0064f04d: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0064f051: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064f053: jl 0x64f084 */ if ((fS!=fO)) goto L_0064f084;
L_0064f055:; BB(0x0064f055);
    /* 0064f055: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064f05b: jg 0x64f084 */ if ((!fZ&&fS==fO)) goto L_0064f084;
L_0064f05d:; BB(0x0064f05d);
    /* 0064f05d: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0064f063: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0064f067: movzx eax, word ptr [ecx + edx*4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*4));
    /* 0064f06b: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0064f06f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0064f073: movzx edx, word ptr [ecx + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_ecx+r_edx*4+0x2u));
    /* 0064f078: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0064f07d: mov edx, 1 */ r_edx = 0x1u;
    /* 0064f082: jmp 0x64f086 */ goto L_0064f086;
L_0064f084:; BB(0x0064f084);
    /* 0064f084: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0064f086:; BB(0x0064f086);
    /* 0064f086: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f088: je 0x64f103 */ if (fZ) goto L_0064f103;
L_0064f08a:; BB(0x0064f08a);
    /* 0064f08a: mov edx, 1 */ r_edx = 0x1u;
    /* 0064f08f: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0064f093: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f095: je 0x64f0be */ if (fZ) goto L_0064f0be;
L_0064f097:; BB(0x0064f097);
    /* 0064f097: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0064f09b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064f09d: jl 0x64f0be */ if ((fS!=fO)) goto L_0064f0be;
L_0064f09f:; BB(0x0064f09f);
    /* 0064f09f: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064f0a5: jg 0x64f0be */ if ((!fZ&&fS==fO)) goto L_0064f0be;
L_0064f0a7:; BB(0x0064f0a7);
    /* 0064f0a7: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 0064f0ac: movzx ecx, word ptr [esp] */ r_ecx = (u32)R16((u32)(r_esp));
    /* 0064f0b0: mov word ptr [eax + edx*4], cx */ W16((u32)(r_eax+r_edx*4), (u16)r_ecx);
    /* 0064f0b4: movzx ecx, word ptr [esp + 2] */ r_ecx = (u32)R16((u32)(r_esp+0x2u));
    /* 0064f0b9: mov word ptr [eax + edx*4 + 2], cx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ecx);
L_0064f0be:; BB(0x0064f0be);
    /* 0064f0be: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0064f0c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f0c2: mov ecx, edi */ r_ecx = r_edi;
    /* 0064f0c4: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x64f0c9u); f_007b5038();
    /* 0064f0c9: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 0064f0cf: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 0064f0d5: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0064f0d9: mov edi, dword ptr [edi + 0x84] */ r_edi = R32((u32)(r_edi+0x84u));
    /* 0064f0df: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0064f0e4: mov byte ptr [esp + 4], 0x67 */ W8((u32)(r_esp+0x4u), 0x67u);
    /* 0064f0e9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0064f0ed: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 0064f0f2: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0064f0f6: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0064f0fa: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0064f0fe: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x64f103u); f_008003e0();
L_0064f103:; BB(0x0064f103);
    /* 0064f103: fld dword ptr [0x9367d8] */ FPUSH(R_F32((u32)(0x9367d8u)));
    /* 0064f109: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064f10c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064f10d: ret 8 */ FN_RET(0x0064f024); r_esp += 12; return;
L_0064f110:; BB(0x0064f110);
    /* 0064f110: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064f112: jmp 0x64f086 */ goto L_0064f086;
}

void f_0064f118(void) /* sub_64F118 */
{
    FN_ENTER(0x0064f118);
    /* 0064f118: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f119: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064f11b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0064f11f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0064f123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f125: je 0x64f131 */ if (fZ) goto L_0064f131;
L_0064f127:; BB(0x0064f127);
    /* 0064f127: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0064f12a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064f12d: jne 0x64f139 */ if (!fZ) goto L_0064f139;
L_0064f12f:; BB(0x0064f12f);
    /* 0064f12f: jmp 0x64f13d */ goto L_0064f13d;
L_0064f131:; BB(0x0064f131);
    /* 0064f131: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0064f134: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064f137: je 0x64f16b */ if (fZ) goto L_0064f16b;
L_0064f139:; BB(0x0064f139);
    /* 0064f139: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064f13a: ret 8 */ FN_RET(0x0064f118); r_esp += 12; return;
L_0064f13d:; BB(0x0064f13d);
    /* 0064f13d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0064f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064f141: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x64f147u); call_ind(t); }
    /* 0064f147: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f148: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x64f14du); f_008113bc();
    /* 0064f14d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f14e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0064f152: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f157: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0064f15b: mov edx, 1 */ r_edx = 0x1u;
    /* 0064f160: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
    /* 0064f167: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064f168: ret 8 */ FN_RET(0x0064f118); r_esp += 12; return;
L_0064f16b:; BB(0x0064f16b);
    /* 0064f16b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f16c: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x64f171u); f_008113bc();
    /* 0064f171: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f172: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0064f176: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f17b: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0064f17f: mov edx, 1 */ r_edx = 0x1u;
    /* 0064f184: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
    /* 0064f18b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064f18c: ret 8 */ FN_RET(0x0064f118); r_esp += 12; return;
}

void f_0064f190(void) /* sub_64F190 */
{
    FN_ENTER(0x0064f190);
    /* 0064f190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f191: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f195: push 0x8e6692 */ { u32 v = 0x8e6692u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f19a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f1a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f1a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064f1a8: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f1ae: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064f1b1: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064f1b4: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064f1b7: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064f1ba: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0064f1c1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064f1c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064f1c7: je 0x64f40f */ if (fZ) goto L_0064f40f;
L_0064f1cd:; BB(0x0064f1cd);
    /* 0064f1cd: mov eax, dword ptr [0xa8f5e4] */ r_eax = R32((u32)(0xa8f5e4u));
    /* 0064f1d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064f1d4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064f1d7: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064f1da: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064f1dd: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064f1e0: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0064f1e6: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064f1e9: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0064f1ef: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 0064f1f5: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 0064f1fb: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 0064f201: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0064f207: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064f20a: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0064f210: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064f213: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0064f219: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064f21c: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0064f222: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064f225: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0064f22b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064f22e: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0064f234: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064f237: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0064f23d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064f240: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0064f246: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064f249: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0064f24f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064f252: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0064f258: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064f25b: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0064f261: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064f264: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0064f26a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064f26d: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064f270: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0064f273: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0064f276: mov eax, dword ptr [0xa8f5e0] */ r_eax = R32((u32)(0xa8f5e0u));
    /* 0064f27b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064f27d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064f280: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064f283: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064f286: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064f289: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0064f28c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064f28f: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0064f292: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0064f295: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0064f298: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064f29b: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0064f29e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064f2a1: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0064f2a4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064f2a7: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0064f2aa: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064f2ad: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0064f2b0: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064f2b3: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0064f2b6: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064f2b9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0064f2bc: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064f2bf: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0064f2c2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064f2c5: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0064f2c8: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064f2cb: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0064f2ce: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064f2d1: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0064f2d4: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064f2d7: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064f2da: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064f2dd: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0064f2e0: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064f2e3: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064f2e6: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0064f2e9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064f2ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f2ef: mov ecx, dword ptr [0xa8f5dc] */ r_ecx = R32((u32)(0xa8f5dcu));
    /* 0064f2f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f2f7: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0064f2fa: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0064f300: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0064f303: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 0064f309: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0064f30c: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 0064f312: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0064f318: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f31du); f_005b8610();
    /* 0064f31d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f320: mov ecx, dword ptr [0xa8f5dc] */ r_ecx = R32((u32)(0xa8f5dcu));
    /* 0064f326: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0064f329: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0064f32c: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0064f32f: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0064f335: mov eax, dword ptr [0xa8f5d8] */ r_eax = R32((u32)(0xa8f5d8u));
    /* 0064f33a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0064f33d: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0064f340: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064f343: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0064f346: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0064f349: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f34b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f350u); f_005b8610();
    /* 0064f350: mov edx, ebx */ r_edx = r_ebx;
    /* 0064f352: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0064f355: mov eax, dword ptr [0xa8f5d8] */ r_eax = R32((u32)(0xa8f5d8u));
    /* 0064f35a: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0064f35d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0064f360: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f362: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f364: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f365: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64f36au); f_0050b7a4();
    /* 0064f36a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f36c: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f36e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f36f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64f374u); f_0050b7a4();
    /* 0064f374: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064f37b: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f380: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64f385u); f_005caba4();
    /* 0064f385: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f388: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f38b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f38d: je 0x64f3b9 */ if (fZ) goto L_0064f3b9;
L_0064f38f:; BB(0x0064f38f);
    /* 0064f38f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0064f396: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f39d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f3a0: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 0064f3a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f3a7: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064f3ad: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64f3b2u); f_006441f4();
    /* 0064f3b2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064f3b9:; BB(0x0064f3b9);
    /* 0064f3b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f3c0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064f3c7: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f3cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64f3d1u); f_005caba4();
    /* 0064f3d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f3d2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f3d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f3d7: je 0x64f400 */ if (fZ) goto L_0064f400;
L_0064f3d9:; BB(0x0064f3d9);
    /* 0064f3d9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064f3e0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064f3e7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f3ea: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0064f3ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f3ee: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064f3f4: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64f3f9u); f_006441f4();
    /* 0064f3f9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064f400:; BB(0x0064f400);
    /* 0064f400: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f407: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f40a: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x64f40fu); f_0064de10();
L_0064f40f:; BB(0x0064f40f);
    /* 0064f40f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064f412: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064f415: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f418: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f41b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f422: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f425: ret  */ FN_RET(0x0064f190); r_esp += 4; return;
}

void f_0064f428(void) /* sub_64F428 */
{
    FN_ENTER(0x0064f428);
    /* 0064f428: mov dword ptr [0xa8f5b4], 0x3f800000 */ W32((u32)(0xa8f5b4u), 0x3f800000u);
    /* 0064f432: mov dword ptr [0xa8f5b8], 0x41000000 */ W32((u32)(0xa8f5b8u), 0x41000000u);
    /* 0064f43c: mov dword ptr [0xa8f5bc], 0x3fc00000 */ W32((u32)(0xa8f5bcu), 0x3fc00000u);
    /* 0064f446: ret  */ FN_RET(0x0064f428); r_esp += 4; return;
}

void f_0064f448(void) /* sub_64F448 */
{
    FN_ENTER(0x0064f448);
    /* 0064f448: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f449: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f44b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f44d: push 0x8e66ee */ { u32 v = 0x8e66eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f452: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f459: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064f460: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f463: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064f466: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064f469: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064f46c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064f46f: mov dword ptr [0xa8f5dc], 0 */ W32((u32)(0xa8f5dcu), 0x0u);
    /* 0064f479: mov dword ptr [0xa8f5d4], 1 */ W32((u32)(0xa8f5d4u), 0x1u);
    /* 0064f483: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x64f488u); f_00807ac0();
    /* 0064f488: lea edx, [eax - 0x1c] */ r_edx = (u32)(r_eax+0xffffffe4u);
    /* 0064f48b: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064f48e: ja 0x64f5d4 */ if ((!fC&&!fZ)) goto L_0064f5d4;
L_0064f494:; BB(0x0064f494);
    /* 0064f494: mov eax, dword ptr [eax*4 + 0x9366b0] */ r_eax = R32((u32)(r_eax*4+0x9366b0u));
    /* 0064f49b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0064f5d4:; BB(0x0064f5d4);
    /* 0064f5d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064f5db: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f5e0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f5e5u); f_008581c5();
    /* 0064f5e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f5e6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f5eb: je 0x64f66f */ if (fZ) goto L_0064f66f;
L_0064f5f1:; BB(0x0064f5f1);
    /* 0064f5f1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064f5f8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064f5ff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f602: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f607: push 0x9c7704 */ { u32 v = 0x9c7704u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f60c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f60e: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f613u); f_005b7a84();
    /* 0064f613: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f616: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064f61d:; BB(0x0064f61d);
    /* 0064f61d: mov dword ptr [0xa8f5dc], eax */ W32((u32)(0xa8f5dcu), r_eax);
    /* 0064f622: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f629: push 0x936b30 */ { u32 v = 0x936b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f62e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f633u); f_008009dc();
    /* 0064f633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f634: mov dword ptr [0xa8f5e4], 0x9c75a0 */ W32((u32)(0xa8f5e4u), 0x9c75a0u);
    /* 0064f63e: mov dword ptr [0xa8f5d8], eax */ W32((u32)(0xa8f5d8u), r_eax);
    /* 0064f643: mov dword ptr [0xa8f5e0], 0x9c75ec */ W32((u32)(0xa8f5e0u), 0x9c75ecu);
    /* 0064f64d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f650: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f653: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f656: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f65d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f65f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f660: ret  */ FN_RET(0x0064f448); r_esp += 4; return;
L_0064f66f:; BB(0x0064f66f);
    /* 0064f66f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f671: jmp 0x64f61d */ goto L_0064f61d;
}

void f_0064f49d(void)
{
    FN_ENTER(0x0064f49d);
    /* 0064f49d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0064f4a4: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f4a9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f4aeu); f_008581c5();
    /* 0064f4ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f4af: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f4b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f4b4: je 0x64f661 */ if (fZ) goto L_0064f661;
L_0064f4ba:; BB(0x0064f4ba);
    /* 0064f4ba: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0064f4c1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0064f4c8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f4cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f4cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f4ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f4cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f4d0: push 0x9c7784 */ { u32 v = 0x9c7784u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f4d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f4d7: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f4dcu); f_005b7a84();
    /* 0064f4dc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f4df: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0064f4e6:; BB(0x0064f4e6);
    /* 0064f4e6: mov dword ptr [0xa8f5dc], ecx */ W32((u32)(0xa8f5dcu), r_ecx);
    /* 0064f4ec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f4f3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f4f5: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64f4fau); f_005b8624();
    /* 0064f4fa: mov ecx, dword ptr [0xa8f5dc] */ r_ecx = R32((u32)(0xa8f5dcu));
    /* 0064f500: mov dword ptr [0xa8f5e4], 0x9c7638 */ W32((u32)(0xa8f5e4u), 0x9c7638u);
    /* 0064f50a: mov dword ptr [0xa8f5d8], eax */ W32((u32)(0xa8f5d8u), r_eax);
    /* 0064f50f: mov dword ptr [0xa8f5e0], 0x9c7684 */ W32((u32)(0xa8f5e0u), 0x9c7684u);
    /* 0064f519: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f51b: mov dword ptr [0xa8f5d4], 0 */ W32((u32)(0xa8f5d4u), 0x0u);
    /* 0064f525: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f52au); f_005b8610();
    /* 0064f52a: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0064f52d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064f530: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0064f533: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0064f536: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f538: mov dword ptr [0xa8f5cc], ebx */ W32((u32)(0xa8f5ccu), r_ebx);
    /* 0064f53e: mov dword ptr [0xa8f5c0], 0x64d7f0 */ W32((u32)(0xa8f5c0u), 0x64d7f0u);
    /* 0064f548: mov dword ptr [0xa8f5c8], esi */ W32((u32)(0xa8f5c8u), r_esi);
    /* 0064f54e: mov dword ptr [0xa8f5c4], esi */ W32((u32)(0xa8f5c4u), r_esi);
    /* 0064f554: jmp 0x64f64d */ goto L_0064f64d;
L_0064f64d:; BB(0x0064f64d);
    /* 0064f64d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f650: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f653: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f656: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f65d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f65f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f660: ret  */ FN_RET(0x0064f49d); r_esp += 4; return;
L_0064f661:; BB(0x0064f661);
    /* 0064f661: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064f663: jmp 0x64f4e6 */ goto L_0064f4e6;
}

void f_0064f559(void)
{
    FN_ENTER(0x0064f559);
    /* 0064f559: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064f560: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f565: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f56au); f_008581c5();
    /* 0064f56a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f56b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f56e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f570: je 0x64f668 */ if (fZ) goto L_0064f668;
L_0064f576:; BB(0x0064f576);
    /* 0064f576: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0064f57d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f584: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f587: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f58a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f58b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f58c: push 0x9c7744 */ { u32 v = 0x9c7744u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f591: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f593: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f598u); f_005b7a84();
    /* 0064f598: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f59b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064f5a2:; BB(0x0064f5a2);
    /* 0064f5a2: mov dword ptr [0xa8f5dc], eax */ W32((u32)(0xa8f5dcu), r_eax);
    /* 0064f5a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f5ae: push 0x936b18 */ { u32 v = 0x936b18u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f5b3: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f5b8u); f_008009dc();
    /* 0064f5b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f5b9: mov dword ptr [0xa8f5e4], 0x9c75a0 */ W32((u32)(0xa8f5e4u), 0x9c75a0u);
    /* 0064f5c3: mov dword ptr [0xa8f5d8], eax */ W32((u32)(0xa8f5d8u), r_eax);
    /* 0064f5c8: mov dword ptr [0xa8f5e0], 0x9c75ec */ W32((u32)(0xa8f5e0u), 0x9c75ecu);
    /* 0064f5d2: jmp 0x64f64d */ goto L_0064f64d;
L_0064f64d:; BB(0x0064f64d);
    /* 0064f64d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f650: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f653: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f656: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f65d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f65f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f660: ret  */ FN_RET(0x0064f559); r_esp += 4; return;
L_0064f668:; BB(0x0064f668);
    /* 0064f668: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f66a: jmp 0x64f5a2 */ goto L_0064f5a2;
}

void f_0064f5d4(void)
{
    FN_ENTER(0x0064f5d4);
    /* 0064f5d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064f5db: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f5e0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f5e5u); f_008581c5();
    /* 0064f5e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f5e6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f5eb: je 0x64f66f */ if (fZ) goto L_0064f66f;
L_0064f5f1:; BB(0x0064f5f1);
    /* 0064f5f1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064f5f8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064f5ff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f602: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f607: push 0x9c7704 */ { u32 v = 0x9c7704u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f60c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f60e: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f613u); f_005b7a84();
    /* 0064f613: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f616: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064f61d:; BB(0x0064f61d);
    /* 0064f61d: mov dword ptr [0xa8f5dc], eax */ W32((u32)(0xa8f5dcu), r_eax);
    /* 0064f622: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f629: push 0x936b30 */ { u32 v = 0x936b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f62e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f633u); f_008009dc();
    /* 0064f633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f634: mov dword ptr [0xa8f5e4], 0x9c75a0 */ W32((u32)(0xa8f5e4u), 0x9c75a0u);
    /* 0064f63e: mov dword ptr [0xa8f5d8], eax */ W32((u32)(0xa8f5d8u), r_eax);
    /* 0064f643: mov dword ptr [0xa8f5e0], 0x9c75ec */ W32((u32)(0xa8f5e0u), 0x9c75ecu);
    /* 0064f64d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f650: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f653: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f656: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f65d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f65f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f660: ret  */ FN_RET(0x0064f5d4); r_esp += 4; return;
L_0064f66f:; BB(0x0064f66f);
    /* 0064f66f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f671: jmp 0x64f61d */ goto L_0064f61d;
}

void f_0064f674(void) /* sub_64F674 */
{
    FN_ENTER(0x0064f674);
    /* 0064f674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f675: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f677: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f679: push 0x8e674a */ { u32 v = 0x8e674au; r_esp -= 4; W32(r_esp, v); }
    /* 0064f67e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f685: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064f68c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f68f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064f692: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064f695: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064f698: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064f69b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f69d: mov dword ptr [0xa8f604], eax */ W32((u32)(0xa8f604u), r_eax);
    /* 0064f6a2: mov dword ptr [0xa8f5fc], 1 */ W32((u32)(0xa8f5fcu), 0x1u);
    /* 0064f6ac: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
    /* 0064f6b1: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x64f6b6u); f_00807ac0();
    /* 0064f6b6: lea edx, [eax - 0x1c] */ r_edx = (u32)(r_eax+0xffffffe4u);
    /* 0064f6b9: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064f6bc: ja 0x64f82b */ if ((!fC&&!fZ)) goto L_0064f82b;
L_0064f6c2:; BB(0x0064f6c2);
    /* 0064f6c2: mov eax, dword ptr [eax*4 + 0x936710] */ r_eax = R32((u32)(r_eax*4+0x936710u));
    /* 0064f6c9: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0064f82b:; BB(0x0064f82b);
    /* 0064f82b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064f832: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f837: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f83cu); f_008581c5();
    /* 0064f83c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f83d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f842: je 0x64f90f */ if (fZ) goto L_0064f90f;
L_0064f848:; BB(0x0064f848);
    /* 0064f848: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064f84f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064f856: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f859: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85e: push 0x9c76e0 */ { u32 v = 0x9c76e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f863: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f865: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f86au); f_005b7a84();
    /* 0064f86a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f86d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064f874:; BB(0x0064f874);
    /* 0064f874: mov dword ptr [0xa8f604], eax */ W32((u32)(0xa8f604u), r_eax);
    /* 0064f879: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f880: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x64f885u); f_0078b220();
    /* 0064f885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f887: je 0x64f89b */ if (fZ) goto L_0064f89b;
L_0064f889:; BB(0x0064f889);
    /* 0064f889: push 0x936af0 */ { u32 v = 0x936af0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f88e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f893u); f_008009dc();
    /* 0064f893: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f894: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
    /* 0064f899: jmp 0x64f8ab */ goto L_0064f8ab;
L_0064f89b:; BB(0x0064f89b);
    /* 0064f89b: push 0x936b04 */ { u32 v = 0x936b04u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8a0: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f8a5u); f_008009dc();
    /* 0064f8a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f8a6: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
L_0064f8ab:; BB(0x0064f8ab);
    /* 0064f8ab: mov dword ptr [0xa8f60c], 0x9c73c0 */ W32((u32)(0xa8f60cu), 0x9c73c0u);
    /* 0064f8b5: mov dword ptr [0xa8f608], 0x9c740c */ W32((u32)(0xa8f608u), 0x9c740cu);
    /* 0064f8bf: mov eax, dword ptr [0xa8f5fc] */ r_eax = R32((u32)(0xa8f5fcu));
    /* 0064f8c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f8c6: je 0x64f8ed */ if (fZ) goto L_0064f8ed;
L_0064f8c8:; BB(0x0064f8c8);
    /* 0064f8c8: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064f8ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f8d5u); f_005b8610();
    /* 0064f8d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d7: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8dc: push dword ptr [0xa8f600] */ { u32 v = R32((u32)(0xa8f600u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e5: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x64f8eau); f_006086e8();
    /* 0064f8ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064f8ed:; BB(0x0064f8ed);
    /* 0064f8ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f8f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f8f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f8f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f8fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f8ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f900: ret  */ FN_RET(0x0064f674); r_esp += 4; return;
L_0064f90f:; BB(0x0064f90f);
    /* 0064f90f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f911: jmp 0x64f874 */ goto L_0064f874;
}

void f_0064f6a0(void)
{
    FN_ENTER(0x0064f6a0);
    /* 0064f6a0: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 0064f6a2: mov dword ptr [0xa8f5fc], 1 */ W32((u32)(0xa8f5fcu), 0x1u);
    /* 0064f6ac: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
    /* 0064f6b1: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x64f6b6u); f_00807ac0();
    /* 0064f6b6: lea edx, [eax - 0x1c] */ r_edx = (u32)(r_eax+0xffffffe4u);
    /* 0064f6b9: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064f6bc: ja 0x64f82b */ if ((!fC&&!fZ)) goto L_0064f82b;
L_0064f6c2:; BB(0x0064f6c2);
    /* 0064f6c2: mov eax, dword ptr [eax*4 + 0x936710] */ r_eax = R32((u32)(r_eax*4+0x936710u));
    /* 0064f6c9: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0064f82b:; BB(0x0064f82b);
    /* 0064f82b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064f832: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f837: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f83cu); f_008581c5();
    /* 0064f83c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f83d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f842: je 0x64f90f */ if (fZ) goto L_0064f90f;
L_0064f848:; BB(0x0064f848);
    /* 0064f848: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064f84f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064f856: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f859: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85e: push 0x9c76e0 */ { u32 v = 0x9c76e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f863: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f865: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f86au); f_005b7a84();
    /* 0064f86a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f86d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064f874:; BB(0x0064f874);
    /* 0064f874: mov dword ptr [0xa8f604], eax */ W32((u32)(0xa8f604u), r_eax);
    /* 0064f879: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f880: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x64f885u); f_0078b220();
    /* 0064f885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f887: je 0x64f89b */ if (fZ) goto L_0064f89b;
L_0064f889:; BB(0x0064f889);
    /* 0064f889: push 0x936af0 */ { u32 v = 0x936af0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f88e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f893u); f_008009dc();
    /* 0064f893: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f894: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
    /* 0064f899: jmp 0x64f8ab */ goto L_0064f8ab;
L_0064f89b:; BB(0x0064f89b);
    /* 0064f89b: push 0x936b04 */ { u32 v = 0x936b04u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8a0: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f8a5u); f_008009dc();
    /* 0064f8a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f8a6: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
L_0064f8ab:; BB(0x0064f8ab);
    /* 0064f8ab: mov dword ptr [0xa8f60c], 0x9c73c0 */ W32((u32)(0xa8f60cu), 0x9c73c0u);
    /* 0064f8b5: mov dword ptr [0xa8f608], 0x9c740c */ W32((u32)(0xa8f608u), 0x9c740cu);
    /* 0064f8bf: mov eax, dword ptr [0xa8f5fc] */ r_eax = R32((u32)(0xa8f5fcu));
    /* 0064f8c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f8c6: je 0x64f8ed */ if (fZ) goto L_0064f8ed;
L_0064f8c8:; BB(0x0064f8c8);
    /* 0064f8c8: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064f8ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f8d5u); f_005b8610();
    /* 0064f8d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d7: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8dc: push dword ptr [0xa8f600] */ { u32 v = R32((u32)(0xa8f600u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e5: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x64f8eau); f_006086e8();
    /* 0064f8ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064f8ed:; BB(0x0064f8ed);
    /* 0064f8ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f8f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f8f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f8f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f8fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f8ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f900: ret  */ FN_RET(0x0064f6a0); r_esp += 4; return;
L_0064f90f:; BB(0x0064f90f);
    /* 0064f90f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f911: jmp 0x64f874 */ goto L_0064f874;
}

void f_0064f6cb(void)
{
    FN_ENTER(0x0064f6cb);
    /* 0064f6cb: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0064f6d2: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f6d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f6dcu); f_008581c5();
    /* 0064f6dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f6dd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f6e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f6e2: je 0x64f901 */ if (fZ) goto L_0064f901;
L_0064f6e8:; BB(0x0064f6e8);
    /* 0064f6e8: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0064f6ef: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0064f6f6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f6f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f6fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f6fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f6fe: push 0x9c7764 */ { u32 v = 0x9c7764u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f703: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f705: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f70au); f_005b7a84();
    /* 0064f70a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f70d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0064f714:; BB(0x0064f714);
    /* 0064f714: mov dword ptr [0xa8f604], ecx */ W32((u32)(0xa8f604u), r_ecx);
    /* 0064f71a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f721: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f723: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64f728u); f_005b8624();
    /* 0064f728: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064f72e: mov dword ptr [0xa8f60c], 0x9c74f0 */ W32((u32)(0xa8f60cu), 0x9c74f0u);
    /* 0064f738: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
    /* 0064f73d: mov dword ptr [0xa8f608], 0x9c753c */ W32((u32)(0xa8f608u), 0x9c753cu);
    /* 0064f747: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f749: mov dword ptr [0xa8f5fc], 0 */ W32((u32)(0xa8f5fcu), 0x0u);
    /* 0064f753: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f758u); f_005b8610();
    /* 0064f758: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0064f75b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064f75e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0064f761: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0064f764: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0064f766: mov dword ptr [0xa8f5f4], ebx */ W32((u32)(0xa8f5f4u), r_ebx);
    /* 0064f76c: mov dword ptr [0xa8f5e8], 0x64d770 */ W32((u32)(0xa8f5e8u), 0x64d770u);
    /* 0064f776: mov dword ptr [0xa8f5f0], esi */ W32((u32)(0xa8f5f0u), r_esi);
    /* 0064f77c: mov dword ptr [0xa8f5ec], esi */ W32((u32)(0xa8f5ecu), r_esi);
    /* 0064f782: jmp 0x64f8bf */ goto L_0064f8bf;
L_0064f8bf:; BB(0x0064f8bf);
    /* 0064f8bf: mov eax, dword ptr [0xa8f5fc] */ r_eax = R32((u32)(0xa8f5fcu));
    /* 0064f8c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f8c6: je 0x64f8ed */ if (fZ) goto L_0064f8ed;
L_0064f8c8:; BB(0x0064f8c8);
    /* 0064f8c8: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064f8ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f8d5u); f_005b8610();
    /* 0064f8d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d7: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8dc: push dword ptr [0xa8f600] */ { u32 v = R32((u32)(0xa8f600u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e5: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x64f8eau); f_006086e8();
    /* 0064f8ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064f8ed:; BB(0x0064f8ed);
    /* 0064f8ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f8f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f8f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f8f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f8fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f8ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f900: ret  */ FN_RET(0x0064f6cb); r_esp += 4; return;
L_0064f901:; BB(0x0064f901);
    /* 0064f901: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064f903: jmp 0x64f714 */ goto L_0064f714;
}

void f_0064f787(void)
{
    FN_ENTER(0x0064f787);
    /* 0064f787: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064f78e: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f793: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f798u); f_008581c5();
    /* 0064f798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f799: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f79c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f79e: je 0x64f908 */ if (fZ) goto L_0064f908;
L_0064f7a4:; BB(0x0064f7a4);
    /* 0064f7a4: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0064f7ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f7b2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f7b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f7b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7ba: push 0x9c7724 */ { u32 v = 0x9c7724u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7bf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7c1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f7c6u); f_005b7a84();
    /* 0064f7c6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f7c9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064f7d0:; BB(0x0064f7d0);
    /* 0064f7d0: mov dword ptr [0xa8f604], eax */ W32((u32)(0xa8f604u), r_eax);
    /* 0064f7d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f7dc: push 0x936adc */ { u32 v = 0x936adcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f7e1: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f7e6u); f_008009dc();
    /* 0064f7e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f7e7: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064f7ed: mov dword ptr [0xa8f60c], 0x9c7458 */ W32((u32)(0xa8f60cu), 0x9c7458u);
    /* 0064f7f7: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
    /* 0064f7fc: mov dword ptr [0xa8f608], 0x9c74a4 */ W32((u32)(0xa8f608u), 0x9c74a4u);
    /* 0064f806: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f808: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f80du); f_005b8610();
    /* 0064f80d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f80f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f810: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x64f815u); f_0078e9b0();
    /* 0064f815: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f818: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f81a: je 0x64f8bf */ if (fZ) goto L_0064f8bf;
L_0064f820:; BB(0x0064f820);
    /* 0064f820: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0064f826: jmp 0x64f8bf */ goto L_0064f8bf;
L_0064f8bf:; BB(0x0064f8bf);
    /* 0064f8bf: mov eax, dword ptr [0xa8f5fc] */ r_eax = R32((u32)(0xa8f5fcu));
    /* 0064f8c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f8c6: je 0x64f8ed */ if (fZ) goto L_0064f8ed;
L_0064f8c8:; BB(0x0064f8c8);
    /* 0064f8c8: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064f8ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f8d5u); f_005b8610();
    /* 0064f8d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d7: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8dc: push dword ptr [0xa8f600] */ { u32 v = R32((u32)(0xa8f600u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e5: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x64f8eau); f_006086e8();
    /* 0064f8ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064f8ed:; BB(0x0064f8ed);
    /* 0064f8ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f8f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f8f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f8f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f8fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f8ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f900: ret  */ FN_RET(0x0064f787); r_esp += 4; return;
L_0064f908:; BB(0x0064f908);
    /* 0064f908: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f90a: jmp 0x64f7d0 */ goto L_0064f7d0;
}

void f_0064f82b(void)
{
    FN_ENTER(0x0064f82b);
    /* 0064f82b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064f832: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f837: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64f83cu); f_008581c5();
    /* 0064f83c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f83d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064f840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f842: je 0x64f90f */ if (fZ) goto L_0064f90f;
L_0064f848:; BB(0x0064f848);
    /* 0064f848: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064f84f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064f856: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f859: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f85e: push 0x9c76e0 */ { u32 v = 0x9c76e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f863: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f865: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64f86au); f_005b7a84();
    /* 0064f86a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064f86d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064f874:; BB(0x0064f874);
    /* 0064f874: mov dword ptr [0xa8f604], eax */ W32((u32)(0xa8f604u), r_eax);
    /* 0064f879: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f880: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x64f885u); f_0078b220();
    /* 0064f885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f887: je 0x64f89b */ if (fZ) goto L_0064f89b;
L_0064f889:; BB(0x0064f889);
    /* 0064f889: push 0x936af0 */ { u32 v = 0x936af0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f88e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f893u); f_008009dc();
    /* 0064f893: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f894: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
    /* 0064f899: jmp 0x64f8ab */ goto L_0064f8ab;
L_0064f89b:; BB(0x0064f89b);
    /* 0064f89b: push 0x936b04 */ { u32 v = 0x936b04u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8a0: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64f8a5u); f_008009dc();
    /* 0064f8a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f8a6: mov dword ptr [0xa8f600], eax */ W32((u32)(0xa8f600u), r_eax);
L_0064f8ab:; BB(0x0064f8ab);
    /* 0064f8ab: mov dword ptr [0xa8f60c], 0x9c73c0 */ W32((u32)(0xa8f60cu), 0x9c73c0u);
    /* 0064f8b5: mov dword ptr [0xa8f608], 0x9c740c */ W32((u32)(0xa8f608u), 0x9c740cu);
    /* 0064f8bf: mov eax, dword ptr [0xa8f5fc] */ r_eax = R32((u32)(0xa8f5fcu));
    /* 0064f8c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f8c6: je 0x64f8ed */ if (fZ) goto L_0064f8ed;
L_0064f8c8:; BB(0x0064f8c8);
    /* 0064f8c8: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064f8ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64f8d5u); f_005b8610();
    /* 0064f8d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8d7: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8dc: push dword ptr [0xa8f600] */ { u32 v = R32((u32)(0xa8f600u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f8e5: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x64f8eau); f_006086e8();
    /* 0064f8ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064f8ed:; BB(0x0064f8ed);
    /* 0064f8ed: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064f8f0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f8f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f8f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f8fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f8ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f900: ret  */ FN_RET(0x0064f82b); r_esp += 4; return;
L_0064f90f:; BB(0x0064f90f);
    /* 0064f90f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f911: jmp 0x64f874 */ goto L_0064f874;
}

void f_0064f918(void) /* sub_64F918 */
{
    FN_ENTER(0x0064f918);
    /* 0064f918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f919: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064f91b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064f91d: call 0x64f93c */ r_esp -= 4; W32(r_esp, 0x64f922u); f_0064f93c();
    /* 0064f922: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064f926: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f928: jne 0x64f92e */ if (!fZ) goto L_0064f92e;
L_0064f92a:; BB(0x0064f92a);
    /* 0064f92a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064f92b: ret 4 */ FN_RET(0x0064f918); r_esp += 8; return;
L_0064f92e:; BB(0x0064f92e);
    /* 0064f92e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f92f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64f934u); f_005c2f74();
    /* 0064f934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f935: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064f936: ret 4 */ FN_RET(0x0064f918); r_esp += 8; return;
}

void f_0064f93c(void) /* sub_64F93C */
{
    FN_ENTER(0x0064f93c);
    /* 0064f93c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f93d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f93f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f941: push 0x8e6764 */ { u32 v = 0x8e6764u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f946: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f94c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f94d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064f954: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f957: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064f95a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064f95d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064f960: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064f963: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064f966: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f96d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064f970: mov dword ptr [eax], 0xb31100 */ W32((u32)(r_eax), 0xb31100u);
    /* 0064f976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f977: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64f97cu); f_007b4e84();
    /* 0064f97c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f97d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064f980: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64f985u); f_007b9c8c();
    /* 0064f985: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f98c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064f98f: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x64f994u); f_00770660();
    /* 0064f994: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f997: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f99e: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f9a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f9a1: ret  */ FN_RET(0x0064f93c); r_esp += 4; return;
}

void f_0064f9a4(void) /* sub_64F9A4 */
{
    FN_ENTER(0x0064f9a4);
    /* 0064f9a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f9a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064f9a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064f9a9: call 0x64f9c8 */ r_esp -= 4; W32(r_esp, 0x64f9aeu); f_0064f9c8();
    /* 0064f9ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064f9b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064f9b4: jne 0x64f9ba */ if (!fZ) goto L_0064f9ba;
L_0064f9b6:; BB(0x0064f9b6);
    /* 0064f9b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064f9b7: ret 4 */ FN_RET(0x0064f9a4); r_esp += 8; return;
L_0064f9ba:; BB(0x0064f9ba);
    /* 0064f9ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f9bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64f9c0u); f_005c2f74();
    /* 0064f9c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f9c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064f9c2: ret 4 */ FN_RET(0x0064f9a4); r_esp += 8; return;
}

void f_0064f9c8(void) /* sub_64F9C8 */
{
    FN_ENTER(0x0064f9c8);
    /* 0064f9c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f9c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f9cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f9cd: push 0x8e6780 */ { u32 v = 0x8e6780u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f9d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f9d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f9d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064f9e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f9e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064f9e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064f9e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064f9ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064f9ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064f9f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f9f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064f9fc: mov dword ptr [eax], 0xb31260 */ W32((u32)(r_eax), 0xb31260u);
    /* 0064fa02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa03: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64fa08u); f_007b4e84();
    /* 0064fa08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064fa09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064fa0c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64fa11u); f_007b9c8c();
    /* 0064fa11: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064fa18: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064fa1b: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x64fa20u); f_00770660();
    /* 0064fa20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064fa23: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064fa2a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fa2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fa2d: ret  */ FN_RET(0x0064f9c8); r_esp += 4; return;
}

void f_0064fa30(void) /* sub_64FA30 */
{
    FN_ENTER(0x0064fa30);
    /* 0064fa30: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa35: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fa37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa39: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x64fa3cu); call_ind(t); }
    /* 0064fa3c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fa3e: fld dword ptr [0x936c58] */ FPUSH(R_F32((u32)(0x936c58u)));
    /* 0064fa44: ret 8 */ FN_RET(0x0064fa30); r_esp += 12; return;
}

void f_0064fa48(void) /* sub_64FA48 */
{
    FN_ENTER(0x0064fa48);
    /* 0064fa48: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa4d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fa4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa51: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x64fa54u); call_ind(t); }
    /* 0064fa54: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fa56: fld dword ptr [0x936c50] */ FPUSH(R_F32((u32)(0x936c50u)));
    /* 0064fa5c: ret 8 */ FN_RET(0x0064fa48); r_esp += 12; return;
}

void f_0064fa60(void) /* sub_64FA60 */
{
    FN_ENTER(0x0064fa60);
    /* 0064fa60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa61: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064fa64: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064fa66: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x64fa6bu); f_004f7c84();
    /* 0064fa6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fa6d: jne 0x64fc6d */ if (!fZ) goto L_0064fc6d;
L_0064fa73:; BB(0x0064fa73);
    /* 0064fa73: mov eax, dword ptr [ebx + 0x364] */ r_eax = R32((u32)(r_ebx+0x364u));
    /* 0064fa79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fa7b: jne 0x64fc20 */ if (!fZ) goto L_0064fc20;
L_0064fa81:; BB(0x0064fa81);
    /* 0064fa81: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0064fa88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fa8a: je 0x64fb6d */ if (fZ) goto L_0064fb6d;
L_0064fa90:; BB(0x0064fa90);
    /* 0064fa90: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fa93: jne 0x64faa7 */ if (!fZ) goto L_0064faa7;
L_0064fa95:; BB(0x0064fa95);
    /* 0064fa95: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064fa97: call 0x64ff78 */ r_esp -= 4; W32(r_esp, 0x64fa9cu); f_0064ff78();
    /* 0064fa9c: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 0064faa2: jmp 0x64fbfd */ goto L_0064fbfd;
L_0064faa7:; BB(0x0064faa7);
    /* 0064faa7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064faaa: jne 0x64fabe */ if (!fZ) goto L_0064fabe;
L_0064faac:; BB(0x0064faac);
    /* 0064faac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064faae: call 0x64fce0 */ r_esp -= 4; W32(r_esp, 0x64fab3u); f_0064fce0();
    /* 0064fab3: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 0064fab9: jmp 0x64fbfd */ goto L_0064fbfd;
L_0064fabe:; BB(0x0064fabe);
    /* 0064fabe: mov dword ptr [ebx + 0x2b8], 0xbf800000 */ W32((u32)(r_ebx+0x2b8u), 0xbf800000u);
    /* 0064fac8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064faca: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0064fad1: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0064fad8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064fada: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x64fadfu); f_007aa094();
    /* 0064fadf: fld dword ptr [ebx + 0x340] */ FPUSH(R_F32((u32)(r_ebx+0x340u)));
    /* 0064fae5: fcomp dword ptr [ebx + 0x2b8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x2b8u))); FPOP();
    /* 0064faeb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064faed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064faef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064faf0: jbe 0x64fb4f */ if ((fC||fZ)) goto L_0064fb4f;
L_0064faf2:; BB(0x0064faf2);
    /* 0064faf2: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0064faf6: mov esi, ebx */ r_esi = r_ebx;
    /* 0064faf8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064fafb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064fafd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064faff: mov ebx, edx */ r_ebx = r_edx;
    /* 0064fb01: mov edi, ecx */ r_edi = r_ecx;
L_0064fb03:; BB(0x0064fb03);
    /* 0064fb03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fb04: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64fb09u); f_0068d5a8();
    /* 0064fb09: mov edx, eax */ r_edx = r_eax;
    /* 0064fb0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fb0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fb10: je 0x64fb32 */ if (fZ) goto L_0064fb32;
L_0064fb12:; BB(0x0064fb12);
    /* 0064fb12: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0064fb15: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064fb18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fb19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fb1a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x64fb1fu); f_007a9180();
    /* 0064fb1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fb22: fcomp dword ptr [0x936c48] */ fx_compare(ST(0), R_F32((u32)(0x936c48u))); FPOP();
    /* 0064fb28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fb2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fb2b: jae 0x64fb32 */ if (!fC) goto L_0064fb32;
L_0064fb2d:; BB(0x0064fb2d);
    /* 0064fb2d: mov ebx, 1 */ r_ebx = 0x1u;
L_0064fb32:; BB(0x0064fb32);
    /* 0064fb32: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064fb35: mov eax, edi */ r_eax = r_edi;
    /* 0064fb37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064fb3a: jl 0x64fb03 */ if ((fS!=fO)) goto L_0064fb03;
L_0064fb3c:; BB(0x0064fb3c);
    /* 0064fb3c: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0064fb3f: mov edx, ebx */ r_edx = r_ebx;
    /* 0064fb41: mov ebx, esi */ r_ebx = r_esi;
    /* 0064fb43: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0064fb47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fb49: je 0x64fca3 */ if (fZ) goto L_0064fca3;
L_0064fb4f:; BB(0x0064fb4f);
    /* 0064fb4f: fld dword ptr [0x936c3c] */ FPUSH(R_F32((u32)(0x936c3cu)));
    /* 0064fb55: mov eax, 1 */ r_eax = 0x1u;
    /* 0064fb5a: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0064fb61: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0064fb68: jmp 0x64fbfd */ goto L_0064fbfd;
L_0064fb6d:; BB(0x0064fb6d);
    /* 0064fb6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064fb6f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x64fb74u); f_007aa094();
    /* 0064fb74: fld dword ptr [ebx + 0x340] */ FPUSH(R_F32((u32)(r_ebx+0x340u)));
    /* 0064fb7a: fcomp dword ptr [ebx + 0x2b8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x2b8u))); FPOP();
    /* 0064fb80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fb82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064fb84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fb85: jbe 0x64fbe4 */ if ((fC||fZ)) goto L_0064fbe4;
L_0064fb87:; BB(0x0064fb87);
    /* 0064fb87: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0064fb8b: mov esi, ebx */ r_esi = r_ebx;
    /* 0064fb8d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0064fb90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064fb92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064fb94: mov ebx, edx */ r_ebx = r_edx;
    /* 0064fb96: mov edi, ecx */ r_edi = r_ecx;
L_0064fb98:; BB(0x0064fb98);
    /* 0064fb98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fb99: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64fb9eu); f_0068d5a8();
    /* 0064fb9e: mov edx, eax */ r_edx = r_eax;
    /* 0064fba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fba3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fba5: je 0x64fbc7 */ if (fZ) goto L_0064fbc7;
L_0064fba7:; BB(0x0064fba7);
    /* 0064fba7: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0064fbaa: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064fbad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fbaf: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x64fbb4u); f_007a9180();
    /* 0064fbb4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fbb7: fcomp dword ptr [0x936c48] */ fx_compare(ST(0), R_F32((u32)(0x936c48u))); FPOP();
    /* 0064fbbd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fbbf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fbc0: jae 0x64fbc7 */ if (!fC) goto L_0064fbc7;
L_0064fbc2:; BB(0x0064fbc2);
    /* 0064fbc2: mov ebx, 1 */ r_ebx = 0x1u;
L_0064fbc7:; BB(0x0064fbc7);
    /* 0064fbc7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064fbca: mov eax, edi */ r_eax = r_edi;
    /* 0064fbcc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064fbcf: jl 0x64fb98 */ if ((fS!=fO)) goto L_0064fb98;
L_0064fbd1:; BB(0x0064fbd1);
    /* 0064fbd1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0064fbd4: mov edx, ebx */ r_edx = r_ebx;
    /* 0064fbd6: mov ebx, esi */ r_ebx = r_esi;
    /* 0064fbd8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0064fbdc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fbde: je 0x64fcae */ if (fZ) goto L_0064fcae;
L_0064fbe4:; BB(0x0064fbe4);
    /* 0064fbe4: fld dword ptr [0x936c3c] */ FPUSH(R_F32((u32)(0x936c3cu)));
    /* 0064fbea: mov eax, 1 */ r_eax = 0x1u;
    /* 0064fbef: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0064fbf6: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_0064fbfd:; BB(0x0064fbfd);
    /* 0064fbfd: fadd dword ptr [0x936c38] */ ST(0) = ST(0) + R_F32((u32)(0x936c38u));
    /* 0064fc03: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0064fc08: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 0064fc0e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fc11: je 0x64fc6d */ if (fZ) goto L_0064fc6d;
L_0064fc13:; BB(0x0064fc13);
    /* 0064fc13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fc15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fc16: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x64fc1bu); f_006946a8();
    /* 0064fc1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fc1e: jmp 0x64fc6d */ goto L_0064fc6d;
L_0064fc20:; BB(0x0064fc20);
    /* 0064fc20: fld dword ptr [ebx + 0x36c] */ FPUSH(R_F32((u32)(r_ebx+0x36cu)));
    /* 0064fc26: fcom dword ptr [0x936c34] */ fx_compare(ST(0), R_F32((u32)(0x936c34u))); 
    /* 0064fc2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fc2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fc2f: ja 0x64fc5f */ if ((!fC&&!fZ)) goto L_0064fc5f;
L_0064fc31:; BB(0x0064fc31);
    /* 0064fc31: fld dword ptr [0x936c40] */ FPUSH(R_F32((u32)(0x936c40u)));
    /* 0064fc37: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0064fc39: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0064fc3c: fsub dword ptr [0x936c2c] */ ST(0) = ST(0) - R_F32((u32)(0x936c2cu));
    /* 0064fc42: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064fc44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064fc46: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fc48: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fc4a: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 0064fc4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fc4e: ja 0x64fc6d */ if ((!fC&&!fZ)) goto L_0064fc6d;
L_0064fc50:; BB(0x0064fc50);
    /* 0064fc50: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0064fc54: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064fc59: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0064fc5d: jmp 0x64fc6d */ goto L_0064fc6d;
L_0064fc5f:; BB(0x0064fc5f);
    /* 0064fc5f: fld dword ptr [0x936c30] */ FPUSH(R_F32((u32)(0x936c30u)));
    /* 0064fc65: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0064fc67: fstp dword ptr [ebx + 0x36c] */ W_F32((u32)(r_ebx+0x36cu), ST(0)); FPOP();
L_0064fc6d:; BB(0x0064fc6d);
    /* 0064fc6d: mov ecx, dword ptr [0xa8f660] */ r_ecx = R32((u32)(0xa8f660u));
    /* 0064fc73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fc75: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x64fc7au); f_005b8638();
    /* 0064fc7a: cmp eax, dword ptr [ebx + 0xf8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fc80: je 0x64fccb */ if (fZ) goto L_0064fccb;
L_0064fc82:; BB(0x0064fc82);
    /* 0064fc82: mov ecx, dword ptr [0xa8f660] */ r_ecx = R32((u32)(0xa8f660u));
    /* 0064fc88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fc8a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x64fc8fu); f_005b8638();
    /* 0064fc8f: cmp eax, dword ptr [ebx + 0xf8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fc95: je 0x64fcb9 */ if (fZ) goto L_0064fcb9;
L_0064fc97:; BB(0x0064fc97);
    /* 0064fc97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064fc99: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64fc9eu); f_0061cdb0();
    /* 0064fc9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064fca1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064fca2: ret  */ FN_RET(0x0064fa60); r_esp += 4; return;
L_0064fca3:; BB(0x0064fca3);
    /* 0064fca3: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 0064fca9: jmp 0x64fbfd */ goto L_0064fbfd;
L_0064fcae:; BB(0x0064fcae);
    /* 0064fcae: fld dword ptr [ebx + 0x2b8] */ FPUSH(R_F32((u32)(r_ebx+0x2b8u)));
    /* 0064fcb4: jmp 0x64fbfd */ goto L_0064fbfd;
L_0064fcb9:; BB(0x0064fcb9);
    /* 0064fcb9: mov ecx, dword ptr [0xa8f660] */ r_ecx = R32((u32)(0xa8f660u));
    /* 0064fcbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fcc1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64fcc6u); f_005b8610();
    /* 0064fcc6: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0064fcc9: jmp 0x64fc97 */ goto L_0064fc97;
L_0064fccb:; BB(0x0064fccb);
    /* 0064fccb: mov ecx, dword ptr [0xa8f660] */ r_ecx = R32((u32)(0xa8f660u));
    /* 0064fcd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fcd3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64fcd8u); f_005b8610();
    /* 0064fcd8: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0064fcdb: jmp 0x64fc82 */ goto L_0064fc82;
}

void f_0064fce0(void) /* sub_64FCE0 */
{
    FN_ENTER(0x0064fce0);
    /* 0064fce0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064fce1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fce2: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064fce5: mov esi, ecx */ r_esi = r_ecx;
    /* 0064fce7: mov ecx, esi */ r_ecx = r_esi;
    /* 0064fce9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x64fceeu); f_007aa094();
    /* 0064fcee: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 0064fcf4: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0064fcfa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064fcfc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fcfe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fcff: je 0x64fec2 */ if (fZ) goto L_0064fec2;
L_0064fd05:; BB(0x0064fd05);
    /* 0064fd05: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064fd07: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064fd09: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fd0b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fd0d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fd0e: je 0x64fea4 */ if (fZ) goto L_0064fea4;
L_0064fd14:; BB(0x0064fd14);
    /* 0064fd14: fcom dword ptr [0x936c28] */ fx_compare(ST(0), R_F32((u32)(0x936c28u))); 
    /* 0064fd1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fd1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fd1d: je 0x64fea4 */ if (fZ) goto L_0064fea4;
L_0064fd23:; BB(0x0064fd23);
    /* 0064fd23: fcom dword ptr [0x936c24] */ fx_compare(ST(0), R_F32((u32)(0x936c24u))); 
    /* 0064fd29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fd2b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fd2c: je 0x64fea4 */ if (fZ) goto L_0064fea4;
L_0064fd32:; BB(0x0064fd32);
    /* 0064fd32: fcom dword ptr [0x936c20] */ fx_compare(ST(0), R_F32((u32)(0x936c20u))); 
    /* 0064fd38: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fd3a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fd3b: je 0x64fe86 */ if (fZ) goto L_0064fe86;
L_0064fd41:; BB(0x0064fd41);
    /* 0064fd41: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0064fd43: mov ebx, dword ptr [esi + 0x374] */ r_ebx = R32((u32)(r_esi+0x374u));
    /* 0064fd49: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064fd4b: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0064fd50: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x0064fd50, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0064fd50, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064fd52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064fd54: mov ecx, eax */ r_ecx = r_eax;
    /* 0064fd56: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0064fd5a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0064fd5f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064fd64: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0064fd68: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0064fd6c: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 0064fd70: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0064fd74: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0064fd78: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0064fd78, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0064fd78, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064fd7a: fcom dword ptr [0x936c24] */ fx_compare(ST(0), R_F32((u32)(0x936c24u))); 
    /* 0064fd80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fd82: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fd83: mov ebx, edx */ r_ebx = r_edx;
    /* 0064fd85: jbe 0x64fdbd */ if ((fC||fZ)) goto L_0064fdbd;
L_0064fd87:; BB(0x0064fd87);
    /* 0064fd87: fld dword ptr [0x936c14] */ FPUSH(R_F32((u32)(0x936c14u)));
    /* 0064fd8d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064fd8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fd91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fd92: jbe 0x64fdc3 */ if ((fC||fZ)) goto L_0064fdc3;
L_0064fd94:; BB(0x0064fd94);
    /* 0064fd94: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fd96: jne 0x64fdc3 */ if (!fZ) goto L_0064fdc3;
L_0064fd98:; BB(0x0064fd98);
    /* 0064fd98: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fd9a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fd9c: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd9e: lea eax, [esi + 0x358] */ r_eax = (u32)(r_esi+0x358u);
    /* 0064fda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fda5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x64fdaau); f_0050b510();
    /* 0064fdaa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fdad: fld dword ptr [0x936c14] */ FPUSH(R_F32((u32)(0x936c14u)));
    /* 0064fdb3: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0064fdb9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064fdbb: jmp 0x64fdc3 */ goto L_0064fdc3;
L_0064fdbd:; BB(0x0064fdbd);
    /* 0064fdbd: fld dword ptr [0x936c14] */ FPUSH(R_F32((u32)(0x936c14u)));
L_0064fdc3:; BB(0x0064fdc3);
    /* 0064fdc3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0064fdc5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fdc7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fdc8: jae 0x64fddf */ if (!fC) goto L_0064fddf;
L_0064fdca:; BB(0x0064fdca);
    /* 0064fdca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fdcc: jne 0x64fddf */ if (!fZ) goto L_0064fddf;
L_0064fdce:; BB(0x0064fdce);
    /* 0064fdce: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fdd0: lea eax, [esi + 0x34c] */ r_eax = (u32)(r_esi+0x34cu);
    /* 0064fdd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fdd7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x64fddcu); f_0050b510();
    /* 0064fddc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064fddf:; BB(0x0064fddf);
    /* 0064fddf: fld dword ptr [esi + 0x348] */ FPUSH(R_F32((u32)(r_esi+0x348u)));
    /* 0064fde5: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0064fde9: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0064fded: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0064fdef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064fdf1:; BB(0x0064fdf1);
    /* 0064fdf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fdf2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x64fdf7u); f_0068d5a8();
    /* 0064fdf7: mov edi, eax */ r_edi = r_eax;
    /* 0064fdf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fdfc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fdfe: je 0x64fe58 */ if (fZ) goto L_0064fe58;
L_0064fe00:; BB(0x0064fe00);
    /* 0064fe00: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0064fe06: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fe0c: jne 0x64fe58 */ if (!fZ) goto L_0064fe58;
L_0064fe0e:; BB(0x0064fe0e);
    /* 0064fe0e: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0064fe11: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064fe14: jne 0x64fe58 */ if (!fZ) goto L_0064fe58;
L_0064fe16:; BB(0x0064fe16);
    /* 0064fe16: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0064fe19: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0064fe1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe1e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x64fe23u); f_007a9180();
    /* 0064fe23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fe26: fcomp dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); FPOP();
    /* 0064fe2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fe2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fe2d: jae 0x64fe58 */ if (!fC) goto L_0064fe58;
L_0064fe2f:; BB(0x0064fe2f);
    /* 0064fe2f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0064fe31: mov dword ptr [esp], 0xf */ W32((u32)(r_esp), 0xfu);
    /* 0064fe38: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0064fe3d: mov ecx, edi */ r_ecx = r_edi;
    /* 0064fe3f: mov dword ptr [esp + 4], 0x42c80000 */ W32((u32)(r_esp+0x4u), 0x42c80000u);
    /* 0064fe47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe4b: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe50: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe53: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x64fe56u); call_ind(t); }
    /* 0064fe56: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0064fe58:; BB(0x0064fe58);
    /* 0064fe58: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0064fe5b: mov eax, ebx */ r_eax = r_ebx;
    /* 0064fe5d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064fe60: jl 0x64fdf1 */ if ((fS!=fO)) goto L_0064fdf1;
L_0064fe62:; BB(0x0064fe62);
    /* 0064fe62: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0064fe66: fld dword ptr [esi + 0x344] */ FPUSH(R_F32((u32)(r_esi+0x344u)));
    /* 0064fe6c: fcomp dword ptr [esi + 0x2b8] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x2b8u))); FPOP();
    /* 0064fe72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064fe74: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064fe75: jbe 0x64fe7d */ if ((fC||fZ)) goto L_0064fe7d;
L_0064fe77:; BB(0x0064fe77);
    /* 0064fe77: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064fe7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064fe7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064fe7c: ret  */ FN_RET(0x0064fce0); r_esp += 4; return;
L_0064fe7d:; BB(0x0064fe7d);
    /* 0064fe7d: mov ecx, esi */ r_ecx = r_esi;
    /* 0064fe7f: call 0x651190 */ r_esp -= 4; W32(r_esp, 0x64fe84u); f_00651190();
    /* 0064fe84: jmp 0x64fe77 */ goto L_0064fe77;
L_0064fe86:; BB(0x0064fe86);
    /* 0064fe86: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fe88: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe8a: lea eax, [esi + 0x34c] */ r_eax = (u32)(r_esi+0x34cu);
    /* 0064fe90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe91: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x64fe96u); f_0050b510();
    /* 0064fe96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fe99: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0064fe9f: jmp 0x64fd41 */ goto L_0064fd41;
L_0064fea4:; BB(0x0064fea4);
    /* 0064fea4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fea6: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 0064fea8: lea eax, [esi + 0x358] */ r_eax = (u32)(r_esi+0x358u);
    /* 0064feae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064feaf: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x64feb4u); f_0050b510();
    /* 0064feb4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064feb7: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0064febd: jmp 0x64fd32 */ goto L_0064fd32;
L_0064fec2:; BB(0x0064fec2);
    /* 0064fec2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0064fec4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064fec6: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x64fecbu); f_00807ac0();
    /* 0064fecb: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064fece: jl 0x64ff2b */ if ((fS!=fO)) goto L_0064ff2b;
L_0064fed0:; BB(0x0064fed0);
    /* 0064fed0: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064fed3: jle 0x64ff51 */ if ((fZ||fS!=fO)) goto L_0064ff51;
L_0064fed5:; BB(0x0064fed5);
    /* 0064fed5: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fed8: jne 0x64ff00 */ if (!fZ) goto L_0064ff00;
L_0064feda:; BB(0x0064feda);
    /* 0064feda: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0064fedd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064fedf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fee1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fee2: push 0x545 */ { u32 v = 0x545u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fee7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x64feecu); f_00814298();
    /* 0064feec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064feef: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 0064fef5: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0064fefb: jmp 0x64fd05 */ goto L_0064fd05;
L_0064ff00:; BB(0x0064ff00);
    /* 0064ff00: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ff03: jne 0x64ff2b */ if (!fZ) goto L_0064ff2b;
L_0064ff05:; BB(0x0064ff05);
    /* 0064ff05: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0064ff08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ff0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff0d: push 0x521 */ { u32 v = 0x521u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff12: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x64ff17u); f_00814298();
    /* 0064ff17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ff1a: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 0064ff20: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0064ff26: jmp 0x64fd05 */ goto L_0064fd05;
L_0064ff2b:; BB(0x0064ff2b);
    /* 0064ff2b: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0064ff2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ff30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff33: push 0x487 */ { u32 v = 0x487u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff38: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x64ff3du); f_00814298();
    /* 0064ff3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ff40: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 0064ff46: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0064ff4c: jmp 0x64fd05 */ goto L_0064fd05;
L_0064ff51:; BB(0x0064ff51);
    /* 0064ff51: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0064ff54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ff56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff59: push 0x4d8 */ { u32 v = 0x4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff5e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x64ff63u); f_00814298();
    /* 0064ff63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ff66: fld dword ptr [0x936c18] */ FPUSH(R_F32((u32)(0x936c18u)));
    /* 0064ff6c: fld dword ptr [esi + 0x2b8] */ FPUSH(R_F32((u32)(r_esi+0x2b8u)));
    /* 0064ff72: jmp 0x64fd05 */ goto L_0064fd05;
}

void f_0064ff78(void) /* sub_64FF78 */
{
    FN_ENTER(0x0064ff78);
    /* 0064ff78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff79: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ff7c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064ff7e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064ff80: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x64ff85u); f_007aa094();
    /* 0064ff85: fld dword ptr [ebp + 0x2b8] */ FPUSH(R_F32((u32)(r_ebp+0x2b8u)));
    /* 0064ff8b: fld dword ptr [ebp + 0x2b8] */ FPUSH(R_F32((u32)(r_ebp+0x2b8u)));
    /* 0064ff91: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0064ff94: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0064ff98: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064ff9d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0064ffa1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0064ffa5: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0064ffa9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0064ffac: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 0064ffb1: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0064ffb5: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0064ffb7: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0064ffba: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0064ffbd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ffbf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ffc1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ffc3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064ffc5: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ffc7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ffc9: jne 0x64ffe4 */ if (!fZ) goto L_0064ffe4;
L_0064ffcb:; BB(0x0064ffcb);
    /* 0064ffcb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064ffcd: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 0064ffcf: lea eax, [ebp + 0x34c] */ r_eax = (u32)(r_ebp+0x34cu);
    /* 0064ffd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ffd6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x64ffdbu); f_0050b510();
    /* 0064ffdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ffde: fld dword ptr [ebp + 0x2b8] */ FPUSH(R_F32((u32)(r_ebp+0x2b8u)));
L_0064ffe4:; BB(0x0064ffe4);
    /* 0064ffe4: fcomp dword ptr [0x936c0c] */ fx_compare(ST(0), R_F32((u32)(0x936c0cu))); FPOP();
    /* 0064ffea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064ffec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064ffed: jb 0x65000c */ if (fC) goto L_0065000c;
L_0064ffef:; BB(0x0064ffef);
    /* 0064ffef: mov dword ptr [ebp + 0x2b8], 0xbf800000 */ W32((u32)(r_ebp+0x2b8u), 0xbf800000u);
    /* 0064fff9: mov eax, 2 */ r_eax = 0x2u;
    /* 0064fffe: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00650005: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_0065000c:; BB(0x0065000c);
    /* 0065000c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065000f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650010: ret  */ FN_RET(0x0064ff78); r_esp += 4; return;
}

