#include "protos.h"

void f_005f3008(void) /* sub_5F3008 */
{
    FN_ENTER(0x005f3008);
    /* 005f3008: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f300b: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f3010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3012: jne 0x5f3056 */ if (!fZ) goto L_005f3056;
L_005f3014:; BB(0x005f3014);
    /* 005f3014: mov eax, dword ptr [0xa8df84] */ r_eax = R32((u32)(0xa8df84u));
    /* 005f3019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f301b: je 0x5f3056 */ if (fZ) goto L_005f3056;
L_005f301d:; BB(0x005f301d);
    /* 005f301d: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005f3025: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f3028: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f302a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005f3032: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005f3039: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005f3041: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005f3049: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 005f3051: call 0x83b47c */ r_esp -= 4; W32(r_esp, 0x5f3056u); f_0083b47c();
L_005f3056:; BB(0x005f3056);
    /* 005f3056: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f3059: ret  */ FN_RET(0x005f3008); r_esp += 4; return;
}

void f_005f305c(void) /* sub_5F305C */
{
    FN_ENTER(0x005f305c);
    /* 005f305c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f305d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f305f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3061: push 0x8dcf78 */ { u32 v = 0x8dcf78u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3066: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f306c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f306d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3074: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3077: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f307a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f307d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3080: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f3083: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3088: je 0x5f30df */ if (fZ) goto L_005f30df;
L_005f308a:; BB(0x005f308a);
    /* 005f308a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f3091: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3096: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f309bu); f_005caba4();
    /* 005f309b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f309c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f309f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f30a1: je 0x5f30db */ if (fZ) goto L_005f30db;
L_005f30a3:; BB(0x005f30a3);
    /* 005f30a3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f30aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f30b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f30b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f30b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f30b8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f30be: call 0x5f30f0 */ r_esp -= 4; W32(r_esp, 0x5f30c3u); f_005f30f0();
    /* 005f30c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f30c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f30cd:; BB(0x005f30cd);
    /* 005f30cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f30d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f30d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f30d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f30da: ret  */ FN_RET(0x005f305c); r_esp += 4; return;
L_005f30db:; BB(0x005f30db);
    /* 005f30db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f30dd: jmp 0x5f30cd */ goto L_005f30cd;
L_005f30df:; BB(0x005f30df);
    /* 005f30df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f30e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f30e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f30eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f30ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f30ee: ret  */ FN_RET(0x005f305c); r_esp += 4; return;
}

void f_005f30f0(void) /* sub_5F30F0 */
{
    FN_ENTER(0x005f30f0);
    /* 005f30f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f30f1: mov esi, ecx */ r_esi = r_ecx;
    /* 005f30f3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f30f7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f30fb: mov ecx, esi */ r_ecx = r_esi;
    /* 005f30fd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f3102u); f_005e959c();
    /* 005f3102: mov ecx, dword ptr [esi + 0x1dc] */ r_ecx = R32((u32)(r_esi+0x1dcu));
    /* 005f3108: movzx edx, byte ptr [esi + 0xf3] */ r_edx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005f310f: mov dword ptr [esi], 0xb154a0 */ W32((u32)(r_esi), 0xb154a0u);
    /* 005f3115: or ecx, 0x241 */ {  u32 a = r_ecx; u32 b = 0x241u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005f311b: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f311e: jne 0x5f318b */ if (!fZ) goto L_005f318b;
L_005f3120:; BB(0x005f3120);
    /* 005f3120: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005f3127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3129: je 0x5f31f0 */ if (fZ) goto L_005f31f0;
L_005f312f:; BB(0x005f312f);
    /* 005f312f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3132: je 0x5f31de */ if (fZ) goto L_005f31de;
L_005f3138:; BB(0x005f3138);
    /* 005f3138: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f313b: je 0x5f3179 */ if (fZ) goto L_005f3179;
L_005f313d:; BB(0x005f313d);
    /* 005f313d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3140: jne 0x5f3154 */ if (!fZ) goto L_005f3154;
L_005f3142:; BB(0x005f3142);
    /* 005f3142: mov dword ptr [esi + 0x1a0], 0x3e800000 */ W32((u32)(r_esi+0x1a0u), 0x3e800000u);
    /* 005f314c: mov dword ptr [esi + 0x1dc], ecx */ W32((u32)(r_esi+0x1dcu), r_ecx);
    /* 005f3152: jmp 0x5f3191 */ goto L_005f3191;
L_005f3154:; BB(0x005f3154);
    /* 005f3154: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3157: jne 0x5f3171 */ if (!fZ) goto L_005f3171;
L_005f3159:; BB(0x005f3159);
    /* 005f3159: mov dword ptr [esi + 0x238], 0x5cc0e0 */ W32((u32)(r_esi+0x238u), 0x5cc0e0u);
    /* 005f3163: or ecx, 0x100022 */ {  u32 a = r_ecx; u32 b = 0x100022u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3169: mov dword ptr [esi + 0x1dc], ecx */ W32((u32)(r_esi+0x1dcu), r_ecx);
    /* 005f316f: jmp 0x5f3191 */ goto L_005f3191;
L_005f3171:; BB(0x005f3171);
    /* 005f3171: mov dword ptr [esi + 0x1dc], ecx */ W32((u32)(r_esi+0x1dcu), r_ecx);
    /* 005f3177: jmp 0x5f3191 */ goto L_005f3191;
L_005f3179:; BB(0x005f3179);
    /* 005f3179: mov dword ptr [esi + 0x1a0], 0x3e4ccccd */ W32((u32)(r_esi+0x1a0u), 0x3e4ccccdu);
    /* 005f3183: mov dword ptr [esi + 0x1dc], ecx */ W32((u32)(r_esi+0x1dcu), r_ecx);
    /* 005f3189: jmp 0x5f3191 */ goto L_005f3191;
L_005f318b:; BB(0x005f318b);
    /* 005f318b: mov dword ptr [esi + 0x1dc], ecx */ W32((u32)(r_esi+0x1dcu), r_ecx);
L_005f3191:; BB(0x005f3191);
    /* 005f3191: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3194: jne 0x5f31ba */ if (!fZ) goto L_005f31ba;
L_005f3196:; BB(0x005f3196);
    /* 005f3196: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005f319d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f31a0: jne 0x5f31ae */ if (!fZ) goto L_005f31ae;
L_005f31a2:; BB(0x005f31a2);
    /* 005f31a2: mov dword ptr [esi + 0x240], 1 */ W32((u32)(r_esi+0x240u), 0x1u);
    /* 005f31ac: jmp 0x5f31d8 */ goto L_005f31d8;
L_005f31ae:; BB(0x005f31ae);
    /* 005f31ae: mov dword ptr [esi + 0x240], 0 */ W32((u32)(r_esi+0x240u), 0x0u);
    /* 005f31b8: jmp 0x5f31d8 */ goto L_005f31d8;
L_005f31ba:; BB(0x005f31ba);
    /* 005f31ba: cmp edx, 0xe3 */ {  u32 a = r_edx; u32 b = 0xe3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f31c0: jne 0x5f31ce */ if (!fZ) goto L_005f31ce;
L_005f31c2:; BB(0x005f31c2);
    /* 005f31c2: mov dword ptr [esi + 0x240], 1 */ W32((u32)(r_esi+0x240u), 0x1u);
    /* 005f31cc: jmp 0x5f31d8 */ goto L_005f31d8;
L_005f31ce:; BB(0x005f31ce);
    /* 005f31ce: mov dword ptr [esi + 0x240], 0 */ W32((u32)(r_esi+0x240u), 0x0u);
L_005f31d8:; BB(0x005f31d8);
    /* 005f31d8: mov eax, esi */ r_eax = r_esi;
    /* 005f31da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f31db: ret 8 */ FN_RET(0x005f30f0); r_esp += 12; return;
L_005f31de:; BB(0x005f31de);
    /* 005f31de: mov dword ptr [esi + 0x1a0], 0x3dcccccd */ W32((u32)(r_esi+0x1a0u), 0x3dcccccdu);
    /* 005f31e8: mov dword ptr [esi + 0x1dc], ecx */ W32((u32)(r_esi+0x1dcu), r_ecx);
    /* 005f31ee: jmp 0x5f3191 */ goto L_005f3191;
L_005f31f0:; BB(0x005f31f0);
    /* 005f31f0: mov dword ptr [esi + 0x1a0], 0x3d4ccccd */ W32((u32)(r_esi+0x1a0u), 0x3d4ccccdu);
    /* 005f31fa: mov dword ptr [esi + 0x1dc], ecx */ W32((u32)(r_esi+0x1dcu), r_ecx);
    /* 005f3200: jmp 0x5f3191 */ goto L_005f3191;
}

void f_005f3204(void) /* sub_5F3204 */
{
    FN_ENTER(0x005f3204);
    /* 005f3204: mov dword ptr [0xa8df78], 0x3f800000 */ W32((u32)(0xa8df78u), 0x3f800000u);
    /* 005f320e: mov dword ptr [0xa8df7c], 0x41000000 */ W32((u32)(0xa8df7cu), 0x41000000u);
    /* 005f3218: mov dword ptr [0xa8df80], 0x3fc00000 */ W32((u32)(0xa8df80u), 0x3fc00000u);
    /* 005f3222: ret  */ FN_RET(0x005f3204); r_esp += 4; return;
}

void f_005f3224(void) /* sub_5F3224 */
{
    FN_ENTER(0x005f3224);
    /* 005f3224: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3225: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3227: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3229: push 0x8dcf94 */ { u32 v = 0x8dcf94u; r_esp -= 4; W32(r_esp, v); }
    /* 005f322e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3235: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f323c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f323f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3242: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f3245: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f3248: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f324b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f324e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f3251: mov eax, ecx */ r_eax = r_ecx;
    /* 005f3253: mov dword ptr [eax], 0xb15640 */ W32((u32)(r_eax), 0xb15640u);
    /* 005f3259: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f3260: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f3265u); f_005e61c8();
    /* 005f3265: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3268: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f326a: jne 0x5f327c */ if (!fZ) goto L_005f327c;
L_005f326c:; BB(0x005f326c);
    /* 005f326c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f326f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3276: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3279: ret 4 */ FN_RET(0x005f3224); r_esp += 8; return;
L_005f327c:; BB(0x005f327c);
    /* 005f327c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f327f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3280: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f3285u); f_005c2f74();
    /* 005f3285: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3286: jmp 0x5f326c */ goto L_005f326c;
}

void f_005f3288(void) /* sub_5F3288 */
{
    FN_ENTER(0x005f3288);
    /* 005f3288: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3289: mov ebp, esp */ r_ebp = r_esp;
    /* 005f328b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f328d: push 0x8dcfb0 */ { u32 v = 0x8dcfb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3292: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3298: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3299: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f32a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f32a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f32a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f32a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f32ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f32af: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f32b2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f32b5: mov eax, ecx */ r_eax = r_ecx;
    /* 005f32b7: mov dword ptr [eax], 0xb15740 */ W32((u32)(r_eax), 0xb15740u);
    /* 005f32bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f32c4: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f32c9u); f_005e61c8();
    /* 005f32c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f32cc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f32ce: jne 0x5f32e0 */ if (!fZ) goto L_005f32e0;
L_005f32d0:; BB(0x005f32d0);
    /* 005f32d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f32d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f32da: mov esp, ebp */ r_esp = r_ebp;
    /* 005f32dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f32dd: ret 4 */ FN_RET(0x005f3288); r_esp += 8; return;
L_005f32e0:; BB(0x005f32e0);
    /* 005f32e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f32e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f32e4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f32e9u); f_005c2f74();
    /* 005f32e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f32ea: jmp 0x5f32d0 */ goto L_005f32d0;
}

void f_005f32ec(void) /* sub_5F32EC */
{
    FN_ENTER(0x005f32ec);
    /* 005f32ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f32ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005f32ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f32f1: push 0x8dcfd8 */ { u32 v = 0x8dcfd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f32f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f32fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f32fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3304: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3307: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f330a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f330d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3310: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f3313: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3318: je 0x5f336f */ if (fZ) goto L_005f336f;
L_005f331a:; BB(0x005f331a);
    /* 005f331a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f3321: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3326: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f332bu); f_005caba4();
    /* 005f332b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f332c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f332f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3331: je 0x5f336b */ if (fZ) goto L_005f336b;
L_005f3333:; BB(0x005f3333);
    /* 005f3333: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f333a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f3341: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3344: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3348: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f334e: call 0x5f3380 */ r_esp -= 4; W32(r_esp, 0x5f3353u); f_005f3380();
    /* 005f3353: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3356: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f335d:; BB(0x005f335d);
    /* 005f335d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3360: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3367: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f336a: ret  */ FN_RET(0x005f32ec); r_esp += 4; return;
L_005f336b:; BB(0x005f336b);
    /* 005f336b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f336d: jmp 0x5f335d */ goto L_005f335d;
L_005f336f:; BB(0x005f336f);
    /* 005f336f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3371: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3374: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f337b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f337d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f337e: ret  */ FN_RET(0x005f32ec); r_esp += 4; return;
}

void f_005f3380(void) /* sub_5F3380 */
{
    FN_ENTER(0x005f3380);
    /* 005f3380: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f3381: mov edi, ecx */ r_edi = r_ecx;
    /* 005f3383: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3387: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f338b: mov ecx, edi */ r_ecx = r_edi;
    /* 005f338d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f3392u); f_005e959c();
    /* 005f3392: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005f3399: mov dword ptr [edi], 0xb15640 */ W32((u32)(r_edi), 0xb15640u);
    /* 005f339f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f33a2: jne 0x5f33d2 */ if (!fZ) goto L_005f33d2;
L_005f33a4:; BB(0x005f33a4);
    /* 005f33a4: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005f33ab: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f33ae: jne 0x5f33c6 */ if (!fZ) goto L_005f33c6;
L_005f33b0:; BB(0x005f33b0);
    /* 005f33b0: mov dword ptr [edi + 0x238], 0x5e4264 */ W32((u32)(r_edi+0x238u), 0x5e4264u);
    /* 005f33ba: mov dword ptr [edi + 0x208], 0x41300000 */ W32((u32)(r_edi+0x208u), 0x41300000u);
    /* 005f33c4: jmp 0x5f33dc */ goto L_005f33dc;
L_005f33c6:; BB(0x005f33c6);
    /* 005f33c6: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
    /* 005f33d0: jmp 0x5f33dc */ goto L_005f33dc;
L_005f33d2:; BB(0x005f33d2);
    /* 005f33d2: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
L_005f33dc:; BB(0x005f33dc);
    /* 005f33dc: mov eax, edi */ r_eax = r_edi;
    /* 005f33de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f33df: ret 8 */ FN_RET(0x005f3380); r_esp += 12; return;
}

void f_005f33e4(void) /* sub_5F33E4 */
{
    FN_ENTER(0x005f33e4);
    /* 005f33e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f33e5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f33e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f33e9: push 0x8dd000 */ { u32 v = 0x8dd000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f33ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f33f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f33f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f33fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f33ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3402: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3405: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3408: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f340b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f340e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3410: je 0x5f3467 */ if (fZ) goto L_005f3467;
L_005f3412:; BB(0x005f3412);
    /* 005f3412: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f3419: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f341e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f3423u); f_005caba4();
    /* 005f3423: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3424: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f3427: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3429: je 0x5f3463 */ if (fZ) goto L_005f3463;
L_005f342b:; BB(0x005f342b);
    /* 005f342b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f3432: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f3439: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f343c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f343f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3440: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3446: call 0x5f3478 */ r_esp -= 4; W32(r_esp, 0x5f344bu); f_005f3478();
    /* 005f344b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f344e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f3455:; BB(0x005f3455);
    /* 005f3455: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3458: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f345f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3461: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3462: ret  */ FN_RET(0x005f33e4); r_esp += 4; return;
L_005f3463:; BB(0x005f3463);
    /* 005f3463: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3465: jmp 0x5f3455 */ goto L_005f3455;
L_005f3467:; BB(0x005f3467);
    /* 005f3467: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3469: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f346c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3473: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3476: ret  */ FN_RET(0x005f33e4); r_esp += 4; return;
}

void f_005f3478(void) /* sub_5F3478 */
{
    FN_ENTER(0x005f3478);
    /* 005f3478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3479: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f347b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f347f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3483: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3485: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f348au); f_005e959c();
    /* 005f348a: mov dword ptr [ebp], 0xb15740 */ W32((u32)(r_ebp), 0xb15740u);
    /* 005f3491: mov eax, ebp */ r_eax = r_ebp;
    /* 005f3493: mov dword ptr [ebp + 0x234], 0x5cf288 */ W32((u32)(r_ebp+0x234u), 0x5cf288u);
    /* 005f349d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f349e: ret 8 */ FN_RET(0x005f3478); r_esp += 12; return;
}

void f_005f34a4(void) /* sub_5F34A4 */
{
    FN_ENTER(0x005f34a4);
    /* 005f34a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f34a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f34a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f34a9: call 0x5f34c8 */ r_esp -= 4; W32(r_esp, 0x5f34aeu); f_005f34c8();
    /* 005f34ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f34b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f34b4: jne 0x5f34ba */ if (!fZ) goto L_005f34ba;
L_005f34b6:; BB(0x005f34b6);
    /* 005f34b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f34b7: ret 4 */ FN_RET(0x005f34a4); r_esp += 8; return;
L_005f34ba:; BB(0x005f34ba);
    /* 005f34ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f34bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f34c0u); f_005c2f74();
    /* 005f34c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f34c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f34c2: ret 4 */ FN_RET(0x005f34a4); r_esp += 8; return;
}

void f_005f34c8(void) /* sub_5F34C8 */
{
    FN_ENTER(0x005f34c8);
    /* 005f34c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f34c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f34cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f34cd: push 0x8dd01c */ { u32 v = 0x8dd01cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f34d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f34d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f34d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f34e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f34e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f34e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f34e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f34ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f34ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f34f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f34f5: mov dword ptr [ecx], 0xb158a0 */ W32((u32)(r_ecx), 0xb158a0u);
    /* 005f34fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f3502: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f3507u); f_005e61c8();
    /* 005f3507: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f350a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3511: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3514: ret  */ FN_RET(0x005f34c8); r_esp += 4; return;
}

void f_005f3518(void) /* sub_5F3518 */
{
    FN_ENTER(0x005f3518);
    /* 005f3518: mov dword ptr [ecx + 0x244], 0x3dcccccd */ W32((u32)(r_ecx+0x244u), 0x3dcccccdu);
    /* 005f3522: ret  */ FN_RET(0x005f3518); r_esp += 4; return;
}

void f_005f3524(void) /* sub_5F3524 */
{
    FN_ENTER(0x005f3524);
    /* 005f3524: fld dword ptr [0x92da70] */ FPUSH(R_F32((u32)(0x92da70u)));
    /* 005f352a: fld dword ptr [ecx + 0x244] */ FPUSH(R_F32((u32)(r_ecx+0x244u)));
    /* 005f3530: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f3532: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f3534: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f3535: jae 0x5f355d */ if (!fC) goto L_005f355d;
L_005f3537:; BB(0x005f3537);
    /* 005f3537: fld dword ptr [0x92da6c] */ FPUSH(R_F32((u32)(0x92da6cu)));
    /* 005f353d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005f353f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005f3541: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005f3543: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f3545: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f3546: ja 0x5f3556 */ if ((!fC&&!fZ)) goto L_005f3556;
L_005f3548:; BB(0x005f3548);
    /* 005f3548: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f354a: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005f354f: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 005f3555: ret  */ FN_RET(0x005f3524); r_esp += 4; return;
L_005f3556:; BB(0x005f3556);
    /* 005f3556: fstp dword ptr [ecx + 0x244] */ W_F32((u32)(r_ecx+0x244u), ST(0)); FPOP();
    /* 005f355c: ret  */ FN_RET(0x005f3524); r_esp += 4; return;
L_005f355d:; BB(0x005f355d);
    /* 005f355d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005f355f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f3561: ret  */ FN_RET(0x005f3524); r_esp += 4; return;
}

void f_005f3564(void) /* sub_5F3564 */
{
    FN_ENTER(0x005f3564);
    /* 005f3564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3565: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3569: push 0x8dd044 */ { u32 v = 0x8dd044u; r_esp -= 4; W32(r_esp, v); }
    /* 005f356e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f357c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f357f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3582: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3585: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3588: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f358b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f358e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3590: je 0x5f35e7 */ if (fZ) goto L_005f35e7;
L_005f3592:; BB(0x005f3592);
    /* 005f3592: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f3599: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f359e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f35a3u); f_005caba4();
    /* 005f35a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f35a4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f35a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f35a9: je 0x5f35e3 */ if (fZ) goto L_005f35e3;
L_005f35ab:; BB(0x005f35ab);
    /* 005f35ab: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f35b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f35b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f35bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f35bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f35c0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f35c6: call 0x5f35f8 */ r_esp -= 4; W32(r_esp, 0x5f35cbu); f_005f35f8();
    /* 005f35cb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f35ce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f35d5:; BB(0x005f35d5);
    /* 005f35d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f35d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f35df: mov esp, ebp */ r_esp = r_ebp;
    /* 005f35e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f35e2: ret  */ FN_RET(0x005f3564); r_esp += 4; return;
L_005f35e3:; BB(0x005f35e3);
    /* 005f35e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f35e5: jmp 0x5f35d5 */ goto L_005f35d5;
L_005f35e7:; BB(0x005f35e7);
    /* 005f35e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f35e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f35ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f35f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f35f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f35f6: ret  */ FN_RET(0x005f3564); r_esp += 4; return;
}

void f_005f35f8(void) /* sub_5F35F8 */
{
    FN_ENTER(0x005f35f8);
    /* 005f35f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f35f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f35fb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f35ff: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3603: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3605: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f360au); f_005e959c();
    /* 005f360a: mov dword ptr [ebp], 0xb158a0 */ W32((u32)(r_ebp), 0xb158a0u);
    /* 005f3611: mov eax, ebp */ r_eax = r_ebp;
    /* 005f3613: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005f361d: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005f3627: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 005f3631: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3632: ret 8 */ FN_RET(0x005f35f8); r_esp += 12; return;
}

void f_005f3638(void) /* sub_5F3638 */
{
    FN_ENTER(0x005f3638);
    /* 005f3638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3639: mov ebp, esp */ r_ebp = r_esp;
    /* 005f363b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f363d: push 0x8dd060 */ { u32 v = 0x8dd060u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3642: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3649: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3650: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3653: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3656: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f3659: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f365c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f365f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f3662: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f3665: mov eax, ecx */ r_eax = r_ecx;
    /* 005f3667: mov dword ptr [eax], 0xb15a20 */ W32((u32)(r_eax), 0xb15a20u);
    /* 005f366d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f3674: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f3679u); f_005e61c8();
    /* 005f3679: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f367c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f367e: jne 0x5f3690 */ if (!fZ) goto L_005f3690;
L_005f3680:; BB(0x005f3680);
    /* 005f3680: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3683: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f368a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f368c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f368d: ret 4 */ FN_RET(0x005f3638); r_esp += 8; return;
L_005f3690:; BB(0x005f3690);
    /* 005f3690: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f3693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3694: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f3699u); f_005c2f74();
    /* 005f3699: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f369a: jmp 0x5f3680 */ goto L_005f3680;
}

void f_005f369c(void) /* sub_5F369C */
{
    FN_ENTER(0x005f369c);
    /* 005f369c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f369d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f36a0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f36a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f36a4: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f36a9u); f_005e90b0();
    /* 005f36a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f36ab: je 0x5f36d4 */ if (fZ) goto L_005f36d4;
L_005f36ad:; BB(0x005f36ad);
    /* 005f36ad: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005f36b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f36b5: je 0x5f36d4 */ if (fZ) goto L_005f36d4;
L_005f36b7:; BB(0x005f36b7);
    /* 005f36b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f36b9: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f36bf: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5f36c4u); f_0069792c();
    /* 005f36c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f36c6: je 0x5f36d4 */ if (fZ) goto L_005f36d4;
L_005f36c8:; BB(0x005f36c8);
    /* 005f36c8: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 005f36cf: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f36d2: je 0x5f36f8 */ if (fZ) goto L_005f36f8;
L_005f36d4:; BB(0x005f36d4);
    /* 005f36d4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f36d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f36d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f36da: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f36dfu); f_005e7534();
    /* 005f36df: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f36e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f36e4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f36e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f36e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f36e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f36ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f36eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f36ed: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f36f3u); call_ind(t); }
    /* 005f36f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f36f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f36f7: ret  */ FN_RET(0x005f369c); r_esp += 4; return;
L_005f36f8:; BB(0x005f36f8);
    /* 005f36f8: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005f36ff: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3702: jne 0x5f36d4 */ if (!fZ) goto L_005f36d4;
L_005f3704:; BB(0x005f3704);
    /* 005f3704: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005f370a: mov edx, dword ptr [eax + 0x8d0] */ r_edx = R32((u32)(r_eax+0x8d0u));
    /* 005f3710: mov dword ptr [ebx + 0x240], edx */ W32((u32)(r_ebx+0x240u), r_edx);
    /* 005f3716: mov edx, dword ptr [eax + 0x8d4] */ r_edx = R32((u32)(r_eax+0x8d4u));
    /* 005f371c: mov dword ptr [ebx + 0x244], edx */ W32((u32)(r_ebx+0x244u), r_edx);
    /* 005f3722: mov edx, dword ptr [eax + 0x8d8] */ r_edx = R32((u32)(r_eax+0x8d8u));
    /* 005f3728: mov dword ptr [ebx + 0x248], edx */ W32((u32)(r_ebx+0x248u), r_edx);
    /* 005f372e: mov edx, dword ptr [eax + 0x8dc] */ r_edx = R32((u32)(r_eax+0x8dcu));
    /* 005f3734: mov dword ptr [ebx + 0x24c], edx */ W32((u32)(r_ebx+0x24cu), r_edx);
    /* 005f373a: mov edx, dword ptr [eax + 0x8e0] */ r_edx = R32((u32)(r_eax+0x8e0u));
    /* 005f3740: mov dword ptr [ebx + 0x250], edx */ W32((u32)(r_ebx+0x250u), r_edx);
    /* 005f3746: mov edx, dword ptr [eax + 0x8e4] */ r_edx = R32((u32)(r_eax+0x8e4u));
    /* 005f374c: mov dword ptr [ebx + 0x254], edx */ W32((u32)(r_ebx+0x254u), r_edx);
    /* 005f3752: mov edx, dword ptr [eax + 0x8e8] */ r_edx = R32((u32)(r_eax+0x8e8u));
    /* 005f3758: mov dword ptr [ebx + 0x258], edx */ W32((u32)(r_ebx+0x258u), r_edx);
    /* 005f375e: mov edx, dword ptr [eax + 0x8ec] */ r_edx = R32((u32)(r_eax+0x8ecu));
    /* 005f3764: mov dword ptr [ebx + 0x25c], edx */ W32((u32)(r_ebx+0x25cu), r_edx);
    /* 005f376a: mov edx, dword ptr [eax + 0x8f0] */ r_edx = R32((u32)(r_eax+0x8f0u));
    /* 005f3770: mov dword ptr [ebx + 0x260], edx */ W32((u32)(r_ebx+0x260u), r_edx);
    /* 005f3776: mov edx, dword ptr [eax + 0x8f4] */ r_edx = R32((u32)(r_eax+0x8f4u));
    /* 005f377c: mov dword ptr [ebx + 0x264], edx */ W32((u32)(r_ebx+0x264u), r_edx);
    /* 005f3782: mov eax, dword ptr [eax + 0x8f8] */ r_eax = R32((u32)(r_eax+0x8f8u));
    /* 005f3788: mov dword ptr [ebx + 0x268], eax */ W32((u32)(r_ebx+0x268u), r_eax);
    /* 005f378e: lea eax, [ebx + 0x26c] */ r_eax = (u32)(r_ebx+0x26cu);
    /* 005f3794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3795: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f3797: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f379cu); f_005e7534();
    /* 005f379c: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5f37a1u); f_0077bab4();
    /* 005f37a1: mov ecx, eax */ r_ecx = r_eax;
    /* 005f37a3: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005f37a8: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f37aa: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005f37ad: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005f37b0: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f37b2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f37b5: jne 0x5f37e3 */ if (!fZ) goto L_005f37e3;
L_005f37b7:; BB(0x005f37b7);
    /* 005f37b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f37b9: mov eax, dword ptr [ebx + 0x1dc] */ r_eax = R32((u32)(r_ebx+0x1dcu));
    /* 005f37bf: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f37c2: mov dword ptr [ebx + 0x1dc], eax */ W32((u32)(r_ebx+0x1dcu), r_eax);
    /* 005f37c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f37ca: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5f37cfu); f_005c36cc();
    /* 005f37cf: mov eax, dword ptr [ebx + 0x1dc] */ r_eax = R32((u32)(r_ebx+0x1dcu));
    /* 005f37d5: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f37d8: mov dword ptr [ebx + 0x1dc], eax */ W32((u32)(r_ebx+0x1dcu), r_eax);
    /* 005f37de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f37e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f37e2: ret  */ FN_RET(0x005f369c); r_esp += 4; return;
L_005f37e3:; BB(0x005f37e3);
    /* 005f37e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f37e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f37e7: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5f37ecu); f_005c36cc();
    /* 005f37ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f37ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f37f0: ret  */ FN_RET(0x005f369c); r_esp += 4; return;
}

void f_005f37f4(void) /* sub_5F37F4 */
{
    FN_ENTER(0x005f37f4);
    /* 005f37f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f37f5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f37f8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f37fa: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005f3800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3802: je 0x5f3909 */ if (fZ) goto L_005f3909;
L_005f3808:; BB(0x005f3808);
    /* 005f3808: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5f380du); f_00807d60();
    /* 005f380d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f380f: je 0x5f3909 */ if (fZ) goto L_005f3909;
L_005f3815:; BB(0x005f3815);
    /* 005f3815: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 005f381b: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005f3821: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3827: jne 0x5f3909 */ if (!fZ) goto L_005f3909;
L_005f382d:; BB(0x005f382d);
    /* 005f382d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005f3831: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3833: jne 0x5f3852 */ if (!fZ) goto L_005f3852;
L_005f3835:; BB(0x005f3835);
    /* 005f3835: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3837: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f383a: lea ecx, [ebp + 0x26c] */ r_ecx = (u32)(r_ebp+0x26cu);
    /* 005f3840: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f3842: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3843: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3844: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3845: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3847: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f384du); call_ind(t); }
    /* 005f384d: jmp 0x5f3909 */ goto L_005f3909;
L_005f3852:; BB(0x005f3852);
    /* 005f3852: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005f3856: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3859: jne 0x5f38f1 */ if (!fZ) goto L_005f38f1;
L_005f385f:; BB(0x005f385f);
    /* 005f385f: mov ecx, dword ptr [ebp + 0x240] */ r_ecx = R32((u32)(r_ebp+0x240u));
    /* 005f3865: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f3867: jl 0x5f386e */ if ((fS!=fO)) goto L_005f386e;
L_005f3869:; BB(0x005f3869);
    /* 005f3869: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f386c: jle 0x5f3890 */ if ((fZ||fS!=fO)) goto L_005f3890;
L_005f386e:; BB(0x005f386e);
    /* 005f386e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f3871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3872: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3874: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f3879u); f_005e7534();
    /* 005f3879: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f387c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f387e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f3881: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f3883: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3885: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3886: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3888: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f388eu); call_ind(t); }
    /* 005f388e: jmp 0x5f3909 */ goto L_005f3909;
L_005f3890:; BB(0x005f3890);
    /* 005f3890: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005f3892: jle 0x5f386e */ if ((fZ||fS!=fO)) goto L_005f386e;
L_005f3894:; BB(0x005f3894);
    /* 005f3894: mov edx, 0 */ r_edx = 0x0u;
    /* 005f3899: jl 0x5f38a0 */ if ((fS!=fO)) goto L_005f38a0;
L_005f389b:; BB(0x005f389b);
    /* 005f389b: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f389e: jle 0x5f38a2 */ if ((fZ||fS!=fO)) goto L_005f38a2;
L_005f38a0:; BB(0x005f38a0);
    /* 005f38a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005f38a2:; BB(0x005f38a2);
    /* 005f38a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f38a4: je 0x5f3909 */ if (fZ) goto L_005f3909;
L_005f38a6:; BB(0x005f38a6);
    /* 005f38a6: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005f38aa: mov ebx, ebp */ r_ebx = r_ebp;
    /* 005f38ac: mov ebp, edx */ r_ebp = r_edx;
    /* 005f38ae: jmp 0x5f38b6 */ goto L_005f38b6;
L_005f38b0:; BB(0x005f38b0);
    /* 005f38b0: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
L_005f38b6:; BB(0x005f38b6);
    /* 005f38b6: movzx ecx, word ptr [ebx + ebp*4 + 0x244] */ r_ecx = (u32)R16((u32)(r_ebx+r_ebp*4+0x244u));
    /* 005f38be: movsx edx, word ptr [ebx + ebp*4 + 0x246] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0x246u));
    /* 005f38c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f38c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f38c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f38c9: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f38cf: call 0x5cef2c */ r_esp -= 4; W32(r_esp, 0x5f38d4u); f_005cef2c();
    /* 005f38d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f38d7: mov eax, dword ptr [ebx + 0x240] */ r_eax = R32((u32)(r_ebx+0x240u));
    /* 005f38dd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f38e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f38e2: jl 0x5f38e9 */ if ((fS!=fO)) goto L_005f38e9;
L_005f38e4:; BB(0x005f38e4);
    /* 005f38e4: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f38e7: jle 0x5f38eb */ if ((fZ||fS!=fO)) goto L_005f38eb;
L_005f38e9:; BB(0x005f38e9);
    /* 005f38e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f38eb:; BB(0x005f38eb);
    /* 005f38eb: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f38ed: jne 0x5f38b0 */ if (!fZ) goto L_005f38b0;
L_005f38ef:; BB(0x005f38ef);
    /* 005f38ef: jmp 0x5f3910 */ goto L_005f3910;
L_005f38f1:; BB(0x005f38f1);
    /* 005f38f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f38f3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f38f6: lea ecx, [ebp + 0x26c] */ r_ecx = (u32)(r_ebp+0x26cu);
    /* 005f38fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f38fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f38ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3900: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3901: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3903: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f3909u); call_ind(t); }
L_005f3909:; BB(0x005f3909);
    /* 005f3909: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f390c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f390d: ret 4 */ FN_RET(0x005f37f4); r_esp += 8; return;
L_005f3910:; BB(0x005f3910);
    /* 005f3910: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005f3914: jmp 0x5f3909 */ goto L_005f3909;
}

void f_005f3918(void) /* sub_5F3918 */
{
    FN_ENTER(0x005f3918);
    /* 005f3918: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3919: mov ebp, esp */ r_ebp = r_esp;
    /* 005f391b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f391d: push 0x8dd088 */ { u32 v = 0x8dd088u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3922: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3929: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3930: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3933: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3936: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3939: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f393c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f393f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3942: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3944: je 0x5f399b */ if (fZ) goto L_005f399b;
L_005f3946:; BB(0x005f3946);
    /* 005f3946: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f394d: push 0x278 */ { u32 v = 0x278u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3952: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f3957u); f_005caba4();
    /* 005f3957: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3958: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f395b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f395d: je 0x5f3997 */ if (fZ) goto L_005f3997;
L_005f395f:; BB(0x005f395f);
    /* 005f395f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f3966: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f396d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3970: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3974: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f397a: call 0x5f39ac */ r_esp -= 4; W32(r_esp, 0x5f397fu); f_005f39ac();
    /* 005f397f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3982: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f3989:; BB(0x005f3989);
    /* 005f3989: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f398c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3993: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3996: ret  */ FN_RET(0x005f3918); r_esp += 4; return;
L_005f3997:; BB(0x005f3997);
    /* 005f3997: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3999: jmp 0x5f3989 */ goto L_005f3989;
L_005f399b:; BB(0x005f399b);
    /* 005f399b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f399d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f39a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f39a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f39a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f39aa: ret  */ FN_RET(0x005f3918); r_esp += 4; return;
}

void f_005f39ac(void) /* sub_5F39AC */
{
    FN_ENTER(0x005f39ac);
    /* 005f39ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f39ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005f39af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f39b1: push 0x8dd0a4 */ { u32 v = 0x8dd0a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f39b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f39bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f39bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f39c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f39c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f39ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f39cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f39d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f39d3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f39d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f39d9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f39dc: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f39e1u); f_005e959c();
    /* 005f39e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f39e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f39eb: mov dword ptr [ecx], 0xb15a20 */ W32((u32)(r_ecx), 0xb15a20u);
    /* 005f39f1: lea esi, [ecx + 0x240] */ r_esi = (u32)(r_ecx+0x240u);
    /* 005f39f7: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f39fd: mov ebx, 0xa */ r_ebx = 0xau;
L_005f3a02:; BB(0x005f3a02);
    /* 005f3a02: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005f3a07: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 005f3a0a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f3a0c: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005f3a10: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3a13: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005f3a16: jne 0x5f3a02 */ if (!fZ) goto L_005f3a02;
L_005f3a18:; BB(0x005f3a18);
    /* 005f3a18: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3a1a: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x5f3a1fu); f_006a2e30();
    /* 005f3a1f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3a22: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f3a25: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f3a28: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f3a2b: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005f3a31: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3a34: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
    /* 005f3a3a: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005f3a3f: mov word ptr [eax + 0x1f0], cx */ W16((u32)(r_eax+0x1f0u), (u16)r_ecx);
    /* 005f3a46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3a49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3a50: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3a52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3a53: ret 8 */ FN_RET(0x005f39ac); r_esp += 12; return;
}

void f_005f3a58(void) /* sub_5F3A58 */
{
    FN_ENTER(0x005f3a58);
    /* 005f3a58: mov dword ptr [0xa8df88], 0x3f800000 */ W32((u32)(0xa8df88u), 0x3f800000u);
    /* 005f3a62: mov dword ptr [0xa8df8c], 0x41000000 */ W32((u32)(0xa8df8cu), 0x41000000u);
    /* 005f3a6c: mov dword ptr [0xa8df90], 0x3fc00000 */ W32((u32)(0xa8df90u), 0x3fc00000u);
    /* 005f3a76: ret  */ FN_RET(0x005f3a58); r_esp += 4; return;
}

void f_005f3a78(void) /* sub_5F3A78 */
{
    FN_ENTER(0x005f3a78);
    /* 005f3a78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f3a7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f3a7d: call 0x5f3a9c */ r_esp -= 4; W32(r_esp, 0x5f3a82u); f_005f3a9c();
    /* 005f3a82: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f3a86: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3a88: jne 0x5f3a8e */ if (!fZ) goto L_005f3a8e;
L_005f3a8a:; BB(0x005f3a8a);
    /* 005f3a8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f3a8b: ret 4 */ FN_RET(0x005f3a78); r_esp += 8; return;
L_005f3a8e:; BB(0x005f3a8e);
    /* 005f3a8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a8f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f3a94u); f_005c2f74();
    /* 005f3a94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3a95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f3a96: ret 4 */ FN_RET(0x005f3a78); r_esp += 8; return;
}

void f_005f3a9c(void) /* sub_5F3A9C */
{
    FN_ENTER(0x005f3a9c);
    /* 005f3a9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a9d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3a9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3aa1: push 0x8dd0c0 */ { u32 v = 0x8dd0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3aa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3aad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3ab4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3ab7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3aba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3abd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3ac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f3ac3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f3ac6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3ac9: mov dword ptr [ecx], 0xb15b80 */ W32((u32)(r_ecx), 0xb15b80u);
    /* 005f3acf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f3ad6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f3adbu); f_005e61c8();
    /* 005f3adb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3ade: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3ae5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3ae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3ae8: ret  */ FN_RET(0x005f3a9c); r_esp += 4; return;
}

void f_005f3aec(void) /* sub_5F3AEC */
{
    FN_ENTER(0x005f3aec);
    /* 005f3aec: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3af1: add ecx, 0x248 */ {  u32 a = r_ecx; u32 b = 0x248u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3af7: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 005f3afc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3afd: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5f3b02u); f_005dd728();
    /* 005f3b02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f3b05: ret  */ FN_RET(0x005f3aec); r_esp += 4; return;
}

void f_005f3b08(void) /* sub_5F3B08 */
{
    FN_ENTER(0x005f3b08);
    /* 005f3b08: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b0d: add ecx, 0x248 */ {  u32 a = r_ecx; u32 b = 0x248u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3b13: push 0xbf19999a */ { u32 v = 0xbf19999au; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b19: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5f3b1eu); f_005dd728();
    /* 005f3b1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f3b21: ret  */ FN_RET(0x005f3b08); r_esp += 4; return;
}

void f_005f3b24(void) /* sub_5F3B24 */
{
    FN_ENTER(0x005f3b24);
    /* 005f3b24: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f3b29: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f3b2c: je 0x5f3b2f */ if (fZ) goto L_005f3b2f;
L_005f3b2e:; BB(0x005f3b2e);
    /* 005f3b2e: ret  */ FN_RET(0x005f3b24); r_esp += 4; return;
L_005f3b2f:; BB(0x005f3b2f);
    /* 005f3b2f: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3b35: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5f3b3au); f_00831290();
    /* 005f3b3a: ret  */ FN_RET(0x005f3b24); r_esp += 4; return;
}

void f_005f3b3c(void) /* sub_5F3B3C */
{
    FN_ENTER(0x005f3b3c);
    /* 005f3b3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b3d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3b3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b41: push 0x8dd0e8 */ { u32 v = 0x8dd0e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3b54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3b57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3b5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3b5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3b60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f3b63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3b68: je 0x5f3bbf */ if (fZ) goto L_005f3bbf;
L_005f3b6a:; BB(0x005f3b6a);
    /* 005f3b6a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f3b71: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b76: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f3b7bu); f_005caba4();
    /* 005f3b7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3b7c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f3b7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3b81: je 0x5f3bbb */ if (fZ) goto L_005f3bbb;
L_005f3b83:; BB(0x005f3b83);
    /* 005f3b83: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f3b8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f3b91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3b94: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3b97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b98: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3b9e: call 0x5f3bd0 */ r_esp -= 4; W32(r_esp, 0x5f3ba3u); f_005f3bd0();
    /* 005f3ba3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3ba6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f3bad:; BB(0x005f3bad);
    /* 005f3bad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3bb0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3bb7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3bb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3bba: ret  */ FN_RET(0x005f3b3c); r_esp += 4; return;
L_005f3bbb:; BB(0x005f3bbb);
    /* 005f3bbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3bbd: jmp 0x5f3bad */ goto L_005f3bad;
L_005f3bbf:; BB(0x005f3bbf);
    /* 005f3bbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3bc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3bc4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3bcb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3bcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3bce: ret  */ FN_RET(0x005f3b3c); r_esp += 4; return;
}

void f_005f3bd0(void) /* sub_5F3BD0 */
{
    FN_ENTER(0x005f3bd0);
    /* 005f3bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3bd1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f3bd3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3bd7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3bdb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3bdd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f3be2u); f_005e959c();
    /* 005f3be2: mov dword ptr [ebp], 0xb15b80 */ W32((u32)(r_ebp), 0xb15b80u);
    /* 005f3be9: mov eax, ebp */ r_eax = r_ebp;
    /* 005f3beb: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 005f3bf5: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 005f3bff: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 005f3c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3c0a: ret 8 */ FN_RET(0x005f3bd0); r_esp += 12; return;
}

void f_005f3c10(void) /* sub_5F3C10 */
{
    FN_ENTER(0x005f3c10);
    /* 005f3c10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f3c13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f3c15: call 0x5f3c34 */ r_esp -= 4; W32(r_esp, 0x5f3c1au); f_005f3c34();
    /* 005f3c1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f3c1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3c20: jne 0x5f3c26 */ if (!fZ) goto L_005f3c26;
L_005f3c22:; BB(0x005f3c22);
    /* 005f3c22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f3c23: ret 4 */ FN_RET(0x005f3c10); r_esp += 8; return;
L_005f3c26:; BB(0x005f3c26);
    /* 005f3c26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c27: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f3c2cu); f_005c2f74();
    /* 005f3c2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3c2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f3c2e: ret 4 */ FN_RET(0x005f3c10); r_esp += 8; return;
}

void f_005f3c34(void) /* sub_5F3C34 */
{
    FN_ENTER(0x005f3c34);
    /* 005f3c34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c35: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3c37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c39: push 0x8dd104 */ { u32 v = 0x8dd104u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3c44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3c4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3c4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3c52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3c55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3c58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f3c5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f3c5e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3c61: mov dword ptr [ecx], 0xb15ce0 */ W32((u32)(r_ecx), 0xb15ce0u);
    /* 005f3c67: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f3c6e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f3c73u); f_005e61c8();
    /* 005f3c73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3c76: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3c7d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3c7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3c80: ret  */ FN_RET(0x005f3c34); r_esp += 4; return;
}

void f_005f3c84(void) /* sub_5F3C84 */
{
    FN_ENTER(0x005f3c84);
    /* 005f3c84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c85: mov esi, ecx */ r_esi = r_ecx;
    /* 005f3c87: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005f3c8e: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f3c91: jne 0x5f3d5a */ if (!fZ) goto L_005f3d5a;
L_005f3c97:; BB(0x005f3c97);
    /* 005f3c97: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005f3c9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3ca0: jne 0x5f3cec */ if (!fZ) goto L_005f3cec;
L_005f3ca2:; BB(0x005f3ca2);
    /* 005f3ca2: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3ca4: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f3ca9u); f_005e90b0();
    /* 005f3ca9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3cab: je 0x5f3ce3 */ if (fZ) goto L_005f3ce3;
L_005f3cad:; BB(0x005f3cad);
    /* 005f3cad: push 0x3d8f5c29 */ { u32 v = 0x3d8f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3cb2: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3cb4: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5f3cb9u); f_005e75bc();
    /* 005f3cb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3cbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3cbd: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3cbf: push 0x40600000 */ { u32 v = 0x40600000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3cc4: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x5f3cc9u); f_005e6a88();
    /* 005f3cc9: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005f3ccf: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f3cd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f3cd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3cd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3cd7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3cd9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5f3cdeu); f_00814298();
    /* 005f3cde: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f3ce1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f3ce2: ret  */ FN_RET(0x005f3c84); r_esp += 4; return;
L_005f3ce3:; BB(0x005f3ce3);
    /* 005f3ce3: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3ce5: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f3ceau); f_005e90e8();
    /* 005f3cea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f3ceb: ret  */ FN_RET(0x005f3c84); r_esp += 4; return;
L_005f3cec:; BB(0x005f3cec);
    /* 005f3cec: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f3cef: jne 0x5f3d5a */ if (!fZ) goto L_005f3d5a;
L_005f3cf1:; BB(0x005f3cf1);
    /* 005f3cf1: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3cf3: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f3cf8u); f_005e90b0();
    /* 005f3cf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3cfa: je 0x5f3d32 */ if (fZ) goto L_005f3d32;
L_005f3cfc:; BB(0x005f3cfc);
    /* 005f3cfc: push 0x3d8f5c29 */ { u32 v = 0x3d8f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d01: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3d03: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5f3d08u); f_005e75bc();
    /* 005f3d08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d0c: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3d0e: push 0x3fe00000 */ { u32 v = 0x3fe00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d13: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x5f3d18u); f_005e6a88();
    /* 005f3d18: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005f3d1e: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f3d21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f3d23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d26: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d28: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5f3d2du); f_00814298();
    /* 005f3d2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f3d30: jmp 0x5f3d39 */ goto L_005f3d39;
L_005f3d32:; BB(0x005f3d32);
    /* 005f3d32: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3d34: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f3d39u); f_005e90e8();
L_005f3d39:; BB(0x005f3d39);
    /* 005f3d39: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3d3b: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5f3d40u); f_005e7f6c();
    /* 005f3d40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3d42: jne 0x5f3d5a */ if (!fZ) goto L_005f3d5a;
L_005f3d44:; BB(0x005f3d44);
    /* 005f3d44: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d49: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d4c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3d52: call 0x5cc64c */ r_esp -= 4; W32(r_esp, 0x5f3d57u); f_005cc64c();
    /* 005f3d57: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f3d5a:; BB(0x005f3d5a);
    /* 005f3d5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f3d5b: ret  */ FN_RET(0x005f3c84); r_esp += 4; return;
}

void f_005f3d5c(void) /* sub_5F3D5C */
{
    FN_ENTER(0x005f3d5c);
    /* 005f3d5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d5d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3d5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d61: push 0x8dd12c */ { u32 v = 0x8dd12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3d74: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3d77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3d7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3d7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3d80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f3d83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3d86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3d88: je 0x5f3ddf */ if (fZ) goto L_005f3ddf;
L_005f3d8a:; BB(0x005f3d8a);
    /* 005f3d8a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f3d91: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3d96: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f3d9bu); f_005caba4();
    /* 005f3d9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3d9c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f3d9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3da1: je 0x5f3ddb */ if (fZ) goto L_005f3ddb;
L_005f3da3:; BB(0x005f3da3);
    /* 005f3da3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f3daa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f3db1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3db4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3db8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3dbe: call 0x5f3df0 */ r_esp -= 4; W32(r_esp, 0x5f3dc3u); f_005f3df0();
    /* 005f3dc3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3dc6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f3dcd:; BB(0x005f3dcd);
    /* 005f3dcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3dd0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3dd7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3dd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3dda: ret  */ FN_RET(0x005f3d5c); r_esp += 4; return;
L_005f3ddb:; BB(0x005f3ddb);
    /* 005f3ddb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3ddd: jmp 0x5f3dcd */ goto L_005f3dcd;
L_005f3ddf:; BB(0x005f3ddf);
    /* 005f3ddf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3de1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3de4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3deb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3ded: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3dee: ret  */ FN_RET(0x005f3d5c); r_esp += 4; return;
}

void f_005f3df0(void) /* sub_5F3DF0 */
{
    FN_ENTER(0x005f3df0);
    /* 005f3df0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f3df1: mov edi, ecx */ r_edi = r_ecx;
    /* 005f3df3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3df7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f3dfb: mov ecx, edi */ r_ecx = r_edi;
    /* 005f3dfd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f3e02u); f_005e959c();
    /* 005f3e02: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005f3e09: mov dword ptr [edi], 0xb15ce0 */ W32((u32)(r_edi), 0xb15ce0u);
    /* 005f3e0f: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f3e12: jne 0x5f3e47 */ if (!fZ) goto L_005f3e47;
L_005f3e14:; BB(0x005f3e14);
    /* 005f3e14: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005f3e1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3e1d: je 0x5f3e24 */ if (fZ) goto L_005f3e24;
L_005f3e1f:; BB(0x005f3e1f);
    /* 005f3e1f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f3e22: jne 0x5f3e47 */ if (!fZ) goto L_005f3e47;
L_005f3e24:; BB(0x005f3e24);
    /* 005f3e24: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005f3e2a: mov dword ptr [edi + 0x238], 0x5cf44c */ W32((u32)(r_edi+0x238u), 0x5cf44cu);
    /* 005f3e34: or eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3e37: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005f3e3d: mov dword ptr [edi + 0x208], 0x41200000 */ W32((u32)(r_edi+0x208u), 0x41200000u);
L_005f3e47:; BB(0x005f3e47);
    /* 005f3e47: mov eax, edi */ r_eax = r_edi;
    /* 005f3e49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f3e4a: ret 8 */ FN_RET(0x005f3df0); r_esp += 12; return;
}

void f_005f3e50(void) /* sub_5F3E50 */
{
    FN_ENTER(0x005f3e50);
    /* 005f3e50: mov dword ptr [0xa8df94], 0x3f800000 */ W32((u32)(0xa8df94u), 0x3f800000u);
    /* 005f3e5a: mov dword ptr [0xa8df98], 0x41000000 */ W32((u32)(0xa8df98u), 0x41000000u);
    /* 005f3e64: mov dword ptr [0xa8df9c], 0x3fc00000 */ W32((u32)(0xa8df9cu), 0x3fc00000u);
    /* 005f3e6e: ret  */ FN_RET(0x005f3e50); r_esp += 4; return;
}

void f_005f3e70(void) /* sub_5F3E70 */
{
    FN_ENTER(0x005f3e70);
    /* 005f3e70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f3e73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f3e75: call 0x5f3e94 */ r_esp -= 4; W32(r_esp, 0x5f3e7au); f_005f3e94();
    /* 005f3e7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f3e7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3e80: jne 0x5f3e86 */ if (!fZ) goto L_005f3e86;
L_005f3e82:; BB(0x005f3e82);
    /* 005f3e82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f3e83: ret 4 */ FN_RET(0x005f3e70); r_esp += 8; return;
L_005f3e86:; BB(0x005f3e86);
    /* 005f3e86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e87: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f3e8cu); f_005c2f74();
    /* 005f3e8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3e8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f3e8e: ret 4 */ FN_RET(0x005f3e70); r_esp += 8; return;
}

void f_005f3e94(void) /* sub_5F3E94 */
{
    FN_ENTER(0x005f3e94);
    /* 005f3e94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e95: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3e97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e99: push 0x8dd148 */ { u32 v = 0x8dd148u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3ea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3ea5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3eac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3eaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3eb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3eb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3eb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f3ebb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f3ebe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3ec1: mov dword ptr [ecx], 0xb15e40 */ W32((u32)(r_ecx), 0xb15e40u);
    /* 005f3ec7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f3ece: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f3ed3u); f_005e61c8();
    /* 005f3ed3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3ed6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f3edd: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3edf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3ee0: ret  */ FN_RET(0x005f3e94); r_esp += 4; return;
}

void f_005f3ee4(void) /* sub_5F3EE4 */
{
    FN_ENTER(0x005f3ee4);
    /* 005f3ee4: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005f3eea: movzx edx, word ptr [eax + 0x11a] */ r_edx = (u32)R16((u32)(r_eax+0x11au));
    /* 005f3ef1: mov word ptr [ecx + 0x240], dx */ W16((u32)(r_ecx+0x240u), (u16)r_edx);
    /* 005f3ef8: ret  */ FN_RET(0x005f3ee4); r_esp += 4; return;
}

void f_005f3efc(void) /* sub_5F3EFC */
{
    FN_ENTER(0x005f3efc);
    /* 005f3efc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3efd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f3eff: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005f3f05: movsx eax, word ptr [ebp + 0x240] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x240u));
    /* 005f3f0c: cmp ax, word ptr [edx + 0x11a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x11au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 005f3f13: jge 0x5f3f3e */ if ((fS==fO)) goto L_005f3f3e;
L_005f3f15:; BB(0x005f3f15);
    /* 005f3f15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3f17: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5f3f1cu); f_005c37bc();
    /* 005f3f1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f3f1f: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005f3f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3f23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3f25: call 0x5c37a0 */ r_esp -= 4; W32(r_esp, 0x5f3f2au); f_005c37a0();
    /* 005f3f2a: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005f3f30: movzx edx, word ptr [eax + 0x11a] */ r_edx = (u32)R16((u32)(r_eax+0x11au));
    /* 005f3f37: mov word ptr [ebp + 0x240], dx */ W16((u32)(r_ebp+0x240u), (u16)r_edx);
L_005f3f3e:; BB(0x005f3f3e);
    /* 005f3f3e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f3f40: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5f3f45u); f_005c37bc();
    /* 005f3f45: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005f3f48: cmp eax, 0x2710 */ {  u32 a = r_eax; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f3f4d: jl 0x5f3f67 */ if ((fS!=fO)) goto L_005f3f67;
L_005f3f4f:; BB(0x005f3f4f);
    /* 005f3f4f: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005f3f55: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3f5a: jne 0x5f3f67 */ if (!fZ) goto L_005f3f67;
L_005f3f5c:; BB(0x005f3f5c);
    /* 005f3f5c: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3f61: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
L_005f3f67:; BB(0x005f3f67);
    /* 005f3f67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3f68: ret  */ FN_RET(0x005f3efc); r_esp += 4; return;
}

void f_005f3f58(void)
{
    FN_ENTER(0x005f3f58);
    /* 005f3f58: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005f3f5a: jne 0x5f3f67 */ if (!fZ) goto L_005f3f67;
L_005f3f5c:; BB(0x005f3f5c);
    /* 005f3f5c: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f3f61: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
L_005f3f67:; BB(0x005f3f67);
    /* 005f3f67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3f68: ret  */ FN_RET(0x005f3f58); r_esp += 4; return;
}

void f_005f3f6c(void) /* sub_5F3F6C */
{
    FN_ENTER(0x005f3f6c);
    /* 005f3f6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f3f6d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3f70: mov esi, ecx */ r_esi = r_ecx;
    /* 005f3f72: mov ecx, esi */ r_ecx = r_esi;
    /* 005f3f74: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5f3f79u); f_005c37bc();
    /* 005f3f79: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005f3f7c: cmp eax, 0x2710 */ {  u32 a = r_eax; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f3f81: jl 0x5f3f9e */ if ((fS!=fO)) goto L_005f3f9e;
L_005f3f83:; BB(0x005f3f83);
    /* 005f3f83: mov byte ptr [esp + 1], 0xac */ W8((u32)(r_esp+0x1u), 0xacu);
    /* 005f3f88: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f3f8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f3f8d: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005f3f90: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005f3f94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f3f95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3f96: call 0x5c4600 */ r_esp -= 4; W32(r_esp, 0x5f3f9bu); f_005c4600();
    /* 005f3f9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f3f9e:; BB(0x005f3f9e);
    /* 005f3f9e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f3fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f3fa2: ret  */ FN_RET(0x005f3f6c); r_esp += 4; return;
}

void f_005f3fa4(void) /* sub_5F3FA4 */
{
    FN_ENTER(0x005f3fa4);
    /* 005f3fa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3fa5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3fa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3fa9: push 0x8dd170 */ { u32 v = 0x8dd170u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3fae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f3fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3fb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f3fbc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3fbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f3fc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f3fc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f3fc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f3fcb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3fce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3fd0: je 0x5f4027 */ if (fZ) goto L_005f4027;
L_005f3fd2:; BB(0x005f3fd2);
    /* 005f3fd2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f3fd9: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3fde: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f3fe3u); f_005caba4();
    /* 005f3fe3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f3fe4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f3fe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3fe9: je 0x5f4023 */ if (fZ) goto L_005f4023;
L_005f3feb:; BB(0x005f3feb);
    /* 005f3feb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f3ff2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f3ff9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f3ffc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f3fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4000: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4006: call 0x5f4038 */ r_esp -= 4; W32(r_esp, 0x5f400bu); f_005f4038();
    /* 005f400b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f400e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f4015:; BB(0x005f4015);
    /* 005f4015: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4018: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f401f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4021: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4022: ret  */ FN_RET(0x005f3fa4); r_esp += 4; return;
L_005f4023:; BB(0x005f4023);
    /* 005f4023: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4025: jmp 0x5f4015 */ goto L_005f4015;
L_005f4027:; BB(0x005f4027);
    /* 005f4027: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4029: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f402c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4033: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4035: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4036: ret  */ FN_RET(0x005f3fa4); r_esp += 4; return;
}

