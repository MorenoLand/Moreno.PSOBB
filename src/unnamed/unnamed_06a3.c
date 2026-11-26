#include "protos.h"

void f_006a3004(void) /* sub_6A3004 */
{
    FN_ENTER(0x006a3004);
    /* 006a3004: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3005: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3006: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3007: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3008: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a300b: mov esi, ecx */ r_esi = r_ecx;
    /* 006a300d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 006a3011: mov eax, dword ptr [ebp + 0x45c] */ r_eax = R32((u32)(r_ebp+0x45cu));
    /* 006a3017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3019: je 0x6a308b */ if (fZ) goto L_006a308b;
L_006a301b:; BB(0x006a301b);
    /* 006a301b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006a3020: lea ebx, [esi + 0x2c] */ r_ebx = (u32)(r_esi+0x2cu);
    /* 006a3023: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a3025: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 006a3028: mov word ptr [esi + 0x30], ax */ W16((u32)(r_esi+0x30u), (u16)r_eax);
    /* 006a302c: mov word ptr [esi + 0x32], dx */ W16((u32)(r_esi+0x32u), (u16)r_edx);
    /* 006a3030: mov word ptr [esi + 0x34], ax */ W16((u32)(r_esi+0x34u), (u16)r_eax);
    /* 006a3034: mov word ptr [esi + 0x36], dx */ W16((u32)(r_esi+0x36u), (u16)r_edx);
    /* 006a3038: mov word ptr [esi + 0x38], ax */ W16((u32)(r_esi+0x38u), (u16)r_eax);
    /* 006a303c: mov word ptr [esi + 0x3a], dx */ W16((u32)(r_esi+0x3au), (u16)r_edx);
    /* 006a3040: mov word ptr [esi + 0x3c], ax */ W16((u32)(r_esi+0x3cu), (u16)r_eax);
    /* 006a3044: mov word ptr [esi + 0x3e], dx */ W16((u32)(r_esi+0x3eu), (u16)r_edx);
    /* 006a3048: mov word ptr [esi + 0x40], ax */ W16((u32)(r_esi+0x40u), (u16)r_eax);
    /* 006a304c: mov word ptr [esi + 0x42], dx */ W16((u32)(r_esi+0x42u), (u16)r_edx);
    /* 006a3050: mov word ptr [esi + 0x44], ax */ W16((u32)(r_esi+0x44u), (u16)r_eax);
    /* 006a3054: mov word ptr [esi + 0x46], dx */ W16((u32)(r_esi+0x46u), (u16)r_edx);
    /* 006a3058: mov word ptr [esi + 0x48], ax */ W16((u32)(r_esi+0x48u), (u16)r_eax);
    /* 006a305c: mov word ptr [esi + 0x4a], dx */ W16((u32)(r_esi+0x4au), (u16)r_edx);
    /* 006a3060: mov word ptr [esi + 0x4c], ax */ W16((u32)(r_esi+0x4cu), (u16)r_eax);
    /* 006a3064: mov word ptr [esi + 0x4e], dx */ W16((u32)(r_esi+0x4eu), (u16)r_edx);
    /* 006a3068: mov word ptr [esi + 0x50], ax */ W16((u32)(r_esi+0x50u), (u16)r_eax);
    /* 006a306c: mov word ptr [esi + 0x52], dx */ W16((u32)(r_esi+0x52u), (u16)r_edx);
    /* 006a3070: mov word ptr [esi + 0x54], ax */ W16((u32)(r_esi+0x54u), (u16)r_eax);
    /* 006a3074: mov word ptr [esi + 0x56], dx */ W16((u32)(r_esi+0x56u), (u16)r_edx);
    /* 006a3078: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a307a: call 0x68cd34 */ r_esp -= 4; W32(r_esp, 0x6a307fu); f_0068cd34();
    /* 006a307f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3081: je 0x6a308b */ if (fZ) goto L_006a308b;
L_006a3083:; BB(0x006a3083);
    /* 006a3083: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 006a3086: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3089: je 0x6a3097 */ if (fZ) goto L_006a3097;
L_006a308b:; BB(0x006a308b);
    /* 006a308b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a308d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a3090: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3092: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a3093: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3094: ret 4 */ FN_RET(0x006a3004); r_esp += 8; return;
L_006a3097:; BB(0x006a3097);
    /* 006a3097: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006a309a: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 006a309d: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 006a30a0: mov dword ptr [esi + 0x20], edi */ W32((u32)(r_esi+0x20u), r_edi);
    /* 006a30a3: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006a30a6: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 006a30a9: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006a30ac: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 006a30af: mov edi, dword ptr [eax + 0x9c] */ r_edi = R32((u32)(r_eax+0x9cu));
    /* 006a30b5: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 006a30b9: lea edx, [esi + 0x30] */ r_edx = (u32)(r_esi+0x30u);
    /* 006a30bc: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006a30c0: mov dword ptr [esi + 0x2c], edi */ W32((u32)(r_esi+0x2cu), r_edi);
    /* 006a30c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a30c5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a30c7: je 0x6a3101 */ if (fZ) goto L_006a3101;
L_006a30c9:; BB(0x006a30c9);
    /* 006a30c9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006a30cc: mov esi, edi */ r_esi = r_edi;
    /* 006a30ce: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006a30d1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a30d3: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 006a30d6: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a30d8: lea edi, [eax + ecx + 0xa0] */ r_edi = (u32)(r_eax+r_ecx+0xa0u);
    /* 006a30df: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
L_006a30e3:; BB(0x006a30e3);
    /* 006a30e3: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 006a30e6: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006a30e9: movzx ecx, word ptr [edi + 2] */ r_ecx = (u32)R16((u32)(r_edi+0x2u));
    /* 006a30ed: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 006a30f1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a30f4: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a30f7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a30fa: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a30fc: jne 0x6a30e3 */ if (!fZ) goto L_006a30e3;
L_006a30fe:; BB(0x006a30fe);
    /* 006a30fe: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006a3101:; BB(0x006a3101);
    /* 006a3101: movzx eax, word ptr [esi + 0x30] */ r_eax = (u32)R16((u32)(r_esi+0x30u));
    /* 006a3105: movsx esi, word ptr [esi + 0x32] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x32u));
    /* 006a3109: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a310a: mov ecx, dword ptr [ebp + 0x45c] */ r_ecx = R32((u32)(r_ebp+0x45cu));
    /* 006a3110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3111: call 0x7a4118 */ r_esp -= 4; W32(r_esp, 0x6a3116u); f_007a4118();
    /* 006a3116: mov eax, ebx */ r_eax = r_ebx;
    /* 006a3118: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a311b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a311c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a311d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a311e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a311f: ret 4 */ FN_RET(0x006a3004); r_esp += 8; return;
}

void f_006a3124(void) /* sub_6A3124 */
{
    FN_ENTER(0x006a3124);
    /* 006a3124: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3125: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3126: mov edi, ecx */ r_edi = r_ecx;
    /* 006a3128: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006a312c: movzx eax, word ptr [edi + 0x30] */ r_eax = (u32)R16((u32)(r_edi+0x30u));
    /* 006a3130: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3135: je 0x6a3177 */ if (fZ) goto L_006a3177;
L_006a3137:; BB(0x006a3137);
    /* 006a3137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3138: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a313du); f_007b4d18();
    /* 006a313d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a313e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3140: je 0x6a3177 */ if (fZ) goto L_006a3177;
L_006a3142:; BB(0x006a3142);
    /* 006a3142: movsx ecx, word ptr [edi + 0x32] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x32u));
    /* 006a3146: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006a3149: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a314b: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a314d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a314f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a3151: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a3153: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 006a3159: mov eax, dword ptr [ecx + edx*4 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 006a315d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006a315f: mov edi, dword ptr [ecx + edx*4 + 0x20] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x20u));
    /* 006a3163: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 006a3166: mov eax, dword ptr [ecx + edx*4 + 0x24] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x24u));
    /* 006a316a: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 006a316d: mov eax, 1 */ r_eax = 0x1u;
    /* 006a3172: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a3173: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3174: ret 4 */ FN_RET(0x006a3124); r_esp += 8; return;
L_006a3177:; BB(0x006a3177);
    /* 006a3177: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3179: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a317a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a317b: ret 4 */ FN_RET(0x006a3124); r_esp += 8; return;
}

