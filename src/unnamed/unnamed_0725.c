#include "protos.h"

void f_00725728(void) /* sub_725728 */
{
    FN_ENTER(0x00725728);
    /* 00725728: mov dword ptr [0xa9a7f8], 0x3f800000 */ W32((u32)(0xa9a7f8u), 0x3f800000u);
    /* 00725732: mov dword ptr [0xa9a7fc], 0x41000000 */ W32((u32)(0xa9a7fcu), 0x41000000u);
    /* 0072573c: mov dword ptr [0xa9a800], 0x3fc00000 */ W32((u32)(0xa9a800u), 0x3fc00000u);
    /* 00725746: ret  */ FN_RET(0x00725728); r_esp += 4; return;
}

void f_00725748(void) /* sub_725748 */
{
    FN_ENTER(0x00725748);
    /* 00725748: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725749: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072574b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072574d: call 0x72576c */ r_esp -= 4; W32(r_esp, 0x725752u); f_0072576c();
    /* 00725752: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00725756: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725758: jne 0x72575e */ if (!fZ) goto L_0072575e;
L_0072575a:; BB(0x0072575a);
    /* 0072575a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072575b: ret 4 */ FN_RET(0x00725748); r_esp += 8; return;
L_0072575e:; BB(0x0072575e);
    /* 0072575e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072575f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x725764u); f_005c2f74();
    /* 00725764: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00725765: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725766: ret 4 */ FN_RET(0x00725748); r_esp += 8; return;
}

void f_0072576c(void) /* sub_72576C */
{
    FN_ENTER(0x0072576c);
    /* 0072576c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072576d: mov ebp, esp */ r_ebp = r_esp;
    /* 0072576f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00725771: push 0x8f0f38 */ { u32 v = 0x8f0f38u; r_esp -= 4; W32(r_esp, v); }
    /* 00725776: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072577c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072577d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00725784: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00725787: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072578a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072578d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00725790: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00725793: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00725796: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072579d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007257a0: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007257a3: mov dword ptr [eax], 0xb3fff0 */ W32((u32)(r_eax), 0xb3fff0u);
    /* 007257a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007257ab: je 0x7257b7 */ if (fZ) goto L_007257b7;
L_007257ad:; BB(0x007257ad);
    /* 007257ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007257af: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x7257b4u); f_00721474();
    /* 007257b4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_007257b7:; BB(0x007257b7);
    /* 007257b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007257be: mov ecx, eax */ r_ecx = r_eax;
    /* 007257c0: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x7257c5u); f_00710c28();
    /* 007257c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007257c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007257cf: mov esp, ebp */ r_esp = r_ebp;
    /* 007257d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007257d2: ret  */ FN_RET(0x0072576c); r_esp += 4; return;
}

