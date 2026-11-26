#include "protos.h"

void f_0048f008(void) /* sub_48F008 */
{
    FN_ENTER(0x0048f008);
    /* 0048f008: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f009: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f00b: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x48f010u); f_0048ea5c();
    /* 0048f010: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0048f016: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f019: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0048f01f: cmp eax, 0x198 */ {  u32 a = r_eax; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048f024: jle 0x48f02f */ if ((fZ||fS!=fO)) goto L_0048f02f;
L_0048f026:; BB(0x0048f026);
    /* 0048f026: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f028: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f02a: call 0x48d6e0 */ r_esp -= 4; W32(r_esp, 0x48f02fu); f_0048d6e0();
L_0048f02f:; BB(0x0048f02f);
    /* 0048f02f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f030: ret  */ FN_RET(0x0048f008); r_esp += 4; return;
}

void f_0048f034(void)
{
    FN_ENTER(0x0048f034);
    /* 0048f034: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f035: mov esi, ecx */ r_esi = r_ecx;
    /* 0048f037: call 0x48e560 */ r_esp -= 4; W32(r_esp, 0x48f03cu); f_0048e560();
    /* 0048f03c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f03e: je 0x48f04d */ if (fZ) goto L_0048f04d;
L_0048f040:; BB(0x0048f040);
    /* 0048f040: mov ecx, esi */ r_ecx = r_esi;
    /* 0048f042: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x48f047u); f_006dc358();
    /* 0048f047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f049: jne 0x48f04d */ if (!fZ) goto L_0048f04d;
L_0048f04b:; BB(0x0048f04b);
    /* 0048f04b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f04c: ret  */ FN_RET(0x0048f034); r_esp += 4; return;
L_0048f04d:; BB(0x0048f04d);
    /* 0048f04d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f04f: mov ecx, esi */ r_ecx = r_esi;
    /* 0048f051: call 0x48d10c */ r_esp -= 4; W32(r_esp, 0x48f056u); f_0048d10c();
    /* 0048f056: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f057: ret  */ FN_RET(0x0048f034); r_esp += 4; return;
}

void f_0048f058(void) /* sub_48F058 */
{
    FN_ENTER(0x0048f058);
    /* 0048f058: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f059: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f05b: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x48f060u); f_0048ea5c();
    /* 0048f060: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0048f066: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f069: jle 0x48f083 */ if ((fZ||fS!=fO)) goto L_0048f083;
L_0048f06b:; BB(0x0048f06b);
    /* 0048f06b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f06d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x48f072u); f_006dc358();
    /* 0048f072: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f074: je 0x48f07d */ if (fZ) goto L_0048f07d;
L_0048f076:; BB(0x0048f076);
    /* 0048f076: mov eax, 0x2ca */ r_eax = 0x2cau;
    /* 0048f07b: jmp 0x48f083 */ goto L_0048f083;
L_0048f07d:; BB(0x0048f07d);
    /* 0048f07d: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
L_0048f083:; BB(0x0048f083);
    /* 0048f083: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f086: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0048f08c: cmp eax, 0x2ca */ {  u32 a = r_eax; u32 b = 0x2cau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048f091: jle 0x48f0b5 */ if ((fZ||fS!=fO)) goto L_0048f0b5;
L_0048f093:; BB(0x0048f093);
    /* 0048f093: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f095: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x48f09au); f_0044bd78();
    /* 0048f09a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f09c: je 0x48f0a9 */ if (fZ) goto L_0048f0a9;
L_0048f09e:; BB(0x0048f09e);
    /* 0048f09e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f0a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f0a2: call 0x48d6e0 */ r_esp -= 4; W32(r_esp, 0x48f0a7u); f_0048d6e0();
    /* 0048f0a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f0a8: ret  */ FN_RET(0x0048f058); r_esp += 4; return;
L_0048f0a9:; BB(0x0048f0a9);
    /* 0048f0a9: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x48f0aeu); f_0044bf4c();
    /* 0048f0ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f0b0: call 0x48d4b0 */ r_esp -= 4; W32(r_esp, 0x48f0b5u); f_0048d4b0();
L_0048f0b5:; BB(0x0048f0b5);
    /* 0048f0b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f0b6: ret  */ FN_RET(0x0048f058); r_esp += 4; return;
}

void f_0048f0b8(void) /* sub_48F0B8 */
{
    FN_ENTER(0x0048f0b8);
    /* 0048f0b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f0b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f0bb: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0048f0c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f0c4: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0048f0ca: cmp eax, 0x1c6 */ {  u32 a = r_eax; u32 b = 0x1c6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048f0cf: jle 0x48f0dd */ if ((fZ||fS!=fO)) goto L_0048f0dd;
L_0048f0d1:; BB(0x0048f0d1);
    /* 0048f0d1: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x48f0d6u); f_0044bf4c();
    /* 0048f0d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f0d8: call 0x48d4b0 */ r_esp -= 4; W32(r_esp, 0x48f0ddu); f_0048d4b0();
L_0048f0dd:; BB(0x0048f0dd);
    /* 0048f0dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f0de: ret  */ FN_RET(0x0048f0b8); r_esp += 4; return;
}

void f_0048f100(void)
{
    FN_ENTER(0x0048f100);
    /* 0048f100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f101: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048f103: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x48f108u); f_0048dc3c();
    /* 0048f108: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f109: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f10b: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 0048f111: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0048f117: call 0x67ab80 */ r_esp -= 4; W32(r_esp, 0x48f11cu); f_0067ab80();
    /* 0048f11c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f11d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f11e: ret  */ FN_RET(0x0048f100); r_esp += 4; return;
}

void f_0048f120(void) /* sub_48F120 */
{
    FN_ENTER(0x0048f120);
    /* 0048f120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f122: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f125: mov esi, ecx */ r_esi = r_ecx;
    /* 0048f127: mov ecx, dword ptr [0xa46f94] */ r_ecx = R32((u32)(0xa46f94u));
    /* 0048f12d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f12f: je 0x48f177 */ if (fZ) goto L_0048f177;
L_0048f131:; BB(0x0048f131);
    /* 0048f131: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048f134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f135: lea edi, [esi + 0x2da] */ r_edi = (u32)(r_esi+0x2dau);
    /* 0048f13b: lea edx, [esi + 0x2d8] */ r_edx = (u32)(r_esi+0x2d8u);
    /* 0048f141: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f142: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f143: call 0x49e2a8 */ r_esp -= 4; W32(r_esp, 0x48f148u); f_0049e2a8();
    /* 0048f148: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0048f14c: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 0048f151: movzx edi, word ptr [esp + 4] */ r_edi = (u32)R16((u32)(r_esp+0x4u));
    /* 0048f156: mov word ptr [esi + 0xfc], ax */ W16((u32)(r_esi+0xfcu), (u16)r_eax);
    /* 0048f15d: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0048f162: mov word ptr [esi + 0xfe], dx */ W16((u32)(r_esi+0xfeu), (u16)r_edx);
    /* 0048f169: mov word ptr [esi + 0x100], di */ W16((u32)(r_esi+0x100u), (u16)r_edi);
    /* 0048f170: mov word ptr [esi + 0x102], ax */ W16((u32)(r_esi+0x102u), (u16)r_eax);
L_0048f177:; BB(0x0048f177);
    /* 0048f177: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0048f17b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f17c: mov ecx, esi */ r_ecx = r_esi;
    /* 0048f17e: call 0x48d400 */ r_esp -= 4; W32(r_esp, 0x48f183u); f_0048d400();
    /* 0048f183: mov ecx, esi */ r_ecx = r_esi;
    /* 0048f185: call 0x48cfe0 */ r_esp -= 4; W32(r_esp, 0x48f18au); f_0048cfe0();
    /* 0048f18a: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x48f18fu); f_00815434();
    /* 0048f18f: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x48f194u); f_0048dc3c();
    /* 0048f194: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f196: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f198: mov dword ptr [esi + 0x3d8], eax */ W32((u32)(r_esi+0x3d8u), r_eax);
    /* 0048f19e: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0048f1a4: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x48f1a9u); f_006bb100();
    /* 0048f1a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f1aa: call 0x491c64 */ r_esp -= 4; W32(r_esp, 0x48f1afu); f_00491c64();
    /* 0048f1af: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0048f1b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f1b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f1b5: call 0x48619c */ r_esp -= 4; W32(r_esp, 0x48f1bau); f_0048619c();
    /* 0048f1ba: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f1bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f1be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048f1bf: ret  */ FN_RET(0x0048f120); r_esp += 4; return;
}

void f_0048f1c0(void) /* sub_48F1C0 */
{
    FN_ENTER(0x0048f1c0);
    /* 0048f1c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f1c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f1c3: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x48f1c8u); f_0044bf4c();
    /* 0048f1c8: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x48f1cdu); f_0048ea5c();
    /* 0048f1cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f1cf: mov dword ptr [ebx + 0x3d8], eax */ W32((u32)(r_ebx+0x3d8u), r_eax);
    /* 0048f1d5: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0048f1db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f1dd: call 0x48d2a4 */ r_esp -= 4; W32(r_esp, 0x48f1e2u); f_0048d2a4();
    /* 0048f1e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f1e3: ret  */ FN_RET(0x0048f1c0); r_esp += 4; return;
}

void f_0048f1e4(void) /* sub_48F1E4 */
{
    FN_ENTER(0x0048f1e4);
    /* 0048f1e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f1e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f1e7: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 0048f1ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f1ef: je 0x48f1fe */ if (fZ) goto L_0048f1fe;
L_0048f1f1:; BB(0x0048f1f1);
    /* 0048f1f1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0048f1f5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048f1fa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0048f1fe:; BB(0x0048f1fe);
    /* 0048f1fe: mov dword ptr [ebx + 0x3e4], 0 */ W32((u32)(r_ebx+0x3e4u), 0x0u);
    /* 0048f208: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x48f20du); f_0048dc3c();
    /* 0048f20d: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x48f212u); f_00815434();
    /* 0048f212: push 0x901f40 */ { u32 v = 0x901f40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f217: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x48f21cu); f_00814afc();
    /* 0048f21c: mov dword ptr [ebx + 0x3d4], 0 */ W32((u32)(r_ebx+0x3d4u), 0x0u);
    /* 0048f226: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f227: call 0x485668 */ r_esp -= 4; W32(r_esp, 0x48f22cu); f_00485668();
    /* 0048f22c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f22f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f230: ret  */ FN_RET(0x0048f1e4); r_esp += 4; return;
}

void f_0048f234(void) /* sub_48F234 */
{
    FN_ENTER(0x0048f234);
    /* 0048f234: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f235: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f237: call 0x48dc74 */ r_esp -= 4; W32(r_esp, 0x48f23cu); f_0048dc74();
    /* 0048f23c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f23e: call 0x48d440 */ r_esp -= 4; W32(r_esp, 0x48f243u); f_0048d440();
    /* 0048f243: push 0x900f68 */ { u32 v = 0x900f68u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f248: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x48f24du); f_00814afc();
    /* 0048f24d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f24e: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x48f253u); f_0048ea5c();
    /* 0048f253: mov dword ptr [ebx + 0x3d4], 0 */ W32((u32)(r_ebx+0x3d4u), 0x0u);
    /* 0048f25d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f25e: call 0x484d90 */ r_esp -= 4; W32(r_esp, 0x48f263u); f_00484d90();
    /* 0048f263: mov dword ptr [ebx + 0x3e4], eax */ W32((u32)(r_ebx+0x3e4u), r_eax);
    /* 0048f269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f26a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f26b: ret  */ FN_RET(0x0048f234); r_esp += 4; return;
}

void f_0048f26c(void) /* sub_48F26C */
{
    FN_ENTER(0x0048f26c);
    /* 0048f26c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f26d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f270: mov esi, ecx */ r_esi = r_ecx;
    /* 0048f272: mov ecx, esi */ r_ecx = r_esi;
    /* 0048f274: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048f277: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f278: call 0x48d3c0 */ r_esp -= 4; W32(r_esp, 0x48f27du); f_0048d3c0();
    /* 0048f27d: mov ecx, esi */ r_ecx = r_esi;
    /* 0048f27f: call 0x48cfbc */ r_esp -= 4; W32(r_esp, 0x48f284u); f_0048cfbc();
    /* 0048f284: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x48f289u); f_00815434();
    /* 0048f289: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x48f28eu); f_0048dc3c();
    /* 0048f28e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0048f291: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f292: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f295: mov dword ptr [esi + 0x3d8], eax */ W32((u32)(r_esi+0x3d8u), r_eax);
    /* 0048f29b: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0048f2a1: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x48f2a6u); f_00484830();
    /* 0048f2a6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f2a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f2aa: ret  */ FN_RET(0x0048f26c); r_esp += 4; return;
}

void f_0048f2ac(void) /* sub_48F2AC */
{
    FN_ENTER(0x0048f2ac);
    /* 0048f2ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f2ad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048f2af: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x48f2b4u); f_0044bf4c();
    /* 0048f2b4: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x48f2b9u); f_0048ea5c();
    /* 0048f2b9: mov dword ptr [ebp + 0x3d8], 1 */ W32((u32)(r_ebp+0x3d8u), 0x1u);
    /* 0048f2c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048f2c5: mov dword ptr [ebp + 0x3d4], 0 */ W32((u32)(r_ebp+0x3d4u), 0x0u);
    /* 0048f2cf: call 0x48d188 */ r_esp -= 4; W32(r_esp, 0x48f2d4u); f_0048d188();
    /* 0048f2d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f2d5: ret  */ FN_RET(0x0048f2ac); r_esp += 4; return;
}

void f_0048f2d8(void) /* sub_48F2D8 */
{
    FN_ENTER(0x0048f2d8);
    /* 0048f2d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f2d9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048f2db: push 0x901f34 */ { u32 v = 0x901f34u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f2e0: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x48f2e5u); f_00814afc();
    /* 0048f2e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f2e6: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x48f2ebu); f_0048dc3c();
    /* 0048f2eb: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f2ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f2ef: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 0048f2f5: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0048f2fb: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x48f300u); f_006bb100();
    /* 0048f300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f301: call 0x484294 */ r_esp -= 4; W32(r_esp, 0x48f306u); f_00484294();
    /* 0048f306: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f30a: ret  */ FN_RET(0x0048f2d8); r_esp += 4; return;
}

void f_0048f30c(void) /* sub_48F30C */
{
    FN_ENTER(0x0048f30c);
    /* 0048f30c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f30e: mov dword ptr [ecx + 0x3d8], eax */ W32((u32)(r_ecx+0x3d8u), r_eax);
    /* 0048f314: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0048f31a: ret  */ FN_RET(0x0048f30c); r_esp += 4; return;
}

void f_0048f31c(void) /* sub_48F31C */
{
    FN_ENTER(0x0048f31c);
    /* 0048f31c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f31d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f31f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f321: call 0x48f340 */ r_esp -= 4; W32(r_esp, 0x48f326u); f_0048f340();
    /* 0048f326: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048f32a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f32c: jne 0x48f332 */ if (!fZ) goto L_0048f332;
L_0048f32e:; BB(0x0048f32e);
    /* 0048f32e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f32f: ret 4 */ FN_RET(0x0048f31c); r_esp += 8; return;
L_0048f332:; BB(0x0048f332);
    /* 0048f332: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f333: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x48f338u); f_005c2f74();
    /* 0048f338: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f339: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f33a: ret 4 */ FN_RET(0x0048f31c); r_esp += 8; return;
}

void f_0048f340(void) /* sub_48F340 */
{
    FN_ENTER(0x0048f340);
    /* 0048f340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f341: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048f345: push 0x8cffd8 */ { u32 v = 0x8cffd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f34a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048f350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f351: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048f358: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f35b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048f35e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048f361: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048f364: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048f367: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048f36a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048f371: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048f374: mov eax, dword ptr [ecx + 0xc4] */ r_eax = R32((u32)(r_ecx+0xc4u));
    /* 0048f37a: mov dword ptr [ecx], 0xaf9490 */ W32((u32)(r_ecx), 0xaf9490u);
    /* 0048f380: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f382: je 0x48f39c */ if (fZ) goto L_0048f39c;
L_0048f384:; BB(0x0048f384);
    /* 0048f384: push dword ptr [ecx + 0xb4] */ { u32 v = R32((u32)(r_ecx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048f38a: lea eax, [ecx + 0xd4] */ r_eax = (u32)(r_ecx+0xd4u);
    /* 0048f390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f391: call 0x483a38 */ r_esp -= 4; W32(r_esp, 0x48f396u); f_00483a38();
    /* 0048f396: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048f399: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0048f39c:; BB(0x0048f39c);
    /* 0048f39c: call 0x48f3d0 */ r_esp -= 4; W32(r_esp, 0x48f3a1u); f_0048f3d0();
    /* 0048f3a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048f3a4: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0048f3aa: mov dword ptr [eax*4 + 0xa47140], 0 */ W32((u32)(r_eax*4+0xa47140u), 0x0u);
    /* 0048f3b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048f3bc: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x48f3c1u); f_007b4aec();
    /* 0048f3c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f3c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048f3cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f3cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f3ce: ret  */ FN_RET(0x0048f340); r_esp += 4; return;
}

void f_0048f3d0(void) /* sub_48F3D0 */
{
    FN_ENTER(0x0048f3d0);
    /* 0048f3d0: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0048f3d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f3d8: je 0x48f3f1 */ if (fZ) goto L_0048f3f1;
L_0048f3da:; BB(0x0048f3da);
    /* 0048f3da: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0048f3de: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f3e3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0048f3e7: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
L_0048f3f1:; BB(0x0048f3f1);
    /* 0048f3f1: ret  */ FN_RET(0x0048f3d0); r_esp += 4; return;
}

void f_0048f3f4(void) /* sub_48F3F4 */
{
    FN_ENTER(0x0048f3f4);
    /* 0048f3f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f3f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f3f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f3f9: call 0x48f418 */ r_esp -= 4; W32(r_esp, 0x48f3feu); f_0048f418();
    /* 0048f3fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048f402: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f404: jne 0x48f40a */ if (!fZ) goto L_0048f40a;
L_0048f406:; BB(0x0048f406);
    /* 0048f406: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f407: ret 4 */ FN_RET(0x0048f3f4); r_esp += 8; return;
L_0048f40a:; BB(0x0048f40a);
    /* 0048f40a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f40b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x48f410u); f_005c2f74();
    /* 0048f410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f411: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f412: ret 4 */ FN_RET(0x0048f3f4); r_esp += 8; return;
}

void f_0048f418(void) /* sub_48F418 */
{
    FN_ENTER(0x0048f418);
    /* 0048f418: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f419: mov ebp, esp */ r_ebp = r_esp;
    /* 0048f41b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048f41d: push 0x8cfff4 */ { u32 v = 0x8cfff4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f422: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048f428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f429: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048f430: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f433: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048f436: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048f439: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048f43c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048f43f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048f442: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048f445: mov dword ptr [ecx], 0xaf94c0 */ W32((u32)(r_ecx), 0xaf94c0u);
    /* 0048f44b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048f452: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x48f457u); f_008171e8();
    /* 0048f457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048f45a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048f461: mov esp, ebp */ r_esp = r_ebp;
    /* 0048f463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f464: ret  */ FN_RET(0x0048f418); r_esp += 4; return;
}

void f_0048f468(void) /* sub_48F468 */
{
    FN_ENTER(0x0048f468);
    /* 0048f468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f469: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f46a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f46b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f46d: mov eax, dword ptr [0xa471dc] */ r_eax = R32((u32)(0xa471dcu));
    /* 0048f472: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f474: je 0x48f518 */ if (fZ) goto L_0048f518;
L_0048f47a:; BB(0x0048f47a);
    /* 0048f47a: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x48f47fu); f_00520db8();
    /* 0048f47f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f481: jne 0x48f514 */ if (!fZ) goto L_0048f514;
L_0048f487:; BB(0x0048f487);
    /* 0048f487: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 0048f48d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f48f: je 0x48f4ad */ if (fZ) goto L_0048f4ad;
L_0048f491:; BB(0x0048f491);
    /* 0048f491: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f494: jne 0x48f49f */ if (!fZ) goto L_0048f49f;
L_0048f496:; BB(0x0048f496);
    /* 0048f496: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f498: call 0x48f7c4 */ r_esp -= 4; W32(r_esp, 0x48f49du); f_0048f7c4();
    /* 0048f49d: jmp 0x48f4b4 */ goto L_0048f4b4;
L_0048f49f:; BB(0x0048f49f);
    /* 0048f49f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f4a2: jne 0x48f4b4 */ if (!fZ) goto L_0048f4b4;
L_0048f4a4:; BB(0x0048f4a4);
    /* 0048f4a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f4a6: call 0x48f52c */ r_esp -= 4; W32(r_esp, 0x48f4abu); f_0048f52c();
    /* 0048f4ab: jmp 0x48f4b4 */ goto L_0048f4b4;
L_0048f4ad:; BB(0x0048f4ad);
    /* 0048f4ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f4af: call 0x48fa68 */ r_esp -= 4; W32(r_esp, 0x48f4b4u); f_0048fa68();
L_0048f4b4:; BB(0x0048f4b4);
    /* 0048f4b4: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 0048f4ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f4bc: je 0x48f514 */ if (fZ) goto L_0048f514;
L_0048f4be:; BB(0x0048f4be);
    /* 0048f4be: mov ecx, dword ptr [0xa471d8] */ r_ecx = R32((u32)(0xa471d8u));
    /* 0048f4c4: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0048f4ca: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0048f4cd: push dword ptr [edx*4 + 0x901f8c] */ { u32 v = R32((u32)(r_edx*4+0x901f8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048f4d4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48f4d9u); f_005b8610();
    /* 0048f4d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f4da: push dword ptr [0xa471d4] */ { u32 v = R32((u32)(0xa471d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048f4e0: mov edx, dword ptr [ebx + 0xc4] */ r_edx = R32((u32)(r_ebx+0xc4u));
    /* 0048f4e6: mov ecx, dword ptr [ebx + 0xb4] */ r_ecx = R32((u32)(r_ebx+0xb4u));
    /* 0048f4ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f4ee: mov edx, 0 */ r_edx = 0x0u;
    /* 0048f4f3: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0048f4f6: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0048f4f9: lea ebp, [ebx + 0x5c] */ r_ebp = (u32)(r_ebx+0x5cu);
    /* 0048f4fc: lea ecx, [ecx + ecx*4] */ r_ecx = (u32)(r_ecx+r_ecx*4);
    /* 0048f4ff: push dword ptr [ecx*4 + 0x901f90] */ { u32 v = R32((u32)(r_ecx*4+0x901f90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048f506: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f507: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f508: mov ecx, dword ptr [ebx + 0xe4] */ r_ecx = R32((u32)(r_ebx+0xe4u));
    /* 0048f50e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f50f: call 0x48fad8 */ r_esp -= 4; W32(r_esp, 0x48f514u); f_0048fad8();
L_0048f514:; BB(0x0048f514);
    /* 0048f514: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f515: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f516: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048f517: ret  */ FN_RET(0x0048f468); r_esp += 4; return;
L_0048f518:; BB(0x0048f518);
    /* 0048f518: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0048f51c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048f521: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0048f525: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f526: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f527: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048f528: ret  */ FN_RET(0x0048f468); r_esp += 4; return;
}

void f_0048f52c(void) /* sub_48F52C */
{
    FN_ENTER(0x0048f52c);
    /* 0048f52c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f52d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f530: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f532: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 0048f538: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048f53b: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 0048f541: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048f543: jne 0x48f641 */ if (!fZ) goto L_0048f641;
L_0048f549:; BB(0x0048f549);
    /* 0048f549: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048f54e: mov edx, dword ptr [ebx + 0xb4] */ r_edx = R32((u32)(r_ebx+0xb4u));
    /* 0048f554: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0048f557: fld dword ptr [edx*4 + 0x901f90] */ FPUSH(R_F32((u32)(r_edx*4+0x901f90u)));
    /* 0048f55e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048f560: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048f562: jle 0x48f6ae */ if ((fZ||fS!=fO)) goto L_0048f6ae;
L_0048f568:; BB(0x0048f568);
    /* 0048f568: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0048f56c: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0048f570: mov ebx, edx */ r_ebx = r_edx;
    /* 0048f572: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0048f576: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0048f57a: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0048f57e: mov ebp, eax */ r_ebp = r_eax;
L_0048f580:; BB(0x0048f580);
    /* 0048f580: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048f587: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f588: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x48f58du); f_0048e100();
    /* 0048f58d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f58e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f590: je 0x48f626 */ if (fZ) goto L_0048f626;
L_0048f596:; BB(0x0048f596);
    /* 0048f596: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 0048f599: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0048f59c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0048f59f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0048f5a3: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0048f5a6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0048f5aa: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0048f5ae: lea edi, [ecx + 0xd4] */ r_edi = (u32)(r_ecx+0xd4u);
    /* 0048f5b4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f5b7: mov edx, edi */ r_edx = r_edi;
    /* 0048f5b9: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48f5beu); f_0082f9c4();
    /* 0048f5be: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048f5c6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f5c9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48f5ceu); f_0083173c();
    /* 0048f5ce: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 0048f5d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048f5d4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048f5d5: jb 0x48f5db */ if (fC) goto L_0048f5db;
L_0048f5d7:; BB(0x0048f5d7);
    /* 0048f5d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f5d9: jmp 0x48f626 */ goto L_0048f626;
L_0048f5db:; BB(0x0048f5db);
    /* 0048f5db: fcomp dword ptr [0x902058] */ fx_compare(ST(0), R_F32((u32)(0x902058u))); FPOP();
    /* 0048f5e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048f5e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048f5e4: ja 0x48f5ed */ if ((!fC&&!fZ)) goto L_0048f5ed;
L_0048f5e6:; BB(0x0048f5e6);
    /* 0048f5e6: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
L_0048f5ed:; BB(0x0048f5ed);
    /* 0048f5ed: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f5f0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48f5f5u); f_0082df08();
    /* 0048f5f5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f5f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0048f5fa: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048f5fe: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048f600: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0048f604: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048f606: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048f608: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0048f60b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048f60f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f612: mov edx, edi */ r_edx = r_edi;
    /* 0048f614: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48f619u); f_0082ebac();
    /* 0048f619: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f61c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f61d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f61e: call 0x48dbf4 */ r_esp -= 4; W32(r_esp, 0x48f623u); f_0048dbf4();
    /* 0048f623: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048f626:; BB(0x0048f626);
    /* 0048f626: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048f629: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f62b: jl 0x48f580 */ if ((fS!=fO)) goto L_0048f580;
L_0048f631:; BB(0x0048f631);
    /* 0048f631: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0048f635: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0048f639: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0048f63d: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0048f641:; BB(0x0048f641);
    /* 0048f641: mov eax, dword ptr [ebx + 0xbc] */ r_eax = R32((u32)(r_ebx+0xbcu));
    /* 0048f647: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f64a: je 0x48f6a0 */ if (fZ) goto L_0048f6a0;
L_0048f64c:; BB(0x0048f64c);
    /* 0048f64c: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
L_0048f652:; BB(0x0048f652);
    /* 0048f652: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f655: je 0x48f69b */ if (fZ) goto L_0048f69b;
L_0048f657:; BB(0x0048f657);
    /* 0048f657: push dword ptr [ebx + 0xb4] */ { u32 v = R32((u32)(r_ebx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048f65d: lea eax, [ebx + 0xd4] */ r_eax = (u32)(r_ebx+0xd4u);
    /* 0048f663: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f664: call 0x483a38 */ r_esp -= 4; W32(r_esp, 0x48f669u); f_00483a38();
    /* 0048f669: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0048f66c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f66e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f66f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f670: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f671: push 0x5af */ { u32 v = 0x5afu; r_esp -= 4; W32(r_esp, v); }
    /* 0048f676: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48f67bu); f_00814298();
    /* 0048f67b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048f67e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f680: call 0x48f3d0 */ r_esp -= 4; W32(r_esp, 0x48f685u); f_0048f3d0();
    /* 0048f685: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048f687: call 0x48f6b4 */ r_esp -= 4; W32(r_esp, 0x48f68cu); f_0048f6b4();
    /* 0048f68c: mov dword ptr [ebx + 0xc4], 0 */ W32((u32)(r_ebx+0xc4u), 0x0u);
    /* 0048f696: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f699: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f69a: ret  */ FN_RET(0x0048f52c); r_esp += 4; return;
L_0048f69b:; BB(0x0048f69b);
    /* 0048f69b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f69e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f69f: ret  */ FN_RET(0x0048f52c); r_esp += 4; return;
L_0048f6a0:; BB(0x0048f6a0);
    /* 0048f6a0: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 0048f6aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f6ac: jmp 0x48f652 */ goto L_0048f652;
L_0048f6ae:; BB(0x0048f6ae);
    /* 0048f6ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f6b0: jmp 0x48f641 */ goto L_0048f641;
}

void f_0048f6b4(void) /* sub_48F6B4 */
{
    FN_ENTER(0x0048f6b4);
    /* 0048f6b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f6b5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f6b8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048f6ba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48f6bfu); f_008587a5();
    /* 0048f6bf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048f6c2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048f6c5: fdiv dword ptr [0x902048] */ ST(0) = ST(0) / R_F32((u32)(0x902048u));
    /* 0048f6cb: fadd dword ptr [0x90204c] */ ST(0) = ST(0) + R_F32((u32)(0x90204cu));
    /* 0048f6d1: fmul dword ptr [0x902050] */ ST(0) = ST(0) * R_F32((u32)(0x902050u));
    /* 0048f6d7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048f6db: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048f6e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048f6e5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048f6e9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048f6ed: fistp dword ptr [ebx + 0x5c] */ W32((u32)(r_ebx+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0048f6f0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048f6f4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48f6f9u); f_008587a5();
    /* 0048f6f9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048f6fd: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0048f701: fdiv dword ptr [0x902048] */ ST(0) = ST(0) / R_F32((u32)(0x902048u));
    /* 0048f707: fmul dword ptr [0x902044] */ ST(0) = ST(0) * R_F32((u32)(0x902044u));
    /* 0048f70d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048f711: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048f716: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048f71b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048f71f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048f723: fistp dword ptr [ebx + 0x60] */ W32((u32)(r_ebx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048f726: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048f72a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48f72fu); f_008587a5();
    /* 0048f72f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048f733: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0048f737: fdiv dword ptr [0x902048] */ ST(0) = ST(0) / R_F32((u32)(0x902048u));
    /* 0048f73d: fadd dword ptr [0x90204c] */ ST(0) = ST(0) + R_F32((u32)(0x90204cu));
    /* 0048f743: fmul dword ptr [0x902050] */ ST(0) = ST(0) * R_F32((u32)(0x902050u));
    /* 0048f749: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048f74d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048f752: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048f757: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048f75b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048f75f: fistp dword ptr [ebx + 0x64] */ W32((u32)(r_ebx+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048f762: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048f766: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48f76bu); f_008587a5();
    /* 0048f76b: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 0048f771: mov dword ptr [ebx + 0x3c], 0x43e10000 */ W32((u32)(r_ebx+0x3cu), 0x43e10000u);
    /* 0048f778: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 0048f77b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048f77f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0048f783: fdiv dword ptr [0x902048] */ ST(0) = ST(0) / R_F32((u32)(0x902048u));
    /* 0048f789: fadd dword ptr [0x90204c] */ ST(0) = ST(0) + R_F32((u32)(0x90204cu));
    /* 0048f78f: fmul dword ptr [0x902040] */ ST(0) = ST(0) * R_F32((u32)(0x902040u));
    /* 0048f795: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0048f799: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0048f79e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048f7a3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048f7a7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0048f7ab: fistp dword ptr [ebx + 0xd0] */ W32((u32)(r_ebx+0xd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048f7b1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0048f7b5: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 0048f7bb: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0048f7be: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f7c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f7c2: ret  */ FN_RET(0x0048f6b4); r_esp += 4; return;
}

void f_0048f7c4(void) /* sub_48F7C4 */
{
    FN_ENTER(0x0048f7c4);
    /* 0048f7c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f7c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f7c6: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f7c9: mov esi, ecx */ r_esi = r_ecx;
    /* 0048f7cb: fld dword ptr [0x90203c] */ FPUSH(R_F32((u32)(0x90203cu)));
    /* 0048f7d1: fld dword ptr [0x902038] */ FPUSH(R_F32((u32)(0x902038u)));
    /* 0048f7d7: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0048f7dd: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0048f7e3: add dword ptr [esi + 0x60], eax */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0048f7e6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f7e9: jne 0x48f7fb */ if (!fZ) goto L_0048f7fb;
L_0048f7eb:; BB(0x0048f7eb);
    /* 0048f7eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f7ed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f7ef: fld dword ptr [0xa471e4] */ FPUSH(R_F32((u32)(0xa471e4u)));
    /* 0048f7f5: fld dword ptr [0xa471e0] */ FPUSH(R_F32((u32)(0xa471e0u)));
L_0048f7fb:; BB(0x0048f7fb);
    /* 0048f7fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048f7fd: fadd dword ptr [esi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xccu));
    /* 0048f803: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048f805: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048f807: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048f808: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048f80a: ja 0x48f80e */ if ((!fC&&!fZ)) goto L_0048f80e;
L_0048f80c:; BB(0x0048f80c);
    /* 0048f80c: fst st(1) */ ST(1) = ST(0);
L_0048f80e:; BB(0x0048f80e);
    /* 0048f80e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f810: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0048f813: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0048f815: fcom dword ptr [0x902034] */ fx_compare(ST(0), R_F32((u32)(0x902034u))); 
    /* 0048f81b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048f81d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048f81e: ja 0x48f9bc */ if ((!fC&&!fZ)) goto L_0048f9bc;
L_0048f824:; BB(0x0048f824);
    /* 0048f824: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f826: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f828: fld dword ptr [0x901f4c] */ FPUSH(R_F32((u32)(0x901f4cu)));
    /* 0048f82e: mov ebx, dword ptr [esi + 0xb4] */ r_ebx = R32((u32)(r_esi+0xb4u));
    /* 0048f834: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f836: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0048f839: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048f83b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048f840: mov dword ptr [esi + 0xcc], edx */ W32((u32)(r_esi+0xccu), r_edx);
    /* 0048f846: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 0048f849: fadd dword ptr [edx*4 + 0x901f90] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x901f90u));
    /* 0048f850: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048f852: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048f854: jle 0x48f9cb */ if ((fZ||fS!=fO)) goto L_0048f9cb;
L_0048f85a:; BB(0x0048f85a);
    /* 0048f85a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0048f85e: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0048f862: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0048f866: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0048f86a: mov ebp, eax */ r_ebp = r_eax;
L_0048f86c:; BB(0x0048f86c);
    /* 0048f86c: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048f873: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f874: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x48f879u); f_0048e100();
    /* 0048f879: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048f87a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f87c: je 0x48f954 */ if (fZ) goto L_0048f954;
L_0048f882:; BB(0x0048f882);
    /* 0048f882: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f885: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 0048f888: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0048f88b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0048f88e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0048f892: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0048f895: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0048f899: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0048f89d: lea edi, [edx + 0xd4] */ r_edi = (u32)(r_edx+0xd4u);
    /* 0048f8a3: mov edx, edi */ r_edx = r_edi;
    /* 0048f8a5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48f8aau); f_0082f9c4();
    /* 0048f8aa: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048f8b2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f8b5: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48f8bau); f_0083173c();
    /* 0048f8ba: fcom dword ptr [esp + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x24u))); 
    /* 0048f8be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048f8c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048f8c1: jb 0x48f8ca */ if (fC) goto L_0048f8ca;
L_0048f8c3:; BB(0x0048f8c3);
    /* 0048f8c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f8c5: jmp 0x48f954 */ goto L_0048f954;
L_0048f8ca:; BB(0x0048f8ca);
    /* 0048f8ca: fcomp dword ptr [0x902030] */ fx_compare(ST(0), R_F32((u32)(0x902030u))); FPOP();
    /* 0048f8d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048f8d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048f8d3: ja 0x48f8dc */ if ((!fC&&!fZ)) goto L_0048f8dc;
L_0048f8d5:; BB(0x0048f8d5);
    /* 0048f8d5: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
L_0048f8dc:; BB(0x0048f8dc);
    /* 0048f8dc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f8df: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48f8e4u); f_0082df08();
    /* 0048f8e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f8e6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0048f8e9: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0048f8ed: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048f8ef: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0048f8f3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048f8f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048f8f7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0048f8fa: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048f8fe: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048f901: mov edx, edi */ r_edx = r_edi;
    /* 0048f903: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48f908u); f_0082ebac();
    /* 0048f908: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0048f90b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f90c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f90d: call 0x48dbf4 */ r_esp -= 4; W32(r_esp, 0x48f912u); f_0048dbf4();
    /* 0048f912: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0048f917: push dword ptr [0xa471d0] */ { u32 v = R32((u32)(0xa471d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048f91d: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x48f922u); f_0048e9d4();
    /* 0048f922: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048f925: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048f929: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0048f92d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0048f92f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0048f933: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0048f935: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0048f939: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0048f93e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f93f: mov ecx, esi */ r_ecx = r_esi;
    /* 0048f941: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f942: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048f943: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048f947: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f949: push dword ptr [0xa471dc] */ { u32 v = R32((u32)(0xa471dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048f94f: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x48f952u); call_ind(t); }
    /* 0048f952: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0048f954:; BB(0x0048f954);
    /* 0048f954: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048f957: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048f959: jl 0x48f86c */ if ((fS!=fO)) goto L_0048f86c;
L_0048f95f:; BB(0x0048f95f);
    /* 0048f95f: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0048f963: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0048f967: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_0048f96b:; BB(0x0048f96b);
    /* 0048f96b: mov ecx, esi */ r_ecx = r_esi;
    /* 0048f96d: call 0x48f9d0 */ r_esp -= 4; W32(r_esp, 0x48f972u); f_0048f9d0();
    /* 0048f972: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0048f975: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048f977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048f979: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f97a: push 0x5ae */ { u32 v = 0x5aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0048f97f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48f984u); f_00814298();
    /* 0048f984: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f989: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f98a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x48f98fu); f_0050b510();
    /* 0048f98f: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f994: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f995: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x48f99au); f_0050b510();
    /* 0048f99a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0048f99c: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f9a1: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048f9a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048f9a7: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x48f9acu); f_0048e41c();
    /* 0048f9ac: mov dword ptr [esi + 0xc4], 2 */ W32((u32)(r_esi+0xc4u), 0x2u);
    /* 0048f9b6: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f9b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f9ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f9bb: ret  */ FN_RET(0x0048f7c4); r_esp += 4; return;
L_0048f9bc:; BB(0x0048f9bc);
    /* 0048f9bc: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0048f9bf: fstp dword ptr [esi + 0xcc] */ W_F32((u32)(r_esi+0xccu), ST(0)); FPOP();
    /* 0048f9c5: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f9c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048f9c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048f9ca: ret  */ FN_RET(0x0048f7c4); r_esp += 4; return;
L_0048f9cb:; BB(0x0048f9cb);
    /* 0048f9cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048f9cd: jmp 0x48f96b */ goto L_0048f96b;
}

void f_0048f9d0(void) /* sub_48F9D0 */
{
    FN_ENTER(0x0048f9d0);
    /* 0048f9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048f9d1: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048f9d4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048f9d6: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0048f9dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048f9de: je 0x48f9e5 */ if (fZ) goto L_0048f9e5;
L_0048f9e0:; BB(0x0048f9e0);
    /* 0048f9e0: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048f9e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048f9e4: ret  */ FN_RET(0x0048f9d0); r_esp += 4; return;
L_0048f9e5:; BB(0x0048f9e5);
    /* 0048f9e5: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0048f9eb: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 0048f9f1: mov dword ptr [esp + 0x30], 2 */ W32((u32)(r_esp+0x30u), 0x2u);
    /* 0048f9f9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0048f9fd: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 0048fa03: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0048fa07: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048fa0b: mov eax, dword ptr [0x901f50] */ r_eax = R32((u32)(0x901f50u));
    /* 0048fa10: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0048fa14: mov eax, dword ptr [0x901f54] */ r_eax = R32((u32)(0x901f54u));
    /* 0048fa19: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0048fa1d: mov eax, dword ptr [0x901f58] */ r_eax = R32((u32)(0x901f58u));
    /* 0048fa22: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0048fa26: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0048fa2c: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0048fa2f: mov eax, dword ptr [edx*4 + 0x901f98] */ r_eax = R32((u32)(r_edx*4+0x901f98u));
    /* 0048fa36: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0048fa3a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0048fa3e: mov eax, dword ptr [edx*4 + 0x901f94] */ r_eax = R32((u32)(r_edx*4+0x901f94u));
    /* 0048fa45: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0048fa49: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 0048fa51: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048fa54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fa55: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x48fa5au); f_0065f960();
    /* 0048fa5a: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0048fa60: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048fa63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048fa64: ret  */ FN_RET(0x0048f9d0); r_esp += 4; return;
}

void f_0048fa68(void) /* sub_48FA68 */
{
    FN_ENTER(0x0048fa68);
    /* 0048fa68: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048fa6b: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 0048fa71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fa73: je 0x48fad4 */ if (fZ) goto L_0048fad4;
L_0048fa75:; BB(0x0048fa75);
    /* 0048fa75: fild dword ptr [ecx + 0xac] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0xacu)));
    /* 0048fa7b: fdiv dword ptr [0x90201c] */ ST(0) = ST(0) / R_F32((u32)(0x90201cu));
    /* 0048fa81: fld dword ptr [0x902020] */ FPUSH(R_F32((u32)(0x902020u)));
    /* 0048fa87: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0048fa8d: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 0048fa93: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048fa95: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0048fa98: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 0048fa9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048faa1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048faa4: fdiv dword ptr [0x902018] */ ST(0) = ST(0) / R_F32((u32)(0x902018u));
    /* 0048faaa: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 0048fab0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048fab2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048fab4: fmul dword ptr [0x901f80] */ ST(0) = ST(0) * R_F32((u32)(0x901f80u));
    /* 0048faba: fstp dword ptr [ecx + 0xcc] */ W_F32((u32)(r_ecx+0xccu), ST(0)); FPOP();
    /* 0048fac0: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0048fac6: mov dword ptr [ecx + 0xc4], 1 */ W32((u32)(r_ecx+0xc4u), 0x1u);
    /* 0048fad0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048fad3: ret  */ FN_RET(0x0048fa68); r_esp += 4; return;
L_0048fad4:; BB(0x0048fad4);
    /* 0048fad4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048fad7: ret  */ FN_RET(0x0048fa68); r_esp += 4; return;
}

void f_0048fad8(void) /* sub_48FAD8 */
{
    FN_ENTER(0x0048fad8);
    /* 0048fad8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fad9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0048fadd: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048fae1: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0048fae5: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 0048fae8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048faea: jne 0x48faf0 */ if (!fZ) goto L_0048faf0;
L_0048faec:; BB(0x0048faec);
    /* 0048faec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048faed: ret 0x18 */ FN_RET(0x0048fad8); r_esp += 28; return;
L_0048faf0:; BB(0x0048faf0);
    /* 0048faf0: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0048faf2: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 0048faf5: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0048faf8: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 0048fafb: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0048fafe: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0048fb01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048fb03: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0048fb06: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0048fb09: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0048fb0c: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0048fb0f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0048fb13: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0048fb16: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0048fb19: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0048fb1d: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0048fb20: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0048fb24: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0048fb27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048fb28: ret 0x18 */ FN_RET(0x0048fad8); r_esp += 28; return;
}

void f_0048fae8(void)
{
    FN_ENTER(0x0048fae8);
    /* 0048fae8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048faea: jne 0x48faf0 */ if (!fZ) goto L_0048faf0;
L_0048faec:; BB(0x0048faec);
    /* 0048faec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048faed: ret 0x18 */ FN_RET(0x0048fae8); r_esp += 28; return;
L_0048faf0:; BB(0x0048faf0);
    /* 0048faf0: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0048faf2: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 0048faf5: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0048faf8: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 0048fafb: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0048fafe: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0048fb01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0048fb03: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0048fb06: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0048fb09: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0048fb0c: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0048fb0f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0048fb13: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0048fb16: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0048fb19: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0048fb1d: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0048fb20: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0048fb24: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0048fb27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048fb28: ret 0x18 */ FN_RET(0x0048fae8); r_esp += 28; return;
}

void f_0048fb2c(void) /* sub_48FB2C */
{
    FN_ENTER(0x0048fb2c);
    /* 0048fb2c: mov eax, dword ptr [0xa471dc] */ r_eax = R32((u32)(0xa471dcu));
    /* 0048fb31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048fb33: je 0x48fb3a */ if (fZ) goto L_0048fb3a;
L_0048fb35:; BB(0x0048fb35);
    /* 0048fb35: call 0x48fb3c */ r_esp -= 4; W32(r_esp, 0x48fb3au); f_0048fb3c();
L_0048fb3a:; BB(0x0048fb3a);
    /* 0048fb3a: ret  */ FN_RET(0x0048fb2c); r_esp += 4; return;
}

void f_0048fb3c(void) /* sub_48FB3C */
{
    FN_ENTER(0x0048fb3c);
    /* 0048fb3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048fb3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048fb3e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048fb41: mov edi, ecx */ r_edi = r_ecx;
    /* 0048fb43: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 0048fb49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fb4b: je 0x48fbea */ if (fZ) goto L_0048fbea;
L_0048fb51:; BB(0x0048fb51);
    /* 0048fb51: mov eax, dword ptr [edi + 0xe4] */ r_eax = R32((u32)(r_edi+0xe4u));
    /* 0048fb57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fb59: je 0x48fbf0 */ if (fZ) goto L_0048fbf0;
L_0048fb5f:; BB(0x0048fb5f);
    /* 0048fb5f: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0048fb65: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0048fb68: fld dword ptr [edx*4 + 0x901f90] */ FPUSH(R_F32((u32)(r_edx*4+0x901f90u)));
    /* 0048fb6f: fsub dword ptr [0x901f78] */ ST(0) = ST(0) - R_F32((u32)(0x901f78u));
    /* 0048fb75: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0048fb78: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048fb7c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0048fb7f: call 0x48e630 */ r_esp -= 4; W32(r_esp, 0x48fb84u); f_0048e630();
    /* 0048fb84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fb86: je 0x48fb8e */ if (fZ) goto L_0048fb8e;
L_0048fb88:; BB(0x0048fb88);
    /* 0048fb88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048fb8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048fb8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048fb8d: ret  */ FN_RET(0x0048fb3c); r_esp += 4; return;
L_0048fb8e:; BB(0x0048fb8e);
    /* 0048fb8e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x48fb93u); f_0082d7b0();
    /* 0048fb93: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048fb95: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x48fb9au); f_0082d838();
    /* 0048fb9a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0048fb9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048fb9f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x48fba4u); f_0082d8bc();
    /* 0048fba4: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0048fba7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048fba9: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x48fbaeu); f_0082e9e4();
    /* 0048fbae: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0048fbb1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048fbb3: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x48fbb8u); f_00830c04();
    /* 0048fbb8: mov ecx, dword ptr [0xa471d4] */ r_ecx = R32((u32)(0xa471d4u));
    /* 0048fbbe: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x48fbc3u); f_00829cc8();
    /* 0048fbc3: mov ecx, dword ptr [0xa471d8] */ r_ecx = R32((u32)(0xa471d8u));
    /* 0048fbc9: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0048fbcf: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0048fbd2: push dword ptr [edx*4 + 0x901f8c] */ { u32 v = R32((u32)(r_edx*4+0x901f8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048fbd9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48fbdeu); f_005b8610();
    /* 0048fbde: mov ecx, eax */ r_ecx = r_eax;
    /* 0048fbe0: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x48fbe5u); f_00831758();
    /* 0048fbe5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x48fbeau); f_0082da80();
L_0048fbea:; BB(0x0048fbea);
    /* 0048fbea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048fbed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048fbee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048fbef: ret  */ FN_RET(0x0048fb3c); r_esp += 4; return;
L_0048fbf0:; BB(0x0048fbf0);
    /* 0048fbf0: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0048fbf3: jmp 0x48fb8e */ goto L_0048fb8e;
}

void f_0048fbf8(void) /* sub_48FBF8 */
{
    FN_ENTER(0x0048fbf8);
    /* 0048fbf8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0048fbfc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0048fc00: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0048fc04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048fc08: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048fc0b: mov edi, ecx */ r_edi = r_ecx;
    /* 0048fc0d: mov esi, edx */ r_esi = r_edx;
    /* 0048fc0f: mov ebp, eax */ r_ebp = r_eax;
    /* 0048fc11: mov eax, ebp */ r_eax = r_ebp;
    /* 0048fc13: call 0x48fd68 */ r_esp -= 4; W32(r_esp, 0x48fc18u); f_0048fd68();
    /* 0048fc18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fc1a: je 0x48fd57 */ if (fZ) goto L_0048fd57;
L_0048fc20:; BB(0x0048fc20);
    /* 0048fc20: mov ebx, dword ptr [0xa471dc] */ r_ebx = R32((u32)(0xa471dcu));
    /* 0048fc26: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fc28: je 0x48fd57 */ if (fZ) goto L_0048fd57;
L_0048fc2e:; BB(0x0048fc2e);
    /* 0048fc2e: mov eax, ebp */ r_eax = r_ebp;
    /* 0048fc30: call 0x48fd98 */ r_esp -= 4; W32(r_esp, 0x48fc35u); f_0048fd98();
    /* 0048fc35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fc37: je 0x48fd57 */ if (fZ) goto L_0048fd57;
L_0048fc3d:; BB(0x0048fc3d);
    /* 0048fc3d: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0048fc41: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0048fc44: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0048fc47: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0048fc4b: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0048fc53: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0048fc57: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0048fc5a: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 0048fc5d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0048fc61: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0048fc65: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 0048fc69: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048fc6b: mov eax, dword ptr [ebx + ebp*8 + 0xa46fc0] */ r_eax = R32((u32)(r_ebx+r_ebp*8+0xa46fc0u));
    /* 0048fc72: mov edx, dword ptr [ebx + ebp*8 + 0xa46fc4] */ r_edx = R32((u32)(r_ebx+r_ebp*8+0xa46fc4u));
    /* 0048fc79: mov ebp, dword ptr [ebx + ebp*8 + 0xa46fc8] */ r_ebp = R32((u32)(r_ebx+r_ebp*8+0xa46fc8u));
    /* 0048fc80: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0048fc84: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0048fc88: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0048fc8c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0048fc90: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0048fc94: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0048fc98: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0048fc9c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48fca1u); f_0082f9c4();
    /* 0048fca1: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0048fca5: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48fcaau); f_0083173c();
    /* 0048fcaa: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0048fcae: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0048fcb2: fcomp dword ptr [0x901f70] */ fx_compare(ST(0), R_F32((u32)(0x901f70u))); FPOP();
    /* 0048fcb8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048fcba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048fcbb: jbe 0x48fd57 */ if ((fC||fZ)) goto L_0048fd57;
L_0048fcc1:; BB(0x0048fcc1);
    /* 0048fcc1: fld dword ptr [0x901f6c] */ FPUSH(R_F32((u32)(0x901f6cu)));
    /* 0048fcc7: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0048fccb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0048fccd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048fccf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048fcd0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048fcd2: jbe 0x48fcd6 */ if ((fC||fZ)) goto L_0048fcd6;
L_0048fcd4:; BB(0x0048fcd4);
    /* 0048fcd4: fst st(1) */ ST(1) = ST(0);
L_0048fcd6:; BB(0x0048fcd6);
    /* 0048fcd6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048fcd8: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0048fcdc: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0048fce0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48fce5u); f_0082df08();
    /* 0048fce5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048fce7: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0048fceb: fsub dword ptr [0x901f70] */ ST(0) = ST(0) - R_F32((u32)(0x901f70u));
    /* 0048fcf1: fdiv dword ptr [0x90200c] */ ST(0) = ST(0) / R_F32((u32)(0x90200cu));
    /* 0048fcf7: fadd dword ptr [0x902010] */ ST(0) = ST(0) + R_F32((u32)(0x902010u));
    /* 0048fcfd: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0048fd01: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0048fd05: fchs  */ ST(0) = -ST(0);
    /* 0048fd07: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0048fd09: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048fd0d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048fd0f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048fd11: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0048fd13: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0048fd17: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048fd19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048fd1b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0048fd1f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0048fd23: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0048fd27: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0048fd2b: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48fd30u); f_0082ebac();
    /* 0048fd30: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0048fd34: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0048fd38: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0048fd3a: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0048fd3e: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0048fd41: mov eax, 1 */ r_eax = 0x1u;
    /* 0048fd46: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0048fd4a: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 0048fd4d: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0048fd4f: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048fd52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048fd53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048fd54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048fd55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048fd56: ret  */ FN_RET(0x0048fbf8); r_esp += 4; return;
L_0048fd57:; BB(0x0048fd57);
    /* 0048fd57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048fd59: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048fd5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048fd5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048fd5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048fd5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048fd60: ret  */ FN_RET(0x0048fbf8); r_esp += 4; return;
}

void f_0048fd68(void) /* sub_48FD68 */
{
    FN_ENTER(0x0048fd68);
    /* 0048fd68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048fd6a: jl 0x48fd8e */ if ((fS!=fO)) goto L_0048fd8e;
L_0048fd6c:; BB(0x0048fd6c);
    /* 0048fd6c: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048fd6f: jge 0x48fd8e */ if ((fS==fO)) goto L_0048fd8e;
L_0048fd71:; BB(0x0048fd71);
    /* 0048fd71: mov eax, dword ptr [eax*4 + 0xa47140] */ r_eax = R32((u32)(r_eax*4+0xa47140u));
    /* 0048fd78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fd7a: je 0x48fd8e */ if (fZ) goto L_0048fd8e;
L_0048fd7c:; BB(0x0048fd7c);
    /* 0048fd7c: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0048fd82: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048fd85: mov eax, 0 */ r_eax = 0x0u;
    /* 0048fd8a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0048fd8d: ret  */ FN_RET(0x0048fd68); r_esp += 4; return;
L_0048fd8e:; BB(0x0048fd8e);
    /* 0048fd8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048fd90: ret  */ FN_RET(0x0048fd68); r_esp += 4; return;
}

void f_0048fd98(void) /* sub_48FD98 */
{
    FN_ENTER(0x0048fd98);
    /* 0048fd98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048fd9a: jl 0x48fda1 */ if ((fS!=fO)) goto L_0048fda1;
L_0048fd9c:; BB(0x0048fd9c);
    /* 0048fd9c: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048fd9f: jl 0x48fda4 */ if ((fS!=fO)) goto L_0048fda4;
L_0048fda1:; BB(0x0048fda1);
    /* 0048fda1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048fda3: ret  */ FN_RET(0x0048fd98); r_esp += 4; return;
L_0048fda4:; BB(0x0048fda4);
    /* 0048fda4: mov edx, dword ptr [eax*4 + 0xa47140] */ r_edx = R32((u32)(r_eax*4+0xa47140u));
    /* 0048fdab: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 0048fdb1: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 0048fdb4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048fdb6: lea eax, [eax + eax + 0x901f8c] */ r_eax = (u32)(r_eax+r_eax+0x901f8cu);
    /* 0048fdbd: ret  */ FN_RET(0x0048fd98); r_esp += 4; return;
}

void f_0048fdc0(void) /* sub_48FDC0 */
{
    FN_ENTER(0x0048fdc0);
    /* 0048fdc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048fdc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0048fdc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048fdc5: push 0x8d0010 */ { u32 v = 0x8d0010u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fdca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048fdd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fdd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048fdd8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048fddb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048fdde: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0048fde1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0048fde4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0048fde7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048fdea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048fded: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0048fdf0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048fdf3: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x48fdf8u); f_007b4b48();
    /* 0048fdf8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048fdff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048fe02: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0048fe05: mov dword ptr [ecx], 0xaf9490 */ W32((u32)(r_ecx), 0xaf9490u);
    /* 0048fe0b: mov eax, dword ptr [0x9a6d50] */ r_eax = R32((u32)(0x9a6d50u));
    /* 0048fe10: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0048fe13: mov dword ptr [ecx + 0xac], edi */ W32((u32)(r_ecx+0xacu), r_edi);
    /* 0048fe19: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0048fe1c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048fe1e: mov edx, dword ptr [esi + edi*8 + 0xa46fc0] */ r_edx = R32((u32)(r_esi+r_edi*8+0xa46fc0u));
    /* 0048fe25: mov dword ptr [ecx + 0xd4], edx */ W32((u32)(r_ecx+0xd4u), r_edx);
    /* 0048fe2b: mov ebx, dword ptr [esi + edi*8 + 0xa46fc4] */ r_ebx = R32((u32)(r_esi+r_edi*8+0xa46fc4u));
    /* 0048fe32: mov dword ptr [ecx + 0xd8], ebx */ W32((u32)(r_ecx+0xd8u), r_ebx);
    /* 0048fe38: mov eax, dword ptr [esi + edi*8 + 0xa46fc8] */ r_eax = R32((u32)(r_esi+r_edi*8+0xa46fc8u));
    /* 0048fe3f: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0048fe45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048fe47: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0048fe4d: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 0048fe53: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 0048fe59: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0048fe5f: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0048fe65: call 0x48f6b4 */ r_esp -= 4; W32(r_esp, 0x48fe6au); f_0048f6b4();
    /* 0048fe6a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048fe6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048fe6f: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 0048fe75: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 0048fe7b: call 0x48fea4 */ r_esp -= 4; W32(r_esp, 0x48fe80u); f_0048fea4();
    /* 0048fe80: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048fe83: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048fe86: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048fe89: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048fe8c: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 0048fe92: mov eax, edx */ r_eax = r_edx;
    /* 0048fe94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048fe97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048fe9e: mov esp, ebp */ r_esp = r_ebp;
    /* 0048fea0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048fea1: ret 8 */ FN_RET(0x0048fdc0); r_esp += 12; return;
}

void f_0048fea4(void) /* sub_48FEA4 */
{
    FN_ENTER(0x0048fea4);
    /* 0048fea4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048fea5: mov ebp, esp */ r_ebp = r_esp;
    /* 0048fea7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048fea9: push 0x8d0038 */ { u32 v = 0x8d0038u; r_esp -= 4; W32(r_esp, v); }
    /* 0048feae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048feb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048feb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048febc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048febf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048fec2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048fec5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048fec8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048fecb: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0048fecd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0048fed4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48fed9u); f_005caba4();
    /* 0048fed9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048feda: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048fedd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048fedf: je 0x48ff15 */ if (fZ) goto L_0048ff15;
L_0048fee1:; BB(0x0048fee1);
    /* 0048fee1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0048fee8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048feef: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048fef5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048fef8: call 0x48ff1c */ r_esp -= 4; W32(r_esp, 0x48fefdu); f_0048ff1c();
    /* 0048fefd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ff00: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0048ff07:; BB(0x0048ff07);
    /* 0048ff07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ff0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048ff11: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ff13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ff14: ret  */ FN_RET(0x0048fea4); r_esp += 4; return;
L_0048ff15:; BB(0x0048ff15);
    /* 0048ff15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ff17: jmp 0x48ff07 */ goto L_0048ff07;
}

void f_0048ff1c(void) /* sub_48FF1C */
{
    FN_ENTER(0x0048ff1c);
    /* 0048ff1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048ff1f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048ff23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048ff25: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x48ff2au); f_008193cc();
    /* 0048ff2a: mov dword ptr [ebp], 0xaf94c0 */ W32((u32)(r_ebp), 0xaf94c0u);
    /* 0048ff31: mov eax, ebp */ r_eax = r_ebp;
    /* 0048ff33: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 0048ff3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ff3b: ret 4 */ FN_RET(0x0048ff1c); r_esp += 8; return;
}

void f_0048ff40(void) /* sub_48FF40 */
{
    FN_ENTER(0x0048ff40);
    /* 0048ff40: mov ecx, dword ptr [0xa471d8] */ r_ecx = R32((u32)(0xa471d8u));
    /* 0048ff46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ff48: je 0x48ff5d */ if (fZ) goto L_0048ff5d;
L_0048ff4a:; BB(0x0048ff4a);
    /* 0048ff4a: je 0x48ff53 */ if (fZ) goto L_0048ff53;
L_0048ff4c:; BB(0x0048ff4c);
    /* 0048ff4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff4e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x48ff53u); f_004066a8();
L_0048ff53:; BB(0x0048ff53);
    /* 0048ff53: mov dword ptr [0xa471d8], 0 */ W32((u32)(0xa471d8u), 0x0u);
L_0048ff5d:; BB(0x0048ff5d);
    /* 0048ff5d: mov ecx, dword ptr [0xa471d4] */ r_ecx = R32((u32)(0xa471d4u));
    /* 0048ff63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ff65: je 0x48ff82 */ if (fZ) goto L_0048ff82;
L_0048ff67:; BB(0x0048ff67);
    /* 0048ff67: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x48ff6cu); f_00829de0();
    /* 0048ff6c: push dword ptr [0xa471d4] */ { u32 v = R32((u32)(0xa471d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048ff72: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x48ff77u); f_0082e960();
    /* 0048ff77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ff78: mov dword ptr [0xa471d4], 0 */ W32((u32)(0xa471d4u), 0x0u);
L_0048ff82:; BB(0x0048ff82);
    /* 0048ff82: ret  */ FN_RET(0x0048ff40); r_esp += 4; return;
}

void f_0048ff84(void) /* sub_48FF84 */
{
    FN_ENTER(0x0048ff84);
    /* 0048ff84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff85: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ff87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff89: push 0x8d0060 */ { u32 v = 0x8d0060u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048ff94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ff95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048ff9c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ff9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048ffa2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0048ffa5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0048ffa8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0048ffab: mov eax, dword ptr [0xa471d8] */ r_eax = R32((u32)(0xa471d8u));
    /* 0048ffb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ffb2: je 0x49002e */ if (fZ) goto L_0049002e;
L_0048ffb4:; BB(0x0048ffb4);
    /* 0048ffb4: mov eax, dword ptr [0xa471d4] */ r_eax = R32((u32)(0xa471d4u));
    /* 0048ffb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ffbb: je 0x49002e */ if (fZ) goto L_0049002e;
L_0048ffbd:; BB(0x0048ffbd);
    /* 0048ffbd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048ffc0: mov dword ptr [0xa471dc], eax */ W32((u32)(0xa471dcu), r_eax);
    /* 0048ffc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048ffc7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0048ffca:; BB(0x0048ffca);
    /* 0048ffca: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0048ffd1: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ffd6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48ffdbu); f_005caba4();
    /* 0048ffdb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048ffde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048ffe1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048ffe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ffe6: je 0x490045 */ if (fZ) goto L_00490045;
L_0048ffe8:; BB(0x0048ffe8);
    /* 0048ffe8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0048ffef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048fff6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048fff9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048fffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048fffd: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00490003: call 0x48fdc0 */ r_esp -= 4; W32(r_esp, 0x490008u); f_0048fdc0();
    /* 00490008: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0049000f:; BB(0x0049000f);
    /* 0049000f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00490016: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00490019: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049001c: mov dword ptr [edx*4 + 0xa47140], eax */ W32((u32)(r_edx*4+0xa47140u), r_eax);
    /* 00490023: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00490026: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00490029: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049002c: jl 0x48ffca */ if ((fS!=fO)) goto L_0048ffca;
L_0049002e:; BB(0x0049002e);
    /* 0049002e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00490031: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00490034: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00490037: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049003a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00490041: mov esp, ebp */ r_esp = r_ebp;
    /* 00490043: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00490044: ret  */ FN_RET(0x0048ff84); r_esp += 4; return;
L_00490045:; BB(0x00490045);
    /* 00490045: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00490047: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049004a: jmp 0x49000f */ goto L_0049000f;
}

