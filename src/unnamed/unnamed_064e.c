#include "protos.h"

void f_0064e080(void) /* sub_64E080 */
{
    FN_ENTER(0x0064e080);
    /* 0064e080: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064e081: mov esi, ecx */ r_esi = r_ecx;
    /* 0064e083: push dword ptr [esi + 0x84] */ { u32 v = R32((u32)(r_esi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e089: push 0x9307b0 */ { u32 v = 0x9307b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e08e: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e093: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64e098u); f_0061cdb0();
    /* 0064e098: push 0x9ff9f0 */ { u32 v = 0x9ff9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e09d: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e0a2: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064e0a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064e0a6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64e0abu); f_0061cdb0();
    /* 0064e0ab: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064e0ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064e0af: ret  */ FN_RET(0x0064e080); r_esp += 4; return;
}

void f_0064e0b0(void) /* sub_64E0B0 */
{
    FN_ENTER(0x0064e0b0);
    /* 0064e0b0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e0b3: mov eax, ecx */ r_eax = r_ecx;
    /* 0064e0b5: mov edx, dword ptr [0xa8f604] */ r_edx = R32((u32)(0xa8f604u));
    /* 0064e0bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e0bd: je 0x64e0d8 */ if (fZ) goto L_0064e0d8;
L_0064e0bf:; BB(0x0064e0bf);
    /* 0064e0bf: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0064e0c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e0c8: jne 0x64e0d8 */ if (!fZ) goto L_0064e0d8;
L_0064e0ca:; BB(0x0064e0ca);
    /* 0064e0ca: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0064e0cd: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 0064e0d0: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0064e0d3: call 0x64dad0 */ r_esp -= 4; W32(r_esp, 0x64e0d8u); f_0064dad0();
L_0064e0d8:; BB(0x0064e0d8);
    /* 0064e0d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064e0db: ret  */ FN_RET(0x0064e0b0); r_esp += 4; return;
}

void f_0064e0dc(void) /* sub_64E0DC */
{
    FN_ENTER(0x0064e0dc);
    /* 0064e0dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064e0dd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e0e0: mov edi, ecx */ r_edi = r_ecx;
    /* 0064e0e2: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0064e0e6: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e0eb: jl 0x64e1bb */ if ((fS!=fO)) goto L_0064e1bb;
L_0064e0f1:; BB(0x0064e0f1);
    /* 0064e0f1: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0064e0f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e0f9: je 0x64e1bb */ if (fZ) goto L_0064e1bb;
L_0064e0ff:; BB(0x0064e0ff);
    /* 0064e0ff: je 0x64e1c8 */ if (fZ) goto L_0064e1c8;
L_0064e105:; BB(0x0064e105);
    /* 0064e105: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0064e109: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064e10b: jl 0x64e13c */ if ((fS!=fO)) goto L_0064e13c;
L_0064e10d:; BB(0x0064e10d);
    /* 0064e10d: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e113: jg 0x64e13c */ if ((!fZ&&fS==fO)) goto L_0064e13c;
L_0064e115:; BB(0x0064e115);
    /* 0064e115: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0064e11b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0064e11f: movzx eax, word ptr [ecx + edx*4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*4));
    /* 0064e123: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0064e127: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0064e12b: movzx edx, word ptr [ecx + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_ecx+r_edx*4+0x2u));
    /* 0064e130: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0064e135: mov edx, 1 */ r_edx = 0x1u;
    /* 0064e13a: jmp 0x64e13e */ goto L_0064e13e;
L_0064e13c:; BB(0x0064e13c);
    /* 0064e13c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0064e13e:; BB(0x0064e13e);
    /* 0064e13e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e140: je 0x64e1bb */ if (fZ) goto L_0064e1bb;
L_0064e142:; BB(0x0064e142);
    /* 0064e142: mov edx, 1 */ r_edx = 0x1u;
    /* 0064e147: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0064e14b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e14d: je 0x64e176 */ if (fZ) goto L_0064e176;
L_0064e14f:; BB(0x0064e14f);
    /* 0064e14f: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0064e153: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064e155: jl 0x64e176 */ if ((fS!=fO)) goto L_0064e176;
L_0064e157:; BB(0x0064e157);
    /* 0064e157: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e15d: jg 0x64e176 */ if ((!fZ&&fS==fO)) goto L_0064e176;
L_0064e15f:; BB(0x0064e15f);
    /* 0064e15f: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 0064e164: movzx ecx, word ptr [esp] */ r_ecx = (u32)R16((u32)(r_esp));
    /* 0064e168: mov word ptr [eax + edx*4], cx */ W16((u32)(r_eax+r_edx*4), (u16)r_ecx);
    /* 0064e16c: movzx ecx, word ptr [esp + 2] */ r_ecx = (u32)R16((u32)(r_esp+0x2u));
    /* 0064e171: mov word ptr [eax + edx*4 + 2], cx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ecx);
L_0064e176:; BB(0x0064e176);
    /* 0064e176: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0064e179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e17a: mov ecx, edi */ r_ecx = r_edi;
    /* 0064e17c: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x64e181u); f_007b5038();
    /* 0064e181: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 0064e187: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 0064e18d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0064e191: mov edi, dword ptr [edi + 0x84] */ r_edi = R32((u32)(r_edi+0x84u));
    /* 0064e197: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0064e19c: mov byte ptr [esp + 4], 0x67 */ W8((u32)(r_esp+0x4u), 0x67u);
    /* 0064e1a1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0064e1a5: mov byte ptr [esp + 5], 4 */ W8((u32)(r_esp+0x5u), 0x4u);
    /* 0064e1aa: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0064e1ae: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0064e1b2: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0064e1b6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x64e1bbu); f_008003e0();
L_0064e1bb:; BB(0x0064e1bb);
    /* 0064e1bb: fld dword ptr [0x9367e4] */ FPUSH(R_F32((u32)(0x9367e4u)));
    /* 0064e1c1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064e1c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064e1c5: ret 8 */ FN_RET(0x0064e0dc); r_esp += 12; return;
L_0064e1c8:; BB(0x0064e1c8);
    /* 0064e1c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064e1ca: jmp 0x64e13e */ goto L_0064e13e;
}

void f_0064e1d0(void) /* sub_64E1D0 */
{
    FN_ENTER(0x0064e1d0);
    /* 0064e1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e1d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e1d5: push 0x8e64ea */ { u32 v = 0x8e64eau; r_esp -= 4; W32(r_esp, v); }
    /* 0064e1da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064e1e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e1e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064e1e8: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e1ee: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064e1f1: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064e1f4: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064e1f7: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064e1fa: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0064e201: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064e204: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064e207: je 0x64e44f */ if (fZ) goto L_0064e44f;
L_0064e20d:; BB(0x0064e20d);
    /* 0064e20d: mov eax, dword ptr [0xa8f60c] */ r_eax = R32((u32)(0xa8f60cu));
    /* 0064e212: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e214: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064e217: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064e21a: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064e21d: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064e220: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0064e226: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064e229: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0064e22f: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 0064e235: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 0064e23b: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 0064e241: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0064e247: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064e24a: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0064e250: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064e253: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0064e259: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064e25c: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0064e262: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064e265: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0064e26b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064e26e: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0064e274: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064e277: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0064e27d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064e280: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0064e286: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064e289: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0064e28f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064e292: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0064e298: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064e29b: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0064e2a1: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064e2a4: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0064e2aa: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064e2ad: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064e2b0: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0064e2b3: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0064e2b6: mov eax, dword ptr [0xa8f608] */ r_eax = R32((u32)(0xa8f608u));
    /* 0064e2bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e2bd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064e2c0: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064e2c3: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064e2c6: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064e2c9: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0064e2cc: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064e2cf: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0064e2d2: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0064e2d5: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0064e2d8: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064e2db: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0064e2de: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064e2e1: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0064e2e4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064e2e7: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0064e2ea: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064e2ed: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0064e2f0: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064e2f3: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0064e2f6: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064e2f9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0064e2fc: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064e2ff: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0064e302: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064e305: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0064e308: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064e30b: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0064e30e: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064e311: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0064e314: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064e317: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064e31a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064e31d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0064e320: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064e323: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064e326: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0064e329: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064e32c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e32f: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064e335: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e337: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0064e33a: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0064e340: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0064e343: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 0064e349: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0064e34c: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 0064e352: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0064e358: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64e35du); f_005b8610();
    /* 0064e35d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e360: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064e366: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0064e369: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0064e36c: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0064e36f: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0064e375: mov eax, dword ptr [0xa8f600] */ r_eax = R32((u32)(0xa8f600u));
    /* 0064e37a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0064e37d: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0064e380: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064e383: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0064e386: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0064e389: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e38b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64e390u); f_005b8610();
    /* 0064e390: mov edx, ebx */ r_edx = r_ebx;
    /* 0064e392: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0064e395: mov eax, dword ptr [0xa8f600] */ r_eax = R32((u32)(0xa8f600u));
    /* 0064e39a: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0064e39d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0064e3a0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3a2: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3a5: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64e3aau); f_0050b7a4();
    /* 0064e3aa: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3ac: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64e3b4u); f_0050b7a4();
    /* 0064e3b4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064e3bb: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3c0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64e3c5u); f_005caba4();
    /* 0064e3c5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064e3c8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064e3cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e3cd: je 0x64e3f9 */ if (fZ) goto L_0064e3f9;
L_0064e3cf:; BB(0x0064e3cf);
    /* 0064e3cf: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0064e3d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e3dd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064e3e0: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 0064e3e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3e7: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e3ed: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64e3f2u); f_006441f4();
    /* 0064e3f2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064e3f9:; BB(0x0064e3f9);
    /* 0064e3f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064e400: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064e407: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e40c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64e411u); f_005caba4();
    /* 0064e411: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064e412: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064e415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e417: je 0x64e440 */ if (fZ) goto L_0064e440;
L_0064e419:; BB(0x0064e419);
    /* 0064e419: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064e420: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064e427: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064e42a: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0064e42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e42e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e434: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64e439u); f_006441f4();
    /* 0064e439: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064e440:; BB(0x0064e440);
    /* 0064e440: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064e447: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e44a: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x64e44fu); f_0064de10();
L_0064e44f:; BB(0x0064e44f);
    /* 0064e44f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e452: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064e455: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e458: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e45b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064e462: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e464: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e465: ret  */ FN_RET(0x0064e1d0); r_esp += 4; return;
}

void f_0064e468(void)
{
    FN_ENTER(0x0064e468);
    /* 0064e468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e469: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e46b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e46d: push 0x8e6510 */ { u32 v = 0x8e6510u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064e478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064e480: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064e486: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064e489: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064e48c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064e48f: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e494: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064e49b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64e4a0u); f_005caba4();
    /* 0064e4a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064e4a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064e4a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e4a6: je 0x64e4df */ if (fZ) goto L_0064e4df;
L_0064e4a8:; BB(0x0064e4a8);
    /* 0064e4a8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064e4af: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e4b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e4b9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e4bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e4c2: call 0x64e4e4 */ r_esp -= 4; W32(r_esp, 0x64e4c7u); f_0064e4e4();
    /* 0064e4c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e4ca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064e4d1:; BB(0x0064e4d1);
    /* 0064e4d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e4d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064e4db: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e4dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e4de: ret  */ FN_RET(0x0064e468); r_esp += 4; return;
L_0064e4df:; BB(0x0064e4df);
    /* 0064e4df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064e4e1: jmp 0x64e4d1 */ goto L_0064e4d1;
}

void f_0064e4e4(void) /* sub_64E4E4 */
{
    FN_ENTER(0x0064e4e4);
    /* 0064e4e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e4e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e4e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e4e9: push 0x8e652c */ { u32 v = 0x8e652cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e4ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064e4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e4f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064e4fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e4ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064e502: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064e505: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064e508: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064e50b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e50e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e511: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064e514: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x64e519u); f_0064df84();
    /* 0064e519: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e520: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e523: mov dword ptr [edx], 0xb30bc0 */ W32((u32)(r_edx), 0xb30bc0u);
    /* 0064e529: mov eax, dword ptr [0x9c779c] */ r_eax = R32((u32)(0x9c779cu));
    /* 0064e52e: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064e534: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e536: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0064e539: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64e53eu); f_005b8610();
    /* 0064e53e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e541: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e543: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0064e546: push 0x9c77ac */ { u32 v = 0x9c77acu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e54b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64e550u); f_007b9a88();
    /* 0064e550: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e553: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x64e558u); f_007b4f54();
    /* 0064e558: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e55b: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0064e55e: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0064e561: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0064e564: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0064e567: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e56a: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 0064e56d: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0064e570: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064e573: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0064e576: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 0064e579: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0064e57c: mov dword ptr [edx + 0x300], esi */ W32((u32)(r_edx+0x300u), r_esi);
    /* 0064e582: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e585: mov dword ptr [edx + 0x304], ebx */ W32((u32)(r_edx+0x304u), r_ebx);
    /* 0064e58b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e58e: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 0064e594: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e597: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 0064e59a: fadd dword ptr [0x9c77b0] */ ST(0) = ST(0) + R_F32((u32)(0x9c77b0u));
    /* 0064e5a0: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 0064e5a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e5a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064e5ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e5af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e5b0: ret 8 */ FN_RET(0x0064e4e4); r_esp += 12; return;
}

void f_0064e5b4(void) /* sub_64E5B4 */
{
    FN_ENTER(0x0064e5b4);
    /* 0064e5b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064e5b5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e5b8: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0064e5bc: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e5c1: jl 0x64e655 */ if ((fS!=fO)) goto L_0064e655;
L_0064e5c7:; BB(0x0064e5c7);
    /* 0064e5c7: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 0064e5cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e5cf: je 0x64e655 */ if (fZ) goto L_0064e655;
L_0064e5d5:; BB(0x0064e5d5);
    /* 0064e5d5: je 0x64e662 */ if (fZ) goto L_0064e662;
L_0064e5db:; BB(0x0064e5db);
    /* 0064e5db: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0064e5df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064e5e1: jl 0x64e612 */ if ((fS!=fO)) goto L_0064e612;
L_0064e5e3:; BB(0x0064e5e3);
    /* 0064e5e3: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e5e9: jg 0x64e612 */ if ((!fZ&&fS==fO)) goto L_0064e612;
L_0064e5eb:; BB(0x0064e5eb);
    /* 0064e5eb: mov esi, dword ptr [0xab02bc] */ r_esi = R32((u32)(0xab02bcu));
    /* 0064e5f1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0064e5f5: movzx eax, word ptr [esi + edx*4] */ r_eax = (u32)R16((u32)(r_esi+r_edx*4));
    /* 0064e5f9: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0064e5fd: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0064e601: movzx edx, word ptr [esi + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_esi+r_edx*4+0x2u));
    /* 0064e606: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0064e60b: mov edx, 1 */ r_edx = 0x1u;
    /* 0064e610: jmp 0x64e614 */ goto L_0064e614;
L_0064e612:; BB(0x0064e612);
    /* 0064e612: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0064e614:; BB(0x0064e614);
    /* 0064e614: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e616: je 0x64e655 */ if (fZ) goto L_0064e655;
L_0064e618:; BB(0x0064e618);
    /* 0064e618: mov edx, 1 */ r_edx = 0x1u;
    /* 0064e61d: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0064e621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e623: je 0x64e64c */ if (fZ) goto L_0064e64c;
L_0064e625:; BB(0x0064e625);
    /* 0064e625: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0064e629: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064e62b: jl 0x64e64c */ if ((fS!=fO)) goto L_0064e64c;
L_0064e62d:; BB(0x0064e62d);
    /* 0064e62d: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e633: jg 0x64e64c */ if ((!fZ&&fS==fO)) goto L_0064e64c;
L_0064e635:; BB(0x0064e635);
    /* 0064e635: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 0064e63a: movzx esi, word ptr [esp] */ r_esi = (u32)R16((u32)(r_esp));
    /* 0064e63e: mov word ptr [eax + edx*4], si */ W16((u32)(r_eax+r_edx*4), (u16)r_esi);
    /* 0064e642: movzx esi, word ptr [esp + 2] */ r_esi = (u32)R16((u32)(r_esp+0x2u));
    /* 0064e647: mov word ptr [eax + edx*4 + 2], si */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_esi);
L_0064e64c:; BB(0x0064e64c);
    /* 0064e64c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0064e64f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e650: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x64e655u); f_007b5038();
L_0064e655:; BB(0x0064e655);
    /* 0064e655: fld dword ptr [0x9367e0] */ FPUSH(R_F32((u32)(0x9367e0u)));
    /* 0064e65b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064e65e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064e65f: ret 8 */ FN_RET(0x0064e5b4); r_esp += 12; return;
L_0064e662:; BB(0x0064e662);
    /* 0064e662: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064e664: jmp 0x64e614 */ goto L_0064e614;
}

void f_0064e668(void) /* sub_64E668 */
{
    FN_ENTER(0x0064e668);
    /* 0064e668: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e669: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e66b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e66d: push 0x8e656e */ { u32 v = 0x8e656eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e672: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064e678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e679: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064e680: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e686: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064e689: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064e68c: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064e68f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064e692: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0064e699: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064e69c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064e69f: je 0x64e8e7 */ if (fZ) goto L_0064e8e7;
L_0064e6a5:; BB(0x0064e6a5);
    /* 0064e6a5: mov eax, dword ptr [0xa8f60c] */ r_eax = R32((u32)(0xa8f60cu));
    /* 0064e6aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e6ac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064e6af: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064e6b2: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064e6b5: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064e6b8: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0064e6be: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064e6c1: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0064e6c7: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 0064e6cd: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 0064e6d3: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 0064e6d9: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0064e6df: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064e6e2: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0064e6e8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064e6eb: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0064e6f1: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064e6f4: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0064e6fa: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064e6fd: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0064e703: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064e706: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0064e70c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064e70f: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0064e715: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064e718: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0064e71e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064e721: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0064e727: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064e72a: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0064e730: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064e733: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0064e739: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064e73c: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0064e742: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064e745: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064e748: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0064e74b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0064e74e: mov eax, dword ptr [0xa8f608] */ r_eax = R32((u32)(0xa8f608u));
    /* 0064e753: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e755: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064e758: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064e75b: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064e75e: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064e761: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0064e764: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064e767: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0064e76a: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0064e76d: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0064e770: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064e773: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0064e776: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064e779: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0064e77c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064e77f: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0064e782: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064e785: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0064e788: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064e78b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0064e78e: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064e791: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0064e794: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064e797: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0064e79a: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064e79d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0064e7a0: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064e7a3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0064e7a6: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064e7a9: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0064e7ac: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064e7af: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064e7b2: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064e7b5: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0064e7b8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064e7bb: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064e7be: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0064e7c1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064e7c4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e7c7: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064e7cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e7cf: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0064e7d2: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0064e7d8: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0064e7db: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 0064e7e1: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0064e7e4: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 0064e7ea: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0064e7f0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64e7f5u); f_005b8610();
    /* 0064e7f5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e7f8: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064e7fe: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0064e801: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0064e804: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0064e807: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0064e80d: mov eax, dword ptr [0xa8f600] */ r_eax = R32((u32)(0xa8f600u));
    /* 0064e812: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0064e815: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0064e818: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064e81b: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0064e81e: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0064e821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e823: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64e828u); f_005b8610();
    /* 0064e828: mov edx, ebx */ r_edx = r_ebx;
    /* 0064e82a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0064e82d: mov eax, dword ptr [0xa8f600] */ r_eax = R32((u32)(0xa8f600u));
    /* 0064e832: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0064e835: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0064e838: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e83a: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e83c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e83d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64e842u); f_0050b7a4();
    /* 0064e842: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e844: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e846: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e847: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64e84cu); f_0050b7a4();
    /* 0064e84c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064e853: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e858: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64e85du); f_005caba4();
    /* 0064e85d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064e860: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064e863: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e865: je 0x64e891 */ if (fZ) goto L_0064e891;
L_0064e867:; BB(0x0064e867);
    /* 0064e867: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0064e86e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e875: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064e878: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 0064e87e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e87f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e885: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64e88au); f_006441f4();
    /* 0064e88a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064e891:; BB(0x0064e891);
    /* 0064e891: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064e898: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064e89f: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e8a4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64e8a9u); f_005caba4();
    /* 0064e8a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064e8aa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064e8ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e8af: je 0x64e8d8 */ if (fZ) goto L_0064e8d8;
L_0064e8b1:; BB(0x0064e8b1);
    /* 0064e8b1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064e8b8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064e8bf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064e8c2: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0064e8c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e8c6: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e8cc: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64e8d1u); f_006441f4();
    /* 0064e8d1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064e8d8:; BB(0x0064e8d8);
    /* 0064e8d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064e8df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e8e2: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x64e8e7u); f_0064de10();
L_0064e8e7:; BB(0x0064e8e7);
    /* 0064e8e7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e8ea: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064e8ed: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e8f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e8f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064e8fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e8fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e8fd: ret  */ FN_RET(0x0064e668); r_esp += 4; return;
}

void f_0064e900(void)
{
    FN_ENTER(0x0064e900);
    /* 0064e900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e901: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e905: push 0x8e6594 */ { u32 v = 0x8e6594u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e90a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064e910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e911: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064e918: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e91b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064e91e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064e921: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064e924: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064e927: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e92c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064e933: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64e938u); f_005caba4();
    /* 0064e938: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064e939: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064e93c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e93e: je 0x64e977 */ if (fZ) goto L_0064e977;
L_0064e940:; BB(0x0064e940);
    /* 0064e940: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064e947: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e94e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e951: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e957: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e95a: call 0x64e97c */ r_esp -= 4; W32(r_esp, 0x64e95fu); f_0064e97c();
    /* 0064e95f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e962: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064e969:; BB(0x0064e969);
    /* 0064e969: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e96c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064e973: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e975: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e976: ret  */ FN_RET(0x0064e900); r_esp += 4; return;
L_0064e977:; BB(0x0064e977);
    /* 0064e977: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064e979: jmp 0x64e969 */ goto L_0064e969;
}

void f_0064e97c(void) /* sub_64E97C */
{
    FN_ENTER(0x0064e97c);
    /* 0064e97c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e97d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e97f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e981: push 0x8e65b0 */ { u32 v = 0x8e65b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e986: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064e98c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e98d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064e994: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e997: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064e99a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064e99d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064e9a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064e9a3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e9a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064e9a9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064e9ac: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x64e9b1u); f_0064df84();
    /* 0064e9b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e9b8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e9bb: mov dword ptr [edx], 0xb30d20 */ W32((u32)(r_edx), 0xb30d20u);
    /* 0064e9c1: mov eax, dword ptr [0x9c77a0] */ r_eax = R32((u32)(0x9c77a0u));
    /* 0064e9c6: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064e9cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e9ce: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0064e9d1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64e9d6u); f_005b8610();
    /* 0064e9d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e9d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e9db: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0064e9de: push 0x9c77ac */ { u32 v = 0x9c77acu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e9e3: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64e9e8u); f_007b9a88();
    /* 0064e9e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e9eb: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x64e9f0u); f_007b4f54();
    /* 0064e9f0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e9f3: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0064e9f6: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0064e9f9: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0064e9fc: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0064e9ff: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ea02: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 0064ea05: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0064ea08: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064ea0b: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0064ea0e: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 0064ea11: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0064ea14: mov dword ptr [edx + 0x300], esi */ W32((u32)(r_edx+0x300u), r_esi);
    /* 0064ea1a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ea1d: mov dword ptr [edx + 0x304], ebx */ W32((u32)(r_edx+0x304u), r_ebx);
    /* 0064ea23: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ea26: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 0064ea2c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ea2f: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 0064ea32: fadd dword ptr [0x9c77b0] */ ST(0) = ST(0) + R_F32((u32)(0x9c77b0u));
    /* 0064ea38: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 0064ea3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ea3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ea45: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ea47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ea48: ret 8 */ FN_RET(0x0064e97c); r_esp += 12; return;
}

void f_0064ea4c(void) /* sub_64EA4C */
{
    FN_ENTER(0x0064ea4c);
    /* 0064ea4c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ea4f: mov eax, ecx */ r_eax = r_ecx;
    /* 0064ea51: mov edx, dword ptr [0xa8f5dc] */ r_edx = R32((u32)(0xa8f5dcu));
    /* 0064ea57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ea59: je 0x64ea74 */ if (fZ) goto L_0064ea74;
L_0064ea5b:; BB(0x0064ea5b);
    /* 0064ea5b: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0064ea62: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ea64: jne 0x64ea74 */ if (!fZ) goto L_0064ea74;
L_0064ea66:; BB(0x0064ea66);
    /* 0064ea66: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0064ea69: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 0064ea6c: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0064ea6f: call 0x64ea84 */ r_esp -= 4; W32(r_esp, 0x64ea74u); f_0064ea84();
L_0064ea74:; BB(0x0064ea74);
    /* 0064ea74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064ea77: ret  */ FN_RET(0x0064ea4c); r_esp += 4; return;
}

void f_0064ea84(void) /* sub_64EA84 */
{
    FN_ENTER(0x0064ea84);
    /* 0064ea84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ea85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ea86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ea87: mov edi, ecx */ r_edi = r_ecx;
    /* 0064ea89: mov esi, edx */ r_esi = r_edx;
    /* 0064ea8b: mov ebp, eax */ r_ebp = r_eax;
    /* 0064ea8d: mov ecx, dword ptr [0xa8f5d8] */ r_ecx = R32((u32)(0xa8f5d8u));
    /* 0064ea93: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64ea98u); f_00829cc8();
    /* 0064ea98: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64ea9du); f_0082d7b0();
    /* 0064ea9d: mov ecx, esi */ r_ecx = r_esi;
    /* 0064ea9f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64eaa4u); f_0082d838();
    /* 0064eaa4: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0064eaa7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064eaa9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64eaaeu); f_0082d8bc();
    /* 0064eaae: mov edx, dword ptr [0xa8f5d4] */ r_edx = R32((u32)(0xa8f5d4u));
    /* 0064eab4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eab6: jne 0x64eb04 */ if (!fZ) goto L_0064eb04;
L_0064eab8:; BB(0x0064eab8);
    /* 0064eab8: mov edx, dword ptr [0xa8f5c0] */ r_edx = R32((u32)(0xa8f5c0u));
    /* 0064eabe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eac0: je 0x64eaca */ if (fZ) goto L_0064eaca;
L_0064eac2:; BB(0x0064eac2);
    /* 0064eac2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064eac5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64eac7u); call_ind(t); }
    /* 0064eac7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064eaca:; BB(0x0064eaca);
    /* 0064eaca: push dword ptr [0xa8f5c4] */ { u32 v = R32((u32)(0xa8f5c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ead0: mov dword ptr [0xa8f5d0], 0 */ W32((u32)(0xa8f5d0u), 0x0u);
    /* 0064eada: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x64eadfu); f_0082e8e4();
    /* 0064eadf: mov esi, eax */ r_esi = r_eax;
    /* 0064eae1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064eae2: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x64eae7u); f_0082e760();
    /* 0064eae7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064eae8: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x64eaedu); f_0082e8e4();
    /* 0064eaed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064eaf0: mov edx, dword ptr [0xa8f5c0] */ r_edx = R32((u32)(0xa8f5c0u));
    /* 0064eaf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eaf8: je 0x64eb0b */ if (fZ) goto L_0064eb0b;
L_0064eafa:; BB(0x0064eafa);
    /* 0064eafa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eafc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064eafd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64eaffu); call_ind(t); }
    /* 0064eaff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064eb02: jmp 0x64eb0b */ goto L_0064eb0b;
L_0064eb04:; BB(0x0064eb04);
    /* 0064eb04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb05: call 0x805cc4 */ r_esp -= 4; W32(r_esp, 0x64eb0au); f_00805cc4();
    /* 0064eb0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0064eb0b:; BB(0x0064eb0b);
    /* 0064eb0b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64eb10u); f_0082da80();
    /* 0064eb10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064eb11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064eb12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064eb13: ret  */ FN_RET(0x0064ea84); r_esp += 4; return;
}

void f_0064eb14(void) /* sub_64EB14 */
{
    FN_ENTER(0x0064eb14);
    /* 0064eb14: push dword ptr [ecx + 0x368] */ { u32 v = R32((u32)(r_ecx+0x368u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064eb1a: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 0064eb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb1e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064eb22: call 0x5c9874 */ r_esp -= 4; W32(r_esp, 0x64eb27u); f_005c9874();
    /* 0064eb27: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064eb2a: ret 4 */ FN_RET(0x0064eb14); r_esp += 8; return;
}

void f_0064eb30(void) /* sub_64EB30 */
{
    FN_ENTER(0x0064eb30);
    /* 0064eb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb31: mov ebp, esp */ r_ebp = r_esp;
    /* 0064eb33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb35: push 0x8e65f2 */ { u32 v = 0x8e65f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064eb40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064eb48: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064eb4e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064eb51: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064eb54: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064eb57: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064eb5a: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0064eb61: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064eb64: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064eb67: je 0x64edaf */ if (fZ) goto L_0064edaf;
L_0064eb6d:; BB(0x0064eb6d);
    /* 0064eb6d: mov eax, dword ptr [0xa8f5e4] */ r_eax = R32((u32)(0xa8f5e4u));
    /* 0064eb72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064eb74: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064eb77: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064eb7a: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064eb7d: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064eb80: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0064eb86: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064eb89: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0064eb8f: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 0064eb95: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 0064eb9b: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 0064eba1: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0064eba7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064ebaa: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0064ebb0: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064ebb3: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0064ebb9: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064ebbc: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0064ebc2: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064ebc5: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0064ebcb: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064ebce: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0064ebd4: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064ebd7: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0064ebdd: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064ebe0: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0064ebe6: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064ebe9: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0064ebef: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064ebf2: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0064ebf8: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064ebfb: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0064ec01: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064ec04: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0064ec0a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064ec0d: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064ec10: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0064ec13: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0064ec16: mov eax, dword ptr [0xa8f5e0] */ r_eax = R32((u32)(0xa8f5e0u));
    /* 0064ec1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ec1d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064ec20: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064ec23: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064ec26: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064ec29: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0064ec2c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064ec2f: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0064ec32: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0064ec35: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0064ec38: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064ec3b: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0064ec3e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064ec41: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0064ec44: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064ec47: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0064ec4a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064ec4d: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0064ec50: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064ec53: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0064ec56: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064ec59: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0064ec5c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064ec5f: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0064ec62: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064ec65: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0064ec68: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064ec6b: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0064ec6e: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064ec71: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0064ec74: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064ec77: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064ec7a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064ec7d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0064ec80: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064ec83: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064ec86: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0064ec89: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064ec8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ec8f: mov ecx, dword ptr [0xa8f5dc] */ r_ecx = R32((u32)(0xa8f5dcu));
    /* 0064ec95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec97: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0064ec9a: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0064eca0: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0064eca3: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 0064eca9: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0064ecac: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 0064ecb2: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0064ecb8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64ecbdu); f_005b8610();
    /* 0064ecbd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ecc0: mov ecx, dword ptr [0xa8f5dc] */ r_ecx = R32((u32)(0xa8f5dcu));
    /* 0064ecc6: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0064ecc9: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0064eccc: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0064eccf: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0064ecd5: mov eax, dword ptr [0xa8f5d8] */ r_eax = R32((u32)(0xa8f5d8u));
    /* 0064ecda: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0064ecdd: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0064ece0: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064ece3: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0064ece6: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0064ece9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eceb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64ecf0u); f_005b8610();
    /* 0064ecf0: mov edx, ebx */ r_edx = r_ebx;
    /* 0064ecf2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0064ecf5: mov eax, dword ptr [0xa8f5d8] */ r_eax = R32((u32)(0xa8f5d8u));
    /* 0064ecfa: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0064ecfd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0064ed00: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed02: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed05: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64ed0au); f_0050b7a4();
    /* 0064ed0a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed0c: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed0f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64ed14u); f_0050b7a4();
    /* 0064ed14: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064ed1b: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed20: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64ed25u); f_005caba4();
    /* 0064ed25: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ed28: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064ed2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ed2d: je 0x64ed59 */ if (fZ) goto L_0064ed59;
L_0064ed2f:; BB(0x0064ed2f);
    /* 0064ed2f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0064ed36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064ed3d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ed40: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 0064ed46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed47: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ed4d: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64ed52u); f_006441f4();
    /* 0064ed52: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064ed59:; BB(0x0064ed59);
    /* 0064ed59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ed60: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064ed67: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed6c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64ed71u); f_005caba4();
    /* 0064ed71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ed72: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064ed75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ed77: je 0x64eda0 */ if (fZ) goto L_0064eda0;
L_0064ed79:; BB(0x0064ed79);
    /* 0064ed79: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064ed80: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064ed87: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ed8a: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0064ed8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed8e: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ed94: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64ed99u); f_006441f4();
    /* 0064ed99: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064eda0:; BB(0x0064eda0);
    /* 0064eda0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064eda7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064edaa: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x64edafu); f_0064de10();
L_0064edaf:; BB(0x0064edaf);
    /* 0064edaf: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064edb2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064edb5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064edb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064edbb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064edc2: mov esp, ebp */ r_esp = r_ebp;
    /* 0064edc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064edc5: ret  */ FN_RET(0x0064eb30); r_esp += 4; return;
}

void f_0064edc8(void)
{
    FN_ENTER(0x0064edc8);
    /* 0064edc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064edc9: mov ebp, esp */ r_ebp = r_esp;
    /* 0064edcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064edcd: push 0x8e6618 */ { u32 v = 0x8e6618u; r_esp -= 4; W32(r_esp, v); }
    /* 0064edd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064edd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064edd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064ede0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ede3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064ede6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064ede9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064edec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064edef: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 0064edf4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064edfb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64ee00u); f_005caba4();
    /* 0064ee00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ee01: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064ee04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ee06: je 0x64ee3f */ if (fZ) goto L_0064ee3f;
L_0064ee08:; BB(0x0064ee08);
    /* 0064ee08: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064ee0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064ee16: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ee19: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ee1f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ee22: call 0x64ee44 */ r_esp -= 4; W32(r_esp, 0x64ee27u); f_0064ee44();
    /* 0064ee27: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ee2a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064ee31:; BB(0x0064ee31);
    /* 0064ee31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ee34: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ee3b: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ee3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ee3e: ret  */ FN_RET(0x0064edc8); r_esp += 4; return;
L_0064ee3f:; BB(0x0064ee3f);
    /* 0064ee3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064ee41: jmp 0x64ee31 */ goto L_0064ee31;
}

void f_0064ee44(void) /* sub_64EE44 */
{
    FN_ENTER(0x0064ee44);
    /* 0064ee44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee45: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ee47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee49: push 0x8e6634 */ { u32 v = 0x8e6634u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ee54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064ee5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ee5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064ee62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064ee65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064ee68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064ee6b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ee6e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ee71: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064ee74: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x64ee79u); f_0064df84();
    /* 0064ee79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064ee80: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ee83: mov dword ptr [ebx], 0xb30e80 */ W32((u32)(r_ebx), 0xb30e80u);
    /* 0064ee89: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064ee8b: mov eax, dword ptr [0x9c7794] */ r_eax = R32((u32)(0x9c7794u));
    /* 0064ee90: mov ecx, dword ptr [0xa8f5dc] */ r_ecx = R32((u32)(0xa8f5dcu));
    /* 0064ee96: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee98: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0064ee9b: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
    /* 0064eea2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64eea7u); f_005b8610();
    /* 0064eea7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064eeaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eeac: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0064eeaf: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0064eeb2: or eax, 0x60000000 */ {  u32 a = r_eax; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064eeb7: push 0x9c77ac */ { u32 v = 0x9c77acu; r_esp -= 4; W32(r_esp, v); }
    /* 0064eebc: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0064eebf: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64eec4u); f_007b9a88();
    /* 0064eec4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064eec7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x64eeccu); f_007b4f54();
    /* 0064eecc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064eecf: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0064eed2: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0064eed5: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0064eed8: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0064eedb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064eede: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 0064eee1: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0064eee4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064eee7: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0064eeea: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 0064eeed: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0064eef0: mov dword ptr [edx + 0x300], esi */ W32((u32)(r_edx+0x300u), r_esi);
    /* 0064eef6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064eef9: mov dword ptr [edx + 0x304], ebx */ W32((u32)(r_edx+0x304u), r_ebx);
    /* 0064eeff: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ef02: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 0064ef08: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ef0b: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 0064ef0e: fadd dword ptr [0x9c77b0] */ ST(0) = ST(0) + R_F32((u32)(0x9c77b0u));
    /* 0064ef14: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 0064ef17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ef1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ef21: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ef23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ef24: ret 8 */ FN_RET(0x0064ee44); r_esp += 12; return;
}

void f_0064ef28(void) /* sub_64EF28 */
{
    FN_ENTER(0x0064ef28);
    /* 0064ef28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef29: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ef2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef2d: push 0x8e6650 */ { u32 v = 0x8e6650u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ef38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064ef40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ef43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064ef46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064ef49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064ef4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064ef4f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ef52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ef55: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064ef58: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x64ef5du); f_0064df84();
    /* 0064ef5d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064ef64: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ef67: mov dword ptr [edx], 0xb30900 */ W32((u32)(r_edx), 0xb30900u);
    /* 0064ef6d: mov eax, dword ptr [0x9c77a8] */ r_eax = R32((u32)(0x9c77a8u));
    /* 0064ef72: mov ecx, dword ptr [0xa8f5dc] */ r_ecx = R32((u32)(0xa8f5dcu));
    /* 0064ef78: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef7a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0064ef7d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64ef82u); f_005b8610();
    /* 0064ef82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ef85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef87: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0064ef8a: push 0x9c77ac */ { u32 v = 0x9c77acu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef8f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64ef94u); f_007b9a88();
    /* 0064ef94: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ef97: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x64ef9cu); f_007b4f54();
    /* 0064ef9c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ef9f: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0064efa2: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0064efa5: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0064efa8: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0064efab: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064efae: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 0064efb1: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0064efb4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064efb7: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0064efba: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 0064efbd: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0064efc0: mov dword ptr [edx + 0x300], esi */ W32((u32)(r_edx+0x300u), r_esi);
    /* 0064efc6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064efc9: mov dword ptr [edx + 0x304], ebx */ W32((u32)(r_edx+0x304u), r_ebx);
    /* 0064efcf: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064efd2: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 0064efd8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064efdb: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 0064efde: fadd dword ptr [0x9c77b0] */ ST(0) = ST(0) + R_F32((u32)(0x9c77b0u));
    /* 0064efe4: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 0064efe7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064efea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064eff1: mov esp, ebp */ r_esp = r_ebp;
    /* 0064eff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064eff4: ret 8 */ FN_RET(0x0064ef28); r_esp += 12; return;
}

void f_0064eff8(void) /* sub_64EFF8 */
{
    FN_ENTER(0x0064eff8);
    /* 0064eff8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064effb: mov eax, ecx */ r_eax = r_ecx;
    /* 0064effd: mov edx, dword ptr [0xa8f5dc] */ r_edx = R32((u32)(0xa8f5dcu));
    /* 0064f003: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f005: je 0x64f020 */ if (fZ) goto L_0064f020;
L_0064f007:; BB(0x0064f007);
    /* 0064f007: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0064f00e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f010: jne 0x64f020 */ if (!fZ) goto L_0064f020;
L_0064f012:; BB(0x0064f012);
    /* 0064f012: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0064f015: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 0064f018: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0064f01b: call 0x64ea84 */ r_esp -= 4; W32(r_esp, 0x64f020u); f_0064ea84();
L_0064f020:; BB(0x0064f020);
    /* 0064f020: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064f023: ret  */ FN_RET(0x0064eff8); r_esp += 4; return;
}

