#include "protos.h"

void f_005a3004(void) /* sub_5A3004 */
{
    FN_ENTER(0x005a3004);
    /* 005a3004: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a3005: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a3009: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005a300d: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3012: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005a3014: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 005a3017: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 005a301a: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 005a301d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005a3020: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005a3023: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a3025: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 005a3028: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005a302b: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005a302e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005a3031: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 005a3034: call 0x5a3040 */ r_esp -= 4; W32(r_esp, 0x5a3039u); f_005a3040();
    /* 005a3039: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a303a: ret 8 */ FN_RET(0x005a3004); r_esp += 12; return;
}

void f_005a3040(void) /* sub_5A3040 */
{
    FN_ENTER(0x005a3040);
    /* 005a3040: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a3041: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3044: mov esi, ecx */ r_esi = r_ecx;
    /* 005a3046: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005a304a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005a3052: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a3056: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005a305b: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005a3062: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5a3067u); f_0082d990();
    /* 005a3067: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 005a306a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a306c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5a3071u); f_00830c04();
    /* 005a3071: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 005a3074: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3076: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5a307bu); f_0082e9e4();
    /* 005a307b: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005a307e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3080: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a3085u); f_0082d8bc();
    /* 005a3085: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a3088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3089: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005a308d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a308f: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5a3094u); f_0082eab8();
    /* 005a3094: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a3099u); f_0082da80();
    /* 005a3099: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a309c: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a309f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a30a1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5a30a6u); f_0082ebac();
    /* 005a30a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a30a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a30aa: ret 4 */ FN_RET(0x005a3040); r_esp += 8; return;
}

void f_005a30b0(void) /* sub_5A30B0 */
{
    FN_ENTER(0x005a30b0);
    /* 005a30b0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005a30b4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005a30b8: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 005a30bb: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 005a30be: ret 8 */ FN_RET(0x005a30b0); r_esp += 12; return;
}