void f_006a3180(void) /* sub_6A3180 */
{
    FN_ENTER(0x006a3180);
    /* 006a3180: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006a3183: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a3185: je 0x6a318d */ if (fZ) goto L_006a318d;
L_006a3187:; BB(0x006a3187);
    /* 006a3187: call 0x6a3190 */ r_esp -= 4; W32(r_esp, 0x6a318cu); f_006a3190();
    /* 006a318c: ret  */ FN_RET(0x006a3180); r_esp += 4; return;
L_006a318d:; BB(0x006a318d);
    /* 006a318d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a318f: ret  */ FN_RET(0x006a3180); r_esp += 4; return;
}

void f_006a3190(void) /* sub_6A3190 */
{
    FN_ENTER(0x006a3190);
    /* 006a3190: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a3193: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a3196: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 006a3199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a319b: jl 0x6a31a0 */ if ((fS!=fO)) goto L_006a31a0;
L_006a319d:; BB(0x006a319d);
    /* 006a319d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a319f: ret  */ FN_RET(0x006a3190); r_esp += 4; return;
L_006a31a0:; BB(0x006a31a0);
    /* 006a31a0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006a31a3: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a31a6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006a31a9: mov eax, 1 */ r_eax = 0x1u;
    /* 006a31ae: ret  */ FN_RET(0x006a3190); r_esp += 4; return;
}

void f_006a31b0(void) /* sub_6A31B0 */
{
    FN_ENTER(0x006a31b0);
    /* 006a31b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a31b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a31b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a31b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a31b4: mov edi, ecx */ r_edi = r_ecx;
    /* 006a31b6: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 006a31b9: mov eax, edx */ r_eax = r_edx;
    /* 006a31bb: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 006a31bf: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006a31c3: movsx ebx, word ptr [esp + 0x1c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 006a31c8: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a31cb: je 0x6a31d2 */ if (fZ) goto L_006a31d2;
L_006a31cd:; BB(0x006a31cd);
    /* 006a31cd: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a31d0: je 0x6a31dd */ if (fZ) goto L_006a31dd;
L_006a31d2:; BB(0x006a31d2);
    /* 006a31d2: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a31d5: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 006a31d8: mov eax, edx */ r_eax = r_edx;
    /* 006a31da: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_006a31dd:; BB(0x006a31dd);
    /* 006a31dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a31df: je 0x6a3226 */ if (fZ) goto L_006a3226;
L_006a31e1:; BB(0x006a31e1);
    /* 006a31e1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a31e4: jne 0x6a3226 */ if (!fZ) goto L_006a3226;
L_006a31e6:; BB(0x006a31e6);
    /* 006a31e6: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a31e9: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 006a31ec: mov ecx, edi */ r_ecx = r_edi;
    /* 006a31ee: call 0x6a3230 */ r_esp -= 4; W32(r_esp, 0x6a31f3u); f_006a3230();
    /* 006a31f3: mov ecx, edi */ r_ecx = r_edi;
    /* 006a31f5: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x6a31fau); f_006a3250();
    /* 006a31fa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a31fd: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a31ff: jle 0x6a3205 */ if ((fZ||fS!=fO)) goto L_006a3205;
L_006a3201:; BB(0x006a3201);
    /* 006a3201: mov word ptr [edi + 0xc], bx */ W16((u32)(r_edi+0xcu), (u16)r_ebx);
L_006a3205:; BB(0x006a3205);
    /* 006a3205: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3206: mov ecx, esi */ r_ecx = r_esi;
    /* 006a3208: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x6a320du); f_0068aa6c();
    /* 006a320d: mov byte ptr [esi + 0x354], 2 */ W8((u32)(r_esi+0x354u), 0x2u);
    /* 006a3214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3215: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 006a3219: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006a321d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a321e: call 0x71825c */ r_esp -= 4; W32(r_esp, 0x6a3223u); f_0071825c();
    /* 006a3223: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006a3226:; BB(0x006a3226);
    /* 006a3226: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3227: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3228: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a3229: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a322a: ret 0xc */ FN_RET(0x006a31b0); r_esp += 16; return;
}

void f_006a3230(void) /* sub_6A3230 */
{
    FN_ENTER(0x006a3230);
    /* 006a3230: movsx edx, word ptr [ecx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 006a3234: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a3237: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 006a323a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a323d: jg 0x6a3244 */ if ((!fZ&&fS==fO)) goto L_006a3244;
L_006a323f:; BB(0x006a323f);
    /* 006a323f: mov word ptr [ecx + 0xc], dx */ W16((u32)(r_ecx+0xcu), (u16)r_edx);
    /* 006a3243: ret  */ FN_RET(0x006a3230); r_esp += 4; return;
L_006a3244:; BB(0x006a3244);
    /* 006a3244: mov eax, 2 */ r_eax = 0x2u;
    /* 006a3249: mov word ptr [ecx + 0xc], ax */ W16((u32)(r_ecx+0xcu), (u16)r_eax);
    /* 006a324d: ret  */ FN_RET(0x006a3230); r_esp += 4; return;
}

void f_006a3250(void) /* sub_6A3250 */
{
    FN_ENTER(0x006a3250);
    /* 006a3250: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3251: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3252: movsx edi, word ptr [ecx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 006a3256: mov eax, edi */ r_eax = r_edi;
    /* 006a3258: call 0x6a326d */ r_esp -= 4; W32(r_esp, 0x6a325du); f_006a326d();
    /* 006a325d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a325f: jne 0x6a3263 */ if (!fZ) goto L_006a3263;
L_006a3261:; BB(0x006a3261);
    /* 006a3261: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006a3263:; BB(0x006a3263);
    /* 006a3263: mov eax, edi */ r_eax = r_edi;
    /* 006a3265: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3266: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3267: ret  */ FN_RET(0x006a3250); r_esp += 4; return;
}

void f_006a326d(void) /* sub_6A326D */
{
    FN_ENTER(0x006a326d);
    /* 006a326d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a3270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a3272: jl 0x6a3279 */ if ((fS!=fO)) goto L_006a3279;
L_006a3274:; BB(0x006a3274);
    /* 006a3274: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a3277: jl 0x6a327c */ if ((fS!=fO)) goto L_006a327c;
L_006a3279:; BB(0x006a3279);
    /* 006a3279: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a327b: ret  */ FN_RET(0x006a326d); r_esp += 4; return;
L_006a327c:; BB(0x006a327c);
    /* 006a327c: mov eax, 1 */ r_eax = 0x1u;
    /* 006a3281: ret  */ FN_RET(0x006a326d); r_esp += 4; return;
}

void f_006a32b0(void)
{
    FN_ENTER(0x006a32b0);
    /* 006a32b0: mov dword ptr [0xa94344], 0x47742400 */ W32((u32)(0xa94344u), 0x47742400u);
    /* 006a32ba: mov ecx, 0xa94354 */ r_ecx = 0xa94354u;
    /* 006a32bf: mov dword ptr [0xa94348], 0x3f800000 */ W32((u32)(0xa94348u), 0x3f800000u);
    /* 006a32c9: mov dword ptr [0xa9434c], 0x41000000 */ W32((u32)(0xa9434cu), 0x41000000u);
    /* 006a32d3: mov dword ptr [0xa94350], 0x3fc00000 */ W32((u32)(0xa94350u), 0x3fc00000u);
    /* 006a32dd: call 0x7a9700 */ r_esp -= 4; W32(r_esp, 0x6a32e2u); f_007a9700();
    /* 006a32e2: push 0x6a32f0 */ { u32 v = 0x6a32f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a32e7: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x6a32ecu); f_0085909d();
    /* 006a32ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a32ed: ret  */ FN_RET(0x006a32b0); r_esp += 4; return;
}

void f_006a32f0(void)
{
    FN_ENTER(0x006a32f0);
    /* 006a32f0: mov ecx, 0xa94354 */ r_ecx = 0xa94354u;
    /* 006a32f5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6a32fau); f_0061cdb0();
    /* 006a32fa: ret  */ FN_RET(0x006a32f0); r_esp += 4; return;
}

void f_006a32fc(void) /* sub_6A32FC */
{
    FN_ENTER(0x006a32fc);
    /* 006a32fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a32fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a32ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3301: call 0x6a3394 */ r_esp -= 4; W32(r_esp, 0x6a3306u); f_006a3394();
    /* 006a3306: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a330a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a330c: jne 0x6a3312 */ if (!fZ) goto L_006a3312;
L_006a330e:; BB(0x006a330e);
    /* 006a330e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a330f: ret 4 */ FN_RET(0x006a32fc); r_esp += 8; return;
L_006a3312:; BB(0x006a3312);
    /* 006a3312: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3313: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a3318u); f_005c2f74();
    /* 006a3318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3319: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a331a: ret 4 */ FN_RET(0x006a32fc); r_esp += 8; return;
}

