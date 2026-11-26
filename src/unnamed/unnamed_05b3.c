#include "protos.h"

void f_005b302c(void) /* sub_5B302C */
{
    FN_ENTER(0x005b302c);
    /* 005b302c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b302d: mov esi, ecx */ r_esi = r_ecx;
    /* 005b302f: mov ecx, esi */ r_ecx = r_esi;
    /* 005b3031: call 0x5b2fdc */ r_esp -= 4; W32(r_esp, 0x5b3036u); f_005b2fdc();
    /* 005b3036: fcom dword ptr [0x92ae38] */ fx_compare(ST(0), R_F32((u32)(0x92ae38u))); 
    /* 005b303c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b303e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b303f: je 0x5b305c */ if (fZ) goto L_005b305c;
L_005b3041:; BB(0x005b3041);
    /* 005b3041: fld dword ptr [esi + 0x418] */ FPUSH(R_F32((u32)(r_esi+0x418u)));
    /* 005b3047: fsub dword ptr [0x92ae34] */ ST(0) = ST(0) - R_F32((u32)(0x92ae34u));
    /* 005b304d: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005b304f: fstp dword ptr [esi + 0x408] */ W_F32((u32)(r_esi+0x408u), ST(0)); FPOP();
    /* 005b3055: mov eax, 1 */ r_eax = 0x1u;
    /* 005b305a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b305b: ret  */ FN_RET(0x005b302c); r_esp += 4; return;
L_005b305c:; BB(0x005b305c);
    /* 005b305c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b305e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3060: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3061: ret  */ FN_RET(0x005b302c); r_esp += 4; return;
}

