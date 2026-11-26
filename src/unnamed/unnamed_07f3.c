#include "protos.h"

void f_007f3014(void) /* sub_7F3014 */
{
    FN_ENTER(0x007f3014);
    /* 007f3014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f3015: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f3016: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f301c: mov eax, ecx */ r_eax = r_ecx;
    /* 007f301e: mov esi, dword ptr [esp + 0x11c] */ r_esi = R32((u32)(r_esp+0x11cu));
    /* 007f3025: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f3027: je 0x7f3069 */ if (fZ) goto L_007f3069;
L_007f3029:; BB(0x007f3029);
    /* 007f3029: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f3031: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 007f3035: mov edx, 0x110 */ r_edx = 0x110u;
    /* 007f303a: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 007f303f: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f3043: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 007f3048: mov byte ptr [esp + 3], 4 */ W8((u32)(r_esp+0x3u), 0x4u);
    /* 007f304d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f304e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f3051: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f3053: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f3054: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f3057: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f3059: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 007f305d: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 007f3060: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f3061: mov ecx, eax */ r_ecx = r_eax;
    /* 007f3063: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f3064: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f3069u); f_0077fd10();
L_007f3069:; BB(0x007f3069);
    /* 007f3069: add esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f306f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f3070: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f3071: ret 4 */ FN_RET(0x007f3014); r_esp += 8; return;
}

void f_007f3074(void) /* sub_7F3074 */
{
    FN_ENTER(0x007f3074);
    /* 007f3074: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f3077: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007f307b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f307f: mov eax, 0xc */ r_eax = 0xcu;
    /* 007f3084: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f308c: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f3090: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f3093: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 007f3098: mov byte ptr [esp + 3], 5 */ W8((u32)(r_esp+0x3u), 0x5u);
    /* 007f309d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007f309f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f30a0: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f30a5u); f_0077fd10();
    /* 007f30a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f30a8: ret 4 */ FN_RET(0x007f3074); r_esp += 8; return;
}

void f_007f30ac(void) /* sub_7F30AC */
{
    FN_ENTER(0x007f30ac);
    /* 007f30ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007f30ad: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f30b3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007f30b5: mov eax, dword ptr [esp + 0xc8] */ r_eax = R32((u32)(r_esp+0xc8u));
    /* 007f30bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f30be: je 0x7f3104 */ if (fZ) goto L_007f3104;
L_007f30c0:; BB(0x007f30c0);
    /* 007f30c0: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f30c8: mov edx, 0xbc */ r_edx = 0xbcu;
    /* 007f30cd: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f30d1: mov edx, dword ptr [esp + 0xc4] */ r_edx = R32((u32)(r_esp+0xc4u));
    /* 007f30d8: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 007f30dd: mov byte ptr [esp + 3], 9 */ W8((u32)(r_esp+0x3u), 0x9u);
    /* 007f30e2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f30e6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007f30ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f30eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f30ec: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x7f30f1u); f_00857fed();
    /* 007f30f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f30f4: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007f30f8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f30fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f30fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007f30fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f30ff: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f3104u); f_0077fd10();
L_007f3104:; BB(0x007f3104);
    /* 007f3104: add esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f310a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007f310b: ret 8 */ FN_RET(0x007f30ac); r_esp += 12; return;
}

void f_007f3110(void) /* sub_7F3110 */
{
    FN_ENTER(0x007f3110);
    /* 007f3110: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007f3111: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f3112: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f3118: mov eax, ecx */ r_eax = r_ecx;
    /* 007f311a: mov esi, dword ptr [esp + 0x11c] */ r_esi = R32((u32)(r_esp+0x11cu));
    /* 007f3121: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f3123: je 0x7f3165 */ if (fZ) goto L_007f3165;
L_007f3125:; BB(0x007f3125);
    /* 007f3125: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f312d: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 007f3131: mov edx, 0x110 */ r_edx = 0x110u;
    /* 007f3136: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 007f313b: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007f313f: mov ecx, 0x108 */ r_ecx = 0x108u;
    /* 007f3144: mov byte ptr [esp + 3], 7 */ W8((u32)(r_esp+0x3u), 0x7u);
    /* 007f3149: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007f314a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007f314d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007f314f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f3150: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007f3153: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007f3155: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 007f3159: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 007f315c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f315d: mov ecx, eax */ r_ecx = r_eax;
    /* 007f315f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007f3160: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f3165u); f_0077fd10();
L_007f3165:; BB(0x007f3165);
    /* 007f3165: add esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f316b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007f316c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007f316d: ret 4 */ FN_RET(0x007f3110); r_esp += 8; return;
}