void f_006a3320(void) /* sub_6A3320 */
{
    FN_ENTER(0x006a3320);
    /* 006a3320: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3321: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a3323: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3325: call 0x6a3344 */ r_esp -= 4; W32(r_esp, 0x6a332au); f_006a3344();
    /* 006a332a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a332e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3330: jne 0x6a3336 */ if (!fZ) goto L_006a3336;
L_006a3332:; BB(0x006a3332);
    /* 006a3332: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3333: ret 4 */ FN_RET(0x006a3320); r_esp += 8; return;
L_006a3336:; BB(0x006a3336);
    /* 006a3336: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3337: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a333cu); f_005c2f74();
    /* 006a333c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a333d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a333e: ret 4 */ FN_RET(0x006a3320); r_esp += 8; return;
}

void f_006a3344(void) /* sub_6A3344 */
{
    FN_ENTER(0x006a3344);
    /* 006a3344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3345: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3347: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3349: push 0x8eb718 */ { u32 v = 0x8eb718u; r_esp -= 4; W32(r_esp, v); }
    /* 006a334e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3355: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a335c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a335f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3362: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a3365: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a3368: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a336b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a336e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3371: mov dword ptr [ecx], 0xb39ae0 */ W32((u32)(r_ecx), 0xb39ae0u);
    /* 006a3377: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a337e: call 0x6a3394 */ r_esp -= 4; W32(r_esp, 0x6a3383u); f_006a3394();
    /* 006a3383: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3386: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a338d: mov esp, ebp */ r_esp = r_ebp;
    /* 006a338f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3390: ret  */ FN_RET(0x006a3344); r_esp += 4; return;
}

void f_006a3394(void) /* sub_6A3394 */
{
    FN_ENTER(0x006a3394);
    /* 006a3394: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3395: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3397: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3399: push 0x8eb734 */ { u32 v = 0x8eb734u; r_esp -= 4; W32(r_esp, v); }
    /* 006a339e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a33a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a33a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a33ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a33af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a33b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a33b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a33b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a33bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a33be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a33c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a33c8: mov dword ptr [eax], 0xb39a80 */ W32((u32)(r_eax), 0xb39a80u);
    /* 006a33ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a33cf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6a33d4u); f_007b4e84();
    /* 006a33d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a33d5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a33d8: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x6a33ddu); f_007b9de0();
    /* 006a33dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a33e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a33e7: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x6a33ecu); f_007b4aec();
    /* 006a33ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a33ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a33f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006a33f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a33f9: ret  */ FN_RET(0x006a3394); r_esp += 4; return;
}

void f_006a33fc(void) /* sub_6A33FC */
{
    FN_ENTER(0x006a33fc);
    /* 006a33fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a33fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a33ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3401: call 0x6a3420 */ r_esp -= 4; W32(r_esp, 0x6a3406u); f_006a3420();
    /* 006a3406: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a340a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a340c: jne 0x6a3412 */ if (!fZ) goto L_006a3412;
L_006a340e:; BB(0x006a340e);
    /* 006a340e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a340f: ret 4 */ FN_RET(0x006a33fc); r_esp += 8; return;
L_006a3412:; BB(0x006a3412);
    /* 006a3412: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3413: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a3418u); f_005c2f74();
    /* 006a3418: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3419: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a341a: ret 4 */ FN_RET(0x006a33fc); r_esp += 8; return;
}

void f_006a3420(void) /* sub_6A3420 */
{
    FN_ENTER(0x006a3420);
    /* 006a3420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3421: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3425: push 0x8eb750 */ { u32 v = 0x8eb750u; r_esp -= 4; W32(r_esp, v); }
    /* 006a342a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3431: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3438: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a343b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a343e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a3441: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a3444: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a3447: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a344a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a344d: mov dword ptr [ecx], 0xb39ab0 */ W32((u32)(r_ecx), 0xb39ab0u);
    /* 006a3453: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a345a: call 0x6a3394 */ r_esp -= 4; W32(r_esp, 0x6a345fu); f_006a3394();
    /* 006a345f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3462: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3469: mov esp, ebp */ r_esp = r_ebp;
    /* 006a346b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a346c: ret  */ FN_RET(0x006a3420); r_esp += 4; return;
}

void f_006a3470(void) /* sub_6A3470 */
{
    FN_ENTER(0x006a3470);
    /* 006a3470: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3471: mov edi, ecx */ r_edi = r_ecx;
    /* 006a3473: movzx eax, word ptr [edi + 0xac] */ r_eax = (u32)R16((u32)(r_edi+0xacu));
    /* 006a347a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a347b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a3480u); f_0068d5a8();
    /* 006a3480: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3481: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3483: je 0x6a3487 */ if (fZ) goto L_006a3487;
L_006a3485:; BB(0x006a3485);
    /* 006a3485: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3486: ret  */ FN_RET(0x006a3470); r_esp += 4; return;
L_006a3487:; BB(0x006a3487);
    /* 006a3487: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006a348b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3490: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006a3494: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3495: ret  */ FN_RET(0x006a3470); r_esp += 4; return;
}

void f_006a3498(void) /* sub_6A3498 */
{
    FN_ENTER(0x006a3498);
    /* 006a3498: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3499: mov edi, ecx */ r_edi = r_ecx;
    /* 006a349b: movzx eax, word ptr [edi + 0xac] */ r_eax = (u32)R16((u32)(r_edi+0xacu));
    /* 006a34a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a34a3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a34a8u); f_0068d5a8();
    /* 006a34a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a34a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a34ab: je 0x6a34c1 */ if (fZ) goto L_006a34c1;
L_006a34ad:; BB(0x006a34ad);
    /* 006a34ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006a34af: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a34b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a34b3: mov ecx, eax */ r_ecx = r_eax;
    /* 006a34b5: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 006a34b7: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x6a34bdu); call_ind(t); }
    /* 006a34bd: mov eax, edi */ r_eax = r_edi;
    /* 006a34bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a34c0: ret  */ FN_RET(0x006a3498); r_esp += 4; return;
L_006a34c1:; BB(0x006a34c1);
    /* 006a34c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a34c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a34c4: ret  */ FN_RET(0x006a3498); r_esp += 4; return;
}

void f_006a34c8(void) /* sub_6A34C8 */
{
    FN_ENTER(0x006a34c8);
    /* 006a34c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a34c9: mov edi, ecx */ r_edi = r_ecx;
    /* 006a34cb: movzx eax, word ptr [edi + 0xac] */ r_eax = (u32)R16((u32)(r_edi+0xacu));
    /* 006a34d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a34d3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a34d8u); f_0068d5a8();
    /* 006a34d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a34d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a34db: je 0x6a34f1 */ if (fZ) goto L_006a34f1;
L_006a34dd:; BB(0x006a34dd);
    /* 006a34dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006a34df: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a34e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a34e3: mov ecx, eax */ r_ecx = r_eax;
    /* 006a34e5: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006a34e7: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x6a34edu); call_ind(t); }
    /* 006a34ed: mov eax, edi */ r_eax = r_edi;
    /* 006a34ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a34f0: ret  */ FN_RET(0x006a34c8); r_esp += 4; return;
L_006a34f1:; BB(0x006a34f1);
    /* 006a34f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a34f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a34f4: ret  */ FN_RET(0x006a34c8); r_esp += 4; return;
}

void f_006a350c(void) /* sub_6A350C */
{
    FN_ENTER(0x006a350c);
    /* 006a350c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a350d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a350e: movzx esi, word ptr [esp + 0xc] */ r_esi = (u32)R16((u32)(r_esp+0xcu));
    /* 006a3513: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3514: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a3519u); f_007b4d18();
    /* 006a3519: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a351a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a351c: je 0x6a3545 */ if (fZ) goto L_006a3545;
L_006a351e:; BB(0x006a351e);
    /* 006a351e: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3520: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3524: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a3527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3528: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6a352du); f_0050b7a4();
    /* 006a352d: mov edi, eax */ r_edi = r_eax;
    /* 006a352f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a3532: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3534: je 0x6a353e */ if (fZ) goto L_006a353e;
L_006a3536:; BB(0x006a3536);
    /* 006a3536: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3537: mov ecx, edi */ r_ecx = r_edi;
    /* 006a3539: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6a353eu); f_00508f14();
L_006a353e:; BB(0x006a353e);
    /* 006a353e: mov eax, edi */ r_eax = r_edi;
    /* 006a3540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a3541: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3542: ret 8 */ FN_RET(0x006a350c); r_esp += 12; return;
L_006a3545:; BB(0x006a3545);
    /* 006a3545: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3547: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a3548: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3549: ret 8 */ FN_RET(0x006a350c); r_esp += 12; return;
}

