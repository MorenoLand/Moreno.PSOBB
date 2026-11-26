#include "protos.h"

void f_006b3014(void)
{
    FN_ENTER(0x006b3014);
    /* 006b3014: movzx edx, word ptr [0xa954cc] */ r_edx = (u32)R16((u32)(0xa954ccu));
    /* 006b301b: movzx eax, word ptr [0xa954d0] */ r_eax = (u32)R16((u32)(0xa954d0u));
    /* 006b3022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3023: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3024: call 0x7b3c24 */ r_esp -= 4; W32(r_esp, 0x6b3029u); f_007b3c24();
    /* 006b3029: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b302c: ret  */ FN_RET(0x006b3014); r_esp += 4; return;
}

void f_006b3030(void) /* sub_6B3030 */
{
    FN_ENTER(0x006b3030);
    /* 006b3030: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3033: movzx ecx, byte ptr [esp + 0x28] */ r_ecx = (u32)R8((u32)(r_esp+0x28u));
    /* 006b3038: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b303e: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b3041: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b3044: fild dword ptr [edx + ecx*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4+0x4u)));
    /* 006b3048: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b304c: fild dword ptr [edx + ecx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4+0x8u)));
    /* 006b3050: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b3054: fild dword ptr [edx + ecx*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4+0xcu)));
    /* 006b3058: movzx ecx, word ptr [edx + ecx*4 + 0x10] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*4+0x10u));
    /* 006b305d: fmul dword ptr [0x969964] */ ST(0) = ST(0) * R_F32((u32)(0x969964u));
    /* 006b3063: fdiv dword ptr [0x969960] */ ST(0) = ST(0) / R_F32((u32)(0x969960u));
    /* 006b3069: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006b306d: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006b3072: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b3077: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b307b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006b307f: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b3083: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006b3087: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b308a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006b308e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b308f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3090: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3091: call 0x7b3a34 */ r_esp -= 4; W32(r_esp, 0x6b3096u); f_007b3a34();
    /* 006b3096: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3099: ret  */ FN_RET(0x006b3030); r_esp += 4; return;
}

void f_006b309c(void) /* sub_6B309C */
{
    FN_ENTER(0x006b309c);
    /* 006b309c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b309d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b30a0: mov ebp, dword ptr [0xa954cc] */ r_ebp = R32((u32)(0xa954ccu));
    /* 006b30a6: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b30ac: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b30b2: fild dword ptr [ecx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_ebp*4)));
    /* 006b30b5: fcom dword ptr [0x96995c] */ fx_compare(ST(0), R_F32((u32)(0x96995cu))); 
    /* 006b30bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006b30bd: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b30c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006b30c2: je 0x6b3126 */ if (fZ) goto L_006b3126;
L_006b30c4:; BB(0x006b30c4);
    /* 006b30c4: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006b30c8: fdivr dword ptr [0x969958] */ ST(0) = R_F32((u32)(0x969958u)) / ST(0);
    /* 006b30ce: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b30d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b30d3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b30d8u); f_0068d5a8();
    /* 006b30d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b30d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b30db: je 0x6b3115 */ if (fZ) goto L_006b3115;
L_006b30dd:; BB(0x006b30dd);
    /* 006b30dd: movsx edx, word ptr [eax + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 006b30e4: movsx ecx, word ptr [eax + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bcu));
    /* 006b30eb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b30ee: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006b30f1: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006b30f5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006b30f9: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006b30fb: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 006b30ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006b3101: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006b3102: jae 0x6b3115 */ if (!fC) goto L_006b3115;
L_006b3104:; BB(0x006b3104);
    /* 006b3104: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3109: mov dword ptr [eax + ebp*4], 1 */ W32((u32)(r_eax+r_ebp*4), 0x1u);
    /* 006b3110: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3113: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3114: ret  */ FN_RET(0x006b309c); r_esp += 4; return;
L_006b3115:; BB(0x006b3115);
    /* 006b3115: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b311a: mov dword ptr [eax + ebp*4], 0 */ W32((u32)(r_eax+r_ebp*4), 0x0u);
    /* 006b3121: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3124: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3125: ret  */ FN_RET(0x006b309c); r_esp += 4; return;
L_006b3126:; BB(0x006b3126);
    /* 006b3126: mov dword ptr [ecx + ebp*4], 0 */ W32((u32)(r_ecx+r_ebp*4), 0x0u);
    /* 006b312d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3131: ret  */ FN_RET(0x006b309c); r_esp += 4; return;
}