void f_007f3170(void) /* sub_7F3170 */
{
    FN_ENTER(0x007f3170);
    /* 007f3170: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f3173: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007f3177: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f317b: mov eax, 0xc */ r_eax = 0xcu;
    /* 007f3180: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f3188: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f318c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f318f: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 007f3194: mov byte ptr [esp + 3], 8 */ W8((u32)(r_esp+0x3u), 0x8u);
    /* 007f3199: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007f319b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f319c: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f31a1u); f_0077fd10();
    /* 007f31a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f31a4: ret 4 */ FN_RET(0x007f3170); r_esp += 8; return;
}

void f_007f31a8(void) /* sub_7F31A8 */
{
    FN_ENTER(0x007f31a8);
    /* 007f31a8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f31ab: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007f31af: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f31b3: mov eax, 0x10 */ r_eax = 0x10u;
    /* 007f31b8: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f31c0: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f31c4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007f31c8: mov byte ptr [esp + 2], 0xe8 */ W8((u32)(r_esp+0x2u), 0xe8u);
    /* 007f31cd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f31d0: mov byte ptr [esp + 3], 0xa */ W8((u32)(r_esp+0x3u), 0xau);
    /* 007f31d5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007f31d9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007f31dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f31de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f31df: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f31e4u); f_0077fd10();
    /* 007f31e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f31e7: ret 8 */ FN_RET(0x007f31a8); r_esp += 12; return;
}

void f_007f31ec(void) /* sub_7F31EC */
{
    FN_ENTER(0x007f31ec);
    /* 007f31ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007f31ed: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f31f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007f31f2: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007f31f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f31f8: je 0x7f3233 */ if (fZ) goto L_007f3233;
L_007f31fa:; BB(0x007f31fa);
    /* 007f31fa: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f3202: mov eax, 0x28 */ r_eax = 0x28u;
    /* 007f3207: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f320b: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f3210: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007f3214: mov byte ptr [esp + 3], 1 */ W8((u32)(r_esp+0x3u), 0x1u);
    /* 007f3219: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f321a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f321b: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x7f3220u); f_00857fed();
    /* 007f3220: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f3223: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007f3227: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007f322a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f322b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007f322d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f322e: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f3233u); f_0077fd10();
L_007f3233:; BB(0x007f3233);
    /* 007f3233: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f3236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f3237: ret 4 */ FN_RET(0x007f31ec); r_esp += 8; return;
}

void f_007f323c(void) /* sub_7F323C */
{
    FN_ENTER(0x007f323c);
    /* 007f323c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f323f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007f3243: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f3247: mov eax, 0xc */ r_eax = 0xcu;
    /* 007f324c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f3254: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f3258: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f325b: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f3260: mov byte ptr [esp + 3], 3 */ W8((u32)(r_esp+0x3u), 0x3u);
    /* 007f3265: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007f3267: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f3268: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f326du); f_0077fd10();
    /* 007f326d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f3270: ret 4 */ FN_RET(0x007f323c); r_esp += 8; return;
}

void f_007f3274(void) /* sub_7F3274 */
{
    FN_ENTER(0x007f3274);
    /* 007f3274: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f3277: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007f327b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007f327f: mov eax, 0xc */ r_eax = 0xcu;
    /* 007f3284: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007f328c: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007f3290: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007f3293: mov byte ptr [esp + 2], 0xea */ W8((u32)(r_esp+0x2u), 0xeau);
    /* 007f3298: mov byte ptr [esp + 3], 5 */ W8((u32)(r_esp+0x3u), 0x5u);
    /* 007f329d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007f329f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f32a0: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7f32a5u); f_0077fd10();
    /* 007f32a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007f32a8: ret 4 */ FN_RET(0x007f3274); r_esp += 8; return;
}