void f_006a354c(void) /* sub_6A354C */
{
    FN_ENTER(0x006a354c);
    /* 006a354c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a354d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a354e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3551: movzx ebp, word ptr [esp + 0x18] */ r_ebp = (u32)R16((u32)(r_esp+0x18u));
    /* 006a3556: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3557: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a355cu); f_007b4d18();
    /* 006a355c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a355d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a355f: je 0x6a35a0 */ if (fZ) goto L_006a35a0;
L_006a3561:; BB(0x006a3561);
    /* 006a3561: mov dword ptr [esp + 8], 0xffff8000 */ W32((u32)(r_esp+0x8u), 0xffff8000u);
    /* 006a3569: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a356c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a356e: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a3571: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006a3575: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006a3578: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 006a357a: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a357e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a357f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3580: call 0x50bd5c */ r_esp -= 4; W32(r_esp, 0x6a3585u); f_0050bd5c();
    /* 006a3585: mov esi, eax */ r_esi = r_eax;
    /* 006a3587: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a358a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a358c: je 0x6a3596 */ if (fZ) goto L_006a3596;
L_006a358e:; BB(0x006a358e);
    /* 006a358e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a358f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a3591: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6a3596u); f_00508f14();
L_006a3596:; BB(0x006a3596);
    /* 006a3596: mov eax, esi */ r_eax = r_esi;
    /* 006a3598: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a359b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a359c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a359d: ret 8 */ FN_RET(0x006a354c); r_esp += 12; return;
L_006a35a0:; BB(0x006a35a0);
    /* 006a35a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a35a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a35a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a35a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a35a7: ret 8 */ FN_RET(0x006a354c); r_esp += 12; return;
}

void f_006a35ac(void) /* sub_6A35AC */
{
    FN_ENTER(0x006a35ac);
    /* 006a35ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a35ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a35ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a35af: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006a35b3: push 0x237 */ { u32 v = 0x237u; r_esp -= 4; W32(r_esp, v); }
    /* 006a35b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a35b9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6a35beu); f_0050b510();
    /* 006a35be: mov edi, eax */ r_edi = r_eax;
    /* 006a35c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a35c3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a35c5: je 0x6a35fa */ if (fZ) goto L_006a35fa;
L_006a35c7:; BB(0x006a35c7);
    /* 006a35c7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a35c9: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x6a35ceu); f_0050c094();
    /* 006a35ce: mov esi, eax */ r_esi = r_eax;
    /* 006a35d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a35d3: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x6a35d8u); f_0050c08c();
    /* 006a35d8: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 006a35dc: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 006a35e3: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 006a35e6: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 006a35e9: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 006a35f0: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a35f6: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
L_006a35fa:; BB(0x006a35fa);
    /* 006a35fa: push 0x239 */ { u32 v = 0x239u; r_esp -= 4; W32(r_esp, v); }
    /* 006a35ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3600: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6a3605u); f_0050b510();
    /* 006a3605: mov edi, eax */ r_edi = r_eax;
    /* 006a3607: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a360a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a360c: je 0x6a3641 */ if (fZ) goto L_006a3641;
L_006a360e:; BB(0x006a360e);
    /* 006a360e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3610: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x6a3615u); f_0050c094();
    /* 006a3615: mov esi, eax */ r_esi = r_eax;
    /* 006a3617: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a361a: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x6a361fu); f_0050c08c();
    /* 006a361f: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 006a3623: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 006a362a: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 006a362d: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 006a3630: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 006a3637: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a363d: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
L_006a3641:; BB(0x006a3641);
    /* 006a3641: push 0x238 */ { u32 v = 0x238u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3646: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3647: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6a364cu); f_0050b510();
    /* 006a364c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a364f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3650: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a3651: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3652: ret 4 */ FN_RET(0x006a35ac); r_esp += 8; return;
}

void f_006a3658(void) /* sub_6A3658 */
{
    FN_ENTER(0x006a3658);
    /* 006a3658: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3659: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a365a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a365b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006a365f: push 0x23d */ { u32 v = 0x23du; r_esp -= 4; W32(r_esp, v); }
    /* 006a3664: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3665: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6a366au); f_0050b510();
    /* 006a366a: mov ebp, eax */ r_ebp = r_eax;
    /* 006a366c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a366f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3671: je 0x6a36a6 */ if (fZ) goto L_006a36a6;
L_006a3673:; BB(0x006a3673);
    /* 006a3673: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3675: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x6a367au); f_0050c094();
    /* 006a367a: mov ebx, eax */ r_ebx = r_eax;
    /* 006a367c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a367f: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x6a3684u); f_0050c08c();
    /* 006a3684: movzx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 006a3688: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 006a368f: mov dword ptr [ebp + 0x50], ebx */ W32((u32)(r_ebp+0x50u), r_ebx);
    /* 006a3692: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 006a3695: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 006a369c: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a36a2: mov word ptr [ebp + 0x2c], dx */ W16((u32)(r_ebp+0x2cu), (u16)r_edx);
L_006a36a6:; BB(0x006a36a6);
    /* 006a36a6: push 0x23e */ { u32 v = 0x23eu; r_esp -= 4; W32(r_esp, v); }
    /* 006a36ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a36ac: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6a36b1u); f_0050b510();
    /* 006a36b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a36b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a36b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a36b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a36b7: ret 4 */ FN_RET(0x006a3658); r_esp += 8; return;
}

void f_006a36bc(void) /* sub_6A36BC */
{
    FN_ENTER(0x006a36bc);
    /* 006a36bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a36bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a36be: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006a36c2: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a36c7: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a36cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a36cd: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6a36d2u); f_0050b7a4();
    /* 006a36d2: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a36d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a36d8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6a36ddu); f_0050b510();
    /* 006a36dd: mov edi, eax */ r_edi = r_eax;
    /* 006a36df: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a36e2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a36e4: je 0x6a3719 */ if (fZ) goto L_006a3719;
L_006a36e6:; BB(0x006a36e6);
    /* 006a36e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a36e8: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x6a36edu); f_0050c094();
    /* 006a36ed: mov esi, eax */ r_esi = r_eax;
    /* 006a36ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a36f2: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x6a36f7u); f_0050c08c();
    /* 006a36f7: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 006a36fb: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 006a3702: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 006a3705: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 006a3708: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 006a370f: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3715: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
L_006a3719:; BB(0x006a3719);
    /* 006a3719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a371a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a371b: ret 4 */ FN_RET(0x006a36bc); r_esp += 8; return;
}

void f_006a3720(void) /* sub_6A3720 */
{
    FN_ENTER(0x006a3720);
    /* 006a3720: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3721: movzx edi, word ptr [esp + 8] */ r_edi = (u32)R16((u32)(r_esp+0x8u));
    /* 006a3726: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3727: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a372cu); f_007b4d18();
    /* 006a372c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a372d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a372f: je 0x6a3750 */ if (fZ) goto L_006a3750;
L_006a3731:; BB(0x006a3731);
    /* 006a3731: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3733: push 0x1af */ { u32 v = 0x1afu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3738: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a373b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a373c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6a3741u); f_0050b7a4();
    /* 006a3741: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a3744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3746: je 0x6a3750 */ if (fZ) goto L_006a3750;
L_006a3748:; BB(0x006a3748);
    /* 006a3748: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3749: mov ecx, eax */ r_ecx = r_eax;
    /* 006a374b: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6a3750u); f_00508f14();
L_006a3750:; BB(0x006a3750);
    /* 006a3750: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3751: ret 4 */ FN_RET(0x006a3720); r_esp += 8; return;
}

void f_006a3754(void) /* sub_6A3754 */
{
    FN_ENTER(0x006a3754);
    /* 006a3754: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3755: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a3757: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 006a375a: call 0x6a9ed4 */ r_esp -= 4; W32(r_esp, 0x6a375fu); f_006a9ed4();
    /* 006a375f: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006a3764: mov dword ptr [ebx + 0x14], 0 */ W32((u32)(r_ebx+0x14u), 0x0u);
    /* 006a376b: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006a376f: mov dword ptr [ebx + 0x10], 0 */ W32((u32)(r_ebx+0x10u), 0x0u);
    /* 006a3776: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 006a3779: mov eax, ebx */ r_eax = r_ebx;
    /* 006a377b: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 006a3782: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 006a3789: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 006a3790: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 006a3797: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 006a379e: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
    /* 006a37a5: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 006a37ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a37ad: ret  */ FN_RET(0x006a3754); r_esp += 4; return;
}

