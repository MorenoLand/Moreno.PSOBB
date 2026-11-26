#include "protos.h"

void f_005d3060(void) /* sub_5D3060 */
{
    FN_ENTER(0x005d3060);
    /* 005d3060: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 005d3065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3067: je 0x5d3072 */ if (fZ) goto L_005d3072;
L_005d3069:; BB(0x005d3069);
    /* 005d3069: lea edx, [eax + 0x40] */ r_edx = (u32)(r_eax+0x40u);
    /* 005d306c: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 005d306f: ret 4 */ FN_RET(0x005d3060); r_esp += 8; return;
L_005d3072:; BB(0x005d3072);
    /* 005d3072: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3074: ret 4 */ FN_RET(0x005d3060); r_esp += 8; return;
}

void f_005d3078(void) /* sub_5D3078 */
{
    FN_ENTER(0x005d3078);
    /* 005d3078: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d307a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d307b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d307c: mov esi, ecx */ r_esi = r_ecx;
    /* 005d307e: mov ecx, esi */ r_ecx = r_esi;
    /* 005d3080: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d3085u); f_005d2890();
    /* 005d3085: mov ebx, eax */ r_ebx = r_eax;
    /* 005d3087: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3089: call 0x5c74e8 */ r_esp -= 4; W32(r_esp, 0x5d308eu); f_005c74e8();
    /* 005d308e: mov ebp, eax */ r_ebp = r_eax;
    /* 005d3090: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3093: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3095: je 0x5d31a1 */ if (fZ) goto L_005d31a1;
L_005d309b:; BB(0x005d309b);
    /* 005d309b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d309d: je 0x5d31a1 */ if (fZ) goto L_005d31a1;
L_005d30a3:; BB(0x005d30a3);
    /* 005d30a3: mov ecx, esi */ r_ecx = r_esi;
    /* 005d30a5: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x5d30aau); f_005d281c();
    /* 005d30aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d30ac: jne 0x5d30d9 */ if (!fZ) goto L_005d30d9;
L_005d30ae:; BB(0x005d30ae);
    /* 005d30ae: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 005d30b0: cmp edi, 0x27f */ {  u32 a = r_edi; u32 b = 0x27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d30b6: je 0x5d3197 */ if (fZ) goto L_005d3197;
L_005d30bc:; BB(0x005d30bc);
    /* 005d30bc: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 005d30bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d30c1: je 0x5d315d */ if (fZ) goto L_005d315d;
L_005d30c7:; BB(0x005d30c7);
    /* 005d30c7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d30ca: je 0x5d3105 */ if (fZ) goto L_005d3105;
L_005d30cc:; BB(0x005d30cc);
    /* 005d30cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d30cd: call 0x7930a0 */ r_esp -= 4; W32(r_esp, 0x5d30d2u); f_007930a0();
    /* 005d30d2: mov ebx, eax */ r_ebx = r_eax;
    /* 005d30d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d30d7: jmp 0x5d30e5 */ goto L_005d30e5;
L_005d30d9:; BB(0x005d30d9);
    /* 005d30d9: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005d30db: call 0x7930a0 */ r_esp -= 4; W32(r_esp, 0x5d30e0u); f_007930a0();
    /* 005d30e0: mov ebx, eax */ r_ebx = r_eax;
    /* 005d30e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d30e5:; BB(0x005d30e5);
    /* 005d30e5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d30e7: je 0x5d30fe */ if (fZ) goto L_005d30fe;
L_005d30e9:; BB(0x005d30e9);
    /* 005d30e9: mov ecx, esi */ r_ecx = r_esi;
    /* 005d30eb: call 0x5d31ac */ r_esp -= 4; W32(r_esp, 0x5d30f0u); f_005d31ac();
    /* 005d30f0: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 005d30f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d30f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d30f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d30f6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d30fbu); f_00857e29();
    /* 005d30fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005d30fe:; BB(0x005d30fe);
    /* 005d30fe: mov eax, ebp */ r_eax = r_ebp;
    /* 005d3100: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3102: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d3103: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3104: ret  */ FN_RET(0x005d3078); r_esp += 4; return;
L_005d3105:; BB(0x005d3105);
    /* 005d3105: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 005d3109: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d310c: jne 0x5d30cc */ if (!fZ) goto L_005d30cc;
L_005d310e:; BB(0x005d310e);
    /* 005d310e: cmp edi, 0x3b0 */ {  u32 a = r_edi; u32 b = 0x3b0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3114: jge 0x5d3150 */ if ((fS==fO)) goto L_005d3150;
L_005d3116:; BB(0x005d3116);
    /* 005d3116: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3118: je 0x5d30fe */ if (fZ) goto L_005d30fe;
L_005d311a:; BB(0x005d311a);
    /* 005d311a: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 005d311e: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3121: je 0x5d30fe */ if (fZ) goto L_005d30fe;
L_005d3123:; BB(0x005d3123);
    /* 005d3123: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3124: call 0x7930a0 */ r_esp -= 4; W32(r_esp, 0x5d3129u); f_007930a0();
    /* 005d3129: mov edi, eax */ r_edi = r_eax;
    /* 005d312b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d312e: mov ecx, esi */ r_ecx = r_esi;
    /* 005d3130: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d3135u); f_005d2880();
    /* 005d3135: movsx ecx, word ptr [ebx + 0xe] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xeu));
    /* 005d3139: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d313c: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d313e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d313f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3141: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x5d3146u); f_00857e29();
    /* 005d3146: mov eax, ebp */ r_eax = r_ebp;
    /* 005d3148: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d314b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d314c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d314d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d314e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d314f: ret  */ FN_RET(0x005d3078); r_esp += 4; return;
L_005d3150:; BB(0x005d3150);
    /* 005d3150: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3151: call 0x7930a0 */ r_esp -= 4; W32(r_esp, 0x5d3156u); f_007930a0();
    /* 005d3156: mov ebx, eax */ r_ebx = r_eax;
    /* 005d3158: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d315b: jmp 0x5d30e5 */ goto L_005d30e5;
L_005d315d:; BB(0x005d315d);
    /* 005d315d: mov ecx, esi */ r_ecx = r_esi;
    /* 005d315f: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x5d3164u); f_005d6990();
    /* 005d3164: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3166: je 0x5d3187 */ if (fZ) goto L_005d3187;
L_005d3168:; BB(0x005d3168);
    /* 005d3168: mov ecx, esi */ r_ecx = r_esi;
    /* 005d316a: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x5d316fu); f_005d2fb0();
    /* 005d316f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3171: jne 0x5d3187 */ if (!fZ) goto L_005d3187;
L_005d3173:; BB(0x005d3173);
    /* 005d3173: push 0x19b */ { u32 v = 0x19bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3178: call 0x7930a0 */ r_esp -= 4; W32(r_esp, 0x5d317du); f_007930a0();
    /* 005d317d: mov ebx, eax */ r_ebx = r_eax;
    /* 005d317f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3182: jmp 0x5d30e5 */ goto L_005d30e5;
L_005d3187:; BB(0x005d3187);
    /* 005d3187: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3188: call 0x7930a0 */ r_esp -= 4; W32(r_esp, 0x5d318du); f_007930a0();
    /* 005d318d: mov ebx, eax */ r_ebx = r_eax;
    /* 005d318f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3192: jmp 0x5d30e5 */ goto L_005d30e5;
L_005d3197:; BB(0x005d3197);
    /* 005d3197: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 005d319c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d319d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d319e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d319f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d31a0: ret  */ FN_RET(0x005d3078); r_esp += 4; return;
L_005d31a1:; BB(0x005d31a1);
    /* 005d31a1: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 005d31a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d31a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d31a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d31a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d31aa: ret  */ FN_RET(0x005d3078); r_esp += 4; return;
}

void f_005d31ac(void) /* sub_5D31AC */
{
    FN_ENTER(0x005d31ac);
    /* 005d31ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d31ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d31af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d31b1: call 0x5d31d4 */ r_esp -= 4; W32(r_esp, 0x5d31b6u); f_005d31d4();
    /* 005d31b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d31b8: je 0x5d31cf */ if (fZ) goto L_005d31cf;
L_005d31ba:; BB(0x005d31ba);
    /* 005d31ba: movzx eax, byte ptr [ebx + 0xa] */ r_eax = (u32)R8((u32)(r_ebx+0xau));
    /* 005d31be: movzx edx, byte ptr [ebx + 0xb] */ r_edx = (u32)R8((u32)(r_ebx+0xbu));
    /* 005d31c2: and eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d31c5: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005d31c8: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d31ca: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005d31cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d31ce: ret  */ FN_RET(0x005d31ac); r_esp += 4; return;
L_005d31cf:; BB(0x005d31cf);
    /* 005d31cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d31d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d31d2: ret  */ FN_RET(0x005d31ac); r_esp += 4; return;
}

void f_005d31d4(void) /* sub_5D31D4 */
{
    FN_ENTER(0x005d31d4);
    /* 005d31d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d31d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d31d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d31d9: call 0x5d2f7c */ r_esp -= 4; W32(r_esp, 0x5d31deu); f_005d2f7c();
    /* 005d31de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d31e0: jne 0x5d3202 */ if (!fZ) goto L_005d3202;
L_005d31e2:; BB(0x005d31e2);
    /* 005d31e2: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005d31e6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d31e9: je 0x5d3202 */ if (fZ) goto L_005d3202;
L_005d31eb:; BB(0x005d31eb);
    /* 005d31eb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d31ee: je 0x5d3202 */ if (fZ) goto L_005d3202;
L_005d31f0:; BB(0x005d31f0);
    /* 005d31f0: movzx eax, byte ptr [ebp + 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xau));
    /* 005d31f4: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d31f9: je 0x5d3202 */ if (fZ) goto L_005d3202;
L_005d31fb:; BB(0x005d31fb);
    /* 005d31fb: mov eax, 1 */ r_eax = 0x1u;
    /* 005d3200: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3201: ret  */ FN_RET(0x005d31d4); r_esp += 4; return;
L_005d3202:; BB(0x005d3202);
    /* 005d3202: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3204: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3205: ret  */ FN_RET(0x005d31d4); r_esp += 4; return;
}

void f_005d3208(void) /* sub_5D3208 */
{
    FN_ENTER(0x005d3208);
    /* 005d3208: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3209: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d320b: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 005d320e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3210: jne 0x5d321f */ if (!fZ) goto L_005d321f;
L_005d3212:; BB(0x005d3212);
    /* 005d3212: movzx eax, byte ptr [ebx + 4] */ r_eax = (u32)R8((u32)(r_ebx+0x4u));
    /* 005d3216: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3218: jle 0x5d321f */ if ((fZ||fS!=fO)) goto L_005d321f;
L_005d321a:; BB(0x005d321a);
    /* 005d321a: cmp eax, 0x29 */ {  u32 a = r_eax; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d321d: jl 0x5d3226 */ if ((fS!=fO)) goto L_005d3226;
L_005d321f:; BB(0x005d321f);
    /* 005d321f: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 005d3224: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3225: ret  */ FN_RET(0x005d3208); r_esp += 4; return;
L_005d3226:; BB(0x005d3226);
    /* 005d3226: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3228: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x5d322du); f_005d6990();
    /* 005d322d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d322f: jne 0x5d321f */ if (!fZ) goto L_005d321f;
L_005d3231:; BB(0x005d3231);
    /* 005d3231: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3233: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x5d3238u); f_005d2fb0();
    /* 005d3238: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d323b: je 0x5d324a */ if (fZ) goto L_005d324a;
L_005d323d:; BB(0x005d323d);
    /* 005d323d: push 0x27f */ { u32 v = 0x27fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3242: call 0x7930a0 */ r_esp -= 4; W32(r_esp, 0x5d3247u); f_007930a0();
    /* 005d3247: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3248: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3249: ret  */ FN_RET(0x005d3208); r_esp += 4; return;
L_005d324a:; BB(0x005d324a);
    /* 005d324a: movzx eax, byte ptr [ebx + 4] */ r_eax = (u32)R8((u32)(r_ebx+0x4u));
    /* 005d324e: add eax, 0x256 */ {  u32 a = r_eax; u32 b = 0x256u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3254: call 0x7930a0 */ r_esp -= 4; W32(r_esp, 0x5d3259u); f_007930a0();
    /* 005d3259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d325a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d325b: ret  */ FN_RET(0x005d3208); r_esp += 4; return;
}

void f_005d325c(void) /* sub_5D325C */
{
    FN_ENTER(0x005d325c);
    /* 005d325c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d325d: mov esi, ecx */ r_esi = r_ecx;
    /* 005d325f: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 005d3262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3264: je 0x5d32d6 */ if (fZ) goto L_005d32d6;
L_005d3266:; BB(0x005d3266);
    /* 005d3266: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3269: jne 0x5d32b7 */ if (!fZ) goto L_005d32b7;
L_005d326b:; BB(0x005d326b);
    /* 005d326b: movzx eax, byte ptr [esi + 1] */ r_eax = (u32)R8((u32)(r_esi+0x1u));
    /* 005d326f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3272: je 0x5d3293 */ if (fZ) goto L_005d3293;
L_005d3274:; BB(0x005d3274);
    /* 005d3274: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3277: je 0x5d32a2 */ if (fZ) goto L_005d32a2;
L_005d3279:; BB(0x005d3279);
    /* 005d3279: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d327c: jne 0x5d32ee */ if (!fZ) goto L_005d32ee;
L_005d327e:; BB(0x005d327e);
    /* 005d327e: mov ecx, esi */ r_ecx = r_esi;
    /* 005d3280: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d3285u); f_005d2880();
    /* 005d3285: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d3288: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d328a: jle 0x5d32ee */ if ((fZ||fS!=fO)) goto L_005d32ee;
L_005d328c:; BB(0x005d328c);
    /* 005d328c: mov eax, 1 */ r_eax = 0x1u;
    /* 005d3291: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d3292: ret  */ FN_RET(0x005d325c); r_esp += 4; return;
L_005d3293:; BB(0x005d3293);
    /* 005d3293: movzx eax, byte ptr [esi + 5] */ r_eax = (u32)R8((u32)(r_esi+0x5u));
    /* 005d3297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3299: jle 0x5d32a2 */ if ((fZ||fS!=fO)) goto L_005d32a2;
L_005d329b:; BB(0x005d329b);
    /* 005d329b: mov eax, 1 */ r_eax = 0x1u;
    /* 005d32a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d32a1: ret  */ FN_RET(0x005d325c); r_esp += 4; return;
L_005d32a2:; BB(0x005d32a2);
    /* 005d32a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005d32a4: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d32a9u); f_005d2880();
    /* 005d32a9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d32ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d32ae: jle 0x5d32f2 */ if ((fZ||fS!=fO)) goto L_005d32f2;
L_005d32b0:; BB(0x005d32b0);
    /* 005d32b0: mov eax, 1 */ r_eax = 0x1u;
    /* 005d32b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d32b6: ret  */ FN_RET(0x005d325c); r_esp += 4; return;
L_005d32b7:; BB(0x005d32b7);
    /* 005d32b7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d32ba: jne 0x5d32ee */ if (!fZ) goto L_005d32ee;
L_005d32bc:; BB(0x005d32bc);
    /* 005d32bc: movzx eax, byte ptr [esi + 1] */ r_eax = (u32)R8((u32)(r_esi+0x1u));
    /* 005d32c0: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d32c3: je 0x5d32cf */ if (fZ) goto L_005d32cf;
L_005d32c5:; BB(0x005d32c5);
    /* 005d32c5: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d32c8: jl 0x5d32ee */ if ((fS!=fO)) goto L_005d32ee;
L_005d32ca:; BB(0x005d32ca);
    /* 005d32ca: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d32cd: jg 0x5d3302 */ if ((!fZ&&fS==fO)) goto L_005d3302;
L_005d32cf:; BB(0x005d32cf);
    /* 005d32cf: mov eax, 1 */ r_eax = 0x1u;
    /* 005d32d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d32d5: ret  */ FN_RET(0x005d325c); r_esp += 4; return;
L_005d32d6:; BB(0x005d32d6);
    /* 005d32d6: movzx eax, byte ptr [esi + 6] */ r_eax = (u32)R8((u32)(r_esi+0x6u));
    /* 005d32da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d32dc: jne 0x5d328c */ if (!fZ) goto L_005d328c;
L_005d32de:; BB(0x005d32de);
    /* 005d32de: movzx eax, byte ptr [esi + 8] */ r_eax = (u32)R8((u32)(r_esi+0x8u));
    /* 005d32e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d32e4: jne 0x5d328c */ if (!fZ) goto L_005d328c;
L_005d32e6:; BB(0x005d32e6);
    /* 005d32e6: movzx eax, byte ptr [esi + 0xa] */ r_eax = (u32)R8((u32)(r_esi+0xau));
    /* 005d32ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d32ec: jne 0x5d328c */ if (!fZ) goto L_005d328c;
L_005d32ee:; BB(0x005d32ee);
    /* 005d32ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d32f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d32f1: ret  */ FN_RET(0x005d325c); r_esp += 4; return;
L_005d32f2:; BB(0x005d32f2);
    /* 005d32f2: mov ecx, esi */ r_ecx = r_esi;
    /* 005d32f4: call 0x5d2888 */ r_esp -= 4; W32(r_esp, 0x5d32f9u); f_005d2888();
    /* 005d32f9: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d32fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d32fe: jle 0x5d32ee */ if ((fZ||fS!=fO)) goto L_005d32ee;
L_005d3300:; BB(0x005d3300);
    /* 005d3300: jmp 0x5d32b0 */ goto L_005d32b0;
L_005d3302:; BB(0x005d3302);
    /* 005d3302: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3305: jne 0x5d32ee */ if (!fZ) goto L_005d32ee;
L_005d3307:; BB(0x005d3307);
    /* 005d3307: jmp 0x5d32cf */ goto L_005d32cf;
}

void f_005d330c(void) /* sub_5D330C */
{
    FN_ENTER(0x005d330c);
    /* 005d330c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d330d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d330e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d330f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3310: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3313: mov esi, ecx */ r_esi = r_ecx;
    /* 005d3315: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 005d3319: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 005d331d: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 005d3321: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3323: je 0x5d3562 */ if (fZ) goto L_005d3562;
L_005d3329:; BB(0x005d3329);
    /* 005d3329: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 005d332c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d332e: je 0x5d33bd */ if (fZ) goto L_005d33bd;
L_005d3334:; BB(0x005d3334);
    /* 005d3334: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3337: jne 0x5d339b */ if (!fZ) goto L_005d339b;
L_005d3339:; BB(0x005d3339);
    /* 005d3339: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 005d333d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3340: je 0x5d3382 */ if (fZ) goto L_005d3382;
L_005d3342:; BB(0x005d3342);
    /* 005d3342: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3345: jne 0x5d3360 */ if (!fZ) goto L_005d3360;
L_005d3347:; BB(0x005d3347);
    /* 005d3347: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d334b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d334c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d334d: mov ecx, esi */ r_ecx = r_esi;
    /* 005d334f: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d3353: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3354: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3355: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3356: call 0x5d4774 */ r_esp -= 4; W32(r_esp, 0x5d335bu); f_005d4774();
    /* 005d335b: jmp 0x5d34c3 */ goto L_005d34c3;
L_005d3360:; BB(0x005d3360);
    /* 005d3360: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3363: jne 0x5d34c3 */ if (!fZ) goto L_005d34c3;
L_005d3369:; BB(0x005d3369);
    /* 005d3369: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d336d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d336e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d336f: mov ecx, esi */ r_ecx = r_esi;
    /* 005d3371: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d3375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3376: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3377: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3378: call 0x5d41a0 */ r_esp -= 4; W32(r_esp, 0x5d337du); f_005d41a0();
    /* 005d337d: jmp 0x5d34c3 */ goto L_005d34c3;
L_005d3382:; BB(0x005d3382);
    /* 005d3382: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d3386: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3387: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3388: mov ecx, esi */ r_ecx = r_esi;
    /* 005d338a: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d338e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d338f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3391: call 0x5d4840 */ r_esp -= 4; W32(r_esp, 0x5d3396u); f_005d4840();
    /* 005d3396: jmp 0x5d34c3 */ goto L_005d34c3;
L_005d339b:; BB(0x005d339b);
    /* 005d339b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d339e: jne 0x5d34c3 */ if (!fZ) goto L_005d34c3;
L_005d33a4:; BB(0x005d33a4);
    /* 005d33a4: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d33a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d33a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d33aa: mov ecx, esi */ r_ecx = r_esi;
    /* 005d33ac: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d33b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d33b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d33b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d33b3: call 0x5d3fa4 */ r_esp -= 4; W32(r_esp, 0x5d33b8u); f_005d3fa4();
    /* 005d33b8: jmp 0x5d34c3 */ goto L_005d34c3;
L_005d33bd:; BB(0x005d33bd);
    /* 005d33bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d33be: mov ecx, esi */ r_ecx = r_esi;
    /* 005d33c0: call 0x5d3584 */ r_esp -= 4; W32(r_esp, 0x5d33c5u); f_005d3584();
    /* 005d33c5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005d33c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d33ca: mov ecx, esi */ r_ecx = r_esi;
    /* 005d33cc: call 0x5d3f70 */ r_esp -= 4; W32(r_esp, 0x5d33d1u); f_005d3f70();
    /* 005d33d1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005d33d5: mov ecx, esi */ r_ecx = r_esi;
    /* 005d33d7: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d33dcu); f_005d2890();
    /* 005d33dc: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005d33e0: mov edx, eax */ r_edx = r_eax;
    /* 005d33e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d33e4: je 0x5d34c3 */ if (fZ) goto L_005d34c3;
L_005d33ea:; BB(0x005d33ea);
    /* 005d33ea: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d33ec: je 0x5d34b3 */ if (fZ) goto L_005d34b3;
L_005d33f2:; BB(0x005d33f2);
    /* 005d33f2: mov ecx, eax */ r_ecx = r_eax;
    /* 005d33f4: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005d33f8: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005d33fc: movzx edx, byte ptr [esi + 3] */ r_edx = (u32)R8((u32)(r_esi+0x3u));
    /* 005d3400: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d3402: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 005d3405: movzx edx, word ptr [ecx + 0xe] */ r_edx = (u32)R16((u32)(r_ecx+0xeu));
    /* 005d3409: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d340b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d340e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d3411: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005d3413: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005d3415: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d3419: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d341e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d3423: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d3427: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d342b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d342f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d3433: movzx eax, word ptr [ecx + 0x10] */ r_eax = (u32)R16((u32)(r_ecx+0x10u));
    /* 005d3437: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005d343b: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d343d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d3441: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005d3445: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005d3447: add word ptr [ebx], dx */ { u32 ad = (u32)(r_ebx);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d344a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005d344c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d3450: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d3455: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d345a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d345e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d3462: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d3466: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d346a: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005d346e: add word ptr [ebx + 2], di */ { u32 ad = (u32)(r_ebx+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d3472: movzx edx, byte ptr [ecx + 0x1d] */ r_edx = (u32)R8((u32)(r_ecx+0x1du));
    /* 005d3476: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 005d3479: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d347b: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d347d: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 005d3481: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d3483: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d3485: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 005d3488: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 005d348c: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005d3490: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 005d3494: movzx edx, byte ptr [esi + 6] */ r_edx = (u32)R8((u32)(r_esi+0x6u));
    /* 005d3498: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d349b: je 0x5d3541 */ if (fZ) goto L_005d3541;
L_005d34a1:; BB(0x005d34a1);
    /* 005d34a1: movzx edx, byte ptr [esi + 8] */ r_edx = (u32)R8((u32)(r_esi+0x8u));
    /* 005d34a5: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d34a8: je 0x5d3520 */ if (fZ) goto L_005d3520;
L_005d34aa:; BB(0x005d34aa);
    /* 005d34aa: movzx edx, byte ptr [esi + 0xa] */ r_edx = (u32)R8((u32)(r_esi+0xau));
    /* 005d34ae: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d34b1: je 0x5d3509 */ if (fZ) goto L_005d3509;
L_005d34b3:; BB(0x005d34b3);
    /* 005d34b3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d34b5: je 0x5d34c3 */ if (fZ) goto L_005d34c3;
L_005d34b7:; BB(0x005d34b7);
    /* 005d34b7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 005d34bb: movzx edx, word ptr [edx + 0x18] */ r_edx = (u32)R16((u32)(r_edx+0x18u));
    /* 005d34bf: add word ptr [edi + 2], dx */ { u32 ad = (u32)(r_edi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_005d34c3:; BB(0x005d34c3);
    /* 005d34c3: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d34c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d34c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d34c9: mov ecx, esi */ r_ecx = r_esi;
    /* 005d34cb: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d34cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d34d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d34d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d34d2: call 0x5d490c */ r_esp -= 4; W32(r_esp, 0x5d34d7u); f_005d490c();
    /* 005d34d7: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d34db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d34dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d34dd: mov ecx, esi */ r_ecx = r_esi;
    /* 005d34df: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d34e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d34e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d34e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d34e6: call 0x5d4afc */ r_esp -= 4; W32(r_esp, 0x5d34ebu); f_005d4afc();
    /* 005d34eb: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 005d34ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d34f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d34f1: mov ecx, esi */ r_ecx = r_esi;
    /* 005d34f3: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 005d34f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d34f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d34f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d34fa: call 0x5d4c38 */ r_esp -= 4; W32(r_esp, 0x5d34ffu); f_005d4c38();
    /* 005d34ff: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d3502: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3503: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3504: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d3505: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3506: ret 0x14 */ FN_RET(0x005d330c); r_esp += 24; return;
L_005d3509:; BB(0x005d3509);
    /* 005d3509: movsx edx, byte ptr [esi + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0xbu));
    /* 005d350d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005d3510: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3512: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3514: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3516: add eax, dword ptr [esp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d351a: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 005d351e: jmp 0x5d34b3 */ goto L_005d34b3;
L_005d3520:; BB(0x005d3520);
    /* 005d3520: movsx edx, byte ptr [esi + 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x9u));
    /* 005d3524: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005d3527: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3529: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d352b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d352d: add eax, dword ptr [esp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3531: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d3534: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 005d3538: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005d353c: jmp 0x5d34aa */ goto L_005d34aa;
L_005d3541:; BB(0x005d3541);
    /* 005d3541: movsx edx, byte ptr [esi + 7] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x7u));
    /* 005d3545: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005d3548: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d354a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d354c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d354e: add eax, dword ptr [esp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3552: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d3555: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 005d3559: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005d355d: jmp 0x5d34a1 */ goto L_005d34a1;
L_005d3562:; BB(0x005d3562);
    /* 005d3562: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d3568: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d356du); f_0068d5a8();
    /* 005d356d: mov ebp, eax */ r_ebp = r_eax;
    /* 005d356f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3572: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3574: jne 0x5d3329 */ if (!fZ) goto L_005d3329;
L_005d357a:; BB(0x005d357a);
    /* 005d357a: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d357d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d357e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d357f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d3580: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3581: ret 0x14 */ FN_RET(0x005d330c); r_esp += 24; return;
}

void f_005d3584(void) /* sub_5D3584 */
{
    FN_ENTER(0x005d3584);
    /* 005d3584: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d3587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3589: jne 0x5d3598 */ if (!fZ) goto L_005d3598;
L_005d358b:; BB(0x005d358b);
    /* 005d358b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005d358f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3590: call 0x5d3b54 */ r_esp -= 4; W32(r_esp, 0x5d3595u); f_005d3b54();
    /* 005d3595: ret 4 */ FN_RET(0x005d3584); r_esp += 8; return;
L_005d3598:; BB(0x005d3598);
    /* 005d3598: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d359b: jne 0x5d35c5 */ if (!fZ) goto L_005d35c5;
L_005d359d:; BB(0x005d359d);
    /* 005d359d: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d35a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d35a4: jne 0x5d35b3 */ if (!fZ) goto L_005d35b3;
L_005d35a6:; BB(0x005d35a6);
    /* 005d35a6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005d35aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d35ab: call 0x5d3780 */ r_esp -= 4; W32(r_esp, 0x5d35b0u); f_005d3780();
    /* 005d35b0: ret 4 */ FN_RET(0x005d3584); r_esp += 8; return;
L_005d35b3:; BB(0x005d35b3);
    /* 005d35b3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d35b6: jne 0x5d35c5 */ if (!fZ) goto L_005d35c5;
L_005d35b8:; BB(0x005d35b8);
    /* 005d35b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005d35bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d35bd: call 0x5d35d0 */ r_esp -= 4; W32(r_esp, 0x5d35c2u); f_005d35d0();
    /* 005d35c2: ret 4 */ FN_RET(0x005d3584); r_esp += 8; return;
L_005d35c5:; BB(0x005d35c5);
    /* 005d35c5: fld dword ptr [0x92c4a4] */ FPUSH(R_F32((u32)(0x92c4a4u)));
    /* 005d35cb: ret 4 */ FN_RET(0x005d3584); r_esp += 8; return;
}

void f_005d35d0(void) /* sub_5D35D0 */
{
    FN_ENTER(0x005d35d0);
    /* 005d35d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d35d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d35d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d35d3: fld dword ptr [0x92c4a0] */ FPUSH(R_F32((u32)(0x92c4a0u)));
    /* 005d35d9: movzx eax, byte ptr [ecx + 2] */ r_eax = (u32)R8((u32)(r_ecx+0x2u));
    /* 005d35dd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d35e0: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d35e3: je 0x5d3748 */ if (fZ) goto L_005d3748;
L_005d35e9:; BB(0x005d35e9);
    /* 005d35e9: cmp eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d35ec: je 0x5d36e4 */ if (fZ) goto L_005d36e4;
L_005d35f2:; BB(0x005d35f2);
    /* 005d35f2: cmp eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d35f5: je 0x5d3663 */ if (fZ) goto L_005d3663;
L_005d35f7:; BB(0x005d35f7);
    /* 005d35f7: cmp eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d35fa: jne 0x5d3634 */ if (!fZ) goto L_005d3634;
L_005d35fc:; BB(0x005d35fc);
    /* 005d35fc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3600: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3602: lea edi, [eax + 0xdf8] */ r_edi = (u32)(r_eax+0xdf8u);
    /* 005d3608: mov ecx, edi */ r_ecx = r_edi;
    /* 005d360a: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d360fu); f_0069792c();
    /* 005d360f: mov esi, eax */ r_esi = r_eax;
    /* 005d3611: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3613: mov ecx, edi */ r_ecx = r_edi;
    /* 005d3615: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d361au); f_0069792c();
    /* 005d361a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d361c: je 0x5d3695 */ if (fZ) goto L_005d3695;
L_005d3622:; BB(0x005d3622);
    /* 005d3622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3624: je 0x5d3695 */ if (fZ) goto L_005d3695;
L_005d3626:; BB(0x005d3626);
    /* 005d3626: movzx edx, byte ptr [esi + 0xf3] */ r_edx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005d362d: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3630: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d3632:; BB(0x005d3632);
    /* 005d3632: jmp 0x5d369e */ goto L_005d369e;
L_005d3634:; BB(0x005d3634);
    /* 005d3634: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3639: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d363b:; BB(0x005d363b);
    /* 005d363b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d363f: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3645: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3647: je 0x5d3654 */ if (fZ) goto L_005d3654;
L_005d3649:; BB(0x005d3649);
    /* 005d3649: fld dword ptr [0x92c49c] */ FPUSH(R_F32((u32)(0x92c49cu)));
    /* 005d364f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3652: jmp 0x5d3695 */ goto L_005d3695;
L_005d3654:; BB(0x005d3654);
    /* 005d3654: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3656: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d3658:; BB(0x005d3658);
    /* 005d3658: fld dword ptr [0x92c498] */ FPUSH(R_F32((u32)(0x92c498u)));
    /* 005d365e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3661: jmp 0x5d3695 */ goto L_005d3695;
L_005d3663:; BB(0x005d3663);
    /* 005d3663: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3667: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3669: lea edi, [eax + 0xdf8] */ r_edi = (u32)(r_eax+0xdf8u);
    /* 005d366f: mov ecx, edi */ r_ecx = r_edi;
    /* 005d3671: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3676u); f_0069792c();
    /* 005d3676: mov esi, eax */ r_esi = r_eax;
    /* 005d3678: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d367a: mov ecx, edi */ r_ecx = r_edi;
    /* 005d367c: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3681u); f_0069792c();
    /* 005d3681: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3683: je 0x5d3695 */ if (fZ) goto L_005d3695;
L_005d3685:; BB(0x005d3685);
    /* 005d3685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3687: je 0x5d3695 */ if (fZ) goto L_005d3695;
L_005d3689:; BB(0x005d3689);
    /* 005d3689: movzx edx, byte ptr [esi + 0xf3] */ r_edx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005d3690: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3693: je 0x5d36c1 */ if (fZ) goto L_005d36c1;
L_005d3695:; BB(0x005d3695);
    /* 005d3695: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3698: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3699: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d369a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d369b: ret 4 */ FN_RET(0x005d35d0); r_esp += 8; return;
L_005d369e:; BB(0x005d369e);
    /* 005d369e: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005d36a5: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d36a8: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d36aa:; BB(0x005d36aa);
    /* 005d36aa: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d36b1: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d36b4: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d36b6:; BB(0x005d36b6);
    /* 005d36b6: fld dword ptr [0x92c49c] */ FPUSH(R_F32((u32)(0x92c49cu)));
    /* 005d36bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d36bf: jmp 0x5d3695 */ goto L_005d3695;
L_005d36c1:; BB(0x005d36c1);
    /* 005d36c1: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005d36c8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d36cb: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d36cd:; BB(0x005d36cd);
    /* 005d36cd: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d36d4: cmp eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d36d7: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d36d9:; BB(0x005d36d9);
    /* 005d36d9: fld dword ptr [0x92c49c] */ FPUSH(R_F32((u32)(0x92c49cu)));
    /* 005d36df: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d36e2: jmp 0x5d3695 */ goto L_005d3695;
L_005d36e4:; BB(0x005d36e4);
    /* 005d36e4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d36e8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d36ea: lea edi, [eax + 0xdf8] */ r_edi = (u32)(r_eax+0xdf8u);
    /* 005d36f0: mov ecx, edi */ r_ecx = r_edi;
    /* 005d36f2: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d36f7u); f_0069792c();
    /* 005d36f7: mov esi, eax */ r_esi = r_eax;
    /* 005d36f9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d36fb: mov ecx, edi */ r_ecx = r_edi;
    /* 005d36fd: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3702u); f_0069792c();
    /* 005d3702: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3704: je 0x5d3695 */ if (fZ) goto L_005d3695;
L_005d3706:; BB(0x005d3706);
    /* 005d3706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3708: je 0x5d3695 */ if (fZ) goto L_005d3695;
L_005d370a:; BB(0x005d370a);
    /* 005d370a: movzx edx, byte ptr [esi + 0xf3] */ r_edx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005d3711: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3714: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d371a:; BB(0x005d371a);
    /* 005d371a: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005d3721: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3724: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d372a:; BB(0x005d372a);
    /* 005d372a: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3731: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3734: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d373a:; BB(0x005d373a);
    /* 005d373a: fld dword ptr [0x92c49c] */ FPUSH(R_F32((u32)(0x92c49cu)));
    /* 005d3740: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3743: jmp 0x5d3695 */ goto L_005d3695;
L_005d3748:; BB(0x005d3748);
    /* 005d3748: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d374c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d374e: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005d3754: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3759u); f_0069792c();
    /* 005d3759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d375b: je 0x5d3695 */ if (fZ) goto L_005d3695;
L_005d3761:; BB(0x005d3761);
    /* 005d3761: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d3768: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d376b: jne 0x5d3695 */ if (!fZ) goto L_005d3695;
L_005d3771:; BB(0x005d3771);
    /* 005d3771: fld dword ptr [0x92c494] */ FPUSH(R_F32((u32)(0x92c494u)));
    /* 005d3777: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d377a: jmp 0x5d3695 */ goto L_005d3695;
}

void f_005d3780(void) /* sub_5D3780 */
{
    FN_ENTER(0x005d3780);
    /* 005d3780: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3781: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3782: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3783: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3789: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 005d378d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3790: lea eax, [edx - 0x18] */ r_eax = (u32)(r_edx+0xffffffe8u);
    /* 005d3793: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d3796: ja 0x5d3a47 */ if ((!fC&&!fZ)) goto L_005d3a47;
L_005d379c:; BB(0x005d379c);
    /* 005d379c: mov eax, dword ptr [edx*4 + 0x92c040] */ r_eax = R32((u32)(r_edx*4+0x92c040u));
    /* 005d37a3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005d3a47:; BB(0x005d3a47);
    /* 005d3a47: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3a4b: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d3780); r_esp += 8; return;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d37a5(void)
{
    FN_ENTER(0x005d37a5);
    /* 005d37a5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d37a9: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005d37ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d37ae: call 0x5e27a8 */ r_esp -= 4; W32(r_esp, 0x5d37b3u); f_005e27a8();
    /* 005d37b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d37b4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d37b7: je 0x5d37e4 */ if (fZ) goto L_005d37e4;
L_005d37b9:; BB(0x005d37b9);
    /* 005d37b9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d37bc: jne 0x5d37c9 */ if (!fZ) goto L_005d37c9;
L_005d37be:; BB(0x005d37be);
    /* 005d37be: fld dword ptr [0x92c488] */ FPUSH(R_F32((u32)(0x92c488u)));
    /* 005d37c4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d37c7: jmp 0x5d37ed */ goto L_005d37ed;
L_005d37c9:; BB(0x005d37c9);
    /* 005d37c9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d37cc: jne 0x5d37d9 */ if (!fZ) goto L_005d37d9;
L_005d37ce:; BB(0x005d37ce);
    /* 005d37ce: fld dword ptr [0x92c48c] */ FPUSH(R_F32((u32)(0x92c48cu)));
    /* 005d37d4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d37d7: jmp 0x5d37ed */ goto L_005d37ed;
L_005d37d9:; BB(0x005d37d9);
    /* 005d37d9: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d37df: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d37e2: jmp 0x5d37ed */ goto L_005d37ed;
L_005d37e4:; BB(0x005d37e4);
    /* 005d37e4: fld dword ptr [0x92c484] */ FPUSH(R_F32((u32)(0x92c484u)));
    /* 005d37ea: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_005d37ed:; BB(0x005d37ed);
    /* 005d37ed: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d37f1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d37f3: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d37f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d37fb: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3800u); f_0069792c();
    /* 005d3800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3802: je 0x5d3a51 */ if (fZ) goto L_005d3a51;
L_005d3808:; BB(0x005d3808);
    /* 005d3808: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d380f: cmp eax, 0x2a */ {  u32 a = r_eax; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3812: jne 0x5d3a51 */ if (!fZ) goto L_005d3a51;
L_005d3818:; BB(0x005d3818);
    /* 005d3818: fld dword ptr [0x92c480] */ FPUSH(R_F32((u32)(0x92c480u)));
    /* 005d381e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3821: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d37a5); r_esp += 8; return;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d3826(void)
{
    FN_ENTER(0x005d3826);
    /* 005d3826: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d382a: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005d382e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d382f: call 0x5e27a8 */ r_esp -= 4; W32(r_esp, 0x5d3834u); f_005e27a8();
    /* 005d3834: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3835: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005d3839: lea ebx, [edx + 0xdf8] */ r_ebx = (u32)(r_edx+0xdf8u);
    /* 005d383f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3841: je 0x5d3a51 */ if (fZ) goto L_005d3a51;
L_005d3847:; BB(0x005d3847);
    /* 005d3847: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d384d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3850: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d3826); r_esp += 8; return;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d3855(void)
{
    FN_ENTER(0x005d3855);
    /* 005d3855: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3859: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d385b: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d3861: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3863: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3868u); f_0069792c();
    /* 005d3868: mov edi, eax */ r_edi = r_eax;
    /* 005d386a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d386c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d386e: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3873u); f_0069792c();
    /* 005d3873: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3875: je 0x5d3a51 */ if (fZ) goto L_005d3a51;
L_005d387b:; BB(0x005d387b);
    /* 005d387b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d387d: je 0x5d3a51 */ if (fZ) goto L_005d3a51;
L_005d3883:; BB(0x005d3883);
    /* 005d3883: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005d388a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d388d: je 0x5d3a79 */ if (fZ) goto L_005d3a79;
L_005d3893:; BB(0x005d3893);
    /* 005d3893: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d3855); r_esp += 8; return;
L_005d3a79:; BB(0x005d3a79);
    /* 005d3a79: movzx edx, byte ptr [edi + 0xf4] */ r_edx = (u32)R8((u32)(r_edi+0xf4u));
    /* 005d3a80: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3a83: jne 0x5d3a51 */ if (!fZ) goto L_005d3a51;
L_005d3a85:; BB(0x005d3a85);
    /* 005d3a85: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a8c: cmp eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3a8f: jne 0x5d3a51 */ if (!fZ) goto L_005d3a51;
L_005d3a91:; BB(0x005d3a91);
    /* 005d3a91: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3a97: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3a9a: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d3898(void)
{
    FN_ENTER(0x005d3898);
    /* 005d3898: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d389c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d389e: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d38a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d38a6: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d38abu); f_0069792c();
    /* 005d38ab: mov edi, eax */ r_edi = r_eax;
    /* 005d38ad: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d38af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d38b1: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d38b6u); f_0069792c();
    /* 005d38b6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d38b8: je 0x5d3a51 */ if (fZ) goto L_005d3a51;
L_005d38be:; BB(0x005d38be);
    /* 005d38be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d38c0: je 0x5d3a51 */ if (fZ) goto L_005d3a51;
L_005d38c6:; BB(0x005d38c6);
    /* 005d38c6: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005d38cd: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d38d0: je 0x5d3abf */ if (fZ) goto L_005d3abf;
L_005d38d6:; BB(0x005d38d6);
    /* 005d38d6: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d3898); r_esp += 8; return;
L_005d3abf:; BB(0x005d3abf);
    /* 005d3abf: movzx edx, byte ptr [edi + 0xf4] */ r_edx = (u32)R8((u32)(r_edi+0xf4u));
    /* 005d3ac6: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ac9: jne 0x5d3a51 */ if (!fZ) goto L_005d3a51;
L_005d3acb:; BB(0x005d3acb);
    /* 005d3acb: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3ad2: cmp eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ad5: jne 0x5d3a51 */ if (!fZ) goto L_005d3a51;
L_005d3adb:; BB(0x005d3adb);
    /* 005d3adb: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3ae1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3ae4: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d38db(void)
{
    FN_ENTER(0x005d38db);
    /* 005d38db: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d38df: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d38e1: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d38e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d38e9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d38eeu); f_0069792c();
    /* 005d38ee: mov edi, eax */ r_edi = r_eax;
    /* 005d38f0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d38f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d38f4: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d38f9u); f_0069792c();
    /* 005d38f9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d38fb: je 0x5d3a51 */ if (fZ) goto L_005d3a51;
L_005d3901:; BB(0x005d3901);
    /* 005d3901: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3903: je 0x5d3a51 */ if (fZ) goto L_005d3a51;
L_005d3909:; BB(0x005d3909);
    /* 005d3909: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005d3910: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3913: je 0x5d3a9c */ if (fZ) goto L_005d3a9c;
L_005d3919:; BB(0x005d3919);
    /* 005d3919: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d38db); r_esp += 8; return;
L_005d3a9c:; BB(0x005d3a9c);
    /* 005d3a9c: movzx edx, byte ptr [edi + 0xf4] */ r_edx = (u32)R8((u32)(r_edi+0xf4u));
    /* 005d3aa3: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3aa6: jne 0x5d3a51 */ if (!fZ) goto L_005d3a51;
L_005d3aa8:; BB(0x005d3aa8);
    /* 005d3aa8: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3aaf: cmp eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ab2: jne 0x5d3a51 */ if (!fZ) goto L_005d3a51;
L_005d3ab4:; BB(0x005d3ab4);
    /* 005d3ab4: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3aba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3abd: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d391e(void)
{
    FN_ENTER(0x005d391e);
    /* 005d391e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3922: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d3928: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d391e); r_esp += 8; return;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d392d(void)
{
    FN_ENTER(0x005d392d);
    /* 005d392d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d392f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005d3931:; BB(0x005d3931);
    /* 005d3931: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3932: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d3937u); f_0068d5a8();
    /* 005d3937: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d393a: je 0x5d396d */ if (fZ) goto L_005d396d;
L_005d393c:; BB(0x005d393c);
    /* 005d393c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d393e: add eax, 0xdf8 */ {  u32 a = r_eax; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3943: mov ecx, eax */ r_ecx = r_eax;
    /* 005d3945: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d394au); f_0069792c();
    /* 005d394a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d394c: je 0x5d396d */ if (fZ) goto L_005d396d;
L_005d394e:; BB(0x005d394e);
    /* 005d394e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3955: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3958: je 0x5d395f */ if (fZ) goto L_005d395f;
L_005d395a:; BB(0x005d395a);
    /* 005d395a: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d395d: jne 0x5d396d */ if (!fZ) goto L_005d396d;
L_005d395f:; BB(0x005d395f);
    /* 005d395f: fld dword ptr [0x92c478] */ FPUSH(R_F32((u32)(0x92c478u)));
    /* 005d3965: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3968: mov ebx, 1 */ r_ebx = 0x1u;
L_005d396d:; BB(0x005d396d);
    /* 005d396d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d3970: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3973: jge 0x5d3ae9 */ if ((fS==fO)) goto L_005d3ae9;
L_005d3979:; BB(0x005d3979);
    /* 005d3979: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d397c: jne 0x5d3931 */ if (!fZ) goto L_005d3931;
L_005d397e:; BB(0x005d397e);
    /* 005d397e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3982: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d3988: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d392d); r_esp += 8; return;
L_005d3ae9:; BB(0x005d3ae9);
    /* 005d3ae9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3aed: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d3af3: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d398d(void)
{
    FN_ENTER(0x005d398d);
    /* 005d398d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d398f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005d3991:; BB(0x005d3991);
    /* 005d3991: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3992: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d3997u); f_0068d5a8();
    /* 005d3997: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3998: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d399a: je 0x5d39cd */ if (fZ) goto L_005d39cd;
L_005d399c:; BB(0x005d399c);
    /* 005d399c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d399e: add eax, 0xdf8 */ {  u32 a = r_eax; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d39a3: mov ecx, eax */ r_ecx = r_eax;
    /* 005d39a5: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d39aau); f_0069792c();
    /* 005d39aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d39ac: je 0x5d39cd */ if (fZ) goto L_005d39cd;
L_005d39ae:; BB(0x005d39ae);
    /* 005d39ae: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d39b5: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d39b8: je 0x5d39bf */ if (fZ) goto L_005d39bf;
L_005d39ba:; BB(0x005d39ba);
    /* 005d39ba: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d39bd: jne 0x5d39cd */ if (!fZ) goto L_005d39cd;
L_005d39bf:; BB(0x005d39bf);
    /* 005d39bf: fld dword ptr [0x92c478] */ FPUSH(R_F32((u32)(0x92c478u)));
    /* 005d39c5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d39c8: mov ebx, 1 */ r_ebx = 0x1u;
L_005d39cd:; BB(0x005d39cd);
    /* 005d39cd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d39d0: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d39d3: jge 0x5d3af8 */ if ((fS==fO)) goto L_005d3af8;
L_005d39d9:; BB(0x005d39d9);
    /* 005d39d9: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d39dc: jne 0x5d3991 */ if (!fZ) goto L_005d3991;
L_005d39de:; BB(0x005d39de);
    /* 005d39de: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d39e2: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d39e8: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d398d); r_esp += 8; return;
L_005d3af8:; BB(0x005d3af8);
    /* 005d3af8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3afc: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d3b02: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d39ea(void)
{
    FN_ENTER(0x005d39ea);
    /* 005d39ea: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d39ec: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005d39ee:; BB(0x005d39ee);
    /* 005d39ee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d39ef: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d39f4u); f_0068d5a8();
    /* 005d39f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d39f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d39f7: je 0x5d3a2a */ if (fZ) goto L_005d3a2a;
L_005d39f9:; BB(0x005d39f9);
    /* 005d39f9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d39fb: add eax, 0xdf8 */ {  u32 a = r_eax; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3a00: mov ecx, eax */ r_ecx = r_eax;
    /* 005d3a02: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a07u); f_0069792c();
    /* 005d3a07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3a09: je 0x5d3a2a */ if (fZ) goto L_005d3a2a;
L_005d3a0b:; BB(0x005d3a0b);
    /* 005d3a0b: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a12: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3a15: je 0x5d3a1c */ if (fZ) goto L_005d3a1c;
L_005d3a17:; BB(0x005d3a17);
    /* 005d3a17: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3a1a: jne 0x5d3a2a */ if (!fZ) goto L_005d3a2a;
L_005d3a1c:; BB(0x005d3a1c);
    /* 005d3a1c: fld dword ptr [0x92c478] */ FPUSH(R_F32((u32)(0x92c478u)));
    /* 005d3a22: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3a25: mov ebx, 1 */ r_ebx = 0x1u;
L_005d3a2a:; BB(0x005d3a2a);
    /* 005d3a2a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d3a2d: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3a30: jge 0x5d3b07 */ if ((fS==fO)) goto L_005d3b07;
L_005d3a36:; BB(0x005d3a36);
    /* 005d3a36: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3a39: jne 0x5d39ee */ if (!fZ) goto L_005d39ee;
L_005d3a3b:; BB(0x005d3a3b);
    /* 005d3a3b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3a3f: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d3a45: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3a51:; BB(0x005d3a51);
    /* 005d3a51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3a55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3a5au); f_0069792c();
    /* 005d3a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3a5c: je 0x5d3a70 */ if (fZ) goto L_005d3a70;
L_005d3a5e:; BB(0x005d3a5e);
    /* 005d3a5e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3a65: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3a6a: je 0x5d3b16 */ if (fZ) goto L_005d3b16;
L_005d3a70:; BB(0x005d3a70);
    /* 005d3a70: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3a73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3a74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d3a76: ret 4 */ FN_RET(0x005d39ea); r_esp += 8; return;
L_005d3b07:; BB(0x005d3b07);
    /* 005d3b07: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b0b: lea ebx, [eax + 0xdf8] */ r_ebx = (u32)(r_eax+0xdf8u);
    /* 005d3b11: jmp 0x5d3a51 */ goto L_005d3a51;
L_005d3b16:; BB(0x005d3b16);
    /* 005d3b16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d3b1a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005d3b20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b22: je 0x5d3b32 */ if (fZ) goto L_005d3b32;
L_005d3b24:; BB(0x005d3b24);
    /* 005d3b24: fld dword ptr [0x92c47c] */ FPUSH(R_F32((u32)(0x92c47cu)));
    /* 005d3b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b2d: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b32:; BB(0x005d3b32);
    /* 005d3b32: test al, 0x1e */ {  u32 a = (u8)r_eax; u32 b = 0x1eu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3b34: je 0x5d3b44 */ if (fZ) goto L_005d3b44;
L_005d3b36:; BB(0x005d3b36);
    /* 005d3b36: fld dword ptr [0x92c490] */ FPUSH(R_F32((u32)(0x92c490u)));
    /* 005d3b3c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b3f: jmp 0x5d3a70 */ goto L_005d3a70;
L_005d3b44:; BB(0x005d3b44);
    /* 005d3b44: fld dword ptr [0x92c474] */ FPUSH(R_F32((u32)(0x92c474u)));
    /* 005d3b4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b4d: jmp 0x5d3a70 */ goto L_005d3a70;
}

void f_005d3ac0(void)
{
    FN_ENTER(0x005d3ac0);
    /* 005d3ac0: mov dh, 0x97 */ r_edx = (r_edx & 0xffff00ffu) | (((0x97u) & 0xffu) << 8);
    /* 005d3ac2: hlt  */ UNSUP(0x005d3ac2, "hlt");
}

void f_005d3b54(void) /* sub_5D3B54 */
{
    FN_ENTER(0x005d3b54);
    /* 005d3b54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b58: mov esi, ecx */ r_esi = r_ecx;
    /* 005d3b5a: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 005d3b5e: fld dword ptr [0x92c470] */ FPUSH(R_F32((u32)(0x92c470u)));
    /* 005d3b64: movzx eax, byte ptr [esi + 1] */ r_eax = (u32)R8((u32)(r_esi+0x1u));
    /* 005d3b68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3b6b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3b6e: je 0x5d3e27 */ if (fZ) goto L_005d3e27;
L_005d3b74:; BB(0x005d3b74);
    /* 005d3b74: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3b77: je 0x5d3dbb */ if (fZ) goto L_005d3dbb;
L_005d3b7d:; BB(0x005d3b7d);
    /* 005d3b7d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3b80: je 0x5d3d4f */ if (fZ) goto L_005d3d4f;
L_005d3b86:; BB(0x005d3b86);
    /* 005d3b86: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3b89: je 0x5d3d1a */ if (fZ) goto L_005d3d1a;
L_005d3b8f:; BB(0x005d3b8f);
    /* 005d3b8f: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3b92: je 0x5d3cd2 */ if (fZ) goto L_005d3cd2;
L_005d3b98:; BB(0x005d3b98);
    /* 005d3b98: cmp eax, 0x39 */ {  u32 a = r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3b9b: je 0x5d3cd2 */ if (fZ) goto L_005d3cd2;
L_005d3ba1:; BB(0x005d3ba1);
    /* 005d3ba1: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ba4: je 0x5d3cd2 */ if (fZ) goto L_005d3cd2;
L_005d3baa:; BB(0x005d3baa);
    /* 005d3baa: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3bad: je 0x5d3c12 */ if (fZ) goto L_005d3c12;
L_005d3baf:; BB(0x005d3baf);
    /* 005d3baf: cmp eax, 0x99 */ {  u32 a = r_eax; u32 b = 0x99u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3bb4: jne 0x5d3be0 */ if (!fZ) goto L_005d3be0;
L_005d3bb6:; BB(0x005d3bb6);
    /* 005d3bb6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3bb8: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3bbe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3bc0: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3bc5u); f_0069792c();
    /* 005d3bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3bc7: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3bc9:; BB(0x005d3bc9);
    /* 005d3bc9: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3bd0: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3bd3: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3bd5:; BB(0x005d3bd5);
    /* 005d3bd5: fld dword ptr [0x92c46c] */ FPUSH(R_F32((u32)(0x92c46cu)));
    /* 005d3bdb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3bde: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3be0:; BB(0x005d3be0);
    /* 005d3be0: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3be3: jne 0x5d3c0a */ if (!fZ) goto L_005d3c0a;
L_005d3be5:; BB(0x005d3be5);
    /* 005d3be5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3be7: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3bed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3bef: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3bf4u); f_0069792c();
    /* 005d3bf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3bf6: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3bf8:; BB(0x005d3bf8);
    /* 005d3bf8: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3bff: cmp eax, 0x56 */ {  u32 a = r_eax; u32 b = 0x56u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3c02: je 0x5d3c96 */ if (fZ) goto L_005d3c96;
L_005d3c08:; BB(0x005d3c08);
    /* 005d3c08: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3c0a:; BB(0x005d3c0a);
    /* 005d3c0a: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3c10: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3c12:; BB(0x005d3c12);
    /* 005d3c12: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c14: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3c1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3c1c: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3c21u); f_0069792c();
    /* 005d3c21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3c23: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3c25:; BB(0x005d3c25);
    /* 005d3c25: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3c2c: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3c2f: je 0x5d3cae */ if (fZ) goto L_005d3cae;
L_005d3c31:; BB(0x005d3c31);
    /* 005d3c31: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3c35: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3c3au); f_0069792c();
    /* 005d3c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3c3c: je 0x5d3c8c */ if (fZ) goto L_005d3c8c;
L_005d3c3e:; BB(0x005d3c3e);
    /* 005d3c3e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3c45: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3c48: jne 0x5d3c8c */ if (!fZ) goto L_005d3c8c;
L_005d3c4a:; BB(0x005d3c4a);
    /* 005d3c4a: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005d3c4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c4f: call 0x5e27a8 */ r_esp -= 4; W32(r_esp, 0x5d3c54u); f_005e27a8();
    /* 005d3c54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3c55: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3c58: je 0x5d3c80 */ if (fZ) goto L_005d3c80;
L_005d3c5a:; BB(0x005d3c5a);
    /* 005d3c5a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3c5d: jne 0x5d3c6d */ if (!fZ) goto L_005d3c6d;
L_005d3c5f:; BB(0x005d3c5f);
    /* 005d3c5f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3c62: fmul dword ptr [0x92c450] */ ST(0) = ST(0) * R_F32((u32)(0x92c450u));
    /* 005d3c68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3c6b: jmp 0x5d3c8c */ goto L_005d3c8c;
L_005d3c6d:; BB(0x005d3c6d);
    /* 005d3c6d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3c70: jne 0x5d3c8c */ if (!fZ) goto L_005d3c8c;
L_005d3c72:; BB(0x005d3c72);
    /* 005d3c72: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3c75: fmul dword ptr [0x92c454] */ ST(0) = ST(0) * R_F32((u32)(0x92c454u));
    /* 005d3c7b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3c7e: jmp 0x5d3c8c */ goto L_005d3c8c;
L_005d3c80:; BB(0x005d3c80);
    /* 005d3c80: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3c83: fmul dword ptr [0x92c44c] */ ST(0) = ST(0) * R_F32((u32)(0x92c44cu));
    /* 005d3c89: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_005d3c8c:; BB(0x005d3c8c);
    /* 005d3c8c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3c8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3c90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3c91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3c92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d3c93: ret 4 */ FN_RET(0x005d3b54); r_esp += 8; return;
L_005d3c96:; BB(0x005d3c96);
    /* 005d3c96: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005d3c9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d3c9c: jl 0x5d3c31 */ if ((fS!=fO)) goto L_005d3c31;
L_005d3c9e:; BB(0x005d3c9e);
    /* 005d3c9e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3ca1: jg 0x5d3c31 */ if ((!fZ&&fS==fO)) goto L_005d3c31;
L_005d3ca3:; BB(0x005d3ca3);
    /* 005d3ca3: fld dword ptr [0x92c46c] */ FPUSH(R_F32((u32)(0x92c46cu)));
    /* 005d3ca9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3cac: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3cae:; BB(0x005d3cae);
    /* 005d3cae: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005d3cb2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3cb5: jl 0x5d3c31 */ if ((fS!=fO)) goto L_005d3c31;
L_005d3cbb:; BB(0x005d3cbb);
    /* 005d3cbb: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3cbe: jg 0x5d3c31 */ if ((!fZ&&fS==fO)) goto L_005d3c31;
L_005d3cc4:; BB(0x005d3cc4);
    /* 005d3cc4: fld dword ptr [0x92c468] */ FPUSH(R_F32((u32)(0x92c468u)));
    /* 005d3cca: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3ccd: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3cd2:; BB(0x005d3cd2);
    /* 005d3cd2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3cd4: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3cda: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3cdc: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3ce1u); f_0069792c();
    /* 005d3ce1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ce3: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3ce9:; BB(0x005d3ce9);
    /* 005d3ce9: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3cf0: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3cf3: jne 0x5d3d03 */ if (!fZ) goto L_005d3d03;
L_005d3cf5:; BB(0x005d3cf5);
    /* 005d3cf5: fld dword ptr [0x92c46c] */ FPUSH(R_F32((u32)(0x92c46cu)));
    /* 005d3cfb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3cfe: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3d03:; BB(0x005d3d03);
    /* 005d3d03: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d06: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3d0c:; BB(0x005d3d0c);
    /* 005d3d0c: fld dword ptr [0x92c468] */ FPUSH(R_F32((u32)(0x92c468u)));
    /* 005d3d12: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3d15: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3d1a:; BB(0x005d3d1a);
    /* 005d3d1a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d1c: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3d22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3d24: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3d29u); f_0069792c();
    /* 005d3d29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d2b: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3d31:; BB(0x005d3d31);
    /* 005d3d31: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3d38: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d3b: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3d41:; BB(0x005d3d41);
    /* 005d3d41: fld dword ptr [0x92c464] */ FPUSH(R_F32((u32)(0x92c464u)));
    /* 005d3d47: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3d4a: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3d4f:; BB(0x005d3d4f);
    /* 005d3d4f: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005d3d53: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d56: je 0x5d3d63 */ if (fZ) goto L_005d3d63;
L_005d3d58:; BB(0x005d3d58);
    /* 005d3d58: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3d5e: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3d63:; BB(0x005d3d63);
    /* 005d3d63: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d65: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3d6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3d6d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3d72u); f_0069792c();
    /* 005d3d72: mov esi, eax */ r_esi = r_eax;
    /* 005d3d74: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d76: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3d78: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3d7du); f_0069792c();
    /* 005d3d7d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d7f: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3d85:; BB(0x005d3d85);
    /* 005d3d85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d87: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3d8d:; BB(0x005d3d8d);
    /* 005d3d8d: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005d3d94: cmp edx, 0x25 */ {  u32 a = r_edx; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d97: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3d9d:; BB(0x005d3d9d);
    /* 005d3d9d: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3da4: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3da7: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3dad:; BB(0x005d3dad);
    /* 005d3dad: fld dword ptr [0x92c468] */ FPUSH(R_F32((u32)(0x92c468u)));
    /* 005d3db3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3db6: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3dbb:; BB(0x005d3dbb);
    /* 005d3dbb: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005d3dbf: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3dc2: je 0x5d3dcf */ if (fZ) goto L_005d3dcf;
L_005d3dc4:; BB(0x005d3dc4);
    /* 005d3dc4: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3dca: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3dcf:; BB(0x005d3dcf);
    /* 005d3dcf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3dd1: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3dd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3dd9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3ddeu); f_0069792c();
    /* 005d3dde: mov esi, eax */ r_esi = r_eax;
    /* 005d3de0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3de2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3de4: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3de9u); f_0069792c();
    /* 005d3de9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3deb: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3df1:; BB(0x005d3df1);
    /* 005d3df1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3df3: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3df9:; BB(0x005d3df9);
    /* 005d3df9: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005d3e00: cmp edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e03: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3e09:; BB(0x005d3e09);
    /* 005d3e09: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3e10: cmp eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e13: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3e19:; BB(0x005d3e19);
    /* 005d3e19: fld dword ptr [0x92c468] */ FPUSH(R_F32((u32)(0x92c468u)));
    /* 005d3e1f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3e22: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3e27:; BB(0x005d3e27);
    /* 005d3e27: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005d3e2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e2e: jne 0x5d3e6f */ if (!fZ) goto L_005d3e6f;
L_005d3e30:; BB(0x005d3e30);
    /* 005d3e30: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e32: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3e38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3e3a: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3e3fu); f_0069792c();
    /* 005d3e3f: mov esi, eax */ r_esi = r_eax;
    /* 005d3e41: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3e45: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3e4au); f_0069792c();
    /* 005d3e4a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e4c: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3e52:; BB(0x005d3e52);
    /* 005d3e52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e54: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3e5a:; BB(0x005d3e5a);
    /* 005d3e5a: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005d3e61: cmp edx, 0x26 */ {  u32 a = r_edx; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e64: je 0x5d3f51 */ if (fZ) goto L_005d3f51;
L_005d3e6a:; BB(0x005d3e6a);
    /* 005d3e6a: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3e6f:; BB(0x005d3e6f);
    /* 005d3e6f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e72: jne 0x5d3f46 */ if (!fZ) goto L_005d3f46;
L_005d3e78:; BB(0x005d3e78);
    /* 005d3e78: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5d3e7du); f_0077bab4();
    /* 005d3e7d: cmp eax, 0x7d */ {  u32 a = r_eax; u32 b = 0x7du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3e80: jge 0x5d3e96 */ if ((fS==fO)) goto L_005d3e96;
L_005d3e82:; BB(0x005d3e82);
    /* 005d3e82: fld dword ptr [0x92c458] */ FPUSH(R_F32((u32)(0x92c458u)));
    /* 005d3e88: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3e8b: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3e91: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3e96:; BB(0x005d3e96);
    /* 005d3e96: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3e9b: jge 0x5d3eb1 */ if ((fS==fO)) goto L_005d3eb1;
L_005d3e9d:; BB(0x005d3e9d);
    /* 005d3e9d: fld dword ptr [0x92c460] */ FPUSH(R_F32((u32)(0x92c460u)));
    /* 005d3ea3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3ea6: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3eac: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3eb1:; BB(0x005d3eb1);
    /* 005d3eb1: cmp eax, 0x177 */ {  u32 a = r_eax; u32 b = 0x177u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3eb6: jge 0x5d3ecc */ if ((fS==fO)) goto L_005d3ecc;
L_005d3eb8:; BB(0x005d3eb8);
    /* 005d3eb8: fld dword ptr [0x92c470] */ FPUSH(R_F32((u32)(0x92c470u)));
    /* 005d3ebe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3ec1: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3ec7: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3ecc:; BB(0x005d3ecc);
    /* 005d3ecc: cmp eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3ed1: jge 0x5d3ee7 */ if ((fS==fO)) goto L_005d3ee7;
L_005d3ed3:; BB(0x005d3ed3);
    /* 005d3ed3: fld dword ptr [0x92c464] */ FPUSH(R_F32((u32)(0x92c464u)));
    /* 005d3ed9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3edc: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3ee2: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3ee7:; BB(0x005d3ee7);
    /* 005d3ee7: cmp eax, 0x271 */ {  u32 a = r_eax; u32 b = 0x271u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3eec: jge 0x5d3f02 */ if ((fS==fO)) goto L_005d3f02;
L_005d3eee:; BB(0x005d3eee);
    /* 005d3eee: fld dword ptr [0x92c45c] */ FPUSH(R_F32((u32)(0x92c45cu)));
    /* 005d3ef4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3ef7: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3efd: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3f02:; BB(0x005d3f02);
    /* 005d3f02: cmp eax, 0x2ee */ {  u32 a = r_eax; u32 b = 0x2eeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3f07: jge 0x5d3f1d */ if ((fS==fO)) goto L_005d3f1d;
L_005d3f09:; BB(0x005d3f09);
    /* 005d3f09: fld dword ptr [0x92c464] */ FPUSH(R_F32((u32)(0x92c464u)));
    /* 005d3f0f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3f12: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3f18: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3f1d:; BB(0x005d3f1d);
    /* 005d3f1d: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3f23: cmp eax, 0x36b */ {  u32 a = r_eax; u32 b = 0x36bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3f28: jge 0x5d3f38 */ if ((fS==fO)) goto L_005d3f38;
L_005d3f2a:; BB(0x005d3f2a);
    /* 005d3f2a: fld dword ptr [0x92c470] */ FPUSH(R_F32((u32)(0x92c470u)));
    /* 005d3f30: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3f33: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3f38:; BB(0x005d3f38);
    /* 005d3f38: fld dword ptr [0x92c460] */ FPUSH(R_F32((u32)(0x92c460u)));
    /* 005d3f3e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3f41: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3f46:; BB(0x005d3f46);
    /* 005d3f46: lea ebx, [ebp + 0xdf8] */ r_ebx = (u32)(r_ebp+0xdf8u);
    /* 005d3f4c: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3f51:; BB(0x005d3f51);
    /* 005d3f51: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3f58: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3f5b: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3f61:; BB(0x005d3f61);
    /* 005d3f61: fld dword ptr [0x92c468] */ FPUSH(R_F32((u32)(0x92c468u)));
    /* 005d3f67: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3f6a: jmp 0x5d3c31 */ goto L_005d3c31;
}

void f_005d3cd9(void)
{
    FN_ENTER(0x005d3cd9);
    goto L_005d3cd9;
L_005d3c31:; BB(0x005d3c31);
    /* 005d3c31: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3c35: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d3c3au); f_0069792c();
    /* 005d3c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d3c3c: je 0x5d3c8c */ if (fZ) goto L_005d3c8c;
L_005d3c3e:; BB(0x005d3c3e);
    /* 005d3c3e: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3c45: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3c48: jne 0x5d3c8c */ if (!fZ) goto L_005d3c8c;
L_005d3c4a:; BB(0x005d3c4a);
    /* 005d3c4a: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005d3c4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c4f: call 0x5e27a8 */ r_esp -= 4; W32(r_esp, 0x5d3c54u); f_005e27a8();
    /* 005d3c54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3c55: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3c58: je 0x5d3c80 */ if (fZ) goto L_005d3c80;
L_005d3c5a:; BB(0x005d3c5a);
    /* 005d3c5a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3c5d: jne 0x5d3c6d */ if (!fZ) goto L_005d3c6d;
L_005d3c5f:; BB(0x005d3c5f);
    /* 005d3c5f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3c62: fmul dword ptr [0x92c450] */ ST(0) = ST(0) * R_F32((u32)(0x92c450u));
    /* 005d3c68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3c6b: jmp 0x5d3c8c */ goto L_005d3c8c;
L_005d3c6d:; BB(0x005d3c6d);
    /* 005d3c6d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d3c70: jne 0x5d3c8c */ if (!fZ) goto L_005d3c8c;
L_005d3c72:; BB(0x005d3c72);
    /* 005d3c72: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3c75: fmul dword ptr [0x92c454] */ ST(0) = ST(0) * R_F32((u32)(0x92c454u));
    /* 005d3c7b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3c7e: jmp 0x5d3c8c */ goto L_005d3c8c;
L_005d3c80:; BB(0x005d3c80);
    /* 005d3c80: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3c83: fmul dword ptr [0x92c44c] */ ST(0) = ST(0) * R_F32((u32)(0x92c44cu));
    /* 005d3c89: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_005d3c8c:; BB(0x005d3c8c);
    /* 005d3c8c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005d3c8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3c90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d3c91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3c92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d3c93: ret 4 */ FN_RET(0x005d3cd9); r_esp += 8; return;
L_005d3cd9:; BB(0x005d3cd9);
    /* 005d3cd9: add byte ptr [ebx + 0x3c4be8cb], cl */ { u32 ad = (u32)(r_ebx+0x3c4be8cbu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005d3cdf: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d3ce1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ce3: je 0x5d3c31 */ if (fZ) goto L_005d3c31;
L_005d3ce9:; BB(0x005d3ce9);
    /* 005d3ce9: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 005d3cf0: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3cf3: jne 0x5d3d03 */ if (!fZ) goto L_005d3d03;
L_005d3cf5:; BB(0x005d3cf5);
    /* 005d3cf5: fld dword ptr [0x92c46c] */ FPUSH(R_F32((u32)(0x92c46cu)));
    /* 005d3cfb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3cfe: jmp 0x5d3c31 */ goto L_005d3c31;
L_005d3d03:; BB(0x005d3d03);
    /* 005d3d03: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3d06: jne 0x5d3c31 */ if (!fZ) goto L_005d3c31;
L_005d3d0c:; BB(0x005d3d0c);
    /* 005d3d0c: fld dword ptr [0x92c468] */ FPUSH(R_F32((u32)(0x92c468u)));
    /* 005d3d12: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d3d15: jmp 0x5d3c31 */ goto L_005d3c31;
}

void f_005d3f70(void) /* sub_5D3F70 */
{
    FN_ENTER(0x005d3f70);
    /* 005d3f70: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3f73: fld dword ptr [0x92c448] */ FPUSH(R_F32((u32)(0x92c448u)));
    /* 005d3f79: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d3f7d: cmp eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3f82: jne 0x5d3f9d */ if (!fZ) goto L_005d3f9d;
L_005d3f84:; BB(0x005d3f84);
    /* 005d3f84: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d3f86: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5d3f8bu); f_0077bab4();
    /* 005d3f8b: mov edx, eax */ r_edx = r_eax;
    /* 005d3f8d: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d3f8f: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005d3f92: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d3f94: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d3f97: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d3f9a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
L_005d3f9d:; BB(0x005d3f9d);
    /* 005d3f9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d3fa0: ret 4 */ FN_RET(0x005d3f70); r_esp += 8; return;
}

void f_005d3fa4(void) /* sub_5D3FA4 */
{
    FN_ENTER(0x005d3fa4);
    /* 005d3fa4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3fa5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3fa6: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3fa9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d3fab: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 005d3faf: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005d3fb2: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x5d3fb7u); f_005dc1e0();
    /* 005d3fb7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005d3fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3fbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d3fbd: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x5d3fc2u); f_005d4108();
    /* 005d3fc2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3fc4: je 0x5d40fe */ if (fZ) goto L_005d40fe;
L_005d3fca:; BB(0x005d3fca);
    /* 005d3fca: movsx ecx, word ptr [esp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 005d3fcf: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d3fd4: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d3fd6: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d3fd9: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d3fdc: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d3fde: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 005d3fe1: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 005d3fe5: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 005d3fe9: fmul dword ptr [0x92c158] */ ST(0) = ST(0) * R_F32((u32)(0x92c158u));
    /* 005d3fef: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005d3ff3: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005d3ff8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d3ffd: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d4001: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005d4005: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d4009: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005d400d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005d4011: add word ptr [edi], ax */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4014: movsx ecx, word ptr [esp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 005d4019: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d401e: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d4020: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d4023: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d4026: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d4028: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d402b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005d402e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4030: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4032: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4034: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005d4038: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 005d403c: fmul dword ptr [0x92c15c] */ ST(0) = ST(0) * R_F32((u32)(0x92c15cu));
    /* 005d4042: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005d4046: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005d404b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d4050: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d4054: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005d4058: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d405c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005d4060: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005d4064: add word ptr [edi + 0xa], ax */ { u32 ad = (u32)(r_edi+0xau);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d4068: movsx ecx, word ptr [esp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 005d406d: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d4072: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d4074: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d4077: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d407a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d407c: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d407f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005d4083: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 005d4087: fmul dword ptr [0x92c160] */ ST(0) = ST(0) * R_F32((u32)(0x92c160u));
    /* 005d408d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005d4091: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005d4096: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d409b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d409f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005d40a3: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d40a7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005d40ab: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005d40af: add word ptr [edi + 8], ax */ { u32 ad = (u32)(r_edi+0x8u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d40b3: movsx ecx, word ptr [esp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 005d40b8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005d40bd: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d40bf: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005d40c2: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d40c5: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d40c7: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005d40ca: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005d40ce: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 005d40d2: fmul dword ptr [0x92c164] */ ST(0) = ST(0) * R_F32((u32)(0x92c164u));
    /* 005d40d8: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005d40dc: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005d40e1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d40e6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005d40ea: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005d40ee: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005d40f2: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005d40f6: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005d40fa: add word ptr [edi + 2], ax */ { u32 ad = (u32)(r_edi+0x2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_005d40fe:; BB(0x005d40fe);
    /* 005d40fe: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d4101: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d4102: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d4103: ret 0x14 */ FN_RET(0x005d3fa4); r_esp += 24; return;
}