void f_005a30c4(void) /* sub_5A30C4 */
{
    FN_ENTER(0x005a30c4);
    /* 005a30c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a30c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a30c6: mov edi, ecx */ r_edi = r_ecx;
    /* 005a30c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005a30ca: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a30cfu); f_00770738();
    /* 005a30cf: mov ebp, eax */ r_ebp = r_eax;
    /* 005a30d1: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 005a30d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a30da: jne 0x5a31ab */ if (!fZ) goto L_005a31ab;
L_005a30e0:; BB(0x005a30e0);
    /* 005a30e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a30e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a30e4: mov ecx, edi */ r_ecx = r_edi;
    /* 005a30e6: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a30ebu); f_00772b44();
    /* 005a30eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a30ed: mov ecx, edi */ r_ecx = r_edi;
    /* 005a30ef: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a30f4u); f_007aaa30();
    /* 005a30f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a30f6: je 0x5a30ff */ if (fZ) goto L_005a30ff;
L_005a30f8:; BB(0x005a30f8);
    /* 005a30f8: mov ecx, edi */ r_ecx = r_edi;
    /* 005a30fa: call 0x5a2f54 */ r_esp -= 4; W32(r_esp, 0x5a30ffu); f_005a2f54();
L_005a30ff:; BB(0x005a30ff);
    /* 005a30ff: mov edx, dword ptr [edi + 0xb4] */ r_edx = R32((u32)(r_edi+0xb4u));
    /* 005a3105: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3108: je 0x5a32a4 */ if (fZ) goto L_005a32a4;
L_005a310e:; BB(0x005a310e);
    /* 005a310e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3110: je 0x5a32a4 */ if (fZ) goto L_005a32a4;
L_005a3116:; BB(0x005a3116);
    /* 005a3116: mov edx, dword ptr [0xa747b0] */ r_edx = R32((u32)(0xa747b0u));
    /* 005a311c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a311e: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 005a3124: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 005a3127: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 005a312a: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 005a3130: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 005a3136: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a313c: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 005a3142: mov edx, 2 */ r_edx = 0x2u;
    /* 005a3147: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005a314e: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3154: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a315a: mov ecx, edi */ r_ecx = r_edi;
    /* 005a315c: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3162: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5a3167u); f_00771c8c();
    /* 005a3167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3169: je 0x5a3184 */ if (fZ) goto L_005a3184;
L_005a316b:; BB(0x005a316b);
    /* 005a316b: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3171: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3177: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3179: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a317f: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5a3184u); f_00771f1c();
L_005a3184:; BB(0x005a3184);
    /* 005a3184: mov dword ptr [edi + 0x390], 0 */ W32((u32)(r_edi+0x390u), 0x0u);
    /* 005a318e: mov eax, 1 */ r_eax = 0x1u;
    /* 005a3193: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 005a319a: mov edx, 0x96 */ r_edx = 0x96u;
    /* 005a319f: mov word ptr [edi + 0x344], dx */ W16((u32)(r_edi+0x344u), (u16)r_edx);
    /* 005a31a6: jmp 0x5a32a4 */ goto L_005a32a4;
L_005a31ab:; BB(0x005a31ab);
    /* 005a31ab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a31ad: je 0x5a3256 */ if (fZ) goto L_005a3256;
L_005a31b3:; BB(0x005a31b3);
    /* 005a31b3: mov edx, dword ptr [0xa747b0] */ r_edx = R32((u32)(0xa747b0u));
    /* 005a31b9: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a31bf: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a31c5: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 005a31cb: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a31d1: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 005a31d4: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005a31da: mov ecx, edi */ r_ecx = r_edi;
    /* 005a31dc: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a31df: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a31e4: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a31e7: call 0x7726d0 */ r_esp -= 4; W32(r_esp, 0x5a31ecu); f_007726d0();
    /* 005a31ec: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005a31f2: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005a31f4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a31f6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a31f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a31fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a31fb: jae 0x5a3206 */ if (!fC) goto L_005a3206;
L_005a31fd:; BB(0x005a31fd);
    /* 005a31fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a31ff: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3201: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a3206u); f_007706b0();
L_005a3206:; BB(0x005a3206);
    /* 005a3206: lea edx, [edi + 0x2a4] */ r_edx = (u32)(r_edi+0x2a4u);
    /* 005a320c: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005a320f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3210: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3211: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5a3216u); f_007a9180();
    /* 005a3216: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3219: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005a321f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 005a3222: mov ebp, dword ptr [edi + 0xa4] */ r_ebp = R32((u32)(r_edi+0xa4u));
    /* 005a3228: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 005a322b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a322d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a322f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a3231: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a3232: ja 0x5a324c */ if ((!fC&&!fZ)) goto L_005a324c;
L_005a3234:; BB(0x005a3234);
    /* 005a3234: movsx eax, word ptr [edi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 005a323b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a323e: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 005a3245: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005a3248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005a324a: jge 0x5a3256 */ if ((fS==fO)) goto L_005a3256;
L_005a324c:; BB(0x005a324c);
    /* 005a324c: mov dword ptr [edi + 0x38c], 0 */ W32((u32)(r_edi+0x38cu), 0x0u);
L_005a3256:; BB(0x005a3256);
    /* 005a3256: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a325b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a325d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a3262u); f_007aaa30();
    /* 005a3262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3264: jne 0x5a3276 */ if (!fZ) goto L_005a3276;
L_005a3266:; BB(0x005a3266);
    /* 005a3266: push 0x41980000 */ { u32 v = 0x41980000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a326b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a326d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a3272u); f_007aaa30();
    /* 005a3272: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3274: je 0x5a32a4 */ if (fZ) goto L_005a32a4;
L_005a3276:; BB(0x005a3276);
    /* 005a3276: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a327bu); f_00807ac0();
    /* 005a327b: push dword ptr [eax*4 + 0x9c0194] */ { u32 v = R32((u32)(r_eax*4+0x9c0194u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3282: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3284: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a3289u); f_007879b8();
    /* 005a3289: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 005a328c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a328e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a328f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3291: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3292: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a3297u); f_00814298();
    /* 005a3297: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a329c: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a32a1u); f_00814680();
    /* 005a32a1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a32a4:; BB(0x005a32a4);
    /* 005a32a4: mov ecx, edi */ r_ecx = r_edi;
    /* 005a32a6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a32abu); f_007aa094();
    /* 005a32ab: mov ecx, edi */ r_ecx = r_edi;
    /* 005a32ad: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5a32b2u); f_007b6880();
    /* 005a32b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a32b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a32b4: ret  */ FN_RET(0x005a30c4); r_esp += 4; return;
}

void f_005a32b8(void) /* sub_5A32B8 */
{
    FN_ENTER(0x005a32b8);
    /* 005a32b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a32b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a32ba: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a32bd: mov esi, ecx */ r_esi = r_ecx;
    /* 005a32bf: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a32c2: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a32c7: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a32ca: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 005a32d0: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005a32d3: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a32d6: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005a32d9: mov ecx, esi */ r_ecx = r_esi;
    /* 005a32db: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a32e0u); f_007aa094();
    /* 005a32e0: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 005a32e7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a32ea: jne 0x5a346b */ if (!fZ) goto L_005a346b;
L_005a32f0:; BB(0x005a32f0);
    /* 005a32f0: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a32f5: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 005a32f8: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 005a32fe: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 005a3301: fadd dword ptr [esi + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x310u));
    /* 005a3307: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 005a330a: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 005a3310: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005a3312: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 005a3315: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 005a3318: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 005a331b: mov ecx, esi */ r_ecx = r_esi;
    /* 005a331d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a3322u); f_007aaa30();
    /* 005a3322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3324: je 0x5a3639 */ if (fZ) goto L_005a3639;
L_005a332a:; BB(0x005a332a);
    /* 005a332a: mov eax, 2 */ r_eax = 0x2u;
    /* 005a332f: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a3336: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a333b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a333d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a333f: jle 0x5a341f */ if ((fZ||fS!=fO)) goto L_005a341f;
L_005a3345:; BB(0x005a3345);
    /* 005a3345: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
L_005a3349:; BB(0x005a3349);
    /* 005a3349: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 005a3350: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3352: je 0x5a3648 */ if (fZ) goto L_005a3648;
L_005a3358:; BB(0x005a3358);
    /* 005a3358: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005a335c: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3362: jge 0x5a363f */ if ((fS==fO)) goto L_005a363f;
L_005a3368:; BB(0x005a3368);
    /* 005a3368: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 005a336f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3372: jne 0x5a3410 */ if (!fZ) goto L_005a3410;
L_005a3378:; BB(0x005a3378);
    /* 005a3378: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005a337e: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005a3384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3385: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3386: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5a338bu); f_007a9180();
    /* 005a338b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005a338f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3392: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005a3396: fcomp dword ptr [0x929fd4] */ fx_compare(ST(0), R_F32((u32)(0x929fd4u))); FPOP();
    /* 005a339c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a339e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a339f: ja 0x5a33d6 */ if ((!fC&&!fZ)) goto L_005a33d6;
L_005a33a1:; BB(0x005a33a1);
    /* 005a33a1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a33a3: mov dword ptr [esp + 4], 0x41c80000 */ W32((u32)(r_esp+0x4u), 0x41c80000u);
    /* 005a33ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a33ad: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005a33b2: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005a33b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a33b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a33b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a33b8: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a33bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005a33bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a33c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a33c2: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5a33c5u); call_ind(t); }
    /* 005a33c5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a33c7: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a33ca: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a33ce: mov ecx, edi */ r_ecx = r_edi;
    /* 005a33d0: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005a33d3: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5a33d6u); call_ind(t); }
L_005a33d6:; BB(0x005a33d6);
    /* 005a33d6: fld dword ptr [0xa74794] */ FPUSH(R_F32((u32)(0xa74794u)));
    /* 005a33dc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a33de: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005a33e2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a33e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a33e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a33e7: jbe 0x5a33f0 */ if ((fC||fZ)) goto L_005a33f0;
L_005a33e9:; BB(0x005a33e9);
    /* 005a33e9: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a33ee: jmp 0x5a3410 */ goto L_005a3410;
L_005a33f0:; BB(0x005a33f0);
    /* 005a33f0: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 005a33f4: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a33fa: je 0x5a3403 */ if (fZ) goto L_005a3403;
L_005a33fc:; BB(0x005a33fc);
    /* 005a33fc: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a3401: jmp 0x5a3410 */ goto L_005a3410;
L_005a3403:; BB(0x005a3403);
    /* 005a3403: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3405: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x5a340au); f_004d4288();
    /* 005a340a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a340b: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_005a3410:; BB(0x005a3410);
    /* 005a3410: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a3413: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3415: jl 0x5a3349 */ if ((fS!=fO)) goto L_005a3349;
L_005a341b:; BB(0x005a341b);
    /* 005a341b: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_005a341f:; BB(0x005a341f);
    /* 005a341f: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3424: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005a3427: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3428: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a342du); f_0050b510();
    /* 005a342d: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3432: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3433: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a3438u); f_0050b510();
    /* 005a3438: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a343b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a3440u); f_00807ac0();
    /* 005a3440: push dword ptr [eax*4 + 0x9c01dc] */ { u32 v = R32((u32)(r_eax*4+0x9c01dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3447: mov ecx, esi */ r_ecx = r_esi;
    /* 005a3449: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a344eu); f_007879b8();
    /* 005a344e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a3450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3451: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3452: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3453: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3454: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a3459u); f_00814298();
    /* 005a3459: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a345e: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a3463u); f_00814680();
    /* 005a3463: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3466: jmp 0x5a3639 */ goto L_005a3639;
L_005a346b:; BB(0x005a346b);
    /* 005a346b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a346e: jne 0x5a34c2 */ if (!fZ) goto L_005a34c2;
L_005a3470:; BB(0x005a3470);
    /* 005a3470: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3472: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3474: mov ecx, esi */ r_ecx = r_esi;
    /* 005a3476: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a347bu); f_00772b44();
    /* 005a347b: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 005a3481: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3484: je 0x5a3639 */ if (fZ) goto L_005a3639;
L_005a348a:; BB(0x005a348a);
    /* 005a348a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a348d: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 005a3493: and eax, 0xf9dfffff */ {  u32 a = r_eax; u32 b = 0xf9dfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a3498: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a349b: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 005a349e: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a34a1: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005a34a4: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a34ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a34b0: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a34b7: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 005a34bd: jmp 0x5a3639 */ goto L_005a3639;
L_005a34c2:; BB(0x005a34c2);
    /* 005a34c2: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 005a34c5: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 005a34c8: mov dword ptr [0xaab4f0], eax */ W32((u32)(0xaab4f0u), r_eax);
    /* 005a34cd: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 005a34d0: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005a34d3: mov dword ptr [0xaab4f4], ebx */ W32((u32)(0xaab4f4u), r_ebx);
    /* 005a34d9: mov dword ptr [0xaab4f8], eax */ W32((u32)(0xaab4f8u), r_eax);
    /* 005a34de: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 005a34e3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5a34e8u); f_0082f9c4();
    /* 005a34e8: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005a34ee: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005a34f4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a34f6: fmul qword ptr [0x929ef0] */ ST(0) = ST(0) * R_F64((u32)(0x929ef0u));
    /* 005a34fc: fdiv qword ptr [0x929ee8] */ ST(0) = ST(0) / R_F64((u32)(0x929ee8u));
    /* 005a3502: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005a3506: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005a350b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a3510: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005a3514: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005a3518: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a351c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005a3520: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005a3526: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005a352a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a352d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a352e: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3531: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5a3536u); f_007a8c74();
    /* 005a3536: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3539: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005a353f: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005a3542: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3545: jge 0x5a3639 */ if ((fS==fO)) goto L_005a3639;
L_005a354b:; BB(0x005a354b);
    /* 005a354b: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3550: mov eax, 5 */ r_eax = 0x5u;
    /* 005a3555: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005a355c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a355e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a3563u); f_007aaa30();
    /* 005a3563: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3565: je 0x5a3639 */ if (fZ) goto L_005a3639;
L_005a356b:; BB(0x005a356b);
    /* 005a356b: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005a3571: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a3573: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005a3579: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a357b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a357d: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 005a3580: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 005a3583: mov ebx, dword ptr [esi + 0x58] */ r_ebx = R32((u32)(r_esi+0x58u));
    /* 005a3586: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 005a358c: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005a358f: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 005a3595: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 005a359b: mov dword ptr [esi + 0x298], eax */ W32((u32)(r_esi+0x298u), r_eax);
    /* 005a35a1: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 005a35a4: mov dword ptr [esi + 0x29c], eax */ W32((u32)(r_esi+0x29cu), r_eax);
    /* 005a35aa: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 005a35ad: mov dword ptr [esi + 0x2a0], eax */ W32((u32)(r_esi+0x2a0u), r_eax);
    /* 005a35b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a35b4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a35b7: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5a35bcu); f_0082dc9c();
    /* 005a35bc: fld dword ptr [0x929fe0] */ FPUSH(R_F32((u32)(0x929fe0u)));
    /* 005a35c2: fdiv dword ptr [esi + 0xc8] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0xc8u));
    /* 005a35c8: mov eax, dword ptr [esi + 0x298] */ r_eax = R32((u32)(r_esi+0x298u));
    /* 005a35ce: mov edx, dword ptr [esi + 0x29c] */ r_edx = R32((u32)(r_esi+0x29cu));
    /* 005a35d4: mov ebx, dword ptr [esi + 0x2a0] */ r_ebx = R32((u32)(r_esi+0x2a0u));
    /* 005a35da: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 005a35dc: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005a35e0: fst dword ptr [esi + 0x380] */ W_F32((u32)(r_esi+0x380u), ST(0));
    /* 005a35e6: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a35e9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a35ec: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005a35f0: mov eax, dword ptr [esi + 0x2a4] */ r_eax = R32((u32)(r_esi+0x2a4u));
    /* 005a35f6: mov ecx, esi */ r_ecx = r_esi;
    /* 005a35f8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005a35fc: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005a3600: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005a3604: mov eax, dword ptr [esi + 0x2a8] */ r_eax = R32((u32)(r_esi+0x2a8u));
    /* 005a360a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005a360e: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 005a3614: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005a3618: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x5a361du); f_00771f5c();
    /* 005a361d: fld dword ptr [0xaab4f4] */ FPUSH(R_F32((u32)(0xaab4f4u)));
    /* 005a3623: fdiv dword ptr [esp + 0x20] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x20u));
    /* 005a3627: fstp dword ptr [esi + 0x310] */ W_F32((u32)(r_esi+0x310u), ST(0)); FPOP();
    /* 005a362d: mov eax, 1 */ r_eax = 0x1u;
    /* 005a3632: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_005a3639:; BB(0x005a3639);
    /* 005a3639: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a363c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a363d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a363e: ret  */ FN_RET(0x005a32b8); r_esp += 4; return;
L_005a363f:; BB(0x005a363f);
    /* 005a363f: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005a3643: jmp 0x5a341f */ goto L_005a341f;
L_005a3648:; BB(0x005a3648);
    /* 005a3648: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005a364c: jmp 0x5a341f */ goto L_005a341f;
}

void f_005a3654(void) /* sub_5A3654 */
{
    FN_ENTER(0x005a3654);
    /* 005a3654: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a3655: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a3656: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3657: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a365a: mov esi, ecx */ r_esi = r_ecx;
    /* 005a365c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a365f: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a3664: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a3667: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 005a366d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005a3670: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a3673: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005a3676: mov ecx, esi */ r_ecx = r_esi;
    /* 005a3678: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a367du); f_007aa094();
    /* 005a367d: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 005a3684: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3687: jne 0x5a38a7 */ if (!fZ) goto L_005a38a7;
L_005a368d:; BB(0x005a368d);
    /* 005a368d: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 005a3690: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 005a3696: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 005a3699: fadd dword ptr [esi + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x310u));
    /* 005a369f: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 005a36a2: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 005a36a8: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 005a36ae: fcomp dword ptr [0x929fa0] */ fx_compare(ST(0), R_F32((u32)(0x929fa0u))); FPOP();
    /* 005a36b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a36b6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005a36b8: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 005a36bb: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 005a36be: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 005a36c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a36c2: jae 0x5a36e1 */ if (!fC) goto L_005a36e1;
L_005a36c4:; BB(0x005a36c4);
    /* 005a36c4: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005a36cb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a36ce: jne 0x5a36e1 */ if (!fZ) goto L_005a36e1;
L_005a36d0:; BB(0x005a36d0);
    /* 005a36d0: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a36d5: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005a36d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a36d9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a36deu); f_0050b510();
    /* 005a36de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a36e1:; BB(0x005a36e1);
    /* 005a36e1: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a36e6: mov ecx, esi */ r_ecx = r_esi;
    /* 005a36e8: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a36edu); f_007aaa30();
    /* 005a36ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a36ef: je 0x5a3ade */ if (fZ) goto L_005a3ade;
L_005a36f5:; BB(0x005a36f5);
    /* 005a36f5: mov eax, 2 */ r_eax = 0x2u;
    /* 005a36fa: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a3701: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a3706: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a3708: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a370a: jle 0x5a37e3 */ if ((fZ||fS!=fO)) goto L_005a37e3;
L_005a3710:; BB(0x005a3710);
    /* 005a3710: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 005a3717: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3719: je 0x5a37e3 */ if (fZ) goto L_005a37e3;
L_005a371f:; BB(0x005a371f);
    /* 005a371f: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005a3723: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3729: jge 0x5a37e3 */ if ((fS==fO)) goto L_005a37e3;
L_005a372f:; BB(0x005a372f);
    /* 005a372f: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 005a3736: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3739: jne 0x5a37d8 */ if (!fZ) goto L_005a37d8;
L_005a373f:; BB(0x005a373f);
    /* 005a373f: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005a3745: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005a374b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a374c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a374d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5a3752u); f_007a9180();
    /* 005a3752: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 005a3756: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3759: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005a375d: fcomp dword ptr [0x929fb0] */ fx_compare(ST(0), R_F32((u32)(0x929fb0u))); FPOP();
    /* 005a3763: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a3765: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a3766: ja 0x5a379e */ if ((!fC&&!fZ)) goto L_005a379e;
L_005a3768:; BB(0x005a3768);
    /* 005a3768: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a376a: mov dword ptr [esp + 0x28], 0x41c80000 */ W32((u32)(r_esp+0x28u), 0x41c80000u);
    /* 005a3772: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3774: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005a3779: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 005a377d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a377e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a377f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3780: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3785: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3787: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3789: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a378a: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5a378du); call_ind(t); }
    /* 005a378d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a378f: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3792: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a3796: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3798: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005a379b: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5a379eu); call_ind(t); }
L_005a379e:; BB(0x005a379e);
    /* 005a379e: fld dword ptr [0xa74794] */ FPUSH(R_F32((u32)(0xa74794u)));
    /* 005a37a4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a37a6: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005a37aa: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a37ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a37ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a37af: jbe 0x5a37b8 */ if ((fC||fZ)) goto L_005a37b8;
L_005a37b1:; BB(0x005a37b1);
    /* 005a37b1: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a37b6: jmp 0x5a37d8 */ goto L_005a37d8;
L_005a37b8:; BB(0x005a37b8);
    /* 005a37b8: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 005a37bc: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a37c2: je 0x5a37cb */ if (fZ) goto L_005a37cb;
L_005a37c4:; BB(0x005a37c4);
    /* 005a37c4: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005a37c9: jmp 0x5a37d8 */ goto L_005a37d8;
L_005a37cb:; BB(0x005a37cb);
    /* 005a37cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a37cd: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x5a37d2u); f_004d4288();
    /* 005a37d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a37d3: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_005a37d8:; BB(0x005a37d8);
    /* 005a37d8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a37db: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a37dd: jl 0x5a3710 */ if ((fS!=fO)) goto L_005a3710;
L_005a37e3:; BB(0x005a37e3);
    /* 005a37e3: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005a37ea: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a37ed: jne 0x5a3859 */ if (!fZ) goto L_005a3859;
L_005a37ef:; BB(0x005a37ef);
    /* 005a37ef: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a37f4: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005a37f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a37f8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a37fdu); f_0050b510();
    /* 005a37fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3800: push 0x3fffc99a */ { u32 v = 0x3fffc99au; r_esp -= 4; W32(r_esp, v); }
    /* 005a3805: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 005a380c: mov dword ptr [eax + 0x48], 0x40400000 */ W32((u32)(r_eax+0x48u), 0x40400000u);
    /* 005a3813: mov ecx, eax */ r_ecx = r_eax;
    /* 005a3815: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x5a381au); f_00508ee4();
    /* 005a381a: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a381c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a381d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a3822u); f_0050b510();
    /* 005a3822: mov edi, eax */ r_edi = r_eax;
    /* 005a3824: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3827: push 0x6fffc99a */ { u32 v = 0x6fffc99au; r_esp -= 4; W32(r_esp, v); }
    /* 005a382c: mov dword ptr [edi + 0x44], 0x3f333333 */ W32((u32)(r_edi+0x44u), 0x3f333333u);
    /* 005a3833: mov dword ptr [edi + 0x48], 0x3f333333 */ W32((u32)(r_edi+0x48u), 0x3f333333u);
    /* 005a383a: mov ecx, edi */ r_ecx = r_edi;
    /* 005a383c: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x5a3841u); f_00508ee4();
    /* 005a3841: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 005a3846: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3848: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x5a384du); f_00508dac();
    /* 005a384d: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 005a3857: jmp 0x5a3875 */ goto L_005a3875;
L_005a3859:; BB(0x005a3859);
    /* 005a3859: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 005a385e: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005a3861: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3862: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a3867u); f_0050b510();
    /* 005a3867: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a386c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a386d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a3872u); f_0050b510();
    /* 005a3872: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a3875:; BB(0x005a3875);
    /* 005a3875: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a387au); f_00807ac0();
    /* 005a387a: push dword ptr [eax*4 + 0x9c01dc] */ { u32 v = R32((u32)(r_eax*4+0x9c01dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3881: mov ecx, esi */ r_ecx = r_esi;
    /* 005a3883: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a3888u); f_007879b8();
    /* 005a3888: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a388a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a388b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a388c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a388d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a388e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a3893u); f_00814298();
    /* 005a3893: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3898: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a389du); f_00814680();
    /* 005a389d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a38a0: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a38a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a38a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a38a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a38a6: ret  */ FN_RET(0x005a3654); r_esp += 4; return;
L_005a38a7:; BB(0x005a38a7);
    /* 005a38a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a38aa: jne 0x5a3900 */ if (!fZ) goto L_005a3900;
L_005a38ac:; BB(0x005a38ac);
    /* 005a38ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a38ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a38b0: mov ecx, esi */ r_ecx = r_esi;
    /* 005a38b2: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a38b7u); f_00772b44();
    /* 005a38b7: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 005a38bd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a38c0: je 0x5a3ade */ if (fZ) goto L_005a3ade;
L_005a38c6:; BB(0x005a38c6);
    /* 005a38c6: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a38c9: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 005a38cf: and eax, 0xf9dfffff */ {  u32 a = r_eax; u32 b = 0xf9dfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a38d4: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a38d7: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 005a38da: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a38dd: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005a38e0: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a38ea: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005a38ec: mov word ptr [esi + 0x344], di */ W16((u32)(r_esi+0x344u), (u16)r_edi);
    /* 005a38f3: mov dword ptr [esi + 0x37c], edi */ W32((u32)(r_esi+0x37cu), r_edi);
    /* 005a38f9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a38fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a38fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a38fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a38ff: ret  */ FN_RET(0x005a3654); r_esp += 4; return;
L_005a3900:; BB(0x005a3900);
    /* 005a3900: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005a3907: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a390a: jne 0x5a3921 */ if (!fZ) goto L_005a3921;
L_005a390c:; BB(0x005a390c);
    /* 005a390c: mov dword ptr [esp + 4], 0x42c80000 */ W32((u32)(r_esp+0x4u), 0x42c80000u);
    /* 005a3914: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3916: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a3918: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a391b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005a391f: jmp 0x5a3936 */ goto L_005a3936;
L_005a3921:; BB(0x005a3921);
    /* 005a3921: mov dword ptr [esp + 4], 0xc3fa0000 */ W32((u32)(r_esp+0x4u), 0xc3fa0000u);
    /* 005a3929: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a392b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a392e: mov dword ptr [esp + 8], 0x43480000 */ W32((u32)(r_esp+0x8u), 0x43480000u);
L_005a3936:; BB(0x005a3936);
    /* 005a3936: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005a393b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5a3940u); f_0082d990();
    /* 005a3940: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005a3943: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3945: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a394au); f_0082d8bc();
    /* 005a394a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a394d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a394e: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005a3952: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3954: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5a3959u); f_0082eab8();
    /* 005a3959: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005a395e: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5a3963u); f_0082eb80();
    /* 005a3963: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005a3967: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a396a: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 005a396d: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 005a3970: mov edi, dword ptr [esi + 0x58] */ r_edi = R32((u32)(r_esi+0x58u));
    /* 005a3973: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005a3977: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 005a397b: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 005a397f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5a3984u); f_0082f9c4();
    /* 005a3984: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a3988: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005a398c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005a3990: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005a3993: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 005a3996: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 005a3999: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a399e: mov ecx, esi */ r_ecx = r_esi;
    /* 005a39a0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a39a5u); f_007aaa30();
    /* 005a39a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a39a7: je 0x5a3ade */ if (fZ) goto L_005a3ade;
L_005a39ad:; BB(0x005a39ad);
    /* 005a39ad: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005a39b1: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 005a39b4: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 005a39b7: mov edi, dword ptr [esi + 0x58] */ r_edi = R32((u32)(r_esi+0x58u));
    /* 005a39ba: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005a39bd: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 005a39c3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005a39c7: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 005a39cb: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 005a39cf: mov dword ptr [esi + 0x2a8], ebx */ W32((u32)(r_esi+0x2a8u), r_ebx);
    /* 005a39d5: mov dword ptr [esi + 0x2ac], edi */ W32((u32)(r_esi+0x2acu), r_edi);
    /* 005a39db: mov dword ptr [esi + 0x298], edx */ W32((u32)(r_esi+0x298u), r_edx);
    /* 005a39e1: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005a39e4: mov dword ptr [esi + 0x29c], edx */ W32((u32)(r_esi+0x29cu), r_edx);
    /* 005a39ea: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005a39ed: mov dword ptr [esi + 0x2a0], edx */ W32((u32)(r_esi+0x2a0u), r_edx);
    /* 005a39f3: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005a39f6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5a39fbu); f_0082f9c4();
    /* 005a39fb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005a39ff: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005a3a03: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005a3a0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a3a0c: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 005a3a10: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005a3a14: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3a17: je 0x5a3a4c */ if (fZ) goto L_005a3a4c;
L_005a3a19:; BB(0x005a3a19);
    /* 005a3a19: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005a3a1d: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005a3a21: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a3a23: fmul qword ptr [0x929ee0] */ ST(0) = ST(0) * R_F64((u32)(0x929ee0u));
    /* 005a3a29: fdiv qword ptr [0x929ed8] */ ST(0) = ST(0) / R_F64((u32)(0x929ed8u));
    /* 005a3a2f: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 005a3a33: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 005a3a38: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a3a3d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005a3a41: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 005a3a45: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a3a48: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
L_005a3a4c:; BB(0x005a3a4c);
    /* 005a3a4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a3a4d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005a3a51: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a3a53: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005a3a57: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a3a59: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a3a5b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a3a5e: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x5a3a63u); f_0082dc9c();
    /* 005a3a63: fld dword ptr [0x929fb8] */ FPUSH(R_F32((u32)(0x929fb8u)));
    /* 005a3a69: fdiv dword ptr [esi + 0xc8] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0xc8u));
    /* 005a3a6f: mov eax, dword ptr [esi + 0x298] */ r_eax = R32((u32)(r_esi+0x298u));
    /* 005a3a75: mov edx, dword ptr [esi + 0x29c] */ r_edx = R32((u32)(r_esi+0x29cu));
    /* 005a3a7b: mov ebx, dword ptr [esi + 0x2a0] */ r_ebx = R32((u32)(r_esi+0x2a0u));
    /* 005a3a81: mov edi, dword ptr [esi + 0x2a4] */ r_edi = R32((u32)(r_esi+0x2a4u));
    /* 005a3a87: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 005a3a89: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005a3a8d: fst dword ptr [esi + 0x380] */ W_F32((u32)(r_esi+0x380u), ST(0));
    /* 005a3a93: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3a96: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a3a99: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005a3a9d: mov eax, dword ptr [esi + 0x2a8] */ r_eax = R32((u32)(r_esi+0x2a8u));
    /* 005a3aa3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005a3aa7: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005a3aab: mov ecx, esi */ r_ecx = r_esi;
    /* 005a3aad: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005a3ab1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005a3ab5: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 005a3abb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005a3abf: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x5a3ac4u); f_00771f5c();
    /* 005a3ac4: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005a3ac8: fdiv dword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x38u));
    /* 005a3acc: fstp dword ptr [esi + 0x310] */ W_F32((u32)(r_esi+0x310u), ST(0)); FPOP();
    /* 005a3ad2: mov eax, 1 */ r_eax = 0x1u;
    /* 005a3ad7: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_005a3ade:; BB(0x005a3ade);
    /* 005a3ade: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a3ae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a3ae2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a3ae3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a3ae4: ret  */ FN_RET(0x005a3654); r_esp += 4; return;
}

void f_005a3ae8(void) /* sub_5A3AE8 */
{
    FN_ENTER(0x005a3ae8);
    /* 005a3ae8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ae9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a3aea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3aeb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3aec: mov edi, ecx */ r_edi = r_ecx;
    /* 005a3aee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a3af0: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3af2: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3af7: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3afc: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b01: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5a3b04u); call_ind(t); }
    /* 005a3b04: mov esi, eax */ r_esi = r_eax;
    /* 005a3b06: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a3b08: je 0x5a3c32 */ if (fZ) goto L_005a3c32;
L_005a3b0e:; BB(0x005a3b0e);
    /* 005a3b0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b0f: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x5a3b14u); f_00794548();
    /* 005a3b14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a3b15: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005a3b18: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5a3b1du); f_00829cc8();
    /* 005a3b1d: mov ebp, dword ptr [0xaf034c] */ r_ebp = R32((u32)(0xaf034cu));
    /* 005a3b23: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 005a3b29: mov ebx, dword ptr [0xaf0364] */ r_ebx = R32((u32)(0xaf0364u));
    /* 005a3b2f: mov dword ptr [0xaab518], ebp */ W32((u32)(0xaab518u), r_ebp);
    /* 005a3b35: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 005a3b38: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 005a3b3e: mov dword ptr [0xaab500], ebx */ W32((u32)(0xaab500u), r_ebx);
    /* 005a3b44: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
    /* 005a3b4a: lea ebp, [edi + 0x3a8] */ r_ebp = (u32)(r_edi+0x3a8u);
    /* 005a3b50: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a3b52: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5a3b57u); f_005771a4();
    /* 005a3b57: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 005a3b5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a3b5d: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5a3b62u); f_0057725c();
    /* 005a3b62: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3b65: je 0x5a3c5e */ if (fZ) goto L_005a3c5e;
L_005a3b6b:; BB(0x005a3b6b);
    /* 005a3b6b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5a3b70u); f_0082fa9c();
    /* 005a3b70: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a3b75u); f_0082d7b0();
    /* 005a3b75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b77: push dword ptr [edi + 0x394] */ { u32 v = R32((u32)(r_edi+0x394u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3b7d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3b7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3b81: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5a3b86u); f_00830b74();
    /* 005a3b86: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a3b88: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a3b8du); f_0082d838();
    /* 005a3b8d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a3b90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3b92: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a3b97u); f_0082d8bc();
    /* 005a3b97: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5a3b9cu); f_004f7c84();
    /* 005a3b9c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3b9f: je 0x5a3c50 */ if (fZ) goto L_005a3c50;
L_005a3ba5:; BB(0x005a3ba5);
    /* 005a3ba5: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5a3baau); f_00578b38();
    /* 005a3baa: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3bad: je 0x5a3c44 */ if (fZ) goto L_005a3c44;
L_005a3bb3:; BB(0x005a3bb3);
    /* 005a3bb3: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3bb5: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5a3bbau); f_007aa7b8();
L_005a3bba:; BB(0x005a3bba);
    /* 005a3bba: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5a3bbfu); f_0082dab0();
L_005a3bbf:; BB(0x005a3bbf);
    /* 005a3bbf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a3bc4u); f_0082da80();
    /* 005a3bc4: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5a3bc9u); f_0082faac();
L_005a3bc9:; BB(0x005a3bc9);
    /* 005a3bc9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005a3bce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3bcf: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a3bd2: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005a3bd7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a3bd9: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5a3bdeu); f_0057725c();
    /* 005a3bde: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3be1: je 0x5a3c37 */ if (fZ) goto L_005a3c37;
L_005a3be3:; BB(0x005a3be3);
    /* 005a3be3: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 005a3be8: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 005a3bee: mov ebx, dword ptr [0xaab518] */ r_ebx = R32((u32)(0xaab518u));
    /* 005a3bf4: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005a3bf9: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 005a3bff: mov dword ptr [0xaf034c], ebx */ W32((u32)(0xaf034cu), r_ebx);
    /* 005a3c05: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5a3c0au); f_00794750();
    /* 005a3c0a: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005a3c11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005a3c13: jl 0x5a3c24 */ if ((fS!=fO)) goto L_005a3c24;
L_005a3c15:; BB(0x005a3c15);
    /* 005a3c15: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a3c18: jle 0x5a3c32 */ if ((fZ||fS!=fO)) goto L_005a3c32;
L_005a3c1a:; BB(0x005a3c1a);
    /* 005a3c1a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3c1d: jl 0x5a3c24 */ if ((fS!=fO)) goto L_005a3c24;
L_005a3c1f:; BB(0x005a3c1f);
    /* 005a3c1f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a3c22: jle 0x5a3c32 */ if ((fZ||fS!=fO)) goto L_005a3c32;
L_005a3c24:; BB(0x005a3c24);
    /* 005a3c24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c26: push 0x9c048c */ { u32 v = 0x9c048cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3c2b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3c2d: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x5a3c32u); f_00779d4c();
L_005a3c32:; BB(0x005a3c32);
    /* 005a3c32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a3c33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3c34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a3c35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a3c36: ret  */ FN_RET(0x005a3ae8); r_esp += 4; return;
L_005a3c37:; BB(0x005a3c37);
    /* 005a3c37: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 005a3c3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a3c3f: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5a3c42u); call_ind(t); }
    /* 005a3c42: jmp 0x5a3be3 */ goto L_005a3be3;
L_005a3c44:; BB(0x005a3c44);
    /* 005a3c44: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3c46: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5a3c4bu); f_007aa668();
    /* 005a3c4b: jmp 0x5a3bba */ goto L_005a3bba;
L_005a3c50:; BB(0x005a3c50);
    /* 005a3c50: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3c53: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5a3c58u); f_0082e1e8();
    /* 005a3c58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a3c59: jmp 0x5a3bbf */ goto L_005a3bbf;
L_005a3c5e:; BB(0x005a3c5e);
    /* 005a3c5e: mov edx, dword ptr [edi + 0x3a8] */ r_edx = R32((u32)(r_edi+0x3a8u));
    /* 005a3c64: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a3c66: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5a3c69u); call_ind(t); }
    /* 005a3c69: mov ecx, edi */ r_ecx = r_edi;
    /* 005a3c6b: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5a3c70u); f_008173d0();
    /* 005a3c70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3c72: jne 0x5a3bc9 */ if (!fZ) goto L_005a3bc9;
L_005a3c78:; BB(0x005a3c78);
    /* 005a3c78: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005a3c7e: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a3c81: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005a3c87: jmp 0x5a3b6b */ goto L_005a3b6b;
}

void f_005a3c8c(void) /* sub_5A3C8C */
{
    FN_ENTER(0x005a3c8c);
    /* 005a3c8c: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005a3c93: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3c96: je 0x5a3c9e */ if (fZ) goto L_005a3c9e;
L_005a3c98:; BB(0x005a3c98);
    /* 005a3c98: call 0x7879e0 */ r_esp -= 4; W32(r_esp, 0x5a3c9du); f_007879e0();
L_005a3c9d:; BB(0x005a3c9d);
    /* 005a3c9d: ret  */ FN_RET(0x005a3c8c); r_esp += 4; return;
L_005a3c9e:; BB(0x005a3c9e);
    /* 005a3c9e: movsx eax, word ptr [ecx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x330u));
    /* 005a3ca5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a3ca8: jne 0x5a3c9d */ if (!fZ) goto L_005a3c9d;
L_005a3caa:; BB(0x005a3caa);
    /* 005a3caa: jmp 0x5a3c98 */ goto L_005a3c98;
}

void f_005a3cac(void) /* sub_5A3CAC */
{
    FN_ENTER(0x005a3cac);
    /* 005a3cac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3cad: mov eax, dword ptr [0xa747bc] */ r_eax = R32((u32)(0xa747bcu));
    /* 005a3cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3cb4: je 0x5a3cc7 */ if (fZ) goto L_005a3cc7;
L_005a3cb6:; BB(0x005a3cb6);
    /* 005a3cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3cb7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5a3cbcu); f_00857e98();
    /* 005a3cbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a3cbd: mov dword ptr [0xa747bc], 0 */ W32((u32)(0xa747bcu), 0x0u);
L_005a3cc7:; BB(0x005a3cc7);
    /* 005a3cc7: mov eax, dword ptr [0xa747b8] */ r_eax = R32((u32)(0xa747b8u));
    /* 005a3ccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3cce: je 0x5a3ce1 */ if (fZ) goto L_005a3ce1;
L_005a3cd0:; BB(0x005a3cd0);
    /* 005a3cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3cd1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5a3cd6u); f_00857e98();
    /* 005a3cd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a3cd7: mov dword ptr [0xa747b8], 0 */ W32((u32)(0xa747b8u), 0x0u);
L_005a3ce1:; BB(0x005a3ce1);
    /* 005a3ce1: mov eax, dword ptr [0xa747b4] */ r_eax = R32((u32)(0xa747b4u));
    /* 005a3ce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3ce8: je 0x5a3cfb */ if (fZ) goto L_005a3cfb;
L_005a3cea:; BB(0x005a3cea);
    /* 005a3cea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ceb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5a3cf0u); f_00857e98();
    /* 005a3cf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a3cf1: mov dword ptr [0xa747b4], 0 */ W32((u32)(0xa747b4u), 0x0u);
L_005a3cfb:; BB(0x005a3cfb);
    /* 005a3cfb: mov eax, dword ptr [0xa747b0] */ r_eax = R32((u32)(0xa747b0u));
    /* 005a3d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3d02: je 0x5a3d15 */ if (fZ) goto L_005a3d15;
L_005a3d04:; BB(0x005a3d04);
    /* 005a3d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d05: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5a3d0au); f_00857e98();
    /* 005a3d0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a3d0b: mov dword ptr [0xa747b0], 0 */ W32((u32)(0xa747b0u), 0x0u);
L_005a3d15:; BB(0x005a3d15);
    /* 005a3d15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3d17: mov ebx, eax */ r_ebx = r_eax;
L_005a3d19:; BB(0x005a3d19);
    /* 005a3d19: mov ecx, dword ptr [ebx + 0xa747c0] */ r_ecx = R32((u32)(r_ebx+0xa747c0u));
    /* 005a3d1f: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a3d22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3d24: je 0x5a3d39 */ if (fZ) goto L_005a3d39;
L_005a3d26:; BB(0x005a3d26);
    /* 005a3d26: je 0x5a3d2f */ if (fZ) goto L_005a3d2f;
L_005a3d28:; BB(0x005a3d28);
    /* 005a3d28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d2a: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5a3d2fu); f_0045a950();
L_005a3d2f:; BB(0x005a3d2f);
    /* 005a3d2f: mov dword ptr [ebx + 0xa747bc], 0 */ W32((u32)(r_ebx+0xa747bcu), 0x0u);
L_005a3d39:; BB(0x005a3d39);
    /* 005a3d39: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005a3d3c: jb 0x5a3d19 */ if (fC) goto L_005a3d19;
L_005a3d3e:; BB(0x005a3d3e);
    /* 005a3d3e: mov ecx, dword ptr [0xa747ac] */ r_ecx = R32((u32)(0xa747acu));
    /* 005a3d44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a3d46: je 0x5a3d5b */ if (fZ) goto L_005a3d5b;
L_005a3d48:; BB(0x005a3d48);
    /* 005a3d48: je 0x5a3d51 */ if (fZ) goto L_005a3d51;
L_005a3d4a:; BB(0x005a3d4a);
    /* 005a3d4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d4c: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5a3d51u); f_004066a8();
L_005a3d51:; BB(0x005a3d51);
    /* 005a3d51: mov dword ptr [0xa747ac], 0 */ W32((u32)(0xa747acu), 0x0u);
L_005a3d5b:; BB(0x005a3d5b);
    /* 005a3d5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a3d5c: ret  */ FN_RET(0x005a3cac); r_esp += 4; return;
}

void f_005a3d60(void)
{
    FN_ENTER(0x005a3d60);
    /* 005a3d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d65: push 0x8d88a6 */ { u32 v = 0x8d88a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a3d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a3d78: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3d7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a3d7e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005a3d81: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005a3d84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a3d87: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3d89: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005a3d90: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a3d95u); f_005caba4();
    /* 005a3d95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a3d96: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a3d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3d9b: je 0x5a3e23 */ if (fZ) goto L_005a3e23;
L_005a3da1:; BB(0x005a3da1);
    /* 005a3da1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005a3da8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a3daf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3db5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a3db8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5a3dbdu); f_00787a4c();
    /* 005a3dbd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a3dc0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005a3dc7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005a3dca:; BB(0x005a3dca);
    /* 005a3dca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a3dd1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005a3dd8: push 0x418 */ { u32 v = 0x418u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ddd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a3de2u); f_005caba4();
    /* 005a3de2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a3de3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a3de6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3de8: je 0x5a3e1f */ if (fZ) goto L_005a3e1f;
L_005a3dea:; BB(0x005a3dea);
    /* 005a3dea: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005a3df1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a3df8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3dfb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a3dfe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3e01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e02: call 0x5a3e2c */ r_esp -= 4; W32(r_esp, 0x5a3e07u); f_005a3e2c();
    /* 005a3e07: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3e0a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005a3e11:; BB(0x005a3e11);
    /* 005a3e11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a3e14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a3e1b: mov esp, ebp */ r_esp = r_ebp;
    /* 005a3e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a3e1e: ret  */ FN_RET(0x005a3d60); r_esp += 4; return;
L_005a3e1f:; BB(0x005a3e1f);
    /* 005a3e1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a3e21: jmp 0x5a3e11 */ goto L_005a3e11;
L_005a3e23:; BB(0x005a3e23);
    /* 005a3e23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3e25: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a3e28: jmp 0x5a3dca */ goto L_005a3dca;
}

void f_005a3e2c(void) /* sub_5A3E2C */
{
    FN_ENTER(0x005a3e2c);
    /* 005a3e2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e2d: mov ebp, esp */ r_ebp = r_esp;
    /* 005a3e2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e31: push 0x8d88de */ { u32 v = 0x8d88deu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a3e3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a3e44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a3e47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a3e4a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005a3e4d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005a3e50: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a3e53: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a3e56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a3e59: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a3e5c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a3e5f: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x5a3e64u); f_007865e8();
    /* 005a3e64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a3e6b: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e70: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e75: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3e78: mov dword ptr [eax], 0xb0a420 */ W32((u32)(r_eax), 0xb0a420u);
    /* 005a3e7e: add eax, 0x3a8 */ {  u32 a = r_eax; u32 b = 0x3a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a3e83: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e85: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3e88: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5a3e8du); f_00858736();
    /* 005a3e8d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a3e94: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3e97: mov eax, dword ptr [0x9c0424] */ r_eax = R32((u32)(0x9c0424u));
    /* 005a3e9c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a3e9f: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005a3ea1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005a3ea4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ea5: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5a3eabu); call_ind(t); }
    /* 005a3eab: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3eae: fld dword ptr [0x929f88] */ FPUSH(R_F32((u32)(0x929f88u)));
    /* 005a3eb4: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005a3eb7: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 005a3eba: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 005a3ebd: mov dword ptr [esi + 0x2a4], edx */ W32((u32)(r_esi+0x2a4u), r_edx);
    /* 005a3ec3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3ec6: mov dword ptr [esi + 0x2a8], ecx */ W32((u32)(r_esi+0x2a8u), r_ecx);
    /* 005a3ecc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3ecf: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 005a3ed5: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 005a3edb: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005a3ee1: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 005a3ee7: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 005a3eed: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005a3ef3: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 005a3ef9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3efc: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005a3f02: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 005a3f05: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 005a3f0b: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 005a3f0e: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 005a3f14: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005a3f17: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 005a3f1d: fadd dword ptr [0x929f80] */ ST(0) = ST(0) + R_F32((u32)(0x929f80u));
    /* 005a3f23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3f25: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005a3f2c: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 005a3f33: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a3f35: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a3f37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a3f38: jae 0x5a3f46 */ if (!fC) goto L_005a3f46;
L_005a3f3a:; BB(0x005a3f3a);
    /* 005a3f3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a3f3c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3f3e: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 005a3f44: jmp 0x5a3f5d */ goto L_005a3f5d;
L_005a3f46:; BB(0x005a3f46);
    /* 005a3f46: fld dword ptr [0x929f84] */ FPUSH(R_F32((u32)(0x929f84u)));
    /* 005a3f4c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a3f4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a3f50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a3f51: ja 0x5a3f55 */ if ((!fC&&!fZ)) goto L_005a3f55;
L_005a3f53:; BB(0x005a3f53);
    /* 005a3f53: fst st(1) */ ST(1) = ST(0);
L_005a3f55:; BB(0x005a3f55);
    /* 005a3f55: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a3f57: fstp dword ptr [ecx + 0x398] */ W_F32((u32)(r_ecx+0x398u), ST(0)); FPOP();
L_005a3f5d:; BB(0x005a3f5d);
    /* 005a3f5d: fld dword ptr [ecx + 0x364] */ FPUSH(R_F32((u32)(r_ecx+0x364u)));
    /* 005a3f63: fadd dword ptr [0x929f7c] */ ST(0) = ST(0) + R_F32((u32)(0x929f7cu));
    /* 005a3f69: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a3f6b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a3f6d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a3f6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a3f71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a3f72: jae 0x5a3f80 */ if (!fC) goto L_005a3f80;
L_005a3f74:; BB(0x005a3f74);
    /* 005a3f74: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a3f76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3f78: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 005a3f7e: jmp 0x5a3f97 */ goto L_005a3f97;
L_005a3f80:; BB(0x005a3f80);
    /* 005a3f80: fld dword ptr [0x929f84] */ FPUSH(R_F32((u32)(0x929f84u)));
    /* 005a3f86: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a3f88: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a3f8a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a3f8b: ja 0x5a3f8f */ if ((!fC&&!fZ)) goto L_005a3f8f;
L_005a3f8d:; BB(0x005a3f8d);
    /* 005a3f8d: fst st(1) */ ST(1) = ST(0);
L_005a3f8f:; BB(0x005a3f8f);
    /* 005a3f8f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a3f91: fstp dword ptr [ecx + 0x39c] */ W_F32((u32)(r_ecx+0x39cu), ST(0)); FPOP();
L_005a3f97:; BB(0x005a3f97);
    /* 005a3f97: call 0x5a4158 */ r_esp -= 4; W32(r_esp, 0x5a3f9cu); f_005a4158();
    /* 005a3f9c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3f9f: call 0x5a41a0 */ r_esp -= 4; W32(r_esp, 0x5a3fa4u); f_005a41a0();
    /* 005a3fa4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3fa7: mov eax, dword ptr [0xa747ac] */ r_eax = R32((u32)(0xa747acu));
    /* 005a3fac: mov dword ptr [ecx + 0x33c], 1 */ W32((u32)(r_ecx+0x33cu), 0x1u);
    /* 005a3fb6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a3fb8: mov dword ptr [ecx + 0xd8], 0x9c0160 */ W32((u32)(r_ecx+0xd8u), 0x9c0160u);
    /* 005a3fc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3fc3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005a3fc9: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005a3fcf: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005a3fd6: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5a3fdbu); f_007aa4c8();
    /* 005a3fdb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3fde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3fe0: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005a3fe7: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a3fee: push 0x9c0460 */ { u32 v = 0x9c0460u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3ff3: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5a3ff8u); f_007b9a88();
    /* 005a3ff8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a3ffb: mov ebx, dword ptr [0xa747bc] */ r_ebx = R32((u32)(0xa747bcu));
    /* 005a4001: mov edx, dword ptr [0xa747b8] */ r_edx = R32((u32)(0xa747b8u));
    /* 005a4007: mov esi, dword ptr [ecx + 0x370] */ r_esi = R32((u32)(r_ecx+0x370u));
    /* 005a400d: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 005a4010: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a4012: mov dword ptr [ecx + 0x388], 1 */ W32((u32)(r_ecx+0x388u), 0x1u);
    /* 005a401c: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 005a401f: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a4021: mov edi, dword ptr [0xa747b4] */ r_edi = R32((u32)(0xa747b4u));
    /* 005a4027: push dword ptr [edi + esi*4] */ { u32 v = R32((u32)(r_edi+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005a402a: push dword ptr [eax + edx + 4] */ { u32 v = R32((u32)(r_eax+r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a402e: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4031: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5a4036u); f_007868f8();
    /* 005a4036: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a4039: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 005a403f: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 005a4046: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a4048: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a404a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005a404d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a404f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a4051: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a4053: lea ebx, [edx + 0x9c0428] */ r_ebx = (u32)(r_edx+0x9c0428u);
    /* 005a4059: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 005a405f: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 005a4066: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a406bu); f_0078730c();
    /* 005a406b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a406e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a4071: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a4077: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a407d: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005a4083: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a4086: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a4089: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005a408c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5a4091u); f_007b4f54();
    /* 005a4091: push 0xa303030 */ { u32 v = 0xa303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4096: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a4099: mov edx, dword ptr [ebx + 0x2e8] */ r_edx = R32((u32)(r_ebx+0x2e8u));
    /* 005a409f: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005a40a2: mov dword ptr [ebx + 0x38c], 0xffffffff */ W32((u32)(r_ebx+0x38cu), 0xffffffffu);
    /* 005a40ac: or ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005a40b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a40b4: mov dword ptr [ebx + 0x390], 1 */ W32((u32)(r_ebx+0x390u), 0x1u);
    /* 005a40be: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005a40c3: mov word ptr [ebx + 0x342], ax */ W16((u32)(r_ebx+0x342u), (u16)r_eax);
    /* 005a40ca: mov dword ptr [ebx + 0x394], 0 */ W32((u32)(r_ebx+0x394u), 0x0u);
    /* 005a40d4: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 005a40db: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 005a40e1: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a40e4: mov dword ptr [ebx + 0x2e8], edx */ W32((u32)(r_ebx+0x2e8u), r_edx);
    /* 005a40ea: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 005a40ed: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5a40f2u); f_00578cc4();
    /* 005a40f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a40f5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a40f8: mov dword ptr [ecx + 0x3a4], eax */ W32((u32)(r_ecx+0x3a4u), r_eax);
    /* 005a40fe: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a4100:; BB(0x005a4100);
    /* 005a4100: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005a4103: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a4105: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005a4108: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a410a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a410c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a410e: lea ecx, [ecx + edx + 0x3a8] */ r_ecx = (u32)(r_ecx+r_edx+0x3a8u);
    /* 005a4115: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5a411au); f_0057739c();
    /* 005a411a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a411d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4120: jge 0x5a4127 */ if ((fS==fO)) goto L_005a4127;
L_005a4122:; BB(0x005a4122);
    /* 005a4122: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a4125: jmp 0x5a4100 */ goto L_005a4100;
L_005a4127:; BB(0x005a4127);
    /* 005a4127: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a412a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a412c: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5a4132u); call_ind(t); }
    /* 005a4132: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a4135: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a4138: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a413b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a413e: mov byte ptr [eax + 0x3a0], 0 */ W8((u32)(r_eax+0x3a0u), 0x0u);
    /* 005a4145: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4148: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a414f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a4151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4152: ret 8 */ FN_RET(0x005a3e2c); r_esp += 12; return;
}