void f_006a37b0(void) /* sub_6A37B0 */
{
    FN_ENTER(0x006a37b0);
    /* 006a37b0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a37b3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6a37b8u); f_0061cdb0();
    /* 006a37b8: ret  */ FN_RET(0x006a37b0); r_esp += 4; return;
}

void f_006a37bc(void) /* sub_6A37BC */
{
    FN_ENTER(0x006a37bc);
    /* 006a37bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a37bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a37be: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a37c0: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006a37c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a37c5: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a37c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a37ca: call 0x6a37dc */ r_esp -= 4; W32(r_esp, 0x6a37cfu); f_006a37dc();
    /* 006a37cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a37d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a37d2: call 0x6a3944 */ r_esp -= 4; W32(r_esp, 0x6a37d7u); f_006a3944();
    /* 006a37d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a37d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a37d9: ret 4 */ FN_RET(0x006a37bc); r_esp += 8; return;
}

void f_006a37dc(void) /* sub_6A37DC */
{
    FN_ENTER(0x006a37dc);
    /* 006a37dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a37dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006a37df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a37e1: push 0x8eb778 */ { u32 v = 0x8eb778u; r_esp -= 4; W32(r_esp, v); }
    /* 006a37e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a37ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a37ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a37f4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a37f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a37fa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a37fd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a3800: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a3803: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006a3806: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006a380d: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3812: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a3817u); f_005caba4();
    /* 006a3817: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3818: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006a381b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a381d: je 0x6a3857 */ if (fZ) goto L_006a3857;
L_006a381f:; BB(0x006a381f);
    /* 006a381f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006a3826: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a382d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3830: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a3833: call 0x6a385c */ r_esp -= 4; W32(r_esp, 0x6a3838u); f_006a385c();
    /* 006a3838: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a383b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006a3842:; BB(0x006a3842);
    /* 006a3842: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a3845: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006a3847: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a384a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3851: mov esp, ebp */ r_esp = r_ebp;
    /* 006a3853: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3854: ret 4 */ FN_RET(0x006a37dc); r_esp += 8; return;
L_006a3857:; BB(0x006a3857);
    /* 006a3857: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3859: jmp 0x6a3842 */ goto L_006a3842;
}

void f_006a385c(void) /* sub_6A385C */
{
    FN_ENTER(0x006a385c);
    /* 006a385c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a385d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a385f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3863: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3865: call 0x6a3880 */ r_esp -= 4; W32(r_esp, 0x6a386au); f_006a3880();
    /* 006a386a: mov dword ptr [ebx], 0xb39ae0 */ W32((u32)(r_ebx), 0xb39ae0u);
    /* 006a3870: mov edx, dword ptr [0x9cb9f8] */ r_edx = R32((u32)(0x9cb9f8u));
    /* 006a3876: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006a3879: mov eax, ebx */ r_eax = r_ebx;
    /* 006a387b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a387c: ret 4 */ FN_RET(0x006a385c); r_esp += 8; return;
}

void f_006a3880(void) /* sub_6A3880 */
{
    FN_ENTER(0x006a3880);
    /* 006a3880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3881: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3885: push 0x8eb794 */ { u32 v = 0x8eb794u; r_esp -= 4; W32(r_esp, v); }
    /* 006a388a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3891: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3898: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a389b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a389e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a38a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a38a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a38a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006a38aa: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a38b0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006a38b3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a38b6: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6a38bbu); f_007b4b48();
    /* 006a38bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a38c2: push 0x9cba00 */ { u32 v = 0x9cba00u; r_esp -= 4; W32(r_esp, v); }
    /* 006a38c7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a38ca: mov dword ptr [ecx], 0xb39a80 */ W32((u32)(r_ecx), 0xb39a80u);
    /* 006a38d0: mov eax, dword ptr [0x9cb9f4] */ r_eax = R32((u32)(0x9cb9f4u));
    /* 006a38d5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006a38d8: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x6a38ddu); f_007b9ccc();
    /* 006a38dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a38e0: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6a38e5u); f_007b4f54();
    /* 006a38e5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a38e8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a38eb: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 006a38f0: mov edi, dword ptr [ecx + 0xa4] */ r_edi = R32((u32)(r_ecx+0xa4u));
    /* 006a38f6: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 006a38f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a38fc: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a38ff: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 006a3902: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3905: movzx esi, word ptr [ecx + 0x1c] */ r_esi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006a3909: mov word ptr [edx + 0xac], si */ W16((u32)(r_edx+0xacu), (u16)r_esi);
    /* 006a3910: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a3913: mov word ptr [edx + 0xae], bx */ W16((u32)(r_edx+0xaeu), (u16)r_ebx);
    /* 006a391a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a391d: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 006a3920: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006a3923: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 006a3926: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006a3929: mov eax, dword ptr [ecx + 0x7c] */ r_eax = R32((u32)(r_ecx+0x7cu));
    /* 006a392c: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006a392f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a3932: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3935: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a393c: mov esp, ebp */ r_esp = r_ebp;
    /* 006a393e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a393f: ret 4 */ FN_RET(0x006a3880); r_esp += 8; return;
}

void f_006a3944(void) /* sub_6A3944 */
{
    FN_ENTER(0x006a3944);
    /* 006a3944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3945: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3949: push 0x8eb7bc */ { u32 v = 0x8eb7bcu; r_esp -= 4; W32(r_esp, v); }
    /* 006a394e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3955: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a395c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a395f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3962: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a3965: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a3968: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a396b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006a396e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006a3975: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a397a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a397fu); f_005caba4();
    /* 006a397f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3980: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006a3983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3985: je 0x6a39c0 */ if (fZ) goto L_006a39c0;
L_006a3987:; BB(0x006a3987);
    /* 006a3987: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006a398e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a3995: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3998: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a399b: call 0x6a39c4 */ r_esp -= 4; W32(r_esp, 0x6a39a0u); f_006a39c4();
    /* 006a39a0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a39a3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006a39aa:; BB(0x006a39aa);
    /* 006a39aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a39ad: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006a39b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a39b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a39ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006a39bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a39bd: ret 4 */ FN_RET(0x006a3944); r_esp += 8; return;
L_006a39c0:; BB(0x006a39c0);
    /* 006a39c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a39c2: jmp 0x6a39aa */ goto L_006a39aa;
}

void f_006a39c4(void) /* sub_6A39C4 */
{
    FN_ENTER(0x006a39c4);
    /* 006a39c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a39c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a39c7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a39cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a39cd: call 0x6a3880 */ r_esp -= 4; W32(r_esp, 0x6a39d2u); f_006a3880();
    /* 006a39d2: mov dword ptr [ebx], 0xb39ab0 */ W32((u32)(r_ebx), 0xb39ab0u);
    /* 006a39d8: mov edx, dword ptr [0x9cb9fc] */ r_edx = R32((u32)(0x9cb9fcu));
    /* 006a39de: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006a39e1: mov eax, ebx */ r_eax = r_ebx;
    /* 006a39e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a39e4: ret 4 */ FN_RET(0x006a39c4); r_esp += 8; return;
}

void f_006a39e8(void) /* sub_6A39E8 */
{
    FN_ENTER(0x006a39e8);
    /* 006a39e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a39ea: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a39ee: call 0x69689c */ r_esp -= 4; W32(r_esp, 0x6a39f3u); f_0069689c();
    /* 006a39f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a39f6: ret 4 */ FN_RET(0x006a39e8); r_esp += 8; return;
}

void f_006a39fc(void) /* sub_6A39FC */
{
    FN_ENTER(0x006a39fc);
    /* 006a39fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a39fe: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3a02: call 0x69689c */ r_esp -= 4; W32(r_esp, 0x6a3a07u); f_0069689c();
    /* 006a3a07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a3a0a: ret 4 */ FN_RET(0x006a39fc); r_esp += 8; return;
}

