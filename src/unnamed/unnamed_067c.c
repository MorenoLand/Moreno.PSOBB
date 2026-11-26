#include "protos.h"

void f_0067c4fc(void)
{
    FN_ENTER(0x0067c4fc);
    /* 0067c4fc: mov edx, dword ptr [0xa90088] */ r_edx = R32((u32)(0xa90088u));
    /* 0067c502: mov dword ptr [0xa90040], 0x3f800000 */ W32((u32)(0xa90040u), 0x3f800000u);
    /* 0067c50c: mov dword ptr [0xa90044], 0x41000000 */ W32((u32)(0xa90044u), 0x41000000u);
    /* 0067c516: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0067c51b: mov dword ptr [0xa90084], eax */ W32((u32)(0xa90084u), r_eax);
    /* 0067c520: mov dword ptr [0xa90048], 0x3fc00000 */ W32((u32)(0xa90048u), 0x3fc00000u);
    /* 0067c52a: mov dword ptr [0xa9003c], 0x3dbf258c */ W32((u32)(0xa9003cu), 0x3dbf258cu);
    /* 0067c534: mov dword ptr [0xa90054], eax */ W32((u32)(0xa90054u), r_eax);
    /* 0067c539: mov dword ptr [0xa90058], edx */ W32((u32)(0xa90058u), r_edx);
    /* 0067c53f: mov dword ptr [0xa90038], 0x3e4ccccd */ W32((u32)(0xa90038u), 0x3e4ccccdu);
    /* 0067c549: mov dword ptr [0xa9004c], 0x3f800000 */ W32((u32)(0xa9004cu), 0x3f800000u);
    /* 0067c553: mov dword ptr [0xa90074], eax */ W32((u32)(0xa90074u), r_eax);
    /* 0067c558: mov dword ptr [0xa90078], edx */ W32((u32)(0xa90078u), r_edx);
    /* 0067c55e: mov dword ptr [0xa90030], 0x1999 */ W32((u32)(0xa90030u), 0x1999u);
    /* 0067c568: mov dword ptr [0xa90034], 0x40b9999a */ W32((u32)(0xa90034u), 0x40b9999au);
    /* 0067c572: mov dword ptr [0xa90080], 0x3e800000 */ W32((u32)(0xa90080u), 0x3e800000u);
    /* 0067c57c: mov dword ptr [0xa9008c], 0x41200000 */ W32((u32)(0xa9008cu), 0x41200000u);
    /* 0067c586: mov dword ptr [0xa90050], 0x3e800000 */ W32((u32)(0xa90050u), 0x3e800000u);
    /* 0067c590: mov dword ptr [0xa9005c], 0x41200000 */ W32((u32)(0xa9005cu), 0x41200000u);
    /* 0067c59a: mov dword ptr [0xa90070], 0x3e800000 */ W32((u32)(0xa90070u), 0x3e800000u);
    /* 0067c5a4: mov dword ptr [0xa9007c], 0x41200000 */ W32((u32)(0xa9007cu), 0x41200000u);
    /* 0067c5ae: ret  */ FN_RET(0x0067c4fc); r_esp += 4; return;
}

void f_0067c527(void)
{
    FN_ENTER(0x0067c527);
    /* 0067c527: add al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0067c529: aas  */ UNSUP(0x0067c529, "aas ");
    /* 0067c52a: mov dword ptr [0xa9003c], 0x3dbf258c */ W32((u32)(0xa9003cu), 0x3dbf258cu);
    /* 0067c534: mov dword ptr [0xa90054], eax */ W32((u32)(0xa90054u), r_eax);
    /* 0067c539: mov dword ptr [0xa90058], edx */ W32((u32)(0xa90058u), r_edx);
    /* 0067c53f: mov dword ptr [0xa90038], 0x3e4ccccd */ W32((u32)(0xa90038u), 0x3e4ccccdu);
    /* 0067c549: mov dword ptr [0xa9004c], 0x3f800000 */ W32((u32)(0xa9004cu), 0x3f800000u);
    /* 0067c553: mov dword ptr [0xa90074], eax */ W32((u32)(0xa90074u), r_eax);
    /* 0067c558: mov dword ptr [0xa90078], edx */ W32((u32)(0xa90078u), r_edx);
    /* 0067c55e: mov dword ptr [0xa90030], 0x1999 */ W32((u32)(0xa90030u), 0x1999u);
    /* 0067c568: mov dword ptr [0xa90034], 0x40b9999a */ W32((u32)(0xa90034u), 0x40b9999au);
    /* 0067c572: mov dword ptr [0xa90080], 0x3e800000 */ W32((u32)(0xa90080u), 0x3e800000u);
    /* 0067c57c: mov dword ptr [0xa9008c], 0x41200000 */ W32((u32)(0xa9008cu), 0x41200000u);
    /* 0067c586: mov dword ptr [0xa90050], 0x3e800000 */ W32((u32)(0xa90050u), 0x3e800000u);
    /* 0067c590: mov dword ptr [0xa9005c], 0x41200000 */ W32((u32)(0xa9005cu), 0x41200000u);
    /* 0067c59a: mov dword ptr [0xa90070], 0x3e800000 */ W32((u32)(0xa90070u), 0x3e800000u);
    /* 0067c5a4: mov dword ptr [0xa9007c], 0x41200000 */ W32((u32)(0xa9007cu), 0x41200000u);
    /* 0067c5ae: ret  */ FN_RET(0x0067c527); r_esp += 4; return;
}

void f_0067c5b0(void) /* sub_67C5B0 */
{
    FN_ENTER(0x0067c5b0);
    /* 0067c5b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067c5b1: mov eax, dword ptr [0xa90080] */ r_eax = R32((u32)(0xa90080u));
    /* 0067c5b6: mov edx, dword ptr [0xa90084] */ r_edx = R32((u32)(0xa90084u));
    /* 0067c5bc: mov ecx, dword ptr [0xa90088] */ r_ecx = R32((u32)(0xa90088u));
    /* 0067c5c2: mov edi, dword ptr [0xa9008c] */ r_edi = R32((u32)(0xa9008cu));
    /* 0067c5c8: mov dword ptr [0xa90070], eax */ W32((u32)(0xa90070u), r_eax);
    /* 0067c5cd: mov dword ptr [0xa90074], edx */ W32((u32)(0xa90074u), r_edx);
    /* 0067c5d3: mov dword ptr [0xa90078], ecx */ W32((u32)(0xa90078u), r_ecx);
    /* 0067c5d9: mov dword ptr [0xa9007c], edi */ W32((u32)(0xa9007cu), r_edi);
    /* 0067c5df: mov dword ptr [0xa90050], eax */ W32((u32)(0xa90050u), r_eax);
    /* 0067c5e4: mov dword ptr [0xa90054], edx */ W32((u32)(0xa90054u), r_edx);
    /* 0067c5ea: mov dword ptr [0xa90058], ecx */ W32((u32)(0xa90058u), r_ecx);
    /* 0067c5f0: mov dword ptr [0xa9005c], edi */ W32((u32)(0xa9005cu), r_edi);
    /* 0067c5f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067c5f7: ret  */ FN_RET(0x0067c5b0); r_esp += 4; return;
}

