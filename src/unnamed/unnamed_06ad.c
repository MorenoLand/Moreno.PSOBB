#include "protos.h"

void f_006ad060(void) /* sub_6AD060 */
{
    FN_ENTER(0x006ad060);
    /* 006ad060: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006ad065: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006ad06a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad06f: jne 0x6ad074 */ if (!fZ) goto L_006ad074;
L_006ad071:; BB(0x006ad071);
    /* 006ad071: ret 8 */ FN_RET(0x006ad060); r_esp += 12; return;
L_006ad074:; BB(0x006ad074);
    /* 006ad074: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad076: jle 0x6ad071 */ if ((fZ||fS!=fO)) goto L_006ad071;
L_006ad078:; BB(0x006ad078);
    /* 006ad078: mov eax, edx */ r_eax = r_edx;
    /* 006ad07a: ret 8 */ FN_RET(0x006ad060); r_esp += 12; return;
}

void f_006ad080(void) /* sub_6AD080 */
{
    FN_ENTER(0x006ad080);
    /* 006ad080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad081: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad082: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad083: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad084: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ad086: mov esi, eax */ r_esi = r_eax;
    /* 006ad088: mov edi, ecx */ r_edi = r_ecx;
L_006ad08a:; BB(0x006ad08a);
    /* 006ad08a: mov eax, esi */ r_eax = r_esi;
    /* 006ad08c: call 0x6acf4d */ r_esp -= 4; W32(r_esp, 0x6ad091u); f_006acf4d();
    /* 006ad091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad093: jne 0x6ad099 */ if (!fZ) goto L_006ad099;
L_006ad095:; BB(0x006ad095);
    /* 006ad095: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ad097: jmp 0x6ad0c1 */ goto L_006ad0c1;
L_006ad099:; BB(0x006ad099);
    /* 006ad099: movzx ebx, byte ptr [esi + edi + 0x48] */ r_ebx = (u32)R8((u32)(r_esi+r_edi+0x48u));
    /* 006ad09e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad09f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad0a0: mov ecx, edi */ r_ecx = r_edi;
    /* 006ad0a2: call 0x6acec8 */ r_esp -= 4; W32(r_esp, 0x6ad0a7u); f_006acec8();
    /* 006ad0a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad0a9: jne 0x6ad0b0 */ if (!fZ) goto L_006ad0b0;
L_006ad0ab:; BB(0x006ad0ab);
    /* 006ad0ab: mov ebx, 0x1d */ r_ebx = 0x1du;
L_006ad0b0:; BB(0x006ad0b0);
    /* 006ad0b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad0b1: mov ecx, edi */ r_ecx = r_edi;
    /* 006ad0b3: call 0x6acf08 */ r_esp -= 4; W32(r_esp, 0x6ad0b8u); f_006acf08();
    /* 006ad0b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad0b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad0ba: mov ecx, edi */ r_ecx = r_edi;
    /* 006ad0bc: call 0x6ad060 */ r_esp -= 4; W32(r_esp, 0x6ad0c1u); f_006ad060();
L_006ad0c1:; BB(0x006ad0c1);
    /* 006ad0c1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ad0c4: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad0c9: je 0x6ad0d4 */ if (fZ) goto L_006ad0d4;
L_006ad0cb:; BB(0x006ad0cb);
    /* 006ad0cb: movzx edx, byte ptr [esp + 0x14] */ r_edx = (u32)R8((u32)(r_esp+0x14u));
    /* 006ad0d0: mov byte ptr [esi + edi + 0x48], dl */ W8((u32)(r_esi+r_edi+0x48u), (u8)r_edx);
L_006ad0d4:; BB(0x006ad0d4);
    /* 006ad0d4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ad0d7: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad0da: jl 0x6ad08a */ if ((fS!=fO)) goto L_006ad08a;
L_006ad0dc:; BB(0x006ad0dc);
    /* 006ad0dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad0dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad0de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad0df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ad0e0: ret 4 */ FN_RET(0x006ad080); r_esp += 8; return;
}

void f_006ad0e4(void) /* sub_6AD0E4 */
{
    FN_ENTER(0x006ad0e4);
    /* 006ad0e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad0e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad0e8: movsx eax, byte ptr [esp + 0x10] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x10u));
    /* 006ad0ed: movsx edx, word ptr [esp + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 006ad0f2: movzx esi, byte ptr [esp + 0x18] */ r_esi = (u32)R8((u32)(r_esp+0x18u));
    /* 006ad0f7: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad0fd: jne 0x6ad109 */ if (!fZ) goto L_006ad109;
L_006ad0ff:; BB(0x006ad0ff);
    /* 006ad0ff: mov eax, 1 */ r_eax = 0x1u;
    /* 006ad104: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ad107: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad108: ret  */ FN_RET(0x006ad0e4); r_esp += 4; return;
L_006ad109:; BB(0x006ad109);
    /* 006ad109: call 0x6ad126 */ r_esp -= 4; W32(r_esp, 0x6ad10eu); f_006ad126();
    /* 006ad10e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ad111: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ad113: jle 0x6ad0ff */ if ((fZ||fS!=fO)) goto L_006ad0ff;
L_006ad115:; BB(0x006ad115);
    /* 006ad115: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ad117: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ad11a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad11b: ret  */ FN_RET(0x006ad0e4); r_esp += 4; return;
}

void f_006ad126(void) /* sub_6AD126 */
{
    FN_ENTER(0x006ad126);
    /* 006ad126: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad127: mov ebp, edx */ r_ebp = r_edx;
    /* 006ad129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad12a: call 0x68c45c */ r_esp -= 4; W32(r_esp, 0x6ad12fu); f_0068c45c();
    /* 006ad12f: movsx ecx, bp */ r_ecx = (u32)(i32)(i16)(u16)r_ebp;
    /* 006ad132: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ad135: mov edx, dword ptr [eax*4 + 0x9cc520] */ r_edx = R32((u32)(r_eax*4+0x9cc520u));
    /* 006ad13c: movzx eax, byte ptr [edx + ecx] */ r_eax = (u32)R8((u32)(r_edx+r_ecx));
    /* 006ad140: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad141: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad142: ret  */ FN_RET(0x006ad126); r_esp += 4; return;
}