void f_006a3a10(void) /* sub_6A3A10 */
{
    FN_ENTER(0x006a3a10);
    /* 006a3a10: mov dword ptr [0xa94358], 0x3f800000 */ W32((u32)(0xa94358u), 0x3f800000u);
    /* 006a3a1a: mov dword ptr [0xa9435c], 0x41000000 */ W32((u32)(0xa9435cu), 0x41000000u);
    /* 006a3a24: mov dword ptr [0xa94360], 0x3fc00000 */ W32((u32)(0xa94360u), 0x3fc00000u);
    /* 006a3a2e: ret  */ FN_RET(0x006a3a10); r_esp += 4; return;
}

void f_006a3a30(void) /* sub_6A3A30 */
{
    FN_ENTER(0x006a3a30);
    /* 006a3a30: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a3a34: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006a3a38: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 006a3a3b: ret 4 */ FN_RET(0x006a3a30); r_esp += 8; return;
}

void f_006a3a40(void) /* sub_6A3A40 */
{
    FN_ENTER(0x006a3a40);
    /* 006a3a40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3a41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a3a43: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a3a46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3a48: je 0x6a3a53 */ if (fZ) goto L_006a3a53;
L_006a3a4a:; BB(0x006a3a4a);
    /* 006a3a4a: je 0x6a3a53 */ if (fZ) goto L_006a3a53;
L_006a3a4c:; BB(0x006a3a4c);
    /* 006a3a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3a4d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a3a52u); f_00857e98();
    /* 006a3a52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006a3a53:; BB(0x006a3a53);
    /* 006a3a53: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a3a57: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3a59: jne 0x6a3a5f */ if (!fZ) goto L_006a3a5f;
L_006a3a5b:; BB(0x006a3a5b);
    /* 006a3a5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3a5c: ret 4 */ FN_RET(0x006a3a40); r_esp += 8; return;
L_006a3a5f:; BB(0x006a3a5f);
    /* 006a3a5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3a60: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a3a65u); f_00857e98();
    /* 006a3a65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3a66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3a67: ret 4 */ FN_RET(0x006a3a40); r_esp += 8; return;
}

void f_006a3a6c(void) /* sub_6A3A6C */
{
    FN_ENTER(0x006a3a6c);
    /* 006a3a6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3a6d: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3a6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3a71: push 0x8eb7d8 */ { u32 v = 0x8eb7d8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3a76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3a7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3a84: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3a87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3a8a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a3a8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a3a90: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a3a93: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006a3a96: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006a3a99: mov eax, ecx */ r_eax = r_ecx;
    /* 006a3a9b: mov dword ptr [eax], 0xb39cc8 */ W32((u32)(r_eax), 0xb39cc8u);
    /* 006a3aa1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a3aa8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6a3aadu); f_008171e8();
    /* 006a3aad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006a3ab0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3ab2: jne 0x6a3ac4 */ if (!fZ) goto L_006a3ac4;
L_006a3ab4:; BB(0x006a3ab4);
    /* 006a3ab4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3ab7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3abe: mov esp, ebp */ r_esp = r_ebp;
    /* 006a3ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3ac1: ret 4 */ FN_RET(0x006a3a6c); r_esp += 8; return;
L_006a3ac4:; BB(0x006a3ac4);
    /* 006a3ac4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a3ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3ac8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a3acdu); f_005c2f74();
    /* 006a3acd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3ace: jmp 0x6a3ab4 */ goto L_006a3ab4;
}

void f_006a3ad0(void) /* sub_6A3AD0 */
{
    FN_ENTER(0x006a3ad0);
    /* 006a3ad0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a3ad4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3ad6: mov dword ptr [ecx], 0xb39cd8 */ W32((u32)(r_ecx), 0xb39cd8u);
    /* 006a3adc: jne 0x6a3ae1 */ if (!fZ) goto L_006a3ae1;
L_006a3ade:; BB(0x006a3ade);
    /* 006a3ade: ret 4 */ FN_RET(0x006a3ad0); r_esp += 8; return;
L_006a3ae1:; BB(0x006a3ae1);
    /* 006a3ae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3ae2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a3ae7u); f_00857e98();
    /* 006a3ae7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3ae8: ret 4 */ FN_RET(0x006a3ad0); r_esp += 8; return;
}

void f_006a3aec(void) /* sub_6A3AEC */
{
    FN_ENTER(0x006a3aec);
    /* 006a3aec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3aed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a3aef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3af1: call 0x6a3bb4 */ r_esp -= 4; W32(r_esp, 0x6a3af6u); f_006a3bb4();
    /* 006a3af6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a3afa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3afc: jne 0x6a3b02 */ if (!fZ) goto L_006a3b02;
L_006a3afe:; BB(0x006a3afe);
    /* 006a3afe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3aff: ret 4 */ FN_RET(0x006a3aec); r_esp += 8; return;
L_006a3b02:; BB(0x006a3b02);
    /* 006a3b02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3b03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a3b08u); f_005c2f74();
    /* 006a3b08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3b09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3b0a: ret 4 */ FN_RET(0x006a3aec); r_esp += 8; return;
}

void f_006a3b10(void) /* sub_6A3B10 */
{
    FN_ENTER(0x006a3b10);
    /* 006a3b10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3b11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a3b13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3b15: call 0x6a3b34 */ r_esp -= 4; W32(r_esp, 0x6a3b1au); f_006a3b34();
    /* 006a3b1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a3b1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3b20: jne 0x6a3b26 */ if (!fZ) goto L_006a3b26;
L_006a3b22:; BB(0x006a3b22);
    /* 006a3b22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3b23: ret 4 */ FN_RET(0x006a3b10); r_esp += 8; return;
L_006a3b26:; BB(0x006a3b26);
    /* 006a3b26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3b27: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a3b2cu); f_005c2f74();
    /* 006a3b2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3b2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3b2e: ret 4 */ FN_RET(0x006a3b10); r_esp += 8; return;
}

void f_006a3b34(void) /* sub_6A3B34 */
{
    FN_ENTER(0x006a3b34);
    /* 006a3b34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3b35: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3b37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3b39: push 0x8eb7f4 */ { u32 v = 0x8eb7f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3b3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3b44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3b45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3b4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3b4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3b52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a3b55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a3b58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a3b5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a3b5e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3b61: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006a3b64: movsx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1cu));
    /* 006a3b68: mov dword ptr [eax], 0xb39cf4 */ W32((u32)(r_eax), 0xb39cf4u);
    /* 006a3b6e: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
    /* 006a3b76: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3b79: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 006a3b7c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006a3b7f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a3b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a3b84: jl 0x6a3ba9 */ if ((fS!=fO)) goto L_006a3ba9;
L_006a3b86:; BB(0x006a3b86);
    /* 006a3b86: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_006a3b89:; BB(0x006a3b89);
    /* 006a3b89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a3b90: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3b93: call 0x6a3bb4 */ r_esp -= 4; W32(r_esp, 0x6a3b98u); f_006a3bb4();
    /* 006a3b98: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a3b9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3b9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3ba5: mov esp, ebp */ r_esp = r_ebp;
    /* 006a3ba7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3ba8: ret  */ FN_RET(0x006a3b34); r_esp += 4; return;
L_006a3ba9:; BB(0x006a3ba9);
    /* 006a3ba9: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 006a3bb0: jmp 0x6a3b89 */ goto L_006a3b89;
}