void f_0067c5f8(void) /* sub_67C5F8 */
{
    FN_ENTER(0x0067c5f8);
    /* 0067c5f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c5f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067c5fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067c5fd: call 0x67c61c */ r_esp -= 4; W32(r_esp, 0x67c602u); f_0067c61c();
    /* 0067c602: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067c606: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067c608: jne 0x67c60e */ if (!fZ) goto L_0067c60e;
L_0067c60a:; BB(0x0067c60a);
    /* 0067c60a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067c60b: ret 4 */ FN_RET(0x0067c5f8); r_esp += 8; return;
L_0067c60e:; BB(0x0067c60e);
    /* 0067c60e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c60f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67c614u); f_005c2f74();
    /* 0067c614: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067c615: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067c616: ret 4 */ FN_RET(0x0067c5f8); r_esp += 8; return;
}

void f_0067c61c(void) /* sub_67C61C */
{
    FN_ENTER(0x0067c61c);
    /* 0067c61c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067c61d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067c61f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c621: push 0x8ea1e0 */ { u32 v = 0x8ea1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c626: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067c62c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c62d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067c634: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067c637: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067c63a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067c63d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067c640: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067c643: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067c646: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067c649: mov dword ptr [ecx], 0xb380c8 */ W32((u32)(r_ecx), 0xb380c8u);
    /* 0067c64f: mov dword ptr [ecx + 0x148], 0 */ W32((u32)(r_ecx+0x148u), 0x0u);
    /* 0067c659: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c660: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x67c665u); f_007a9f38();
    /* 0067c665: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067c668: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067c66f: mov esp, ebp */ r_esp = r_ebp;
    /* 0067c671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067c672: ret  */ FN_RET(0x0067c61c); r_esp += 4; return;
}

void f_0067c674(void) /* sub_67C674 */
{
    FN_ENTER(0x0067c674);
    /* 0067c674: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c675: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067c677: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067c67d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067c67f: call 0x7a9e5c */ r_esp -= 4; W32(r_esp, 0x67c684u); f_007a9e5c();
    /* 0067c684: mov dword ptr [ebx], 0xb380c8 */ W32((u32)(r_ebx), 0xb380c8u);
    /* 0067c68a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067c68c: mov dword ptr [ebx + 0x134], edx */ W32((u32)(r_ebx+0x134u), r_edx);
    /* 0067c692: mov dword ptr [ebx + 0x100], edx */ W32((u32)(r_ebx+0x100u), r_edx);
    /* 0067c698: mov dword ptr [ebx + 0x150], 0x3f800000 */ W32((u32)(r_ebx+0x150u), 0x3f800000u);
    /* 0067c6a2: mov dword ptr [ebx + 0x138], edx */ W32((u32)(r_ebx+0x138u), r_edx);
    /* 0067c6a8: mov dword ptr [ebx + 0x154], edx */ W32((u32)(r_ebx+0x154u), r_edx);
    /* 0067c6ae: mov dword ptr [ebx + 0x148], edx */ W32((u32)(r_ebx+0x148u), r_edx);
    /* 0067c6b4: mov dword ptr [ebx + 0x13c], 0 */ W32((u32)(r_ebx+0x13cu), 0x0u);
    /* 0067c6be: mov word ptr [ebx + 0x14c], dx */ W16((u32)(r_ebx+0x14cu), (u16)r_edx);
    /* 0067c6c5: mov dword ptr [ebx + 0xfc], edx */ W32((u32)(r_ebx+0xfcu), r_edx);
    /* 0067c6cb: mov eax, ebx */ r_eax = r_ebx;
    /* 0067c6cd: mov dword ptr [ebx + 0x140], 0 */ W32((u32)(r_ebx+0x140u), 0x0u);
    /* 0067c6d7: mov dword ptr [ebx + 0x144], 0 */ W32((u32)(r_ebx+0x144u), 0x0u);
    /* 0067c6e1: mov dword ptr [ebx + 0x104], 0 */ W32((u32)(r_ebx+0x104u), 0x0u);
    /* 0067c6eb: mov dword ptr [ebx + 0x108], 0 */ W32((u32)(r_ebx+0x108u), 0x0u);
    /* 0067c6f5: mov dword ptr [ebx + 0x10c], 0 */ W32((u32)(r_ebx+0x10cu), 0x0u);
    /* 0067c6ff: mov dword ptr [ebx + 0x110], 0 */ W32((u32)(r_ebx+0x110u), 0x0u);
    /* 0067c709: mov dword ptr [ebx + 0x114], 0 */ W32((u32)(r_ebx+0x114u), 0x0u);
    /* 0067c713: mov dword ptr [ebx + 0x118], 0 */ W32((u32)(r_ebx+0x118u), 0x0u);
    /* 0067c71d: mov dword ptr [ebx + 0x11c], 0 */ W32((u32)(r_ebx+0x11cu), 0x0u);
    /* 0067c727: mov dword ptr [ebx + 0x120], 0 */ W32((u32)(r_ebx+0x120u), 0x0u);
    /* 0067c731: mov dword ptr [ebx + 0x124], 0x3f800000 */ W32((u32)(r_ebx+0x124u), 0x3f800000u);
    /* 0067c73b: mov dword ptr [ebx + 0x128], 0 */ W32((u32)(r_ebx+0x128u), 0x0u);
    /* 0067c745: mov dword ptr [ebx + 0x12c], 0 */ W32((u32)(r_ebx+0x12cu), 0x0u);
    /* 0067c74f: mov dword ptr [ebx + 0x130], 0x3f800000 */ W32((u32)(r_ebx+0x130u), 0x3f800000u);
    /* 0067c759: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067c75a: ret  */ FN_RET(0x0067c674); r_esp += 4; return;
}

void f_0067c75c(void) /* sub_67C75C */
{
    FN_ENTER(0x0067c75c);
    /* 0067c75c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c75d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067c760: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067c762: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0067c766: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 0067c76a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x67c76fu); f_00807ac0();
    /* 0067c76f: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c772: je 0x67c7cf */ if (fZ) goto L_0067c7cf;
L_0067c774:; BB(0x0067c774);
    /* 0067c774: mov byte ptr [esp], 0 */ W8((u32)(r_esp), 0x0u);
L_0067c778:; BB(0x0067c778);
    /* 0067c778: mov edx, dword ptr [0xa489fc] */ r_edx = R32((u32)(0xa489fcu));
    /* 0067c77e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0067c786: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067c788: test dl, 0xc */ {  u32 a = (u8)r_edx; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067c78b: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0067c793: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0067c798: je 0x67c7a2 */ if (fZ) goto L_0067c7a2;
L_0067c79a:; BB(0x0067c79a);
    /* 0067c79a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c79c: call 0x4d30fc */ r_esp -= 4; W32(r_esp, 0x67c7a1u); f_004d30fc();
    /* 0067c7a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0067c7a2:; BB(0x0067c7a2);
    /* 0067c7a2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0067c7a5: push 0x4222 */ { u32 v = 0x4222u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7ab: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x67c7b0u); f_004d6770();
    /* 0067c7b0: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0067c7b3: lea eax, [ebx + 0x5c] */ r_eax = (u32)(r_ebx+0x5cu);
    /* 0067c7b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7b9: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x67c7beu); f_004d681c();
    /* 0067c7be: mov dword ptr [ebx + 0xfc], 1 */ W32((u32)(r_ebx+0xfcu), 0x1u);
    /* 0067c7c8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067c7cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067c7cc: ret 4 */ FN_RET(0x0067c75c); r_esp += 8; return;
L_0067c7cf:; BB(0x0067c7cf);
    /* 0067c7cf: mov byte ptr [esp], 1 */ W8((u32)(r_esp), 0x1u);
    /* 0067c7d3: jmp 0x67c778 */ goto L_0067c778;
}

void f_0067c7d8(void) /* sub_67C7D8 */
{
    FN_ENTER(0x0067c7d8);
    /* 0067c7d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7d9: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067c7dc: mov esi, ecx */ r_esi = r_ecx;
    /* 0067c7de: mov eax, dword ptr [esi + 0xfc] */ r_eax = R32((u32)(r_esi+0xfcu));
    /* 0067c7e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c7e6: jne 0x67c878 */ if (!fZ) goto L_0067c878;
L_0067c7ec:; BB(0x0067c7ec);
    /* 0067c7ec: lea eax, [esi + 0x110] */ r_eax = (u32)(r_esi+0x110u);
    /* 0067c7f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7f3: lea edx, [esi + 0x128] */ r_edx = (u32)(r_esi+0x128u);
    /* 0067c7f9: push 0x3ef5c28f */ { u32 v = 0x3ef5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c800: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x67c805u); f_007a8f28();
    /* 0067c805: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067c807: lea eax, [esi + 0x104] */ r_eax = (u32)(r_esi+0x104u);
    /* 0067c80d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c80e: lea edx, [esi + 0x11c] */ r_edx = (u32)(r_esi+0x11cu);
    /* 0067c814: push 0x3f0ccccd */ { u32 v = 0x3f0ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c819: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c81b: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x67c820u); f_007a8f28();
    /* 0067c820: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067c822: mov eax, dword ptr [esi + 0x110] */ r_eax = R32((u32)(r_esi+0x110u));
    /* 0067c828: mov edx, dword ptr [esi + 0x114] */ r_edx = R32((u32)(r_esi+0x114u));
    /* 0067c82e: mov ecx, dword ptr [esi + 0x10c] */ r_ecx = R32((u32)(r_esi+0x10cu));
    /* 0067c834: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0067c838: mov eax, dword ptr [esi + 0x118] */ r_eax = R32((u32)(r_esi+0x118u));
    /* 0067c83e: mov dword ptr [esp + 0x34], 0x4222 */ W32((u32)(r_esp+0x34u), 0x4222u);
    /* 0067c846: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0067c84a: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0067c84e: mov eax, dword ptr [esi + 0x104] */ r_eax = R32((u32)(r_esi+0x104u));
    /* 0067c854: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0067c858: mov eax, dword ptr [esi + 0x108] */ r_eax = R32((u32)(r_esi+0x108u));
    /* 0067c85e: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0067c862: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0067c866: lea esi, [esp + 0x20] */ r_esi = (u32)(r_esp+0x20u);
    /* 0067c86a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067c86b: call 0x4d3374 */ r_esp -= 4; W32(r_esp, 0x67c870u); f_004d3374();
    /* 0067c870: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c873: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067c876: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067c877: ret  */ FN_RET(0x0067c7d8); r_esp += 4; return;
L_0067c878:; BB(0x0067c878);
    /* 0067c878: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c87b: jne 0x67c8a4 */ if (!fZ) goto L_0067c8a4;
L_0067c87d:; BB(0x0067c87d);
    /* 0067c87d: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x67c882u); f_004d6864();
    /* 0067c882: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 0067c886: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067c888: jne 0x67c897 */ if (!fZ) goto L_0067c897;
L_0067c88a:; BB(0x0067c88a);
    /* 0067c88a: call 0x4d30f4 */ r_esp -= 4; W32(r_esp, 0x67c88fu); f_004d30f4();
    /* 0067c88f: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0067c892: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c895: je 0x67c8a4 */ if (fZ) goto L_0067c8a4;
L_0067c897:; BB(0x0067c897);
    /* 0067c897: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0067c89b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067c8a0: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_0067c8a4:; BB(0x0067c8a4);
    /* 0067c8a4: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067c8a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067c8a8: ret  */ FN_RET(0x0067c7d8); r_esp += 4; return;
}

void f_0067c8ac(void) /* sub_67C8AC */
{
    FN_ENTER(0x0067c8ac);
    /* 0067c8ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067c8ad: mov edi, ecx */ r_edi = r_ecx;
    /* 0067c8af: mov ecx, edi */ r_ecx = r_edi;
    /* 0067c8b1: call 0x67c93c */ r_esp -= 4; W32(r_esp, 0x67c8b6u); f_0067c93c();
    /* 0067c8b6: mov eax, dword ptr [0xaafcc4] */ r_eax = R32((u32)(0xaafcc4u));
    /* 0067c8bb: mov byte ptr [0xaafc88], 0 */ W8((u32)(0xaafc88u), 0x0u);
    /* 0067c8c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c8c4: je 0x67c8d0 */ if (fZ) goto L_0067c8d0;
L_0067c8c6:; BB(0x0067c8c6);
    /* 0067c8c6: mov dword ptr [0xa114d0], 0 */ W32((u32)(0xa114d0u), 0x0u);
L_0067c8d0:; BB(0x0067c8d0);
    /* 0067c8d0: mov ecx, edi */ r_ecx = r_edi;
    /* 0067c8d2: call 0x67cb60 */ r_esp -= 4; W32(r_esp, 0x67c8d7u); f_0067cb60();
    /* 0067c8d7: call 0x578b2c */ r_esp -= 4; W32(r_esp, 0x67c8dcu); f_00578b2c();
    /* 0067c8dc: mov edx, dword ptr [0xaca358] */ r_edx = R32((u32)(0xaca358u));
    /* 0067c8e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c8e4: je 0x67c8f3 */ if (fZ) goto L_0067c8f3;
L_0067c8e6:; BB(0x0067c8e6);
    /* 0067c8e6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067c8ea: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067c8ef: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0067c8f3:; BB(0x0067c8f3);
    /* 0067c8f3: mov edx, dword ptr [0xaca354] */ r_edx = R32((u32)(0xaca354u));
    /* 0067c8f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c8fb: je 0x67c90a */ if (fZ) goto L_0067c90a;
L_0067c8fd:; BB(0x0067c8fd);
    /* 0067c8fd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067c901: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067c906: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0067c90a:; BB(0x0067c90a);
    /* 0067c90a: mov edx, dword ptr [0xaca350] */ r_edx = R32((u32)(0xaca350u));
    /* 0067c910: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c912: je 0x67c921 */ if (fZ) goto L_0067c921;
L_0067c914:; BB(0x0067c914);
    /* 0067c914: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067c918: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067c91d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0067c921:; BB(0x0067c921);
    /* 0067c921: mov edx, dword ptr [0xaca34c] */ r_edx = R32((u32)(0xaca34cu));
    /* 0067c927: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067c929: je 0x67c938 */ if (fZ) goto L_0067c938;
L_0067c92b:; BB(0x0067c92b);
    /* 0067c92b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067c92f: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067c934: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0067c938:; BB(0x0067c938);
    /* 0067c938: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067c939: ret  */ FN_RET(0x0067c8ac); r_esp += 4; return;
}

void f_0067c93c(void) /* sub_67C93C */
{
    FN_ENTER(0x0067c93c);
    /* 0067c93c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067c93d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067c93e: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067c941: mov edi, ecx */ r_edi = r_ecx;
    /* 0067c943: mov eax, dword ptr [edi + 0x138] */ r_eax = R32((u32)(r_edi+0x138u));
    /* 0067c949: mov dword ptr [esp], 0xc0400000 */ W32((u32)(r_esp), 0xc0400000u);
    /* 0067c950: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c952: mov dword ptr [esp + 4], 0x40d66666 */ W32((u32)(r_esp+0x4u), 0x40d66666u);
    /* 0067c95a: mov dword ptr [esp + 8], 0x41300000 */ W32((u32)(r_esp+0x8u), 0x41300000u);
    /* 0067c962: mov dword ptr [esp + 0x14], 0x42000000 */ W32((u32)(r_esp+0x14u), 0x42000000u);
    /* 0067c96a: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0067c972: mov dword ptr [esp + 0x1c], 0x41000000 */ W32((u32)(r_esp+0x1cu), 0x41000000u);
    /* 0067c97a: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0067c982: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 0067c98a: jne 0x67c9ae */ if (!fZ) goto L_0067c9ae;
L_0067c98c:; BB(0x0067c98c);
    /* 0067c98c: mov dword ptr [esp + 0x10], 0x422fae14 */ W32((u32)(r_esp+0x10u), 0x422fae14u);
    /* 0067c994: mov dword ptr [esp + 0xc], 0x41e651ec */ W32((u32)(r_esp+0xcu), 0x41e651ecu);
    /* 0067c99c: mov dword ptr [esp + 0x28], 0x421c0000 */ W32((u32)(r_esp+0x28u), 0x421c0000u);
    /* 0067c9a4: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0067c9ac: jmp 0x67c9cf */ goto L_0067c9cf;
L_0067c9ae:; BB(0x0067c9ae);
    /* 0067c9ae: mov eax, 0x42600000 */ r_eax = 0x42600000u;
    /* 0067c9b3: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0067c9b7: mov esi, 0x42680000 */ r_esi = 0x42680000u;
    /* 0067c9bc: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0067c9c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067c9c2: mov eax, 0xc1100000 */ r_eax = 0xc1100000u;
    /* 0067c9c7: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0067c9cb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_0067c9cf:; BB(0x0067c9cf);
    /* 0067c9cf: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067c9d5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67c9dau); f_0068d5a8();
    /* 0067c9da: mov esi, eax */ r_esi = r_eax;
    /* 0067c9dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c9df: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c9e1: je 0x67cb58 */ if (fZ) goto L_0067cb58;
L_0067c9e7:; BB(0x0067c9e7);
    /* 0067c9e7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0067c9ec: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x67c9f1u); f_0082d990();
    /* 0067c9f1: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0067c9f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c9f6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x67c9fbu); f_0082d8bc();
    /* 0067c9fb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0067c9fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c9ff: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0067ca03: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ca05: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x67ca0au); f_00830aa0();
    /* 0067ca0a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0067ca0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca0f: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0067ca13: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ca15: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x67ca1au); f_00830aa0();
    /* 0067ca1a: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0067ca1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca1f: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0067ca23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ca25: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x67ca2au); f_00830aa0();
    /* 0067ca2a: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0067ca2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ca2f: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0067ca33: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ca35: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x67ca3au); f_00830aa0();
    /* 0067ca3a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0067ca3f: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x67ca44u); f_0082eb80();
    /* 0067ca44: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0067ca47: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0067ca4a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0067ca4e: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0067ca51: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0067ca55: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0067ca58: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0067ca5c: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0067ca5f: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0067ca63: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0067ca66: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0067ca6a: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0067ca6d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0067ca71: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0067ca74: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0067ca78: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0067ca7b: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0067ca7d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0067ca80: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0067ca82: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0067ca86: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0067ca88: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0067ca8c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067ca8e: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0067ca92: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067ca94: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0067ca98: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067ca9a: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0067ca9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067caa0: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0067caa4: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0067caa6: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0067caaa: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0067caae: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0067cab2: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0067cab5: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0067cab9: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0067cabd: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0067cac1: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0067cac4: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0067cac8: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067cacc: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0067cad0: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0067cad3: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0067cad7: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0067cadb: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067cadf: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0067cae2: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0067cae4: fstp dword ptr [edi + 0x110] */ W_F32((u32)(r_edi+0x110u), ST(0)); FPOP();
    /* 0067caea: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067caec: fstp dword ptr [edi + 0x114] */ W_F32((u32)(r_edi+0x114u), ST(0)); FPOP();
    /* 0067caf2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067caf6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067caf8: fstp dword ptr [edi + 0x118] */ W_F32((u32)(r_edi+0x118u), ST(0)); FPOP();
    /* 0067cafe: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067cb00: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0067cb04: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067cb06: fstp dword ptr [edi + 0x128] */ W_F32((u32)(r_edi+0x128u), ST(0)); FPOP();
    /* 0067cb0c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067cb0e: fstp dword ptr [edi + 0x12c] */ W_F32((u32)(r_edi+0x12cu), ST(0)); FPOP();
    /* 0067cb14: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067cb16: fstp dword ptr [edi + 0x130] */ W_F32((u32)(r_edi+0x130u), ST(0)); FPOP();
    /* 0067cb1c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067cb1e: fstp dword ptr [edi + 0x104] */ W_F32((u32)(r_edi+0x104u), ST(0)); FPOP();
    /* 0067cb24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067cb26: fstp dword ptr [edi + 0x108] */ W_F32((u32)(r_edi+0x108u), ST(0)); FPOP();
    /* 0067cb2c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0067cb30: fstp dword ptr [edi + 0x10c] */ W_F32((u32)(r_edi+0x10cu), ST(0)); FPOP();
    /* 0067cb36: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0067cb3a: fstp dword ptr [edi + 0x11c] */ W_F32((u32)(r_edi+0x11cu), ST(0)); FPOP();
    /* 0067cb40: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067cb44: fstp dword ptr [edi + 0x120] */ W_F32((u32)(r_edi+0x120u), ST(0)); FPOP();
    /* 0067cb4a: fstp dword ptr [edi + 0x124] */ W_F32((u32)(r_edi+0x124u), ST(0)); FPOP();
    /* 0067cb50: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb52: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x67cb57u); f_004d31f4();
    /* 0067cb57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0067cb58:; BB(0x0067cb58);
    /* 0067cb58: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067cb5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067cb5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067cb5d: ret  */ FN_RET(0x0067c93c); r_esp += 4; return;
}

void f_0067cb60(void) /* sub_67CB60 */
{
    FN_ENTER(0x0067cb60);
    /* 0067cb60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb62: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb64: call 0x5bd1a8 */ r_esp -= 4; W32(r_esp, 0x67cb69u); f_005bd1a8();
    /* 0067cb69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067cb6c: ret  */ FN_RET(0x0067cb60); r_esp += 4; return;
}

void f_0067cb70(void) /* sub_67CB70 */
{
    FN_ENTER(0x0067cb70);
    /* 0067cb70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067cb71: mov esi, ecx */ r_esi = r_ecx;
    /* 0067cb73: mov eax, dword ptr [esi + 0x154] */ r_eax = R32((u32)(r_esi+0x154u));
    /* 0067cb79: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067cb7b: jne 0x67cbaa */ if (!fZ) goto L_0067cbaa;
L_0067cb7d:; BB(0x0067cb7d);
    /* 0067cb7d: mov ecx, esi */ r_ecx = r_esi;
    /* 0067cb7f: call 0x67cc08 */ r_esp -= 4; W32(r_esp, 0x67cb84u); f_0067cc08();
    /* 0067cb84: mov eax, dword ptr [0xaafcc4] */ r_eax = R32((u32)(0xaafcc4u));
    /* 0067cb89: mov byte ptr [0xaafc88], 1 */ W8((u32)(0xaafc88u), 0x1u);
    /* 0067cb90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cb92: je 0x67cb9e */ if (fZ) goto L_0067cb9e;
L_0067cb94:; BB(0x0067cb94);
    /* 0067cb94: mov dword ptr [0xa114d0], 1 */ W32((u32)(0xa114d0u), 0x1u);
L_0067cb9e:; BB(0x0067cb9e);
    /* 0067cb9e: mov ecx, esi */ r_ecx = r_esi;
    /* 0067cba0: call 0x67cc14 */ r_esp -= 4; W32(r_esp, 0x67cba5u); f_0067cc14();
    /* 0067cba5: call 0x578b20 */ r_esp -= 4; W32(r_esp, 0x67cbaau); f_00578b20();
L_0067cbaa:; BB(0x0067cbaa);
    /* 0067cbaa: mov edx, dword ptr [0xaca358] */ r_edx = R32((u32)(0xaca358u));
    /* 0067cbb0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cbb2: je 0x67cbc1 */ if (fZ) goto L_0067cbc1;
L_0067cbb4:; BB(0x0067cbb4);
    /* 0067cbb4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067cbb8: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0067cbbd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0067cbc1:; BB(0x0067cbc1);
    /* 0067cbc1: mov edx, dword ptr [0xaca354] */ r_edx = R32((u32)(0xaca354u));
    /* 0067cbc7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cbc9: je 0x67cbd8 */ if (fZ) goto L_0067cbd8;
L_0067cbcb:; BB(0x0067cbcb);
    /* 0067cbcb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067cbcf: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0067cbd4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0067cbd8:; BB(0x0067cbd8);
    /* 0067cbd8: mov edx, dword ptr [0xaca350] */ r_edx = R32((u32)(0xaca350u));
    /* 0067cbde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cbe0: je 0x67cbef */ if (fZ) goto L_0067cbef;
L_0067cbe2:; BB(0x0067cbe2);
    /* 0067cbe2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067cbe6: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0067cbeb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0067cbef:; BB(0x0067cbef);
    /* 0067cbef: mov edx, dword ptr [0xaca34c] */ r_edx = R32((u32)(0xaca34cu));
    /* 0067cbf5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067cbf7: je 0x67cc06 */ if (fZ) goto L_0067cc06;
L_0067cbf9:; BB(0x0067cbf9);
    /* 0067cbf9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0067cbfd: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067cc02: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0067cc06:; BB(0x0067cc06);
    /* 0067cc06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067cc07: ret  */ FN_RET(0x0067cb70); r_esp += 4; return;
}

void f_0067cc08(void) /* sub_67CC08 */
{
    FN_ENTER(0x0067cc08);
    /* 0067cc08: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x67cc0du); f_004d3250();
    /* 0067cc0d: call 0x4d31dc */ r_esp -= 4; W32(r_esp, 0x67cc12u); f_004d31dc();
    /* 0067cc12: ret  */ FN_RET(0x0067cc08); r_esp += 4; return;
}

void f_0067cc14(void) /* sub_67CC14 */
{
    FN_ENTER(0x0067cc14);
    /* 0067cc14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc16: call 0x5bd010 */ r_esp -= 4; W32(r_esp, 0x67cc1bu); f_005bd010();
    /* 0067cc1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067cc1c: ret  */ FN_RET(0x0067cc14); r_esp += 4; return;
}

void f_0067cc20(void) /* sub_67CC20 */
{
    FN_ENTER(0x0067cc20);
    /* 0067cc20: mov eax, dword ptr [ecx + 0x148] */ r_eax = R32((u32)(r_ecx+0x148u));
    /* 0067cc26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067cc28: je 0x67cc31 */ if (fZ) goto L_0067cc31;
L_0067cc2a:; BB(0x0067cc2a);
    /* 0067cc2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc2b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x67cc30u); f_00857e98();
    /* 0067cc30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0067cc31:; BB(0x0067cc31);
    /* 0067cc31: ret  */ FN_RET(0x0067cc20); r_esp += 4; return;
}

void f_0067cc34(void) /* sub_67CC34 */
{
    FN_ENTER(0x0067cc34);
    /* 0067cc34: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067cc37: mov edx, ecx */ r_edx = r_ecx;
    /* 0067cc39: mov ecx, dword ptr [edx + 0x100] */ r_ecx = R32((u32)(r_edx+0x100u));
    /* 0067cc3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067cc41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0067cc43: jbe 0x67ccb8 */ if ((fC||fZ)) goto L_0067ccb8;
L_0067cc45:; BB(0x0067cc45);
    /* 0067cc45: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0067cc49: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0067cc4d: mov esi, eax */ r_esi = r_eax;
    /* 0067cc4f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0067cc52: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cc54: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0067cc57: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cc59: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cc5b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cc5d: mov edi, edx */ r_edi = r_edx;
    /* 0067cc5f: mov ebx, ecx */ r_ebx = r_ecx;
L_0067cc61:; BB(0x0067cc61);
    /* 0067cc61: mov eax, dword ptr [edi + 0x148] */ r_eax = R32((u32)(r_edi+0x148u));
    /* 0067cc67: mov ecx, dword ptr [ebx + eax] */ r_ecx = R32((u32)(r_ebx+r_eax));
    /* 0067cc6a: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x67cc6fu); f_008173b4();
    /* 0067cc6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cc71: jne 0x67cc80 */ if (!fZ) goto L_0067cc80;
L_0067cc73:; BB(0x0067cc73);
    /* 0067cc73: mov eax, dword ptr [edi + 0x148] */ r_eax = R32((u32)(r_edi+0x148u));
    /* 0067cc79: mov dword ptr [ebx + eax], 0 */ W32((u32)(r_ebx+r_eax), 0x0u);
L_0067cc80:; BB(0x0067cc80);
    /* 0067cc80: mov edx, dword ptr [edi + 0x148] */ r_edx = R32((u32)(r_edi+0x148u));
    /* 0067cc86: mov ecx, dword ptr [ebx + edx] */ r_ecx = R32((u32)(r_ebx+r_edx));
    /* 0067cc89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cc8b: je 0x67cc9f */ if (fZ) goto L_0067cc9f;
L_0067cc8d:; BB(0x0067cc8d);
    /* 0067cc8d: mov eax, dword ptr [ebx + edx + 0x10] */ r_eax = R32((u32)(r_ebx+r_edx+0x10u));
    /* 0067cc91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067cc93: jl 0x67ccbc */ if ((fS!=fO)) goto L_0067ccbc;
L_0067cc95:; BB(0x0067cc95);
    /* 0067cc95: lea eax, [edx + ebx + 4] */ r_eax = (u32)(r_edx+r_ebx+0x4u);
    /* 0067cc99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067cc9a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67cc9fu); f_00508db8();
L_0067cc9f:; BB(0x0067cc9f);
    /* 0067cc9f: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067cca2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067cca5: cmp esi, dword ptr [edi + 0x100] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x100u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0067ccab: jb 0x67cc61 */ if (fC) goto L_0067cc61;
L_0067ccad:; BB(0x0067ccad);
    /* 0067ccad: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0067ccb1: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0067ccb5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0067ccb8:; BB(0x0067ccb8);
    /* 0067ccb8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067ccbb: ret  */ FN_RET(0x0067cc34); r_esp += 4; return;
L_0067ccbc:; BB(0x0067ccbc);
    /* 0067ccbc: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0067ccbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ccc0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x67ccc5u); f_00508db8();
    /* 0067ccc5: jmp 0x67cc9f */ goto L_0067cc9f;
}

void f_0067ccc8(void) /* sub_67CCC8 */
{
    FN_ENTER(0x0067ccc8);
    /* 0067ccc8: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x67cccdu); f_007a9318();
    /* 0067cccd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cccf: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x67ccd4u); f_0082fac4();
    /* 0067ccd4: ret  */ FN_RET(0x0067ccc8); r_esp += 4; return;
}

void f_0067ccd8(void) /* sub_67CCD8 */
{
    FN_ENTER(0x0067ccd8);
    /* 0067ccd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ccd9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067ccdc: mov eax, dword ptr [0xa903c0] */ r_eax = R32((u32)(0xa903c0u));
    /* 0067cce1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cce3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067cce5: jle 0x67cd59 */ if ((fZ||fS!=fO)) goto L_0067cd59;
L_0067cce7:; BB(0x0067cce7);
    /* 0067cce7: mov edx, dword ptr [0xa903c4] */ r_edx = R32((u32)(0xa903c4u));
    /* 0067cced: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0067ccf1: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0067ccf4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ccf6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ccf8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ccfa: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ccfc: mov esi, ecx */ r_esi = r_ecx;
L_0067ccfe:; BB(0x0067ccfe);
    /* 0067ccfe: mov ecx, dword ptr [0xa903bc] */ r_ecx = R32((u32)(0xa903bcu));
    /* 0067cd04: cmp edx, dword ptr [ebx + ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cd08: jne 0x67cd3d */ if (!fZ) goto L_0067cd3d;
L_0067cd0a:; BB(0x0067cd0a);
    /* 0067cd0a: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0067cd11: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0067cd14: lea eax, [ecx + ebx + 4] */ r_eax = (u32)(r_ecx+r_ebx+0x4u);
    /* 0067cd18: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0067cd20: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0067cd28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd2a: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x67cd2fu); f_00520c5c();
    /* 0067cd2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067cd32: mov eax, dword ptr [0xa903c0] */ r_eax = R32((u32)(0xa903c0u));
    /* 0067cd37: mov edx, dword ptr [0xa903c4] */ r_edx = R32((u32)(0xa903c4u));
L_0067cd3d:; BB(0x0067cd3d);
    /* 0067cd3d: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067cd40: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067cd43: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067cd45: jl 0x67ccfe */ if ((fS!=fO)) goto L_0067ccfe;
L_0067cd47:; BB(0x0067cd47);
    /* 0067cd47: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0067cd4b:; BB(0x0067cd4b);
    /* 0067cd4b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067cd4e: mov dword ptr [0xa903c4], edx */ W32((u32)(0xa903c4u), r_edx);
    /* 0067cd54: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067cd57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067cd58: ret  */ FN_RET(0x0067ccd8); r_esp += 4; return;
L_0067cd59:; BB(0x0067cd59);
    /* 0067cd59: mov edx, dword ptr [0xa903c4] */ r_edx = R32((u32)(0xa903c4u));
    /* 0067cd5f: jmp 0x67cd4b */ goto L_0067cd4b;
}

void f_0067cd64(void) /* sub_67CD64 */
{
    FN_ENTER(0x0067cd64);
    /* 0067cd64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd67: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067cd6a: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0067cd6e: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0067cd73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067cd74: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67cd79u); f_007b4d18();
    /* 0067cd79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067cd7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067cd7c: je 0x67ce73 */ if (fZ) goto L_0067ce73;
L_0067cd82:; BB(0x0067cd82);
    /* 0067cd82: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0067cd85: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0067cd88: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067cd8a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067cd8c: mov ebx, dword ptr [edx + 0x9cb3ec] */ r_ebx = R32((u32)(r_edx+0x9cb3ecu));
    /* 0067cd92: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067cd94: jle 0x67ce73 */ if ((fZ||fS!=fO)) goto L_0067ce73;
L_0067cd9a:; BB(0x0067cd9a);
    /* 0067cd9a: mov edi, dword ptr [ecx*8 + 0x9cb3e8] */ r_edi = R32((u32)(r_ecx*8+0x9cb3e8u));
    /* 0067cda1: mov esi, 0 */ r_esi = 0x0u;
    /* 0067cda6: jle 0x67ce73 */ if ((fZ||fS!=fO)) goto L_0067ce73;
L_0067cdac:; BB(0x0067cdac);
    /* 0067cdac: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0067cdb0: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0067cdb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067cdb5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067cdb8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cdba: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cdbc: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067cdbe: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067cdc0: mov ebp, eax */ r_ebp = r_eax;
L_0067cdc2:; BB(0x0067cdc2);
    /* 0067cdc2: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0067cdc4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0067cdc7: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0067cdca: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0067cdcf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0067cdd3: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0067cdd6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067cdda: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0067cddd: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0067cde1: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0067cde4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067cde8: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0067cdeb: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0067cdef: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0067cdf2: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0067cdf6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x67cdfbu); f_0082d990();
    /* 0067cdfb: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0067cdfe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ce00: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x67ce05u); f_0082d8bc();
    /* 0067ce05: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0067ce09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce0a: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0067ce0e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ce10: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x67ce15u); f_00830aa0();
    /* 0067ce15: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0067ce1a: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x67ce1fu); f_0082eb80();
    /* 0067ce1f: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0067ce23: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0067ce26: fld dword ptr [0x93bbd0] */ FPUSH(R_F32((u32)(0x93bbd0u)));
    /* 0067ce2c: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0067ce30: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 0067ce33: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0067ce37: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0067ce3a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067ce3c: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0067ce40: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0067ce44: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067ce48: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0067ce4c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ce50: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ce54: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ce58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ce59: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x67ce5eu); f_0050a984();
    /* 0067ce5e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ce61: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ce64: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ce67: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ce69: jl 0x67cdc2 */ if ((fS!=fO)) goto L_0067cdc2;
L_0067ce6f:; BB(0x0067ce6f);
    /* 0067ce6f: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_0067ce73:; BB(0x0067ce73);
    /* 0067ce73: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067ce76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067ce77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067ce78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067ce79: ret  */ FN_RET(0x0067cd64); r_esp += 4; return;
}

void f_0067ce7c(void) /* sub_67CE7C */
{
    FN_ENTER(0x0067ce7c);
    /* 0067ce7c: mov dword ptr [0xa903b8], 0 */ W32((u32)(0xa903b8u), 0x0u);
    /* 0067ce86: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ce8b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0067ce90: mov dword ptr [0xa90224], 0 */ W32((u32)(0xa90224u), 0x0u);
    /* 0067ce9a: mov dword ptr [0xa90220], eax */ W32((u32)(0xa90220u), r_eax);
    /* 0067ce9f: mov dword ptr [0xa90230], 0 */ W32((u32)(0xa90230u), 0x0u);
    /* 0067cea9: mov dword ptr [0xa90228], edx */ W32((u32)(0xa90228u), r_edx);
    /* 0067ceaf: mov dword ptr [0xa9023c], 0 */ W32((u32)(0xa9023cu), 0x0u);
    /* 0067ceb9: mov dword ptr [0xa9022c], eax */ W32((u32)(0xa9022cu), r_eax);
    /* 0067cebe: mov dword ptr [0xa90248], 0 */ W32((u32)(0xa90248u), 0x0u);
    /* 0067cec8: mov dword ptr [0xa90234], edx */ W32((u32)(0xa90234u), r_edx);
    /* 0067cece: mov dword ptr [0xa90254], 0 */ W32((u32)(0xa90254u), 0x0u);
    /* 0067ced8: mov dword ptr [0xa90238], eax */ W32((u32)(0xa90238u), r_eax);
    /* 0067cedd: mov dword ptr [0xa90260], 0 */ W32((u32)(0xa90260u), 0x0u);
    /* 0067cee7: mov dword ptr [0xa90240], edx */ W32((u32)(0xa90240u), r_edx);
    /* 0067ceed: mov dword ptr [0xa9026c], 0 */ W32((u32)(0xa9026cu), 0x0u);
    /* 0067cef7: mov dword ptr [0xa90244], eax */ W32((u32)(0xa90244u), r_eax);
    /* 0067cefc: mov dword ptr [0xa90278], 0 */ W32((u32)(0xa90278u), 0x0u);
    /* 0067cf06: mov dword ptr [0xa9024c], edx */ W32((u32)(0xa9024cu), r_edx);
    /* 0067cf0c: mov dword ptr [0xa90284], 0 */ W32((u32)(0xa90284u), 0x0u);
    /* 0067cf16: mov dword ptr [0xa90250], eax */ W32((u32)(0xa90250u), r_eax);
    /* 0067cf1b: mov dword ptr [0xa90290], 0 */ W32((u32)(0xa90290u), 0x0u);
    /* 0067cf25: mov dword ptr [0xa90258], edx */ W32((u32)(0xa90258u), r_edx);
    /* 0067cf2b: mov dword ptr [0xa9029c], 0 */ W32((u32)(0xa9029cu), 0x0u);
    /* 0067cf35: mov dword ptr [0xa9025c], eax */ W32((u32)(0xa9025cu), r_eax);
    /* 0067cf3a: mov dword ptr [0xa902a8], 0 */ W32((u32)(0xa902a8u), 0x0u);
    /* 0067cf44: mov dword ptr [0xa90264], edx */ W32((u32)(0xa90264u), r_edx);
    /* 0067cf4a: mov dword ptr [0xa902b4], 0 */ W32((u32)(0xa902b4u), 0x0u);
    /* 0067cf54: mov dword ptr [0xa90268], eax */ W32((u32)(0xa90268u), r_eax);
    /* 0067cf59: mov dword ptr [0xa902c0], 0 */ W32((u32)(0xa902c0u), 0x0u);
    /* 0067cf63: mov dword ptr [0xa90270], edx */ W32((u32)(0xa90270u), r_edx);
    /* 0067cf69: mov dword ptr [0xa902cc], 0 */ W32((u32)(0xa902ccu), 0x0u);
    /* 0067cf73: mov dword ptr [0xa90274], eax */ W32((u32)(0xa90274u), r_eax);
    /* 0067cf78: mov dword ptr [0xa902d8], 0 */ W32((u32)(0xa902d8u), 0x0u);
    /* 0067cf82: mov dword ptr [0xa9027c], edx */ W32((u32)(0xa9027cu), r_edx);
    /* 0067cf88: mov dword ptr [0xa902e4], 0 */ W32((u32)(0xa902e4u), 0x0u);
    /* 0067cf92: mov dword ptr [0xa90280], eax */ W32((u32)(0xa90280u), r_eax);
    /* 0067cf97: mov dword ptr [0xa902f0], 0 */ W32((u32)(0xa902f0u), 0x0u);
    /* 0067cfa1: mov dword ptr [0xa90288], edx */ W32((u32)(0xa90288u), r_edx);
    /* 0067cfa7: mov dword ptr [0xa902fc], 0 */ W32((u32)(0xa902fcu), 0x0u);
    /* 0067cfb1: mov dword ptr [0xa9028c], eax */ W32((u32)(0xa9028cu), r_eax);
    /* 0067cfb6: mov dword ptr [0xa90308], 0 */ W32((u32)(0xa90308u), 0x0u);
    /* 0067cfc0: mov dword ptr [0xa90294], edx */ W32((u32)(0xa90294u), r_edx);
    /* 0067cfc6: mov dword ptr [0xa90314], 0 */ W32((u32)(0xa90314u), 0x0u);
    /* 0067cfd0: mov dword ptr [0xa90298], eax */ W32((u32)(0xa90298u), r_eax);
    /* 0067cfd5: mov dword ptr [0xa90320], 0 */ W32((u32)(0xa90320u), 0x0u);
    /* 0067cfdf: mov dword ptr [0xa902a0], edx */ W32((u32)(0xa902a0u), r_edx);
    /* 0067cfe5: mov dword ptr [0xa9032c], 0 */ W32((u32)(0xa9032cu), 0x0u);
    /* 0067cfef: mov dword ptr [0xa902a4], eax */ W32((u32)(0xa902a4u), r_eax);
    /* 0067cff4: mov dword ptr [0xa90338], 0 */ W32((u32)(0xa90338u), 0x0u);
    /* 0067cffe: mov dword ptr [0xa902ac], edx */ W32((u32)(0xa902acu), r_edx);
    /* 0067d004: mov dword ptr [0xa90344], 0 */ W32((u32)(0xa90344u), 0x0u);
    /* 0067d00e: mov dword ptr [0xa902b0], eax */ W32((u32)(0xa902b0u), r_eax);
    /* 0067d013: mov dword ptr [0xa90350], 0 */ W32((u32)(0xa90350u), 0x0u);
    /* 0067d01d: mov dword ptr [0xa902b8], edx */ W32((u32)(0xa902b8u), r_edx);
    /* 0067d023: mov dword ptr [0xa9035c], 0 */ W32((u32)(0xa9035cu), 0x0u);
    /* 0067d02d: mov dword ptr [0xa902bc], eax */ W32((u32)(0xa902bcu), r_eax);
    /* 0067d032: mov dword ptr [0xa90368], 0 */ W32((u32)(0xa90368u), 0x0u);
    /* 0067d03c: mov dword ptr [0xa902c4], edx */ W32((u32)(0xa902c4u), r_edx);
    /* 0067d042: mov dword ptr [0xa90374], 0 */ W32((u32)(0xa90374u), 0x0u);
    /* 0067d04c: mov dword ptr [0xa902c8], eax */ W32((u32)(0xa902c8u), r_eax);
    /* 0067d051: mov dword ptr [0xa90380], 0 */ W32((u32)(0xa90380u), 0x0u);
    /* 0067d05b: mov dword ptr [0xa902d0], edx */ W32((u32)(0xa902d0u), r_edx);
    /* 0067d061: mov dword ptr [0xa9038c], 0 */ W32((u32)(0xa9038cu), 0x0u);
    /* 0067d06b: mov dword ptr [0xa902d4], eax */ W32((u32)(0xa902d4u), r_eax);
    /* 0067d070: mov dword ptr [0xa90398], 0 */ W32((u32)(0xa90398u), 0x0u);
    /* 0067d07a: mov dword ptr [0xa902dc], edx */ W32((u32)(0xa902dcu), r_edx);
    /* 0067d080: mov dword ptr [0xa902e0], eax */ W32((u32)(0xa902e0u), r_eax);
    /* 0067d085: mov dword ptr [0xa902e8], edx */ W32((u32)(0xa902e8u), r_edx);
    /* 0067d08b: mov dword ptr [0xa902ec], eax */ W32((u32)(0xa902ecu), r_eax);
    /* 0067d090: mov dword ptr [0xa902f4], edx */ W32((u32)(0xa902f4u), r_edx);
    /* 0067d096: mov dword ptr [0xa902f8], eax */ W32((u32)(0xa902f8u), r_eax);
    /* 0067d09b: mov dword ptr [0xa90300], edx */ W32((u32)(0xa90300u), r_edx);
    /* 0067d0a1: mov dword ptr [0xa90304], eax */ W32((u32)(0xa90304u), r_eax);
    /* 0067d0a6: mov dword ptr [0xa9030c], edx */ W32((u32)(0xa9030cu), r_edx);
    /* 0067d0ac: mov dword ptr [0xa90310], eax */ W32((u32)(0xa90310u), r_eax);
    /* 0067d0b1: mov dword ptr [0xa90318], edx */ W32((u32)(0xa90318u), r_edx);
    /* 0067d0b7: mov dword ptr [0xa9031c], eax */ W32((u32)(0xa9031cu), r_eax);
    /* 0067d0bc: mov dword ptr [0xa90324], edx */ W32((u32)(0xa90324u), r_edx);
    /* 0067d0c2: mov dword ptr [0xa90328], eax */ W32((u32)(0xa90328u), r_eax);
    /* 0067d0c7: mov dword ptr [0xa90330], edx */ W32((u32)(0xa90330u), r_edx);
    /* 0067d0cd: mov dword ptr [0xa90334], eax */ W32((u32)(0xa90334u), r_eax);
    /* 0067d0d2: mov dword ptr [0xa9033c], edx */ W32((u32)(0xa9033cu), r_edx);
    /* 0067d0d8: mov dword ptr [0xa90340], eax */ W32((u32)(0xa90340u), r_eax);
    /* 0067d0dd: mov dword ptr [0xa90348], edx */ W32((u32)(0xa90348u), r_edx);
    /* 0067d0e3: mov dword ptr [0xa9034c], eax */ W32((u32)(0xa9034cu), r_eax);
    /* 0067d0e8: mov dword ptr [0xa90354], edx */ W32((u32)(0xa90354u), r_edx);
    /* 0067d0ee: mov dword ptr [0xa90358], eax */ W32((u32)(0xa90358u), r_eax);
    /* 0067d0f3: mov dword ptr [0xa90360], edx */ W32((u32)(0xa90360u), r_edx);
    /* 0067d0f9: mov dword ptr [0xa90364], eax */ W32((u32)(0xa90364u), r_eax);
    /* 0067d0fe: mov dword ptr [0xa9036c], edx */ W32((u32)(0xa9036cu), r_edx);
    /* 0067d104: mov dword ptr [0xa90370], eax */ W32((u32)(0xa90370u), r_eax);
    /* 0067d109: mov dword ptr [0xa90378], edx */ W32((u32)(0xa90378u), r_edx);
    /* 0067d10f: mov dword ptr [0xa9037c], eax */ W32((u32)(0xa9037cu), r_eax);
    /* 0067d114: mov dword ptr [0xa90384], edx */ W32((u32)(0xa90384u), r_edx);
    /* 0067d11a: mov dword ptr [0xa90388], eax */ W32((u32)(0xa90388u), r_eax);
    /* 0067d11f: mov dword ptr [0xa90390], edx */ W32((u32)(0xa90390u), r_edx);
    /* 0067d125: mov dword ptr [0xa90394], eax */ W32((u32)(0xa90394u), r_eax);
    /* 0067d12a: mov dword ptr [0xa9039c], edx */ W32((u32)(0xa9039cu), r_edx);
    /* 0067d130: ret  */ FN_RET(0x0067ce7c); r_esp += 4; return;
}

