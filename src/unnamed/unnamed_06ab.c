#include "protos.h"

void f_006ab098(void) /* sub_6AB098 */
{
    FN_ENTER(0x006ab098);
    /* 006ab098: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006ab09c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ab0a0: mov eax, 0xff */ r_eax = 0xffu;
    /* 006ab0a5: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 006ab0a8: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 006ab0ab: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 006ab0ae: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 006ab0b1: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 006ab0b4: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 006ab0b7: mov byte ptr [ecx + 7], al */ W8((u32)(r_ecx+0x7u), (u8)r_eax);
    /* 006ab0ba: mov byte ptr [ecx + 8], al */ W8((u32)(r_ecx+0x8u), (u8)r_eax);
    /* 006ab0bd: mov byte ptr [ecx + 9], al */ W8((u32)(r_ecx+0x9u), (u8)r_eax);
    /* 006ab0c0: mov byte ptr [ecx + 0xa], al */ W8((u32)(r_ecx+0xau), (u8)r_eax);
    /* 006ab0c3: mov byte ptr [ecx + 0xb], al */ W8((u32)(r_ecx+0xbu), (u8)r_eax);
    /* 006ab0c6: mov byte ptr [ecx + 0xc], al */ W8((u32)(r_ecx+0xcu), (u8)r_eax);
    /* 006ab0c9: mov byte ptr [ecx + 0xd], al */ W8((u32)(r_ecx+0xdu), (u8)r_eax);
    /* 006ab0cc: mov byte ptr [ecx + 0xe], al */ W8((u32)(r_ecx+0xeu), (u8)r_eax);
    /* 006ab0cf: mov byte ptr [ecx + 0xf], al */ W8((u32)(r_ecx+0xfu), (u8)r_eax);
    /* 006ab0d2: mov byte ptr [ecx + 0x10], al */ W8((u32)(r_ecx+0x10u), (u8)r_eax);
    /* 006ab0d5: mov byte ptr [ecx + 0x11], al */ W8((u32)(r_ecx+0x11u), (u8)r_eax);
    /* 006ab0d8: mov byte ptr [ecx + 0x12], al */ W8((u32)(r_ecx+0x12u), (u8)r_eax);
    /* 006ab0db: mov byte ptr [ecx + 0x13], al */ W8((u32)(r_ecx+0x13u), (u8)r_eax);
    /* 006ab0de: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab0e4: je 0x6ab0ea */ if (fZ) goto L_006ab0ea;
L_006ab0e6:; BB(0x006ab0e6);
    /* 006ab0e6: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 006ab0e9: ret  */ FN_RET(0x006ab098); r_esp += 4; return;
L_006ab0ea:; BB(0x006ab0ea);
    /* 006ab0ea: mov byte ptr [ecx], 0xff */ W8((u32)(r_ecx), 0xffu);
    /* 006ab0ed: ret  */ FN_RET(0x006ab098); r_esp += 4; return;
}

void f_006ab0f0(void) /* sub_6AB0F0 */
{
    FN_ENTER(0x006ab0f0);
    /* 006ab0f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab0f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab0f2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006ab0f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ab0f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab0fa: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006ab0fe: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006ab102: jle 0x6ab143 */ if ((fZ||fS!=fO)) goto L_006ab143;
L_006ab104:; BB(0x006ab104);
    /* 006ab104: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006ab108: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_006ab10b:; BB(0x006ab10b);
    /* 006ab10b: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 006ab10d: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 006ab10f: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 006ab112: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 006ab115: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006ab118: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 006ab11b: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 006ab11e: mov dword ptr [ecx + 0xc], esi */ W32((u32)(r_ecx+0xcu), r_esi);
    /* 006ab121: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 006ab124: mov dword ptr [ecx + 0x10], esi */ W32((u32)(r_ecx+0x10u), r_esi);
    /* 006ab127: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 006ab12a: mov dword ptr [ecx + 0x14], esi */ W32((u32)(r_ecx+0x14u), r_esi);
    /* 006ab12d: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 006ab130: mov dword ptr [ecx + 0x18], esi */ W32((u32)(r_ecx+0x18u), r_esi);
    /* 006ab133: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ab136: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ab139: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ab13c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab13e: jl 0x6ab10b */ if ((fS!=fO)) goto L_006ab10b;
L_006ab140:; BB(0x006ab140);
    /* 006ab140: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006ab143:; BB(0x006ab143);
    /* 006ab143: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab144: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab145: ret  */ FN_RET(0x006ab0f0); r_esp += 4; return;
}

void f_006ab148(void) /* sub_6AB148 */
{
    FN_ENTER(0x006ab148);
    /* 006ab148: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab149: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ab14c: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006ab150: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab152: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ab154: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006ab158: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006ab15c: jle 0x6ab1ad */ if ((fZ||fS!=fO)) goto L_006ab1ad;
L_006ab15e:; BB(0x006ab15e);
    /* 006ab15e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006ab162: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006ab166: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_006ab169:; BB(0x006ab169);
    /* 006ab169: movzx ebx, byte ptr [ecx] */ r_ebx = (u32)R8((u32)(r_ecx));
    /* 006ab16c: mov byte ptr [edx], bl */ W8((u32)(r_edx), (u8)r_ebx);
    /* 006ab16e: movzx ebx, byte ptr [ecx + 1] */ r_ebx = (u32)R8((u32)(r_ecx+0x1u));
    /* 006ab172: mov byte ptr [edx + 1], bl */ W8((u32)(r_edx+0x1u), (u8)r_ebx);
    /* 006ab175: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 006ab178: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 006ab17b: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 006ab17e: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 006ab181: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 006ab184: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 006ab187: mov ebx, dword ptr [ecx + 0x10] */ r_ebx = R32((u32)(r_ecx+0x10u));
    /* 006ab18a: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 006ab18d: mov ebx, dword ptr [ecx + 0x14] */ r_ebx = R32((u32)(r_ecx+0x14u));
    /* 006ab190: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 006ab193: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 006ab196: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 006ab199: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ab19c: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ab19f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ab1a2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab1a4: jl 0x6ab169 */ if ((fS!=fO)) goto L_006ab169;
L_006ab1a6:; BB(0x006ab1a6);
    /* 006ab1a6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006ab1aa: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006ab1ad:; BB(0x006ab1ad);
    /* 006ab1ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab1b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab1b1: ret  */ FN_RET(0x006ab148); r_esp += 4; return;
}

void f_006ab1b4(void) /* sub_6AB1B4 */
{
    FN_ENTER(0x006ab1b4);
    /* 006ab1b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1b5: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 006ab1b9: movsx eax, byte ptr [edi + 0x3a1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x3a1u));
    /* 006ab1c0: mov byte ptr [edi], 5 */ W8((u32)(r_edi), 0x5u);
    /* 006ab1c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1c4: call 0x6ac938 */ r_esp -= 4; W32(r_esp, 0x6ab1c9u); f_006ac938();
    /* 006ab1c9: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 006ab1cc: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 006ab1cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1d2: call 0x6ab148 */ r_esp -= 4; W32(r_esp, 0x6ab1d7u); f_006ab148();
    /* 006ab1d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab1da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab1db: ret  */ FN_RET(0x006ab1b4); r_esp += 4; return;
}