void f_006a3bb4(void) /* sub_6A3BB4 */
{
    FN_ENTER(0x006a3bb4);
    /* 006a3bb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3bb5: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3bb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3bb9: push 0x8eb810 */ { u32 v = 0x8eb810u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3bbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3bc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3bcc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3bcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3bd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a3bd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a3bd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a3bdb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a3bde: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3be1: mov dword ptr [ecx], 0xb39ce4 */ W32((u32)(r_ecx), 0xb39ce4u);
    /* 006a3be7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a3bee: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6a3bf3u); f_008171e8();
    /* 006a3bf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3bf6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3bfd: mov esp, ebp */ r_esp = r_ebp;
    /* 006a3bff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3c00: ret  */ FN_RET(0x006a3bb4); r_esp += 4; return;
}

void f_006a3c04(void) /* sub_6A3C04 */
{
    FN_ENTER(0x006a3c04);
    /* 006a3c04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3c05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a3c07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3c09: call 0x6a3c28 */ r_esp -= 4; W32(r_esp, 0x6a3c0eu); f_006a3c28();
    /* 006a3c0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a3c12: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3c14: jne 0x6a3c1a */ if (!fZ) goto L_006a3c1a;
L_006a3c16:; BB(0x006a3c16);
    /* 006a3c16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3c17: ret 4 */ FN_RET(0x006a3c04); r_esp += 8; return;
L_006a3c1a:; BB(0x006a3c1a);
    /* 006a3c1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3c1b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a3c20u); f_005c2f74();
    /* 006a3c20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3c21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3c22: ret 4 */ FN_RET(0x006a3c04); r_esp += 8; return;
}

void f_006a3c28(void) /* sub_6A3C28 */
{
    FN_ENTER(0x006a3c28);
    /* 006a3c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3c29: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3c2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3c2d: push 0x8eb82c */ { u32 v = 0x8eb82cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3c32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3c39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3c40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3c43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3c46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a3c49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a3c4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a3c4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a3c52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3c55: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006a3c58: movsx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1cu));
    /* 006a3c5c: mov dword ptr [eax], 0xb39d04 */ W32((u32)(r_eax), 0xb39d04u);
    /* 006a3c62: mov dword ptr [edx + ecx*4 + 8], 0 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x0u);
    /* 006a3c6a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3c6d: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 006a3c70: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006a3c73: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a3c76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a3c78: jl 0x6a3c9d */ if ((fS!=fO)) goto L_006a3c9d;
L_006a3c7a:; BB(0x006a3c7a);
    /* 006a3c7a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_006a3c7d:; BB(0x006a3c7d);
    /* 006a3c7d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a3c84: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3c87: call 0x6a3bb4 */ r_esp -= 4; W32(r_esp, 0x6a3c8cu); f_006a3bb4();
    /* 006a3c8c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a3c8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3c92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3c99: mov esp, ebp */ r_esp = r_ebp;
    /* 006a3c9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3c9c: ret  */ FN_RET(0x006a3c28); r_esp += 4; return;
L_006a3c9d:; BB(0x006a3c9d);
    /* 006a3c9d: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 006a3ca4: jmp 0x6a3c7d */ goto L_006a3c7d;
}

void f_006a3ca8(void) /* sub_6A3CA8 */
{
    FN_ENTER(0x006a3ca8);
    /* 006a3ca8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3ca9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a3cab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3cad: call 0x6a3ccc */ r_esp -= 4; W32(r_esp, 0x6a3cb2u); f_006a3ccc();
    /* 006a3cb2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a3cb6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3cb8: jne 0x6a3cbe */ if (!fZ) goto L_006a3cbe;
L_006a3cba:; BB(0x006a3cba);
    /* 006a3cba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3cbb: ret 4 */ FN_RET(0x006a3ca8); r_esp += 8; return;
L_006a3cbe:; BB(0x006a3cbe);
    /* 006a3cbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3cbf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6a3cc4u); f_005c2f74();
    /* 006a3cc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3cc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a3cc6: ret 4 */ FN_RET(0x006a3ca8); r_esp += 8; return;
}