void f_005b3064(void) /* sub_5B3064 */
{
    FN_ENTER(0x005b3064);
    /* 005b3064: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3065: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b3067: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b3069: call 0x5b30c8 */ r_esp -= 4; W32(r_esp, 0x5b306eu); f_005b30c8();
    /* 005b306e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3070: je 0x5b3087 */ if (fZ) goto L_005b3087;
L_005b3072:; BB(0x005b3072);
    /* 005b3072: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b3076: add dword ptr [ebp + 0x384], 1 */ { u32 ad = (u32)(r_ebp+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b307d: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 005b3083: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3084: ret 4 */ FN_RET(0x005b3064); r_esp += 8; return;
L_005b3087:; BB(0x005b3087);
    /* 005b3087: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 005b308d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b3090: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 005b3096: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3098: jl 0x5b309e */ if ((fS!=fO)) goto L_005b309e;
L_005b309a:; BB(0x005b309a);
    /* 005b309a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b309b: ret 4 */ FN_RET(0x005b3064); r_esp += 8; return;
L_005b309e:; BB(0x005b309e);
    /* 005b309e: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 005b30a4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b30a6: jne 0x5b309a */ if (!fZ) goto L_005b309a;
L_005b30a8:; BB(0x005b30a8);
    /* 005b30a8: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005b30af: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b30b2: je 0x5b309a */ if (fZ) goto L_005b309a;
L_005b30b4:; BB(0x005b30b4);
    /* 005b30b4: mov dword ptr [ebp + 0x37c], 0xc */ W32((u32)(r_ebp+0x37cu), 0xcu);
    /* 005b30be: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 005b30c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b30c5: ret 4 */ FN_RET(0x005b3064); r_esp += 8; return;
}

void f_005b30c8(void) /* sub_5B30C8 */
{
    FN_ENTER(0x005b30c8);
    /* 005b30c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b30c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b30ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b30cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b30cc: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b30cf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b30d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b30d3: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b30d8u); f_00770738();
    /* 005b30d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b30da: je 0x5b321c */ if (fZ) goto L_005b321c;
L_005b30e0:; BB(0x005b30e0);
    /* 005b30e0: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 005b30e6: mov ebp, dword ptr [ebx + 0x304] */ r_ebp = R32((u32)(r_ebx+0x304u));
    /* 005b30ec: mov esi, dword ptr [ebx + 0x308] */ r_esi = R32((u32)(r_ebx+0x308u));
    /* 005b30f2: mov edi, dword ptr [eax + 0x300] */ r_edi = R32((u32)(r_eax+0x300u));
    /* 005b30f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b30fa: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005b30fe: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 005b3104: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 005b310a: mov dword ptr [ebx + 0x2a4], edi */ W32((u32)(r_ebx+0x2a4u), r_edi);
    /* 005b3110: mov dword ptr [ebx + 0x2a8], edx */ W32((u32)(r_ebx+0x2a8u), r_edx);
    /* 005b3116: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 005b311a: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 005b311e: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 005b3122: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005b3126: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 005b312a: push dword ptr [ebx + 0x3a0] */ { u32 v = R32((u32)(r_ebx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3130: mov dword ptr [ebx + 0x2ac], eax */ W32((u32)(r_ebx+0x2acu), r_eax);
    /* 005b3136: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5b313bu); f_00772358();
    /* 005b313b: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 005b313f: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 005b3143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b3145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3146: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3147: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5b314cu); f_0077fffc();
    /* 005b314c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b314f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3151: je 0x5b3226 */ if (fZ) goto L_005b3226;
L_005b3157:; BB(0x005b3157);
    /* 005b3157: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005b315b: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 005b315f: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 005b3163: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005b3167: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 005b316b: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 005b316f: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 005b3173: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 005b3177: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b317cu); f_0082f9c4();
    /* 005b317c: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 005b3184: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 005b3188: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5b318du); f_0082df08();
    /* 005b318d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b318f: fld dword ptr [0x92ae2c] */ FPUSH(R_F32((u32)(0x92ae2cu)));
    /* 005b3195: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 005b3199: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005b319d: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005b31a1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005b31a3: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 005b31a7: fchs  */ ST(0) = -ST(0);
    /* 005b31a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b31ab: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005b31af: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005b31b3: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 005b31b7: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 005b31bb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b31c0u); f_0082ebac();
    /* 005b31c0: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 005b31c4: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005b31c8: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005b31cc: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b31d0: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 005b31d4: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 005b31d8: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 005b31dc: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 005b31e0: mov dword ptr [ebx + 0x2a4], ebp */ W32((u32)(r_ebx+0x2a4u), r_ebp);
    /* 005b31e6: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 005b31ea: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 005b31ee: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005b31f2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005b31f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b31f7: mov dword ptr [ebx + 0x2a8], edx */ W32((u32)(r_ebx+0x2a8u), r_edx);
    /* 005b31fd: mov dword ptr [ebx + 0x2ac], eax */ W32((u32)(r_ebx+0x2acu), r_eax);
    /* 005b3203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3204: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3205: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3206: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3207: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3208: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b320a: push dword ptr [ebx + 0x394] */ { u32 v = R32((u32)(r_ebx+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3210: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x5b3215u); f_00771f5c();
    /* 005b3215: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b3217: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3219: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5b321cu); call_ind(t); }
L_005b321c:; BB(0x005b321c);
    /* 005b321c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b321e: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3221: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3222: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3223: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3224: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3225: ret  */ FN_RET(0x005b30c8); r_esp += 4; return;
L_005b3226:; BB(0x005b3226);
    /* 005b3226: mov eax, 1 */ r_eax = 0x1u;
    /* 005b322b: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b322e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b322f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3230: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3231: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3232: ret  */ FN_RET(0x005b30c8); r_esp += 4; return;
}

void f_005b3234(void) /* sub_5B3234 */
{
    FN_ENTER(0x005b3234);
    /* 005b3234: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3235: mov esi, ecx */ r_esi = r_ecx;
    /* 005b3237: mov ecx, esi */ r_ecx = r_esi;
    /* 005b3239: call 0x5b2ccc */ r_esp -= 4; W32(r_esp, 0x5b323eu); f_005b2ccc();
    /* 005b323e: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 005b3244: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3246: je 0x5b3363 */ if (fZ) goto L_005b3363;
L_005b324c:; BB(0x005b324c);
    /* 005b324c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b324f: je 0x5b3354 */ if (fZ) goto L_005b3354;
L_005b3255:; BB(0x005b3255);
    /* 005b3255: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3258: je 0x5b32c0 */ if (fZ) goto L_005b32c0;
L_005b325a:; BB(0x005b325a);
    /* 005b325a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b325d: je 0x5b3288 */ if (fZ) goto L_005b3288;
L_005b325f:; BB(0x005b325f);
    /* 005b325f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3262: jne 0x5b3277 */ if (!fZ) goto L_005b3277;
L_005b3264:; BB(0x005b3264);
    /* 005b3264: mov ecx, esi */ r_ecx = r_esi;
    /* 005b3266: call 0x5b2f5c */ r_esp -= 4; W32(r_esp, 0x5b326bu); f_005b2f5c();
    /* 005b326b: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 005b3275: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3276: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
L_005b3277:; BB(0x005b3277);
    /* 005b3277: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b327a: jne 0x5b32a1 */ if (!fZ) goto L_005b32a1;
L_005b327c:; BB(0x005b327c);
    /* 005b327c: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 005b3286: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3287: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
L_005b3288:; BB(0x005b3288);
    /* 005b3288: mov eax, dword ptr [esi + 0x3e4] */ r_eax = R32((u32)(r_esi+0x3e4u));
    /* 005b328e: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 005b3294: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3297: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3299: jl 0x5b32a3 */ if ((fS!=fO)) goto L_005b32a3;
L_005b329b:; BB(0x005b329b);
    /* 005b329b: mov dword ptr [esi + 0x38c], ecx */ W32((u32)(r_esi+0x38cu), r_ecx);
L_005b32a1:; BB(0x005b32a1);
    /* 005b32a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b32a2: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
L_005b32a3:; BB(0x005b32a3);
    /* 005b32a3: mov ecx, 6 */ r_ecx = 0x6u;
    /* 005b32a8: mov word ptr [esi + 0xb8], cx */ W16((u32)(r_esi+0xb8u), (u16)r_ecx);
    /* 005b32af: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 005b32b5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b32b8: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 005b32be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b32bf: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
L_005b32c0:; BB(0x005b32c0);
    /* 005b32c0: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 005b32c6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b32c9: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 005b32cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b32d1: jl 0x5b32f0 */ if ((fS!=fO)) goto L_005b32f0;
L_005b32d3:; BB(0x005b32d3);
    /* 005b32d3: mov ecx, esi */ r_ecx = r_esi;
    /* 005b32d5: call 0x5b34bc */ r_esp -= 4; W32(r_esp, 0x5b32dau); f_005b34bc();
    /* 005b32da: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b32df: add esi, 0x42c */ {  u32 a = r_esi; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b32e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b32e6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b32ebu); f_0050b510();
    /* 005b32eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b32ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b32ef: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
L_005b32f0:; BB(0x005b32f0);
    /* 005b32f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005b32f2: call 0x5b3370 */ r_esp -= 4; W32(r_esp, 0x5b32f7u); f_005b3370();
    /* 005b32f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b32f9: jne 0x5b332d */ if (!fZ) goto L_005b332d;
L_005b32fb:; BB(0x005b32fb);
    /* 005b32fb: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 005b3301: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3303: jne 0x5b3321 */ if (!fZ) goto L_005b3321;
L_005b3305:; BB(0x005b3305);
    /* 005b3305: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005b330c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b330f: je 0x5b3321 */ if (fZ) goto L_005b3321;
L_005b3311:; BB(0x005b3311);
    /* 005b3311: mov dword ptr [esi + 0x37c], 0xc */ W32((u32)(r_esi+0x37cu), 0xcu);
    /* 005b331b: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
L_005b3321:; BB(0x005b3321);
    /* 005b3321: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 005b332b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b332c: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
L_005b332d:; BB(0x005b332d);
    /* 005b332d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b3332u); f_00807ac0();
    /* 005b3332: mov ecx, eax */ r_ecx = r_eax;
    /* 005b3334: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005b3337: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b3339: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b333a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b333b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b333c: push dword ptr [ecx*4 + 0x9c17c8] */ { u32 v = R32((u32)(r_ecx*4+0x9c17c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3343: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b3348u); f_00814298();
    /* 005b3348: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b334b: add dword ptr [esi + 0x384], 1 */ { u32 ad = (u32)(r_esi+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3352: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3353: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
L_005b3354:; BB(0x005b3354);
    /* 005b3354: push dword ptr [esi + 0x3e0] */ { u32 v = R32((u32)(r_esi+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b335a: mov ecx, esi */ r_ecx = r_esi;
    /* 005b335c: call 0x5b3064 */ r_esp -= 4; W32(r_esp, 0x5b3361u); f_005b3064();
    /* 005b3361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3362: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
L_005b3363:; BB(0x005b3363);
    /* 005b3363: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3365: mov ecx, esi */ r_ecx = r_esi;
    /* 005b3367: call 0x5b50c8 */ r_esp -= 4; W32(r_esp, 0x5b336cu); f_005b50c8();
    /* 005b336c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b336d: ret  */ FN_RET(0x005b3234); r_esp += 4; return;
}

void f_005b3370(void) /* sub_5B3370 */
{
    FN_ENTER(0x005b3370);
    /* 005b3370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3371: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b3375: push 0x8d9060 */ { u32 v = 0x8d9060u; r_esp -= 4; W32(r_esp, v); }
    /* 005b337a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b3380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3381: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b3388: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b338b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b338e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005b3391: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005b3394: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005b3397: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b339a: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b339fu); f_00770738();
    /* 005b339f: mov edi, eax */ r_edi = r_eax;
    /* 005b33a1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b33a3: je 0x5b349b */ if (fZ) goto L_005b349b;
L_005b33a9:; BB(0x005b33a9);
    /* 005b33a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b33ac: call 0x5b34bc */ r_esp -= 4; W32(r_esp, 0x5b33b1u); f_005b34bc();
    /* 005b33b1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b33b4: fld dword ptr [0x92ae28] */ FPUSH(R_F32((u32)(0x92ae28u)));
    /* 005b33ba: fld dword ptr [0x92ae24] */ FPUSH(R_F32((u32)(0x92ae24u)));
    /* 005b33c0: mov ebx, dword ptr [edi + 0x300] */ r_ebx = R32((u32)(r_edi+0x300u));
    /* 005b33c6: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 005b33cc: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 005b33d2: mov edi, dword ptr [edx + 0x42c] */ r_edi = R32((u32)(r_edx+0x42cu));
    /* 005b33d8: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 005b33de: mov edx, dword ptr [edx + 0x434] */ r_edx = R32((u32)(r_edx+0x434u));
    /* 005b33e4: mov dword ptr [ebp - 0x4c], ebx */ W32((u32)(r_ebp+0xffffffb4u), r_ebx);
    /* 005b33e7: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 005b33ea: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005b33ed: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 005b33f0: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 005b33f3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005b33f5: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 005b33f8: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005b33fb: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 005b33fe: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005b3400: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 005b3403: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005b3406: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 005b3409: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005b340b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b340d: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 005b3410: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 005b3413: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 005b3416: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005b3418: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 005b341b: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 005b341e: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 005b3421: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005b3423: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 005b3426: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b3429: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 005b342c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b342e: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 005b3431: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 005b3434: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 005b3437: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b343cu); f_0082ebac();
    /* 005b343c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005b3443: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3448: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5b344du); f_005caba4();
    /* 005b344d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b344e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b3451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3453: je 0x5b347f */ if (fZ) goto L_005b347f;
L_005b3455:; BB(0x005b3455);
    /* 005b3455: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005b345c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b3463: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b3466: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 005b3469: lea ebx, [ebp - 0x4c] */ r_ebx = (u32)(r_ebp+0xffffffb4u);
    /* 005b346c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b346d: mov ecx, eax */ r_ecx = r_eax;
    /* 005b346f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3471: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3472: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3473: call 0x57ff44 */ r_esp -= 4; W32(r_esp, 0x5b3478u); f_0057ff44();
    /* 005b3478: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005b347f:; BB(0x005b347f);
    /* 005b347f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b3482: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b3485: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b3488: mov eax, 1 */ r_eax = 0x1u;
    /* 005b348d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3490: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b3497: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b349a: ret  */ FN_RET(0x005b3370); r_esp += 4; return;
L_005b349b:; BB(0x005b349b);
    /* 005b349b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b349e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b34a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b34a3: mov dword ptr [edx + 0x38c], 0 */ W32((u32)(r_edx+0x38cu), 0x0u);
    /* 005b34ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b34b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b34b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b34b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b34ba: ret  */ FN_RET(0x005b3370); r_esp += 4; return;
}

void f_005b34bc(void) /* sub_5B34BC */
{
    FN_ENTER(0x005b34bc);
    /* 005b34bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b34bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b34bf: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b34c4: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b34c9u); f_0082d990();
    /* 005b34c9: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005b34cc: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 005b34cf: fadd dword ptr [ebx + 0x470] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x470u));
    /* 005b34d5: fadd dword ptr [ebx + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x418u));
    /* 005b34db: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 005b34de: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b34e1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b34e5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b34e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b34ea: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005b34ee: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b34f3u); f_00830b74();
    /* 005b34f3: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005b34f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b34f8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b34fdu); f_0082d8bc();
    /* 005b34fd: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 005b3500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3501: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3502: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3504: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3505: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5b350au); f_0082fa0c();
    /* 005b350a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3510: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3512: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x5b3517u); f_007aaab8();
    /* 005b3517: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b351cu); f_0082da80();
    /* 005b351c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005b351e: lea eax, [ebx + 0x42c] */ r_eax = (u32)(r_ebx+0x42cu);
    /* 005b3524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3525: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3527: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b3529: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5b352fu); call_ind(t); }
    /* 005b352f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005b3531: lea eax, [ebx + 0x438] */ r_eax = (u32)(r_ebx+0x438u);
    /* 005b3537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3538: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b353a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b353c: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5b3542u); call_ind(t); }
    /* 005b3542: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3543: ret  */ FN_RET(0x005b34bc); r_esp += 4; return;
}

void f_005b3544(void) /* sub_5B3544 */
{
    FN_ENTER(0x005b3544);
    /* 005b3544: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3545: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3548: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b354a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b354c: call 0x5b2ccc */ r_esp -= 4; W32(r_esp, 0x5b3551u); f_005b2ccc();
    /* 005b3551: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 005b3557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3559: je 0x5b35c9 */ if (fZ) goto L_005b35c9;
L_005b355b:; BB(0x005b355b);
    /* 005b355b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b355e: jne 0x5b35b5 */ if (!fZ) goto L_005b35b5;
L_005b3560:; BB(0x005b3560);
    /* 005b3560: push dword ptr [ebx + 0x3a0] */ { u32 v = R32((u32)(r_ebx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3566: push dword ptr [ebx + 0x394] */ { u32 v = R32((u32)(r_ebx+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b356c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b356e: call 0x77a07c */ r_esp -= 4; W32(r_esp, 0x5b3573u); f_0077a07c();
    /* 005b3573: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3575: call 0x5b36e4 */ r_esp -= 4; W32(r_esp, 0x5b357au); f_005b36e4();
    /* 005b357a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b357c: je 0x5b35ec */ if (fZ) goto L_005b35ec;
L_005b357e:; BB(0x005b357e);
    /* 005b357e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3580: call 0x5b378c */ r_esp -= 4; W32(r_esp, 0x5b3585u); f_005b378c();
    /* 005b3585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3587: jne 0x5b35ec */ if (!fZ) goto L_005b35ec;
L_005b3589:; BB(0x005b3589);
    /* 005b3589: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005b358f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b3592: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
    /* 005b3598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b359a: jl 0x5b3633 */ if ((fS!=fO)) goto L_005b3633;
L_005b35a0:; BB(0x005b35a0);
    /* 005b35a0: mov eax, dword ptr [ebx + 0x404] */ r_eax = R32((u32)(r_ebx+0x404u));
    /* 005b35a6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b35a9: mov dword ptr [ebx + 0x404], eax */ W32((u32)(r_ebx+0x404u), r_eax);
    /* 005b35af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b35b1: jge 0x5b35ec */ if ((fS==fO)) goto L_005b35ec;
L_005b35b3:; BB(0x005b35b3);
    /* 005b35b3: jmp 0x5b35f1 */ goto L_005b35f1;
L_005b35b5:; BB(0x005b35b5);
    /* 005b35b5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b35b8: jne 0x5b35ec */ if (!fZ) goto L_005b35ec;
L_005b35ba:; BB(0x005b35ba);
    /* 005b35ba: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 005b35c4: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b35c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b35c8: ret  */ FN_RET(0x005b3544); r_esp += 4; return;
L_005b35c9:; BB(0x005b35c9);
    /* 005b35c9: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005b35cf: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b35d4: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 005b35da: mov edx, 1 */ r_edx = 0x1u;
    /* 005b35df: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 005b35e6: mov dword ptr [ebx + 0x384], edx */ W32((u32)(r_ebx+0x384u), r_edx);
L_005b35ec:; BB(0x005b35ec);
    /* 005b35ec: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b35ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b35f0: ret  */ FN_RET(0x005b3544); r_esp += 4; return;
L_005b35f1:; BB(0x005b35f1);
    /* 005b35f1: push dword ptr [ebx + 0x3f4] */ { u32 v = R32((u32)(r_ebx+0x3f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b35f7: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b35fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b35ff: call 0x786494 */ r_esp -= 4; W32(r_esp, 0x5b3604u); f_00786494();
    /* 005b3604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3606: je 0x5b35ec */ if (fZ) goto L_005b35ec;
L_005b3608:; BB(0x005b3608);
    /* 005b3608: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005b360e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b3610: jne 0x5b35ec */ if (!fZ) goto L_005b35ec;
L_005b3612:; BB(0x005b3612);
    /* 005b3612: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005b3619: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b361c: je 0x5b35ec */ if (fZ) goto L_005b35ec;
L_005b361e:; BB(0x005b361e);
    /* 005b361e: mov dword ptr [ebx + 0x37c], 0xe */ W32((u32)(r_ebx+0x37cu), 0xeu);
    /* 005b3628: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 005b362e: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3631: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3632: ret  */ FN_RET(0x005b3544); r_esp += 4; return;
L_005b3633:; BB(0x005b3633);
    /* 005b3633: push dword ptr [ebx + 0x3dc] */ { u32 v = R32((u32)(r_ebx+0x3dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3639: push dword ptr [ebx + 0x3d8] */ { u32 v = R32((u32)(r_ebx+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b363f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3641: call 0x786494 */ r_esp -= 4; W32(r_esp, 0x5b3646u); f_00786494();
    /* 005b3646: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3648: je 0x5b35a0 */ if (fZ) goto L_005b35a0;
L_005b364e:; BB(0x005b364e);
    /* 005b364e: lea ecx, [ebx + 0x168] */ r_ecx = (u32)(r_ebx+0x168u);
    /* 005b3654: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x5b3659u); f_00763498();
    /* 005b3659: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b365c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005b365f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b3662: fadd dword ptr [eax*4 + 0x92acf8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92acf8u));
    /* 005b3669: mov edx, 2 */ r_edx = 0x2u;
    /* 005b366e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005b3672: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005b3676: fadd dword ptr [0x92acf8] */ ST(0) = ST(0) + R_F32((u32)(0x92acf8u));
    /* 005b367c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b367e: fdiv dword ptr [0x92ae20] */ ST(0) = ST(0) / R_F32((u32)(0x92ae20u));
    /* 005b3684: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005b3688: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005b368d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b3692: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005b3696: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005b369a: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005b369e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005b36a2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b36a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b36a8: je 0x5b35a0 */ if (fZ) goto L_005b35a0;
L_005b36ae:; BB(0x005b36ae);
    /* 005b36ae: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005b36b4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b36b6: jne 0x5b35ec */ if (!fZ) goto L_005b35ec;
L_005b36bc:; BB(0x005b36bc);
    /* 005b36bc: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005b36c3: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b36c6: je 0x5b35ec */ if (fZ) goto L_005b35ec;
L_005b36cc:; BB(0x005b36cc);
    /* 005b36cc: mov dword ptr [ebx + 0x37c], 0xd */ W32((u32)(r_ebx+0x37cu), 0xdu);
    /* 005b36d6: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 005b36dc: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b36df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b36e0: ret  */ FN_RET(0x005b3544); r_esp += 4; return;
}

void f_005b36e4(void) /* sub_5B36E4 */
{
    FN_ENTER(0x005b36e4);
    /* 005b36e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b36e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b36e8: mov esi, ecx */ r_esi = r_ecx;
    /* 005b36ea: fld dword ptr [esi + 0x3b8] */ FPUSH(R_F32((u32)(r_esi+0x3b8u)));
    /* 005b36f0: fld dword ptr [esi + 0x418] */ FPUSH(R_F32((u32)(r_esi+0x418u)));
    /* 005b36f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b36f8: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005b36fc: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005b36fe: fcom dword ptr [0x92ae1c] */ fx_compare(ST(0), R_F32((u32)(0x92ae1cu))); 
    /* 005b3704: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b3706: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b3709: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b370a: jbe 0x5b3714 */ if ((fC||fZ)) goto L_005b3714;
L_005b370c:; BB(0x005b370c);
    /* 005b370c: fld dword ptr [0x92ae10] */ FPUSH(R_F32((u32)(0x92ae10u)));
    /* 005b3712: jmp 0x5b3728 */ goto L_005b3728;
L_005b3714:; BB(0x005b3714);
    /* 005b3714: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b3717: fcomp dword ptr [0x92ae18] */ fx_compare(ST(0), R_F32((u32)(0x92ae18u))); FPOP();
    /* 005b371d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b371f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b3720: jae 0x5b377f */ if (!fC) goto L_005b377f;
L_005b3722:; BB(0x005b3722);
    /* 005b3722: fld dword ptr [0x92ae14] */ FPUSH(R_F32((u32)(0x92ae14u)));
L_005b3728:; BB(0x005b3728);
    /* 005b3728: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b372a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005b372e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b3730: fst dword ptr [esi + 0x418] */ W_F32((u32)(r_esi+0x418u), ST(0));
    /* 005b3736: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005b3738: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005b373c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b373d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b3740: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x5b3745u); f_0082e900();
    /* 005b3745: fcomp dword ptr [0x92ae1c] */ fx_compare(ST(0), R_F32((u32)(0x92ae1cu))); FPOP();
    /* 005b374b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b374d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b374e: jb 0x5b3762 */ if (fC) goto L_005b3762;
L_005b3750:; BB(0x005b3750);
    /* 005b3750: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005b3754: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005b3757: fcomp dword ptr [0x92ae0c] */ fx_compare(ST(0), R_F32((u32)(0x92ae0cu))); FPOP();
    /* 005b375d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b375f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b3760: jae 0x5b3778 */ if (!fC) goto L_005b3778;
L_005b3762:; BB(0x005b3762);
    /* 005b3762: mov edx, dword ptr [esi + 0x3b8] */ r_edx = R32((u32)(r_esi+0x3b8u));
    /* 005b3768: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
    /* 005b376e: mov eax, 1 */ r_eax = 0x1u;
    /* 005b3773: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3776: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3777: ret  */ FN_RET(0x005b36e4); r_esp += 4; return;
L_005b3778:; BB(0x005b3778);
    /* 005b3778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b377a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b377d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b377e: ret  */ FN_RET(0x005b36e4); r_esp += 4; return;
L_005b377f:; BB(0x005b377f);
    /* 005b377f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b3781: mov eax, 1 */ r_eax = 0x1u;
    /* 005b3786: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3789: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b378a: ret  */ FN_RET(0x005b36e4); r_esp += 4; return;
}

void f_005b378c(void) /* sub_5B378C */
{
    FN_ENTER(0x005b378c);
    /* 005b378c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b378d: mov edi, ecx */ r_edi = r_ecx;
    /* 005b378f: fld dword ptr [edi + 0x3b0] */ FPUSH(R_F32((u32)(r_edi+0x3b0u)));
    /* 005b3795: fcom dword ptr [0x92ae08] */ fx_compare(ST(0), R_F32((u32)(0x92ae08u))); 
    /* 005b379b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b379d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b379f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b37a0: jb 0x5b3804 */ if (fC) goto L_005b3804;
L_005b37a2:; BB(0x005b37a2);
    /* 005b37a2: fcomp dword ptr [0x92ae04] */ fx_compare(ST(0), R_F32((u32)(0x92ae04u))); FPOP();
    /* 005b37a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b37aa: mov edx, 1 */ r_edx = 0x1u;
    /* 005b37af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b37b0: jb 0x5b37b7 */ if (fC) goto L_005b37b7;
L_005b37b2:; BB(0x005b37b2);
    /* 005b37b2: mov edx, 2 */ r_edx = 0x2u;
L_005b37b7:; BB(0x005b37b7);
    /* 005b37b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b37b8: mov ecx, edi */ r_ecx = r_edi;
    /* 005b37ba: call 0x5b2554 */ r_esp -= 4; W32(r_esp, 0x5b37bfu); f_005b2554();
    /* 005b37bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b37c1: jne 0x5b37c7 */ if (!fZ) goto L_005b37c7;
L_005b37c3:; BB(0x005b37c3);
    /* 005b37c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b37c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b37c6: ret  */ FN_RET(0x005b378c); r_esp += 4; return;
L_005b37c7:; BB(0x005b37c7);
    /* 005b37c7: mov ecx, edi */ r_ecx = r_edi;
    /* 005b37c9: call 0x5b2574 */ r_esp -= 4; W32(r_esp, 0x5b37ceu); f_005b2574();
    /* 005b37ce: mov eax, dword ptr [edi + 0x3b4] */ r_eax = R32((u32)(r_edi+0x3b4u));
    /* 005b37d4: mov ecx, dword ptr [eax*4 + 0x92ac88] */ r_ecx = R32((u32)(r_eax*4+0x92ac88u));
    /* 005b37db: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005b37e1: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b37e4: jne 0x5b37fd */ if (!fZ) goto L_005b37fd;
L_005b37e6:; BB(0x005b37e6);
    /* 005b37e6: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005b37ed: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b37ef: je 0x5b37fd */ if (fZ) goto L_005b37fd;
L_005b37f1:; BB(0x005b37f1);
    /* 005b37f1: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 005b37f7: mov dword ptr [edi + 0x37c], ecx */ W32((u32)(r_edi+0x37cu), r_ecx);
L_005b37fd:; BB(0x005b37fd);
    /* 005b37fd: mov eax, 1 */ r_eax = 0x1u;
    /* 005b3802: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3803: ret  */ FN_RET(0x005b378c); r_esp += 4; return;
L_005b3804:; BB(0x005b3804);
    /* 005b3804: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b3806: jmp 0x5b37b7 */ goto L_005b37b7;
}

void f_005b3808(void) /* sub_5B3808 */
{
    FN_ENTER(0x005b3808);
    /* 005b3808: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3809: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b380b: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 005b3811: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3813: je 0x5b388d */ if (fZ) goto L_005b388d;
L_005b3815:; BB(0x005b3815);
    /* 005b3815: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3818: je 0x5b3862 */ if (fZ) goto L_005b3862;
L_005b381a:; BB(0x005b381a);
    /* 005b381a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b381d: jne 0x5b388b */ if (!fZ) goto L_005b388b;
L_005b381f:; BB(0x005b381f);
    /* 005b381f: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3825: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b382b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b382d: call 0x77a0d0 */ r_esp -= 4; W32(r_esp, 0x5b3832u); f_0077a0d0();
    /* 005b3832: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b3834: call 0x5b36e4 */ r_esp -= 4; W32(r_esp, 0x5b3839u); f_005b36e4();
    /* 005b3839: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b383b: je 0x5b388b */ if (fZ) goto L_005b388b;
L_005b383d:; BB(0x005b383d);
    /* 005b383d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b383f: call 0x5b2fdc */ r_esp -= 4; W32(r_esp, 0x5b3844u); f_005b2fdc();
    /* 005b3844: fcomp dword ptr [0x92ae00] */ fx_compare(ST(0), R_F32((u32)(0x92ae00u))); FPOP();
    /* 005b384a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b384c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b384d: jae 0x5b388b */ if (!fC) goto L_005b388b;
L_005b384f:; BB(0x005b384f);
    /* 005b384f: mov dword ptr [ebp + 0x3b4], 0xffffffff */ W32((u32)(r_ebp+0x3b4u), 0xffffffffu);
    /* 005b3859: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b385b: call 0x5b378c */ r_esp -= 4; W32(r_esp, 0x5b3860u); f_005b378c();
    /* 005b3860: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3861: ret  */ FN_RET(0x005b3808); r_esp += 4; return;
L_005b3862:; BB(0x005b3862);
    /* 005b3862: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 005b3868: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b386b: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 005b3871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3873: jge 0x5b388b */ if ((fS==fO)) goto L_005b388b;
L_005b3875:; BB(0x005b3875);
    /* 005b3875: mov dword ptr [ebp + 0x384], 2 */ W32((u32)(r_ebp+0x384u), 0x2u);
    /* 005b387f: mov eax, 1 */ r_eax = 0x1u;
    /* 005b3884: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_005b388b:; BB(0x005b388b);
    /* 005b388b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b388c: ret  */ FN_RET(0x005b3808); r_esp += 4; return;
L_005b388d:; BB(0x005b388d);
    /* 005b388d: mov edx, dword ptr [ebp + 0x414] */ r_edx = R32((u32)(r_ebp+0x414u));
    /* 005b3893: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 005b389d: mov eax, 6 */ r_eax = 0x6u;
    /* 005b38a2: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b38a9: mov dword ptr [ebp + 0x38c], edx */ W32((u32)(r_ebp+0x38cu), r_edx);
    /* 005b38af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b38b0: ret  */ FN_RET(0x005b3808); r_esp += 4; return;
}

void f_005b38b4(void) /* sub_5B38B4 */
{
    FN_ENTER(0x005b38b4);
    /* 005b38b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b38b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b38b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b38b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b38b8: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b38bb: mov edi, ecx */ r_edi = r_ecx;
    /* 005b38bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005b38bf: call 0x5b2ccc */ r_esp -= 4; W32(r_esp, 0x5b38c4u); f_005b2ccc();
    /* 005b38c4: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 005b38ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b38cc: je 0x5b3c75 */ if (fZ) goto L_005b3c75;
L_005b38d2:; BB(0x005b38d2);
    /* 005b38d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b38d5: je 0x5b3c12 */ if (fZ) goto L_005b3c12;
L_005b38db:; BB(0x005b38db);
    /* 005b38db: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b38de: je 0x5b3917 */ if (fZ) goto L_005b3917;
L_005b38e0:; BB(0x005b38e0);
    /* 005b38e0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b38e3: jne 0x5b3900 */ if (!fZ) goto L_005b3900;
L_005b38e5:; BB(0x005b38e5);
    /* 005b38e5: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005b38eb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b38ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b38f0: jl 0x5b395b */ if ((fS!=fO)) goto L_005b395b;
L_005b38f2:; BB(0x005b38f2);
    /* 005b38f2: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 005b38f8: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b38fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b38fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b38fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b38fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b38ff: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
L_005b3900:; BB(0x005b3900);
    /* 005b3900: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3903: jne 0x5b3953 */ if (!fZ) goto L_005b3953;
L_005b3905:; BB(0x005b3905);
    /* 005b3905: mov dword ptr [edi + 0x384], 0 */ W32((u32)(r_edi+0x384u), 0x0u);
    /* 005b390f: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3914: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3915: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3916: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
L_005b3917:; BB(0x005b3917);
    /* 005b3917: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 005b391c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b391f: je 0x5b3bfa */ if (fZ) goto L_005b3bfa;
L_005b3925:; BB(0x005b3925);
    /* 005b3925: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005b392b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b392e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b3930: jl 0x5b3bd0 */ if ((fS!=fO)) goto L_005b3bd0;
L_005b3936:; BB(0x005b3936);
    /* 005b3936: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b393b: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 005b3941: mov ecx, edi */ r_ecx = r_edi;
    /* 005b3943: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b3948u); f_007aaa30();
    /* 005b3948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b394a: je 0x5b3953 */ if (fZ) goto L_005b3953;
L_005b394c:; BB(0x005b394c);
    /* 005b394c: mov ecx, edi */ r_ecx = r_edi;
    /* 005b394e: call 0x5b3cb0 */ r_esp -= 4; W32(r_esp, 0x5b3953u); f_005b3cb0();
L_005b3953:; BB(0x005b3953);
    /* 005b3953: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3956: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3958: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3959: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b395a: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
L_005b395b:; BB(0x005b395b);
    /* 005b395b: mov dword ptr [edi + 0x38c], 0 */ W32((u32)(r_edi+0x38cu), 0x0u);
    /* 005b3965: mov eax, 1 */ r_eax = 0x1u;
    /* 005b396a: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b3971: lea ecx, [edi + 0x168] */ r_ecx = (u32)(r_edi+0x168u);
    /* 005b3977: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x5b397cu); f_00763498();
    /* 005b397c: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005b3980: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 005b3984: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b3987: fadd dword ptr [eax*4 + 0x92ace0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92ace0u));
    /* 005b398e: mov edx, 2 */ r_edx = 0x2u;
    /* 005b3993: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005b3997: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 005b399b: fadd dword ptr [0x92ace0] */ ST(0) = ST(0) + R_F32((u32)(0x92ace0u));
    /* 005b39a1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b39a3: fdiv dword ptr [0x92adfc] */ ST(0) = ST(0) / R_F32((u32)(0x92adfcu));
    /* 005b39a9: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 005b39ad: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 005b39b2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b39b7: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005b39bb: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005b39bf: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 005b39c3: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 005b39c7: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 005b39cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b39cd: je 0x5b3a14 */ if (fZ) goto L_005b3a14;
L_005b39cf:; BB(0x005b39cf);
    /* 005b39cf: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 005b39d5: mov dword ptr [edi + 0x3d0], 0x78 */ W32((u32)(r_edi+0x3d0u), 0x78u);
    /* 005b39df: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b39e2: jne 0x5b3a00 */ if (!fZ) goto L_005b3a00;
L_005b39e4:; BB(0x005b39e4);
    /* 005b39e4: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005b39eb: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b39ee: je 0x5b3a00 */ if (fZ) goto L_005b3a00;
L_005b39f0:; BB(0x005b39f0);
    /* 005b39f0: mov dword ptr [edi + 0x37c], 9 */ W32((u32)(r_edi+0x37cu), 0x9u);
    /* 005b39fa: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_005b3a00:; BB(0x005b3a00);
    /* 005b3a00: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b3a06: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 005b3a0c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3a0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3a10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3a11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3a12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3a13: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
L_005b3a14:; BB(0x005b3a14);
    /* 005b3a14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a16: mov ecx, edi */ r_ecx = r_edi;
    /* 005b3a18: call 0x5b2ed4 */ r_esp -= 4; W32(r_esp, 0x5b3a1du); f_005b2ed4();
    /* 005b3a1d: fld dword ptr [0x92adf8] */ FPUSH(R_F32((u32)(0x92adf8u)));
    /* 005b3a23: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 005b3a29: mov ebx, dword ptr [edi + 0x304] */ r_ebx = R32((u32)(r_edi+0x304u));
    /* 005b3a2f: mov ebp, dword ptr [edi + 0x308] */ r_ebp = R32((u32)(r_edi+0x308u));
    /* 005b3a35: mov esi, dword ptr [edi + 0x2a4] */ r_esi = R32((u32)(r_edi+0x2a4u));
    /* 005b3a3b: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 005b3a3f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005b3a47: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005b3a4f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b3a53: mov eax, dword ptr [edi + 0x2a8] */ r_eax = R32((u32)(r_edi+0x2a8u));
    /* 005b3a59: mov dword ptr [esp], 0xc3160000 */ W32((u32)(r_esp), 0xc3160000u);
    /* 005b3a60: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 005b3a64: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 005b3a68: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 005b3a6c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005b3a70: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005b3a74: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b3a78: mov eax, dword ptr [edi + 0x2ac] */ r_eax = R32((u32)(r_edi+0x2acu));
    /* 005b3a7e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b3a82: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b3a87u); f_0082f9c4();
    /* 005b3a87: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005b3a8b: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005b3a8f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b3a91: fmul qword ptr [0x92acf0] */ ST(0) = ST(0) * R_F64((u32)(0x92acf0u));
    /* 005b3a97: fdiv qword ptr [0x92ace8] */ ST(0) = ST(0) / R_F64((u32)(0x92ace8u));
    /* 005b3a9d: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 005b3aa1: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 005b3aa6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b3aab: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005b3aaf: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005b3ab3: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b3ab7: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 005b3abb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b3ac0: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 005b3ac4: mov ebp, esi */ r_ebp = r_esi;
    /* 005b3ac6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b3acbu); f_0082d990();
    /* 005b3acb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3acd: mov edx, esi */ r_edx = r_esi;
    /* 005b3acf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b3ad4u); f_0082d8bc();
    /* 005b3ad4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005b3ad6:; BB(0x005b3ad6);
    /* 005b3ad6: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b3ada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3adb: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b3adf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3ae1: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b3ae6u); f_00830aa0();
    /* 005b3ae6: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005b3aea: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b3aee: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b3af3u); f_0082ebac();
    /* 005b3af3: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b3af7: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b3afb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b3afd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3afe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3aff: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5b3b04u); f_0077fffc();
    /* 005b3b04: mov edx, eax */ r_edx = r_eax;
    /* 005b3b06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3b09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3b0b: je 0x5b3b4f */ if (fZ) goto L_005b3b4f;
L_005b3b0d:; BB(0x005b3b0d);
    /* 005b3b0d: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3b10: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b3b13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b14: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x5b3b19u); f_0078ea6c();
    /* 005b3b19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3b1c: fadd dword ptr [0x92adf0] */ ST(0) = ST(0) + R_F32((u32)(0x92adf0u));
    /* 005b3b22: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 005b3b26: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005b3b28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b3b2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b3b2b: jae 0x5b3b33 */ if (!fC) goto L_005b3b33;
L_005b3b2d:; BB(0x005b3b2d);
    /* 005b3b2d: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 005b3b31: mov ebp, esi */ r_ebp = r_esi;
L_005b3b33:; BB(0x005b3b33);
    /* 005b3b33: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b3b35: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3b37: mov edx, 0x5555 */ r_edx = 0x5555u;
    /* 005b3b3c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b3b41u); f_0082d8bc();
    /* 005b3b41: add esi, 0x5555 */ {  u32 a = r_esi; u32 b = 0x5555u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b3b47: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b3b4a: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3b4d: jl 0x5b3ad6 */ if ((fS!=fO)) goto L_005b3ad6;
L_005b3b4f:; BB(0x005b3b4f);
    /* 005b3b4f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b3b54u); f_0082da80();
    /* 005b3b54: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3b57: jne 0x5b3baa */ if (!fZ) goto L_005b3baa;
L_005b3b59:; BB(0x005b3b59);
    /* 005b3b59: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 005b3b5d: fcomp dword ptr [0x92adec] */ fx_compare(ST(0), R_F32((u32)(0x92adecu))); FPOP();
    /* 005b3b63: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b3b65: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b3b66: jb 0x5b3953 */ if (fC) goto L_005b3953;
L_005b3b6c:; BB(0x005b3b6c);
    /* 005b3b6c: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b3b71: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b3b76u); f_0082d990();
    /* 005b3b76: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 005b3b7a: fchs  */ ST(0) = -ST(0);
    /* 005b3b7c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b3b7f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3b81: mov edx, ebp */ r_edx = r_ebp;
    /* 005b3b83: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b3b88u); f_0082d8bc();
    /* 005b3b88: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005b3b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b8d: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b3b91: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3b93: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b3b98u); f_00830aa0();
    /* 005b3b98: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 005b3b9c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b3ba0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b3ba5u); f_0082ebac();
    /* 005b3ba5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b3baau); f_0082da80();
L_005b3baa:; BB(0x005b3baa);
    /* 005b3baa: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005b3bae: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005b3bb2: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 005b3bb6: mov dword ptr [edi + 0x2a4], eax */ W32((u32)(r_edi+0x2a4u), r_eax);
    /* 005b3bbc: mov dword ptr [edi + 0x2a8], edx */ W32((u32)(r_edi+0x2a8u), r_edx);
    /* 005b3bc2: mov dword ptr [edi + 0x2ac], ebx */ W32((u32)(r_edi+0x2acu), r_ebx);
    /* 005b3bc8: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3bcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3bcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3bcd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3bce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3bcf: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
L_005b3bd0:; BB(0x005b3bd0);
    /* 005b3bd0: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 005b3bd6: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
    /* 005b3be0: mov eax, 6 */ r_eax = 0x6u;
    /* 005b3be5: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b3bec: mov dword ptr [edi + 0x38c], edx */ W32((u32)(r_edi+0x38cu), r_edx);
    /* 005b3bf2: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3bf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3bf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3bf7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3bf8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3bf9: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
L_005b3bfa:; BB(0x005b3bfa);
    /* 005b3bfa: push dword ptr [edi + 0x3a0] */ { u32 v = R32((u32)(r_edi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3c00: push dword ptr [edi + 0x394] */ { u32 v = R32((u32)(r_edi+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3c06: mov ecx, edi */ r_ecx = r_edi;
    /* 005b3c08: call 0x77a07c */ r_esp -= 4; W32(r_esp, 0x5b3c0du); f_0077a07c();
    /* 005b3c0d: jmp 0x5b3925 */ goto L_005b3925;
L_005b3c12:; BB(0x005b3c12);
    /* 005b3c12: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005b3c18: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b3c1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b3c1d: jl 0x5b3c2d */ if ((fS!=fO)) goto L_005b3c2d;
L_005b3c1f:; BB(0x005b3c1f);
    /* 005b3c1f: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 005b3c25: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3c28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3c29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3c2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3c2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3c2c: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
L_005b3c2d:; BB(0x005b3c2d);
    /* 005b3c2d: mov edx, dword ptr [edi + 0x3d4] */ r_edx = R32((u32)(r_edi+0x3d4u));
    /* 005b3c33: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 005b3c39: mov ebp, dword ptr [edi + 0x3cc] */ r_ebp = R32((u32)(r_edi+0x3ccu));
    /* 005b3c3f: mov eax, 8 */ r_eax = 0x8u;
    /* 005b3c44: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b3c4b: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 005b3c51: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 005b3c5b: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005b3c61: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 005b3c67: mov dword ptr [edi + 0x38c], ebp */ W32((u32)(r_edi+0x38cu), r_ebp);
    /* 005b3c6d: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3c70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3c72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3c73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3c74: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
L_005b3c75:; BB(0x005b3c75);
    /* 005b3c75: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005b3c7b: mov ebx, dword ptr [edi + 0x3c4] */ r_ebx = R32((u32)(r_edi+0x3c4u));
    /* 005b3c81: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 005b3c8b: mov edx, 6 */ r_edx = 0x6u;
    /* 005b3c90: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b3c95: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 005b3c9b: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005b3ca2: mov dword ptr [edi + 0x38c], ebx */ W32((u32)(r_edi+0x38cu), r_ebx);
    /* 005b3ca8: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b3cab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3cac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3cad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3cae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3caf: ret  */ FN_RET(0x005b38b4); r_esp += 4; return;
}

void f_005b3cb0(void) /* sub_5B3CB0 */
{
    FN_ENTER(0x005b3cb0);
    /* 005b3cb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3cb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3cb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3cb3: mov esi, ecx */ r_esi = r_ecx;
    /* 005b3cb5: mov ecx, esi */ r_ecx = r_esi;
    /* 005b3cb7: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5b3cbcu); f_00770738();
    /* 005b3cbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3cbe: je 0x5b3d89 */ if (fZ) goto L_005b3d89;
L_005b3cc4:; BB(0x005b3cc4);
    /* 005b3cc4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b3cc6: mov ecx, eax */ r_ecx = r_eax;
    /* 005b3cc8: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5b3ccbu); call_ind(t); }
    /* 005b3ccb: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 005b3cd1: mov edx, dword ptr [esi + 0x504] */ r_edx = R32((u32)(r_esi+0x504u));
    /* 005b3cd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3cd9: je 0x5b3ce2 */ if (fZ) goto L_005b3ce2;
L_005b3cdb:; BB(0x005b3cdb);
    /* 005b3cdb: mov edx, 5 */ r_edx = 0x5u;
    /* 005b3ce0: jmp 0x5b3ce4 */ goto L_005b3ce4;
L_005b3ce2:; BB(0x005b3ce2);
    /* 005b3ce2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005b3ce4:; BB(0x005b3ce4);
    /* 005b3ce4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ce5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ce6: mov ecx, esi */ r_ecx = r_esi;
    /* 005b3ce8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ce9: call 0x5b3d90 */ r_esp -= 4; W32(r_esp, 0x5b3ceeu); f_005b3d90();
    /* 005b3cee: mov ebp, eax */ r_ebp = r_eax;
    /* 005b3cf0: mov ecx, esi */ r_ecx = r_esi;
    /* 005b3cf2: call 0x5b34bc */ r_esp -= 4; W32(r_esp, 0x5b3cf7u); f_005b34bc();
    /* 005b3cf7: fld dword ptr [0x92ade4] */ FPUSH(R_F32((u32)(0x92ade4u)));
    /* 005b3cfd: fadd dword ptr [esi + 0x430] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x430u));
    /* 005b3d03: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005b3d06: fstp dword ptr [esi + 0x430] */ W_F32((u32)(r_esi+0x430u), ST(0)); FPOP();
    /* 005b3d0c: lea ebx, [esi + 0x42c] */ r_ebx = (u32)(r_esi+0x42cu);
    /* 005b3d12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d13: add edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b3d19: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005b3d1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d1f: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5b3d24u); f_006e2f20();
    /* 005b3d24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d25: movzx edx, word ptr [esi + 0x60] */ r_edx = (u32)R16((u32)(r_esi+0x60u));
    /* 005b3d29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d2b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d2c: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5b3d31u); f_006e2f20();
    /* 005b3d31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d32: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005b3d35: add edx, 0xfffff000 */ {  u32 a = r_edx; u32 b = 0xfffff000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b3d3b: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005b3d3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d3f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d41: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5b3d46u); f_006e2f20();
    /* 005b3d46: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3d49: mov edx, dword ptr [esi + 0x504] */ r_edx = R32((u32)(r_esi+0x504u));
    /* 005b3d4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3d51: je 0x5b3d80 */ if (fZ) goto L_005b3d80;
L_005b3d53:; BB(0x005b3d53);
    /* 005b3d53: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d54: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005b3d57: add edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b3d5d: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005b3d60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d63: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5b3d68u); f_006e2f20();
    /* 005b3d68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d69: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005b3d6c: add edx, 0xffffe000 */ {  u32 a = r_edx; u32 b = 0xffffe000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b3d72: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005b3d75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d78: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5b3d7du); f_006e2f20();
    /* 005b3d7d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005b3d80:; BB(0x005b3d80);
    /* 005b3d80: mov eax, 1 */ r_eax = 0x1u;
    /* 005b3d85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3d86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3d87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3d88: ret  */ FN_RET(0x005b3cb0); r_esp += 4; return;
L_005b3d89:; BB(0x005b3d89);
    /* 005b3d89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3d8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3d8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3d8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3d8e: ret  */ FN_RET(0x005b3cb0); r_esp += 4; return;
}

void f_005b3d90(void) /* sub_5B3D90 */
{
    FN_ENTER(0x005b3d90);
    /* 005b3d90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d91: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b3d95: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005b3d98: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b3d9a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005b3d9e: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b3da0: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005b3da5: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b3da7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b3da9: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005b3dac: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b3daf: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b3db1: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b3db3: mov eax, 0x1d */ r_eax = 0x1du;
    /* 005b3db8: cmp edi, 0x1d */ {  u32 a = r_edi; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3dbb: jle 0x5b3dbf */ if ((fZ||fS!=fO)) goto L_005b3dbf;
L_005b3dbd:; BB(0x005b3dbd);
    /* 005b3dbd: mov edi, eax */ r_edi = r_eax;
L_005b3dbf:; BB(0x005b3dbf);
    /* 005b3dbf: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005b3dc4: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b3dc6: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005b3dc9: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b3dcb: mov eax, edx */ r_eax = r_edx;
    /* 005b3dcd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b3dce: ret 0xc */ FN_RET(0x005b3d90); r_esp += 16; return;
}

void f_005b3dd4(void) /* sub_5B3DD4 */
{
    FN_ENTER(0x005b3dd4);
    /* 005b3dd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3dd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b3dd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3dd9: call 0x5b2ccc */ r_esp -= 4; W32(r_esp, 0x5b3ddeu); f_005b2ccc();
    /* 005b3dde: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 005b3de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3de6: je 0x5b3e6e */ if (fZ) goto L_005b3e6e;
L_005b3dec:; BB(0x005b3dec);
    /* 005b3dec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3def: jne 0x5b3e5d */ if (!fZ) goto L_005b3e5d;
L_005b3df1:; BB(0x005b3df1);
    /* 005b3df1: push dword ptr [ebx + 0x3a0] */ { u32 v = R32((u32)(r_ebx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3df7: push dword ptr [ebx + 0x394] */ { u32 v = R32((u32)(r_ebx+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3dfd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3dff: call 0x77a07c */ r_esp -= 4; W32(r_esp, 0x5b3e04u); f_0077a07c();
    /* 005b3e04: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3e06: call 0x5b36e4 */ r_esp -= 4; W32(r_esp, 0x5b3e0bu); f_005b36e4();
    /* 005b3e0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3e0d: je 0x5b3e91 */ if (fZ) goto L_005b3e91;
L_005b3e13:; BB(0x005b3e13);
    /* 005b3e13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3e15: call 0x5b378c */ r_esp -= 4; W32(r_esp, 0x5b3e1au); f_005b378c();
    /* 005b3e1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3e1c: jne 0x5b3e91 */ if (!fZ) goto L_005b3e91;
L_005b3e1e:; BB(0x005b3e1e);
    /* 005b3e1e: push dword ptr [ebx + 0x3c0] */ { u32 v = R32((u32)(r_ebx+0x3c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3e24: push dword ptr [ebx + 0x3bc] */ { u32 v = R32((u32)(r_ebx+0x3bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b3e2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b3e2c: call 0x786494 */ r_esp -= 4; W32(r_esp, 0x5b3e31u); f_00786494();
    /* 005b3e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3e33: je 0x5b3e91 */ if (fZ) goto L_005b3e91;
L_005b3e35:; BB(0x005b3e35);
    /* 005b3e35: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005b3e3b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3e3d: jne 0x5b3e91 */ if (!fZ) goto L_005b3e91;
L_005b3e3f:; BB(0x005b3e3f);
    /* 005b3e3f: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005b3e46: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b3e49: je 0x5b3e91 */ if (fZ) goto L_005b3e91;
L_005b3e4b:; BB(0x005b3e4b);
    /* 005b3e4b: mov dword ptr [ebx + 0x37c], 0xa */ W32((u32)(r_ebx+0x37cu), 0xau);
    /* 005b3e55: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 005b3e5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3e5c: ret  */ FN_RET(0x005b3dd4); r_esp += 4; return;
L_005b3e5d:; BB(0x005b3e5d);
    /* 005b3e5d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b3e60: jne 0x5b3e91 */ if (!fZ) goto L_005b3e91;
L_005b3e62:; BB(0x005b3e62);
    /* 005b3e62: mov dword ptr [ebx + 0x384], 0 */ W32((u32)(r_ebx+0x384u), 0x0u);
    /* 005b3e6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3e6d: ret  */ FN_RET(0x005b3dd4); r_esp += 4; return;
L_005b3e6e:; BB(0x005b3e6e);
    /* 005b3e6e: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005b3e74: mov edx, 1 */ r_edx = 0x1u;
    /* 005b3e79: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 005b3e80: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3e85: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 005b3e8b: mov dword ptr [ebx + 0x384], edx */ W32((u32)(r_ebx+0x384u), r_edx);
L_005b3e91:; BB(0x005b3e91);
    /* 005b3e91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3e92: ret  */ FN_RET(0x005b3dd4); r_esp += 4; return;
}

void f_005b3e94(void) /* sub_5B3E94 */
{
    FN_ENTER(0x005b3e94);
    /* 005b3e94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e96: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b3e98: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 005b3e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3ea0: je 0x5b3f60 */ if (fZ) goto L_005b3f60;
L_005b3ea6:; BB(0x005b3ea6);
    /* 005b3ea6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3ea9: jne 0x5b3f10 */ if (!fZ) goto L_005b3f10;
L_005b3eab:; BB(0x005b3eab);
    /* 005b3eab: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 005b3eb1: fcom dword ptr [0x92ade0] */ fx_compare(ST(0), R_F32((u32)(0x92ade0u))); 
    /* 005b3eb7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b3eb9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b3ebb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b3ebc: ja 0x5b3ed2 */ if ((!fC&&!fZ)) goto L_005b3ed2;
L_005b3ebe:; BB(0x005b3ebe);
    /* 005b3ebe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b3ec0: mov eax, 0x42a00000 */ r_eax = 0x42a00000u;
    /* 005b3ec5: mov dword ptr [ebp + 0x418], eax */ W32((u32)(r_ebp+0x418u), r_eax);
    /* 005b3ecb: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005b3ed0: jmp 0x5b3ee0 */ goto L_005b3ee0;
L_005b3ed2:; BB(0x005b3ed2);
    /* 005b3ed2: fld dword ptr [0x92add8] */ FPUSH(R_F32((u32)(0x92add8u)));
    /* 005b3ed8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005b3eda: fstp dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0)); FPOP();
L_005b3ee0:; BB(0x005b3ee0);
    /* 005b3ee0: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 005b3ee6: lea ecx, [ebp + 0x474] */ r_ecx = (u32)(r_ebp+0x474u);
    /* 005b3eec: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5b3eefu); call_ind(t); }
    /* 005b3eef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3ef2: jne 0x5b3ef7 */ if (!fZ) goto L_005b3ef7;
L_005b3ef4:; BB(0x005b3ef4);
    /* 005b3ef4: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_005b3ef7:; BB(0x005b3ef7);
    /* 005b3ef7: test bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b3efa: je 0x5b3f06 */ if (fZ) goto L_005b3f06;
L_005b3efc:; BB(0x005b3efc);
    /* 005b3efc: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
L_005b3f06:; BB(0x005b3f06);
    /* 005b3f06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b3f08: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5b3f0du); f_007b6880();
    /* 005b3f0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3f0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3f0f: ret  */ FN_RET(0x005b3e94); r_esp += 4; return;
L_005b3f10:; BB(0x005b3f10);
    /* 005b3f10: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b3f13: jne 0x5b3fa2 */ if (!fZ) goto L_005b3fa2;
L_005b3f19:; BB(0x005b3f19);
    /* 005b3f19: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 005b3f1f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005b3f22: and edx, 0xfffffffa */ {  u32 a = r_edx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005b3f25: mov dword ptr [ebp + 0x390], edx */ W32((u32)(r_ebp+0x390u), r_edx);
    /* 005b3f2b: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b3f30: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005b3f33: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3f36: jne 0x5b3f53 */ if (!fZ) goto L_005b3f53;
L_005b3f38:; BB(0x005b3f38);
    /* 005b3f38: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005b3f3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3f41: je 0x5b3f53 */ if (fZ) goto L_005b3f53;
L_005b3f43:; BB(0x005b3f43);
    /* 005b3f43: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 005b3f4d: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
L_005b3f53:; BB(0x005b3f53);
    /* 005b3f53: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 005b3f5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3f5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3f5f: ret  */ FN_RET(0x005b3e94); r_esp += 4; return;
L_005b3f60:; BB(0x005b3f60);
    /* 005b3f60: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 005b3f66: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005b3f69: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b3f6f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b3f72: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 005b3f78: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 005b3f7b: lea ecx, [ebp + 0x474] */ r_ecx = (u32)(r_ebp+0x474u);
    /* 005b3f81: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x5b3f86u); f_00576c48();
    /* 005b3f86: mov dword ptr [ebp + 0x418], 0x437a0000 */ W32((u32)(r_ebp+0x418u), 0x437a0000u);
    /* 005b3f90: mov eax, 1 */ r_eax = 0x1u;
    /* 005b3f95: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b3f9c: mov dword ptr [ebp + 0x384], eax */ W32((u32)(r_ebp+0x384u), r_eax);
L_005b3fa2:; BB(0x005b3fa2);
    /* 005b3fa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b3fa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3fa4: ret  */ FN_RET(0x005b3e94); r_esp += 4; return;
}

void f_005b3fa8(void) /* sub_5B3FA8 */
{
    FN_ENTER(0x005b3fa8);
    /* 005b3fa8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3fa9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3faa: mov esi, ecx */ r_esi = r_ecx;
    /* 005b3fac: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 005b3fb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3fb4: je 0x5b4118 */ if (fZ) goto L_005b4118;
L_005b3fba:; BB(0x005b3fba);
    /* 005b3fba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3fbd: je 0x5b40d3 */ if (fZ) goto L_005b40d3;
L_005b3fc3:; BB(0x005b3fc3);
    /* 005b3fc3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3fc6: je 0x5b403d */ if (fZ) goto L_005b403d;
L_005b3fc8:; BB(0x005b3fc8);
    /* 005b3fc8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3fcb: je 0x5b3fff */ if (fZ) goto L_005b3fff;
L_005b3fcd:; BB(0x005b3fcd);
    /* 005b3fcd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b3fd0: jne 0x5b4017 */ if (!fZ) goto L_005b4017;
L_005b3fd2:; BB(0x005b3fd2);
    /* 005b3fd2: fld dword ptr [esi + 0x470] */ FPUSH(R_F32((u32)(r_esi+0x470u)));
    /* 005b3fd8: fsub dword ptr [0x92adc8] */ ST(0) = ST(0) - R_F32((u32)(0x92adc8u));
    /* 005b3fde: fcom dword ptr [0x92adc4] */ fx_compare(ST(0), R_F32((u32)(0x92adc4u))); 
    /* 005b3fe4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b3fe6: fstp dword ptr [esi + 0x470] */ W_F32((u32)(r_esi+0x470u), ST(0)); FPOP();
    /* 005b3fec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b3fed: jae 0x5b4017 */ if (!fC) goto L_005b4017;
L_005b3fef:; BB(0x005b3fef);
    /* 005b3fef: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005b3ff3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b3ff8: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005b3ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3ffd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3ffe: ret  */ FN_RET(0x005b3fa8); r_esp += 4; return;
L_005b3fff:; BB(0x005b3fff);
    /* 005b3fff: movsx eax, word ptr [esi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x344u));
    /* 005b4006: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b4009: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005b4010: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005b4013: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b4015: jle 0x5b401a */ if ((fZ||fS!=fO)) goto L_005b401a;
L_005b4017:; BB(0x005b4017);
    /* 005b4017: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4018: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b4019: ret  */ FN_RET(0x005b3fa8); r_esp += 4; return;
L_005b401a:; BB(0x005b401a);
    /* 005b401a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b401c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005b401f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4020: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x5b4025u); f_00578778();
    /* 005b4025: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4027: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4028: call 0x5781d8 */ r_esp -= 4; W32(r_esp, 0x5b402du); f_005781d8();
    /* 005b402d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b4030: mov dword ptr [esi + 0x384], 4 */ W32((u32)(r_esi+0x384u), 0x4u);
    /* 005b403a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b403b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b403c: ret  */ FN_RET(0x005b3fa8); r_esp += 4; return;
L_005b403d:; BB(0x005b403d);
    /* 005b403d: mov ecx, esi */ r_ecx = r_esi;
    /* 005b403f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b4044u); f_007aa094();
    /* 005b4044: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4046: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4048: mov ecx, esi */ r_ecx = r_esi;
    /* 005b404a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5b404fu); f_00772b44();
    /* 005b404f: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4052: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4054: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005b4056: mov ecx, esi */ r_ecx = r_esi;
    /* 005b4058: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x5b405bu); call_ind(t); }
    /* 005b405b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005b405d: mov ecx, esi */ r_ecx = r_esi;
    /* 005b405f: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5b4062u); call_ind(t); }
    /* 005b4062: fld dword ptr [0x92add4] */ FPUSH(R_F32((u32)(0x92add4u)));
    /* 005b4068: fld dword ptr [esi + 0x418] */ FPUSH(R_F32((u32)(r_esi+0x418u)));
    /* 005b406e: fadd dword ptr [esi + 0x490] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x490u));
    /* 005b4074: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005b4076: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4078: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005b407e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b407f: fcomp dword ptr [0x92add0] */ fx_compare(ST(0), R_F32((u32)(0x92add0u))); FPOP();
    /* 005b4085: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4087: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b4089: ja 0x5b408d */ if ((!fC&&!fZ)) goto L_005b408d;
L_005b408b:; BB(0x005b408b);
    /* 005b408b: fst st(1) */ ST(1) = ST(0);
L_005b408d:; BB(0x005b408d);
    /* 005b408d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b408f: fstp dword ptr [esi + 0x418] */ W_F32((u32)(r_esi+0x418u), ST(0)); FPOP();
    /* 005b4095: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b4096: jb 0x5b4017 */ if (fC) goto L_005b4017;
L_005b409c:; BB(0x005b409c);
    /* 005b409c: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b40a1: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005b40a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b40a5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b40aau); f_0050b510();
    /* 005b40aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b40ad: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b40b2u); f_00807ac0();
    /* 005b40b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b40b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b40b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b40b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b40b7: push dword ptr [eax*4 + 0x9c1738] */ { u32 v = R32((u32)(r_eax*4+0x9c1738u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b40be: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b40c3u); f_00814298();
    /* 005b40c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b40c6: mov dword ptr [esi + 0x384], 3 */ W32((u32)(r_esi+0x384u), 0x3u);
    /* 005b40d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b40d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b40d2: ret  */ FN_RET(0x005b3fa8); r_esp += 4; return;
L_005b40d3:; BB(0x005b40d3);
    /* 005b40d3: mov ecx, esi */ r_ecx = r_esi;
    /* 005b40d5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b40dau); f_007aa094();
    /* 005b40da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b40dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b40de: mov ecx, esi */ r_ecx = r_esi;
    /* 005b40e0: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5b40e5u); f_00772b44();
    /* 005b40e5: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005b40eb: fcomp dword ptr [0x92add0] */ fx_compare(ST(0), R_F32((u32)(0x92add0u))); FPOP();
    /* 005b40f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b40f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b40f4: jb 0x5b4017 */ if (fC) goto L_005b4017;
L_005b40fa:; BB(0x005b40fa);
    /* 005b40fa: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b40ff: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005b4102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4103: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b4108u); f_0050b510();
    /* 005b4108: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b410b: mov dword ptr [esi + 0x384], 3 */ W32((u32)(r_esi+0x384u), 0x3u);
    /* 005b4115: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4116: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b4117: ret  */ FN_RET(0x005b3fa8); r_esp += 4; return;
L_005b4118:; BB(0x005b4118);
    /* 005b4118: mov ecx, esi */ r_ecx = r_esi;
    /* 005b411a: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x5b411fu); f_00787534();
    /* 005b411f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b4120: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x5b4125u); f_008113e4();
    /* 005b4125: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b4126: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 005b412b: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005b4132: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b4137u); f_00807ac0();
    /* 005b4137: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005b413a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b413c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b413d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b413e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b413f: push dword ptr [eax*4 + 0x9c17a4] */ { u32 v = R32((u32)(r_eax*4+0x9c17a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b4146: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b414bu); f_00814298();
    /* 005b414b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b414e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005b4151: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b4156: je 0x5b4185 */ if (fZ) goto L_005b4185;
L_005b4158:; BB(0x005b4158);
    /* 005b4158: fld dword ptr [esi + 0x418] */ FPUSH(R_F32((u32)(r_esi+0x418u)));
    /* 005b415e: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 005b4168: fchs  */ ST(0) = -ST(0);
    /* 005b416a: fmul dword ptr [0x92adcc] */ ST(0) = ST(0) * R_F32((u32)(0x92adccu));
    /* 005b4170: fstp dword ptr [esi + 0x490] */ W_F32((u32)(r_esi+0x490u), ST(0)); FPOP();
    /* 005b4176: mov eax, 0xd */ r_eax = 0xdu;
    /* 005b417b: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005b4182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4183: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b4184: ret  */ FN_RET(0x005b3fa8); r_esp += 4; return;
L_005b4185:; BB(0x005b4185);
    /* 005b4185: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 005b418f: mov eax, 4 */ r_eax = 0x4u;
    /* 005b4194: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005b419b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b419c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b419d: ret  */ FN_RET(0x005b3fa8); r_esp += 4; return;
}