void f_006ab1dc(void) /* sub_6AB1DC */
{
    FN_ENTER(0x006ab1dc);
    /* 006ab1dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1dd: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006ab1e1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab1e3: jne 0x6ab1e9 */ if (!fZ) goto L_006ab1e9;
L_006ab1e5:; BB(0x006ab1e5);
    /* 006ab1e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab1e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab1e8: ret  */ FN_RET(0x006ab1dc); r_esp += 4; return;
L_006ab1e9:; BB(0x006ab1e9);
    /* 006ab1e9: movsx eax, byte ptr [ebp + 0x3a1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x3a1u));
    /* 006ab1f0: mov byte ptr [ebp], 5 */ W8((u32)(r_ebp), 0x5u);
    /* 006ab1f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1f5: call 0x6ac938 */ r_esp -= 4; W32(r_esp, 0x6ab1fau); f_006ac938();
    /* 006ab1fa: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 006ab1fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab1ff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab201: call 0x6ab0f0 */ r_esp -= 4; W32(r_esp, 0x6ab206u); f_006ab0f0();
    /* 006ab206: mov byte ptr [ebp + 0x173], 2 */ W8((u32)(r_ebp+0x173u), 0x2u);
    /* 006ab20d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ab20e: call 0x6aafc8 */ r_esp -= 4; W32(r_esp, 0x6ab213u); f_006aafc8();
    /* 006ab213: lea eax, [ebp + 0x3e0] */ r_eax = (u32)(r_ebp+0x3e0u);
    /* 006ab219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab21a: push dword ptr [ebp + 0x3a4] */ { u32 v = R32((u32)(r_ebp+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ab220: call 0x6ab30c */ r_esp -= 4; W32(r_esp, 0x6ab225u); f_006ab30c();
    /* 006ab225: lea eax, [ebp + 0x4c8] */ r_eax = (u32)(r_ebp+0x4c8u);
    /* 006ab22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab22c: push dword ptr [ebp + 0x3a4] */ { u32 v = R32((u32)(r_ebp+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ab232: call 0x6ab098 */ r_esp -= 4; W32(r_esp, 0x6ab237u); f_006ab098();
    /* 006ab237: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 006ab23d: mov byte ptr [ebp + 3], dl */ W8((u32)(r_ebp+0x3u), (u8)r_edx);
    /* 006ab240: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab245: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab248: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab249: ret  */ FN_RET(0x006ab1dc); r_esp += 4; return;
}

void f_006ab24c(void) /* sub_6AB24C */
{
    FN_ENTER(0x006ab24c);
    /* 006ab24c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ab251: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x6ab256u); f_006c1bcc();
    /* 006ab256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab257: call 0x6ab1dc */ r_esp -= 4; W32(r_esp, 0x6ab25cu); f_006ab1dc();
    /* 006ab25c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab25f: ret  */ FN_RET(0x006ab24c); r_esp += 4; return;
}

void f_006ab260(void) /* sub_6AB260 */
{
    FN_ENTER(0x006ab260);
    /* 006ab260: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006ab264: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab266: mov byte ptr [edx + 6], al */ W8((u32)(r_edx+0x6u), (u8)r_eax);
    /* 006ab269: mov byte ptr [edx + 0x22], al */ W8((u32)(r_edx+0x22u), (u8)r_eax);
    /* 006ab26c: mov byte ptr [edx + 0x3e], al */ W8((u32)(r_edx+0x3eu), (u8)r_eax);
    /* 006ab26f: mov byte ptr [edx + 0x5a], al */ W8((u32)(r_edx+0x5au), (u8)r_eax);
    /* 006ab272: mov byte ptr [edx + 0x76], al */ W8((u32)(r_edx+0x76u), (u8)r_eax);
    /* 006ab275: mov byte ptr [edx + 0x92], al */ W8((u32)(r_edx+0x92u), (u8)r_eax);
    /* 006ab27b: mov byte ptr [edx + 0xae], al */ W8((u32)(r_edx+0xaeu), (u8)r_eax);
    /* 006ab281: mov byte ptr [edx + 0xca], al */ W8((u32)(r_edx+0xcau), (u8)r_eax);
    /* 006ab287: mov byte ptr [edx + 0xe6], al */ W8((u32)(r_edx+0xe6u), (u8)r_eax);
    /* 006ab28d: mov byte ptr [edx + 0x102], al */ W8((u32)(r_edx+0x102u), (u8)r_eax);
    /* 006ab293: mov byte ptr [edx + 0x11e], al */ W8((u32)(r_edx+0x11eu), (u8)r_eax);
    /* 006ab299: mov byte ptr [edx + 0x13a], al */ W8((u32)(r_edx+0x13au), (u8)r_eax);
    /* 006ab29f: mov byte ptr [edx + 0x156], al */ W8((u32)(r_edx+0x156u), (u8)r_eax);
    /* 006ab2a5: mov byte ptr [edx + 0x172], al */ W8((u32)(r_edx+0x172u), (u8)r_eax);
    /* 006ab2ab: mov byte ptr [edx + 0x18e], al */ W8((u32)(r_edx+0x18eu), (u8)r_eax);
    /* 006ab2b1: mov byte ptr [edx + 0x1aa], al */ W8((u32)(r_edx+0x1aau), (u8)r_eax);
    /* 006ab2b7: mov byte ptr [edx + 0x1c6], al */ W8((u32)(r_edx+0x1c6u), (u8)r_eax);
    /* 006ab2bd: mov byte ptr [edx + 0x1e2], al */ W8((u32)(r_edx+0x1e2u), (u8)r_eax);
    /* 006ab2c3: mov byte ptr [edx + 0x1fe], al */ W8((u32)(r_edx+0x1feu), (u8)r_eax);
    /* 006ab2c9: mov byte ptr [edx + 0x21a], al */ W8((u32)(r_edx+0x21au), (u8)r_eax);
    /* 006ab2cf: mov byte ptr [edx + 0x236], al */ W8((u32)(r_edx+0x236u), (u8)r_eax);
    /* 006ab2d5: mov byte ptr [edx + 0x252], al */ W8((u32)(r_edx+0x252u), (u8)r_eax);
    /* 006ab2db: mov byte ptr [edx + 0x26e], al */ W8((u32)(r_edx+0x26eu), (u8)r_eax);
    /* 006ab2e1: mov byte ptr [edx + 0x28a], al */ W8((u32)(r_edx+0x28au), (u8)r_eax);
    /* 006ab2e7: mov byte ptr [edx + 0x2a6], al */ W8((u32)(r_edx+0x2a6u), (u8)r_eax);
    /* 006ab2ed: mov byte ptr [edx + 0x2c2], al */ W8((u32)(r_edx+0x2c2u), (u8)r_eax);
    /* 006ab2f3: mov byte ptr [edx + 0x2de], al */ W8((u32)(r_edx+0x2deu), (u8)r_eax);
    /* 006ab2f9: mov byte ptr [edx + 0x2fa], al */ W8((u32)(r_edx+0x2fau), (u8)r_eax);
    /* 006ab2ff: mov byte ptr [edx + 0x316], al */ W8((u32)(r_edx+0x316u), (u8)r_eax);
    /* 006ab305: mov byte ptr [edx + 0x332], al */ W8((u32)(r_edx+0x332u), (u8)r_eax);
    /* 006ab30b: ret  */ FN_RET(0x006ab260); r_esp += 4; return;
}

void f_006ab30c(void) /* sub_6AB30C */
{
    FN_ENTER(0x006ab30c);
    /* 006ab30c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab30d: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006ab311: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006ab316: mov byte ptr [ebx + 4], cl */ W8((u32)(r_ebx+0x4u), (u8)r_ecx);
    /* 006ab319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab31b: mov byte ptr [ebx + 5], al */ W8((u32)(r_ebx+0x5u), (u8)r_eax);
    /* 006ab31e: mov byte ptr [ebx + 0x3c], cl */ W8((u32)(r_ebx+0x3cu), (u8)r_ecx);
    /* 006ab321: mov byte ptr [ebx + 0x3d], al */ W8((u32)(r_ebx+0x3du), (u8)r_eax);
    /* 006ab324: mov edx, 2 */ r_edx = 0x2u;
    /* 006ab329: mov byte ptr [ebx + 8], dl */ W8((u32)(r_ebx+0x8u), (u8)r_edx);
    /* 006ab32c: mov byte ptr [ebx + 9], al */ W8((u32)(r_ebx+0x9u), (u8)r_eax);
    /* 006ab32f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ab333: mov byte ptr [ebx + 0xc], dl */ W8((u32)(r_ebx+0xcu), (u8)r_edx);
    /* 006ab336: mov byte ptr [ebx + 0xd], cl */ W8((u32)(r_ebx+0xdu), (u8)r_ecx);
    /* 006ab339: test al, 0x60 */ {  u32 a = (u8)r_eax; u32 b = 0x60u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab33b: je 0x6ab34b */ if (fZ) goto L_006ab34b;
L_006ab33d:; BB(0x006ab33d);
    /* 006ab33d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006ab341: mov byte ptr [eax + 0x10], 4 */ W8((u32)(r_eax+0x10u), 0x4u);
    /* 006ab345: mov byte ptr [eax + 0x11], 0 */ W8((u32)(r_eax+0x11u), 0x0u);
    /* 006ab349: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab34a: ret  */ FN_RET(0x006ab30c); r_esp += 4; return;
L_006ab34b:; BB(0x006ab34b);
    /* 006ab34b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006ab34f: mov byte ptr [eax + 0x10], 3 */ W8((u32)(r_eax+0x10u), 0x3u);
    /* 006ab353: mov byte ptr [eax + 0x11], 0 */ W8((u32)(r_eax+0x11u), 0x0u);
    /* 006ab357: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab358: ret  */ FN_RET(0x006ab30c); r_esp += 4; return;
}

void f_006ab35c(void) /* sub_6AB35C */
{
    FN_ENTER(0x006ab35c);
    /* 006ab35c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ab360: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab362: jne 0x6ab369 */ if (!fZ) goto L_006ab369;
L_006ab364:; BB(0x006ab364);
    /* 006ab364: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ab367: jmp 0x6ab36c */ goto L_006ab36c;
L_006ab369:; BB(0x006ab369);
    /* 006ab369: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006ab36c:; BB(0x006ab36c);
    /* 006ab36c: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 006ab36f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab371: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab377:; BB(0x006ab377);
    /* 006ab377: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 006ab37b: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 006ab37e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab380: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab382:; BB(0x006ab382);
    /* 006ab382: movzx edx, byte ptr [eax + 4] */ r_edx = (u32)R8((u32)(r_eax+0x4u));
    /* 006ab386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab388: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab38a:; BB(0x006ab38a);
    /* 006ab38a: movzx edx, byte ptr [eax + 8] */ r_edx = (u32)R8((u32)(r_eax+0x8u));
    /* 006ab38e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab390: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab392:; BB(0x006ab392);
    /* 006ab392: movzx edx, byte ptr [eax + 0xc] */ r_edx = (u32)R8((u32)(r_eax+0xcu));
    /* 006ab396: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab398: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab39a:; BB(0x006ab39a);
    /* 006ab39a: movzx edx, byte ptr [eax + 0x10] */ r_edx = (u32)R8((u32)(r_eax+0x10u));
    /* 006ab39e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab3a0: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3a2:; BB(0x006ab3a2);
    /* 006ab3a2: movzx edx, byte ptr [eax + 0x14] */ r_edx = (u32)R8((u32)(r_eax+0x14u));
    /* 006ab3a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab3a8: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3aa:; BB(0x006ab3aa);
    /* 006ab3aa: movzx edx, byte ptr [eax + 0x18] */ r_edx = (u32)R8((u32)(r_eax+0x18u));
    /* 006ab3ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab3b0: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3b2:; BB(0x006ab3b2);
    /* 006ab3b2: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 006ab3b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab3b8: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3ba:; BB(0x006ab3ba);
    /* 006ab3ba: movzx edx, byte ptr [eax + 0x20] */ r_edx = (u32)R8((u32)(r_eax+0x20u));
    /* 006ab3be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab3c0: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3c2:; BB(0x006ab3c2);
    /* 006ab3c2: movzx edx, byte ptr [eax + 0x24] */ r_edx = (u32)R8((u32)(r_eax+0x24u));
    /* 006ab3c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab3c8: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3ca:; BB(0x006ab3ca);
    /* 006ab3ca: movzx edx, byte ptr [eax + 0x28] */ r_edx = (u32)R8((u32)(r_eax+0x28u));
    /* 006ab3ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab3d0: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3d2:; BB(0x006ab3d2);
    /* 006ab3d2: movzx edx, byte ptr [eax + 0x2c] */ r_edx = (u32)R8((u32)(r_eax+0x2cu));
    /* 006ab3d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab3d8: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3da:; BB(0x006ab3da);
    /* 006ab3da: movzx eax, byte ptr [eax + 0x30] */ r_eax = (u32)R8((u32)(r_eax+0x30u));
    /* 006ab3de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab3e0: jne 0x6ab3ea */ if (!fZ) goto L_006ab3ea;
L_006ab3e2:; BB(0x006ab3e2);
    /* 006ab3e2: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab3e7: ret 4 */ FN_RET(0x006ab35c); r_esp += 8; return;
L_006ab3ea:; BB(0x006ab3ea);
    /* 006ab3ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab3ec: ret 4 */ FN_RET(0x006ab35c); r_esp += 8; return;
}

void f_006ab3f0(void) /* sub_6AB3F0 */
{
    FN_ENTER(0x006ab3f0);
    /* 006ab3f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab3f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab3f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ab3f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab3f4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ab3f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ab3f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab3fb: mov ebx, eax */ r_ebx = r_eax;
    /* 006ab3fd: mov ebp, edx */ r_ebp = r_edx;
    /* 006ab3ff: mov esi, ecx */ r_esi = r_ecx;
L_006ab401:; BB(0x006ab401);
    /* 006ab401: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 006ab403: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab405: jne 0x6ab40c */ if (!fZ) goto L_006ab40c;
L_006ab407:; BB(0x006ab407);
    /* 006ab407: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 006ab40a: jmp 0x6ab40f */ goto L_006ab40f;
L_006ab40c:; BB(0x006ab40c);
    /* 006ab40c: lea edi, [esi + 0x3c] */ r_edi = (u32)(r_esi+0x3cu);
L_006ab40f:; BB(0x006ab40f);
    /* 006ab40f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ab410: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 006ab414: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ab416: call 0x694c3c */ r_esp -= 4; W32(r_esp, 0x6ab41bu); f_00694c3c();
    /* 006ab41b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab41d: jne 0x6ab42e */ if (!fZ) goto L_006ab42e;
L_006ab41f:; BB(0x006ab41f);
    /* 006ab41f: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 006ab423: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ab428: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 006ab42c: jmp 0x6ab45e */ goto L_006ab45e;
L_006ab42e:; BB(0x006ab42e);
    /* 006ab42e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006ab432: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 006ab435: movzx ecx, byte ptr [edi + 1] */ r_ecx = (u32)R8((u32)(r_edi+0x1u));
    /* 006ab439: call 0x6ab482 */ r_esp -= 4; W32(r_esp, 0x6ab43eu); f_006ab482();
    /* 006ab43e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab440: je 0x6ab451 */ if (fZ) goto L_006ab451;
L_006ab442:; BB(0x006ab442);
    /* 006ab442: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 006ab446: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006ab44b: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 006ab44f: jmp 0x6ab45e */ goto L_006ab45e;
L_006ab451:; BB(0x006ab451);
    /* 006ab451: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 006ab455: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ab45a: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
L_006ab45e:; BB(0x006ab45e);
    /* 006ab45e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ab461: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006ab464: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab467: jl 0x6ab401 */ if ((fS!=fO)) goto L_006ab401;
L_006ab469:; BB(0x006ab469);
    /* 006ab469: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab46c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab46d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab46e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab46f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab470: ret 4 */ FN_RET(0x006ab3f0); r_esp += 8; return;
}

void f_006ab474(void) /* sub_6AB474 */
{
    FN_ENTER(0x006ab474);
    /* 006ab474: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ab478: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006ab47d: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006ab482: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab483: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ab485: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab486: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ab489: mov esi, ecx */ r_esi = r_ecx;
    /* 006ab48b: mov ebp, edx */ r_ebp = r_edx;
    /* 006ab48d: mov ebx, eax */ r_ebx = r_eax;
    /* 006ab48f: mov edi, ebp */ r_edi = r_ebp;
    /* 006ab491: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab497: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab499: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab49f:; BB(0x006ab49f);
    /* 006ab49f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4a2: je 0x6ab7fb */ if (fZ) goto L_006ab7fb;
L_006ab4a8:; BB(0x006ab4a8);
    /* 006ab4a8: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4ab: je 0x6ab808 */ if (fZ) goto L_006ab808;
L_006ab4b1:; BB(0x006ab4b1);
    /* 006ab4b1: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4b4: je 0x6ab7ce */ if (fZ) goto L_006ab7ce;
L_006ab4ba:; BB(0x006ab4ba);
    /* 006ab4ba: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4bd: je 0x6ab4fd */ if (fZ) goto L_006ab4fd;
L_006ab4bf:; BB(0x006ab4bf);
    /* 006ab4bf: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4c2: jne 0x6ab4e7 */ if (!fZ) goto L_006ab4e7;
L_006ab4c4:; BB(0x006ab4c4);
    /* 006ab4c4: mov edi, esi */ r_edi = r_esi;
    /* 006ab4c6: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab4cc: movsx edi, byte ptr [edi + ebx + 0x528] */ r_edi = (u32)(i32)(i8)R8((u32)(r_edi+r_ebx+0x528u));
    /* 006ab4d4: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4d7: jne 0x6ab785 */ if (!fZ) goto L_006ab785;
L_006ab4dd:; BB(0x006ab4dd);
    /* 006ab4dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab4df: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab4e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab4e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab4e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab4e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab4e6: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab4e7:; BB(0x006ab4e7);
    /* 006ab4e7: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4ea: jne 0x6ab785 */ if (!fZ) goto L_006ab785;
L_006ab4f0:; BB(0x006ab4f0);
    /* 006ab4f0: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab4f5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab4f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab4f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab4fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab4fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab4fc: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab4fd:; BB(0x006ab4fd);
    /* 006ab4fd: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006ab501: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6ab506u); f_005d6a3c();
    /* 006ab506: mov edi, esi */ r_edi = r_esi;
    /* 006ab508: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab50e: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 006ab512: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006ab515: ja 0x6ab696 */ if ((!fC&&!fZ)) goto L_006ab696;
L_006ab51b:; BB(0x006ab51b);
    /* 006ab51b: mov edi, dword ptr [edi*4 + 0x9669e8] */ r_edi = R32((u32)(r_edi*4+0x9669e8u));
    /* 006ab522: jmp edi */ { u32 t = r_edi; jmp_ind(t); return; }
L_006ab696:; BB(0x006ab696);
    /* 006ab696: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab7ce:; BB(0x006ab7ce);
    /* 006ab7ce: lea ecx, [ebx + 0x460] */ r_ecx = (u32)(r_ebx+0x460u);
    /* 006ab7d4: mov edi, esi */ r_edi = r_esi;
    /* 006ab7d6: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab7dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7dd: call 0x6ad158 */ r_esp -= 4; W32(r_esp, 0x6ab7e2u); f_006ad158();
    /* 006ab7e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7e4: je 0x6ab7f0 */ if (fZ) goto L_006ab7f0;
L_006ab7e6:; BB(0x006ab7e6);
    /* 006ab7e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7e8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7ef: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab7f0:; BB(0x006ab7f0);
    /* 006ab7f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7f2: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab7f7u); f_00689410();
    /* 006ab7f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7f9: je 0x6ab785 */ if (fZ) goto L_006ab785;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab808:; BB(0x006ab808);
    /* 006ab808: mov edi, esi */ r_edi = r_esi;
    /* 006ab80a: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab810: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab813: je 0x6ab831 */ if (fZ) goto L_006ab831;
L_006ab815:; BB(0x006ab815);
    /* 006ab815: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab817: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab81cu); f_00689410();
    /* 006ab81c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab81e: je 0x6ab785 */ if (fZ) goto L_006ab785;
L_006ab824:; BB(0x006ab824);
    /* 006ab824: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab829: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab82c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab82d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab82e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab82f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab830: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
L_006ab831:; BB(0x006ab831);
    /* 006ab831: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab833: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 006ab839: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6ab83eu); f_0069792c();
    /* 006ab83e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab840: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab846:; BB(0x006ab846);
    /* 006ab846: mov ecx, eax */ r_ecx = r_eax;
    /* 006ab848: call 0x5e9534 */ r_esp -= 4; W32(r_esp, 0x6ab84du); f_005e9534();
    /* 006ab84d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab84f: jne 0x6ab815 */ if (!fZ) goto L_006ab815;
L_006ab851:; BB(0x006ab851);
    /* 006ab851: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab853: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab856: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab858: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab859: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab85a: ret  */ FN_RET(0x006ab474); r_esp += 4; return;
}

void f_006ab482(void)
{
    FN_ENTER(0x006ab482);
    /* 006ab482: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab483: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ab485: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab486: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ab489: mov esi, ecx */ r_esi = r_ecx;
    /* 006ab48b: mov ebp, edx */ r_ebp = r_edx;
    /* 006ab48d: mov ebx, eax */ r_ebx = r_eax;
    /* 006ab48f: mov edi, ebp */ r_edi = r_ebp;
    /* 006ab491: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab497: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab499: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab49f:; BB(0x006ab49f);
    /* 006ab49f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4a2: je 0x6ab7fb */ if (fZ) goto L_006ab7fb;
L_006ab4a8:; BB(0x006ab4a8);
    /* 006ab4a8: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4ab: je 0x6ab808 */ if (fZ) goto L_006ab808;
L_006ab4b1:; BB(0x006ab4b1);
    /* 006ab4b1: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4b4: je 0x6ab7ce */ if (fZ) goto L_006ab7ce;
L_006ab4ba:; BB(0x006ab4ba);
    /* 006ab4ba: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4bd: je 0x6ab4fd */ if (fZ) goto L_006ab4fd;
L_006ab4bf:; BB(0x006ab4bf);
    /* 006ab4bf: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4c2: jne 0x6ab4e7 */ if (!fZ) goto L_006ab4e7;
L_006ab4c4:; BB(0x006ab4c4);
    /* 006ab4c4: mov edi, esi */ r_edi = r_esi;
    /* 006ab4c6: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab4cc: movsx edi, byte ptr [edi + ebx + 0x528] */ r_edi = (u32)(i32)(i8)R8((u32)(r_edi+r_ebx+0x528u));
    /* 006ab4d4: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4d7: jne 0x6ab785 */ if (!fZ) goto L_006ab785;
L_006ab4dd:; BB(0x006ab4dd);
    /* 006ab4dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab4df: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab4e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab4e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab4e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab4e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab4e6: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab4e7:; BB(0x006ab4e7);
    /* 006ab4e7: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab4ea: jne 0x6ab785 */ if (!fZ) goto L_006ab785;
L_006ab4f0:; BB(0x006ab4f0);
    /* 006ab4f0: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab4f5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab4f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab4f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab4fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab4fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab4fc: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab4fd:; BB(0x006ab4fd);
    /* 006ab4fd: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006ab501: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6ab506u); f_005d6a3c();
    /* 006ab506: mov edi, esi */ r_edi = r_esi;
    /* 006ab508: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab50e: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 006ab512: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006ab515: ja 0x6ab696 */ if ((!fC&&!fZ)) goto L_006ab696;
L_006ab51b:; BB(0x006ab51b);
    /* 006ab51b: mov edi, dword ptr [edi*4 + 0x9669e8] */ r_edi = R32((u32)(r_edi*4+0x9669e8u));
    /* 006ab522: jmp edi */ { u32 t = r_edi; jmp_ind(t); return; }
L_006ab696:; BB(0x006ab696);
    /* 006ab696: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab7ce:; BB(0x006ab7ce);
    /* 006ab7ce: lea ecx, [ebx + 0x460] */ r_ecx = (u32)(r_ebx+0x460u);
    /* 006ab7d4: mov edi, esi */ r_edi = r_esi;
    /* 006ab7d6: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab7dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7dd: call 0x6ad158 */ r_esp -= 4; W32(r_esp, 0x6ab7e2u); f_006ad158();
    /* 006ab7e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7e4: je 0x6ab7f0 */ if (fZ) goto L_006ab7f0;
L_006ab7e6:; BB(0x006ab7e6);
    /* 006ab7e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7e8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7ef: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab7f0:; BB(0x006ab7f0);
    /* 006ab7f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7f2: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab7f7u); f_00689410();
    /* 006ab7f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7f9: je 0x6ab785 */ if (fZ) goto L_006ab785;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab808:; BB(0x006ab808);
    /* 006ab808: mov edi, esi */ r_edi = r_esi;
    /* 006ab80a: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006ab810: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab813: je 0x6ab831 */ if (fZ) goto L_006ab831;
L_006ab815:; BB(0x006ab815);
    /* 006ab815: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab817: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab81cu); f_00689410();
    /* 006ab81c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab81e: je 0x6ab785 */ if (fZ) goto L_006ab785;
L_006ab824:; BB(0x006ab824);
    /* 006ab824: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab829: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab82c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab82d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab82e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab82f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab830: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
L_006ab831:; BB(0x006ab831);
    /* 006ab831: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab833: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 006ab839: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6ab83eu); f_0069792c();
    /* 006ab83e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab840: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab846:; BB(0x006ab846);
    /* 006ab846: mov ecx, eax */ r_ecx = r_eax;
    /* 006ab848: call 0x5e9534 */ r_esp -= 4; W32(r_esp, 0x6ab84du); f_005e9534();
    /* 006ab84d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab84f: jne 0x6ab815 */ if (!fZ) goto L_006ab815;
L_006ab851:; BB(0x006ab851);
    /* 006ab851: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab853: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab856: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab858: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab859: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab85a: ret  */ FN_RET(0x006ab482); r_esp += 4; return;
}

void f_006ab524(void)
{
    FN_ENTER(0x006ab524);
    /* 006ab524: mov edi, dword ptr [ebx + 0x964] */ r_edi = R32((u32)(r_ebx+0x964u));
    /* 006ab52a: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab530: je 0x6ab53c */ if (fZ) goto L_006ab53c;
L_006ab532:; BB(0x006ab532);
    /* 006ab532: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab534: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab537: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab539: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab53a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab53b: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab53c:; BB(0x006ab53c);
    /* 006ab53c: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab541: mov byte ptr [esp + 0xd], 8 */ W8((u32)(r_esp+0xdu), 0x8u);
    /* 006ab546: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab524); r_esp += 4; return;
}

void f_006ab54b(void)
{
    FN_ENTER(0x006ab54b);
    /* 006ab54b: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab550: mov byte ptr [esp + 0xd], 7 */ W8((u32)(r_esp+0xdu), 0x7u);
    /* 006ab555: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab54b); r_esp += 4; return;
}

void f_006ab55a(void)
{
    FN_ENTER(0x006ab55a);
    /* 006ab55a: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab55f: mov byte ptr [esp + 0xd], 5 */ W8((u32)(r_esp+0xdu), 0x5u);
    /* 006ab564: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab55a); r_esp += 4; return;
}

void f_006ab569(void)
{
    FN_ENTER(0x006ab569);
    /* 006ab569: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab56e: mov byte ptr [esp + 0xd], 4 */ W8((u32)(r_esp+0xdu), 0x4u);
    /* 006ab573: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab569); r_esp += 4; return;
}

void f_006ab578(void)
{
    FN_ENTER(0x006ab578);
    /* 006ab578: mov eax, 3 */ r_eax = 0x3u;
    /* 006ab57d: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 006ab581: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 006ab585: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab578); r_esp += 4; return;
}

void f_006ab58a(void)
{
    FN_ENTER(0x006ab58a);
    /* 006ab58a: mov edi, dword ptr [ebx + 0x964] */ r_edi = R32((u32)(r_ebx+0x964u));
    /* 006ab590: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab596: je 0x6ab5a2 */ if (fZ) goto L_006ab5a2;
L_006ab598:; BB(0x006ab598);
    /* 006ab598: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab59a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab59d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab59e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab59f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab5a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab5a1: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab5a2:; BB(0x006ab5a2);
    /* 006ab5a2: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab5a7: mov byte ptr [esp + 0xd], 6 */ W8((u32)(r_esp+0xdu), 0x6u);
    /* 006ab5ac: mov byte ptr [esp + 0xe], 1 */ W8((u32)(r_esp+0xeu), 0x1u);
    /* 006ab5b1: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab58a); r_esp += 4; return;
}

void f_006ab5b6(void)
{
    FN_ENTER(0x006ab5b6);
    /* 006ab5b6: mov edi, dword ptr [ebx + 0x964] */ r_edi = R32((u32)(r_ebx+0x964u));
    /* 006ab5bc: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab5c2: je 0x6ab5ce */ if (fZ) goto L_006ab5ce;
L_006ab5c4:; BB(0x006ab5c4);
    /* 006ab5c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab5c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab5c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab5ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab5cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab5cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab5cd: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab5ce:; BB(0x006ab5ce);
    /* 006ab5ce: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab5d3: mov byte ptr [esp + 0xd], 6 */ W8((u32)(r_esp+0xdu), 0x6u);
    /* 006ab5d8: mov byte ptr [esp + 0xe], 0 */ W8((u32)(r_esp+0xeu), 0x0u);
    /* 006ab5dd: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab5b6); r_esp += 4; return;
}

void f_006ab5e2(void)
{
    FN_ENTER(0x006ab5e2);
    /* 006ab5e2: mov edi, dword ptr [ebx + 0x964] */ r_edi = R32((u32)(r_ebx+0x964u));
    /* 006ab5e8: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab5ee: je 0x6ab5fa */ if (fZ) goto L_006ab5fa;
L_006ab5f0:; BB(0x006ab5f0);
    /* 006ab5f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab5f2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab5f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab5f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab5f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab5f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab5f9: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab5fa:; BB(0x006ab5fa);
    /* 006ab5fa: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab5ff: mov byte ptr [esp + 0xd], 1 */ W8((u32)(r_esp+0xdu), 0x1u);
    /* 006ab604: mov byte ptr [esp + 0xe], 2 */ W8((u32)(r_esp+0xeu), 0x2u);
    /* 006ab609: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab5e2); r_esp += 4; return;
}

void f_006ab60e(void)
{
    FN_ENTER(0x006ab60e);
    /* 006ab60e: mov edi, dword ptr [ebx + 0x964] */ r_edi = R32((u32)(r_ebx+0x964u));
    /* 006ab614: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab61a: je 0x6ab626 */ if (fZ) goto L_006ab626;
L_006ab61c:; BB(0x006ab61c);
    /* 006ab61c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab61e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab621: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab622: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab624: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab625: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab626:; BB(0x006ab626);
    /* 006ab626: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab62b: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab630: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 006ab634: mov byte ptr [esp + 0xe], al */ W8((u32)(r_esp+0xeu), (u8)r_eax);
    /* 006ab638: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab60e); r_esp += 4; return;
}

void f_006ab63a(void)
{
    FN_ENTER(0x006ab63a);
    /* 006ab63a: mov edi, dword ptr [ebx + 0x964] */ r_edi = R32((u32)(r_ebx+0x964u));
    /* 006ab640: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab646: je 0x6ab652 */ if (fZ) goto L_006ab652;
L_006ab648:; BB(0x006ab648);
    /* 006ab648: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab64a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab64d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab64e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab64f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab650: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab651: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab652:; BB(0x006ab652);
    /* 006ab652: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab657: mov byte ptr [esp + 0xd], 1 */ W8((u32)(r_esp+0xdu), 0x1u);
    /* 006ab65c: mov byte ptr [esp + 0xe], 0 */ W8((u32)(r_esp+0xeu), 0x0u);
    /* 006ab661: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab63a); r_esp += 4; return;
}

void f_006ab663(void)
{
    FN_ENTER(0x006ab663);
    /* 006ab663: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab668: mov byte ptr [esp + 0xd], 0 */ W8((u32)(r_esp+0xdu), 0x0u);
    /* 006ab66d: mov byte ptr [esp + 0xe], 2 */ W8((u32)(r_esp+0xeu), 0x2u);
    /* 006ab672: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab663); r_esp += 4; return;
}

void f_006ab674(void)
{
    FN_ENTER(0x006ab674);
    /* 006ab674: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab679: mov byte ptr [esp + 0xd], 0 */ W8((u32)(r_esp+0xdu), 0x0u);
    /* 006ab67e: mov byte ptr [esp + 0xe], 1 */ W8((u32)(r_esp+0xeu), 0x1u);
    /* 006ab683: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab674); r_esp += 4; return;
}

void f_006ab685(void)
{
    FN_ENTER(0x006ab685);
    /* 006ab685: mov byte ptr [esp + 0xc], 3 */ W8((u32)(r_esp+0xcu), 0x3u);
    /* 006ab68a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab68c: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 006ab690: mov byte ptr [esp + 0xe], al */ W8((u32)(r_esp+0xeu), (u8)r_eax);
    /* 006ab694: jmp 0x6ab69b */ goto L_006ab69b;
L_006ab69b:; BB(0x006ab69b);
    /* 006ab69b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006ab69f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6a2: jl 0x6ab766 */ if ((fS!=fO)) goto L_006ab766;
L_006ab6a8:; BB(0x006ab6a8);
    /* 006ab6a8: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ab6ab: jg 0x6ab766 */ if ((!fZ&&fS==fO)) goto L_006ab766;
L_006ab6b1:; BB(0x006ab6b1);
    /* 006ab6b1: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6ab6b6u); f_00807db8();
    /* 006ab6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6b8: jne 0x6ab72c */ if (!fZ) goto L_006ab72c;
L_006ab6ba:; BB(0x006ab6ba);
    /* 006ab6ba: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6bd: je 0x6ab79e */ if (fZ) goto L_006ab79e;
L_006ab6c3:; BB(0x006ab6c3);
    /* 006ab6c3: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6c6: je 0x6ab736 */ if (fZ) goto L_006ab736;
L_006ab6c8:; BB(0x006ab6c8);
    /* 006ab6c8: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6cb: jne 0x6ab701 */ if (!fZ) goto L_006ab701;
L_006ab6cd:; BB(0x006ab6cd);
    /* 006ab6cd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab6d1: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab6d6u); f_00695374();
    /* 006ab6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6d8: je 0x6ab6e4 */ if (fZ) goto L_006ab6e4;
L_006ab6da:; BB(0x006ab6da);
    /* 006ab6da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab6e3: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab6e4:; BB(0x006ab6e4);
    /* 006ab6e4: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab6e9: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab6eeu); f_00719200();
    /* 006ab6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab6f1: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab6f7:; BB(0x006ab6f7);
    /* 006ab6f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab6f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab6fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab6fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab6ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab700: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab701:; BB(0x006ab701);
    /* 006ab701: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab704: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab706:; BB(0x006ab706);
    /* 006ab706: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab708: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab70a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab70fu); f_00695374();
    /* 006ab70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab711: je 0x6ab71d */ if (fZ) goto L_006ab71d;
L_006ab713:; BB(0x006ab713);
    /* 006ab713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab715: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab71a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab71c: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab71d:; BB(0x006ab71d);
    /* 006ab71d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab721: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab722: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab727u); f_00719200();
    /* 006ab727: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab72a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab72c:; BB(0x006ab72c);
    /* 006ab72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab72e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab733: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab734: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab735: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab736:; BB(0x006ab736);
    /* 006ab736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab73a: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab73fu); f_00695374();
    /* 006ab73f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab741: je 0x6ab74d */ if (fZ) goto L_006ab74d;
L_006ab743:; BB(0x006ab743);
    /* 006ab743: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab745: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab74a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab74b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab74c: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab74d:; BB(0x006ab74d);
    /* 006ab74d: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab751: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab752: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab757u); f_00719200();
    /* 006ab757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab75a: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab75c:; BB(0x006ab75c);
    /* 006ab75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab75e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab764: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab765: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab766:; BB(0x006ab766);
    /* 006ab766: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 006ab76a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab76b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006ab771: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6ab776u); f_006a4e50();
    /* 006ab776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab778: je 0x6ab72c */ if (fZ) goto L_006ab72c;
L_006ab77a:; BB(0x006ab77a);
    /* 006ab77a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab77c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ab781u); f_00689410();
    /* 006ab781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab783: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab785:; BB(0x006ab785);
    /* 006ab785: mov eax, ebx */ r_eax = r_ebx;
    /* 006ab787: mov edx, ebp */ r_edx = r_ebp;
    /* 006ab789: mov ecx, esi */ r_ecx = r_esi;
    /* 006ab78b: call 0x6ab86a */ r_esp -= 4; W32(r_esp, 0x6ab790u); f_006ab86a();
    /* 006ab790: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab792: jne 0x6ab7fb */ if (!fZ) goto L_006ab7fb;
L_006ab794:; BB(0x006ab794);
    /* 006ab794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab796: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab79c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab79d: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab79e:; BB(0x006ab79e);
    /* 006ab79e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab7a2: call 0x695374 */ r_esp -= 4; W32(r_esp, 0x6ab7a7u); f_00695374();
    /* 006ab7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7a9: je 0x6ab7b5 */ if (fZ) goto L_006ab7b5;
L_006ab7ab:; BB(0x006ab7ab);
    /* 006ab7ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7b4: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab7b5:; BB(0x006ab7b5);
    /* 006ab7b5: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab7b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab7ba: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6ab7bfu); f_00719200();
    /* 006ab7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab7c2: jne 0x6ab77a */ if (!fZ) goto L_006ab77a;
L_006ab7c4:; BB(0x006ab7c4);
    /* 006ab7c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab7c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab7ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab7cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab7cd: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
L_006ab7fb:; BB(0x006ab7fb);
    /* 006ab7fb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab800: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ab803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab805: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ab807: ret  */ FN_RET(0x006ab685); r_esp += 4; return;
}

void f_006ab85c(void) /* sub_6AB85C */
{
    FN_ENTER(0x006ab85c);
    /* 006ab85c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ab860: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006ab865: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 006ab86a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab86b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ab86c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab86d: mov esi, ecx */ r_esi = r_ecx;
    /* 006ab86f: mov ebx, eax */ r_ebx = r_eax;
    /* 006ab871: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006ab874: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab876: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006ab87c:; BB(0x006ab87c);
    /* 006ab87c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab87f: je 0x6ab9eb */ if (fZ) goto L_006ab9eb;
L_006ab885:; BB(0x006ab885);
    /* 006ab885: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab888: je 0x6ab9f4 */ if (fZ) goto L_006ab9f4;
L_006ab88e:; BB(0x006ab88e);
    /* 006ab88e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab891: je 0x6ab940 */ if (fZ) goto L_006ab940;
L_006ab897:; BB(0x006ab897);
    /* 006ab897: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab89a: je 0x6ab8eb */ if (fZ) goto L_006ab8eb;
L_006ab89c:; BB(0x006ab89c);
    /* 006ab89c: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab89f: jne 0x6ab8d9 */ if (!fZ) goto L_006ab8d9;
L_006ab8a1:; BB(0x006ab8a1);
    /* 006ab8a1: mov edx, dword ptr [ebx + 0x524] */ r_edx = R32((u32)(r_ebx+0x524u));
    /* 006ab8a7: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ab8aa: je 0x6ab8b3 */ if (fZ) goto L_006ab8b3;
L_006ab8ac:; BB(0x006ab8ac);
    /* 006ab8ac: mov edx, 1 */ r_edx = 0x1u;
    /* 006ab8b1: jmp 0x6ab8b5 */ goto L_006ab8b5;
L_006ab8b3:; BB(0x006ab8b3);
    /* 006ab8b3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006ab8b5:; BB(0x006ab8b5);
    /* 006ab8b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab8b7: je 0x6ab8d3 */ if (fZ) goto L_006ab8d3;
L_006ab8b9:; BB(0x006ab8b9);
    /* 006ab8b9: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006ab8bc: test edx, 0x20006 */ {  u32 a = r_edx; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab8c2: jne 0x6ab8d3 */ if (!fZ) goto L_006ab8d3;
L_006ab8c4:; BB(0x006ab8c4);
    /* 006ab8c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab8c6: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x6ab8cbu); f_0068aabc();
    /* 006ab8cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab8cd: jne 0x6ab9eb */ if (!fZ) goto L_006ab9eb;
L_006ab8d3:; BB(0x006ab8d3);
    /* 006ab8d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab8d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab8d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab8d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab8d8: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006ab8d9:; BB(0x006ab8d9);
    /* 006ab8d9: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab8dc: jne 0x6ab9db */ if (!fZ) goto L_006ab9db;
L_006ab8e2:; BB(0x006ab8e2);
    /* 006ab8e2: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab8e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab8e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab8ea: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006ab8eb:; BB(0x006ab8eb);
    /* 006ab8eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab8ed: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x6ab8f2u); f_0068aabc();
    /* 006ab8f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab8f4: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006ab8fa:; BB(0x006ab8fa);
    /* 006ab8fa: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006ab900: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab903: jne 0x6ab914 */ if (!fZ) goto L_006ab914;
L_006ab905:; BB(0x006ab905);
    /* 006ab905: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6ab90au); f_0078b1c4();
    /* 006ab90a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab90d: jne 0x6ab937 */ if (!fZ) goto L_006ab937;
L_006ab90f:; BB(0x006ab90f);
    /* 006ab90f: jmp 0x6ab9db */ goto L_006ab9db;
L_006ab914:; BB(0x006ab914);
    /* 006ab914: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab917: jne 0x6ab937 */ if (!fZ) goto L_006ab937;
L_006ab919:; BB(0x006ab919);
    /* 006ab919: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab91b: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x6ab920u); f_0068bfa0();
    /* 006ab920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab922: jne 0x6ab92a */ if (!fZ) goto L_006ab92a;
L_006ab924:; BB(0x006ab924);
    /* 006ab924: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab926: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab928: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab929: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006ab92a:; BB(0x006ab92a);
    /* 006ab92a: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ab92fu); f_00687c48();
    /* 006ab92f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab931: jne 0x6ab9db */ if (!fZ) goto L_006ab9db;
L_006ab937:; BB(0x006ab937);
    /* 006ab937: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab93c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab93d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab93e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab93f: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006ab940:; BB(0x006ab940);
    /* 006ab940: mov edx, dword ptr [ebx + 0x470] */ r_edx = R32((u32)(r_ebx+0x470u));
    /* 006ab946: lea ebp, [ebx + 0x460] */ r_ebp = (u32)(r_ebx+0x460u);
    /* 006ab94c: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ab94f: je 0x6ab958 */ if (fZ) goto L_006ab958;
L_006ab951:; BB(0x006ab951);
    /* 006ab951: mov edx, 1 */ r_edx = 0x1u;
    /* 006ab956: jmp 0x6ab95a */ goto L_006ab95a;
L_006ab958:; BB(0x006ab958);
    /* 006ab958: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006ab95a:; BB(0x006ab95a);
    /* 006ab95a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab95c: jne 0x6ab974 */ if (!fZ) goto L_006ab974;
L_006ab95e:; BB(0x006ab95e);
    /* 006ab95e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006ab961: test edx, 0x20006 */ {  u32 a = r_edx; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab967: jne 0x6ab974 */ if (!fZ) goto L_006ab974;
L_006ab969:; BB(0x006ab969);
    /* 006ab969: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab96b: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x6ab970u); f_0068aabc();
    /* 006ab970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab972: jne 0x6ab97a */ if (!fZ) goto L_006ab97a;
L_006ab974:; BB(0x006ab974);
    /* 006ab974: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab976: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab978: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab979: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006ab97a:; BB(0x006ab97a);
    /* 006ab97a: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006ab980: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab981: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006ab983: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6ab988u); f_006ad17c();
    /* 006ab988: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab98c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab98d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ab990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab991: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab992: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6ab997u); f_006ded14();
    /* 006ab997: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ab99a: movsx ebp, word ptr [ebx + 0x336] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x336u));
    /* 006ab9a1: movsx edx, word ptr [eax + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 006ab9a5: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006ab9a7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ab9a9: jl 0x6ab9db */ if ((fS!=fO)) goto L_006ab9db;
L_006ab9ab:; BB(0x006ab9ab);
    /* 006ab9ab: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab9ae: jne 0x6ab9bc */ if (!fZ) goto L_006ab9bc;
L_006ab9b0:; BB(0x006ab9b0);
    /* 006ab9b0: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6ab9b5u); f_0078b1c4();
    /* 006ab9b5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab9b8: jne 0x6ab9eb */ if (!fZ) goto L_006ab9eb;
L_006ab9ba:; BB(0x006ab9ba);
    /* 006ab9ba: jmp 0x6ab9db */ goto L_006ab9db;
L_006ab9bc:; BB(0x006ab9bc);
    /* 006ab9bc: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab9bf: jne 0x6ab9eb */ if (!fZ) goto L_006ab9eb;
L_006ab9c1:; BB(0x006ab9c1);
    /* 006ab9c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab9c3: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x6ab9c8u); f_0068bfa0();
    /* 006ab9c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab9ca: jne 0x6ab9d2 */ if (!fZ) goto L_006ab9d2;
L_006ab9cc:; BB(0x006ab9cc);
    /* 006ab9cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab9ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab9cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab9d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab9d1: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006ab9d2:; BB(0x006ab9d2);
    /* 006ab9d2: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ab9d7u); f_00687c48();
    /* 006ab9d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab9d9: je 0x6ab9e1 */ if (fZ) goto L_006ab9e1;
L_006ab9db:; BB(0x006ab9db);
    /* 006ab9db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab9dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab9de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab9df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab9e0: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006ab9e1:; BB(0x006ab9e1);
    /* 006ab9e1: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6ab9e6u); f_0078b1c4();
    /* 006ab9e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab9e9: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006ab9eb:; BB(0x006ab9eb);
    /* 006ab9eb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab9f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab9f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab9f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab9f3: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006ab9f4:; BB(0x006ab9f4);
    /* 006ab9f4: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006ab9f7: test edx, 0x20006 */ {  u32 a = r_edx; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab9fd: jne 0x6ab9db */ if (!fZ) goto L_006ab9db;
L_006ab9ff:; BB(0x006ab9ff);
    /* 006ab9ff: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6aba04u); f_00807d60();
    /* 006aba04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba06: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006aba08:; BB(0x006aba08);
    /* 006aba08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aba0a: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x6aba0fu); f_0068aabc();
    /* 006aba0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba11: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006aba13:; BB(0x006aba13);
    /* 006aba13: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006aba19: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006aba1c: je 0x6aba27 */ if (fZ) goto L_006aba27;
L_006aba1e:; BB(0x006aba1e);
    /* 006aba1e: mov eax, 1 */ r_eax = 0x1u;
    /* 006aba23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aba24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aba25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aba26: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
L_006aba27:; BB(0x006aba27);
    /* 006aba27: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006aba29: add ebx, 0xdf8 */ {  u32 a = r_ebx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006aba2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aba31: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6aba36u); f_0069792c();
    /* 006aba36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba38: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006aba3a:; BB(0x006aba3a);
    /* 006aba3a: mov ecx, eax */ r_ecx = r_eax;
    /* 006aba3c: call 0x5e9534 */ r_esp -= 4; W32(r_esp, 0x6aba41u); f_005e9534();
    /* 006aba41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aba43: jne 0x6aba1e */ if (!fZ) goto L_006aba1e;
L_006aba45:; BB(0x006aba45);
    /* 006aba45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aba47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aba48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aba49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aba4a: ret  */ FN_RET(0x006ab85c); r_esp += 4; return;
}

void f_006ab86a(void) /* sub_6AB86A */
{
    FN_ENTER(0x006ab86a);
    /* 006ab86a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab86b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ab86c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab86d: mov esi, ecx */ r_esi = r_ecx;
    /* 006ab86f: mov ebx, eax */ r_ebx = r_eax;
    /* 006ab871: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006ab874: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab876: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006ab87c:; BB(0x006ab87c);
    /* 006ab87c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab87f: je 0x6ab9eb */ if (fZ) goto L_006ab9eb;
L_006ab885:; BB(0x006ab885);
    /* 006ab885: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab888: je 0x6ab9f4 */ if (fZ) goto L_006ab9f4;
L_006ab88e:; BB(0x006ab88e);
    /* 006ab88e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab891: je 0x6ab940 */ if (fZ) goto L_006ab940;
L_006ab897:; BB(0x006ab897);
    /* 006ab897: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab89a: je 0x6ab8eb */ if (fZ) goto L_006ab8eb;
L_006ab89c:; BB(0x006ab89c);
    /* 006ab89c: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab89f: jne 0x6ab8d9 */ if (!fZ) goto L_006ab8d9;
L_006ab8a1:; BB(0x006ab8a1);
    /* 006ab8a1: mov edx, dword ptr [ebx + 0x524] */ r_edx = R32((u32)(r_ebx+0x524u));
    /* 006ab8a7: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ab8aa: je 0x6ab8b3 */ if (fZ) goto L_006ab8b3;
L_006ab8ac:; BB(0x006ab8ac);
    /* 006ab8ac: mov edx, 1 */ r_edx = 0x1u;
    /* 006ab8b1: jmp 0x6ab8b5 */ goto L_006ab8b5;
L_006ab8b3:; BB(0x006ab8b3);
    /* 006ab8b3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006ab8b5:; BB(0x006ab8b5);
    /* 006ab8b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab8b7: je 0x6ab8d3 */ if (fZ) goto L_006ab8d3;
L_006ab8b9:; BB(0x006ab8b9);
    /* 006ab8b9: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006ab8bc: test edx, 0x20006 */ {  u32 a = r_edx; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab8c2: jne 0x6ab8d3 */ if (!fZ) goto L_006ab8d3;
L_006ab8c4:; BB(0x006ab8c4);
    /* 006ab8c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab8c6: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x6ab8cbu); f_0068aabc();
    /* 006ab8cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab8cd: jne 0x6ab9eb */ if (!fZ) goto L_006ab9eb;
L_006ab8d3:; BB(0x006ab8d3);
    /* 006ab8d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab8d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab8d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab8d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab8d8: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006ab8d9:; BB(0x006ab8d9);
    /* 006ab8d9: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab8dc: jne 0x6ab9db */ if (!fZ) goto L_006ab9db;
L_006ab8e2:; BB(0x006ab8e2);
    /* 006ab8e2: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab8e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab8e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab8ea: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006ab8eb:; BB(0x006ab8eb);
    /* 006ab8eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab8ed: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x6ab8f2u); f_0068aabc();
    /* 006ab8f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab8f4: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006ab8fa:; BB(0x006ab8fa);
    /* 006ab8fa: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006ab900: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab903: jne 0x6ab914 */ if (!fZ) goto L_006ab914;
L_006ab905:; BB(0x006ab905);
    /* 006ab905: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6ab90au); f_0078b1c4();
    /* 006ab90a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab90d: jne 0x6ab937 */ if (!fZ) goto L_006ab937;
L_006ab90f:; BB(0x006ab90f);
    /* 006ab90f: jmp 0x6ab9db */ goto L_006ab9db;
L_006ab914:; BB(0x006ab914);
    /* 006ab914: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab917: jne 0x6ab937 */ if (!fZ) goto L_006ab937;
L_006ab919:; BB(0x006ab919);
    /* 006ab919: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab91b: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x6ab920u); f_0068bfa0();
    /* 006ab920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab922: jne 0x6ab92a */ if (!fZ) goto L_006ab92a;
L_006ab924:; BB(0x006ab924);
    /* 006ab924: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab926: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab928: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab929: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006ab92a:; BB(0x006ab92a);
    /* 006ab92a: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ab92fu); f_00687c48();
    /* 006ab92f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab931: jne 0x6ab9db */ if (!fZ) goto L_006ab9db;
L_006ab937:; BB(0x006ab937);
    /* 006ab937: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab93c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab93d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab93e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab93f: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006ab940:; BB(0x006ab940);
    /* 006ab940: mov edx, dword ptr [ebx + 0x470] */ r_edx = R32((u32)(r_ebx+0x470u));
    /* 006ab946: lea ebp, [ebx + 0x460] */ r_ebp = (u32)(r_ebx+0x460u);
    /* 006ab94c: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ab94f: je 0x6ab958 */ if (fZ) goto L_006ab958;
L_006ab951:; BB(0x006ab951);
    /* 006ab951: mov edx, 1 */ r_edx = 0x1u;
    /* 006ab956: jmp 0x6ab95a */ goto L_006ab95a;
L_006ab958:; BB(0x006ab958);
    /* 006ab958: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006ab95a:; BB(0x006ab95a);
    /* 006ab95a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab95c: jne 0x6ab974 */ if (!fZ) goto L_006ab974;
L_006ab95e:; BB(0x006ab95e);
    /* 006ab95e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006ab961: test edx, 0x20006 */ {  u32 a = r_edx; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab967: jne 0x6ab974 */ if (!fZ) goto L_006ab974;
L_006ab969:; BB(0x006ab969);
    /* 006ab969: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab96b: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x6ab970u); f_0068aabc();
    /* 006ab970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab972: jne 0x6ab97a */ if (!fZ) goto L_006ab97a;
L_006ab974:; BB(0x006ab974);
    /* 006ab974: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab976: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab978: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab979: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006ab97a:; BB(0x006ab97a);
    /* 006ab97a: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006ab980: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab981: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006ab983: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6ab988u); f_006ad17c();
    /* 006ab988: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ab98c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab98d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ab990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab991: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ab992: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6ab997u); f_006ded14();
    /* 006ab997: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ab99a: movsx ebp, word ptr [ebx + 0x336] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x336u));
    /* 006ab9a1: movsx edx, word ptr [eax + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 006ab9a5: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006ab9a7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ab9a9: jl 0x6ab9db */ if ((fS!=fO)) goto L_006ab9db;
L_006ab9ab:; BB(0x006ab9ab);
    /* 006ab9ab: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab9ae: jne 0x6ab9bc */ if (!fZ) goto L_006ab9bc;
L_006ab9b0:; BB(0x006ab9b0);
    /* 006ab9b0: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6ab9b5u); f_0078b1c4();
    /* 006ab9b5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab9b8: jne 0x6ab9eb */ if (!fZ) goto L_006ab9eb;
L_006ab9ba:; BB(0x006ab9ba);
    /* 006ab9ba: jmp 0x6ab9db */ goto L_006ab9db;
L_006ab9bc:; BB(0x006ab9bc);
    /* 006ab9bc: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab9bf: jne 0x6ab9eb */ if (!fZ) goto L_006ab9eb;
L_006ab9c1:; BB(0x006ab9c1);
    /* 006ab9c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ab9c3: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x6ab9c8u); f_0068bfa0();
    /* 006ab9c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab9ca: jne 0x6ab9d2 */ if (!fZ) goto L_006ab9d2;
L_006ab9cc:; BB(0x006ab9cc);
    /* 006ab9cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab9ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab9cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab9d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab9d1: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006ab9d2:; BB(0x006ab9d2);
    /* 006ab9d2: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ab9d7u); f_00687c48();
    /* 006ab9d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab9d9: je 0x6ab9e1 */ if (fZ) goto L_006ab9e1;
L_006ab9db:; BB(0x006ab9db);
    /* 006ab9db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ab9dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab9de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab9df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab9e0: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006ab9e1:; BB(0x006ab9e1);
    /* 006ab9e1: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6ab9e6u); f_0078b1c4();
    /* 006ab9e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ab9e9: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006ab9eb:; BB(0x006ab9eb);
    /* 006ab9eb: mov eax, 1 */ r_eax = 0x1u;
    /* 006ab9f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab9f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ab9f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ab9f3: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006ab9f4:; BB(0x006ab9f4);
    /* 006ab9f4: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006ab9f7: test edx, 0x20006 */ {  u32 a = r_edx; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab9fd: jne 0x6ab9db */ if (!fZ) goto L_006ab9db;
L_006ab9ff:; BB(0x006ab9ff);
    /* 006ab9ff: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6aba04u); f_00807d60();
    /* 006aba04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba06: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006aba08:; BB(0x006aba08);
    /* 006aba08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aba0a: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x6aba0fu); f_0068aabc();
    /* 006aba0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba11: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006aba13:; BB(0x006aba13);
    /* 006aba13: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006aba19: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006aba1c: je 0x6aba27 */ if (fZ) goto L_006aba27;
L_006aba1e:; BB(0x006aba1e);
    /* 006aba1e: mov eax, 1 */ r_eax = 0x1u;
    /* 006aba23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aba24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aba25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aba26: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
L_006aba27:; BB(0x006aba27);
    /* 006aba27: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006aba29: add ebx, 0xdf8 */ {  u32 a = r_ebx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006aba2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aba31: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6aba36u); f_0069792c();
    /* 006aba36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba38: je 0x6ab9db */ if (fZ) goto L_006ab9db;
L_006aba3a:; BB(0x006aba3a);
    /* 006aba3a: mov ecx, eax */ r_ecx = r_eax;
    /* 006aba3c: call 0x5e9534 */ r_esp -= 4; W32(r_esp, 0x6aba41u); f_005e9534();
    /* 006aba41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aba43: jne 0x6aba1e */ if (!fZ) goto L_006aba1e;
L_006aba45:; BB(0x006aba45);
    /* 006aba45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aba47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aba48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aba49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aba4a: ret  */ FN_RET(0x006ab86a); r_esp += 4; return;
}

void f_006aba4c(void) /* sub_6ABA4C */
{
    FN_ENTER(0x006aba4c);
    /* 006aba4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aba4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aba4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aba4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aba50: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006aba54: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006aba56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba58: je 0x6abab2 */ if (fZ) goto L_006abab2;
L_006aba5a:; BB(0x006aba5a);
    /* 006aba5a: mov esi, dword ptr [eax + 0x45c] */ r_esi = R32((u32)(r_eax+0x45cu));
    /* 006aba60: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba62: je 0x6abab2 */ if (fZ) goto L_006abab2;
L_006aba64:; BB(0x006aba64);
    /* 006aba64: mov eax, dword ptr [esi + 0x10b8] */ r_eax = R32((u32)(r_esi+0x10b8u));
    /* 006aba6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba6c: je 0x6abab2 */ if (fZ) goto L_006abab2;
L_006aba6e:; BB(0x006aba6e);
    /* 006aba6e: movzx ebx, byte ptr [esi + 0x10b4] */ r_ebx = (u32)R8((u32)(r_esi+0x10b4u));
    /* 006aba75: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba78: je 0x6abb14 */ if (fZ) goto L_006abb14;
L_006aba7e:; BB(0x006aba7e);
    /* 006aba7e: movsx edx, word ptr [esp + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 006aba83: movsx eax, word ptr [esp + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 006aba88: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006aba8b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006aba8e: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba90: je 0x6aba96 */ if (fZ) goto L_006aba96;
L_006aba92:; BB(0x006aba92);
    /* 006aba92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aba94: jmp 0x6abaaa */ goto L_006abaaa;
L_006aba96:; BB(0x006aba96);
    /* 006aba96: movzx edx, byte ptr [esi + 0x10b5] */ r_edx = (u32)R8((u32)(r_esi+0x10b5u));
    /* 006aba9d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aba9f: jne 0x6abaa8 */ if (!fZ) goto L_006abaa8;
L_006abaa1:; BB(0x006abaa1);
    /* 006abaa1: mov eax, 1 */ r_eax = 0x1u;
    /* 006abaa6: jmp 0x6abaaa */ goto L_006abaaa;
L_006abaa8:; BB(0x006abaa8);
    /* 006abaa8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006abaaa:; BB(0x006abaaa);
    /* 006abaaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abaac: je 0x6abab2 */ if (fZ) goto L_006abab2;
L_006abaae:; BB(0x006abaae);
    /* 006abaae: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006abab0: jmp 0x6abb0b */ goto L_006abb0b;
L_006abab2:; BB(0x006abab2);
    /* 006abab2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abab4: jne 0x6ababb */ if (!fZ) goto L_006ababb;
L_006abab6:; BB(0x006abab6);
    /* 006abab6: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006abab9: jmp 0x6ababe */ goto L_006ababe;
L_006ababb:; BB(0x006ababb);
    /* 006ababb: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006ababe:; BB(0x006ababe);
    /* 006ababe: movsx edx, word ptr [esp + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 006abac3: movsx ebx, word ptr [esp + 0x18] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 006abac8: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006abacb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006abacd:; BB(0x006abacd);
    /* 006abacd: movzx edi, byte ptr [ecx] */ r_edi = (u32)R8((u32)(r_ecx));
    /* 006abad0: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abad3: je 0x6abb26 */ if (fZ) goto L_006abb26;
L_006abad5:; BB(0x006abad5);
    /* 006abad5: movzx ebp, bl */ r_ebp = (u32)(u8)r_ebx;
    /* 006abad8: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 006abadb: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abadd: je 0x6abae3 */ if (fZ) goto L_006abae3;
L_006abadf:; BB(0x006abadf);
    /* 006abadf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006abae1: jmp 0x6abaf4 */ goto L_006abaf4;
L_006abae3:; BB(0x006abae3);
    /* 006abae3: movzx ebp, byte ptr [ecx + 1] */ r_ebp = (u32)R8((u32)(r_ecx+0x1u));
    /* 006abae7: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abae9: jne 0x6abaf2 */ if (!fZ) goto L_006abaf2;
L_006abaeb:; BB(0x006abaeb);
    /* 006abaeb: mov eax, 1 */ r_eax = 0x1u;
    /* 006abaf0: jmp 0x6abaf4 */ goto L_006abaf4;
L_006abaf2:; BB(0x006abaf2);
    /* 006abaf2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006abaf4:; BB(0x006abaf4);
    /* 006abaf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006abaf6: jne 0x6abb21 */ if (!fZ) goto L_006abb21;
L_006abaf8:; BB(0x006abaf8);
    /* 006abaf8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006abafb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006abafe: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006abb01: jl 0x6abacd */ if ((fS!=fO)) goto L_006abacd;
L_006abb03:; BB(0x006abb03);
    /* 006abb03: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006abb06: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
L_006abb0b:; BB(0x006abb0b);
    /* 006abb0b: mov eax, esi */ r_eax = r_esi;
    /* 006abb0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006abb0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006abb0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006abb10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006abb11: ret 0xc */ FN_RET(0x006aba4c); r_esp += 16; return;
L_006abb14:; BB(0x006abb14);
    /* 006abb14: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 006abb19: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abb1b: jne 0x6abab2 */ if (!fZ) goto L_006abab2;
L_006abb1d:; BB(0x006abb1d);
    /* 006abb1d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006abb1f: jmp 0x6abb0b */ goto L_006abb0b;
L_006abb21:; BB(0x006abb21);
    /* 006abb21: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006abb24: jmp 0x6abb0b */ goto L_006abb0b;
L_006abb26:; BB(0x006abb26);
    /* 006abb26: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006abb28: jne 0x6abaf8 */ if (!fZ) goto L_006abaf8;
L_006abb2a:; BB(0x006abb2a);
    /* 006abb2a: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006abb2d: jmp 0x6abb0b */ goto L_006abb0b;
}

void f_006abb30(void) /* sub_6ABB30 */
{
    FN_ENTER(0x006abb30);
    /* 006abb30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006abb31: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006abb34: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006abb36: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 006abb3d: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 006abb45: mov dword ptr [esp + 8], 2 */ W32((u32)(r_esp+0x8u), 0x2u);
L_006abb4d:; BB(0x006abb4d);
    /* 006abb4d: mov eax, dword ptr [esp + edx*4] */ r_eax = R32((u32)(r_esp+r_edx*4));
    /* 006abb50: movzx ebx, byte ptr [ecx + eax*4 + 0xb0] */ r_ebx = (u32)R8((u32)(r_ecx+r_eax*4+0xb0u));
    /* 006abb58: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006abb5b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abb5d: je 0x6abb6b */ if (fZ) goto L_006abb6b;
L_006abb5f:; BB(0x006abb5f);
    /* 006abb5f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006abb62: jl 0x6abb4d */ if ((fS!=fO)) goto L_006abb4d;
L_006abb64:; BB(0x006abb64);
    /* 006abb64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006abb67: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006abb68: ret 4 */ FN_RET(0x006abb30); r_esp += 8; return;
L_006abb6b:; BB(0x006abb6b);
    /* 006abb6b: movzx edx, word ptr [esp + 0x14] */ r_edx = (u32)R16((u32)(r_esp+0x14u));
    /* 006abb70: mov byte ptr [ecx + eax*4 + 0xb0], 5 */ W8((u32)(r_ecx+r_eax*4+0xb0u), 0x5u);
    /* 006abb78: mov byte ptr [ecx + eax*4 + 0xb1], dl */ W8((u32)(r_ecx+r_eax*4+0xb1u), (u8)r_edx);
    /* 006abb7f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006abb82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006abb83: ret 4 */ FN_RET(0x006abb30); r_esp += 8; return;
}

void f_006abb88(void) /* sub_6ABB88 */
{
    FN_ENTER(0x006abb88);
    /* 006abb88: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006abb8b: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 006abb92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006abb94: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 006abb9c: mov dword ptr [esp + 8], 2 */ W32((u32)(r_esp+0x8u), 0x2u);
    /* 006abba4: mov byte ptr [ecx + 0xb4], al */ W8((u32)(r_ecx+0xb4u), (u8)r_eax);
    /* 006abbaa: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006abbae: mov byte ptr [ecx + edx*4 + 0xb0], al */ W8((u32)(r_ecx+r_edx*4+0xb0u), (u8)r_eax);
    /* 006abbb5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006abbb9: mov byte ptr [ecx + edx*4 + 0xb0], al */ W8((u32)(r_ecx+r_edx*4+0xb0u), (u8)r_eax);
    /* 006abbc0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006abbc3: ret  */ FN_RET(0x006abb88); r_esp += 4; return;
}

void f_006abbc4(void) /* sub_6ABBC4 */
{
    FN_ENTER(0x006abbc4);
    /* 006abbc4: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 006abbc9: mov edx, dword ptr [0xa0f67c] */ r_edx = R32((u32)(0xa0f67cu));
    /* 006abbcf: mov ecx, dword ptr [0xa0f678] */ r_ecx = R32((u32)(0xa0f678u));
    /* 006abbd5: mov dword ptr [0xa94848], eax */ W32((u32)(0xa94848u), r_eax);
    /* 006abbda: mov dword ptr [0xa94838], 0x3f800000 */ W32((u32)(0xa94838u), 0x3f800000u);
    /* 006abbe4: mov dword ptr [0xa9484c], eax */ W32((u32)(0xa9484cu), r_eax);
    /* 006abbe9: mov dword ptr [0xa9483c], 0x41000000 */ W32((u32)(0xa9483cu), 0x41000000u);
    /* 006abbf3: mov dword ptr [0xa94850], edx */ W32((u32)(0xa94850u), r_edx);
    /* 006abbf9: mov dword ptr [0xa94840], 0x3fc00000 */ W32((u32)(0xa94840u), 0x3fc00000u);
    /* 006abc03: mov dword ptr [0xa94854], ecx */ W32((u32)(0xa94854u), r_ecx);
    /* 006abc09: mov dword ptr [0xa94844], 0x47742400 */ W32((u32)(0xa94844u), 0x47742400u);
    /* 006abc13: ret  */ FN_RET(0x006abbc4); r_esp += 4; return;
}

void f_006abc14(void) /* sub_6ABC14 */
{
    FN_ENTER(0x006abc14);
    /* 006abc14: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006abc1a: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 006abc1d: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006abc20:; BB(0x006abc20);
    /* 006abc20: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006abc22: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 006abc24: mov byte ptr [eax + 1], dl */ W8((u32)(r_eax+0x1u), (u8)r_edx);
    /* 006abc27: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 006abc2b: mov byte ptr [eax + 0x38], dl */ W8((u32)(r_eax+0x38u), (u8)r_edx);
    /* 006abc2e: mov byte ptr [eax + 0x39], dl */ W8((u32)(r_eax+0x39u), (u8)r_edx);
    /* 006abc31: mov word ptr [eax + 0x3a], dx */ W16((u32)(r_eax+0x3au), (u16)r_edx);
    /* 006abc35: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006abc38: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006abc3a: ja 0x6abc20 */ if ((!fC&&!fZ)) goto L_006abc20;
L_006abc3c:; BB(0x006abc3c);
    /* 006abc3c: ret  */ FN_RET(0x006abc14); r_esp += 4; return;
}

void f_006abc40(void) /* sub_6ABC40 */
{
    FN_ENTER(0x006abc40);
    /* 006abc40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006abc41: mov ebp, esp */ r_ebp = r_esp;
    /* 006abc43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006abc45: push 0x8ebaa4 */ { u32 v = 0x8ebaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006abc4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006abc50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abc51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006abc58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006abc5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006abc5e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006abc61: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006abc64: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006abc67: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006abc6a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006abc6d: mov eax, ecx */ r_eax = r_ecx;
    /* 006abc6f: mov dword ptr [eax], 0xb3a3a0 */ W32((u32)(r_eax), 0xb3a3a0u);
    /* 006abc75: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006abc7c: call 0x685174 */ r_esp -= 4; W32(r_esp, 0x6abc81u); f_00685174();
    /* 006abc81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006abc84: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006abc86: jne 0x6abc98 */ if (!fZ) goto L_006abc98;
L_006abc88:; BB(0x006abc88);
    /* 006abc88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006abc8b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006abc92: mov esp, ebp */ r_esp = r_ebp;
    /* 006abc94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006abc95: ret 4 */ FN_RET(0x006abc40); r_esp += 8; return;
L_006abc98:; BB(0x006abc98);
    /* 006abc98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006abc9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abc9c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6abca1u); f_005c2f74();
    /* 006abca1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006abca2: jmp 0x6abc88 */ goto L_006abc88;
}

void f_006abca4(void) /* sub_6ABCA4 */
{
    FN_ENTER(0x006abca4);
    /* 006abca4: push dword ptr [0xa94864] */ { u32 v = R32((u32)(0xa94864u)); r_esp -= 4; W32(r_esp, v); }
    /* 006abcaa: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x6abcafu); f_005b9bac();
    /* 006abcaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006abcb0: mov dword ptr [0xa94864], 0 */ W32((u32)(0xa94864u), 0x0u);
    /* 006abcba: call 0x686204 */ r_esp -= 4; W32(r_esp, 0x6abcbfu); f_00686204();
    /* 006abcbf: ret  */ FN_RET(0x006abca4); r_esp += 4; return;
}

void f_006abcc0(void) /* sub_6ABCC0 */
{
    FN_ENTER(0x006abcc0);
    /* 006abcc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006abcc1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006abcc2: mov esi, ecx */ r_esi = r_ecx;
    /* 006abcc4: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006abcc7: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abccc: jne 0x6abd4a */ if (!fZ) goto L_006abd4a;
L_006abcce:; BB(0x006abcce);
    /* 006abcce: mov eax, dword ptr [esi + 0xdf0] */ r_eax = R32((u32)(r_esi+0xdf0u));
    /* 006abcd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006abcd6: jne 0x6abd4a */ if (!fZ) goto L_006abd4a;
L_006abcd8:; BB(0x006abcd8);
    /* 006abcd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006abcd9: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x6abcdeu); f_00794548();
    /* 006abcde: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006abcdf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6abce4u); f_0082d7b0();
    /* 006abce4: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006abce7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006abce9: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x6abceeu); f_008316b4();
    /* 006abcee: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006abcf1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006abcf3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6abcf8u); f_0082d8bc();
    /* 006abcf8: lea ebp, [esi + 0x6e0] */ r_ebp = (u32)(r_esi+0x6e0u);
    /* 006abcfe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006abd00: call 0x69830c */ r_esp -= 4; W32(r_esp, 0x6abd05u); f_0069830c();
    /* 006abd05: mov ecx, esi */ r_ecx = r_esi;
    /* 006abd07: call 0x68a1e4 */ r_esp -= 4; W32(r_esp, 0x6abd0cu); f_0068a1e4();
    /* 006abd0c: lea ecx, [esi + 0xde8] */ r_ecx = (u32)(r_esi+0xde8u);
    /* 006abd12: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6abd17u); f_00829cc8();
    /* 006abd17: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x6abd1cu); f_0082fa9c();
    /* 006abd1c: mov ecx, esi */ r_ecx = r_esi;
    /* 006abd1e: call 0x7aa8c8 */ r_esp -= 4; W32(r_esp, 0x6abd23u); f_007aa8c8();
    /* 006abd23: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x6abd28u); f_0082faac();
    /* 006abd28: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006abd2a: call 0x698348 */ r_esp -= 4; W32(r_esp, 0x6abd2fu); f_00698348();
    /* 006abd2f: mov ecx, esi */ r_ecx = r_esi;
    /* 006abd31: call 0x68a088 */ r_esp -= 4; W32(r_esp, 0x6abd36u); f_0068a088();
    /* 006abd36: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6abd3bu); f_0082da80();
    /* 006abd3b: mov ecx, esi */ r_ecx = r_esi;
    /* 006abd3d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6abd42u); f_0061cdb0();
    /* 006abd42: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x6abd47u); f_00794750();
    /* 006abd47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006abd48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006abd49: ret  */ FN_RET(0x006abcc0); r_esp += 4; return;
L_006abd4a:; BB(0x006abd4a);
    /* 006abd4a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6abd4fu); f_0082d7b0();
    /* 006abd4f: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006abd52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006abd54: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x6abd59u); f_008316b4();
    /* 006abd59: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006abd5c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006abd5e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6abd63u); f_0082d8bc();
    /* 006abd63: push dword ptr [esi + 0xe0] */ { u32 v = R32((u32)(r_esi+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006abd69: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006abd6f: mov ecx, esi */ r_ecx = r_esi;
    /* 006abd71: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006abd77: call 0x7aab2c */ r_esp -= 4; W32(r_esp, 0x6abd7cu); f_007aab2c();
    /* 006abd7c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6abd81u); f_0082da80();
    /* 006abd81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006abd82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006abd83: ret  */ FN_RET(0x006abcc0); r_esp += 4; return;
}

void f_006abd84(void) /* sub_6ABD84 */
{
    FN_ENTER(0x006abd84);
    /* 006abd84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006abd85: mov ebp, esp */ r_ebp = r_esp;
    /* 006abd87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006abd89: push 0x8ebac0 */ { u32 v = 0x8ebac0u; r_esp -= 4; W32(r_esp, v); }
    /* 006abd8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006abd94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abd95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006abd9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006abd9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006abda2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006abda5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006abda8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006abdab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006abdae: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006abdb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abdb2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006abdb5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006abdb8: call 0x6859cc */ r_esp -= 4; W32(r_esp, 0x6abdbdu); f_006859cc();
    /* 006abdbd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006abdc4: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abdc7: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006abdca: mov dword ptr [esi], 0xb3a3a0 */ W32((u32)(r_esi), 0xb3a3a0u);
    /* 006abdd0: mov dword ptr [esi + 0x3ec], 1 */ W32((u32)(r_esi+0x3ecu), 0x1u);
    /* 006abdda: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 006abde0: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006abde3: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 006abde9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abdec: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 006abdef: mov ebx, dword ptr [edi + 0xdc] */ r_ebx = R32((u32)(r_edi+0xdcu));
    /* 006abdf5: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 006abdf8: mov ecx, dword ptr [edi + 0xd0] */ r_ecx = R32((u32)(r_edi+0xd0u));
    /* 006abdfe: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 006abe01: mov ecx, eax */ r_ecx = r_eax;
    /* 006abe03: call 0x6875a0 */ r_esp -= 4; W32(r_esp, 0x6abe08u); f_006875a0();
    /* 006abe08: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abe0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006abe0c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006abe10: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006abe13: add eax, dword ptr [0xa94250] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa94250u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006abe19: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 006abe1f: call 0x6ac748 */ r_esp -= 4; W32(r_esp, 0x6abe24u); f_006ac748();
    /* 006abe24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006abe25: mov edx, dword ptr [0xa94864] */ r_edx = R32((u32)(0xa94864u));
    /* 006abe2b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abe2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006abe30: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006abe32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abe33: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x6abe38u); f_007aa624();
    /* 006abe38: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abe3b: mov eax, edi */ r_eax = r_edi;
    /* 006abe3d: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 006abe43: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 006abe49: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 006abe4f: or ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006abe52: mov dword ptr [ebx + 0xb0], ecx */ W32((u32)(r_ebx+0xb0u), r_ecx);
    /* 006abe58: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6abe5du); f_0082d7b0();
    /* 006abe5d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abe60: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006abe63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006abe65: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x6abe6au); f_008316b4();
    /* 006abe6a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abe6d: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 006abe70: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006abe72: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6abe77u); f_0082d8bc();
    /* 006abe77: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abe7a: push dword ptr [ecx + 0xe0] */ { u32 v = R32((u32)(r_ecx+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006abe80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006abe82: push dword ptr [ecx + 0xf8] */ { u32 v = R32((u32)(r_ecx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006abe88: call 0x7aab2c */ r_esp -= 4; W32(r_esp, 0x6abe8du); f_007aab2c();
    /* 006abe8d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6abe92u); f_0082da80();
    /* 006abe92: mov eax, edi */ r_eax = r_edi;
    /* 006abe94: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abe97: lea edx, [eax + 0x70] */ r_edx = (u32)(r_eax+0x70u);
    /* 006abe9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006abe9b: call 0x6abecc */ r_esp -= 4; W32(r_esp, 0x6abea0u); f_006abecc();
    /* 006abea0: mov eax, edi */ r_eax = r_edi;
    /* 006abea2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abea5: add eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006abeaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abeab: call 0x6abecc */ r_esp -= 4; W32(r_esp, 0x6abeb0u); f_006abecc();
    /* 006abeb0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006abeb3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006abeb6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006abeb9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006abebc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006abebf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006abec6: mov esp, ebp */ r_esp = r_ebp;
    /* 006abec8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006abec9: ret 8 */ FN_RET(0x006abd84); r_esp += 12; return;
}

void f_006abecc(void) /* sub_6ABECC */
{
    FN_ENTER(0x006abecc);
    /* 006abecc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006abecd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006abece: mov esi, ecx */ r_esi = r_ecx;
    /* 006abed0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 006abed4: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006abed7: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006abed9: je 0x6abef4 */ if (fZ) goto L_006abef4;
L_006abedb:; BB(0x006abedb);
    /* 006abedb: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006abee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abee3: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6abee8u); f_005e3aac();
    /* 006abee8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006abee9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006abeea: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 006abeed: mov ecx, esi */ r_ecx = r_esi;
    /* 006abeef: call 0x68f7f0 */ r_esp -= 4; W32(r_esp, 0x6abef4u); f_0068f7f0();
L_006abef4:; BB(0x006abef4);
    /* 006abef4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006abef5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006abef6: ret 4 */ FN_RET(0x006abecc); r_esp += 8; return;
}

void f_006abefc(void) /* sub_6ABEFC */
{
    FN_ENTER(0x006abefc);
    /* 006abefc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006abefd: mov ebp, esp */ r_ebp = r_esp;
    /* 006abeff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006abf01: push 0x8ebae8 */ { u32 v = 0x8ebae8u; r_esp -= 4; W32(r_esp, v); }
    /* 006abf06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006abf0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abf0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006abf14: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006abf1a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006abf1d: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006abf20: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006abf23: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006abf26: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006abf28: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_006abf2b:; BB(0x006abf2b);
    /* 006abf2b: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006abf2e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006abf30: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 006abf33: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006abf35: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006abf37: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006abf39: mov byte ptr [ebp + edx - 0x9f], 0xff */ W8((u32)(r_ebp+r_edx+0xffffff61u), 0xffu);
    /* 006abf41: lea ecx, [ebp + edx - 0x98] */ r_ecx = (u32)(r_ebp+r_edx+0xffffff68u);
    /* 006abf48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006abf4a: mov byte ptr [ebp + edx - 0xa0], al */ W8((u32)(r_ebp+r_edx+0xffffff60u), (u8)r_eax);
    /* 006abf51: mov dword ptr [ebp + edx - 0x9c], eax */ W32((u32)(r_ebp+r_edx+0xffffff64u), r_eax);
    /* 006abf58: mov byte ptr [ebp + edx - 0x9d], al */ W8((u32)(r_ebp+r_edx+0xffffff63u), (u8)r_eax);
    /* 006abf5f: mov byte ptr [ebp + edx - 0x9e], al */ W8((u32)(r_ebp+r_edx+0xffffff62u), (u8)r_eax);
    /* 006abf66: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6abf6bu); f_005d6a3c();
    /* 006abf6b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006abf6e: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006abf71: jl 0x6abf2b */ if ((fS!=fO)) goto L_006abf2b;
L_006abf73:; BB(0x006abf73);
    /* 006abf73: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006abf7a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006abf7c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006abf81: lea eax, [esi + 0x370] */ r_eax = (u32)(r_esi+0x370u);
    /* 006abf87: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006abf8e: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006abf91: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006abf94: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006abf9b: mov word ptr [ebp - 0x30], cx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ecx);
    /* 006abf9f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006abfa6: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006abfa8: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 006abfab: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006abfae: mov dword ptr [ebp - 0x110], ebx */ W32((u32)(r_ebp+0xfffffef0u), r_ebx);
    /* 006abfb4: mov dword ptr [ebp - 0x10c], edi */ W32((u32)(r_ebp+0xfffffef4u), r_edi);
    /* 006abfba: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 006abfc0: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006abfc3: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 006abfc9: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006abfcc: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 006abfd2: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006abfd5: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 006abfdb: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006abfde: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 006abfe4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006abfe7: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 006abfed: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006abff0: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 006abff6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006abff9: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 006abfff: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006ac002: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 006ac008: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006ac00b: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 006ac011: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006ac014: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 006ac01a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006ac01d: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 006ac023: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006ac026: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 006ac02c: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006ac02f: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 006ac035: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006ac038: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 006ac03e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006ac041: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 006ac047: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 006ac04a: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 006ac050: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 006ac053: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 006ac059: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 006ac05c: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 006ac062: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006ac065: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 006ac06b: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 006ac06e: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 006ac074: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 006ac077: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 006ac07d: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 006ac080: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 006ac086: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 006ac089: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 006ac08f: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 006ac092: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 006ac095: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 006ac09b: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 006ac0a1: movzx eax, word ptr [esi + 0x34c] */ r_eax = (u32)R16((u32)(r_esi+0x34cu));
    /* 006ac0a8: movzx edx, word ptr [esi + 0x34e] */ r_edx = (u32)R16((u32)(r_esi+0x34eu));
    /* 006ac0af: movzx ecx, word ptr [esi + 0x350] */ r_ecx = (u32)R16((u32)(r_esi+0x350u));
    /* 006ac0b6: movzx ebx, word ptr [esi + 0x352] */ r_ebx = (u32)R16((u32)(r_esi+0x352u));
    /* 006ac0bd: movzx edi, word ptr [esi + 0x354] */ r_edi = (u32)R16((u32)(r_esi+0x354u));
    /* 006ac0c4: mov word ptr [ebp - 0x68], ax */ W16((u32)(r_ebp+0xffffff98u), (u16)r_eax);
    /* 006ac0c8: movzx eax, word ptr [esi + 0x356] */ r_eax = (u32)R16((u32)(r_esi+0x356u));
    /* 006ac0cf: mov word ptr [ebp - 0x66], dx */ W16((u32)(r_ebp+0xffffff9au), (u16)r_edx);
    /* 006ac0d3: mov word ptr [ebp - 0x64], cx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_ecx);
    /* 006ac0d7: mov word ptr [ebp - 0x62], bx */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_ebx);
    /* 006ac0db: mov word ptr [ebp - 0x60], di */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edi);
    /* 006ac0df: mov word ptr [ebp - 0x5e], ax */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_eax);
    /* 006ac0e3: movzx eax, word ptr [esi + 0x358] */ r_eax = (u32)R16((u32)(r_esi+0x358u));
    /* 006ac0ea: mov word ptr [ebp - 0x5c], ax */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_eax);
    /* 006ac0ee: movzx eax, word ptr [esi + 0x35a] */ r_eax = (u32)R16((u32)(r_esi+0x35au));
    /* 006ac0f5: mov word ptr [ebp - 0x5a], ax */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_eax);
    /* 006ac0f9: mov eax, dword ptr [esi + 0x35c] */ r_eax = R32((u32)(r_esi+0x35cu));
    /* 006ac0ff: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006ac102: mov eax, dword ptr [esi + 0x360] */ r_eax = R32((u32)(r_esi+0x360u));
    /* 006ac108: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006ac10b: mov eax, dword ptr [esi + 0x364] */ r_eax = R32((u32)(r_esi+0x364u));
    /* 006ac111: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006ac114: mov eax, dword ptr [esi + 0x368] */ r_eax = R32((u32)(r_esi+0x368u));
    /* 006ac11a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006ac11d: mov eax, dword ptr [esi + 0x36c] */ r_eax = R32((u32)(r_esi+0x36cu));
    /* 006ac123: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006ac126: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 006ac129: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 006ac12c: lea esi, [ebp - 0xa0] */ r_esi = (u32)(r_ebp+0xffffff60u);
    /* 006ac132: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ac133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac134: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ac135: call 0x6a6d38 */ r_esp -= 4; W32(r_esp, 0x6ac13au); f_006a6d38();
    /* 006ac13a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006ac141: push 0xec0 */ { u32 v = 0xec0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ac146: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ac14bu); f_005caba4();
    /* 006ac14b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ac14e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ac151: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006ac154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ac156: je 0x6ac19b */ if (fZ) goto L_006ac19b;
L_006ac158:; BB(0x006ac158);
    /* 006ac158: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006ac15f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ac166: mov ecx, eax */ r_ecx = r_eax;
    /* 006ac168: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 006ac16e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ac16f: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ac175: call 0x6abd84 */ r_esp -= 4; W32(r_esp, 0x6ac17au); f_006abd84();
    /* 006ac17a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006ac181:; BB(0x006ac181);
    /* 006ac181: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ac184: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ac187: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ac18a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ac18d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ac190: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ac197: mov esp, ebp */ r_esp = r_ebp;
    /* 006ac199: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ac19a: ret  */ FN_RET(0x006abefc); r_esp += 4; return;
L_006ac19b:; BB(0x006ac19b);
    /* 006ac19b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ac19d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ac1a0: jmp 0x6ac181 */ goto L_006ac181;
}