void f_007257d4(void) /* sub_7257D4 */
{
    FN_ENTER(0x007257d4);
    /* 007257d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007257d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007257d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007257d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007257d8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007257db: mov edi, ecx */ r_edi = r_ecx;
    /* 007257dd: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 007257e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007257e3: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 007257e8: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 007257ed: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 007257f2: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 007257f7: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 007257fc: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00725800: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 00725805: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0072580a: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0072580f: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00725814: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00725819: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072581a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72581fu); f_0068d5a8();
    /* 0072581f: mov esi, eax */ r_esi = r_eax;
    /* 00725821: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725824: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725826: je 0x725875 */ if (fZ) goto L_00725875;
L_00725828:; BB(0x00725828);
    /* 00725828: mov ecx, edi */ r_ecx = r_edi;
    /* 0072582a: call 0x7258dc */ r_esp -= 4; W32(r_esp, 0x72582fu); f_007258dc();
    /* 0072582f: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00725832: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 00725835: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 00725838: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x72583du); f_005d2890();
    /* 0072583d: mov ebx, eax */ r_ebx = r_eax;
    /* 0072583f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00725843: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725844: push dword ptr [edi + 0x68] */ { u32 v = R32((u32)(r_edi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00725847: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725848: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x72584du); f_005c9e40();
    /* 0072584d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725850: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725852: jne 0x72585d */ if (!fZ) goto L_0072585d;
L_00725854:; BB(0x00725854);
    /* 00725854: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00725858: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072585b: jne 0x725875 */ if (!fZ) goto L_00725875;
L_0072585d:; BB(0x0072585d);
    /* 0072585d: movzx edx, word ptr [ebx + 0x12] */ r_edx = (u32)R16((u32)(r_ebx+0x12u));
    /* 00725861: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725863: jne 0x7258bb */ if (!fZ) goto L_007258bb;
L_00725865:; BB(0x00725865);
    /* 00725865: movzx edx, word ptr [ebx + 0x14] */ r_edx = (u32)R16((u32)(r_ebx+0x14u));
    /* 00725869: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072586b: jne 0x72589c */ if (!fZ) goto L_0072589c;
L_0072586d:; BB(0x0072586d);
    /* 0072586d: movzx edx, word ptr [ebx + 0x16] */ r_edx = (u32)R16((u32)(r_ebx+0x16u));
    /* 00725871: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725873: jne 0x72587d */ if (!fZ) goto L_0072587d;
L_00725875:; BB(0x00725875);
    /* 00725875: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725878: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725879: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072587a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072587b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072587c: ret  */ FN_RET(0x007257d4); r_esp += 4; return;
L_0072587d:; BB(0x0072587d);
    /* 0072587d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00725880: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725881: mov ecx, esi */ r_ecx = r_esi;
    /* 00725883: call 0x695340 */ r_esp -= 4; W32(r_esp, 0x725888u); f_00695340();
    /* 00725888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072588a: je 0x725875 */ if (fZ) goto L_00725875;
L_0072588c:; BB(0x0072588c);
    /* 0072588c: movsx eax, word ptr [esp + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 00725891: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00725894: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725897: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725898: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725899: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072589a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072589b: ret  */ FN_RET(0x007257d4); r_esp += 4; return;
L_0072589c:; BB(0x0072589c);
    /* 0072589c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0072589f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007258a0: mov ecx, esi */ r_ecx = r_esi;
    /* 007258a2: call 0x695340 */ r_esp -= 4; W32(r_esp, 0x7258a7u); f_00695340();
    /* 007258a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007258a9: je 0x725875 */ if (fZ) goto L_00725875;
L_007258ab:; BB(0x007258ab);
    /* 007258ab: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 007258b0: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007258b3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007258b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007258b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007258b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007258b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007258ba: ret  */ FN_RET(0x007257d4); r_esp += 4; return;
L_007258bb:; BB(0x007258bb);
    /* 007258bb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007258be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007258bf: mov ecx, esi */ r_ecx = r_esi;
    /* 007258c1: call 0x695340 */ r_esp -= 4; W32(r_esp, 0x7258c6u); f_00695340();
    /* 007258c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007258c8: je 0x725875 */ if (fZ) goto L_00725875;
L_007258ca:; BB(0x007258ca);
    /* 007258ca: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 007258ce: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007258d1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007258d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007258d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007258d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007258d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007258d8: ret  */ FN_RET(0x007257d4); r_esp += 4; return;
}

void f_007258dc(void) /* sub_7258DC */
{
    FN_ENTER(0x007258dc);
    /* 007258dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007258dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007258de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007258df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007258e0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007258e3: mov edi, ecx */ r_edi = r_ecx;
    /* 007258e5: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 007258e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007258eb: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 007258f0: mov word ptr [esp + 0x1c], ax */ W16((u32)(r_esp+0x1cu), (u16)r_eax);
    /* 007258f5: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 007258fa: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 007258ff: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 00725904: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 00725909: mov word ptr [esp + 0x28], ax */ W16((u32)(r_esp+0x28u), (u16)r_eax);
    /* 0072590e: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 00725913: mov word ptr [esp + 0x24], ax */ W16((u32)(r_esp+0x24u), (u16)r_eax);
    /* 00725918: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 0072591d: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 00725922: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725923: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x725928u); f_0068d5a8();
    /* 00725928: mov esi, eax */ r_esi = r_eax;
    /* 0072592a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072592d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072592f: je 0x725b0a */ if (fZ) goto L_00725b0a;
L_00725935:; BB(0x00725935);
    /* 00725935: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 0072593b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072593d: je 0x725b0a */ if (fZ) goto L_00725b0a;
L_00725943:; BB(0x00725943);
    /* 00725943: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00725946: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00725948: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0072594b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0072594f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00725952: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00725956: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00725959: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072595d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00725960: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 00725963: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00725966: mov eax, dword ptr [esi + 0x31c] */ r_eax = R32((u32)(r_esi+0x31cu));
    /* 0072596c: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0072596f: movsx eax, word ptr [esi + 0x2ce] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2ceu));
    /* 00725976: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0072597a: movsx edx, word ptr [esi + 0x2cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2ccu));
    /* 00725981: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00725983: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00725985: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725987: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725988: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x72598du); f_0072d458();
    /* 0072598d: movsx edx, word ptr [esi + 0x2d4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2d4u));
    /* 00725994: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725995: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00725999: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x72599eu); f_0072d458();
    /* 0072599e: movsx edx, word ptr [esi + 0x2d2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2d2u));
    /* 007259a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007259a6: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007259aa: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x7259afu); f_0072d458();
    /* 007259af: movsx edx, word ptr [esi + 0x2d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2d0u));
    /* 007259b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007259b7: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007259bb: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x7259c0u); f_0072d458();
    /* 007259c0: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 007259c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007259c5: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007259c9: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x7259ceu); f_0072d458();
    /* 007259ce: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 007259d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007259d3: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007259d7: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x7259dcu); f_0072d458();
    /* 007259dc: mov edx, dword ptr [edi + 0x70] */ r_edx = R32((u32)(r_edi+0x70u));
    /* 007259df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007259e1: je 0x725b0a */ if (fZ) goto L_00725b0a;
L_007259e7:; BB(0x007259e7);
    /* 007259e7: mov ecx, edi */ r_ecx = r_edi;
    /* 007259e9: call 0x725b14 */ r_esp -= 4; W32(r_esp, 0x7259eeu); f_00725b14();
    /* 007259ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007259f0: je 0x725a06 */ if (fZ) goto L_00725a06;
L_007259f2:; BB(0x007259f2);
    /* 007259f2: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 007259f6: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007259fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007259fd: mov ecx, esi */ r_ecx = r_esi;
    /* 007259ff: call 0x68e4e8 */ r_esp -= 4; W32(r_esp, 0x725a04u); f_0068e4e8();
    /* 00725a04: jmp 0x725a15 */ goto L_00725a15;
L_00725a06:; BB(0x00725a06);
    /* 00725a06: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00725a0a: push dword ptr [edi + 0x70] */ { u32 v = R32((u32)(r_edi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00725a0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725a0e: mov ecx, esi */ r_ecx = r_esi;
    /* 00725a10: call 0x68e030 */ r_esp -= 4; W32(r_esp, 0x725a15u); f_0068e030();
L_00725a15:; BB(0x00725a15);
    /* 00725a15: movsx edx, word ptr [esp + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00725a1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725a1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725a1d: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x725a22u); f_0072d470();
    /* 00725a22: movsx edx, word ptr [esp + 0x1a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x1au));
    /* 00725a27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725a28: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00725a2c: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x725a31u); f_0072d470();
    /* 00725a31: movsx edx, word ptr [esp + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x16u));
    /* 00725a36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725a37: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00725a3b: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x725a40u); f_0072d470();
    /* 00725a40: movsx edx, word ptr [esp + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 00725a45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725a46: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00725a4a: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x725a4fu); f_0072d470();
    /* 00725a4f: movsx edx, word ptr [esp + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 00725a54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725a55: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00725a59: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x725a5eu); f_0072d470();
    /* 00725a5e: movsx edx, word ptr [esp + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x1eu));
    /* 00725a63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725a64: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00725a68: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x725a6du); f_0072d470();
    /* 00725a6d: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00725a71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725a72: push dword ptr [edi + 0x70] */ { u32 v = R32((u32)(r_edi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00725a75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725a76: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x725a7bu); f_005c9e40();
    /* 00725a7b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725a7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725a80: je 0x725aca */ if (fZ) goto L_00725aca;
L_00725a82:; BB(0x00725a82);
    /* 00725a82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725a84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725a86: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725a8bu); f_0072d488();
    /* 00725a8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725a8d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00725a91: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725a96u); f_0072d488();
    /* 00725a96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725a98: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00725a9c: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725aa1u); f_0072d488();
    /* 00725aa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725aa3: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00725aa7: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725aacu); f_0072d488();
    /* 00725aac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725aae: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00725ab2: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725ab7u); f_0072d488();
    /* 00725ab7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725ab9: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00725abd: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725ac2u); f_0072d488();
    /* 00725ac2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725ac5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725ac6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725ac7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725ac8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725ac9: ret  */ FN_RET(0x007258dc); r_esp += 4; return;
L_00725aca:; BB(0x00725aca);
    /* 00725aca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725acc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725ace: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725ad3u); f_0072d488();
    /* 00725ad3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725ad5: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00725ad9: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725adeu); f_0072d488();
    /* 00725ade: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725ae0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00725ae4: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725ae9u); f_0072d488();
    /* 00725ae9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725aeb: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00725aef: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725af4u); f_0072d488();
    /* 00725af4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725af6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00725afa: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725affu); f_0072d488();
    /* 00725aff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725b01: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00725b05: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725b0au); f_0072d488();
L_00725b0a:; BB(0x00725b0a);
    /* 00725b0a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725b0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725b0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725b0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725b10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725b11: ret  */ FN_RET(0x007258dc); r_esp += 4; return;
}

void f_00725b14(void) /* sub_725B14 */
{
    FN_ENTER(0x00725b14);
    /* 00725b14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725b15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00725b17: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00725b1d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725b20: je 0x725b4b */ if (fZ) goto L_00725b4b;
L_00725b22:; BB(0x00725b22);
    /* 00725b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725b23: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x725b28u); f_005c5528();
    /* 00725b28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00725b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725b2b: je 0x725b4b */ if (fZ) goto L_00725b4b;
L_00725b2d:; BB(0x00725b2d);
    /* 00725b2d: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00725b33: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00725b36: jne 0x725b3c */ if (!fZ) goto L_00725b3c;
L_00725b38:; BB(0x00725b38);
    /* 00725b38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725b3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725b3b: ret  */ FN_RET(0x00725b14); r_esp += 4; return;
L_00725b3c:; BB(0x00725b3c);
    /* 00725b3c: movzx eax, word ptr [eax + 0xe4] */ r_eax = (u32)R16((u32)(r_eax+0xe4u));
    /* 00725b43: movsx edx, word ptr [ebx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00725b47: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00725b49: je 0x725b4f */ if (fZ) goto L_00725b4f;
L_00725b4b:; BB(0x00725b4b);
    /* 00725b4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725b4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725b4e: ret  */ FN_RET(0x00725b14); r_esp += 4; return;
L_00725b4f:; BB(0x00725b4f);
    /* 00725b4f: mov eax, 1 */ r_eax = 0x1u;
    /* 00725b54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725b55: ret  */ FN_RET(0x00725b14); r_esp += 4; return;
}

void f_00725b58(void) /* sub_725B58 */
{
    FN_ENTER(0x00725b58);
    /* 00725b58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00725b59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725b5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00725b5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725b5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725b5d: mov edi, ecx */ r_edi = r_ecx;
    /* 00725b5f: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00725b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725b64: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x725b69u); f_0068d5a8();
    /* 00725b69: mov esi, eax */ r_esi = r_eax;
    /* 00725b6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725b6e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725b70: je 0x725bc4 */ if (fZ) goto L_00725bc4;
L_00725b72:; BB(0x00725b72);
    /* 00725b72: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 00725b78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725b7a: je 0x725bc4 */ if (fZ) goto L_00725bc4;
L_00725b7c:; BB(0x00725b7c);
    /* 00725b7c: mov ecx, edi */ r_ecx = r_edi;
    /* 00725b7e: call 0x7258dc */ r_esp -= 4; W32(r_esp, 0x725b83u); f_007258dc();
    /* 00725b83: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00725b86: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 00725b89: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 00725b8c: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x725b91u); f_005d2890();
    /* 00725b91: mov ebx, eax */ r_ebx = r_eax;
    /* 00725b93: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00725b96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725b97: push dword ptr [edi + 0x68] */ { u32 v = R32((u32)(r_edi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00725b9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725b9b: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x725ba0u); f_005c9e40();
    /* 00725ba0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725ba3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725ba5: jne 0x725baf */ if (!fZ) goto L_00725baf;
L_00725ba7:; BB(0x00725ba7);
    /* 00725ba7: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00725baa: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725bad: jne 0x725bc4 */ if (!fZ) goto L_00725bc4;
L_00725baf:; BB(0x00725baf);
    /* 00725baf: movzx edx, byte ptr [ebx + 0x14] */ r_edx = (u32)R8((u32)(r_ebx+0x14u));
    /* 00725bb3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725bb5: je 0x725bc4 */ if (fZ) goto L_00725bc4;
L_00725bb7:; BB(0x00725bb7);
    /* 00725bb7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00725bb9: mov ecx, esi */ r_ecx = r_esi;
    /* 00725bbb: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x725bbeu); call_ind(t); }
    /* 00725bbe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725bc1: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
L_00725bc4:; BB(0x00725bc4);
    /* 00725bc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00725bc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725bc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725bc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725bc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725bc9: ret  */ FN_RET(0x00725b58); r_esp += 4; return;
}

void f_00725bcc(void) /* sub_725BCC */
{
    FN_ENTER(0x00725bcc);
    /* 00725bcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00725bcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725bce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00725bcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725bd0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00725bd3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00725bd5: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00725bd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725bda: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x725bdfu); f_0068d5a8();
    /* 00725bdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00725be0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725be2: je 0x725c84 */ if (fZ) goto L_00725c84;
L_00725be8:; BB(0x00725be8);
    /* 00725be8: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00725beb: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 00725bed: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00725bf0: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00725bf3: mov ebx, dword ptr [ebx + 0x70] */ r_ebx = R32((u32)(r_ebx+0x70u));
    /* 00725bf6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725bf8: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00725bfc: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 00725bff: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 00725c02: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00725c05: je 0x725c84 */ if (fZ) goto L_00725c84;
L_00725c07:; BB(0x00725c07);
    /* 00725c07: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00725c0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725c0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725c0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725c0e: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x725c13u); f_005c9e40();
    /* 00725c13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725c18: je 0x725c53 */ if (fZ) goto L_00725c53;
L_00725c1a:; BB(0x00725c1a);
    /* 00725c1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00725c1e: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c23u); f_0072d488();
    /* 00725c23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c25: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00725c29: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c2eu); f_0072d488();
    /* 00725c2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c30: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00725c34: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c39u); f_0072d488();
    /* 00725c39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c3b: mov ecx, esi */ r_ecx = r_esi;
    /* 00725c3d: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c42u); f_0072d488();
    /* 00725c42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c44: mov ecx, edi */ r_ecx = r_edi;
    /* 00725c46: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c4bu); f_0072d488();
    /* 00725c4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725c4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725c4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725c50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725c51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725c52: ret  */ FN_RET(0x00725bcc); r_esp += 4; return;
L_00725c53:; BB(0x00725c53);
    /* 00725c53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c55: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00725c57: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c5cu); f_0072d488();
    /* 00725c5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c5e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00725c62: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c67u); f_0072d488();
    /* 00725c67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c69: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00725c6d: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c72u); f_0072d488();
    /* 00725c72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c74: mov ecx, esi */ r_ecx = r_esi;
    /* 00725c76: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c7bu); f_0072d488();
    /* 00725c7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725c7d: mov ecx, edi */ r_ecx = r_edi;
    /* 00725c7f: call 0x72d488 */ r_esp -= 4; W32(r_esp, 0x725c84u); f_0072d488();
L_00725c84:; BB(0x00725c84);
    /* 00725c84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725c87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725c88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725c89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725c8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725c8b: ret  */ FN_RET(0x00725bcc); r_esp += 4; return;
}

void f_00725c8c(void) /* sub_725C8C */
{
    FN_ENTER(0x00725c8c);
    /* 00725c8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00725c8d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00725c90: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00725c92: movsx edx, word ptr [ebp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00725c96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00725c98: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 00725c9d: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 00725ca2: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00725ca7: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 00725cac: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00725cb1: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00725cb5: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 00725cba: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 00725cbf: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 00725cc4: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00725cc9: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00725cce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725ccf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x725cd4u); f_0068d5a8();
    /* 00725cd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00725cd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725cd7: je 0x725cf4 */ if (fZ) goto L_00725cf4;
L_00725cd9:; BB(0x00725cd9);
    /* 00725cd9: mov edx, eax */ r_edx = r_eax;
    /* 00725cdb: add edx, 0x930 */ {  u32 a = r_edx; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00725ce1: je 0x725cf4 */ if (fZ) goto L_00725cf4;
L_00725ce3:; BB(0x00725ce3);
    /* 00725ce3: mov ebp, dword ptr [ebp + 0x28] */ r_ebp = R32((u32)(r_ebp+0x28u));
    /* 00725ce6: mov ebp, dword ptr [ebp + 0x14] */ r_ebp = R32((u32)(r_ebp+0x14u));
    /* 00725ce9: mov edx, dword ptr [eax + 0x964] */ r_edx = R32((u32)(r_eax+0x964u));
    /* 00725cef: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00725cf2: je 0x725cf9 */ if (fZ) goto L_00725cf9;
L_00725cf4:; BB(0x00725cf4);
    /* 00725cf4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725cf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725cf8: ret  */ FN_RET(0x00725c8c); r_esp += 4; return;
L_00725cf9:; BB(0x00725cf9);
    /* 00725cf9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00725cfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725cfd: mov ecx, eax */ r_ecx = r_eax;
    /* 00725cff: call 0x695340 */ r_esp -= 4; W32(r_esp, 0x725d04u); f_00695340();
    /* 00725d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725d06: je 0x725cf4 */ if (fZ) goto L_00725cf4;
L_00725d08:; BB(0x00725d08);
    /* 00725d08: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00725d0d: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00725d10: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725d13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725d14: ret  */ FN_RET(0x00725c8c); r_esp += 4; return;
}

void f_00725d18(void) /* sub_725D18 */
{
    FN_ENTER(0x00725d18);
    /* 00725d18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00725d19: mov ebp, esp */ r_ebp = r_esp;
    /* 00725d1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00725d1d: push 0x8f0f6e */ { u32 v = 0x8f0f6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00725d22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00725d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725d29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00725d30: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00725d33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00725d36: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00725d39: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00725d3c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00725d3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00725d42: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00725d46: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00725d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725d4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00725d4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725d4e: push 0x9f2b58 */ { u32 v = 0x9f2b58u; r_esp -= 4; W32(r_esp, v); }
    /* 00725d53: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x725d58u); f_00710d30();
    /* 00725d58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00725d5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00725d62: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00725d65: mov dword ptr [ecx], 0xb3fff0 */ W32((u32)(r_ecx), 0xb3fff0u);
    /* 00725d6b: mov eax, dword ptr [0x9f2b00] */ r_eax = R32((u32)(0x9f2b00u));
    /* 00725d70: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00725d73: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00725d75: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00725d78: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00725d7b: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 00725d7e: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x725d83u); f_00710f64();
    /* 00725d83: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00725d86: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00725d88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00725d8a: mov byte ptr [esi + 0x60], al */ W8((u32)(r_esi+0x60u), (u8)r_eax);
    /* 00725d8d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00725d90: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x725d95u); f_008581c5();
    /* 00725d95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00725d96: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00725d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725d9b: je 0x725e45 */ if (fZ) goto L_00725e45;
L_00725da1:; BB(0x00725da1);
    /* 00725da1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00725da8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00725daf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00725db2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00725db5: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 00725db9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725dba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00725dbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00725dbe: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x725dc3u); f_0073e5d4();
    /* 00725dc3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00725dc6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00725dcd:; BB(0x00725dcd);
    /* 00725dcd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00725dd0: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 00725dd3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00725dda: mov dword ptr [ecx + 0xa8], 0x3f800000 */ W32((u32)(r_ecx+0xa8u), 0x3f800000u);
    /* 00725de4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00725de6: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00725de9: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00725dec: mov dword ptr [ecx + 0xac], 0x3f800000 */ W32((u32)(r_ecx+0xacu), 0x3f800000u);
    /* 00725df6: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 00725df9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00725dfe: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 00725e04: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 00725e0a: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 00725e10: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 00725e16: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x725e1bu); f_00727450();
    /* 00725e1b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00725e1e: movsx eax, word ptr [edx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 00725e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725e23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725e24: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x725e29u); f_0061cdb0();
    /* 00725e29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725e2c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00725e2f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00725e32: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00725e35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00725e38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00725e3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00725e41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00725e42: ret 8 */ FN_RET(0x00725d18); r_esp += 12; return;
L_00725e45:; BB(0x00725e45);
    /* 00725e45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00725e47: jmp 0x725dcd */ goto L_00725dcd;
}

void f_00725e4c(void) /* sub_725E4C */
{
    FN_ENTER(0x00725e4c);
    /* 00725e4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725e4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00725e4f: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00725e52: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00725e54: jne 0x725e5d */ if (!fZ) goto L_00725e5d;
L_00725e56:; BB(0x00725e56);
    /* 00725e56: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
L_00725e5d:; BB(0x00725e5d);
    /* 00725e5d: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 00725e61: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00725e63: jne 0x725e96 */ if (!fZ) goto L_00725e96;
L_00725e65:; BB(0x00725e65);
    /* 00725e65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725e67: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x725e6cu); f_00710db4();
    /* 00725e6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725e6e: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x725e73u); f_00710ee4();
    /* 00725e73: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 00725e76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725e77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725e79: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x725e7eu); f_0072a5ec();
    /* 00725e7e: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 00725e82: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725e84: jne 0x725e94 */ if (!fZ) goto L_00725e94;
L_00725e86:; BB(0x00725e86);
    /* 00725e86: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00725e8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725e8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725e8c: call 0x71ba28 */ r_esp -= 4; W32(r_esp, 0x725e91u); f_0071ba28();
    /* 00725e91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00725e94:; BB(0x00725e94);
    /* 00725e94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00725e95: ret  */ FN_RET(0x00725e4c); r_esp += 4; return;
L_00725e96:; BB(0x00725e96);
    /* 00725e96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725e98: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x725e9du); f_00712480();
    /* 00725e9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725e9f: je 0x725e65 */ if (fZ) goto L_00725e65;
L_00725ea1:; BB(0x00725ea1);
    /* 00725ea1: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00725ea4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00725ea6: jne 0x725e65 */ if (!fZ) goto L_00725e65;
L_00725ea8:; BB(0x00725ea8);
    /* 00725ea8: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 00725eac: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00725eae: jne 0x725ecd */ if (!fZ) goto L_00725ecd;
L_00725eb0:; BB(0x00725eb0);
    /* 00725eb0: lea eax, [ebx + 0xa8] */ r_eax = (u32)(r_ebx+0xa8u);
    /* 00725eb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725eb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725eb9: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x725ebeu); f_00712658();
    /* 00725ebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725ebf: mov ecx, dword ptr [ebx + 0x64] */ r_ecx = R32((u32)(r_ebx+0x64u));
    /* 00725ec2: call 0x73e60c */ r_esp -= 4; W32(r_esp, 0x725ec7u); f_0073e60c();
    /* 00725ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725ec9: jne 0x725ede */ if (!fZ) goto L_00725ede;
L_00725ecb:; BB(0x00725ecb);
    /* 00725ecb: jmp 0x725ed5 */ goto L_00725ed5;
L_00725ecd:; BB(0x00725ecd);
    /* 00725ecd: mov ecx, dword ptr [ebx + 0x64] */ r_ecx = R32((u32)(r_ebx+0x64u));
    /* 00725ed0: call 0x73e5f8 */ r_esp -= 4; W32(r_esp, 0x725ed5u); f_0073e5f8();
L_00725ed5:; BB(0x00725ed5);
    /* 00725ed5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725ed7: call 0x725ee8 */ r_esp -= 4; W32(r_esp, 0x725edcu); f_00725ee8();
    /* 00725edc: jmp 0x725e65 */ goto L_00725e65;
L_00725ede:; BB(0x00725ede);
    /* 00725ede: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00725ee0: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x725ee5u); f_00727450();
    /* 00725ee5: jmp 0x725ed5 */ goto L_00725ed5;
}

void f_00725ee8(void) /* sub_725EE8 */
{
    FN_ENTER(0x00725ee8);
    /* 00725ee8: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00725eee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725ef0: je 0x725ef4 */ if (fZ) goto L_00725ef4;
L_00725ef2:; BB(0x00725ef2);
    /* 00725ef2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x725ef4u); call_ind(t); }
L_00725ef4:; BB(0x00725ef4);
    /* 00725ef4: ret  */ FN_RET(0x00725ee8); r_esp += 4; return;
}

void f_00725ef8(void) /* sub_725EF8 */
{
    FN_ENTER(0x00725ef8);
    /* 00725ef8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00725ef9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725efa: mov edi, ecx */ r_edi = r_ecx;
    /* 00725efc: lea eax, [edi + 0xa8] */ r_eax = (u32)(r_edi+0xa8u);
    /* 00725f02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725f03: mov ecx, edi */ r_ecx = r_edi;
    /* 00725f05: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x725f0au); f_00712658();
    /* 00725f0a: mov esi, eax */ r_esi = r_eax;
    /* 00725f0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725f0d: mov ecx, edi */ r_ecx = r_edi;
    /* 00725f0f: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x725f14u); f_00710f80();
    /* 00725f14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725f15: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00725f18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725f19: mov ecx, edi */ r_ecx = r_edi;
    /* 00725f1b: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x725f20u); f_0072a648();
    /* 00725f20: movzx edx, byte ptr [edi + 0x60] */ r_edx = (u32)R8((u32)(r_edi+0x60u));
    /* 00725f24: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00725f27: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00725f2a: je 0x725f2f */ if (fZ) goto L_00725f2f;
L_00725f2c:; BB(0x00725f2c);
    /* 00725f2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725f2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725f2e: ret  */ FN_RET(0x00725ef8); r_esp += 4; return;
L_00725f2f:; BB(0x00725f2f);
    /* 00725f2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725f30: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 00725f33: call 0x73e6b4 */ r_esp -= 4; W32(r_esp, 0x725f38u); f_0073e6b4();
    /* 00725f38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725f39: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725f3a: ret  */ FN_RET(0x00725ef8); r_esp += 4; return;
}

void f_00725f3c(void) /* sub_725F3C */
{
    FN_ENTER(0x00725f3c);
    /* 00725f3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00725f3d: mov edi, ecx */ r_edi = r_ecx;
    /* 00725f3f: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 00725f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725f43: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x725f48u); f_0072a590();
    /* 00725f48: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00725f4c: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00725f51: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 00725f54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00725f56: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 00725f59: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 00725f5c: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
    /* 00725f5f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00725f64: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 00725f6a: mov dword ptr [edi + 0xa0], edx */ W32((u32)(r_edi+0xa0u), r_edx);
    /* 00725f70: mov dword ptr [edi + 0xa4], edx */ W32((u32)(r_edi+0xa4u), r_edx);
    /* 00725f76: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 00725f7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00725f7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725f7e: ret  */ FN_RET(0x00725f3c); r_esp += 4; return;
}

void f_00725f80(void) /* sub_725F80 */
{
    FN_ENTER(0x00725f80);
    /* 00725f80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725f81: mov esi, ecx */ r_esi = r_ecx;
    /* 00725f83: mov ecx, esi */ r_ecx = r_esi;
    /* 00725f85: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00725f89: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00725f8d: mov dword ptr [esi + 0xa0], eax */ W32((u32)(r_esi+0xa0u), r_eax);
    /* 00725f93: mov dword ptr [esi + 0x6c], edx */ W32((u32)(r_esi+0x6cu), r_edx);
    /* 00725f96: call 0x7275c0 */ r_esp -= 4; W32(r_esp, 0x725f9bu); f_007275c0();
    /* 00725f9b: mov ecx, esi */ r_ecx = r_esi;
    /* 00725f9d: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x725fa2u); f_00727450();
    /* 00725fa2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725fa3: ret 8 */ FN_RET(0x00725f80); r_esp += 12; return;
}

void f_00725fa8(void) /* sub_725FA8 */
{
    FN_ENTER(0x00725fa8);
    /* 00725fa8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00725fac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725fae: je 0x725fbf */ if (fZ) goto L_00725fbf;
L_00725fb0:; BB(0x00725fb0);
    /* 00725fb0: mov edx, 0xffffff00 */ r_edx = 0xffffff00u;
L_00725fb5:; BB(0x00725fb5);
    /* 00725fb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725fb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725fb7: call 0x725fc8 */ r_esp -= 4; W32(r_esp, 0x725fbcu); f_00725fc8();
    /* 00725fbc: ret 4 */ FN_RET(0x00725fa8); r_esp += 8; return;
L_00725fbf:; BB(0x00725fbf);
    /* 00725fbf: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00725fc4: jmp 0x725fb5 */ goto L_00725fb5;
}

void f_00725fc8(void) /* sub_725FC8 */
{
    FN_ENTER(0x00725fc8);
    /* 00725fc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725fc9: mov esi, ecx */ r_esi = r_ecx;
    /* 00725fcb: mov ecx, esi */ r_ecx = r_esi;
    /* 00725fcd: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00725fd1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00725fd5: mov dword ptr [esi + 0xa4], eax */ W32((u32)(r_esi+0xa4u), r_eax);
    /* 00725fdb: mov dword ptr [esi + 0x70], edx */ W32((u32)(r_esi+0x70u), r_edx);
    /* 00725fde: call 0x7275c0 */ r_esp -= 4; W32(r_esp, 0x725fe3u); f_007275c0();
    /* 00725fe3: mov ecx, esi */ r_ecx = r_esi;
    /* 00725fe5: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x725feau); f_00727450();
    /* 00725fea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725feb: ret 8 */ FN_RET(0x00725fc8); r_esp += 12; return;
}

void f_00725ff0(void) /* sub_725FF0 */
{
    FN_ENTER(0x00725ff0);
    /* 00725ff0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00725ff1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00725ff2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725ff3: mov esi, ecx */ r_esi = r_ecx;
    /* 00725ff5: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00725ff9: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725ffc: je 0x726044 */ if (fZ) goto L_00726044;
L_00725ffe:; BB(0x00725ffe);
    /* 00725ffe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00725fff: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x726004u); f_005c5528();
    /* 00726004: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726005: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726007: je 0x726023 */ if (fZ) goto L_00726023;
L_00726009:; BB(0x00726009);
    /* 00726009: lea edi, [esi + 0x74] */ r_edi = (u32)(r_esi+0x74u);
    /* 0072600c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072600d: mov ecx, eax */ r_ecx = r_eax;
    /* 0072600f: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x726014u); f_005c425c();
    /* 00726014: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726015: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726016: mov ecx, esi */ r_ecx = r_esi;
    /* 00726018: call 0x725f80 */ r_esp -= 4; W32(r_esp, 0x72601du); f_00725f80();
    /* 0072601d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072601e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072601f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726020: ret 4 */ FN_RET(0x00725ff0); r_esp += 8; return;
L_00726023:; BB(0x00726023);
    /* 00726023: mov dword ptr [esi + 0x6c], 0 */ W32((u32)(r_esi+0x6cu), 0x0u);
    /* 0072602a: mov dword ptr [esi + 0xa0], ebx */ W32((u32)(r_esi+0xa0u), r_ebx);
    /* 00726030: mov ecx, esi */ r_ecx = r_esi;
    /* 00726032: call 0x7275c0 */ r_esp -= 4; W32(r_esp, 0x726037u); f_007275c0();
    /* 00726037: mov ecx, esi */ r_ecx = r_esi;
    /* 00726039: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x72603eu); f_00727450();
    /* 0072603e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072603f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726040: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726041: ret 4 */ FN_RET(0x00725ff0); r_esp += 8; return;
L_00726044:; BB(0x00726044);
    /* 00726044: mov dword ptr [esi + 0xa0], 0xffffffff */ W32((u32)(r_esi+0xa0u), 0xffffffffu);
    /* 0072604e: mov ecx, esi */ r_ecx = r_esi;
    /* 00726050: mov dword ptr [esi + 0x6c], 0 */ W32((u32)(r_esi+0x6cu), 0x0u);
    /* 00726057: call 0x7275c0 */ r_esp -= 4; W32(r_esp, 0x72605cu); f_007275c0();
    /* 0072605c: mov ecx, esi */ r_ecx = r_esi;
    /* 0072605e: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x726063u); f_00727450();
    /* 00726063: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726064: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726065: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726066: ret 4 */ FN_RET(0x00725ff0); r_esp += 8; return;
}