void f_006b3134(void)
{
    FN_ENTER(0x006b3134);
    /* 006b3134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b3135: mov ebp, dword ptr [0xa954cc] */ r_ebp = R32((u32)(0xa954ccu));
    /* 006b313b: push dword ptr [0xa954d0] */ { u32 v = R32((u32)(0xa954d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3141: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b3146u); f_0068d5a8();
    /* 006b3146: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b3149: je 0x6b317f */ if (fZ) goto L_006b317f;
L_006b314b:; BB(0x006b314b);
    /* 006b314b: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006b3152: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b3155: je 0x6b317f */ if (fZ) goto L_006b317f;
L_006b3157:; BB(0x006b3157);
    /* 006b3157: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b315a: jne 0x6b3174 */ if (!fZ) goto L_006b3174;
L_006b315c:; BB(0x006b315c);
    /* 006b315c: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 006b315f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b3164: je 0x6b317f */ if (fZ) goto L_006b317f;
L_006b3166:; BB(0x006b3166);
    /* 006b3166: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b316b: mov dword ptr [eax + ebp*4], 1 */ W32((u32)(r_eax+r_ebp*4), 0x1u);
    /* 006b3172: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3173: ret  */ FN_RET(0x006b3134); r_esp += 4; return;
L_006b3174:; BB(0x006b3174);
    /* 006b3174: mov ecx, eax */ r_ecx = r_eax;
    /* 006b3176: call 0x6926bc */ r_esp -= 4; W32(r_esp, 0x6b317bu); f_006926bc();
    /* 006b317b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b317d: jne 0x6b318d */ if (!fZ) goto L_006b318d;
L_006b317f:; BB(0x006b317f);
    /* 006b317f: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3184: mov dword ptr [eax + ebp*4], 0 */ W32((u32)(r_eax+r_ebp*4), 0x0u);
    /* 006b318b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b318c: ret  */ FN_RET(0x006b3134); r_esp += 4; return;
L_006b318d:; BB(0x006b318d);
    /* 006b318d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3192: mov dword ptr [eax + ebp*4], 1 */ W32((u32)(r_eax+r_ebp*4), 0x1u);
    /* 006b3199: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b319a: ret  */ FN_RET(0x006b3134); r_esp += 4; return;
}

void f_006b319c(void)
{
    FN_ENTER(0x006b319c);
    /* 006b319c: call 0x6e96e0 */ r_esp -= 4; W32(r_esp, 0x6b31a1u); f_006e96e0();
    /* 006b31a1: push 0x6b0b8c */ { u32 v = 0x6b0b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b31a6: call 0x69271c */ r_esp -= 4; W32(r_esp, 0x6b31abu); f_0069271c();
    /* 006b31ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b31ac: ret  */ FN_RET(0x006b319c); r_esp += 4; return;
}

void f_006b31b0(void)
{
    FN_ENTER(0x006b31b0);
    /* 006b31b0: push 0x6b0b98 */ { u32 v = 0x6b0b98u; r_esp -= 4; W32(r_esp, v); }
    /* 006b31b5: call 0x69271c */ r_esp -= 4; W32(r_esp, 0x6b31bau); f_0069271c();
    /* 006b31ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b31bb: ret  */ FN_RET(0x006b31b0); r_esp += 4; return;
}

void f_006b31bc(void) /* sub_6B31BC */
{
    FN_ENTER(0x006b31bc);
    /* 006b31bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b31bd: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b31c0: movzx ebx, word ptr [0xa954cc] */ r_ebx = (u32)R16((u32)(0xa954ccu));
    /* 006b31c7: movzx edx, byte ptr [0xa954d0] */ r_edx = (u32)R8((u32)(0xa954d0u));
    /* 006b31ce: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b31d4: fild dword ptr [ecx + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_edx*4)));
    /* 006b31d7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b31da: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006b31dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b31e0: fild dword ptr [ecx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_eax*4)));
    /* 006b31e3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b31e7: lea eax, [edx + 2] */ r_eax = (u32)(r_edx+0x2u);
    /* 006b31ea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b31ed: fild dword ptr [ecx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_eax*4)));
    /* 006b31f0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b31f4: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b31f7: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b31fa: fild dword ptr [ecx + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_edx*4)));
    /* 006b31fd: fmul dword ptr [0x969954] */ ST(0) = ST(0) * R_F32((u32)(0x969954u));
    /* 006b3203: fdiv dword ptr [0x969950] */ ST(0) = ST(0) / R_F32((u32)(0x969950u));
    /* 006b3209: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b320c: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006b3210: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006b3215: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b321a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b321e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006b3222: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b3226: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006b322a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006b322e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b322f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3230: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3231: call 0x688ee4 */ r_esp -= 4; W32(r_esp, 0x6b3236u); f_00688ee4();
    /* 006b3236: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3237: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b323cu); f_0068d5a8();
    /* 006b323c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b323f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3241: je 0x6b3256 */ if (fZ) goto L_006b3256;
L_006b3243:; BB(0x006b3243);
    /* 006b3243: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3249: jne 0x6b3256 */ if (!fZ) goto L_006b3256;
L_006b324b:; BB(0x006b324b);
    /* 006b324b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b324d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b324e: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x6b3253u); f_004d2fb4();
    /* 006b3253: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006b3256:; BB(0x006b3256);
    /* 006b3256: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3259: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b325a: ret  */ FN_RET(0x006b31bc); r_esp += 4; return;
}

void f_006b325c(void)
{
    FN_ENTER(0x006b325c);
    /* 006b325c: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b3263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3264: call 0x6e874c */ r_esp -= 4; W32(r_esp, 0x6b3269u); f_006e874c();
    /* 006b3269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b326a: ret  */ FN_RET(0x006b325c); r_esp += 4; return;
}

void f_006b326c(void) /* sub_6B326C */
{
    FN_ENTER(0x006b326c);
    /* 006b326c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b326f: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b3274: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3279: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b327c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b327f: fild dword ptr [eax + edx*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x4u)));
    /* 006b3283: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b3286: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b328a: fild dword ptr [eax + edx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x8u)));
    /* 006b328e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b3292: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3293: movzx eax, word ptr [eax + edx*4 + 0xc] */ r_eax = (u32)R16((u32)(r_eax+r_edx*4+0xcu));
    /* 006b3298: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3299: call 0x6e87f0 */ r_esp -= 4; W32(r_esp, 0x6b329eu); f_006e87f0();
    /* 006b329e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b32a1: ret  */ FN_RET(0x006b326c); r_esp += 4; return;
}

void f_006b32a4(void) /* sub_6B32A4 */
{
    FN_ENTER(0x006b32a4);
    /* 006b32a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b32a5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b32ab: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b32b0u); f_0068d5a8();
    /* 006b32b0: mov ebx, eax */ r_ebx = r_eax;
    /* 006b32b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b32b5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b32b7: je 0x6b32c7 */ if (fZ) goto L_006b32c7;
L_006b32b9:; BB(0x006b32b9);
    /* 006b32b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b32bb: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x6b32c0u); f_00688d3c();
    /* 006b32c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b32c2: call 0x68cd90 */ r_esp -= 4; W32(r_esp, 0x6b32c7u); f_0068cd90();
L_006b32c7:; BB(0x006b32c7);
    /* 006b32c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b32c8: ret  */ FN_RET(0x006b32a4); r_esp += 4; return;
}

void f_006b32cc(void)
{
    FN_ENTER(0x006b32cc);
    /* 006b32cc: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b32d1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b32d6: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 006b32d9: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b32dc: movsx ecx, word ptr [eax + ecx*4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_ecx*4));
    /* 006b32e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b32e1: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b32e4: call 0x8115f0 */ r_esp -= 4; W32(r_esp, 0x6b32e9u); f_008115f0();
    /* 006b32e9: mov edx, eax */ r_edx = r_eax;
    /* 006b32eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b32ee: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b32f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b32f5: je 0x6b3304 */ if (fZ) goto L_006b3304;
L_006b32f7:; BB(0x006b32f7);
    /* 006b32f7: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b32fc: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b3303: ret  */ FN_RET(0x006b32cc); r_esp += 4; return;
L_006b3304:; BB(0x006b3304);
    /* 006b3304: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b3309: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b3310: ret  */ FN_RET(0x006b32cc); r_esp += 4; return;
}

void f_006b3314(void)
{
    FN_ENTER(0x006b3314);
    /* 006b3314: call 0x811690 */ r_esp -= 4; W32(r_esp, 0x6b3319u); f_00811690();
    /* 006b3319: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b331f: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b3324: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b3327: ret  */ FN_RET(0x006b3314); r_esp += 4; return;
}

void f_006b3328(void)
{
    FN_ENTER(0x006b3328);
    /* 006b3328: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3329: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b332e: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 006b3331: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b3337: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b333c: movsx esi, word ptr [eax + esi*4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+r_esi*4));
    /* 006b3340: lea ecx, [edx + 2] */ r_ecx = (u32)(r_edx+0x2u);
    /* 006b3343: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3346: movsx ecx, word ptr [eax + ecx*4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_ecx*4));
    /* 006b334a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b334b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b334c: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b334f: call 0x810c7c */ r_esp -= 4; W32(r_esp, 0x6b3354u); f_00810c7c();
    /* 006b3354: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3357: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3358: ret  */ FN_RET(0x006b3328); r_esp += 4; return;
}

void f_006b335c(void)
{
    FN_ENTER(0x006b335c);
    /* 006b335c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b335d: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b3362: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 006b3365: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006b336b: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3370: movsx esi, word ptr [eax + esi*4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+r_esi*4));
    /* 006b3374: lea ecx, [edx + 2] */ r_ecx = (u32)(r_edx+0x2u);
    /* 006b3377: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b337a: movsx ecx, word ptr [eax + ecx*4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_ecx*4));
    /* 006b337e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b337f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3380: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3383: call 0x810fe4 */ r_esp -= 4; W32(r_esp, 0x6b3388u); f_00810fe4();
    /* 006b3388: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b338b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b338c: ret  */ FN_RET(0x006b335c); r_esp += 4; return;
}

void f_006b3390(void)
{
    FN_ENTER(0x006b3390);
    /* 006b3390: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3391: mov ebx, esp */ r_ebx = r_esp;
    /* 006b3393: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 006b3396: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3399: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006b339d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b339e: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x6b33a3u); f_0083ace8();
    /* 006b33a3: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 006b33a7: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006b33ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b33ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b33ad: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x6b33b2u); f_0083ad44();
    /* 006b33b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b33b5: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b33bb: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006b33bf: movzx ecx, byte ptr [ebx + 8] */ r_ecx = (u32)R8((u32)(r_ebx+0x8u));
    /* 006b33c3: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b33c6: mov eax, dword ptr [0xa955c0] */ r_eax = R32((u32)(0xa955c0u));
    /* 006b33cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b33cd: je 0x6b343c */ if (fZ) goto L_006b343c;
L_006b33cf:; BB(0x006b33cf);
    /* 006b33cf: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006b33d3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b33d5: jae 0x6b3440 */ if (!fC) goto L_006b3440;
L_006b33d7:; BB(0x006b33d7);
    /* 006b33d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b33d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b33d9: call 0x859c67 */ r_esp -= 4; W32(r_esp, 0x6b33deu); f_00859c67();
    /* 006b33de: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b33e2: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 006b33e6: fabs  */ ST(0) = fabsl(ST(0));
    /* 006b33e8: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b33ec: push dword ptr [0xa955bc] */ { u32 v = R32((u32)(0xa955bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b33f2: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b33f6: call 0x859c67 */ r_esp -= 4; W32(r_esp, 0x6b33fbu); f_00859c67();
    /* 006b33fb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006b33fe: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006b3402: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 006b3405: fcomp qword ptr [0x969910] */ fx_compare(ST(0), R_F64((u32)(0x969910u))); FPOP();
    /* 006b340b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006b340d: mov dword ptr [0xa955bc], edx */ W32((u32)(0xa955bcu), r_edx);
    /* 006b3413: fabs  */ ST(0) = fabsl(ST(0));
    /* 006b3415: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006b3416: ja 0x6b3423 */ if ((!fC&&!fZ)) goto L_006b3423;
L_006b3418:; BB(0x006b3418);
    /* 006b3418: fcom qword ptr [0x969908] */ fx_compare(ST(0), R_F64((u32)(0x969908u))); 
    /* 006b341e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006b3420: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006b3421: ja 0x6b344a */ if ((!fC&&!fZ)) goto L_006b344a;
L_006b3423:; BB(0x006b3423);
    /* 006b3423: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006b3425: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 006b342b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b342d: je 0x6b3440 */ if (fZ) goto L_006b3440;
L_006b342f:; BB(0x006b342f);
    /* 006b342f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b3431: call 0x7f2ebc */ r_esp -= 4; W32(r_esp, 0x6b3436u); f_007f2ebc();
    /* 006b3436: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006b343a: jmp 0x6b3440 */ goto L_006b3440;
L_006b343c:; BB(0x006b343c);
    /* 006b343c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_006b3440:; BB(0x006b3440);
    /* 006b3440: mov dword ptr [0xa955c0], edx */ W32((u32)(0xa955c0u), r_edx);
    /* 006b3446: mov esp, ebx */ r_esp = r_ebx;
    /* 006b3448: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3449: ret  */ FN_RET(0x006b3390); r_esp += 4; return;
L_006b344a:; BB(0x006b344a);
    /* 006b344a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006b344c: jmp 0x6b3440 */ goto L_006b3440;
}

void f_006b3450(void) /* sub_6B3450 */
{
    FN_ENTER(0x006b3450);
    /* 006b3450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3451: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3454: movzx ebx, byte ptr [esp + 0x44] */ r_ebx = (u32)R8((u32)(r_esp+0x44u));
    /* 006b3459: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b345c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b345d: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b3462u); f_0080ca60();
    /* 006b3462: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3467: fild dword ptr [eax + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebx*4)));
    /* 006b346a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b346e: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 006b3471: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3474: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b3477: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b347b: lea ecx, [ebx + 2] */ r_ecx = (u32)(r_ebx+0x2u);
    /* 006b347e: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3481: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b3484: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b3488: lea edx, [ebx + 3] */ r_edx = (u32)(r_ebx+0x3u);
    /* 006b348b: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b348e: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b3491: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b3495: lea edx, [ebx + 4] */ r_edx = (u32)(r_ebx+0x4u);
    /* 006b3498: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b349b: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b349e: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 006b34a1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b34a3: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b34a7: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b34ab: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b34ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b34ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b34af: call 0x661fc8 */ r_esp -= 4; W32(r_esp, 0x6b34b4u); f_00661fc8();
    /* 006b34b4: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b34b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b34b8: ret  */ FN_RET(0x006b3450); r_esp += 4; return;
}

void f_006b34bc(void) /* sub_6B34BC */
{
    FN_ENTER(0x006b34bc);
    /* 006b34bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b34bd: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b34c0: movzx ebx, byte ptr [esp + 0x44] */ r_ebx = (u32)R8((u32)(r_esp+0x44u));
    /* 006b34c5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b34c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b34c9: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b34ceu); f_0080ca60();
    /* 006b34ce: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b34d3: fild dword ptr [eax + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebx*4)));
    /* 006b34d6: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b34da: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 006b34dd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b34e0: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b34e3: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b34e7: lea ecx, [ebx + 2] */ r_ecx = (u32)(r_ebx+0x2u);
    /* 006b34ea: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b34ed: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b34f0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b34f4: lea edx, [ebx + 3] */ r_edx = (u32)(r_ebx+0x3u);
    /* 006b34f7: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b34fa: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b34fd: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b3501: lea edx, [ebx + 4] */ r_edx = (u32)(r_ebx+0x4u);
    /* 006b3504: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3507: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b350a: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 006b350d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b350f: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b3513: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b3517: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b3519: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b351a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b351b: call 0x6621b0 */ r_esp -= 4; W32(r_esp, 0x6b3520u); f_006621b0();
    /* 006b3520: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3523: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3524: ret  */ FN_RET(0x006b34bc); r_esp += 4; return;
}

void f_006b3528(void) /* sub_6B3528 */
{
    FN_ENTER(0x006b3528);
    /* 006b3528: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3529: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b352c: movzx ebx, byte ptr [esp + 0x44] */ r_ebx = (u32)R8((u32)(r_esp+0x44u));
    /* 006b3531: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b3534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3535: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b353au); f_0080ca60();
    /* 006b353a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b353f: fild dword ptr [eax + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebx*4)));
    /* 006b3542: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b3546: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 006b3549: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b354c: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b354f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b3553: lea ecx, [ebx + 2] */ r_ecx = (u32)(r_ebx+0x2u);
    /* 006b3556: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3559: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b355c: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b3560: lea edx, [ebx + 3] */ r_edx = (u32)(r_ebx+0x3u);
    /* 006b3563: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3566: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b3569: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b356d: lea edx, [ebx + 4] */ r_edx = (u32)(r_ebx+0x4u);
    /* 006b3570: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3573: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b3576: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 006b3579: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b357b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b357f: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b3583: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b3585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3586: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3587: call 0x662474 */ r_esp -= 4; W32(r_esp, 0x6b358cu); f_00662474();
    /* 006b358c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b358f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3590: ret  */ FN_RET(0x006b3528); r_esp += 4; return;
}

void f_006b3594(void) /* sub_6B3594 */
{
    FN_ENTER(0x006b3594);
    /* 006b3594: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3595: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3598: movzx edi, byte ptr [esp + 0x44] */ r_edi = (u32)R8((u32)(r_esp+0x44u));
    /* 006b359d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b35a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b35a1: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b35a6u); f_0080ca60();
    /* 006b35a6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b35ab: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b35ae: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b35b2: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 006b35b5: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b35b8: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b35bb: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b35bf: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 006b35c2: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b35c5: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b35c8: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b35cc: lea edx, [edi + 3] */ r_edx = (u32)(r_edi+0x3u);
    /* 006b35cf: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b35d2: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b35d5: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b35d9: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 006b35dc: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b35df: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b35e2: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006b35e6: lea edx, [edi + 5] */ r_edx = (u32)(r_edi+0x5u);
    /* 006b35e9: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b35ec: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b35ef: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b35f3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b35f7: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 006b35fa: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b35fc: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b35fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b35ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3600: call 0x6625cc */ r_esp -= 4; W32(r_esp, 0x6b3605u); f_006625cc();
    /* 006b3605: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3608: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b3609: ret  */ FN_RET(0x006b3594); r_esp += 4; return;
}

void f_006b360c(void) /* sub_6B360C */
{
    FN_ENTER(0x006b360c);
    /* 006b360c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b360d: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3610: movzx edi, byte ptr [esp + 0x44] */ r_edi = (u32)R8((u32)(r_esp+0x44u));
    /* 006b3615: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b3618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3619: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b361eu); f_0080ca60();
    /* 006b361e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3623: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b3626: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b362a: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 006b362d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3630: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b3633: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b3637: lea ecx, [edi + 2] */ r_ecx = (u32)(r_edi+0x2u);
    /* 006b363a: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b363d: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b3640: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b3644: lea edx, [edi + 3] */ r_edx = (u32)(r_edi+0x3u);
    /* 006b3647: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006b364b: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b364e: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b3651: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b3655: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 006b3658: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b365b: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b365e: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b3662: movzx edx, byte ptr [esp + 0x4c] */ r_edx = (u32)R8((u32)(r_esp+0x4cu));
    /* 006b3667: lea edi, [edi + 5] */ r_edi = (u32)(r_edi+0x5u);
    /* 006b366a: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b3670: fild dword ptr [eax + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edi*4)));
    /* 006b3673: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006b3677: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 006b367a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b367c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b367e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b367f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3680: call 0x6622f4 */ r_esp -= 4; W32(r_esp, 0x6b3685u); f_006622f4();
    /* 006b3685: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3688: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b3689: ret  */ FN_RET(0x006b360c); r_esp += 4; return;
}

void f_006b368c(void) /* sub_6B368C */
{
    FN_ENTER(0x006b368c);
    /* 006b368c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b368d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b368e: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3691: movzx ebp, byte ptr [esp + 0x48] */ r_ebp = (u32)R8((u32)(r_esp+0x48u));
    /* 006b3696: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b3699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b369a: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b369fu); f_0080ca60();
    /* 006b369f: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b36a4: fild dword ptr [eax + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebp*4)));
    /* 006b36a7: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b36ab: lea ebx, [ebp + 1] */ r_ebx = (u32)(r_ebp+0x1u);
    /* 006b36ae: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b36b1: fild dword ptr [eax + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ebx*4)));
    /* 006b36b4: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b36b8: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 006b36bb: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b36be: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b36c1: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b36c5: lea ecx, [ebp + 3] */ r_ecx = (u32)(r_ebp+0x3u);
    /* 006b36c8: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b36cb: fild dword ptr [eax + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_ecx*4)));
    /* 006b36ce: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b36d2: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006b36d6: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 006b36d9: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b36dc: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b36df: lea ebx, [ebp + 6] */ r_ebx = (u32)(r_ebp+0x6u);
    /* 006b36e2: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006b36e6: lea edx, [ebp + 5] */ r_edx = (u32)(r_ebp+0x5u);
    /* 006b36e9: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b36ec: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b36ef: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006b36f3: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 006b36f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b36f9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b36fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b36fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b36fd: call 0x662798 */ r_esp -= 4; W32(r_esp, 0x6b3702u); f_00662798();
    /* 006b3702: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b3705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3707: je 0x6b373e */ if (fZ) goto L_006b373e;
L_006b3709:; BB(0x006b3709);
    /* 006b3709: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b370f: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b3712: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b3715: lea ecx, [ebp + 7] */ r_ecx = (u32)(r_ebp+0x7u);
    /* 006b3718: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b371b: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b371e: lea ebp, [ebp + 8] */ r_ebp = (u32)(r_ebp+0x8u);
    /* 006b3721: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b3727: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b372a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006b372c: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 006b3732: fstp dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0)); FPOP();
    /* 006b3738: fstp dword ptr [eax + 0xc8] */ W_F32((u32)(r_eax+0xc8u), ST(0)); FPOP();
L_006b373e:; BB(0x006b373e);
    /* 006b373e: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3741: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3742: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3743: ret  */ FN_RET(0x006b368c); r_esp += 4; return;
}

void f_006b3744(void)
{
    FN_ENTER(0x006b3744);
    /* 006b3744: call 0x66283c */ r_esp -= 4; W32(r_esp, 0x6b3749u); f_0066283c();
    /* 006b3749: ret  */ FN_RET(0x006b3744); r_esp += 4; return;
}

void f_006b374c(void)
{
    FN_ENTER(0x006b374c);
    /* 006b374c: call 0x7b3ebc */ r_esp -= 4; W32(r_esp, 0x6b3751u); f_007b3ebc();
    /* 006b3751: ret  */ FN_RET(0x006b374c); r_esp += 4; return;
}

void f_006b3754(void)
{
    FN_ENTER(0x006b3754);
    /* 006b3754: call 0x7b3ee0 */ r_esp -= 4; W32(r_esp, 0x6b3759u); f_007b3ee0();
    /* 006b3759: ret  */ FN_RET(0x006b3754); r_esp += 4; return;
}

void f_006b375c(void)
{
    FN_ENTER(0x006b375c);
    /* 006b375c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3762: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6b3767u); f_00717f08();
    /* 006b3767: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3768: call 0x8055e4 */ r_esp -= 4; W32(r_esp, 0x6b376du); f_008055e4();
    /* 006b376d: ret  */ FN_RET(0x006b375c); r_esp += 4; return;
}

void f_006b3770(void)
{
    FN_ENTER(0x006b3770);
    /* 006b3770: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3776: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x6b377bu); f_00717ed8();
    /* 006b377b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b377c: call 0x8055c0 */ r_esp -= 4; W32(r_esp, 0x6b3781u); f_008055c0();
    /* 006b3781: ret  */ FN_RET(0x006b3770); r_esp += 4; return;
}

void f_006b3784(void)
{
    FN_ENTER(0x006b3784);
    /* 006b3784: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b3786: call 0x77f3fc */ r_esp -= 4; W32(r_esp, 0x6b378bu); f_0077f3fc();
    /* 006b378b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b378c: ret  */ FN_RET(0x006b3784); r_esp += 4; return;
}

void f_006b3790(void)
{
    FN_ENTER(0x006b3790);
    /* 006b3790: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b3792: call 0x77f430 */ r_esp -= 4; W32(r_esp, 0x6b3797u); f_0077f430();
    /* 006b3797: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3798: ret  */ FN_RET(0x006b3790); r_esp += 4; return;
}

void f_006b379c(void)
{
    FN_ENTER(0x006b379c);
    /* 006b379c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b379d: mov ebp, esp */ r_ebp = r_esp;
    /* 006b379f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b37a1: push 0x8ebea2 */ { u32 v = 0x8ebea2u; r_esp -= 4; W32(r_esp, v); }
    /* 006b37a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b37ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b37ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b37b4: sub esp, 0x41c */ {  u32 a = r_esp; u32 b = 0x41cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b37ba: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b37bd: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006b37c0: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006b37c3: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006b37c6: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b37cb: mov dword ptr [ebp - 0x428], 0 */ W32((u32)(r_ebp+0xfffffbd8u), 0x0u);
    /* 006b37d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b37d8: push 0x20a8 */ { u32 v = 0x20a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b37dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b37e2u); f_005caba4();
    /* 006b37e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b37e3: mov dword ptr [ebp - 0x424], eax */ W32((u32)(r_ebp+0xfffffbdcu), r_eax);
    /* 006b37e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b37eb: je 0x6b3891 */ if (fZ) goto L_006b3891;
L_006b37f1:; BB(0x006b37f1);
    /* 006b37f1: mov dword ptr [ebp - 0x428], 1 */ W32((u32)(r_ebp+0xfffffbd8u), 0x1u);
    /* 006b37fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b3802: mov ecx, dword ptr [ebp - 0x424] */ r_ecx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 006b3808: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b380a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b380b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b380c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b380d: call 0x815cc0 */ r_esp -= 4; W32(r_esp, 0x6b3812u); f_00815cc0();
    /* 006b3812: mov ebx, dword ptr [ebp - 0x424] */ r_ebx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 006b3818: mov dword ptr [ebp - 0x428], 0 */ W32((u32)(r_ebp+0xfffffbd8u), 0x0u);
L_006b3822:; BB(0x006b3822);
    /* 006b3822: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b3829: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b382c: lea esi, [ebp - 0x420] */ r_esi = (u32)(r_ebp+0xfffffbe0u);
    /* 006b3832: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b3837: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b3839: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 006b383d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b383e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b383f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6b3844u); f_00857dec();
    /* 006b3844: lea eax, [ebp - 0x420] */ r_eax = (u32)(r_ebp+0xfffffbe0u);
    /* 006b384a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b384b: call 0x815844 */ r_esp -= 4; W32(r_esp, 0x6b3850u); f_00815844();
    /* 006b3850: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b3853: lea eax, [ebp - 0x420] */ r_eax = (u32)(r_ebp+0xfffffbe0u);
    /* 006b3859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b385a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b385c: call 0x8159e4 */ r_esp -= 4; W32(r_esp, 0x6b3861u); f_008159e4();
    /* 006b3861: mov eax, dword ptr [ebx + 0x209c] */ r_eax = R32((u32)(r_ebx+0x209cu));
    /* 006b3867: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b386a: je 0x6b3871 */ if (fZ) goto L_006b3871;
L_006b386c:; BB(0x006b386c);
    /* 006b386c: jmp 0x6b386c */ goto L_006b386c;
L_006b3871:; BB(0x006b3871);
    /* 006b3871: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b3873: je 0x6b387d */ if (fZ) goto L_006b387d;
L_006b3875:; BB(0x006b3875);
    /* 006b3875: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b3877: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006b3879: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b387b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6b387du); call_ind(t); }
L_006b387d:; BB(0x006b387d);
    /* 006b387d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b3880: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b3883: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b3886: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b388d: mov esp, ebp */ r_esp = r_ebp;
    /* 006b388f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3890: ret  */ FN_RET(0x006b379c); r_esp += 4; return;
L_006b3891:; BB(0x006b3891);
    /* 006b3891: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006b3893: jmp 0x6b3822 */ goto L_006b3822;
}

void f_006b3898(void)
{
    FN_ENTER(0x006b3898);
    /* 006b3898: push dword ptr [0xa954d0] */ { u32 v = R32((u32)(0xa954d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b389e: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b38a4: call 0x7b3e5c */ r_esp -= 4; W32(r_esp, 0x6b38a9u); f_007b3e5c();
    /* 006b38a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b38ac: ret  */ FN_RET(0x006b3898); r_esp += 4; return;
}

void f_006b38b0(void)
{
    FN_ENTER(0x006b38b0);
    /* 006b38b0: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b38b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b38b8: je 0x6b38c7 */ if (fZ) goto L_006b38c7;
L_006b38ba:; BB(0x006b38ba);
    /* 006b38ba: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b38be: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b38c3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b38c7:; BB(0x006b38c7);
    /* 006b38c7: call 0x6651b4 */ r_esp -= 4; W32(r_esp, 0x6b38ccu); f_006651b4();
    /* 006b38cc: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b38d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b38d4: je 0x6b38e3 */ if (fZ) goto L_006b38e3;
L_006b38d6:; BB(0x006b38d6);
    /* 006b38d6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b38da: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b38df: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b38e3:; BB(0x006b38e3);
    /* 006b38e3: ret  */ FN_RET(0x006b38b0); r_esp += 4; return;
}

void f_006b38e4(void)
{
    FN_ENTER(0x006b38e4);
    /* 006b38e4: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b38ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b38ec: je 0x6b38fb */ if (fZ) goto L_006b38fb;
L_006b38ee:; BB(0x006b38ee);
    /* 006b38ee: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b38f2: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b38f7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b38fb:; BB(0x006b38fb);
    /* 006b38fb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6b3900u); f_0061cdb0();
    /* 006b3900: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b3906: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b3908: je 0x6b3917 */ if (fZ) goto L_006b3917;
L_006b390a:; BB(0x006b390a);
    /* 006b390a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b390e: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b3913: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b3917:; BB(0x006b3917);
    /* 006b3917: ret  */ FN_RET(0x006b38e4); r_esp += 4; return;
}

void f_006b3918(void)
{
    FN_ENTER(0x006b3918);
    /* 006b3918: call 0x7b3dc0 */ r_esp -= 4; W32(r_esp, 0x6b391du); f_007b3dc0();
    /* 006b391d: ret  */ FN_RET(0x006b3918); r_esp += 4; return;
}

void f_006b3920(void)
{
    FN_ENTER(0x006b3920);
    /* 006b3920: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3926: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b392bu); f_0068d5a8();
    /* 006b392b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b392c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b392e: je 0x6b3939 */ if (fZ) goto L_006b3939;
L_006b3930:; BB(0x006b3930);
    /* 006b3930: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b3932: mov ecx, eax */ r_ecx = r_eax;
    /* 006b3934: call 0x693598 */ r_esp -= 4; W32(r_esp, 0x6b3939u); f_00693598();
L_006b3939:; BB(0x006b3939);
    /* 006b3939: ret  */ FN_RET(0x006b3920); r_esp += 4; return;
}

void f_006b393c(void)
{
    FN_ENTER(0x006b393c);
    /* 006b393c: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3942: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b3947u); f_0068d5a8();
    /* 006b3947: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b394a: je 0x6b3953 */ if (fZ) goto L_006b3953;
L_006b394c:; BB(0x006b394c);
    /* 006b394c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b394d: call 0x6cafb8 */ r_esp -= 4; W32(r_esp, 0x6b3952u); f_006cafb8();
    /* 006b3952: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b3953:; BB(0x006b3953);
    /* 006b3953: ret  */ FN_RET(0x006b393c); r_esp += 4; return;
}

void f_006b3954(void) /* sub_6B3954 */
{
    FN_ENTER(0x006b3954);
    /* 006b3954: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3955: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3958: movzx esi, byte ptr [esp + 0x50] */ r_esi = (u32)R8((u32)(r_esp+0x50u));
    /* 006b395d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b3960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3961: call 0x80ca60 */ r_esp -= 4; W32(r_esp, 0x6b3966u); f_0080ca60();
    /* 006b3966: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b396c: fild dword ptr [edx + esi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_esi*4)));
    /* 006b396f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b3973: fild dword ptr [edx + esi*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_esi*4+0x4u)));
    /* 006b3977: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b397b: fild dword ptr [edx + esi*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_esi*4+0x8u)));
    /* 006b397f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b3983: fild dword ptr [edx + esi*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_esi*4+0xcu)));
    /* 006b3987: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006b398b: fild dword ptr [edx + esi*4 + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_esi*4+0x10u)));
    /* 006b398f: fmul dword ptr [0x96994c] */ ST(0) = ST(0) * R_F32((u32)(0x96994cu));
    /* 006b3995: fdiv dword ptr [0x969948] */ ST(0) = ST(0) / R_F32((u32)(0x969948u));
    /* 006b399b: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 006b399f: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 006b39a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b39a9: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006b39ad: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 006b39b1: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b39b5: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 006b39b9: mov eax, dword ptr [edx + esi*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_esi*4+0x14u));
    /* 006b39bd: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006b39c1: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b39c5: mov ecx, dword ptr [edx + esi*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x18u));
    /* 006b39c9: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 006b39cd: mov esi, dword ptr [edx + esi*4 + 0x1c] */ r_esi = R32((u32)(r_edx+r_esi*4+0x1cu));
    /* 006b39d1: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 006b39d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b39d6: call 0x65a3b4 */ r_esp -= 4; W32(r_esp, 0x6b39dbu); f_0065a3b4();
    /* 006b39db: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b39de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b39df: ret  */ FN_RET(0x006b3954); r_esp += 4; return;
}

void f_006b39e0(void)
{
    FN_ENTER(0x006b39e0);
    /* 006b39e0: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b39e6: call 0x65a4d0 */ r_esp -= 4; W32(r_esp, 0x6b39ebu); f_0065a4d0();
    /* 006b39eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b39ec: ret  */ FN_RET(0x006b39e0); r_esp += 4; return;
}

void f_006b39f0(void)
{
    FN_ENTER(0x006b39f0);
    /* 006b39f0: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b39f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b39f8: call 0x816dd8 */ r_esp -= 4; W32(r_esp, 0x6b39fdu); f_00816dd8();
    /* 006b39fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b39fe: ret  */ FN_RET(0x006b39f0); r_esp += 4; return;
}

void f_006b3a00(void)
{
    FN_ENTER(0x006b3a00);
    /* 006b3a00: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b3a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3a08: call 0x816e60 */ r_esp -= 4; W32(r_esp, 0x6b3a0du); f_00816e60();
    /* 006b3a0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3a0e: ret  */ FN_RET(0x006b3a00); r_esp += 4; return;
}

void f_006b3a10(void)
{
    FN_ENTER(0x006b3a10);
    /* 006b3a10: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3a16: call 0x6b0b78 */ r_esp -= 4; W32(r_esp, 0x6b3a1bu); f_006b0b78();
    /* 006b3a1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3a1c: ret  */ FN_RET(0x006b3a10); r_esp += 4; return;
}

void f_006b3a20(void)
{
    FN_ENTER(0x006b3a20);
    /* 006b3a20: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3a26: call 0x6b0b48 */ r_esp -= 4; W32(r_esp, 0x6b3a2bu); f_006b0b48();
    /* 006b3a2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3a2c: ret  */ FN_RET(0x006b3a20); r_esp += 4; return;
}

void f_006b3a30(void)
{
    FN_ENTER(0x006b3a30);
    /* 006b3a30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3a31: mov edi, dword ptr [0xa954cc] */ r_edi = R32((u32)(0xa954ccu));
    /* 006b3a37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3a38: call 0x64ab70 */ r_esp -= 4; W32(r_esp, 0x6b3a3du); f_0064ab70();
    /* 006b3a3d: mov dword ptr [0xa8f534], edi */ W32((u32)(0xa8f534u), r_edi);
    /* 006b3a43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3a44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b3a45: ret  */ FN_RET(0x006b3a30); r_esp += 4; return;
}

void f_006b3a48(void)
{
    FN_ENTER(0x006b3a48);
    /* 006b3a48: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3a4e: call 0x64aa88 */ r_esp -= 4; W32(r_esp, 0x6b3a53u); f_0064aa88();
    /* 006b3a53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3a54: ret  */ FN_RET(0x006b3a48); r_esp += 4; return;
}

void f_006b3a58(void)
{
    FN_ENTER(0x006b3a58);
    /* 006b3a58: call 0x64ab00 */ r_esp -= 4; W32(r_esp, 0x6b3a5du); f_0064ab00();
    /* 006b3a5d: ret  */ FN_RET(0x006b3a58); r_esp += 4; return;
}

void f_006b3a60(void) /* sub_6B3A60 */
{
    FN_ENTER(0x006b3a60);
    /* 006b3a60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3a63: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b3a68: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3a6d: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b3a70: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b3a73: fild dword ptr [eax + edx*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x4u)));
    /* 006b3a77: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006b3a7b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b3a7f: fild dword ptr [eax + edx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x8u)));
    /* 006b3a83: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b3a87: fild dword ptr [eax + edx*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0xcu)));
    /* 006b3a8b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b3a8f: fild dword ptr [eax + edx*4 + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x10u)));
    /* 006b3a93: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b3a97: fild dword ptr [eax + edx*4 + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x14u)));
    /* 006b3a9b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b3a9e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b3aa2: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b3aa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3aa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3aa9: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x6b3aaeu); f_004d85bc();
    /* 006b3aae: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3ab1: ret  */ FN_RET(0x006b3a60); r_esp += 4; return;
}

void f_006b3ab4(void)
{
    FN_ENTER(0x006b3ab4);
    /* 006b3ab4: movzx eax, word ptr [0xa954d0] */ r_eax = (u32)R16((u32)(0xa954d0u));
    /* 006b3abb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b3abc: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3ac2: call 0x6bc734 */ r_esp -= 4; W32(r_esp, 0x6b3ac7u); f_006bc734();
    /* 006b3ac7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3aca: ret  */ FN_RET(0x006b3ab4); r_esp += 4; return;
}

void f_006b3acc(void)
{
    FN_ENTER(0x006b3acc);
    /* 006b3acc: push dword ptr [0xa954cc] */ { u32 v = R32((u32)(0xa954ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3ad2: call 0x6bc750 */ r_esp -= 4; W32(r_esp, 0x6b3ad7u); f_006bc750();
    /* 006b3ad7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3ad8: ret  */ FN_RET(0x006b3acc); r_esp += 4; return;
}

void f_006b3adc(void)
{
    FN_ENTER(0x006b3adc);
    /* 006b3adc: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b3ae1: mov dword ptr [0xa95f68], eax */ W32((u32)(0xa95f68u), r_eax);
    /* 006b3ae6: ret  */ FN_RET(0x006b3adc); r_esp += 4; return;
}

void f_006b3ae8(void)
{
    FN_ENTER(0x006b3ae8);
    /* 006b3ae8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b3aed: mov dword ptr [0xa95f6c], eax */ W32((u32)(0xa95f6cu), r_eax);
    /* 006b3af2: ret  */ FN_RET(0x006b3ae8); r_esp += 4; return;
}

void f_006b3af4(void) /* sub_6B3AF4 */
{
    FN_ENTER(0x006b3af4);
    /* 006b3af4: mov dword ptr [0xa95f68], 0xffffffff */ W32((u32)(0xa95f68u), 0xffffffffu);
    /* 006b3afe: ret  */ FN_RET(0x006b3af4); r_esp += 4; return;
}

void f_006b3b00(void) /* sub_6B3B00 */
{
    FN_ENTER(0x006b3b00);
    /* 006b3b00: mov dword ptr [0xa95f6c], 0xffffffff */ W32((u32)(0xa95f6cu), 0xffffffffu);
    /* 006b3b0a: ret  */ FN_RET(0x006b3b00); r_esp += 4; return;
}

void f_006b3b0c(void) /* sub_6B3B0C */
{
    FN_ENTER(0x006b3b0c);
    /* 006b3b0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3b0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3b0e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3b11: mov esi, dword ptr [0xa954cc] */ r_esi = R32((u32)(0xa954ccu));
    /* 006b3b17: mov edi, dword ptr [0xa954d0] */ r_edi = R32((u32)(0xa954d0u));
    /* 006b3b1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3b1e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b3b23u); f_0068d5a8();
    /* 006b3b23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3b24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3b26: je 0x6b3b5d */ if (fZ) goto L_006b3b5d;
L_006b3b28:; BB(0x006b3b28);
    /* 006b3b28: cmp esi, dword ptr [0xa9c4f4] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3b2e: jne 0x6b3b55 */ if (!fZ) goto L_006b3b55;
L_006b3b30:; BB(0x006b3b30);
    /* 006b3b30: mov byte ptr [esp], 0xc9 */ W8((u32)(r_esp), 0xc9u);
    /* 006b3b34: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b3b39: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b3b3e: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006b3b43: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b3b47: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b3b4a: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b3b4fu); f_00800518();
    /* 006b3b4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3b52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3b53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b3b54: ret  */ FN_RET(0x006b3b0c); r_esp += 4; return;
L_006b3b55:; BB(0x006b3b55);
    /* 006b3b55: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3b56: mov ecx, eax */ r_ecx = r_eax;
    /* 006b3b58: call 0x770d30 */ r_esp -= 4; W32(r_esp, 0x6b3b5du); f_00770d30();
L_006b3b5d:; BB(0x006b3b5d);
    /* 006b3b5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3b60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3b61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b3b62: ret  */ FN_RET(0x006b3b0c); r_esp += 4; return;
}

void f_006b3b64(void) /* sub_6B3B64 */
{
    FN_ENTER(0x006b3b64);
    /* 006b3b64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3b65: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3b68: mov ebx, dword ptr [0xa954cc] */ r_ebx = R32((u32)(0xa954ccu));
    /* 006b3b6e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3b74: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b3b79u); f_0068d5a8();
    /* 006b3b79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3b7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3b7c: je 0x6b3b9d */ if (fZ) goto L_006b3b9d;
L_006b3b7e:; BB(0x006b3b7e);
    /* 006b3b7e: mov byte ptr [esp], 0xc9 */ W8((u32)(r_esp), 0xc9u);
    /* 006b3b82: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b3b87: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b3b8c: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006b3b91: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006b3b95: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b3b98: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b3b9du); f_00800518();
L_006b3b9d:; BB(0x006b3b9d);
    /* 006b3b9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3ba0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3ba1: ret  */ FN_RET(0x006b3b64); r_esp += 4; return;
}

void f_006b3ba4(void)
{
    FN_ENTER(0x006b3ba4);
    /* 006b3ba4: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b3ba9: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3bae: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3bb1: call 0x662950 */ r_esp -= 4; W32(r_esp, 0x6b3bb6u); f_00662950();
    /* 006b3bb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3bb7: ret  */ FN_RET(0x006b3ba4); r_esp += 4; return;
}

void f_006b3bb8(void) /* sub_6B3BB8 */
{
    FN_ENTER(0x006b3bb8);
    /* 006b3bb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b3bb9: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3bbc: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3bc2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b3bc7u); f_0068d5a8();
    /* 006b3bc7: mov ebp, eax */ r_ebp = r_eax;
    /* 006b3bc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b3bcc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3bce: jne 0x6b3be6 */ if (!fZ) goto L_006b3be6;
L_006b3bd0:; BB(0x006b3bd0);
    /* 006b3bd0: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3bd5: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 006b3bda: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b3be1: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3be4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3be5: ret  */ FN_RET(0x006b3bb8); r_esp += 4; return;
L_006b3be6:; BB(0x006b3be6);
    /* 006b3be6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b3be9: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b3beeu); f_005d6a3c();
    /* 006b3bee: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3bf3: movzx edx, byte ptr [esp + 0x34] */ r_edx = (u32)R8((u32)(r_esp+0x34u));
    /* 006b3bf8: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b3bfb: movzx edx, byte ptr [esp + 0x34] */ r_edx = (u32)R8((u32)(r_esp+0x34u));
    /* 006b3c00: lea edx, [edx + 1] */ r_edx = (u32)(r_edx+0x1u);
    /* 006b3c03: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3c06: mov byte ptr [esp], cl */ W8((u32)(r_esp), (u8)r_ecx);
    /* 006b3c09: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b3c0c: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b3c10: movzx edx, byte ptr [esp + 0x34] */ r_edx = (u32)R8((u32)(r_esp+0x34u));
    /* 006b3c15: lea edx, [edx + 2] */ r_edx = (u32)(r_edx+0x2u);
    /* 006b3c18: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3c1b: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 006b3c1e: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b3c22: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006b3c29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3c2a: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6b3c2fu); f_005e3aac();
    /* 006b3c2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3c30: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006b3c34: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b3c37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3c38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b3c3a: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6b3c3fu); f_0068ec44();
    /* 006b3c3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b3c41: jle 0x6b3c9e */ if ((fZ||fS!=fO)) goto L_006b3c9e;
L_006b3c43:; BB(0x006b3c43);
    /* 006b3c43: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006b3c46: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 006b3c4a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006b3c4e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b3c53: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 006b3c58: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b3c5c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b3c60: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006b3c64: mov byte ptr [esp + 0x14], 0xca */ W8((u32)(r_esp+0x14u), 0xcau);
    /* 006b3c69: mov byte ptr [esp + 0x15], 6 */ W8((u32)(r_esp+0x15u), 0x6u);
    /* 006b3c6e: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006b3c72: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006b3c76: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006b3c7a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006b3c7e: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 006b3c82: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b3c87u); f_00800518();
    /* 006b3c87: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b3c8d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b3c91: movzx ecx, byte ptr [esp + 0x38] */ r_ecx = (u32)R8((u32)(r_esp+0x38u));
    /* 006b3c96: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b3c99: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3c9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3c9d: ret  */ FN_RET(0x006b3bb8); r_esp += 4; return;
L_006b3c9e:; BB(0x006b3c9e);
    /* 006b3c9e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3ca3: movzx edx, byte ptr [esp + 0x38] */ r_edx = (u32)R8((u32)(r_esp+0x38u));
    /* 006b3ca8: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b3caf: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3cb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3cb3: ret  */ FN_RET(0x006b3bb8); r_esp += 4; return;
}

void f_006b3cb4(void) /* sub_6B3CB4 */
{
    FN_ENTER(0x006b3cb4);
    /* 006b3cb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3cb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b3cb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3cb7: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3cba: movzx ebp, byte ptr [esp + 0x3c] */ r_ebp = (u32)R8((u32)(r_esp+0x3cu));
    /* 006b3cbf: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3cc5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b3ccau); f_0068d5a8();
    /* 006b3cca: mov esi, eax */ r_esi = r_eax;
    /* 006b3ccc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b3ccf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3cd1: jne 0x6b3ceb */ if (!fZ) goto L_006b3ceb;
L_006b3cd3:; BB(0x006b3cd3);
    /* 006b3cd3: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3cd8: movzx edx, byte ptr [esp + 0x40] */ r_edx = (u32)R8((u32)(r_esp+0x40u));
    /* 006b3cdd: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b3ce4: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3ce7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3ce8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3ce9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3cea: ret  */ FN_RET(0x006b3cb4); r_esp += 4; return;
L_006b3ceb:; BB(0x006b3ceb);
    /* 006b3ceb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b3cee: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b3cf3u); f_005d6a3c();
    /* 006b3cf3: mov ebx, dword ptr [0xa954b0] */ r_ebx = R32((u32)(0xa954b0u));
    /* 006b3cf9: mov edx, dword ptr [ebx + ebp*4] */ r_edx = R32((u32)(r_ebx+r_ebp*4));
    /* 006b3cfc: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 006b3cff: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 006b3d02: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3d05: mov edx, dword ptr [ebx + ecx*4] */ r_edx = R32((u32)(r_ebx+r_ecx*4));
    /* 006b3d08: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 006b3d0c: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 006b3d0f: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3d12: mov edx, dword ptr [ebx + edx*4] */ r_edx = R32((u32)(r_ebx+r_edx*4));
    /* 006b3d15: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b3d19: lea edx, [ebp + 3] */ r_edx = (u32)(r_ebp+0x3u);
    /* 006b3d1c: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3d1f: mov edx, dword ptr [ebx + edx*4] */ r_edx = R32((u32)(r_ebx+r_edx*4));
    /* 006b3d22: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 006b3d26: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 006b3d29: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3d2c: mov edx, dword ptr [ebx + edx*4] */ r_edx = R32((u32)(r_ebx+r_edx*4));
    /* 006b3d2f: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 006b3d33: lea edx, [ebp + 5] */ r_edx = (u32)(r_ebp+0x5u);
    /* 006b3d36: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006b3d39: mov edx, dword ptr [ebx + edx*4] */ r_edx = R32((u32)(r_ebx+r_edx*4));
    /* 006b3d3c: lea ebx, [ebp + 6] */ r_ebx = (u32)(r_ebp+0x6u);
    /* 006b3d3f: mov byte ptr [esp + 5], dl */ W8((u32)(r_esp+0x5u), (u8)r_edx);
    /* 006b3d43: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006b3d4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3d4b: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6b3d50u); f_005e3aac();
    /* 006b3d50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b3d51: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b3d57: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006b3d5b: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b3d5e: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 006b3d61: mov byte ptr [esp + 6], cl */ W8((u32)(r_esp+0x6u), (u8)r_ecx);
    /* 006b3d65: lea ecx, [ebp + 7] */ r_ecx = (u32)(r_ebp+0x7u);
    /* 006b3d68: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3d6b: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b3d6e: mov byte ptr [esp + 7], cl */ W8((u32)(r_esp+0x7u), (u8)r_ecx);
    /* 006b3d72: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 006b3d75: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3d78: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b3d7b: mov byte ptr [esp + 8], cl */ W8((u32)(r_esp+0x8u), (u8)r_ecx);
    /* 006b3d7f: lea ecx, [ebp + 9] */ r_ecx = (u32)(r_ebp+0x9u);
    /* 006b3d82: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3d85: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b3d88: mov byte ptr [esp + 9], cl */ W8((u32)(r_esp+0x9u), (u8)r_ecx);
    /* 006b3d8c: lea ecx, [ebp + 0xa] */ r_ecx = (u32)(r_ebp+0xau);
    /* 006b3d8f: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3d92: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b3d95: lea ebp, [ebp + 0xb] */ r_ebp = (u32)(r_ebp+0xbu);
    /* 006b3d98: mov byte ptr [esp + 0xa], cl */ W8((u32)(r_esp+0xau), (u8)r_ecx);
    /* 006b3d9c: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b3da2: mov edx, dword ptr [edx + ebp*4] */ r_edx = R32((u32)(r_edx+r_ebp*4));
    /* 006b3da5: mov byte ptr [esp + 0xb], dl */ W8((u32)(r_esp+0xbu), (u8)r_edx);
    /* 006b3da9: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b3dac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3dad: mov ecx, esi */ r_ecx = r_esi;
    /* 006b3daf: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6b3db4u); f_0068ec44();
    /* 006b3db4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b3db6: jle 0x6b3e15 */ if ((fZ||fS!=fO)) goto L_006b3e15;
L_006b3db8:; BB(0x006b3db8);
    /* 006b3db8: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006b3dbb: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006b3dbf: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006b3dc3: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006b3dc7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006b3dcb: mov byte ptr [esp + 0x14], 0xca */ W8((u32)(r_esp+0x14u), 0xcau);
    /* 006b3dd0: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b3dd5: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 006b3dda: mov byte ptr [esp + 0x15], 6 */ W8((u32)(r_esp+0x15u), 0x6u);
    /* 006b3ddf: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b3de3: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 006b3de7: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 006b3deb: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 006b3def: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 006b3df3: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 006b3df7: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6b3dfcu); f_00800518();
    /* 006b3dfc: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b3e02: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b3e06: movzx ecx, byte ptr [esp + 0x40] */ r_ecx = (u32)R8((u32)(r_esp+0x40u));
    /* 006b3e0b: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b3e0e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3e11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3e12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3e13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3e14: ret  */ FN_RET(0x006b3cb4); r_esp += 4; return;
L_006b3e15:; BB(0x006b3e15);
    /* 006b3e15: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3e1a: movzx edx, byte ptr [esp + 0x40] */ r_edx = (u32)R8((u32)(r_esp+0x40u));
    /* 006b3e1f: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006b3e26: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3e29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3e2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3e2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3e2c: ret  */ FN_RET(0x006b3cb4); r_esp += 4; return;
}

void f_006b3e30(void) /* sub_6B3E30 */
{
    FN_ENTER(0x006b3e30);
    /* 006b3e30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3e31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b3e32: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3e35: movzx ebp, byte ptr [esp + 0x24] */ r_ebp = (u32)R8((u32)(r_esp+0x24u));
    /* 006b3e3a: cmp ebp, 0xf4 */ {  u32 a = r_ebp; u32 b = 0xf4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b3e40: jle 0x6b3e48 */ if ((fZ||fS!=fO)) goto L_006b3e48;
L_006b3e42:; BB(0x006b3e42);
    /* 006b3e42: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3e45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3e46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3e47: ret  */ FN_RET(0x006b3e30); r_esp += 4; return;
L_006b3e48:; BB(0x006b3e48);
    /* 006b3e48: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3e4e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b3e53u); f_0068d5a8();
    /* 006b3e53: mov esi, eax */ r_esi = r_eax;
    /* 006b3e55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b3e58: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3e5a: je 0x6b3f80 */ if (fZ) goto L_006b3f80;
L_006b3e60:; BB(0x006b3e60);
    /* 006b3e60: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b3e66: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b3e6b: push dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3e6e: mov ecx, dword ptr [esi + 0xdf4] */ r_ecx = R32((u32)(r_esi+0xdf4u));
    /* 006b3e74: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x6b3e79u); f_006a6a60();
    /* 006b3e79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3e7b: je 0x6b3f6e */ if (fZ) goto L_006b3f6e;
L_006b3e81:; BB(0x006b3e81);
    /* 006b3e81: mov ecx, eax */ r_ecx = r_eax;
    /* 006b3e83: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6b3e88u); f_006a60dc();
    /* 006b3e88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3e8a: je 0x6b3f5c */ if (fZ) goto L_006b3f5c;
L_006b3e90:; BB(0x006b3e90);
    /* 006b3e90: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b3e93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3e94: mov ecx, eax */ r_ecx = r_eax;
    /* 006b3e96: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6b3e9bu); f_005c425c();
    /* 006b3e9b: movzx ecx, byte ptr [esp] */ r_ecx = (u32)R8((u32)(r_esp));
    /* 006b3e9f: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b3ea5: mov dword ptr [edx + ebp*4], ecx */ W32((u32)(r_edx+r_ebp*4), r_ecx);
    /* 006b3ea8: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 006b3eab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3eae: movzx ecx, byte ptr [esp + 1] */ r_ecx = (u32)R8((u32)(r_esp+0x1u));
    /* 006b3eb3: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3eb6: movzx ecx, byte ptr [esp + 2] */ r_ecx = (u32)R8((u32)(r_esp+0x2u));
    /* 006b3ebb: lea eax, [ebp + 2] */ r_eax = (u32)(r_ebp+0x2u);
    /* 006b3ebe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3ec1: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3ec4: movzx ecx, byte ptr [esp + 3] */ r_ecx = (u32)R8((u32)(r_esp+0x3u));
    /* 006b3ec9: lea eax, [ebp + 3] */ r_eax = (u32)(r_ebp+0x3u);
    /* 006b3ecc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3ecf: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3ed2: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b3ed7: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 006b3eda: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3edd: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3ee0: movzx ecx, byte ptr [esp + 5] */ r_ecx = (u32)R8((u32)(r_esp+0x5u));
    /* 006b3ee5: lea eax, [ebp + 5] */ r_eax = (u32)(r_ebp+0x5u);
    /* 006b3ee8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3eeb: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3eee: movzx ecx, byte ptr [esp + 6] */ r_ecx = (u32)R8((u32)(r_esp+0x6u));
    /* 006b3ef3: lea eax, [ebp + 6] */ r_eax = (u32)(r_ebp+0x6u);
    /* 006b3ef6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3ef9: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3efc: movsx ecx, byte ptr [esp + 7] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x7u));
    /* 006b3f01: lea eax, [ebp + 7] */ r_eax = (u32)(r_ebp+0x7u);
    /* 006b3f04: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3f07: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3f0a: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b3f0f: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 006b3f12: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3f15: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3f18: movsx ecx, byte ptr [esp + 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x9u));
    /* 006b3f1d: lea eax, [ebp + 9] */ r_eax = (u32)(r_ebp+0x9u);
    /* 006b3f20: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3f23: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3f26: movzx ecx, byte ptr [esp + 0xa] */ r_ecx = (u32)R8((u32)(r_esp+0xau));
    /* 006b3f2b: lea eax, [ebp + 0xa] */ r_eax = (u32)(r_ebp+0xau);
    /* 006b3f2e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b3f31: lea ebp, [ebp + 0xb] */ r_ebp = (u32)(r_ebp+0xbu);
    /* 006b3f34: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b3f37: movsx ecx, byte ptr [esp + 0xb] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0xbu));
    /* 006b3f3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b3f3e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b3f44: mov dword ptr [edx + ebp*4], ecx */ W32((u32)(r_edx+r_ebp*4), r_ecx);
    /* 006b3f47: movzx ecx, byte ptr [esp + 0x24] */ r_ecx = (u32)R8((u32)(r_esp+0x24u));
    /* 006b3f4c: push dword ptr [edx + ecx*4] */ { u32 v = R32((u32)(r_edx+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3f4f: mov ecx, esi */ r_ecx = r_esi;
    /* 006b3f51: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6b3f56u); f_0068ee54();
    /* 006b3f56: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3f59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3f5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3f5b: ret  */ FN_RET(0x006b3e30); r_esp += 4; return;
L_006b3f5c:; BB(0x006b3f5c);
    /* 006b3f5c: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3f61: mov dword ptr [eax + ebp*4], 0xffffffff */ W32((u32)(r_eax+r_ebp*4), 0xffffffffu);
    /* 006b3f68: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3f6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3f6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3f6d: ret  */ FN_RET(0x006b3e30); r_esp += 4; return;
L_006b3f6e:; BB(0x006b3f6e);
    /* 006b3f6e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3f73: mov dword ptr [eax + ebp*4], 0xffffffff */ W32((u32)(r_eax+r_ebp*4), 0xffffffffu);
    /* 006b3f7a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3f7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3f7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3f7f: ret  */ FN_RET(0x006b3e30); r_esp += 4; return;
L_006b3f80:; BB(0x006b3f80);
    /* 006b3f80: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3f85: mov dword ptr [eax + ebp*4], 0xffffffff */ W32((u32)(r_eax+r_ebp*4), 0xffffffffu);
    /* 006b3f8c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3f8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3f90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b3f91: ret  */ FN_RET(0x006b3e30); r_esp += 4; return;
}

void f_006b3f94(void) /* sub_6B3F94 */
{
    FN_ENTER(0x006b3f94);
    /* 006b3f94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b3f95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b3f96: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b3f99: movzx ebx, byte ptr [esp + 0x24] */ r_ebx = (u32)R8((u32)(r_esp+0x24u));
    /* 006b3f9e: cmp ebx, 0xf4 */ {  u32 a = r_ebx; u32 b = 0xf4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b3fa4: jle 0x6b3fac */ if ((fZ||fS!=fO)) goto L_006b3fac;
L_006b3fa6:; BB(0x006b3fa6);
    /* 006b3fa6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3fa9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3faa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b3fab: ret  */ FN_RET(0x006b3f94); r_esp += 4; return;
L_006b3fac:; BB(0x006b3fac);
    /* 006b3fac: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b3fb2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b3fb7u); f_0068d5a8();
    /* 006b3fb7: mov edi, eax */ r_edi = r_eax;
    /* 006b3fb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b3fbc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3fbe: jne 0x6b3fd2 */ if (!fZ) goto L_006b3fd2;
L_006b3fc0:; BB(0x006b3fc0);
    /* 006b3fc0: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b3fc5: mov dword ptr [eax + ebx*4], 0xffffffff */ W32((u32)(r_eax+r_ebx*4), 0xffffffffu);
    /* 006b3fcc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b3fcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b3fd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b3fd1: ret  */ FN_RET(0x006b3f94); r_esp += 4; return;
L_006b3fd2:; BB(0x006b3fd2);
    /* 006b3fd2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b3fd5: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6b3fdau); f_005d6a3c();
    /* 006b3fda: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b3fe0: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b3fe5: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b3fe8: mov byte ptr [esp], cl */ W8((u32)(r_esp), (u8)r_ecx);
    /* 006b3feb: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b3ff0: lea ecx, [ecx + 1] */ r_ecx = (u32)(r_ecx+0x1u);
    /* 006b3ff3: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b3ff6: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b3ff9: mov byte ptr [esp + 1], cl */ W8((u32)(r_esp+0x1u), (u8)r_ecx);
    /* 006b3ffd: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b4002: lea ecx, [ecx + 2] */ r_ecx = (u32)(r_ecx+0x2u);
    /* 006b4005: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b4008: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 006b400b: mov ecx, dword ptr [edi + 0xdf4] */ r_ecx = R32((u32)(r_edi+0xdf4u));
    /* 006b4011: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 006b4015: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b4018: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4019: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6b401eu); f_006a4e50();
    /* 006b401e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b4020: je 0x6b410c */ if (fZ) goto L_006b410c;
L_006b4026:; BB(0x006b4026);
    /* 006b4026: mov ecx, eax */ r_ecx = r_eax;
    /* 006b4028: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6b402du); f_006a60dc();
    /* 006b402d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b402f: je 0x6b40fa */ if (fZ) goto L_006b40fa;
L_006b4035:; BB(0x006b4035);
    /* 006b4035: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b4038: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b4039: mov ecx, eax */ r_ecx = r_eax;
    /* 006b403b: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6b4040u); f_005c425c();
    /* 006b4040: movzx ecx, byte ptr [esp] */ r_ecx = (u32)R8((u32)(r_esp));
    /* 006b4044: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b404a: mov dword ptr [edx + ebx*4], ecx */ W32((u32)(r_edx+r_ebx*4), r_ecx);
    /* 006b404d: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 006b4050: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4053: movzx ecx, byte ptr [esp + 1] */ r_ecx = (u32)R8((u32)(r_esp+0x1u));
    /* 006b4058: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b405b: movzx ecx, byte ptr [esp + 2] */ r_ecx = (u32)R8((u32)(r_esp+0x2u));
    /* 006b4060: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 006b4063: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4066: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b4069: movzx ecx, byte ptr [esp + 3] */ r_ecx = (u32)R8((u32)(r_esp+0x3u));
    /* 006b406e: lea eax, [ebx + 3] */ r_eax = (u32)(r_ebx+0x3u);
    /* 006b4071: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4074: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b4077: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b407c: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 006b407f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4082: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b4085: movzx ecx, byte ptr [esp + 5] */ r_ecx = (u32)R8((u32)(r_esp+0x5u));
    /* 006b408a: lea eax, [ebx + 5] */ r_eax = (u32)(r_ebx+0x5u);
    /* 006b408d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b4090: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b4093: movzx ecx, byte ptr [esp + 6] */ r_ecx = (u32)R8((u32)(r_esp+0x6u));
    /* 006b4098: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b409b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b409e: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b40a1: movsx ecx, byte ptr [esp + 7] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x7u));
    /* 006b40a6: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b40a9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b40ac: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b40af: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b40b4: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b40b7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b40ba: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b40bd: movsx ecx, byte ptr [esp + 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0x9u));
    /* 006b40c2: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b40c5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b40c8: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b40cb: movzx ecx, byte ptr [esp + 0xa] */ r_ecx = (u32)R8((u32)(r_esp+0xau));
    /* 006b40d0: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b40d3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b40d6: lea ebx, [ebx + 0xb] */ r_ebx = (u32)(r_ebx+0xbu);
    /* 006b40d9: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b40dc: movsx ecx, byte ptr [esp + 0xb] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0xbu));
    /* 006b40e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b40e3: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b40e6: mov dword ptr [edx + ebx*4], ecx */ W32((u32)(r_edx+r_ebx*4), r_ecx);
    /* 006b40e9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b40ed: mov ecx, edi */ r_ecx = r_edi;
    /* 006b40ef: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6b40f4u); f_0068ee54();
    /* 006b40f4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b40f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b40f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b40f9: ret  */ FN_RET(0x006b3f94); r_esp += 4; return;
L_006b40fa:; BB(0x006b40fa);
    /* 006b40fa: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b40ff: mov dword ptr [eax + ebx*4], 0xffffffff */ W32((u32)(r_eax+r_ebx*4), 0xffffffffu);
    /* 006b4106: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b4109: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b410a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b410b: ret  */ FN_RET(0x006b3f94); r_esp += 4; return;
L_006b410c:; BB(0x006b410c);
    /* 006b410c: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b4111: mov dword ptr [eax + ebx*4], 0xffffffff */ W32((u32)(r_eax+r_ebx*4), 0xffffffffu);
    /* 006b4118: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b411b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b411c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b411d: ret  */ FN_RET(0x006b3f94); r_esp += 4; return;
}