void f_006ad144(void) /* sub_6AD144 */
{
    FN_ENTER(0x006ad144);
    /* 006ad144: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006ad149: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad14c: mov eax, 0 */ r_eax = 0x0u;
    /* 006ad151: setle al */ r_eax = (r_eax & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 006ad154: ret  */ FN_RET(0x006ad144); r_esp += 4; return;
}

void f_006ad158(void) /* sub_6AD158 */
{
    FN_ENTER(0x006ad158);
    /* 006ad158: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006ad15d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad15e: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x6ad163u); f_006ad17c();
    /* 006ad163: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ad166: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad16b: jne 0x6ad175 */ if (!fZ) goto L_006ad175;
L_006ad16d:; BB(0x006ad16d);
    /* 006ad16d: mov eax, 1 */ r_eax = 0x1u;
    /* 006ad172: ret 4 */ FN_RET(0x006ad158); r_esp += 8; return;
L_006ad175:; BB(0x006ad175);
    /* 006ad175: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad177: ret 4 */ FN_RET(0x006ad158); r_esp += 8; return;
}

void f_006ad17c(void) /* sub_6AD17C */
{
    FN_ENTER(0x006ad17c);
    /* 006ad17c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad17d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad17e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad17f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad180: mov edi, ecx */ r_edi = r_ecx;
    /* 006ad182: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 006ad187: mov eax, esi */ r_eax = r_esi;
    /* 006ad189: call 0x6acf4d */ r_esp -= 4; W32(r_esp, 0x6ad18eu); f_006acf4d();
    /* 006ad18e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad190: jne 0x6ad19b */ if (!fZ) goto L_006ad19b;
L_006ad192:; BB(0x006ad192);
    /* 006ad192: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad195: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad196: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad197: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ad198: ret 4 */ FN_RET(0x006ad17c); r_esp += 8; return;
L_006ad19b:; BB(0x006ad19b);
    /* 006ad19b: movzx ebx, byte ptr [esi + edi + 0x48] */ r_ebx = (u32)R8((u32)(r_esi+r_edi+0x48u));
    /* 006ad1a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad1a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad1a2: mov ecx, edi */ r_ecx = r_edi;
    /* 006ad1a4: call 0x6acec8 */ r_esp -= 4; W32(r_esp, 0x6ad1a9u); f_006acec8();
    /* 006ad1a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad1ab: jne 0x6ad1b2 */ if (!fZ) goto L_006ad1b2;
L_006ad1ad:; BB(0x006ad1ad);
    /* 006ad1ad: mov ebx, 0x1d */ r_ebx = 0x1du;
L_006ad1b2:; BB(0x006ad1b2);
    /* 006ad1b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad1b3: mov ecx, edi */ r_ecx = r_edi;
    /* 006ad1b5: call 0x6acf08 */ r_esp -= 4; W32(r_esp, 0x6ad1bau); f_006acf08();
    /* 006ad1ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad1bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad1bc: mov ecx, edi */ r_ecx = r_edi;
    /* 006ad1be: call 0x6ad060 */ r_esp -= 4; W32(r_esp, 0x6ad1c3u); f_006ad060();
    /* 006ad1c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad1c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad1c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad1c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ad1c7: ret 4 */ FN_RET(0x006ad17c); r_esp += 8; return;
}

void f_006ad1cc(void) /* sub_6AD1CC */
{
    FN_ENTER(0x006ad1cc);
    /* 006ad1cc: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006ad1d1: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad1d7: mov eax, 0 */ r_eax = 0x0u;
    /* 006ad1dc: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006ad1df: ret  */ FN_RET(0x006ad1cc); r_esp += 4; return;
}

void f_006ad1e0(void) /* sub_6AD1E0 */
{
    FN_ENTER(0x006ad1e0);
    /* 006ad1e0: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 006ad1e4: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad1e7: jle 0x6ad1eb */ if ((fZ||fS!=fO)) goto L_006ad1eb;
L_006ad1e9:; BB(0x006ad1e9);
    /* 006ad1e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006ad1eb:; BB(0x006ad1eb);
    /* 006ad1eb: ret  */ FN_RET(0x006ad1e0); r_esp += 4; return;
}

void f_006ad1ec(void) /* sub_6AD1EC */
{
    FN_ENTER(0x006ad1ec);
    /* 006ad1ec: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006ad1f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ad1f3: jl 0x6ad1fa */ if ((fS!=fO)) goto L_006ad1fa;
L_006ad1f5:; BB(0x006ad1f5);
    /* 006ad1f5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad1f8: jle 0x6ad1fc */ if ((fZ||fS!=fO)) goto L_006ad1fc;
L_006ad1fa:; BB(0x006ad1fa);
    /* 006ad1fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006ad1fc:; BB(0x006ad1fc);
    /* 006ad1fc: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
    /* 006ad200: ret 4 */ FN_RET(0x006ad1ec); r_esp += 8; return;
}

void f_006ad204(void) /* sub_6AD204 */
{
    FN_ENTER(0x006ad204);
    /* 006ad204: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 006ad208: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ad20a: jl 0x6ad211 */ if ((fS!=fO)) goto L_006ad211;
L_006ad20c:; BB(0x006ad20c);
    /* 006ad20c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad20f: jle 0x6ad219 */ if ((fZ||fS!=fO)) goto L_006ad219;
L_006ad211:; BB(0x006ad211);
    /* 006ad211: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ad213: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad215: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
L_006ad219:; BB(0x006ad219);
    /* 006ad219: mov eax, edx */ r_eax = r_edx;
    /* 006ad21b: ret  */ FN_RET(0x006ad204); r_esp += 4; return;
}

void f_006ad21c(void) /* sub_6AD21C */
{
    FN_ENTER(0x006ad21c);
    /* 006ad21c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ad220: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006ad225: mov word ptr [ecx + eax*4 + 0x20], dx */ W16((u32)(r_ecx+r_eax*4+0x20u), (u16)r_edx);
    /* 006ad22a: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006ad22f: mov word ptr [ecx + eax*4 + 0x22], dx */ W16((u32)(r_ecx+r_eax*4+0x22u), (u16)r_edx);
    /* 006ad234: ret 0xc */ FN_RET(0x006ad21c); r_esp += 16; return;
}

void f_006ad238(void) /* sub_6AD238 */
{
    FN_ENTER(0x006ad238);
    /* 006ad238: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006ad23d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006ad241: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006ad245: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad24b: je 0x6ad25b */ if (fZ) goto L_006ad25b;
L_006ad24d:; BB(0x006ad24d);
    /* 006ad24d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad250: jle 0x6ad25b */ if ((fZ||fS!=fO)) goto L_006ad25b;
L_006ad252:; BB(0x006ad252);
    /* 006ad252: mov byte ptr [ecx], 0xe */ W8((u32)(r_ecx), 0xeu);
    /* 006ad255: lea edx, [edx - 0xe] */ r_edx = (u32)(r_edx+0xfffffff2u);
    /* 006ad258: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 006ad25a: ret  */ FN_RET(0x006ad238); r_esp += 4; return;
L_006ad25b:; BB(0x006ad25b);
    /* 006ad25b: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 006ad25d: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 006ad260: ret  */ FN_RET(0x006ad238); r_esp += 4; return;
}

void f_006ad264(void) /* sub_6AD264 */
{
    FN_ENTER(0x006ad264);
    /* 006ad264: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad265: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad266: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad267: movsx edx, byte ptr [esp + 0x10] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x10u));
    /* 006ad26c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ad26e: mov ebx, eax */ r_ebx = r_eax;
    /* 006ad270: mov esi, edx */ r_esi = r_edx;
    /* 006ad272: mov edi, ecx */ r_edi = r_ecx;
L_006ad274:; BB(0x006ad274);
    /* 006ad274: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad275: call 0x68c45c */ r_esp -= 4; W32(r_esp, 0x6ad27au); f_0068c45c();
    /* 006ad27a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad27b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ad27e: mov eax, dword ptr [eax*4 + 0x9cc520] */ r_eax = R32((u32)(r_eax*4+0x9cc520u));
    /* 006ad285: movzx eax, byte ptr [ebx + eax] */ r_eax = (u32)R8((u32)(r_ebx+r_eax));
    /* 006ad289: mov byte ptr [ebx + edi + 0x5c], al */ W8((u32)(r_ebx+r_edi+0x5cu), (u8)r_eax);
    /* 006ad28d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ad290: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad293: jl 0x6ad274 */ if ((fS!=fO)) goto L_006ad274;
L_006ad295:; BB(0x006ad295);
    /* 006ad295: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad296: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad297: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ad298: ret 4 */ FN_RET(0x006ad264); r_esp += 8; return;
}

void f_006ad29c(void) /* sub_6AD29C */
{
    FN_ENTER(0x006ad29c);
    /* 006ad29c: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 006ad2a1: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006ad2a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad2a7: mov esi, edx */ r_esi = r_edx;
    /* 006ad2a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad2aa: call 0x68c45c */ r_esp -= 4; W32(r_esp, 0x6ad2afu); f_0068c45c();
    /* 006ad2af: movsx ecx, si */ r_ecx = (u32)(i32)(i16)(u16)r_esi;
    /* 006ad2b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006ad2b5: mov edx, dword ptr [eax*4 + 0x9cc550] */ r_edx = R32((u32)(r_eax*4+0x9cc550u));
    /* 006ad2bc: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 006ad2bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad2c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad2c1: ret  */ FN_RET(0x006ad29c); r_esp += 4; return;
}

void f_006ad2c4(void) /* sub_6AD2C4 */
{
    FN_ENTER(0x006ad2c4);
    /* 006ad2c4: mov dword ptr [0xa94880], 0x3f800000 */ W32((u32)(0xa94880u), 0x3f800000u);
    /* 006ad2ce: mov dword ptr [0xa94884], 0x41000000 */ W32((u32)(0xa94884u), 0x41000000u);
    /* 006ad2d8: mov dword ptr [0xa94888], 0x3fc00000 */ W32((u32)(0xa94888u), 0x3fc00000u);
    /* 006ad2e2: ret  */ FN_RET(0x006ad2c4); r_esp += 4; return;
}

void f_006ad2e4(void) /* sub_6AD2E4 */
{
    FN_ENTER(0x006ad2e4);
    /* 006ad2e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad2e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ad2e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ad2e9: call 0x6ad308 */ r_esp -= 4; W32(r_esp, 0x6ad2eeu); f_006ad308();
    /* 006ad2ee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ad2f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad2f4: jne 0x6ad2fa */ if (!fZ) goto L_006ad2fa;
L_006ad2f6:; BB(0x006ad2f6);
    /* 006ad2f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad2f7: ret 4 */ FN_RET(0x006ad2e4); r_esp += 8; return;
L_006ad2fa:; BB(0x006ad2fa);
    /* 006ad2fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad2fb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ad300u); f_005c2f74();
    /* 006ad300: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad301: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad302: ret 4 */ FN_RET(0x006ad2e4); r_esp += 8; return;
}

void f_006ad308(void) /* sub_6AD308 */
{
    FN_ENTER(0x006ad308);
    /* 006ad308: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad309: mov ebp, esp */ r_ebp = r_esp;
    /* 006ad30b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad30d: push 0x8ebc00 */ { u32 v = 0x8ebc00u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad312: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ad318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad319: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ad320: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad323: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ad326: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ad329: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ad32c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ad32f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ad332: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ad335: mov dword ptr [ecx], 0xb3a650 */ W32((u32)(r_ecx), 0xb3a650u);
    /* 006ad33b: mov dword ptr [0xa9488c], 0 */ W32((u32)(0xa9488cu), 0x0u);
    /* 006ad345: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ad34c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ad351u); f_008171e8();
    /* 006ad351: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ad354: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ad35b: mov esp, ebp */ r_esp = r_ebp;
    /* 006ad35d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad35e: ret  */ FN_RET(0x006ad308); r_esp += 4; return;
}

void f_006ad360(void) /* sub_6AD360 */
{
    FN_ENTER(0x006ad360);
    /* 006ad360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad361: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad364: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ad366: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006ad369: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ad36c: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 006ad36f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ad371: jle 0x6ad3b7 */ if ((fZ||fS!=fO)) goto L_006ad3b7;
L_006ad373:; BB(0x006ad373);
    /* 006ad373: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ad376: jg 0x6ad3b2 */ if ((!fZ&&fS==fO)) goto L_006ad3b2;
L_006ad378:; BB(0x006ad378);
    /* 006ad378: fild dword ptr [ebp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x20u)));
    /* 006ad37b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006ad37e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006ad381: fmul dword ptr [0x9694c0] */ ST(0) = ST(0) * R_F32((u32)(0x9694c0u));
    /* 006ad387: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006ad389: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006ad38d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006ad392: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ad397: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006ad39b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006ad39f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006ad3a3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006ad3a7: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006ad3ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad3ac: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x6ad3b1u); f_00814888();
    /* 006ad3b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ad3b2:; BB(0x006ad3b2);
    /* 006ad3b2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ad3b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad3b6: ret  */ FN_RET(0x006ad360); r_esp += 4; return;
L_006ad3b7:; BB(0x006ad3b7);
    /* 006ad3b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad3b9: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x6ad3beu); f_00814888();
    /* 006ad3be: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006ad3c2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ad3c7: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006ad3cb: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ad3ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad3cf: ret  */ FN_RET(0x006ad360); r_esp += 4; return;
}

void f_006ad3d0(void) /* sub_6AD3D0 */
{
    FN_ENTER(0x006ad3d0);
    /* 006ad3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ad3d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad3d5: push 0x8ebc28 */ { u32 v = 0x8ebc28u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad3da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ad3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad3e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ad3e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad3eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ad3ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ad3f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ad3f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ad3f7: mov edx, dword ptr [0xa9488c] */ r_edx = R32((u32)(0xa9488cu));
    /* 006ad3fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad3ff: je 0x6ad422 */ if (fZ) goto L_006ad422;
L_006ad401:; BB(0x006ad401);
    /* 006ad401: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006ad404: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006ad407: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad408: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006ad40b: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006ad40e: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x6ad413u); f_00814888();
    /* 006ad413: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ad414:; BB(0x006ad414);
    /* 006ad414: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ad417: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ad41e: mov esp, ebp */ r_esp = r_ebp;
    /* 006ad420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad421: ret  */ FN_RET(0x006ad3d0); r_esp += 4; return;
L_006ad422:; BB(0x006ad422);
    /* 006ad422: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ad429: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad42b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ad430u); f_005caba4();
    /* 006ad430: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad431: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ad434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad436: je 0x6ad46d */ if (fZ) goto L_006ad46d;
L_006ad438:; BB(0x006ad438);
    /* 006ad438: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006ad43f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ad446: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006ad449: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006ad44c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ad44f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad451: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ad457: call 0x6ad474 */ r_esp -= 4; W32(r_esp, 0x6ad45cu); f_006ad474();
    /* 006ad45c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ad45f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006ad466:; BB(0x006ad466);
    /* 006ad466: mov dword ptr [0xa9488c], eax */ W32((u32)(0xa9488cu), r_eax);
    /* 006ad46b: jmp 0x6ad414 */ goto L_006ad414;
L_006ad46d:; BB(0x006ad46d);
    /* 006ad46d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad46f: jmp 0x6ad466 */ goto L_006ad466;
}

void f_006ad474(void) /* sub_6AD474 */
{
    FN_ENTER(0x006ad474);
    /* 006ad474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad475: mov ebp, esp */ r_ebp = r_esp;
    /* 006ad477: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad479: push 0x8ebc44 */ { u32 v = 0x8ebc44u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad47e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ad484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad485: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ad48c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad48f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ad492: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006ad495: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006ad498: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006ad49b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006ad49e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ad4a1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006ad4a4: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006ad4a7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ad4aa: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006ad4ad: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6ad4b2u); f_008193cc();
    /* 006ad4b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ad4b9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ad4bc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ad4bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ad4c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad4c3: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006ad4c6: mov dword ptr [edx], 0xb3a650 */ W32((u32)(r_edx), 0xb3a650u);
    /* 006ad4cc: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006ad4cf: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x6ad4d4u); f_00814888();
    /* 006ad4d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad4d5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ad4d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ad4db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ad4e2: mov esp, ebp */ r_esp = r_ebp;
    /* 006ad4e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad4e5: ret 0xc */ FN_RET(0x006ad474); r_esp += 16; return;
}

void f_006ad4e8(void) /* sub_6AD4E8 */
{
    FN_ENTER(0x006ad4e8);
    /* 006ad4e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad4e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ad4eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ad4ed: call 0x6ad50c */ r_esp -= 4; W32(r_esp, 0x6ad4f2u); f_006ad50c();
    /* 006ad4f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ad4f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad4f8: jne 0x6ad4fe */ if (!fZ) goto L_006ad4fe;
L_006ad4fa:; BB(0x006ad4fa);
    /* 006ad4fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad4fb: ret 4 */ FN_RET(0x006ad4e8); r_esp += 8; return;
L_006ad4fe:; BB(0x006ad4fe);
    /* 006ad4fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad4ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ad504u); f_005c2f74();
    /* 006ad504: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad505: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad506: ret 4 */ FN_RET(0x006ad4e8); r_esp += 8; return;
}

void f_006ad50c(void) /* sub_6AD50C */
{
    FN_ENTER(0x006ad50c);
    /* 006ad50c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad50d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ad50f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad511: push 0x8ebc60 */ { u32 v = 0x8ebc60u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad516: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ad51c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad51d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ad524: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad527: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ad52a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ad52d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ad530: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ad533: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ad536: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ad53d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ad540: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006ad543: mov dword ptr [ecx], 0xb3a7f0 */ W32((u32)(r_ecx), 0xb3a7f0u);
    /* 006ad549: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad54c: je 0x6ad55d */ if (fZ) goto L_006ad55d;
L_006ad54e:; BB(0x006ad54e);
    /* 006ad54e: mov dword ptr [ecx + 0x20], 0xffffffff */ W32((u32)(r_ecx+0x20u), 0xffffffffu);
    /* 006ad555: call 0x6ad678 */ r_esp -= 4; W32(r_esp, 0x6ad55au); f_006ad678();
    /* 006ad55a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006ad55d:; BB(0x006ad55d);
    /* 006ad55d: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 006ad560: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad562: je 0x6ad56e */ if (fZ) goto L_006ad56e;
L_006ad564:; BB(0x006ad564);
    /* 006ad564: mov ecx, eax */ r_ecx = r_eax;
    /* 006ad566: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ad56bu); f_007127b0();
    /* 006ad56b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006ad56e:; BB(0x006ad56e);
    /* 006ad56e: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 006ad571: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad573: je 0x6ad587 */ if (fZ) goto L_006ad587;
L_006ad575:; BB(0x006ad575);
    /* 006ad575: mov ecx, eax */ r_ecx = r_eax;
    /* 006ad577: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ad57cu); f_007127b0();
    /* 006ad57c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad57e: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ad583u); f_00791748();
    /* 006ad583: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad584: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006ad587:; BB(0x006ad587);
    /* 006ad587: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 006ad58a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad58c: je 0x6ad5a0 */ if (fZ) goto L_006ad5a0;
L_006ad58e:; BB(0x006ad58e);
    /* 006ad58e: mov ecx, eax */ r_ecx = r_eax;
    /* 006ad590: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ad595u); f_007127b0();
    /* 006ad595: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad597: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ad59cu); f_00791748();
    /* 006ad59c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad59d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006ad5a0:; BB(0x006ad5a0);
    /* 006ad5a0: mov dword ptr [0xa94b28], 0 */ W32((u32)(0xa94b28u), 0x0u);
    /* 006ad5aa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ad5b1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ad5b6u); f_008171e8();
    /* 006ad5b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ad5b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ad5c0: mov esp, ebp */ r_esp = r_ebp;
    /* 006ad5c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad5c3: ret  */ FN_RET(0x006ad50c); r_esp += 4; return;
}

void f_006ad5c4(void) /* sub_6AD5C4 */
{
    FN_ENTER(0x006ad5c4);
    /* 006ad5c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad5c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ad5c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ad5c9: call 0x6ad5e8 */ r_esp -= 4; W32(r_esp, 0x6ad5ceu); f_006ad5e8();
    /* 006ad5ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ad5d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad5d4: jne 0x6ad5da */ if (!fZ) goto L_006ad5da;
L_006ad5d6:; BB(0x006ad5d6);
    /* 006ad5d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad5d7: ret 4 */ FN_RET(0x006ad5c4); r_esp += 8; return;
L_006ad5da:; BB(0x006ad5da);
    /* 006ad5da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad5db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ad5e0u); f_005c2f74();
    /* 006ad5e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad5e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad5e2: ret 4 */ FN_RET(0x006ad5c4); r_esp += 8; return;
}

void f_006ad5e8(void) /* sub_6AD5E8 */
{
    FN_ENTER(0x006ad5e8);
    /* 006ad5e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad5e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006ad5eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad5ed: push 0x8ebc7c */ { u32 v = 0x8ebc7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad5f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ad5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad5f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ad600: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad603: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ad606: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ad609: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ad60c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ad60f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ad612: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ad615: mov dword ptr [ecx], 0xb3a800 */ W32((u32)(r_ecx), 0xb3a800u);
    /* 006ad61b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ad622: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6ad627u); f_008171e8();
    /* 006ad627: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ad62a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ad631: mov esp, ebp */ r_esp = r_ebp;
    /* 006ad633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad634: ret  */ FN_RET(0x006ad5e8); r_esp += 4; return;
}

void f_006ad638(void) /* sub_6AD638 */
{
    FN_ENTER(0x006ad638);
    /* 006ad638: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad639: mov esi, ecx */ r_esi = r_ecx;
    /* 006ad63b: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006ad640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad642: jne 0x6ad676 */ if (!fZ) goto L_006ad676;
L_006ad644:; BB(0x006ad644);
    /* 006ad644: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006ad647: cmp edx, dword ptr [esi + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad64a: je 0x6ad66f */ if (fZ) goto L_006ad66f;
L_006ad64c:; BB(0x006ad64c);
    /* 006ad64c: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006ad64f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad652: je 0x6ad665 */ if (fZ) goto L_006ad665;
L_006ad654:; BB(0x006ad654);
    /* 006ad654: mov dword ptr [esi + 0x20], 0xffffffff */ W32((u32)(r_esi+0x20u), 0xffffffffu);
    /* 006ad65b: mov ecx, esi */ r_ecx = r_esi;
    /* 006ad65d: call 0x6ad678 */ r_esp -= 4; W32(r_esp, 0x6ad662u); f_006ad678();
    /* 006ad662: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
L_006ad665:; BB(0x006ad665);
    /* 006ad665: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 006ad66c: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
L_006ad66f:; BB(0x006ad66f);
    /* 006ad66f: mov ecx, esi */ r_ecx = r_esi;
    /* 006ad671: call 0x6ad678 */ r_esp -= 4; W32(r_esp, 0x6ad676u); f_006ad678();
L_006ad676:; BB(0x006ad676);
    /* 006ad676: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ad677: ret  */ FN_RET(0x006ad638); r_esp += 4; return;
}

void f_006ad678(void) /* sub_6AD678 */
{
    FN_ENTER(0x006ad678);
    /* 006ad678: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006ad67b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad67d: je 0x6ad6c1 */ if (fZ) goto L_006ad6c1;
L_006ad67f:; BB(0x006ad67f);
    /* 006ad67f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad682: je 0x6ad6bb */ if (fZ) goto L_006ad6bb;
L_006ad684:; BB(0x006ad684);
    /* 006ad684: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad687: je 0x6ad6b5 */ if (fZ) goto L_006ad6b5;
L_006ad689:; BB(0x006ad689);
    /* 006ad689: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad68c: je 0x6ad6af */ if (fZ) goto L_006ad6af;
L_006ad68e:; BB(0x006ad68e);
    /* 006ad68e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad691: je 0x6ad6a9 */ if (fZ) goto L_006ad6a9;
L_006ad693:; BB(0x006ad693);
    /* 006ad693: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad696: jne 0x6ad69e */ if (!fZ) goto L_006ad69e;
L_006ad698:; BB(0x006ad698);
    /* 006ad698: call 0x6ad824 */ r_esp -= 4; W32(r_esp, 0x6ad69du); f_006ad824();
    /* 006ad69d: ret  */ FN_RET(0x006ad678); r_esp += 4; return;
L_006ad69e:; BB(0x006ad69e);
    /* 006ad69e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad6a1: jne 0x6ad6ae */ if (!fZ) goto L_006ad6ae;
L_006ad6a3:; BB(0x006ad6a3);
    /* 006ad6a3: call 0x6ad6c8 */ r_esp -= 4; W32(r_esp, 0x6ad6a8u); f_006ad6c8();
    /* 006ad6a8: ret  */ FN_RET(0x006ad678); r_esp += 4; return;
L_006ad6a9:; BB(0x006ad6a9);
    /* 006ad6a9: call 0x6ad954 */ r_esp -= 4; W32(r_esp, 0x6ad6aeu); f_006ad954();
L_006ad6ae:; BB(0x006ad6ae);
    /* 006ad6ae: ret  */ FN_RET(0x006ad678); r_esp += 4; return;
L_006ad6af:; BB(0x006ad6af);
    /* 006ad6af: call 0x6ad9a8 */ r_esp -= 4; W32(r_esp, 0x6ad6b4u); f_006ad9a8();
    /* 006ad6b4: ret  */ FN_RET(0x006ad678); r_esp += 4; return;
L_006ad6b5:; BB(0x006ad6b5);
    /* 006ad6b5: call 0x6aea34 */ r_esp -= 4; W32(r_esp, 0x6ad6bau); f_006aea34();
    /* 006ad6ba: ret  */ FN_RET(0x006ad678); r_esp += 4; return;
L_006ad6bb:; BB(0x006ad6bb);
    /* 006ad6bb: call 0x6af54c */ r_esp -= 4; W32(r_esp, 0x6ad6c0u); f_006af54c();
    /* 006ad6c0: ret  */ FN_RET(0x006ad678); r_esp += 4; return;
L_006ad6c1:; BB(0x006ad6c1);
    /* 006ad6c1: call 0x6b06ac */ r_esp -= 4; W32(r_esp, 0x6ad6c6u); f_006b06ac();
    /* 006ad6c6: ret  */ FN_RET(0x006ad678); r_esp += 4; return;
}

void f_006ad6c8(void) /* sub_6AD6C8 */
{
    FN_ENTER(0x006ad6c8);
    /* 006ad6c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad6c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ad6cb: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006ad6ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad6d0: je 0x6ad74b */ if (fZ) goto L_006ad74b;
L_006ad6d2:; BB(0x006ad6d2);
    /* 006ad6d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad6d5: je 0x6ad700 */ if (fZ) goto L_006ad700;
L_006ad6d7:; BB(0x006ad6d7);
    /* 006ad6d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ad6da: jne 0x6ad70d */ if (!fZ) goto L_006ad70d;
L_006ad6dc:; BB(0x006ad6dc);
    /* 006ad6dc: mov eax, dword ptr [0xa94b34] */ r_eax = R32((u32)(0xa94b34u));
    /* 006ad6e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad6e3: je 0x6ad70d */ if (fZ) goto L_006ad70d;
L_006ad6e5:; BB(0x006ad6e5);
    /* 006ad6e5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006ad6e7: call 0x6ad774 */ r_esp -= 4; W32(r_esp, 0x6ad6ecu); f_006ad774();
    /* 006ad6ec: push 0x6af92c */ { u32 v = 0x6af92cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad6f1: call 0x788f38 */ r_esp -= 4; W32(r_esp, 0x6ad6f6u); f_00788f38();
    /* 006ad6f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad6f7: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 006ad6fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad6ff: ret  */ FN_RET(0x006ad6c8); r_esp += 4; return;
L_006ad700:; BB(0x006ad700);
    /* 006ad700: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
L_006ad703:; BB(0x006ad703);
    /* 006ad703: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ad706: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 006ad709: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad70b: jle 0x6ad70f */ if ((fZ||fS!=fO)) goto L_006ad70f;
L_006ad70d:; BB(0x006ad70d);
    /* 006ad70d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad70e: ret  */ FN_RET(0x006ad6c8); r_esp += 4; return;
L_006ad70f:; BB(0x006ad70f);
    /* 006ad70f: call 0x811b40 */ r_esp -= 4; W32(r_esp, 0x6ad714u); f_00811b40();
    /* 006ad714: call 0x5c7a7c */ r_esp -= 4; W32(r_esp, 0x6ad719u); f_005c7a7c();
    /* 006ad719: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 006ad71f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad721: je 0x6ad728 */ if (fZ) goto L_006ad728;
L_006ad723:; BB(0x006ad723);
    /* 006ad723: call 0x6bc2d4 */ r_esp -= 4; W32(r_esp, 0x6ad728u); f_006bc2d4();
L_006ad728:; BB(0x006ad728);
    /* 006ad728: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x6ad72du); f_00815434();
    /* 006ad72d: mov dword ptr [0xa94b34], 0 */ W32((u32)(0xa94b34u), 0x0u);
    /* 006ad737: push 0x6af914 */ { u32 v = 0x6af914u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad73c: call 0x788f64 */ r_esp -= 4; W32(r_esp, 0x6ad741u); f_00788f64();
    /* 006ad741: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad742: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006ad749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad74a: ret  */ FN_RET(0x006ad6c8); r_esp += 4; return;
L_006ad74b:; BB(0x006ad74b);
    /* 006ad74b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ad751: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ad756u); f_0068d5a8();
    /* 006ad756: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad757: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad759: je 0x6ad764 */ if (fZ) goto L_006ad764;
L_006ad75b:; BB(0x006ad75b);
    /* 006ad75b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad75d: mov ecx, eax */ r_ecx = r_eax;
    /* 006ad75f: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6ad764u); f_006854a8();
L_006ad764:; BB(0x006ad764);
    /* 006ad764: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006ad76b: mov eax, 0xf */ r_eax = 0xfu;
    /* 006ad770: jmp 0x6ad703 */ goto L_006ad703;
}

void f_006ad774(void) /* sub_6AD774 */
{
    FN_ENTER(0x006ad774);
    /* 006ad774: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad775: call 0x811e50 */ r_esp -= 4; W32(r_esp, 0x6ad77au); f_00811e50();
    /* 006ad77a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ad780: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ad785u); f_0068d5a8();
    /* 006ad785: mov ebx, eax */ r_ebx = r_eax;
    /* 006ad787: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ad78a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad78c: je 0x6ad7ad */ if (fZ) goto L_006ad7ad;
L_006ad78e:; BB(0x006ad78e);
    /* 006ad78e: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006ad792: movzx ecx, word ptr [edx*2 + 0xa94acc] */ r_ecx = (u32)R16((u32)(r_edx*2+0xa94accu));
    /* 006ad79a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad79b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ad79d: call 0x695650 */ r_esp -= 4; W32(r_esp, 0x6ad7a2u); f_00695650();
    /* 006ad7a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad7a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad7a5: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x6ad7aau); f_004d2fb4();
    /* 006ad7aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006ad7ad:; BB(0x006ad7ad);
    /* 006ad7ad: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 006ad7b2: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 006ad7b5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad7b7: je 0x6ad7df */ if (fZ) goto L_006ad7df;
L_006ad7b9:; BB(0x006ad7b9);
    /* 006ad7b9: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006ad7bc: cmp eax, dword ptr [0x9bedb8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9bedb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad7c2: jne 0x6ad7d1 */ if (!fZ) goto L_006ad7d1;
L_006ad7c4:; BB(0x006ad7c4);
    /* 006ad7c4: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006ad7c8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ad7cd: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006ad7d1:; BB(0x006ad7d1);
    /* 006ad7d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ad7d3: call 0x6ad7e8 */ r_esp -= 4; W32(r_esp, 0x6ad7d8u); f_006ad7e8();
    /* 006ad7d8: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006ad7db: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad7dd: jne 0x6ad7b9 */ if (!fZ) goto L_006ad7b9;
L_006ad7df:; BB(0x006ad7df);
    /* 006ad7df: call 0x6b09e4 */ r_esp -= 4; W32(r_esp, 0x6ad7e4u); f_006b09e4();
    /* 006ad7e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ad7e5: ret  */ FN_RET(0x006ad774); r_esp += 4; return;
}

void f_006ad7e8(void) /* sub_6AD7E8 */
{
    FN_ENTER(0x006ad7e8);
    /* 006ad7e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad7e9: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006ad7ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad7ee: je 0x6ad81f */ if (fZ) goto L_006ad81f;
L_006ad7f0:; BB(0x006ad7f0);
    /* 006ad7f0: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006ad7f3: mov ebx, eax */ r_ebx = r_eax;
L_006ad7f5:; BB(0x006ad7f5);
    /* 006ad7f5: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006ad7f8: cmp edx, dword ptr [0x9bedb8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9bedb8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad7fe: jne 0x6ad80e */ if (!fZ) goto L_006ad80e;
L_006ad800:; BB(0x006ad800);
    /* 006ad800: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 006ad804: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006ad80a: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
L_006ad80e:; BB(0x006ad80e);
    /* 006ad80e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ad810: call 0x6ad7e8 */ r_esp -= 4; W32(r_esp, 0x6ad815u); f_006ad7e8();
    /* 006ad815: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006ad818: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad81a: jne 0x6ad7f5 */ if (!fZ) goto L_006ad7f5;
L_006ad81c:; BB(0x006ad81c);
    /* 006ad81c: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006ad81f:; BB(0x006ad81f);
    /* 006ad81f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad820: ret  */ FN_RET(0x006ad7e8); r_esp += 4; return;
}

void f_006ad824(void) /* sub_6AD824 */
{
    FN_ENTER(0x006ad824);
    /* 006ad824: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad825: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad826: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad829: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ad82b: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006ad82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad830: je 0x6ad881 */ if (fZ) goto L_006ad881;
L_006ad832:; BB(0x006ad832);
    /* 006ad832: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad835: jne 0x6ad94e */ if (!fZ) goto L_006ad94e;
L_006ad83b:; BB(0x006ad83b);
    /* 006ad83b: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ad840u); f_00694c6c();
    /* 006ad840: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 006ad846: mov edi, dword ptr [0xa0f674] */ r_edi = R32((u32)(0xa0f674u));
    /* 006ad84c: or edi, dword ptr [0xa0f698] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006ad852: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ad855: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ad857: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ad859: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ad85b: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ad862: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006ad864: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006ad866: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad867: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ad86cu); f_007c1160();
    /* 006ad86c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad86e: je 0x6ad94e */ if (fZ) goto L_006ad94e;
L_006ad874:; BB(0x006ad874);
    /* 006ad874: mov dword ptr [ebp + 0x24], 4 */ W32((u32)(r_ebp+0x24u), 0x4u);
    /* 006ad87b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ad87e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad87f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ad880: ret  */ FN_RET(0x006ad824); r_esp += 4; return;
L_006ad881:; BB(0x006ad881);
    /* 006ad881: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006ad888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad889: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ad88eu); f_0068d5a8();
    /* 006ad88e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad88f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad891: je 0x6ad89c */ if (fZ) goto L_006ad89c;
L_006ad893:; BB(0x006ad893);
    /* 006ad893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad895: mov ecx, eax */ r_ecx = r_eax;
    /* 006ad897: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6ad89cu); f_006854a8();
L_006ad89c:; BB(0x006ad89c);
    /* 006ad89c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ad8a2: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x6ad8a7u); f_00718078();
    /* 006ad8a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad8a8: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6ad8adu); f_00717d68();
    /* 006ad8ad: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ad8b3: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6ad8b8u); f_00717f08();
    /* 006ad8b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad8b9: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006ad8bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad8be: je 0x6ad8cc */ if (fZ) goto L_006ad8cc;
L_006ad8c0:; BB(0x006ad8c0);
    /* 006ad8c0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ad8c5u); f_007127b0();
    /* 006ad8c5: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
L_006ad8cc:; BB(0x006ad8cc);
    /* 006ad8cc: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 006ad8cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad8d1: je 0x6ad8da */ if (fZ) goto L_006ad8da;
L_006ad8d3:; BB(0x006ad8d3);
    /* 006ad8d3: mov edi, 5 */ r_edi = 0x5u;
    /* 006ad8d8: jmp 0x6ad8fe */ goto L_006ad8fe;
L_006ad8da:; BB(0x006ad8da);
    /* 006ad8da: mov ecx, dword ptr [0xa95df8] */ r_ecx = R32((u32)(0xa95df8u));
    /* 006ad8e0: movzx edx, word ptr [ecx + 0x27c8] */ r_edx = (u32)R16((u32)(r_ecx+0x27c8u));
    /* 006ad8e7: mov edi, 4 */ r_edi = 0x4u;
    /* 006ad8ec: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ad8ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ad8f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006ad8f3: jg 0x6ad8f7 */ if ((!fZ&&fS==fO)) goto L_006ad8f7;
L_006ad8f5:; BB(0x006ad8f5);
    /* 006ad8f5: mov edx, eax */ r_edx = r_eax;
L_006ad8f7:; BB(0x006ad8f7);
    /* 006ad8f7: mov word ptr [ecx + 0x27c8], dx */ W16((u32)(r_ecx+0x27c8u), (u16)r_edx);
L_006ad8fe:; BB(0x006ad8fe);
    /* 006ad8fe: mov dword ptr [esp], 0x436e0000 */ W32((u32)(r_esp), 0x436e0000u);
    /* 006ad905: mov dword ptr [esp + 4], 0x433c0000 */ W32((u32)(r_esp+0x4u), 0x433c0000u);
    /* 006ad90d: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad912: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ad917u); f_0073ec50();
    /* 006ad917: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006ad91b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad91d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ad91e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad91f: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x6ad924u); f_0073a8dc();
    /* 006ad924: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ad927: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 006ad92a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad92c: je 0x6ad947 */ if (fZ) goto L_006ad947;
L_006ad92e:; BB(0x006ad92e);
    /* 006ad92e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ad92f: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad931: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6ad936u); f_00792fe8();
    /* 006ad936: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ad939: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad93e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad93f: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 006ad942: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6ad947u); f_0073ae38();
L_006ad947:; BB(0x006ad947);
    /* 006ad947: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
L_006ad94e:; BB(0x006ad94e);
    /* 006ad94e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ad951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad952: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ad953: ret  */ FN_RET(0x006ad824); r_esp += 4; return;
}

void f_006ad954(void) /* sub_6AD954 */
{
    FN_ENTER(0x006ad954);
    /* 006ad954: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad955: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ad957: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006ad95a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad95c: jne 0x6ad9a4 */ if (!fZ) goto L_006ad9a4;
L_006ad95e:; BB(0x006ad95e);
    /* 006ad95e: mov ecx, dword ptr [0xaab190] */ r_ecx = R32((u32)(0xaab190u));
    /* 006ad964: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad966: je 0x6ad97a */ if (fZ) goto L_006ad97a;
L_006ad968:; BB(0x006ad968);
    /* 006ad968: je 0x6ad970 */ if (fZ) goto L_006ad970;
L_006ad96a:; BB(0x006ad96a);
    /* 006ad96a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ad96c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ad96e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6ad970u); call_ind(t); }
L_006ad970:; BB(0x006ad970);
    /* 006ad970: mov dword ptr [0xaab190], 0 */ W32((u32)(0xaab190u), 0x0u);
L_006ad97a:; BB(0x006ad97a);
    /* 006ad97a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ad97c: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 006ad981: mov dword ptr [0xa955e0], eax */ W32((u32)(0xa955e0u), r_eax);
    /* 006ad986: call 0x7a6160 */ r_esp -= 4; W32(r_esp, 0x6ad98bu); f_007a6160();
    /* 006ad98b: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 006ad98f: mov eax, 1 */ r_eax = 0x1u;
    /* 006ad994: mov word ptr [0xaae6d4], ax */ W16((u32)(0xaae6d4u), (u16)r_eax);
    /* 006ad99a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ad9a0: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
L_006ad9a4:; BB(0x006ad9a4);
    /* 006ad9a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ad9a5: ret  */ FN_RET(0x006ad954); r_esp += 4; return;
}

void f_006ad9a8(void) /* sub_6AD9A8 */
{
    FN_ENTER(0x006ad9a8);
    /* 006ad9a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ad9a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006ad9ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ad9ad: push 0x8ebcca */ { u32 v = 0x8ebccau; r_esp -= 4; W32(r_esp, v); }
    /* 006ad9b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ad9b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad9b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ad9c0: sub esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ad9c6: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ad9c9: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 006ad9cc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 006ad9cf: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 006ad9d2: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006ad9d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006ad9d8: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 006ad9db: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006ad9de: ja 0x6ae5e3 */ if ((!fC&&!fZ)) goto L_006ae5e3;
L_006ad9e4:; BB(0x006ad9e4);
    /* 006ad9e4: mov edx, dword ptr [edx*4 + 0x9694d8] */ r_edx = R32((u32)(r_edx*4+0x9694d8u));
    /* 006ad9eb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ad9a8); r_esp += 4; return;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ad9ed(void)
{
    FN_ENTER(0x006ad9ed);
    /* 006ad9ed: mov eax, ecx */ r_eax = r_ecx;
    /* 006ad9ef: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ad9f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ad9f4: je 0x6ada05 */ if (fZ) goto L_006ada05;
L_006ad9f6:; BB(0x006ad9f6);
    /* 006ad9f6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ad9fbu); f_007127b0();
    /* 006ad9fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ad9fe: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ada05:; BB(0x006ada05);
    /* 006ada05: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ada08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ada0a: je 0x6ada23 */ if (fZ) goto L_006ada23;
L_006ada0c:; BB(0x006ada0c);
    /* 006ada0c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ada11u); f_007127b0();
    /* 006ada11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ada14: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ada1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ada1d: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ada22u); f_00791748();
    /* 006ada22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ada23:; BB(0x006ada23);
    /* 006ada23: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ada29: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ada2eu); f_0068d5a8();
    /* 006ada2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ada2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ada31: je 0x6ada80 */ if (fZ) goto L_006ada80;
L_006ada33:; BB(0x006ada33);
    /* 006ada33: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 006ada39: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ada3b: je 0x6ada44 */ if (fZ) goto L_006ada44;
L_006ada3d:; BB(0x006ada3d);
    /* 006ada3d: mov eax, 1 */ r_eax = 0x1u;
    /* 006ada42: jmp 0x6ada46 */ goto L_006ada46;
L_006ada44:; BB(0x006ada44);
    /* 006ada44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006ada46:; BB(0x006ada46);
    /* 006ada46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ada48: je 0x6ada80 */ if (fZ) goto L_006ada80;
L_006ada4a:; BB(0x006ada4a);
    /* 006ada4a: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006ada51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ada52: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ada57u); f_0068d5a8();
    /* 006ada57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ada58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ada5a: je 0x6ada63 */ if (fZ) goto L_006ada63;
L_006ada5c:; BB(0x006ada5c);
    /* 006ada5c: mov ecx, eax */ r_ecx = r_eax;
    /* 006ada5e: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6ada63u); f_00685514();
L_006ada63:; BB(0x006ada63);
    /* 006ada63: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ada69: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x6ada6eu); f_00718048();
    /* 006ada6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ada6f: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6ada74u); f_00717d48();
    /* 006ada74: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ada7a: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6ada7fu); f_00717ed8();
    /* 006ada7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ada80:; BB(0x006ada80);
    /* 006ada80: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ada83: mov dword ptr [eax + 0x20], 8 */ W32((u32)(r_eax+0x20u), 0x8u);
    /* 006ada8a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006ada8f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ada92: jle 0x6adb0f */ if ((fZ||fS!=fO)) goto L_006adb0f;
L_006ada94:; BB(0x006ada94);
    /* 006ada94: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ada9a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ada9fu); f_0068d5a8();
    /* 006ada9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adaa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adaa2: je 0x6adb04 */ if (fZ) goto L_006adb04;
L_006adaa4:; BB(0x006adaa4);
    /* 006adaa4: mov ecx, eax */ r_ecx = r_eax;
    /* 006adaa6: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6adaabu); f_00689410();
    /* 006adaab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adaad: je 0x6adaba */ if (fZ) goto L_006adaba;
L_006adaaf:; BB(0x006adaaf);
    /* 006adaaf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adab2: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adab5: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adaba:; BB(0x006adaba);
    /* 006adaba: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6adabfu); f_00694c6c();
    /* 006adabf: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006adac5: or edx, dword ptr [0xa0f678] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006adacb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006adacc: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006adacf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006adad1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006adad3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006adad5: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006adadc: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6adae1u); f_007c1160();
    /* 006adae1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adae3: je 0x6adaf9 */ if (fZ) goto L_006adaf9;
L_006adae5:; BB(0x006adae5);
    /* 006adae5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adae8: mov dword ptr [edx + 0x20], 6 */ W32((u32)(r_edx+0x20u), 0x6u);
    /* 006adaef: mov eax, 6 */ r_eax = 0x6u;
    /* 006adaf4: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adaf9:; BB(0x006adaf9);
    /* 006adaf9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adafc: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adaff: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adb04:; BB(0x006adb04);
    /* 006adb04: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adb07: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adb0a: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adb0f:; BB(0x006adb0f);
    /* 006adb0f: mov byte ptr [ebp - 0x70], 0x7d */ W8((u32)(r_ebp+0xffffff90u), 0x7du);
    /* 006adb13: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 006adb16: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006adb1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006adb1d: mov byte ptr [ebp - 0x6f], 6 */ W8((u32)(r_ebp+0xffffff91u), 0x6u);
    /* 006adb21: mov byte ptr [ebp - 0x69], al */ W8((u32)(r_ebp+0xffffff97u), (u8)r_eax);
    /* 006adb24: mov byte ptr [ebp - 0x6a], al */ W8((u32)(r_ebp+0xffffff96u), (u8)r_eax);
    /* 006adb27: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 006adb2e: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006adb31: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006adb34: mov byte ptr [ebp - 0x6c], dl */ W8((u32)(r_ebp+0xffffff94u), (u8)r_edx);
    /* 006adb37: mov byte ptr [ebp - 0x6b], 5 */ W8((u32)(r_ebp+0xffffff95u), 0x5u);
    /* 006adb3b: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 006adb3e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6adb43u); f_008003e0();
    /* 006adb43: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adb46: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adb49: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ad9ed); r_esp += 4; return;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ada8a(void)
{
    FN_ENTER(0x006ada8a);
    /* 006ada8a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006ada8f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ada92: jle 0x6adb0f */ if ((fZ||fS!=fO)) goto L_006adb0f;
L_006ada94:; BB(0x006ada94);
    /* 006ada94: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ada9a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ada9fu); f_0068d5a8();
    /* 006ada9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adaa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adaa2: je 0x6adb04 */ if (fZ) goto L_006adb04;
L_006adaa4:; BB(0x006adaa4);
    /* 006adaa4: mov ecx, eax */ r_ecx = r_eax;
    /* 006adaa6: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6adaabu); f_00689410();
    /* 006adaab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adaad: je 0x6adaba */ if (fZ) goto L_006adaba;
L_006adaaf:; BB(0x006adaaf);
    /* 006adaaf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adab2: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adab5: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adaba:; BB(0x006adaba);
    /* 006adaba: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6adabfu); f_00694c6c();
    /* 006adabf: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006adac5: or edx, dword ptr [0xa0f678] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006adacb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006adacc: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006adacf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006adad1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006adad3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006adad5: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006adadc: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6adae1u); f_007c1160();
    /* 006adae1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adae3: je 0x6adaf9 */ if (fZ) goto L_006adaf9;
L_006adae5:; BB(0x006adae5);
    /* 006adae5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adae8: mov dword ptr [edx + 0x20], 6 */ W32((u32)(r_edx+0x20u), 0x6u);
    /* 006adaef: mov eax, 6 */ r_eax = 0x6u;
    /* 006adaf4: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adaf9:; BB(0x006adaf9);
    /* 006adaf9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adafc: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adaff: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adb04:; BB(0x006adb04);
    /* 006adb04: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adb07: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adb0a: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adb0f:; BB(0x006adb0f);
    /* 006adb0f: mov byte ptr [ebp - 0x70], 0x7d */ W8((u32)(r_ebp+0xffffff90u), 0x7du);
    /* 006adb13: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 006adb16: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006adb1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006adb1d: mov byte ptr [ebp - 0x6f], 6 */ W8((u32)(r_ebp+0xffffff91u), 0x6u);
    /* 006adb21: mov byte ptr [ebp - 0x69], al */ W8((u32)(r_ebp+0xffffff97u), (u8)r_eax);
    /* 006adb24: mov byte ptr [ebp - 0x6a], al */ W8((u32)(r_ebp+0xffffff96u), (u8)r_eax);
    /* 006adb27: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 006adb2e: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006adb31: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006adb34: mov byte ptr [ebp - 0x6c], dl */ W8((u32)(r_ebp+0xffffff94u), (u8)r_edx);
    /* 006adb37: mov byte ptr [ebp - 0x6b], 5 */ W8((u32)(r_ebp+0xffffff95u), 0x5u);
    /* 006adb3b: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 006adb3e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6adb43u); f_008003e0();
    /* 006adb43: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adb46: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adb49: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ada8a); r_esp += 4; return;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006adb4e(void)
{
    FN_ENTER(0x006adb4e);
    /* 006adb4e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006adb53: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006adb56: jle 0x6ade09 */ if ((fZ||fS!=fO)) goto L_006ade09;
L_006adb5c:; BB(0x006adb5c);
    /* 006adb5c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006adb62: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6adb67u); f_0068d5a8();
    /* 006adb67: mov edi, eax */ r_edi = r_eax;
    /* 006adb69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006adb6c: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 006adb72: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adb78: jne 0x6add97 */ if (!fZ) goto L_006add97;
L_006adb7e:; BB(0x006adb7e);
    /* 006adb7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006adb7f: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6adb84u); f_00716ba0();
    /* 006adb84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adb85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adb87: jne 0x6add97 */ if (!fZ) goto L_006add97;
L_006adb8d:; BB(0x006adb8d);
    /* 006adb8d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adb90: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 006adb93: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adb95: je 0x6ae6e3 */ if (fZ) goto L_006ae6e3;
L_006adb9b:; BB(0x006adb9b);
    /* 006adb9b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adb9e: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006adba1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adba3: je 0x6ae626 */ if (fZ) goto L_006ae626;
L_006adba9:; BB(0x006adba9);
    /* 006adba9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adbab: je 0x6add23 */ if (fZ) goto L_006add23;
L_006adbb1:; BB(0x006adbb1);
    /* 006adbb1: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006adbb8: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006adbbb: je 0x6add14 */ if (fZ) goto L_006add14;
L_006adbc1:; BB(0x006adbc1);
    /* 006adbc1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6adbc6u); f_007365f4();
    /* 006adbc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adbc9: je 0x6adc48 */ if (fZ) goto L_006adc48;
L_006adbcb:; BB(0x006adbcb);
    /* 006adbcb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adbce: jne 0x6adbdf */ if (!fZ) goto L_006adbdf;
L_006adbd0:; BB(0x006adbd0);
    /* 006adbd0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adbd3: mov dword ptr [edx + 0x20], 7 */ W32((u32)(r_edx+0x20u), 0x7u);
    /* 006adbda: jmp 0x6add23 */ goto L_006add23;
L_006adbdf:; BB(0x006adbdf);
    /* 006adbdf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adbe2: jne 0x6add23 */ if (!fZ) goto L_006add23;
L_006adbe8:; BB(0x006adbe8);
    /* 006adbe8: mov byte ptr [ebp - 0xa0], 0x7d */ W8((u32)(r_ebp+0xffffff60u), 0x7du);
    /* 006adbef: lea ecx, [ebp - 0xa0] */ r_ecx = (u32)(r_ebp+0xffffff60u);
    /* 006adbf5: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006adbfa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006adbfc: mov byte ptr [ebp - 0x9f], 6 */ W8((u32)(r_ebp+0xffffff61u), 0x6u);
    /* 006adc03: mov byte ptr [ebp - 0x99], dl */ W8((u32)(r_ebp+0xffffff67u), (u8)r_edx);
    /* 006adc09: mov byte ptr [ebp - 0x9a], dl */ W8((u32)(r_ebp+0xffffff66u), (u8)r_edx);
    /* 006adc0f: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 006adc15: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 006adc1b: mov byte ptr [ebp - 0x9b], 4 */ W8((u32)(r_ebp+0xffffff65u), 0x4u);
    /* 006adc22: mov byte ptr [ebp - 0x9c], bl */ W8((u32)(r_ebp+0xffffff64u), (u8)r_ebx);
    /* 006adc28: mov dword ptr [ebp - 0x98], ebx */ W32((u32)(r_ebp+0xffffff68u), r_ebx);
    /* 006adc2e: mov dword ptr [ebp - 0x94], ebx */ W32((u32)(r_ebp+0xffffff6cu), r_ebx);
    /* 006adc34: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6adc39u); f_008003e0();
    /* 006adc39: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adc3c: mov dword ptr [edx + 0x20], 9 */ W32((u32)(r_edx+0x20u), 0x9u);
    /* 006adc43: jmp 0x6add23 */ goto L_006add23;
L_006adc48:; BB(0x006adc48);
    /* 006adc48: mov byte ptr [ebp - 0x88], 0x7d */ W8((u32)(r_ebp+0xffffff78u), 0x7du);
    /* 006adc4f: mov ecx, 6 */ r_ecx = 0x6u;
    /* 006adc54: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006adc59: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006adc5b: mov byte ptr [ebp - 0x87], cl */ W8((u32)(r_ebp+0xffffff79u), (u8)r_ecx);
    /* 006adc61: mov byte ptr [ebp - 0x81], dl */ W8((u32)(r_ebp+0xffffff7fu), (u8)r_edx);
    /* 006adc67: mov byte ptr [ebp - 0x82], dl */ W8((u32)(r_ebp+0xffffff7eu), (u8)r_edx);
    /* 006adc6d: mov byte ptr [ebp - 0x84], cl */ W8((u32)(r_ebp+0xffffff7cu), (u8)r_ecx);
    /* 006adc73: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006adc7a: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 006adc81: mov dword ptr [ebp - 0x78], 2 */ W32((u32)(r_ebp+0xffffff88u), 0x2u);
    /* 006adc88: mov dword ptr [ebp - 0x74], 3 */ W32((u32)(r_ebp+0xffffff8cu), 0x3u);
L_006adc8f:; BB(0x006adc8f);
    /* 006adc8f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6adc94u); f_008587a5();
    /* 006adc94: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006adc97: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 006adc9a: fdiv dword ptr [0x969560] */ ST(0) = ST(0) / R_F32((u32)(0x969560u));
    /* 006adca0: fmul dword ptr [0x96955c] */ ST(0) = ST(0) * R_F32((u32)(0x96955cu));
    /* 006adca6: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 006adca9: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 006adcad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006adcb2: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006adcb5: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 006adcb8: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 006adcbb: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 006adcbe: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006adcc1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6adcc6u); f_008587a5();
    /* 006adcc6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006adcc9: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 006adccc: fdiv dword ptr [0x969560] */ ST(0) = ST(0) / R_F32((u32)(0x969560u));
    /* 006adcd2: fmul dword ptr [0x96955c] */ ST(0) = ST(0) * R_F32((u32)(0x96955cu));
    /* 006adcd8: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 006adcdb: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 006adcdf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006adce4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006adce7: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 006adcea: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 006adced: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 006adcf0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006adcf3: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adcf5: je 0x6add07 */ if (fZ) goto L_006add07;
L_006adcf7:; BB(0x006adcf7);
    /* 006adcf7: mov ecx, dword ptr [ebp + ebx*4 - 0x80] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xffffff80u));
    /* 006adcfb: mov edx, dword ptr [ebp + eax*4 - 0x80] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xffffff80u));
    /* 006adcff: mov dword ptr [ebp + ebx*4 - 0x80], edx */ W32((u32)(r_ebp+r_ebx*4+0xffffff80u), r_edx);
    /* 006add03: mov dword ptr [ebp + eax*4 - 0x80], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffff80u), r_ecx);
L_006add07:; BB(0x006add07);
    /* 006add07: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006add0a: cmp esi, 0x1e */ {  u32 a = r_esi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006add0d: jl 0x6adc8f */ if ((fS!=fO)) goto L_006adc8f;
L_006add0f:; BB(0x006add0f);
    /* 006add0f: jmp 0x6ae60c */ goto L_006ae60c;
L_006add14:; BB(0x006add14);
    /* 006add14: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006add17: je 0x6add23 */ if (fZ) goto L_006add23;
L_006add19:; BB(0x006add19);
    /* 006add19: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006add1c: mov dword ptr [edx + 0x20], 7 */ W32((u32)(r_edx+0x20u), 0x7u);
L_006add23:; BB(0x006add23);
    /* 006add23: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006add25: je 0x6add8c */ if (fZ) goto L_006add8c;
L_006add27:; BB(0x006add27);
    /* 006add27: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006add2d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006add2f: je 0x6add38 */ if (fZ) goto L_006add38;
L_006add31:; BB(0x006add31);
    /* 006add31: mov eax, 1 */ r_eax = 0x1u;
    /* 006add36: jmp 0x6add3a */ goto L_006add3a;
L_006add38:; BB(0x006add38);
    /* 006add38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006add3a:; BB(0x006add3a);
    /* 006add3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006add3c: je 0x6add49 */ if (fZ) goto L_006add49;
L_006add3e:; BB(0x006add3e);
    /* 006add3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006add41: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006add44: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006add49:; BB(0x006add49);
    /* 006add49: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006add50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006add51: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6add56u); f_0068d5a8();
    /* 006add56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006add57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006add59: je 0x6add64 */ if (fZ) goto L_006add64;
L_006add5b:; BB(0x006add5b);
    /* 006add5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006add5d: mov ecx, eax */ r_ecx = r_eax;
    /* 006add5f: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6add64u); f_006854a8();
L_006add64:; BB(0x006add64);
    /* 006add64: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006add6a: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x6add6fu); f_00718078();
    /* 006add6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006add70: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6add75u); f_00717d68();
    /* 006add75: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006add7b: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6add80u); f_00717f08();
    /* 006add80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006add81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006add84: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006add87: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006add8c:; BB(0x006add8c);
    /* 006add8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006add8f: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006add92: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006add97:; BB(0x006add97);
    /* 006add97: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006add99: je 0x6addfe */ if (fZ) goto L_006addfe;
L_006add9b:; BB(0x006add9b);
    /* 006add9b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006adda1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006adda3: je 0x6addac */ if (fZ) goto L_006addac;
L_006adda5:; BB(0x006adda5);
    /* 006adda5: mov eax, 1 */ r_eax = 0x1u;
    /* 006addaa: jmp 0x6addae */ goto L_006addae;
L_006addac:; BB(0x006addac);
    /* 006addac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006addae:; BB(0x006addae);
    /* 006addae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006addb0: jne 0x6addbd */ if (!fZ) goto L_006addbd;
L_006addb2:; BB(0x006addb2);
    /* 006addb2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006addb5: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006addb8: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006addbd:; BB(0x006addbd);
    /* 006addbd: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006addc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006addc5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6addcau); f_0068d5a8();
    /* 006addca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006addcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006addcd: je 0x6addd6 */ if (fZ) goto L_006addd6;
L_006addcf:; BB(0x006addcf);
    /* 006addcf: mov ecx, eax */ r_ecx = r_eax;
    /* 006addd1: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6addd6u); f_00685514();
L_006addd6:; BB(0x006addd6);
    /* 006addd6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006adddc: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x6adde1u); f_00718048();
    /* 006adde1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adde2: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6adde7u); f_00717d48();
    /* 006adde7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006added: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6addf2u); f_00717ed8();
    /* 006addf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006addf3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006addf6: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006addf9: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006addfe:; BB(0x006addfe);
    /* 006addfe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ade01: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ade04: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ade09:; BB(0x006ade09);
    /* 006ade09: mov byte ptr [ebp - 0xb8], 0x7d */ W8((u32)(r_ebp+0xffffff48u), 0x7du);
    /* 006ade10: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 006ade16: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006ade1b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ade1d: mov byte ptr [ebp - 0xb7], 6 */ W8((u32)(r_ebp+0xffffff49u), 0x6u);
    /* 006ade24: mov byte ptr [ebp - 0xb1], al */ W8((u32)(r_ebp+0xffffff4fu), (u8)r_eax);
    /* 006ade2a: mov byte ptr [ebp - 0xb2], al */ W8((u32)(r_ebp+0xffffff4eu), (u8)r_eax);
    /* 006ade30: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 006ade3a: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 006ade40: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006ade46: mov byte ptr [ebp - 0xb4], dl */ W8((u32)(r_ebp+0xffffff4cu), (u8)r_edx);
    /* 006ade4c: mov byte ptr [ebp - 0xb3], 5 */ W8((u32)(r_ebp+0xffffff4du), 0x5u);
    /* 006ade53: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 006ade59: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6ade5eu); f_008003e0();
    /* 006ade5e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ade61: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ade64: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006adb4e); r_esp += 4; return;
L_006ae60c:; BB(0x006ae60c);
    /* 006ae60c: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 006ae612: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6ae617u); f_008003e0();
    /* 006ae617: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae61a: mov dword ptr [edx + 0x20], 9 */ W32((u32)(r_edx+0x20u), 0x9u);
    /* 006ae621: jmp 0x6add23 */ goto L_006add23;
L_006ae626:; BB(0x006ae626);
    /* 006ae626: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae628: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ae62du); f_0073ec50();
    /* 006ae62d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae62f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae630: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x6ae635u); f_00735708();
    /* 006ae635: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae637: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae63a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae63d: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006ae640: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae642: je 0x6ae69e */ if (fZ) goto L_006ae69e;
L_006ae644:; BB(0x006ae644);
    /* 006ae644: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae646: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae648: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6ae64du); f_00792fe8();
    /* 006ae64d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae650: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae653: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae655: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae657: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006ae65a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae65b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6ae660u); f_00735c90();
    /* 006ae660: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae662: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae664: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6ae669u); f_00792fe8();
    /* 006ae669: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae66c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae66f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae671: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae673: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006ae676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae677: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6ae67cu); f_00735c90();
    /* 006ae67c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae67e: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae680: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6ae685u); f_00792fe8();
    /* 006ae685: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae688: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae68b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae68d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae68f: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006ae692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae693: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6ae698u); f_00735c90();
    /* 006ae698: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae69b: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
L_006ae69e:; BB(0x006ae69e);
    /* 006ae69e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae6a0: je 0x6adba9 */ if (fZ) goto L_006adba9;
L_006ae6a6:; BB(0x006ae6a6);
    /* 006ae6a6: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6ae6abu); f_0073608c();
    /* 006ae6ab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae6ae: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006ae6b1: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6ae6b6u); f_00736458();
    /* 006ae6b6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae6b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae6bb: mov ebx, dword ptr [edx + 0x48] */ r_ebx = R32((u32)(r_edx+0x48u));
    /* 006ae6be: movzx ecx, word ptr [ebx + 0x84] */ r_ecx = (u32)R16((u32)(r_ebx+0x84u));
    /* 006ae6c5: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006ae6cb: mov word ptr [ebx + 0x84], cx */ W16((u32)(r_ebx+0x84u), (u16)r_ecx);
    /* 006ae6d2: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae6d7u); f_00791748();
    /* 006ae6d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae6d8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae6db: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006ae6de: jmp 0x6adba9 */ goto L_006adba9;
L_006ae6e3:; BB(0x006ae6e3);
    /* 006ae6e3: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae6e5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ae6eau); f_0073ec50();
    /* 006ae6ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae6ec: push 0x9694d0 */ { u32 v = 0x9694d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae6f2: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x6ae6f7u); f_0073a8dc();
    /* 006ae6f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae6fa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae6fd: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006ae700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae702: je 0x6adb9b */ if (fZ) goto L_006adb9b;
L_006ae708:; BB(0x006ae708);
    /* 006ae708: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae70a: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae70c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6ae711u); f_00792fe8();
    /* 006ae711: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae714: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae717: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae71c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae71d: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 006ae720: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6ae725u); f_0073ae38();
    /* 006ae725: jmp 0x6adb9b */ goto L_006adb9b;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006ade69(void)
{
    FN_ENTER(0x006ade69);
    /* 006ade69: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ade6eu); f_00694c6c();
    /* 006ade6e: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ade74: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ade77: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ade79: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ade7b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ade7d: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ade84: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ade89u); f_007c1160();
    /* 006ade89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ade8b: jne 0x6ade98 */ if (!fZ) goto L_006ade98;
L_006ade8d:; BB(0x006ade8d);
    /* 006ade8d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ade90: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ade93: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ade98:; BB(0x006ade98);
    /* 006ade98: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006ade9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006adea0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6adea5u); f_0068d5a8();
    /* 006adea5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adea6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adea8: je 0x6adeb1 */ if (fZ) goto L_006adeb1;
L_006adeaa:; BB(0x006adeaa);
    /* 006adeaa: mov ecx, eax */ r_ecx = r_eax;
    /* 006adeac: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6adeb1u); f_00685514();
L_006adeb1:; BB(0x006adeb1);
    /* 006adeb1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006adeb7: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x6adebcu); f_00718048();
    /* 006adebc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adebd: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6adec2u); f_00717d48();
    /* 006adec2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006adec8: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6adecdu); f_00717ed8();
    /* 006adecd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adece: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aded1: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006aded4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aded6: je 0x6adeef */ if (fZ) goto L_006adeef;
L_006aded8:; BB(0x006aded8);
    /* 006aded8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6adeddu); f_007127b0();
    /* 006adedd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adee0: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 006adee7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006adee9: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6adeeeu); f_00791748();
    /* 006adeee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006adeef:; BB(0x006adeef);
    /* 006adeef: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006adef5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adef8: mov dword ptr [eax + 0x20], 6 */ W32((u32)(r_eax+0x20u), 0x6u);
    /* 006adeff: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6adf04u); f_0068d5a8();
    /* 006adf04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adf05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adf07: je 0x6ae72a */ if (fZ) goto L_006ae72a;
L_006adf0d:; BB(0x006adf0d);
    /* 006adf0d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006adf10: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adf16: jne 0x6adf23 */ if (!fZ) goto L_006adf23;
L_006adf18:; BB(0x006adf18);
    /* 006adf18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adf1b: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adf1e: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006adf23:; BB(0x006adf23);
    /* 006adf23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006adf25: mov ecx, eax */ r_ecx = r_eax;
    /* 006adf27: call dword ptr [edx + 0x108] */ { u32 t = R32((u32)(r_edx+0x108u)); r_esp -= 4; W32(r_esp, 0x6adf2du); call_ind(t); }
    /* 006adf2d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adf30: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006adf33: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006ade69); r_esp += 4; return;
L_006ae72a:; BB(0x006ae72a);
    /* 006ae72a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae72d: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006ae730: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

void f_006adf38(void)
{
    FN_ENTER(0x006adf38);
    /* 006adf38: mov eax, ecx */ r_eax = r_ecx;
    /* 006adf3a: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006adf3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adf3f: je 0x6adf46 */ if (fZ) goto L_006adf46;
L_006adf41:; BB(0x006adf41);
    /* 006adf41: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6adf46u); f_007127b0();
L_006adf46:; BB(0x006adf46);
    /* 006adf46: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 006adf50: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006adf52: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6adf57u); f_005caba4();
    /* 006adf57: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006adf5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006adf5d: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 006adf63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adf65: je 0x6ae735 */ if (fZ) goto L_006ae735;
L_006adf6b:; BB(0x006adf6b);
    /* 006adf6b: mov dword ptr [ebp - 0xc0], 1 */ W32((u32)(r_ebp+0xffffff40u), 0x1u);
    /* 006adf75: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006adf7c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006adf82: mov ecx, eax */ r_ecx = r_eax;
    /* 006adf84: call 0x71be14 */ r_esp -= 4; W32(r_esp, 0x6adf89u); f_0071be14();
    /* 006adf89: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_006adf93:; BB(0x006adf93);
    /* 006adf93: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006adf96: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adf99: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 006adf9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006adfa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006adfa5: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6adfaau); f_00791748();
    /* 006adfaa: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006adfb0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6adfb5u); f_0068d5a8();
    /* 006adfb5: mov ebx, eax */ r_ebx = r_eax;
    /* 006adfb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006adfba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adfbc: je 0x6ae015 */ if (fZ) goto L_006ae015;
L_006adfbe:; BB(0x006adfbe);
    /* 006adfbe: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006adfc4: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006adfc7: je 0x6adfd0 */ if (fZ) goto L_006adfd0;
L_006adfc9:; BB(0x006adfc9);
    /* 006adfc9: mov edx, 1 */ r_edx = 0x1u;
    /* 006adfce: jmp 0x6adfd2 */ goto L_006adfd2;
L_006adfd0:; BB(0x006adfd0);
    /* 006adfd0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006adfd2:; BB(0x006adfd2);
    /* 006adfd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adfd4: jne 0x6ae00e */ if (!fZ) goto L_006ae00e;
L_006adfd6:; BB(0x006adfd6);
    /* 006adfd6: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006adfdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006adfde: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6adfe3u); f_0068d5a8();
    /* 006adfe3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adfe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006adfe6: je 0x6adff1 */ if (fZ) goto L_006adff1;
L_006adfe8:; BB(0x006adfe8);
    /* 006adfe8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006adfea: mov ecx, eax */ r_ecx = r_eax;
    /* 006adfec: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6adff1u); f_006854a8();
L_006adff1:; BB(0x006adff1);
    /* 006adff1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006adff7: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x6adffcu); f_00718078();
    /* 006adffc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adffd: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6ae002u); f_00717d68();
    /* 006ae002: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae008: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6ae00du); f_00717f08();
    /* 006ae00d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae00e:; BB(0x006ae00e);
    /* 006ae00e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ae010: call 0x68cda4 */ r_esp -= 4; W32(r_esp, 0x6ae015u); f_0068cda4();
L_006ae015:; BB(0x006ae015);
    /* 006ae015: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae018: mov dword ptr [edx + 0x20], 5 */ W32((u32)(r_edx+0x20u), 0x5u);
    /* 006ae01f: mov eax, 5 */ r_eax = 0x5u;
    /* 006ae024: jmp 0x6ae5e3 */ goto L_006ae5e3;
L_006ae5e3:; BB(0x006ae5e3);
    /* 006ae5e3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae5e6: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5ec:; BB(0x006ae5ec);
    /* 006ae5ec: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ae5ef: je 0x6ae853 */ if (fZ) goto L_006ae853;
L_006ae5f5:; BB(0x006ae5f5);
    /* 006ae5f5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae5f8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae5fb: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae601: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ae608: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae60b: ret  */ FN_RET(0x006adf38); r_esp += 4; return;
L_006ae735:; BB(0x006ae735);
    /* 006ae735: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ae737: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ae73a: jmp 0x6adf93 */ goto L_006adf93;
L_006ae853:; BB(0x006ae853);
    /* 006ae853: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae859: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ae85eu); f_0068d5a8();
    /* 006ae85e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae861: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae867:; BB(0x006ae867);
    /* 006ae867: mov ecx, eax */ r_ecx = r_eax;
    /* 006ae869: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6ae86eu); f_00689410();
    /* 006ae86e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae870: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae876:; BB(0x006ae876);
    /* 006ae876: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae87c: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6ae881u); f_00716ba0();
    /* 006ae881: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ae882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae884: jne 0x6ae5f5 */ if (!fZ) goto L_006ae5f5;
L_006ae88a:; BB(0x006ae88a);
    /* 006ae88a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6ae88fu); f_00694c6c();
    /* 006ae88f: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ae895: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006ae898: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ae89e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006ae8a5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6ae8aau); f_007c1160();
    /* 006ae8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8ac: je 0x6ae5f5 */ if (fZ) goto L_006ae5f5;
L_006ae8b2:; BB(0x006ae8b2);
    /* 006ae8b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8b5: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006ae8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ae8ba: je 0x6ae8cb */ if (fZ) goto L_006ae8cb;
L_006ae8bc:; BB(0x006ae8bc);
    /* 006ae8bc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8c1u); f_007127b0();
    /* 006ae8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8c4: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_006ae8cb:; BB(0x006ae8cb);
    /* 006ae8cb: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006ae8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ae8d0: je 0x6ae8e9 */ if (fZ) goto L_006ae8e9;
L_006ae8d2:; BB(0x006ae8d2);
    /* 006ae8d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ae8d7u); f_007127b0();
    /* 006ae8d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8da: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
    /* 006ae8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ae8e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ae8e8u); f_00791748();
    /* 006ae8e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ae8e9:; BB(0x006ae8e9);
    /* 006ae8e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae8ec: mov dword ptr [eax + 0x20], 4 */ W32((u32)(r_eax+0x20u), 0x4u);
    /* 006ae8f3: jmp 0x6ae5f5 */ goto L_006ae5f5;
}

