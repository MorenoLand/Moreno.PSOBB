#include "protos.h"

void f_007b3008(void) /* sub_7B3008 */
{
    FN_ENTER(0x007b3008);
    /* 007b3008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3009: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b300c: mov edi, ecx */ r_edi = r_ecx;
    /* 007b300e: movsx eax, word ptr [edi + 0x5e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x5eu));
    /* 007b3012: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3014: je 0x7b319d */ if (fZ) goto L_007b319d;
L_007b301a:; BB(0x007b301a);
    /* 007b301a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b301d: jne 0x7b30c9 */ if (!fZ) goto L_007b30c9;
L_007b3023:; BB(0x007b3023);
    /* 007b3023: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b3026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3028: je 0x7b3235 */ if (fZ) goto L_007b3235;
L_007b302e:; BB(0x007b302e);
    /* 007b302e: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 007b3033: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b3035: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 007b303a: movzx edx, word ptr [eax + 0x8a] */ r_edx = (u32)R16((u32)(r_eax+0x8au));
    /* 007b3041: movzx eax, word ptr [eax + 0x7c] */ r_eax = (u32)R16((u32)(r_eax+0x7cu));
    /* 007b3045: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 007b304a: mov edx, 1 */ r_edx = 0x1u;
    /* 007b304f: mov byte ptr [esp + 8], 0x44 */ W8((u32)(r_esp+0x8u), 0x44u);
    /* 007b3054: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 007b3059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b305a: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x7b305fu); f_00578c74();
    /* 007b305f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3062: je 0x7b3235 */ if (fZ) goto L_007b3235;
L_007b3068:; BB(0x007b3068);
    /* 007b3068: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b306b: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007b3071: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b3074: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b3077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3078: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3079: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x7b307eu); f_007a90a8();
    /* 007b307e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b3081: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b3084: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 007b3089: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 007b308d: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007b3093: mov dword ptr [eax + 0x8d0], 1 */ W32((u32)(r_eax+0x8d0u), 0x1u);
    /* 007b309d: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b30a0: mov edx, dword ptr [edx + 0x7c] */ r_edx = R32((u32)(r_edx+0x7cu));
    /* 007b30a3: mov word ptr [eax + 0x8d4], dx */ W16((u32)(r_eax+0x8d4u), (u16)r_edx);
    /* 007b30aa: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b30ad: mov edx, dword ptr [edx + 0x84] */ r_edx = R32((u32)(r_edx+0x84u));
    /* 007b30b3: mov word ptr [eax + 0x8d6], dx */ W16((u32)(r_eax+0x8d6u), (u16)r_edx);
    /* 007b30ba: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b30bfu); f_008003e0();
    /* 007b30bf: add word ptr [edi + 0x5e], 1 */ { u32 ad = (u32)(r_edi+0x5eu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007b30c4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b30c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b30c8: ret  */ FN_RET(0x007b3008); r_esp += 4; return;
L_007b30c9:; BB(0x007b30c9);
    /* 007b30c9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b30cc: jne 0x7b3235 */ if (!fZ) goto L_007b3235;
L_007b30d2:; BB(0x007b30d2);
    /* 007b30d2: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b30d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b30d7: je 0x7b3235 */ if (fZ) goto L_007b3235;
L_007b30dd:; BB(0x007b30dd);
    /* 007b30dd: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 007b30e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b30e4: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 007b30e9: movzx edx, word ptr [eax + 0x8a] */ r_edx = (u32)R16((u32)(r_eax+0x8au));
    /* 007b30f0: movzx eax, word ptr [eax + 0x7c] */ r_eax = (u32)R16((u32)(r_eax+0x7cu));
    /* 007b30f4: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 007b30f9: mov edx, 1 */ r_edx = 0x1u;
    /* 007b30fe: mov byte ptr [esp], 0x45 */ W8((u32)(r_esp), 0x45u);
    /* 007b3102: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 007b3107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3108: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x7b310du); f_00578c74();
    /* 007b310d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b310e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3110: je 0x7b3235 */ if (fZ) goto L_007b3235;
L_007b3116:; BB(0x007b3116);
    /* 007b3116: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b3119: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007b311f: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b3122: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b3125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3126: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3127: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x7b312cu); f_007a90a8();
    /* 007b312c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b312f: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b3132: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 007b3137: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b313a: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007b3140: mov dword ptr [eax + 0x8d0], 1 */ W32((u32)(r_eax+0x8d0u), 0x1u);
    /* 007b314a: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b314d: mov edx, dword ptr [edx + 0x7c] */ r_edx = R32((u32)(r_edx+0x7cu));
    /* 007b3150: mov word ptr [eax + 0x8d4], dx */ W16((u32)(r_eax+0x8d4u), (u16)r_edx);
    /* 007b3157: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b315a: mov edx, dword ptr [edx + 0x84] */ r_edx = R32((u32)(r_edx+0x84u));
    /* 007b3160: mov word ptr [eax + 0x8d6], dx */ W16((u32)(r_eax+0x8d6u), (u16)r_edx);
    /* 007b3167: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b316cu); f_008003e0();
    /* 007b316c: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007b316f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b3171: mov word ptr [edi + 0x5e], ax */ W16((u32)(r_edi+0x5eu), (u16)r_eax);
    /* 007b3175: mov word ptr [edi + 0x5c], ax */ W16((u32)(r_edi+0x5cu), (u16)r_eax);
    /* 007b3179: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b317c: je 0x7b3235 */ if (fZ) goto L_007b3235;
L_007b3182:; BB(0x007b3182);
    /* 007b3182: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b3188: mov dword ptr [edi + 0x24], 0xd */ W32((u32)(r_edi+0x24u), 0xdu);
    /* 007b318f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b3192: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b3198: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b319b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b319c: ret  */ FN_RET(0x007b3008); r_esp += 4; return;
L_007b319d:; BB(0x007b319d);
    /* 007b319d: mov ecx, dword ptr [edi + 0x78] */ r_ecx = R32((u32)(r_edi+0x78u));
    /* 007b31a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b31a2: je 0x7b3235 */ if (fZ) goto L_007b3235;
L_007b31a8:; BB(0x007b31a8);
    /* 007b31a8: movzx eax, word ptr [ecx + 0x8a] */ r_eax = (u32)R16((u32)(r_ecx+0x8au));
    /* 007b31af: mov byte ptr [esp + 0x11], 2 */ W8((u32)(r_esp+0x11u), 0x2u);
    /* 007b31b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b31b6: mov byte ptr [esp + 0x10], 0x43 */ W8((u32)(r_esp+0x10u), 0x43u);
    /* 007b31bb: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 007b31c0: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 007b31c5: movzx eax, word ptr [ecx + 0x7c] */ r_eax = (u32)R16((u32)(r_ecx+0x7cu));
    /* 007b31c9: mov word ptr [esp + 0x16], dx */ W16((u32)(r_esp+0x16u), (u16)r_edx);
    /* 007b31ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b31cf: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x7b31d4u); f_00578c74();
    /* 007b31d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b31d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b31d7: je 0x7b3235 */ if (fZ) goto L_007b3235;
L_007b31d9:; BB(0x007b31d9);
    /* 007b31d9: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b31dc: mov edx, dword ptr [edx + 0x94] */ r_edx = R32((u32)(r_edx+0x94u));
    /* 007b31e2: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b31e5: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b31e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b31e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b31ea: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x7b31efu); f_007a90a8();
    /* 007b31ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b31f2: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b31f5: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 007b31fa: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 007b31fe: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007b3204: mov dword ptr [eax + 0x8d0], 1 */ W32((u32)(r_eax+0x8d0u), 0x1u);
    /* 007b320e: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b3211: mov edx, dword ptr [edx + 0x7c] */ r_edx = R32((u32)(r_edx+0x7cu));
    /* 007b3214: mov word ptr [eax + 0x8d4], dx */ W16((u32)(r_eax+0x8d4u), (u16)r_edx);
    /* 007b321b: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b321e: mov edx, dword ptr [edx + 0x84] */ r_edx = R32((u32)(r_edx+0x84u));
    /* 007b3224: mov word ptr [eax + 0x8d6], dx */ W16((u32)(r_eax+0x8d6u), (u16)r_edx);
    /* 007b322b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b3230u); f_008003e0();
    /* 007b3230: add word ptr [edi + 0x5e], 1 */ { u32 ad = (u32)(r_edi+0x5eu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_007b3235:; BB(0x007b3235);
    /* 007b3235: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3238: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3239: ret  */ FN_RET(0x007b3008); r_esp += 4; return;
}

void f_007b323c(void)
{
    FN_ENTER(0x007b323c);
    /* 007b323c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b323d: mov ebp, esp */ r_ebp = r_esp;
    /* 007b323f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3241: push 0x8f5f6e */ { u32 v = 0x8f5f6eu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3246: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007b324c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b324d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007b3254: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3257: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007b325a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007b325d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007b3260: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007b3263: mov dword ptr [0xaacab0], 0x3f800000 */ W32((u32)(0xaacab0u), 0x3f800000u);
    /* 007b326d: mov dword ptr [0xaacab4], 0x41000000 */ W32((u32)(0xaacab4u), 0x41000000u);
    /* 007b3277: mov dword ptr [0xaacab8], 0x3fc00000 */ W32((u32)(0xaacab8u), 0x3fc00000u);
    /* 007b3281: mov dword ptr [ebp - 0x38], 0xaac560 */ W32((u32)(r_ebp+0xffffffc8u), 0xaac560u);
    /* 007b3288: mov dword ptr [ebp - 0x30], 0xaac940 */ W32((u32)(r_ebp+0xffffffd0u), 0xaac940u);
    /* 007b328f: mov dword ptr [ebp - 0x28], 0xaac940 */ W32((u32)(r_ebp+0xffffffd8u), 0xaac940u);
    /* 007b3296: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b329b: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32a0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007b32a2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32a4: push 0xaac944 */ { u32 v = 0xaac944u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32a9: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7b32aeu); f_00858736();
    /* 007b32ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007b32b5: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32ba: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32bf: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007b32c1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32c3: push 0xaac97c */ { u32 v = 0xaac97cu; r_esp -= 4; W32(r_esp, v); }
    /* 007b32c8: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7b32cdu); f_00858736();
    /* 007b32cd: mov dword ptr [0xaac940], 0 */ W32((u32)(0xaac940u), 0x0u);
    /* 007b32d7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007b32de: mov dword ptr [ebp - 0x20], 0xaac9b4 */ W32((u32)(r_ebp+0xffffffe0u), 0xaac9b4u);
    /* 007b32e5: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32ea: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32ef: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007b32f1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32f3: push 0xaac9b8 */ { u32 v = 0xaac9b8u; r_esp -= 4; W32(r_esp, v); }
    /* 007b32f8: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7b32fdu); f_00858736();
    /* 007b32fd: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007b3304: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3309: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007b330e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3310: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3312: push 0xaac9f0 */ { u32 v = 0xaac9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3317: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7b331cu); f_00858736();
    /* 007b331c: mov dword ptr [0xaac9b4], 0 */ W32((u32)(0xaac9b4u), 0x0u);
    /* 007b3326: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007b332d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007b332f:; BB(0x007b332f);
    /* 007b332f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007b3332: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b3334: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 007b3337: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b3339: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b333b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b333d: mov byte ptr [edx + 0xaac565], 0xff */ W8((u32)(r_edx+0xaac565u), 0xffu);
    /* 007b3344: lea ecx, [edx + 0xaac56c] */ r_ecx = (u32)(r_edx+0xaac56cu);
    /* 007b334a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b334c: mov byte ptr [edx + 0xaac564], al */ W8((u32)(r_edx+0xaac564u), (u8)r_eax);
    /* 007b3352: mov dword ptr [edx + 0xaac568], eax */ W32((u32)(r_edx+0xaac568u), r_eax);
    /* 007b3358: mov byte ptr [edx + 0xaac567], al */ W8((u32)(r_edx+0xaac567u), (u8)r_eax);
    /* 007b335e: mov byte ptr [edx + 0xaac566], al */ W8((u32)(r_edx+0xaac566u), (u8)r_eax);
    /* 007b3364: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x7b3369u); f_005d6a3c();
    /* 007b3369: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b336c: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b336f: jl 0x7b332f */ if ((fS!=fO)) goto L_007b332f;
L_007b3371:; BB(0x007b3371);
    /* 007b3371: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007b3378: push 0x7b339c */ { u32 v = 0x7b339cu; r_esp -= 4; W32(r_esp, v); }
    /* 007b337d: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x7b3382u); f_0085909d();
    /* 007b3382: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3383: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007b3386: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007b3389: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007b338c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007b338f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007b3396: mov esp, ebp */ r_esp = r_ebp;
    /* 007b3398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3399: ret  */ FN_RET(0x007b323c); r_esp += 4; return;
}

void f_007b339c(void) /* sub_7B339C */
{
    FN_ENTER(0x007b339c);
    /* 007b339c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b339d: mov ebp, esp */ r_ebp = r_esp;
    /* 007b339f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b33a1: push 0x8f5fd6 */ { u32 v = 0x8f5fd6u; r_esp -= 4; W32(r_esp, v); }
    /* 007b33a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007b33ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b33ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007b33b4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b33b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007b33ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007b33bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007b33c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007b33c3: mov dword ptr [ebp - 0x38], 0xaac560 */ W32((u32)(r_ebp+0xffffffc8u), 0xaac560u);
    /* 007b33ca: mov dword ptr [ebp - 0x30], 0xaac940 */ W32((u32)(r_ebp+0xffffffd0u), 0xaac940u);
    /* 007b33d1: mov dword ptr [ebp - 0x28], 0xaac9b4 */ W32((u32)(r_ebp+0xffffffd8u), 0xaac9b4u);
    /* 007b33d8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007b33df: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b33e4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007b33e6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b33e8: push 0xaac9f0 */ { u32 v = 0xaac9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b33ed: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7b33f2u); f_008586d6();
    /* 007b33f2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007b33f9: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b33fe: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3400: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3402: push 0xaac9b8 */ { u32 v = 0xaac9b8u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3407: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7b340cu); f_008586d6();
    /* 007b340c: mov dword ptr [ebp - 0x20], 0xaac940 */ W32((u32)(r_ebp+0xffffffe0u), 0xaac940u);
    /* 007b3413: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007b341a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b341f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3421: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3423: push 0xaac97c */ { u32 v = 0xaac97cu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3428: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7b342du); f_008586d6();
    /* 007b342d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007b3434: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3439: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007b343b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b343d: push 0xaac944 */ { u32 v = 0xaac944u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3442: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7b3447u); f_008586d6();
    /* 007b3447: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007b344a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007b3451: mov esp, ebp */ r_esp = r_ebp;
    /* 007b3453: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3454: ret  */ FN_RET(0x007b339c); r_esp += 4; return;
}

void f_007b3458(void) /* sub_7B3458 */
{
    FN_ENTER(0x007b3458);
    /* 007b3458: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 007b345b: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b3461: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3463: je 0x7b34bf */ if (fZ) goto L_007b34bf;
L_007b3465:; BB(0x007b3465);
    /* 007b3465: fld dword ptr [0x97dcdc] */ FPUSH(R_F32((u32)(0x97dcdcu)));
    /* 007b346b: fld dword ptr [0x97dcd8] */ FPUSH(R_F32((u32)(0x97dcd8u)));
    /* 007b3471: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 007b3474: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007b3476: fstp dword ptr [ecx + 0xd0] */ W_F32((u32)(r_ecx+0xd0u), ST(0)); FPOP();
    /* 007b347c: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b3482: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 007b3485: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007b3487: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b3489: fstp dword ptr [ecx + 0xd4] */ W_F32((u32)(r_ecx+0xd4u), ST(0)); FPOP();
    /* 007b348f: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b3495: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 007b3498: fstp dword ptr [ecx + 0xd8] */ W_F32((u32)(r_ecx+0xd8u), ST(0)); FPOP();
    /* 007b349e: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 007b34a4: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007b34a7: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 007b34ad: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007b34b0: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 007b34b6: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 007b34b9: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
L_007b34bf:; BB(0x007b34bf);
    /* 007b34bf: ret  */ FN_RET(0x007b3458); r_esp += 4; return;
}

void f_007b34c0(void) /* sub_7B34C0 */
{
    FN_ENTER(0x007b34c0);
    /* 007b34c0: mov eax, dword ptr [0xaacac0] */ r_eax = R32((u32)(0xaacac0u));
    /* 007b34c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b34c7: je 0x7b34ca */ if (fZ) goto L_007b34ca;
L_007b34c9:; BB(0x007b34c9);
    /* 007b34c9: ret  */ FN_RET(0x007b34c0); r_esp += 4; return;
L_007b34ca:; BB(0x007b34ca);
    /* 007b34ca: push 0x1c00 */ { u32 v = 0x1c00u; r_esp -= 4; W32(r_esp, v); }
    /* 007b34cf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7b34d4u); f_008581c5();
    /* 007b34d4: mov dword ptr [0xaacac0], eax */ W32((u32)(0xaacac0u), r_eax);
    /* 007b34d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b34da: ret  */ FN_RET(0x007b34c0); r_esp += 4; return;
}

void f_007b34dc(void) /* sub_7B34DC */
{
    FN_ENTER(0x007b34dc);
    /* 007b34dc: mov dword ptr [0xaacabc], 1 */ W32((u32)(0xaacabcu), 0x1u);
    /* 007b34e6: ret  */ FN_RET(0x007b34dc); r_esp += 4; return;
}

void f_007b34e8(void) /* sub_7B34E8 */
{
    FN_ENTER(0x007b34e8);
    /* 007b34e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b34e9: mov esi, ecx */ r_esi = r_ecx;
    /* 007b34eb: mov eax, dword ptr [esi + 0x74] */ r_eax = R32((u32)(r_esi+0x74u));
    /* 007b34ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b34f0: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 007b34f6: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 007b34fc: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 007b34ff: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 007b3505: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 007b350b: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007b350e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3510: jne 0x7b3520 */ if (!fZ) goto L_007b3520;
L_007b3512:; BB(0x007b3512);
    /* 007b3512: mov ecx, esi */ r_ecx = r_esi;
    /* 007b3514: call 0x7b3458 */ r_esp -= 4; W32(r_esp, 0x7b3519u); f_007b3458();
    /* 007b3519: mov dword ptr [esi + 0x28], 1 */ W32((u32)(r_esi+0x28u), 0x1u);
L_007b3520:; BB(0x007b3520);
    /* 007b3520: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b3521: ret  */ FN_RET(0x007b34e8); r_esp += 4; return;
}

void f_007b3524(void) /* sub_7B3524 */
{
    FN_ENTER(0x007b3524);
    /* 007b3524: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3525: mov ebp, esp */ r_ebp = r_esp;
    /* 007b3527: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3529: push 0x8f5ff0 */ { u32 v = 0x8f5ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b352e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007b3534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3535: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007b353c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b353f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007b3542: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007b3545: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007b3548: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007b354b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007b354e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007b3551: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007b3558: mov eax, ecx */ r_eax = r_ecx;
    /* 007b355a: mov dword ptr [eax], 0xb46638 */ W32((u32)(r_eax), 0xb46638u);
    /* 007b3560: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007b3562:; BB(0x007b3562);
    /* 007b3562: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3563: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3568u); f_0068d5a8();
    /* 007b3568: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b356b: je 0x7b359f */ if (fZ) goto L_007b359f;
L_007b356d:; BB(0x007b356d);
    /* 007b356d: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b3574: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3577: jne 0x7b3583 */ if (!fZ) goto L_007b3583;
L_007b3579:; BB(0x007b3579);
    /* 007b3579: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b357b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b357d: mov ecx, eax */ r_ecx = r_eax;
    /* 007b357f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7b3581u); call_ind(t); }
    /* 007b3581: jmp 0x7b359f */ goto L_007b359f;
L_007b3583:; BB(0x007b3583);
    /* 007b3583: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3586: jne 0x7b359f */ if (!fZ) goto L_007b359f;
L_007b3588:; BB(0x007b3588);
    /* 007b3588: movzx edx, word ptr [eax + 0x750] */ r_edx = (u32)R16((u32)(r_eax+0x750u));
    /* 007b358f: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3595: jne 0x7b359f */ if (!fZ) goto L_007b359f;
L_007b3597:; BB(0x007b3597);
    /* 007b3597: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3599: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b359b: mov ecx, eax */ r_ecx = r_eax;
    /* 007b359d: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7b359fu); call_ind(t); }
L_007b359f:; BB(0x007b359f);
    /* 007b359f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b35a2: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b35a5: jl 0x7b3562 */ if ((fS!=fO)) goto L_007b3562;
L_007b35a7:; BB(0x007b35a7);
    /* 007b35a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007b35ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007b35b1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7b35b6u); f_008171e8();
    /* 007b35b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007b35b9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b35bb: jne 0x7b35d6 */ if (!fZ) goto L_007b35d6;
L_007b35bd:; BB(0x007b35bd);
    /* 007b35bd: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007b35c0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007b35c3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007b35c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007b35c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007b35d0: mov esp, ebp */ r_esp = r_ebp;
    /* 007b35d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b35d3: ret 4 */ FN_RET(0x007b3524); r_esp += 8; return;
L_007b35d6:; BB(0x007b35d6);
    /* 007b35d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007b35d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b35da: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7b35dfu); f_005c2f74();
    /* 007b35df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b35e0: jmp 0x7b35bd */ goto L_007b35bd;
}

void f_007b35e4(void) /* sub_7B35E4 */
{
    FN_ENTER(0x007b35e4);
    /* 007b35e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b35e5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b35e8: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 007b35ec: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b35f0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b35f5u); f_0068d5a8();
    /* 007b35f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b35f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b35f8: je 0x7b370c */ if (fZ) goto L_007b370c;
L_007b35fe:; BB(0x007b35fe);
    /* 007b35fe: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007b3601: ja 0x7b370c */ if ((!fC&&!fZ)) goto L_007b370c;
L_007b3607:; BB(0x007b3607);
    /* 007b3607: mov edx, dword ptr [edi*4 + 0x97de60] */ r_edx = R32((u32)(r_edi*4+0x97de60u));
    /* 007b360e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b35e4); r_esp += 4; return;
}

void f_007b3610(void)
{
    FN_ENTER(0x007b3610);
    /* 007b3610: movzx edx, word ptr [eax + 0x2be] */ r_edx = (u32)R16((u32)(r_eax+0x2beu));
    /* 007b3617: mov word ptr [eax + 0x336], dx */ W16((u32)(r_eax+0x336u), (u16)r_edx);
    /* 007b361e: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b3610); r_esp += 4; return;
}

void f_007b3623(void)
{
    FN_ENTER(0x007b3623);
    /* 007b3623: movsx edx, word ptr [eax + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bcu));
    /* 007b362a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b362b: mov ecx, eax */ r_ecx = r_eax;
    /* 007b362d: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x7b3632u); f_00770b58();
    /* 007b3632: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b3623); r_esp += 4; return;
}

void f_007b3637(void)
{
    FN_ENTER(0x007b3637);
    /* 007b3637: mov edx, dword ptr [0x97de58] */ r_edx = R32((u32)(0x97de58u));
    /* 007b363d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007b363f: mov dword ptr [esp + 4], 0x41a00000 */ W32((u32)(r_esp+0x4u), 0x41a00000u);
    /* 007b3647: mov ecx, eax */ r_ecx = r_eax;
    /* 007b3649: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007b364c: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3651: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3652: call dword ptr [edi + 0xd8] */ { u32 t = R32((u32)(r_edi+0xd8u)); r_esp -= 4; W32(r_esp, 0x7b3658u); call_ind(t); }
    /* 007b3658: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b3637); r_esp += 4; return;
}

void f_007b365d(void)
{
    FN_ENTER(0x007b365d);
    /* 007b365d: mov edx, dword ptr [0x97de50] */ r_edx = R32((u32)(0x97de50u));
    /* 007b3663: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007b3665: mov dword ptr [esp + 0xc], 0x41a00000 */ W32((u32)(r_esp+0xcu), 0x41a00000u);
    /* 007b366d: mov ecx, eax */ r_ecx = r_eax;
    /* 007b366f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007b3673: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3678: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3679: call dword ptr [edi + 0xd4] */ { u32 t = R32((u32)(r_edi+0xd4u)); r_esp -= 4; W32(r_esp, 0x7b367fu); call_ind(t); }
    /* 007b367f: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b365d); r_esp += 4; return;
}

void f_007b3684(void)
{
    FN_ENTER(0x007b3684);
    /* 007b3684: mov edx, dword ptr [0x97de48] */ r_edx = R32((u32)(0x97de48u));
    /* 007b368a: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007b368c: mov dword ptr [esp + 0x14], 0x41a00000 */ W32((u32)(r_esp+0x14u), 0x41a00000u);
    /* 007b3694: mov ecx, eax */ r_ecx = r_eax;
    /* 007b3696: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007b369a: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007b369f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b36a0: call dword ptr [edi + 0xd8] */ { u32 t = R32((u32)(r_edi+0xd8u)); r_esp -= 4; W32(r_esp, 0x7b36a6u); call_ind(t); }
    /* 007b36a6: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b3684); r_esp += 4; return;
}

void f_007b36a8(void)
{
    FN_ENTER(0x007b36a8);
    /* 007b36a8: mov edx, dword ptr [0x97de40] */ r_edx = R32((u32)(0x97de40u));
    /* 007b36ae: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007b36b0: mov dword ptr [esp + 0x1c], 0x41a00000 */ W32((u32)(r_esp+0x1cu), 0x41a00000u);
    /* 007b36b8: mov ecx, eax */ r_ecx = r_eax;
    /* 007b36ba: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007b36be: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007b36c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b36c4: call dword ptr [edi + 0xd4] */ { u32 t = R32((u32)(r_edi+0xd4u)); r_esp -= 4; W32(r_esp, 0x7b36cau); call_ind(t); }
    /* 007b36ca: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b36a8); r_esp += 4; return;
}

void f_007b36cc(void)
{
    FN_ENTER(0x007b36cc);
    /* 007b36cc: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007b36cf: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b36d2: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007b36d5: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b36cc); r_esp += 4; return;
}

void f_007b36d7(void)
{
    FN_ENTER(0x007b36d7);
    /* 007b36d7: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007b36da: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b36dd: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007b36e0: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b36d7); r_esp += 4; return;
}

void f_007b36e2(void)
{
    FN_ENTER(0x007b36e2);
    /* 007b36e2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007b36e5: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b36e8: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007b36eb: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b36e2); r_esp += 4; return;
}

void f_007b36ed(void)
{
    FN_ENTER(0x007b36ed);
    /* 007b36ed: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007b36f0: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b36f3: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007b36f6: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b36ed); r_esp += 4; return;
}

void f_007b36f8(void)
{
    FN_ENTER(0x007b36f8);
    /* 007b36f8: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007b36fb: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b36fe: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007b3701: jmp 0x7b370c */ goto L_007b370c;
L_007b370c:; BB(0x007b370c);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b36f8); r_esp += 4; return;
}

void f_007b3703(void)
{
    FN_ENTER(0x007b3703);
    /* 007b3703: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007b3706: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b3709: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007b370c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b370f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3710: ret  */ FN_RET(0x007b3703); r_esp += 4; return;
}

void f_007b3714(void) /* sub_7B3714 */
{
    FN_ENTER(0x007b3714);
    /* 007b3714: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3717: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007b371c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007b3720: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 007b3725: mov eax, dword ptr [0xaab1cc] */ r_eax = R32((u32)(0xaab1ccu));
    /* 007b372a: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 007b372f: mov byte ptr [esp + 4], 0x69 */ W8((u32)(r_esp+0x4u), 0x69u);
    /* 007b3734: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b3736: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 007b373b: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 007b3740: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3742: jne 0x7b376f */ if (!fZ) goto L_007b376f;
L_007b3744:; BB(0x007b3744);
    /* 007b3744: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007b3749: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 007b374e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 007b3751: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b3753: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b3755: mov ebx, eax */ r_ebx = r_eax;
L_007b3757:; BB(0x007b3757);
    /* 007b3757: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3758: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b375du); f_0068d5a8();
    /* 007b375d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b375e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3760: je 0x7b3786 */ if (fZ) goto L_007b3786;
L_007b3762:; BB(0x007b3762);
    /* 007b3762: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b3765: mov edx, ebx */ r_edx = r_ebx;
    /* 007b3767: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b376a: jl 0x7b3757 */ if ((fS!=fO)) goto L_007b3757;
L_007b376c:; BB(0x007b376c);
    /* 007b376c: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_007b376f:; BB(0x007b376f);
    /* 007b376f: mov eax, 1 */ r_eax = 0x1u;
L_007b3774:; BB(0x007b3774);
    /* 007b3774: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 007b3779: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007b377d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b3782u); f_008003e0();
    /* 007b3782: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3785: ret  */ FN_RET(0x007b3714); r_esp += 4; return;
L_007b3786:; BB(0x007b3786);
    /* 007b3786: mov eax, ebx */ r_eax = r_ebx;
    /* 007b3788: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007b378b: jmp 0x7b3774 */ goto L_007b3774;
}

void f_007b3790(void) /* sub_7B3790 */
{
    FN_ENTER(0x007b3790);
    /* 007b3790: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3791: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3794: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007b3799: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 007b379d: mov byte ptr [esp], 0x69 */ W8((u32)(r_esp), 0x69u);
    /* 007b37a1: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 007b37a6: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 007b37ab: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 007b37b0: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 007b37b5: mov edx, 3 */ r_edx = 0x3u;
    /* 007b37ba: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 007b37be: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 007b37c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b37c5: mov ebx, eax */ r_ebx = r_eax;
L_007b37c7:; BB(0x007b37c7);
    /* 007b37c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b37c8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b37cdu); f_0068d5a8();
    /* 007b37cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b37ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b37d0: jne 0x7b37e7 */ if (!fZ) goto L_007b37e7;
L_007b37d2:; BB(0x007b37d2);
    /* 007b37d2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b37d5: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b37d8: jl 0x7b37c7 */ if ((fS!=fO)) goto L_007b37c7;
L_007b37da:; BB(0x007b37da);
    /* 007b37da: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b37dd: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b37e2u); f_008003e0();
    /* 007b37e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b37e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b37e6: ret  */ FN_RET(0x007b3790); r_esp += 4; return;
L_007b37e7:; BB(0x007b37e7);
    /* 007b37e7: mov ecx, eax */ r_ecx = r_eax;
    /* 007b37e9: call 0x690534 */ r_esp -= 4; W32(r_esp, 0x7b37eeu); f_00690534();
    /* 007b37ee: jmp 0x7b37da */ goto L_007b37da;
}

void f_007b37f0(void) /* sub_7B37F0 */
{
    FN_ENTER(0x007b37f0);
    /* 007b37f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b37f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b37f2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b37f5: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 007b37fa: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 007b37fe: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 007b3802: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 007b3806: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b3808: mov byte ptr [esp + 4], 0x69 */ W8((u32)(r_esp+0x4u), 0x69u);
    /* 007b380d: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 007b3812: mov eax, dword ptr [0xaab1cc] */ r_eax = R32((u32)(0xaab1ccu));
    /* 007b3817: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 007b381c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b381e: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 007b3823: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 007b3828: jne 0x7b3855 */ if (!fZ) goto L_007b3855;
L_007b382a:; BB(0x007b382a);
    /* 007b382a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007b382f: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 007b3834: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007b3837: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b3839: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b383b: mov esi, eax */ r_esi = r_eax;
L_007b383d:; BB(0x007b383d);
    /* 007b383d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b383e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3843u); f_0068d5a8();
    /* 007b3843: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3846: je 0x7b388d */ if (fZ) goto L_007b388d;
L_007b3848:; BB(0x007b3848);
    /* 007b3848: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b384b: mov edx, esi */ r_edx = r_esi;
    /* 007b384d: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b3850: jl 0x7b383d */ if ((fS!=fO)) goto L_007b383d;
L_007b3852:; BB(0x007b3852);
    /* 007b3852: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_007b3855:; BB(0x007b3855);
    /* 007b3855: mov eax, 1 */ r_eax = 0x1u;
L_007b385a:; BB(0x007b385a);
    /* 007b385a: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 007b385f: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b3862: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b3865: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 007b3867: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3869: call 0x6986ac */ r_esp -= 4; W32(r_esp, 0x7b386eu); f_006986ac();
    /* 007b386e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b3871: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007b3875: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b387au); f_008003e0();
    /* 007b387a: movzx eax, word ptr [esp + 0xa] */ r_eax = (u32)R16((u32)(r_esp+0xau));
    /* 007b387f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3880: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3882: call 0x688ee4 */ r_esp -= 4; W32(r_esp, 0x7b3887u); f_00688ee4();
    /* 007b3887: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b388a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b388b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b388c: ret  */ FN_RET(0x007b37f0); r_esp += 4; return;
L_007b388d:; BB(0x007b388d);
    /* 007b388d: mov eax, esi */ r_eax = r_esi;
    /* 007b388f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 007b3892: jmp 0x7b385a */ goto L_007b385a;
}

void f_007b3894(void) /* sub_7B3894 */
{
    FN_ENTER(0x007b3894);
    /* 007b3894: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3895: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3896: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3899: movzx ecx, word ptr [esp + 0x18] */ r_ecx = (u32)R16((u32)(r_esp+0x18u));
    /* 007b389e: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 007b38a3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b38a7: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 007b38ab: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 007b38af: mov byte ptr [esp], 0x69 */ W8((u32)(r_esp), 0x69u);
    /* 007b38b3: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 007b38b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b38ba: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 007b38bf: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 007b38c4: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 007b38c9: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 007b38ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b38d1: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b38d4: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 007b38d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b38d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b38d9: call 0x6986ac */ r_esp -= 4; W32(r_esp, 0x7b38deu); f_006986ac();
    /* 007b38de: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b38e1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b38e4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b38e9u); f_008003e0();
    /* 007b38e9: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 007b38ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b38ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b38f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b38f1: call 0x688ee4 */ r_esp -= 4; W32(r_esp, 0x7b38f6u); f_00688ee4();
    /* 007b38f6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b38f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b38fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b38fb: ret  */ FN_RET(0x007b3894); r_esp += 4; return;
}

void f_007b38fc(void) /* sub_7B38FC */
{
    FN_ENTER(0x007b38fc);
    /* 007b38fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b38fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b38fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b38ff: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3902: movzx ecx, word ptr [esp + 0x1c] */ r_ecx = (u32)R16((u32)(r_esp+0x1cu));
    /* 007b3907: movzx ebp, word ptr [esp + 0x20] */ r_ebp = (u32)R16((u32)(r_esp+0x20u));
    /* 007b390c: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007b3910: mov edx, 3 */ r_edx = 0x3u;
    /* 007b3915: mov byte ptr [esp], 0x69 */ W8((u32)(r_esp), 0x69u);
    /* 007b3919: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 007b391d: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 007b3922: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 007b3927: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 007b392c: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 007b3931: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 007b3936: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b3938: mov esi, eax */ r_esi = r_eax;
L_007b393a:; BB(0x007b393a);
    /* 007b393a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b393b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3940u); f_0068d5a8();
    /* 007b3940: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3941: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3943: jne 0x7b397a */ if (!fZ) goto L_007b397a;
L_007b3945:; BB(0x007b3945);
    /* 007b3945: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b3948: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b394b: jl 0x7b393a */ if ((fS!=fO)) goto L_007b393a;
L_007b394d:; BB(0x007b394d);
    /* 007b394d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007b3951: mov word ptr [esp + 6], bp */ W16((u32)(r_esp+0x6u), (u16)r_ebp);
    /* 007b3956: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b3959: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b395c: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 007b395e: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b3962: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3963: call 0x6986ac */ r_esp -= 4; W32(r_esp, 0x7b3968u); f_006986ac();
    /* 007b3968: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b396b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b396e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b3973u); f_008003e0();
    /* 007b3973: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3977: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b3978: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3979: ret  */ FN_RET(0x007b38fc); r_esp += 4; return;
L_007b397a:; BB(0x007b397a);
    /* 007b397a: mov ecx, eax */ r_ecx = r_eax;
    /* 007b397c: call 0x690534 */ r_esp -= 4; W32(r_esp, 0x7b3981u); f_00690534();
    /* 007b3981: jmp 0x7b394d */ goto L_007b394d;
}

void f_007b3984(void) /* sub_7B3984 */
{
    FN_ENTER(0x007b3984);
    /* 007b3984: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3985: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007b398a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b398b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3990u); f_0068d5a8();
    /* 007b3990: mov esi, eax */ r_esi = r_eax;
    /* 007b3992: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b3995: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3997: je 0x7b39a8 */ if (fZ) goto L_007b39a8;
L_007b3999:; BB(0x007b3999);
    /* 007b3999: mov ecx, esi */ r_ecx = r_esi;
    /* 007b399b: call 0x6905d4 */ r_esp -= 4; W32(r_esp, 0x7b39a0u); f_006905d4();
    /* 007b39a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b39a2: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007b39a4: mov ecx, esi */ r_ecx = r_esi;
    /* 007b39a6: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7b39a8u); call_ind(t); }
L_007b39a8:; BB(0x007b39a8);
    /* 007b39a8: mov dword ptr [0xaad654], 0 */ W32((u32)(0xaad654u), 0x0u);
    /* 007b39b2: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007b39b7: mov word ptr [0xaad650], ax */ W16((u32)(0xaad650u), (u16)r_eax);
    /* 007b39bd: mov word ptr [0xa03cc0], ax */ W16((u32)(0xa03cc0u), (u16)r_eax);
    /* 007b39c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b39c4: ret  */ FN_RET(0x007b3984); r_esp += 4; return;
}

void f_007b39c8(void) /* sub_7B39C8 */
{
    FN_ENTER(0x007b39c8);
    /* 007b39c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b39c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b39cb: mov ebx, eax */ r_ebx = r_eax;
L_007b39cd:; BB(0x007b39cd);
    /* 007b39cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b39ce: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b39d3u); f_0068d5a8();
    /* 007b39d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b39d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b39d6: je 0x7b39ec */ if (fZ) goto L_007b39ec;
L_007b39d8:; BB(0x007b39d8);
    /* 007b39d8: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b39df: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b39e2: jne 0x7b39ec */ if (!fZ) goto L_007b39ec;
L_007b39e4:; BB(0x007b39e4);
    /* 007b39e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b39e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b39e8: mov ecx, eax */ r_ecx = r_eax;
    /* 007b39ea: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7b39ecu); call_ind(t); }
L_007b39ec:; BB(0x007b39ec);
    /* 007b39ec: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b39ef: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b39f2: jl 0x7b39cd */ if ((fS!=fO)) goto L_007b39cd;
L_007b39f4:; BB(0x007b39f4);
    /* 007b39f4: mov dword ptr [0xaad654], 0 */ W32((u32)(0xaad654u), 0x0u);
    /* 007b39fe: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007b3a03: mov word ptr [0xaad650], ax */ W16((u32)(0xaad650u), (u16)r_eax);
    /* 007b3a09: mov word ptr [0xa03cc0], ax */ W16((u32)(0xa03cc0u), (u16)r_eax);
    /* 007b3a0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b3a10: ret  */ FN_RET(0x007b39c8); r_esp += 4; return;
}

void f_007b3a14(void) /* sub_7B3A14 */
{
    FN_ENTER(0x007b3a14);
    /* 007b3a14: mov eax, dword ptr [0xaad64c] */ r_eax = R32((u32)(0xaad64cu));
    /* 007b3a19: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3a1c: mov dword ptr [0xaad64c], eax */ W32((u32)(0xaad64cu), r_eax);
    /* 007b3a21: ret  */ FN_RET(0x007b3a14); r_esp += 4; return;
}

void f_007b3a24(void) /* sub_7B3A24 */
{
    FN_ENTER(0x007b3a24);
    /* 007b3a24: mov eax, dword ptr [0xaad64c] */ r_eax = R32((u32)(0xaad64cu));
    /* 007b3a29: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3a2c: mov dword ptr [0xaad64c], eax */ W32((u32)(0xaad64cu), r_eax);
    /* 007b3a31: ret  */ FN_RET(0x007b3a24); r_esp += 4; return;
}

void f_007b3a34(void) /* sub_7B3A34 */
{
    FN_ENTER(0x007b3a34);
    /* 007b3a34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3a35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3a36: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3a39: movzx ebp, word ptr [esp + 0x24] */ r_ebp = (u32)R16((u32)(r_esp+0x24u));
    /* 007b3a3e: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 007b3a42: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 007b3a4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b3a4c: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 007b3a54: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 007b3a59: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007b3a5e: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 007b3a66: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 007b3a6b: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 007b3a70: mov byte ptr [esp], 0x3e */ W8((u32)(r_esp), 0x3eu);
    /* 007b3a74: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 007b3a79: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 007b3a7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3a7f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3a84u); f_0068d5a8();
    /* 007b3a84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3a85: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b3a87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3a89: je 0x7b3ac9 */ if (fZ) goto L_007b3ac9;
L_007b3a8b:; BB(0x007b3a8b);
    /* 007b3a8b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 007b3a8e: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3a93: je 0x7b3a9a */ if (fZ) goto L_007b3a9a;
L_007b3a95:; BB(0x007b3a95);
    /* 007b3a95: mov edx, 1 */ r_edx = 0x1u;
L_007b3a9a:; BB(0x007b3a9a);
    /* 007b3a9a: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 007b3a9e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007b3aa0: mov word ptr [esp + 2], bp */ W16((u32)(r_esp+0x2u), (u16)r_ebp);
    /* 007b3aa5: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 007b3aa8: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 007b3aab: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007b3aaf: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 007b3ab3: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 007b3ab7: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 007b3abc: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 007b3ac1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b3ac4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b3ac9u); f_008003e0();
L_007b3ac9:; BB(0x007b3ac9);
    /* 007b3ac9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3acc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b3acd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3ace: ret  */ FN_RET(0x007b3a34); r_esp += 4; return;
}

void f_007b3ad0(void) /* sub_7B3AD0 */
{
    FN_ENTER(0x007b3ad0);
    /* 007b3ad0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3ad1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3ad2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3ad3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3ad6: movzx esi, word ptr [esp + 0x40] */ r_esi = (u32)R16((u32)(r_esp+0x40u));
    /* 007b3adb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3adc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3ae1u); f_0068d5a8();
    /* 007b3ae1: mov ebp, eax */ r_ebp = r_eax;
    /* 007b3ae3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b3ae6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3ae8: je 0x7b3c0d */ if (fZ) goto L_007b3c0d;
L_007b3aee:; BB(0x007b3aee);
    /* 007b3aee: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 007b3af5: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3af8: jne 0x7b3b01 */ if (!fZ) goto L_007b3b01;
L_007b3afa:; BB(0x007b3afa);
    /* 007b3afa: mov edx, 1 */ r_edx = 0x1u;
    /* 007b3aff: jmp 0x7b3b03 */ goto L_007b3b03;
L_007b3b01:; BB(0x007b3b01);
    /* 007b3b01: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007b3b03:; BB(0x007b3b03);
    /* 007b3b03: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007b3b05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b07: jne 0x7b3b3b */ if (!fZ) goto L_007b3b3b;
L_007b3b09:; BB(0x007b3b09);
    /* 007b3b09: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b0b: je 0x7b3b31 */ if (fZ) goto L_007b3b31;
L_007b3b0d:; BB(0x007b3b0d);
    /* 007b3b0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3b0e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3b13u); f_0068d5a8();
    /* 007b3b13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3b14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b16: je 0x7b3b31 */ if (fZ) goto L_007b3b31;
L_007b3b18:; BB(0x007b3b18);
    /* 007b3b18: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b3b1f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b22: jne 0x7b3b2b */ if (!fZ) goto L_007b3b2b;
L_007b3b24:; BB(0x007b3b24);
    /* 007b3b24: mov edx, 1 */ r_edx = 0x1u;
    /* 007b3b29: jmp 0x7b3b2d */ goto L_007b3b2d;
L_007b3b2b:; BB(0x007b3b2b);
    /* 007b3b2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007b3b2d:; BB(0x007b3b2d);
    /* 007b3b2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b2f: jne 0x7b3b73 */ if (!fZ) goto L_007b3b73;
L_007b3b31:; BB(0x007b3b31);
    /* 007b3b31: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b3b34: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b3b37: jl 0x7b3b09 */ if ((fS!=fO)) goto L_007b3b09;
L_007b3b39:; BB(0x007b3b39);
    /* 007b3b39: jmp 0x7b3b6b */ goto L_007b3b6b;
L_007b3b3b:; BB(0x007b3b3b);
    /* 007b3b3b: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b3d: je 0x7b3b63 */ if (fZ) goto L_007b3b63;
L_007b3b3f:; BB(0x007b3b3f);
    /* 007b3b3f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3b40: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3b45u); f_0068d5a8();
    /* 007b3b45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3b46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b48: je 0x7b3b63 */ if (fZ) goto L_007b3b63;
L_007b3b4a:; BB(0x007b3b4a);
    /* 007b3b4a: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b3b51: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b54: jne 0x7b3b5d */ if (!fZ) goto L_007b3b5d;
L_007b3b56:; BB(0x007b3b56);
    /* 007b3b56: mov edx, 1 */ r_edx = 0x1u;
    /* 007b3b5b: jmp 0x7b3b5f */ goto L_007b3b5f;
L_007b3b5d:; BB(0x007b3b5d);
    /* 007b3b5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007b3b5f:; BB(0x007b3b5f);
    /* 007b3b5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b61: je 0x7b3b73 */ if (fZ) goto L_007b3b73;
L_007b3b63:; BB(0x007b3b63);
    /* 007b3b63: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b3b66: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b3b69: jl 0x7b3b3b */ if ((fS!=fO)) goto L_007b3b3b;
L_007b3b6b:; BB(0x007b3b6b);
    /* 007b3b6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b6d: je 0x7b3c0d */ if (fZ) goto L_007b3c0d;
L_007b3b73:; BB(0x007b3b73);
    /* 007b3b73: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007b3b76: mov byte ptr [esp], 0x3e */ W8((u32)(r_esp), 0x3eu);
    /* 007b3b7a: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 007b3b7f: mov word ptr [esp + 8], di */ W16((u32)(r_esp+0x8u), (u16)r_edi);
    /* 007b3b84: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 007b3b89: mov word ptr [esp + 0xa], di */ W16((u32)(r_esp+0xau), (u16)r_edi);
    /* 007b3b8e: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3b94: mov edi, 0 */ r_edi = 0x0u;
    /* 007b3b99: je 0x7b3ba0 */ if (fZ) goto L_007b3ba0;
L_007b3b9b:; BB(0x007b3b9b);
    /* 007b3b9b: mov edi, 1 */ r_edi = 0x1u;
L_007b3ba0:; BB(0x007b3ba0);
    /* 007b3ba0: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 007b3ba3: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 007b3ba6: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 007b3ba9: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 007b3bac: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 007b3baf: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 007b3bb2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007b3bb4: fmul qword ptr [0x97df40] */ ST(0) = ST(0) * R_F64((u32)(0x97df40u));
    /* 007b3bba: fdiv qword ptr [0x97df38] */ ST(0) = ST(0) / R_F64((u32)(0x97df38u));
    /* 007b3bc0: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 007b3bc4: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 007b3bc9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b3bce: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b3bd2: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007b3bd6: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 007b3bda: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007b3bde: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007b3be2: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3be5: mov word ptr [esp + 2], si */ W16((u32)(r_esp+0x2u), (u16)r_esi);
    /* 007b3bea: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007b3bee: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 007b3bf1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007b3bf5: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b3bf9: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 007b3bfe: mov word ptr [esp + 4], di */ W16((u32)(r_esp+0x4u), (u16)r_edi);
    /* 007b3c03: je 0x7b3c14 */ if (fZ) goto L_007b3c14;
L_007b3c05:; BB(0x007b3c05);
    /* 007b3c05: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b3c08: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b3c0du); f_008003e0();
L_007b3c0d:; BB(0x007b3c0d);
    /* 007b3c0d: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3c10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3c11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b3c12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3c13: ret  */ FN_RET(0x007b3ad0); r_esp += 4; return;
L_007b3c14:; BB(0x007b3c14);
    /* 007b3c14: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b3c17: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b3c1cu); f_008003e0();
    /* 007b3c1c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3c1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3c20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b3c21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3c22: ret  */ FN_RET(0x007b3ad0); r_esp += 4; return;
}

void f_007b3c24(void) /* sub_7B3C24 */
{
    FN_ENTER(0x007b3c24);
    /* 007b3c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3c25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3c26: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3c29: movzx edi, word ptr [esp + 0x3c] */ r_edi = (u32)R16((u32)(r_esp+0x3cu));
    /* 007b3c2e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3c2f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3c34u); f_0068d5a8();
    /* 007b3c34: mov ebp, eax */ r_ebp = r_eax;
    /* 007b3c36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b3c39: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3c3b: je 0x7b3cd7 */ if (fZ) goto L_007b3cd7;
L_007b3c41:; BB(0x007b3c41);
    /* 007b3c41: movzx edx, word ptr [esp + 0x40] */ r_edx = (u32)R16((u32)(r_esp+0x40u));
    /* 007b3c46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3c47: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3c4cu); f_0068d5a8();
    /* 007b3c4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3c4f: je 0x7b3cd7 */ if (fZ) goto L_007b3cd7;
L_007b3c55:; BB(0x007b3c55);
    /* 007b3c55: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 007b3c58: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 007b3c5b: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 007b3c5e: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 007b3c61: mov byte ptr [esp], 0x3e */ W8((u32)(r_esp), 0x3eu);
    /* 007b3c65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b3c67: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007b3c6c: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 007b3c71: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 007b3c74: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 007b3c79: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 007b3c7e: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 007b3c81: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 007b3c86: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007b3c88: fmul qword ptr [0x97df20] */ ST(0) = ST(0) * R_F64((u32)(0x97df20u));
    /* 007b3c8e: fdiv qword ptr [0x97df18] */ ST(0) = ST(0) / R_F64((u32)(0x97df18u));
    /* 007b3c94: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 007b3c98: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 007b3c9d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b3ca2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b3ca6: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007b3caa: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 007b3cae: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007b3cb2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007b3cb6: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 007b3cbb: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007b3cbf: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 007b3cc2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007b3cc6: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b3cca: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 007b3ccf: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b3cd2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b3cd7u); f_008003e0();
L_007b3cd7:; BB(0x007b3cd7);
    /* 007b3cd7: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3cda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3cdb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3cdc: ret  */ FN_RET(0x007b3c24); r_esp += 4; return;
}

void f_007b3ce0(void) /* sub_7B3CE0 */
{
    FN_ENTER(0x007b3ce0);
    /* 007b3ce0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007b3ce5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3ce6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3cebu); f_0068d5a8();
    /* 007b3ceb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3cec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3cee: je 0x7b3d05 */ if (fZ) goto L_007b3d05;
L_007b3cf0:; BB(0x007b3cf0);
    /* 007b3cf0: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b3cf7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b3cfa: je 0x7b3d05 */ if (fZ) goto L_007b3d05;
L_007b3cfc:; BB(0x007b3cfc);
    /* 007b3cfc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3cfe: mov ecx, eax */ r_ecx = r_eax;
    /* 007b3d00: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x7b3d05u); f_006854a8();
L_007b3d05:; BB(0x007b3d05);
    /* 007b3d05: ret  */ FN_RET(0x007b3ce0); r_esp += 4; return;
}

void f_007b3d08(void) /* sub_7B3D08 */
{
    FN_ENTER(0x007b3d08);
    /* 007b3d08: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007b3d0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3d0e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3d13u); f_0068d5a8();
    /* 007b3d13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3d14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3d16: je 0x7b3d2b */ if (fZ) goto L_007b3d2b;
L_007b3d18:; BB(0x007b3d18);
    /* 007b3d18: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b3d1f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b3d22: je 0x7b3d2b */ if (fZ) goto L_007b3d2b;
L_007b3d24:; BB(0x007b3d24);
    /* 007b3d24: mov ecx, eax */ r_ecx = r_eax;
    /* 007b3d26: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x7b3d2bu); f_00685514();
L_007b3d2b:; BB(0x007b3d2b);
    /* 007b3d2b: ret  */ FN_RET(0x007b3d08); r_esp += 4; return;
}

void f_007b3d2c(void) /* sub_7B3D2C */
{
    FN_ENTER(0x007b3d2c);
    /* 007b3d2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3d2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3d2e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3d31: movzx edi, word ptr [esp + 0x24] */ r_edi = (u32)R16((u32)(r_esp+0x24u));
    /* 007b3d36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3d37: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3d3cu); f_0068d5a8();
    /* 007b3d3c: mov ebp, eax */ r_ebp = r_eax;
    /* 007b3d3e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b3d44: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3d49u); f_0068d5a8();
    /* 007b3d49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b3d4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3d4e: je 0x7b3d54 */ if (fZ) goto L_007b3d54;
L_007b3d50:; BB(0x007b3d50);
    /* 007b3d50: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3d52: jne 0x7b3d5a */ if (!fZ) goto L_007b3d5a;
L_007b3d54:; BB(0x007b3d54);
    /* 007b3d54: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3d57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3d58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3d59: ret  */ FN_RET(0x007b3d2c); r_esp += 4; return;
L_007b3d5a:; BB(0x007b3d5a);
    /* 007b3d5a: movzx edx, word ptr [ebp + 0x750] */ r_edx = (u32)R16((u32)(r_ebp+0x750u));
    /* 007b3d61: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3d67: je 0x7b3db8 */ if (fZ) goto L_007b3db8;
L_007b3d69:; BB(0x007b3d69);
    /* 007b3d69: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 007b3d6d: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 007b3d71: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 007b3d73: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 007b3d76: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 007b3d79: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 007b3d7c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007b3d7e: fmul qword ptr [0x97df10] */ ST(0) = ST(0) * R_F64((u32)(0x97df10u));
    /* 007b3d84: fdiv qword ptr [0x97df08] */ ST(0) = ST(0) / R_F64((u32)(0x97df08u));
    /* 007b3d8a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007b3d8d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007b3d91: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b3d96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b3d9a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007b3d9e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007b3da2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007b3da5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007b3da9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3daa: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 007b3dae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3daf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b3db0: call 0x69b184 */ r_esp -= 4; W32(r_esp, 0x7b3db5u); f_0069b184();
    /* 007b3db5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b3db8:; BB(0x007b3db8);
    /* 007b3db8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3dbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b3dbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b3dbd: ret  */ FN_RET(0x007b3d2c); r_esp += 4; return;
}

void f_007b3dc0(void) /* sub_7B3DC0 */
{
    FN_ENTER(0x007b3dc0);
    /* 007b3dc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3dc2: mov word ptr [0xaacae0], ax */ W16((u32)(0xaacae0u), (u16)r_eax);
    /* 007b3dc8: mov word ptr [0xaacb4c], ax */ W16((u32)(0xaacb4cu), (u16)r_eax);
    /* 007b3dce: mov word ptr [0xaacbb8], ax */ W16((u32)(0xaacbb8u), (u16)r_eax);
    /* 007b3dd4: mov word ptr [0xaacc24], ax */ W16((u32)(0xaacc24u), (u16)r_eax);
    /* 007b3dda: mov word ptr [0xaacc90], ax */ W16((u32)(0xaacc90u), (u16)r_eax);
    /* 007b3de0: mov word ptr [0xaaccfc], ax */ W16((u32)(0xaaccfcu), (u16)r_eax);
    /* 007b3de6: mov word ptr [0xaacd68], ax */ W16((u32)(0xaacd68u), (u16)r_eax);
    /* 007b3dec: mov word ptr [0xaacdd4], ax */ W16((u32)(0xaacdd4u), (u16)r_eax);
    /* 007b3df2: mov word ptr [0xaace40], ax */ W16((u32)(0xaace40u), (u16)r_eax);
    /* 007b3df8: mov word ptr [0xaaceac], ax */ W16((u32)(0xaaceacu), (u16)r_eax);
    /* 007b3dfe: mov word ptr [0xaacf18], ax */ W16((u32)(0xaacf18u), (u16)r_eax);
    /* 007b3e04: mov word ptr [0xaacf84], ax */ W16((u32)(0xaacf84u), (u16)r_eax);
    /* 007b3e0a: mov word ptr [0xaacff0], ax */ W16((u32)(0xaacff0u), (u16)r_eax);
    /* 007b3e10: mov word ptr [0xaad05c], ax */ W16((u32)(0xaad05cu), (u16)r_eax);
    /* 007b3e16: mov word ptr [0xaad0c8], ax */ W16((u32)(0xaad0c8u), (u16)r_eax);
    /* 007b3e1c: mov word ptr [0xaad134], ax */ W16((u32)(0xaad134u), (u16)r_eax);
    /* 007b3e22: mov word ptr [0xaad1a0], ax */ W16((u32)(0xaad1a0u), (u16)r_eax);
    /* 007b3e28: mov word ptr [0xaad20c], ax */ W16((u32)(0xaad20cu), (u16)r_eax);
    /* 007b3e2e: mov word ptr [0xaad278], ax */ W16((u32)(0xaad278u), (u16)r_eax);
    /* 007b3e34: mov word ptr [0xaad2e4], ax */ W16((u32)(0xaad2e4u), (u16)r_eax);
    /* 007b3e3a: mov word ptr [0xaad350], ax */ W16((u32)(0xaad350u), (u16)r_eax);
    /* 007b3e40: mov word ptr [0xaad3bc], ax */ W16((u32)(0xaad3bcu), (u16)r_eax);
    /* 007b3e46: mov word ptr [0xaad428], ax */ W16((u32)(0xaad428u), (u16)r_eax);
    /* 007b3e4c: mov word ptr [0xaad494], ax */ W16((u32)(0xaad494u), (u16)r_eax);
    /* 007b3e52: mov word ptr [0xaad500], ax */ W16((u32)(0xaad500u), (u16)r_eax);
    /* 007b3e58: ret  */ FN_RET(0x007b3dc0); r_esp += 4; return;
}

void f_007b3e5c(void) /* sub_7B3E5C */
{
    FN_ENTER(0x007b3e5c);
    /* 007b3e5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3e5d: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3e60: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 007b3e64: cmp ebx, 0x19 */ {  u32 a = r_ebx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b3e67: jl 0x7b3e6e */ if ((fS!=fO)) goto L_007b3e6e;
L_007b3e69:; BB(0x007b3e69);
    /* 007b3e69: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3e6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b3e6d: ret  */ FN_RET(0x007b3e5c); r_esp += 4; return;
L_007b3e6e:; BB(0x007b3e6e);
    /* 007b3e6e: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 007b3e72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3e73: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7b3e78u); f_00858009();
    /* 007b3e78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3e79: cmp eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007b3e7c: jb 0x7b3e83 */ if (fC) goto L_007b3e83;
L_007b3e7e:; BB(0x007b3e7e);
    /* 007b3e7e: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3e81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b3e82: ret  */ FN_RET(0x007b3e5c); r_esp += 4; return;
L_007b3e83:; BB(0x007b3e83);
    /* 007b3e83: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 007b3e87: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007b3e8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3e8b: push 0x96fef0 */ { u32 v = 0x96fef0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3e90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3e91: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7b3e96u); f_00857e29();
    /* 007b3e96: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007b3e9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3e9b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 007b3e9e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b3ea0: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b3ea2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b3ea4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b3ea6: lea ecx, [eax + eax*8 + 0xaacae0] */ r_ecx = (u32)(r_eax+r_eax*8+0xaacae0u);
    /* 007b3ead: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3eae: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x7b3eb3u); f_00857fed();
    /* 007b3eb3: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b3eb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b3eba: ret  */ FN_RET(0x007b3e5c); r_esp += 4; return;
}

void f_007b3ebc(void) /* sub_7B3EBC */
{
    FN_ENTER(0x007b3ebc);
    /* 007b3ebc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3ebd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b3ebf: mov ebx, eax */ r_ebx = r_eax;
L_007b3ec1:; BB(0x007b3ec1);
    /* 007b3ec1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3ec2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3ec7u); f_0068d5a8();
    /* 007b3ec7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3ec8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3eca: je 0x7b3ed3 */ if (fZ) goto L_007b3ed3;
L_007b3ecc:; BB(0x007b3ecc);
    /* 007b3ecc: mov ecx, eax */ r_ecx = r_eax;
    /* 007b3ece: call 0x6905d4 */ r_esp -= 4; W32(r_esp, 0x7b3ed3u); f_006905d4();
L_007b3ed3:; BB(0x007b3ed3);
    /* 007b3ed3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b3ed6: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b3ed9: jl 0x7b3ec1 */ if ((fS!=fO)) goto L_007b3ec1;
L_007b3edb:; BB(0x007b3edb);
    /* 007b3edb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b3edc: ret  */ FN_RET(0x007b3ebc); r_esp += 4; return;
}

void f_007b3ee0(void) /* sub_7B3EE0 */
{
    FN_ENTER(0x007b3ee0);
    /* 007b3ee0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3ee1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b3ee3: mov ebx, eax */ r_ebx = r_eax;
L_007b3ee5:; BB(0x007b3ee5);
    /* 007b3ee5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3ee6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3eebu); f_0068d5a8();
    /* 007b3eeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3eec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3eee: je 0x7b3ef7 */ if (fZ) goto L_007b3ef7;
L_007b3ef0:; BB(0x007b3ef0);
    /* 007b3ef0: mov ecx, eax */ r_ecx = r_eax;
    /* 007b3ef2: call 0x690534 */ r_esp -= 4; W32(r_esp, 0x7b3ef7u); f_00690534();
L_007b3ef7:; BB(0x007b3ef7);
    /* 007b3ef7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b3efa: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b3efd: jl 0x7b3ee5 */ if ((fS!=fO)) goto L_007b3ee5;
L_007b3eff:; BB(0x007b3eff);
    /* 007b3eff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b3f00: ret  */ FN_RET(0x007b3ee0); r_esp += 4; return;
}

void f_007b3f04(void)
{
    FN_ENTER(0x007b3f04);
    /* 007b3f04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b3f05: mov ebp, esp */ r_ebp = r_esp;
    /* 007b3f07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b3f09: push 0x8f6032 */ { u32 v = 0x8f6032u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3f0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007b3f14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3f15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007b3f1c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b3f1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007b3f22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007b3f25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007b3f28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007b3f2b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007b3f2e: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007b3f32: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b3f38: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b3f3e:; BB(0x007b3f3e);
    /* 007b3f3e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007b3f41: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 007b3f45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3f47: je 0x7b40eb */ if (fZ) goto L_007b40eb;
L_007b3f4d:; BB(0x007b3f4d);
    /* 007b3f4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3f50: je 0x7b40a4 */ if (fZ) goto L_007b40a4;
L_007b3f56:; BB(0x007b3f56);
    /* 007b3f56: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3f59: jne 0x7b3f9c */ if (!fZ) goto L_007b3f9c;
L_007b3f5b:; BB(0x007b3f5b);
    /* 007b3f5b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007b3f5d:; BB(0x007b3f5d);
    /* 007b3f5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3f5e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b3f63u); f_0068d5a8();
    /* 007b3f63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b3f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3f66: je 0x7b3f8f */ if (fZ) goto L_007b3f8f;
L_007b3f68:; BB(0x007b3f68);
    /* 007b3f68: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b3f6f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3f72: jne 0x7b3f7b */ if (!fZ) goto L_007b3f7b;
L_007b3f74:; BB(0x007b3f74);
    /* 007b3f74: mov edx, 1 */ r_edx = 0x1u;
    /* 007b3f79: jmp 0x7b3f7d */ goto L_007b3f7d;
L_007b3f7b:; BB(0x007b3f7b);
    /* 007b3f7b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007b3f7d:; BB(0x007b3f7d);
    /* 007b3f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3f7f: je 0x7b3f8f */ if (fZ) goto L_007b3f8f;
L_007b3f81:; BB(0x007b3f81);
    /* 007b3f81: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007b3f84: movzx ecx, word ptr [edx + 4] */ r_ecx = (u32)R16((u32)(r_edx+0x4u));
    /* 007b3f88: mov word ptr [eax + 0x750], cx */ W16((u32)(r_eax+0x750u), (u16)r_ecx);
L_007b3f8f:; BB(0x007b3f8f);
    /* 007b3f8f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b3f92: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b3f95: jl 0x7b3f5d */ if ((fS!=fO)) goto L_007b3f5d;
L_007b3f97:; BB(0x007b3f97);
    /* 007b3f97: jmp 0x7b40d4 */ f_007b40d4(); return;
L_007b3f9c:; BB(0x007b3f9c);
    /* 007b3f9c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b3f9f: jne 0x7b40d4 */ if (!fZ) goto L_007b40d4;
L_007b3fa5:; BB(0x007b3fa5);
    /* 007b3fa5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007b3fa8: movzx ecx, word ptr [eax + 6] */ r_ecx = (u32)R16((u32)(r_eax+0x6u));
    /* 007b3fac: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b3fb2: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b3fb8:; BB(0x007b3fb8);
    /* 007b3fb8: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b3fbe: jne 0x7b406e */ if (!fZ) goto L_007b406e;
L_007b3fc4:; BB(0x007b3fc4);
    /* 007b3fc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007b3fc7: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 007b3fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3fcc: call 0x7adf48 */ r_esp -= 4; W32(r_esp, 0x7b3fd1u); f_007adf48();
    /* 007b3fd1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007b3fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b3fd5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007b3fd7: movzx ecx, word ptr [edx + 6] */ r_ecx = (u32)R16((u32)(r_edx+0x6u));
    /* 007b3fdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b3fdc: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7b3fe1u); f_00686258();
    /* 007b3fe1: mov ebx, eax */ r_ebx = r_eax;
    /* 007b3fe3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b3fe6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b3fe8: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b3fee:; BB(0x007b3fee);
    /* 007b3fee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b3ff0: call 0x690534 */ r_esp -= 4; W32(r_esp, 0x7b3ff5u); f_00690534();
    /* 007b3ff5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007b3ff7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b3ff9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7b3ffcu); call_ind(t); }
    /* 007b3ffc: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007b4002: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007b4005: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007b400c: mov word ptr [ebx + 0x750], dx */ W16((u32)(r_ebx+0x750u), (u16)r_edx);
    /* 007b4013: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 007b4018: movsx edi, word ptr [esi + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 007b401c: mov dword ptr [ebx + 0x754], edi */ W32((u32)(r_ebx+0x754u), r_edi);
    /* 007b4022: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7b4027u); f_005caba4();
    /* 007b4027: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4028: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007b402b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b402d: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b4033:; BB(0x007b4033);
    /* 007b4033: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007b403a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007b4041: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4047: movzx edi, word ptr [0xa9c4f4] */ r_edi = (u32)R16((u32)(0xa9c4f4u));
    /* 007b404e: mov ecx, eax */ r_ecx = r_eax;
    /* 007b4050: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007b4053: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007b4055: movzx esi, word ptr [edx + 6] */ r_esi = (u32)R16((u32)(r_edx+0x6u));
    /* 007b4059: movsx ebx, word ptr [edx + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 007b405d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b405e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b405f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4060: call 0x7ae360 */ r_esp -= 4; W32(r_esp, 0x7b4065u); f_007ae360();
    /* 007b4065: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007b406c: jmp 0x7b40d4 */ f_007b40d4(); return;
L_007b406e:; BB(0x007b406e);
    /* 007b406e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007b4071: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 007b4075: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4076: call 0x7adf48 */ r_esp -= 4; W32(r_esp, 0x7b407bu); f_007adf48();
    /* 007b407b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007b407e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b407f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b4081: movzx ecx, word ptr [edx + 6] */ r_ecx = (u32)R16((u32)(r_edx+0x6u));
    /* 007b4085: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4086: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7b408bu); f_00686258();
    /* 007b408b: mov ebx, eax */ r_ebx = r_eax;
    /* 007b408d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4090: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4092: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b4094:; BB(0x007b4094);
    /* 007b4094: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007b4096: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b4098: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7b409bu); call_ind(t); }
    /* 007b409b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b409d: call 0x690534 */ r_esp -= 4; W32(r_esp, 0x7b40a2u); f_00690534();
    /* 007b40a2: jmp 0x7b40d4 */ f_007b40d4(); return;
L_007b40a4:; BB(0x007b40a4);
    /* 007b40a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b40a5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b40aau); f_0068d5a8();
    /* 007b40aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b40ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b40ad: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b40af:; BB(0x007b40af);
    /* 007b40af: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b40b6: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b40b9: jne 0x7b40c2 */ if (!fZ) goto L_007b40c2;
L_007b40bb:; BB(0x007b40bb);
    /* 007b40bb: mov edx, 1 */ r_edx = 0x1u;
    /* 007b40c0: jmp 0x7b40c4 */ goto L_007b40c4;
L_007b40c2:; BB(0x007b40c2);
    /* 007b40c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007b40c4:; BB(0x007b40c4);
    /* 007b40c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b40c6: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b40c8:; BB(0x007b40c8);
    /* 007b40c8: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007b40cd: mov word ptr [eax + 0x750], dx */ W16((u32)(r_eax+0x750u), (u16)r_edx);
L_007b40d4:; BB(0x007b40d4);
    /* 007b40d4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007b40d7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007b40da: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007b40dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007b40e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007b40e7: mov esp, ebp */ r_esp = r_ebp;
    /* 007b40e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b40ea: ret  */ FN_RET(0x007b3f04); r_esp += 4; return;
L_007b40eb:; BB(0x007b40eb);
    /* 007b40eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007b40ee: movzx ecx, word ptr [eax + 6] */ r_ecx = (u32)R16((u32)(r_eax+0x6u));
    /* 007b40f2: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 007b40f7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b40f9: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b40fb:; BB(0x007b40fb);
    /* 007b40fb: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4101: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b4103:; BB(0x007b4103);
    /* 007b4103: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 007b4106: movsx esi, word ptr [ecx + 0xa] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0xau));
    /* 007b410a: mov word ptr [0xaad650], dx */ W16((u32)(0xaad650u), (u16)r_edx);
    /* 007b4111: mov dword ptr [0xaad654], esi */ W32((u32)(0xaad654u), r_esi);
    /* 007b4117: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 007b411b: movzx ebx, word ptr [ecx + 4] */ r_ebx = (u32)R16((u32)(r_ecx+0x4u));
    /* 007b411f: mov word ptr [0xa03cc0], dx */ W16((u32)(0xa03cc0u), (u16)r_edx);
    /* 007b4126: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4128: jne 0x7b41c7 */ if (!fZ) goto L_007b41c7;
L_007b412e:; BB(0x007b412e);
    /* 007b412e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b412f: call 0x7adf48 */ r_esp -= 4; W32(r_esp, 0x7b4134u); f_007adf48();
    /* 007b4134: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007b4137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4138: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007b413a: movzx ecx, word ptr [edx + 6] */ r_ecx = (u32)R16((u32)(r_edx+0x6u));
    /* 007b413e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b413f: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7b4144u); f_00686258();
    /* 007b4144: mov ebx, eax */ r_ebx = r_eax;
    /* 007b4146: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4149: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b414b: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b414d:; BB(0x007b414d);
    /* 007b414d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007b414f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b4151: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7b4154u); call_ind(t); }
    /* 007b4154: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007b415a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007b415d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007b4164: mov word ptr [ebx + 0x750], dx */ W16((u32)(r_ebx+0x750u), (u16)r_edx);
    /* 007b416b: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 007b4170: movsx edi, word ptr [esi + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 007b4174: mov dword ptr [ebx + 0x754], edi */ W32((u32)(r_ebx+0x754u), r_edi);
    /* 007b417a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7b417fu); f_005caba4();
    /* 007b417f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4180: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007b4183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4185: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b418b:; BB(0x007b418b);
    /* 007b418b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007b4192: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007b4199: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b419f: movzx edi, word ptr [0xa9c4f4] */ r_edi = (u32)R16((u32)(0xa9c4f4u));
    /* 007b41a6: mov ecx, eax */ r_ecx = r_eax;
    /* 007b41a8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007b41ab: movzx esi, word ptr [edx + 6] */ r_esi = (u32)R16((u32)(r_edx+0x6u));
    /* 007b41af: movsx ebx, word ptr [edx + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 007b41b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b41b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b41b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b41b6: call 0x7aea10 */ r_esp -= 4; W32(r_esp, 0x7b41bbu); f_007aea10();
    /* 007b41bb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007b41c2: jmp 0x7b40d4 */ f_007b40d4(); return;
L_007b41c7:; BB(0x007b41c7);
    /* 007b41c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b41c8: call 0x7adf48 */ r_esp -= 4; W32(r_esp, 0x7b41cdu); f_007adf48();
    /* 007b41cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007b41d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b41d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007b41d3: movzx ecx, word ptr [edx + 6] */ r_ecx = (u32)R16((u32)(r_edx+0x6u));
    /* 007b41d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b41d8: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7b41ddu); f_00686258();
    /* 007b41dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b41e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b41e2: je 0x7b40d4 */ if (fZ) goto L_007b40d4;
L_007b41e8:; BB(0x007b41e8);
    /* 007b41e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007b41ea: mov ecx, eax */ r_ecx = r_eax;
    /* 007b41ec: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7b41efu); call_ind(t); }
    /* 007b41ef: jmp 0x7b40d4 */ f_007b40d4(); return;
}