void f_007f32ac(void) /* sub_7F32AC */
{
    FN_ENTER(0x007f32ac);
    /* 007f32ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007f32ad: mov ebp, esp */ r_ebp = r_esp;
    /* 007f32af: sub esp, 0x138 */ {  u32 a = r_esp; u32 b = 0x138u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007f32b5: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 007f32b8: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 007f32bb: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 007f32be: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 007f32c1: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007f32c2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007f32c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f32c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f32c8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f32ca: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7f32d0u); call_ind(t); }
    /* 007f32d0: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007f32d1: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007f32d2: jmp 0x7f64f3 */ goto L_007f64f3;
L_007f64f3:; BB(0x007f64f3);
    /* 007f64f3: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007f64f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007f64f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007f64f9: je 0x7f65e4 */ if (fZ) goto L_007f65e4;
L_007f64ff:; BB(0x007f64ff);
    /* 007f64ff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 007f6502: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007f6504: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 007f650a: mov byte ptr [ebp - 0x135], al */ W8((u32)(r_ebp+0xfffffecbu), (u8)r_eax);
    /* 007f6510: mov byte ptr [ebp - 0x136], al */ W8((u32)(r_ebp+0xfffffecau), (u8)r_eax);
    /* 007f6516: mov edx, 8 */ r_edx = 0x8u;
    /* 007f651b: mov word ptr [ebp - 0x138], dx */ W16((u32)(r_ebp+0xfffffec8u), (u16)r_edx);
    /* 007f6522: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 007f6525: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007f6527: je 0x7f65e4 */ if (fZ) goto L_007f65e4;
L_007f652d:; BB(0x007f652d);
    /* 007f652d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007f6530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007f6532: jne 0x7f653f */ if (!fZ) goto L_007f653f;
L_007f6534:; BB(0x007f6534);
    /* 007f6534: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007f6536: mov word ptr [ebp - 0x130], ax */ W16((u32)(r_ebp+0xfffffed0u), (u16)r_eax);
    /* 007f653d: jmp 0x7f6554 */ goto L_007f6554;
L_007f653f:; BB(0x007f653f);
    /* 007f653f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007f6542: lea edx, [ebp - 0x130] */ r_edx = (u32)(r_ebp+0xfffffed0u);
    /* 007f6548: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007f654a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f654b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f654c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7f6551u); f_00857dec();
    /* 007f6551: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007f6554:; BB(0x007f6554);
    /* 007f6554: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007f6557: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 007f655d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007f6562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007f6563: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6564: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7f6569u); f_00857dec();
    /* 007f6569: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007f656c: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 007f6572: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f6573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007f6575: mov word ptr [ebp - 0x12], ax */ W16((u32)(r_ebp+0xffffffeeu), (u16)r_eax);
    /* 007f6579: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7f657eu); f_00858009();
    /* 007f657e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007f657f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007f6582: mov byte ptr [ebp - 0x136], 0xea */ W8((u32)(r_ebp+0xfffffecau), 0xeau);
    /* 007f6589: lea eax, [eax + eax + 5] */ r_eax = (u32)(r_eax+r_eax+0x5u);
    /* 007f658d: mov byte ptr [ebp - 0x135], 7 */ W8((u32)(r_ebp+0xfffffecbu), 0x7u);
    /* 007f6594: and eax, 0xfffc */ {  u32 a = r_eax; u32 b = 0xfffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007f6599: add eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007f659c: and eax, 0xfffc */ {  u32 a = r_eax; u32 b = 0xfffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007f65a1: mov word ptr [ebp - 0x138], ax */ W16((u32)(r_ebp+0xfffffec8u), (u16)r_eax);
    /* 007f65a8: lea edx, [ebp - 0x138] */ r_edx = (u32)(r_ebp+0xfffffec8u);
    /* 007f65ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007f65af: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7f65b4u); f_007c4fb4();
    /* 007f65b4: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007f65b5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007f65b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f65b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007f65bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007f65bd: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7f65c3u); call_ind(t); }
    /* 007f65c3: jmp 0x7f65e3 */ goto L_007f65e3;
L_007f65e3:; BB(0x007f65e3);
    /* 007f65e3: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
L_007f65e4:; BB(0x007f65e4);
    /* 007f65e4: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 007f65e7: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 007f65ea: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 007f65ed: mov esp, ebp */ r_esp = r_ebp;
    /* 007f65ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007f65f0: ret 8 */ FN_RET(0x007f32ac); r_esp += 12; return;
}