void f_006a3ccc(void) /* sub_6A3CCC */
{
    FN_ENTER(0x006a3ccc);
    /* 006a3ccc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3ccd: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3ccf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3cd1: push 0x8eb848 */ { u32 v = 0x8eb848u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3cd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3cdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3cdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3ce4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3ce7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3cea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006a3ced: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006a3cf0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006a3cf3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006a3cf6: mov dword ptr [ecx], 0xb39d14 */ W32((u32)(r_ecx), 0xb39d14u);
    /* 006a3cfc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3cff: mov dword ptr [eax + 0x20], 0xb39cd8 */ W32((u32)(r_eax+0x20u), 0xb39cd8u);
    /* 006a3d06: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a3d0d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3d10: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6a3d15u); f_008171e8();
    /* 006a3d15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3d18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3d1f: mov esp, ebp */ r_esp = r_ebp;
    /* 006a3d21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3d22: ret  */ FN_RET(0x006a3ccc); r_esp += 4; return;
}

void f_006a3d24(void) /* sub_6A3D24 */
{
    FN_ENTER(0x006a3d24);
    /* 006a3d24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3d25: mov edi, ecx */ r_edi = r_ecx;
    /* 006a3d27: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3d2b: mov ecx, edi */ r_ecx = r_edi;
    /* 006a3d2d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6a3d32u); f_008193cc();
    /* 006a3d32: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006a3d36: mov dword ptr [edi], 0xb39cc8 */ W32((u32)(r_edi), 0xb39cc8u);
    /* 006a3d3c: mov edx, dword ptr [0x9cba2c] */ r_edx = R32((u32)(0x9cba2cu));
    /* 006a3d42: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 006a3d49: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006a3d4c: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3d51: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006a3d55: mov eax, edi */ r_eax = r_edi;
    /* 006a3d57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3d58: ret 4 */ FN_RET(0x006a3d24); r_esp += 8; return;
}

void f_006a3d5c(void) /* sub_6A3D5C */
{
    FN_ENTER(0x006a3d5c);
    /* 006a3d5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3d5d: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a3d60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3d62: je 0x6a3dd1 */ if (fZ) goto L_006a3dd1;
L_006a3d64:; BB(0x006a3d64);
    /* 006a3d64: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a3d67: mov ebx, eax */ r_ebx = r_eax;
L_006a3d69:; BB(0x006a3d69);
    /* 006a3d69: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a3d6c: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3d72: jne 0x6a3d8a */ if (!fZ) goto L_006a3d8a;
L_006a3d74:; BB(0x006a3d74);
    /* 006a3d74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3d76: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a3d7bu); f_008173b4();
    /* 006a3d7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3d7d: je 0x6a3d86 */ if (fZ) goto L_006a3d86;
L_006a3d7f:; BB(0x006a3d7f);
    /* 006a3d7f: mov edx, 1 */ r_edx = 0x1u;
    /* 006a3d84: jmp 0x6a3d8c */ goto L_006a3d8c;
L_006a3d86:; BB(0x006a3d86);
    /* 006a3d86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a3d88: jmp 0x6a3d8c */ goto L_006a3d8c;
L_006a3d8a:; BB(0x006a3d8a);
    /* 006a3d8a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a3d8c:; BB(0x006a3d8c);
    /* 006a3d8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3d8e: je 0x6a3dbc */ if (fZ) goto L_006a3dbc;
L_006a3d90:; BB(0x006a3d90);
    /* 006a3d90: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a3d93: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a3d98u); f_008173b4();
    /* 006a3d98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3d9a: jne 0x6a3da0 */ if (!fZ) goto L_006a3da0;
L_006a3d9c:; BB(0x006a3d9c);
    /* 006a3d9c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a3d9e: jmp 0x6a3da3 */ goto L_006a3da3;
L_006a3da0:; BB(0x006a3da0);
    /* 006a3da0: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_006a3da3:; BB(0x006a3da3);
    /* 006a3da3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3da5: je 0x6a3dbc */ if (fZ) goto L_006a3dbc;
L_006a3da7:; BB(0x006a3da7);
    /* 006a3da7: mov edx, dword ptr [edx + 0xd8] */ r_edx = R32((u32)(r_edx+0xd8u));
    /* 006a3dad: cmp edx, dword ptr [0xa94370] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa94370u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a3db3: je 0x6a3dda */ if (fZ) goto L_006a3dda;
L_006a3db5:; BB(0x006a3db5);
    /* 006a3db5: add dword ptr [0xa94374], 1 */ { u32 ad = (u32)(0xa94374u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a3dbc:; BB(0x006a3dbc);
    /* 006a3dbc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a3dbe: call 0x6a3d5c */ r_esp -= 4; W32(r_esp, 0x6a3dc3u); f_006a3d5c();
    /* 006a3dc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3dc5: jne 0x6a3dd5 */ if (!fZ) goto L_006a3dd5;
L_006a3dc7:; BB(0x006a3dc7);
    /* 006a3dc7: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a3dca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3dcc: jne 0x6a3d69 */ if (!fZ) goto L_006a3d69;
L_006a3dce:; BB(0x006a3dce);
    /* 006a3dce: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a3dd1:; BB(0x006a3dd1);
    /* 006a3dd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3dd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3dd4: ret  */ FN_RET(0x006a3d5c); r_esp += 4; return;
L_006a3dd5:; BB(0x006a3dd5);
    /* 006a3dd5: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a3dd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3dd9: ret  */ FN_RET(0x006a3d5c); r_esp += 4; return;
L_006a3dda:; BB(0x006a3dda);
    /* 006a3dda: mov eax, ebx */ r_eax = r_ebx;
    /* 006a3ddc: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a3ddf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3de0: ret  */ FN_RET(0x006a3d5c); r_esp += 4; return;
}

void f_006a3de4(void) /* sub_6A3DE4 */
{
    FN_ENTER(0x006a3de4);
    /* 006a3de4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a3de8: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 006a3deb: ret 4 */ FN_RET(0x006a3de4); r_esp += 8; return;
}

void f_006a3df0(void) /* sub_6A3DF0 */
{
    FN_ENTER(0x006a3df0);
    /* 006a3df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3df1: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3df3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3df5: push 0x8eb870 */ { u32 v = 0x8eb870u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3dfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3e01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3e08: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3e0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3e0e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a3e11: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a3e14: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a3e17: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006a3e1a: mov dword ptr [ecx + 8], 1 */ W32((u32)(r_ecx+0x8u), 0x1u);
    /* 006a3e21: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006a3e28: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3e2a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a3e2fu); f_005caba4();
    /* 006a3e2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3e30: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006a3e33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3e35: je 0x6a3e65 */ if (fZ) goto L_006a3e65;
L_006a3e37:; BB(0x006a3e37);
    /* 006a3e37: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006a3e3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a3e45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a3e48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3e4a: mov ecx, eax */ r_ecx = r_eax;
    /* 006a3e4c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3e4f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3e52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a3e53: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3e59: call 0x6a3e7c */ r_esp -= 4; W32(r_esp, 0x6a3e5eu); f_006a3e7c();
    /* 006a3e5e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006a3e65:; BB(0x006a3e65);
    /* 006a3e65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a3e68: add dword ptr [eax + 4], 1 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a3e6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3e6f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3e76: mov esp, ebp */ r_esp = r_ebp;
    /* 006a3e78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3e79: ret 8 */ FN_RET(0x006a3df0); r_esp += 12; return;
}

void f_006a3e7c(void) /* sub_6A3E7C */
{
    FN_ENTER(0x006a3e7c);
    /* 006a3e7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a3e7d: mov edi, ecx */ r_edi = r_ecx;
    /* 006a3e7f: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3e83: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3e87: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3e8b: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3e8f: mov ecx, edi */ r_ecx = r_edi;
    /* 006a3e91: call 0x6a3eb4 */ r_esp -= 4; W32(r_esp, 0x6a3e96u); f_006a3eb4();
    /* 006a3e96: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006a3e9a: mov dword ptr [edi], 0xb39cf4 */ W32((u32)(r_edi), 0xb39cf4u);
    /* 006a3ea0: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 006a3ea3: mov ecx, edi */ r_ecx = r_edi;
    /* 006a3ea5: mov byte ptr [edi + 0x1d], 0 */ W8((u32)(r_edi+0x1du), 0x0u);
    /* 006a3ea9: call 0x6a6e00 */ r_esp -= 4; W32(r_esp, 0x6a3eaeu); f_006a6e00();
    /* 006a3eae: mov eax, edi */ r_eax = r_edi;
    /* 006a3eb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a3eb1: ret 0x14 */ FN_RET(0x006a3e7c); r_esp += 24; return;
}

void f_006a3eb4(void) /* sub_6A3EB4 */
{
    FN_ENTER(0x006a3eb4);
    /* 006a3eb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3eb5: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3eb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3eb9: push 0x8eb88c */ { u32 v = 0x8eb88cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3ebe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3ec5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3ecc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3ecf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3ed2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006a3ed5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006a3ed8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006a3edb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006a3ede: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a3ee1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006a3ee4: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006a3ee7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a3eea: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006a3eed: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006a3ef0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006a3ef3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6a3ef8u); f_008193cc();
    /* 006a3ef8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a3eff: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a3f02: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a3f05: mov dword ptr [eax], 0xb39ce4 */ W32((u32)(r_eax), 0xb39ce4u);
    /* 006a3f0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3f0d: jne 0x6a3f22 */ if (!fZ) goto L_006a3f22;
L_006a3f0f:; BB(0x006a3f0f);
    /* 006a3f0f: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006a3f14: mov word ptr [eax + 0x20], dx */ W16((u32)(r_eax+0x20u), (u16)r_edx);
    /* 006a3f18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3f1a: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 006a3f1d: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 006a3f20: jmp 0x6a3f45 */ goto L_006a3f45;
L_006a3f22:; BB(0x006a3f22);
    /* 006a3f22: mov ecx, edx */ r_ecx = r_edx;
    /* 006a3f24: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006a3f28: mov word ptr [eax + 0x20], dx */ W16((u32)(r_eax+0x20u), (u16)r_edx);
    /* 006a3f2c: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x6a3f31u); f_007ba980();
    /* 006a3f31: mov edx, eax */ r_edx = r_eax;
    /* 006a3f33: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a3f36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a3f39: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006a3f3c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 006a3f3f: mov ebx, dword ptr [ecx + 0x60] */ r_ebx = R32((u32)(r_ecx+0x60u));
    /* 006a3f42: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
L_006a3f45:; BB(0x006a3f45);
    /* 006a3f45: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006a3f48: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3f4b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006a3f4d: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 006a3f50: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 006a3f53: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a3f56: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 006a3f59: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 006a3f5c: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a3f5f: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 006a3f62: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a3f65: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a3f68: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 006a3f6f: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 006a3f72: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 006a3f79: mov eax, edx */ r_eax = r_edx;
    /* 006a3f7b: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 006a3f82: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 006a3f89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a3f8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a3f93: mov esp, ebp */ r_esp = r_ebp;
    /* 006a3f95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a3f96: ret 0x10 */ FN_RET(0x006a3eb4); r_esp += 20; return;
}

void f_006a3f9c(void) /* sub_6A3F9C */
{
    FN_ENTER(0x006a3f9c);
    /* 006a3f9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a3f9d: mov ebp, esp */ r_ebp = r_esp;
    /* 006a3f9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a3fa1: push 0x8eb8b4 */ { u32 v = 0x8eb8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a3fa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a3fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3fad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a3fb4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a3fb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a3fba: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 006a3fbd: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 006a3fc0: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 006a3fc3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006a3fc6: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 006a3fc9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006a3fcc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a3fce: lea edx, [ecx + 8] */ r_edx = (u32)(r_ecx+0x8u);
    /* 006a3fd1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a3fd4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006a3fd7: lea eax, [ecx + 0xa8] */ r_eax = (u32)(r_ecx+0xa8u);
    /* 006a3fdd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006a3fe0: mov eax, 0 */ r_eax = 0x0u;
    /* 006a3fe5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a3fe8: jle 0x6a40a5 */ if ((fZ||fS!=fO)) goto L_006a40a5;
L_006a3fee:; BB(0x006a3fee);
    /* 006a3fee: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a3ff1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006a3ff3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a3ff5: jne 0x6a4091 */ if (!fZ) goto L_006a4091;
L_006a3ffb:; BB(0x006a3ffb);
    /* 006a3ffb: mov ecx, eax */ r_ecx = r_eax;
    /* 006a3ffd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a4000: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a4003: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006a4005: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 006a400b: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006a400d: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 006a400f: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006a4012: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006a4019: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 006a401c: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 006a401f: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 006a4022: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006a4025: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006a4028: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006a402b: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006a402e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006a4031: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006a4034: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 006a4037: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006a403a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a403fu); f_005caba4();
    /* 006a403f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a4040: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006a4043: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4045: je 0x6a4077 */ if (fZ) goto L_006a4077;
L_006a4047:; BB(0x006a4047);
    /* 006a4047: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006a404e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a4055: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a4058: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a405b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a405c: mov ecx, eax */ r_ecx = r_eax;
    /* 006a405e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4061: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4064: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4065: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a406b: call 0x6a40c0 */ r_esp -= 4; W32(r_esp, 0x6a4070u); f_006a40c0();
    /* 006a4070: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006a4077:; BB(0x006a4077);
    /* 006a4077: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a407e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a4081: add dword ptr [eax + 4], 1 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a4085: add dword ptr [ebp - 0x20], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a4089: add dword ptr [ebp - 0x1c], 0x1c */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a408d: add dword ptr [ebp - 0x18], 0x1c */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a4091:; BB(0x006a4091);
    /* 006a4091: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a4094: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006a4097: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a409a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a409d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a409f: jl 0x6a3fee */ if ((fS!=fO)) goto L_006a3fee;
L_006a40a5:; BB(0x006a40a5);
    /* 006a40a5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006a40a8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a40ab: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a40ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a40b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a40b8: mov esp, ebp */ r_esp = r_ebp;
    /* 006a40ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a40bb: ret 0x10 */ FN_RET(0x006a3f9c); r_esp += 20; return;
}

