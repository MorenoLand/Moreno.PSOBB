#include "protos.h"

void f_004c3074(void) /* sub_4C3074 */
{
    FN_ENTER(0x004c3074);
    /* 004c3074: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3075: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3076: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c3079: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004c307b: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 004c307f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3081: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3082: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004c3084: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3086: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c308cu); call_ind(t); }
    /* 004c308c: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004c3090: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004c3096: mov ecx, dword ptr [ebx + 0x694] */ r_ecx = R32((u32)(r_ebx+0x694u));
    /* 004c309c: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c30a1: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 004c30a7: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c30ab: mov word ptr [esp + 4], si */ W16((u32)(r_esp+0x4u), (u16)r_esi);
    /* 004c30b0: movzx esi, word ptr [ebx + 0x394] */ r_esi = (u32)R16((u32)(r_ebx+0x394u));
    /* 004c30b7: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c30bc: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 004c30c1: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004c30c5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c30c9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c30cd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c30d2u); f_008587a5();
    /* 004c30d2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004c30d6: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004c30da: fdiv dword ptr [0x908780] */ ST(0) = ST(0) / R_F32((u32)(0x908780u));
    /* 004c30e0: fmul dword ptr [0x908784] */ ST(0) = ST(0) * R_F32((u32)(0x908784u));
    /* 004c30e6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c30e9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004c30ed: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004c30f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c30f7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004c30fb: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004c30ff: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c3103: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c3107: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004c310b: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c310f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c3114u); f_008003e0();
    /* 004c3114: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3117: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3118: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3119: ret 4 */ FN_RET(0x004c3074); r_esp += 8; return;
}

void f_004c311c(void) /* sub_4C311C */
{
    FN_ENTER(0x004c311c);
    /* 004c311c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c311d: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c3120: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c3122: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c3128: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c312a: jne 0x4c313c */ if (!fZ) goto L_004c313c;
L_004c312c:; BB(0x004c312c);
    /* 004c312c: movsx eax, word ptr [ebp + 0x682] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x682u));
    /* 004c3133: cmp ax, word ptr [ebp + 0x334] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+0x334u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 004c313a: jge 0x4c3143 */ if ((fS==fO)) goto L_004c3143;
L_004c313c:; BB(0x004c313c);
    /* 004c313c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c313e: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3141: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c3142: ret  */ FN_RET(0x004c311c); r_esp += 4; return;
L_004c3143:; BB(0x004c3143);
    /* 004c3143: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3145: mov word ptr [ebp + 0x334], ax */ W16((u32)(r_ebp+0x334u), (u16)r_eax);
    /* 004c314c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c314e: call 0x4cdb10 */ r_esp -= 4; W32(r_esp, 0x4c3153u); f_004cdb10();
    /* 004c3153: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 004c3159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c315b: jne 0x4c3209 */ if (!fZ) goto L_004c3209;
L_004c3161:; BB(0x004c3161);
    /* 004c3161: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3163: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004c3165: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c3168: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c316a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c3170u); call_ind(t); }
    /* 004c3170: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c3174: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c317a: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c317f: mov edx, 0xd */ r_edx = 0xdu;
    /* 004c3184: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c3189: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c318e: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c3194: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c3199: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004c319e: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c31a5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c31a9: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c31af: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c31b3: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c31b7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c31bcu); f_008587a5();
    /* 004c31bc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c31c0: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c31c4: fdiv dword ptr [0x908778] */ ST(0) = ST(0) / R_F32((u32)(0x908778u));
    /* 004c31ca: fmul dword ptr [0x90877c] */ ST(0) = ST(0) * R_F32((u32)(0x90877cu));
    /* 004c31d0: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c31d4: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c31d8: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c31dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c31e2: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c31e6: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c31ea: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c31ee: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c31f2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c31f6: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c31fa: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c31ffu); f_008003e0();
    /* 004c31ff: mov eax, 1 */ r_eax = 0x1u;
    /* 004c3204: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c3208: ret  */ FN_RET(0x004c311c); r_esp += 4; return;
L_004c3209:; BB(0x004c3209);
    /* 004c3209: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c320b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004c320d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c3210: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c3212: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c3218u); call_ind(t); }
    /* 004c3218: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c321c: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c3222: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c3226: mov edx, 0xb */ r_edx = 0xbu;
    /* 004c322b: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c3230: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c3235: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c323b: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c3240: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c3245: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c324c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c3250: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c3256: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c325a: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c325e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c3263u); f_008587a5();
    /* 004c3263: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004c3267: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 004c326b: fdiv dword ptr [0x908778] */ ST(0) = ST(0) / R_F32((u32)(0x908778u));
    /* 004c3271: fmul dword ptr [0x90877c] */ ST(0) = ST(0) * R_F32((u32)(0x90877cu));
    /* 004c3277: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c327a: fnstcw word ptr [esp + 0x38] */ W16((u32)(r_esp+0x38u), fcw);
    /* 004c327e: movzx eax, word ptr [esp + 0x38] */ r_eax = (u32)R16((u32)(r_esp+0x38u));
    /* 004c3283: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c3288: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c328c: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 004c3290: fistp dword ptr [esp + 0x48] */ W32((u32)(r_esp+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c3294: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c3298: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004c329c: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c32a0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c32a5u); f_008003e0();
    /* 004c32a5: mov eax, 1 */ r_eax = 0x1u;
    /* 004c32aa: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c32ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c32ae: ret  */ FN_RET(0x004c311c); r_esp += 4; return;
}

void f_004c32b0(void) /* sub_4C32B0 */
{
    FN_ENTER(0x004c32b0);
    /* 004c32b0: mov eax, dword ptr [ecx + 0x698] */ r_eax = R32((u32)(r_ecx+0x698u));
    /* 004c32b6: mov edx, dword ptr [ecx + 0x69c] */ r_edx = R32((u32)(r_ecx+0x69cu));
    /* 004c32bc: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 004c32bf: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 004c32c2: ret  */ FN_RET(0x004c32b0); r_esp += 4; return;
}

void f_004c32c4(void) /* sub_4C32C4 */
{
    FN_ENTER(0x004c32c4);
    /* 004c32c4: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004c32c7: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004c32ca: mov dword ptr [ecx + 0x690], eax */ W32((u32)(r_ecx+0x690u), r_eax);
    /* 004c32d0: mov dword ptr [ecx + 0x694], edx */ W32((u32)(r_ecx+0x694u), r_edx);
    /* 004c32d6: ret  */ FN_RET(0x004c32c4); r_esp += 4; return;
}

void f_004c32d8(void) /* sub_4C32D8 */
{
    FN_ENTER(0x004c32d8);
    /* 004c32d8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c32db: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 004c32df: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004c32e3: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004c32e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c32e9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c32eb: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 004c32ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c32f0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c32f2: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 004c32f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c32f7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004c32fb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c32fe: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c3302: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c3305: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004c330d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004c3310: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4c3315u); f_0082f9e0();
    /* 004c3315: fcomp dword ptr [0x908770] */ fx_compare(ST(0), R_F32((u32)(0x908770u))); FPOP();
    /* 004c331b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c331d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c331e: jbe 0x4c332a */ if ((fC||fZ)) goto L_004c332a;
L_004c3320:; BB(0x004c3320);
    /* 004c3320: fld dword ptr [0x908774] */ FPUSH(R_F32((u32)(0x908774u)));
    /* 004c3326: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_004c332a:; BB(0x004c332a);
    /* 004c332a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004c332e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3331: ret 0xc */ FN_RET(0x004c32d8); r_esp += 16; return;
}

void f_004c3334(void) /* sub_4C3334 */
{
    FN_ENTER(0x004c3334);
    /* 004c3334: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3335: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c3338: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004c333a: mov eax, dword ptr [0x9ac4d0] */ r_eax = R32((u32)(0x9ac4d0u));
    /* 004c333f: mov edx, dword ptr [0x9ac4d4] */ r_edx = R32((u32)(0x9ac4d4u));
    /* 004c3345: mov dword ptr [esp + 8], 0x41000000 */ W32((u32)(r_esp+0x8u), 0x41000000u);
    /* 004c334d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c3350: mov eax, dword ptr [0x9ac4dc] */ r_eax = R32((u32)(0x9ac4dcu));
    /* 004c3355: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004c3359: mov edx, dword ptr [ebx + 0x688] */ r_edx = R32((u32)(r_ebx+0x688u));
    /* 004c335f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c3363: mov eax, dword ptr [0x9ac4e0] */ r_eax = R32((u32)(0x9ac4e0u));
    /* 004c3368: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c336c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004c336f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3371: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c3373: jle 0x4c338e */ if ((fZ||fS!=fO)) goto L_004c338e;
L_004c3375:; BB(0x004c3375);
    /* 004c3375: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
L_004c3379:; BB(0x004c3379);
    /* 004c3379: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 004c337b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004c337e: mov dword ptr [ebp + eax*4], ecx */ W32((u32)(r_ebp+r_eax*4), r_ecx);
    /* 004c3382: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3385: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3388: jl 0x4c3379 */ if ((fS!=fO)) goto L_004c3379;
L_004c338a:; BB(0x004c338a);
    /* 004c338a: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_004c338e:; BB(0x004c338e);
    /* 004c338e: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004c3395: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c3398: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c339du); f_0082dcbc();
    /* 004c339d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004c33a1: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c33a4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c33a9u); f_0082ddd8();
    /* 004c33a9: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004c33ad: fld dword ptr [0x908914] */ FPUSH(R_F32((u32)(0x908914u)));
    /* 004c33b3: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c33b7: fld dword ptr [0x908768] */ FPUSH(R_F32((u32)(0x908768u)));
    /* 004c33bd: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c33c1: mov eax, dword ptr [ebx + 0x770] */ r_eax = R32((u32)(r_ebx+0x770u));
    /* 004c33c7: fld dword ptr [0x908760] */ FPUSH(R_F32((u32)(0x908760u)));
    /* 004c33cd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c33cf: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 004c33d1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c33d3: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004c33d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c33d8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c33da: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c33dc: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 004c33df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c33e1: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 004c33e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c33e7: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 004c33eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c33ed: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004c33ef: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c33f1: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004c33f3: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004c33f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c33f7: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004c33fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c33fd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004c3401: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004c3409: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004c340d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c340f: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3412: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3413: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c3418u); f_0050b7a4();
    /* 004c3418: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c341b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c341d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c341e: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3424: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3425: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3427: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c342cu); f_00520c70();
    /* 004c342c: fld dword ptr [0x90875c] */ FPUSH(R_F32((u32)(0x90875cu)));
    /* 004c3432: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_004c3436:; BB(0x004c3436);
    /* 004c3436: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c343a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004c343e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c3442: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c3444: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c3446: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c3448: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 004c344c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c344e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c3450: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 004c3454: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c3456: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004c345a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004c345e: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004c3466: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004c346a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c346d: push dword ptr [ebx + 0x688] */ { u32 v = R32((u32)(r_ebx+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3473: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3476: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3477: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c347cu); f_0051fdf8();
    /* 004c347c: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004c3480: fsub dword ptr [0x908758] */ ST(0) = ST(0) - R_F32((u32)(0x908758u));
    /* 004c3486: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004c348a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4c348fu); f_0082d7b0();
    /* 004c348f: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004c3493: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4c3498u); f_0082d838();
    /* 004c3498: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c349d: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c34a2: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c34a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c34a9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4c34aeu); f_0082fa0c();
    /* 004c34ae: push dword ptr [0x9f9830] */ { u32 v = R32((u32)(0x9f9830u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c34b4: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4c34b9u); f_0082e1e8();
    /* 004c34b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c34ba: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4c34bfu); f_0082da80();
    /* 004c34bf: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004c34c3: fcomp dword ptr [0x90874c] */ fx_compare(ST(0), R_F32((u32)(0x90874cu))); FPOP();
    /* 004c34c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c34cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c34cc: ja 0x4c3436 */ if ((!fC&&!fZ)) goto L_004c3436;
L_004c34d2:; BB(0x004c34d2);
    /* 004c34d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c34d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c34d5: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c34db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c34dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c34de: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c34e3u); f_00520c70();
    /* 004c34e3: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c34e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c34e7: ret  */ FN_RET(0x004c3334); r_esp += 4; return;
}

void f_004c3480(void)
{
    FN_ENTER(0x004c3480);
    goto L_004c3480;
L_004c3436:; BB(0x004c3436);
    /* 004c3436: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c343a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004c343e: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c3442: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c3444: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c3446: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c3448: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 004c344c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c344e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c3450: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 004c3454: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c3456: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004c345a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004c345e: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004c3466: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004c346a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c346d: push dword ptr [ebx + 0x688] */ { u32 v = R32((u32)(r_ebx+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3473: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3476: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3477: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c347cu); f_0051fdf8();
    /* 004c347c: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
L_004c3480:; BB(0x004c3480);
    /* 004c3480: fsub dword ptr [0x908758] */ ST(0) = ST(0) - R_F32((u32)(0x908758u));
    /* 004c3486: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004c348a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4c348fu); f_0082d7b0();
    /* 004c348f: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004c3493: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4c3498u); f_0082d838();
    /* 004c3498: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c349d: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c34a2: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c34a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c34a9: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4c34aeu); f_0082fa0c();
    /* 004c34ae: push dword ptr [0x9f9830] */ { u32 v = R32((u32)(0x9f9830u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c34b4: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4c34b9u); f_0082e1e8();
    /* 004c34b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c34ba: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4c34bfu); f_0082da80();
    /* 004c34bf: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004c34c3: fcomp dword ptr [0x90874c] */ fx_compare(ST(0), R_F32((u32)(0x90874cu))); FPOP();
    /* 004c34c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c34cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c34cc: ja 0x4c3436 */ if ((!fC&&!fZ)) goto L_004c3436;
L_004c34d2:; BB(0x004c34d2);
    /* 004c34d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c34d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c34d5: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c34db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c34dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c34de: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c34e3u); f_00520c70();
    /* 004c34e3: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c34e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c34e7: ret  */ FN_RET(0x004c3480); r_esp += 4; return;
}

void f_004c34e8(void) /* sub_4C34E8 */
{
    FN_ENTER(0x004c34e8);
    /* 004c34e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c34e9: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c34ec: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004c34ee: mov eax, dword ptr [0x9ac4d0] */ r_eax = R32((u32)(0x9ac4d0u));
    /* 004c34f3: mov edx, dword ptr [0x9ac4d4] */ r_edx = R32((u32)(0x9ac4d4u));
    /* 004c34f9: mov dword ptr [esp + 8], 0x41000000 */ W32((u32)(r_esp+0x8u), 0x41000000u);
    /* 004c3501: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c3504: mov eax, dword ptr [0x9ac4dc] */ r_eax = R32((u32)(0x9ac4dcu));
    /* 004c3509: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004c350d: mov edx, dword ptr [ebx + 0x688] */ r_edx = R32((u32)(r_ebx+0x688u));
    /* 004c3513: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c3517: mov eax, dword ptr [0x9ac4e0] */ r_eax = R32((u32)(0x9ac4e0u));
    /* 004c351c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c3520: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004c3523: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3525: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c3527: jle 0x4c3542 */ if ((fZ||fS!=fO)) goto L_004c3542;
L_004c3529:; BB(0x004c3529);
    /* 004c3529: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
L_004c352d:; BB(0x004c352d);
    /* 004c352d: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 004c352f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004c3532: mov dword ptr [ebp + eax*4], ecx */ W32((u32)(r_ebp+r_eax*4), r_ecx);
    /* 004c3536: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3539: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c353c: jl 0x4c352d */ if ((fS!=fO)) goto L_004c352d;
L_004c353e:; BB(0x004c353e);
    /* 004c353e: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_004c3542:; BB(0x004c3542);
    /* 004c3542: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004c3549: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c354c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c3551u); f_0082dcbc();
    /* 004c3551: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004c3555: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c3558: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c355du); f_0082ddd8();
    /* 004c355d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004c3561: fld dword ptr [0x908914] */ FPUSH(R_F32((u32)(0x908914u)));
    /* 004c3567: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c356b: fld dword ptr [0x908744] */ FPUSH(R_F32((u32)(0x908744u)));
    /* 004c3571: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c3575: mov eax, dword ptr [ebx + 0x770] */ r_eax = R32((u32)(r_ebx+0x770u));
    /* 004c357b: fld dword ptr [0x90873c] */ FPUSH(R_F32((u32)(0x90873cu)));
    /* 004c3581: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c3583: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 004c3585: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c3587: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004c358a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c358c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c358e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c3590: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 004c3593: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c3595: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 004c3599: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c359b: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 004c359f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c35a1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004c35a3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c35a5: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004c35a7: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004c35a9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c35ab: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004c35af: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c35b1: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004c35b5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004c35bd: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004c35c1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c35c3: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c35c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c35c7: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c35ccu); f_0050b7a4();
    /* 004c35cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c35cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c35d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c35d2: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c35d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c35d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c35db: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c35e0u); f_00520c70();
    /* 004c35e0: fld dword ptr [0x908738] */ FPUSH(R_F32((u32)(0x908738u)));
    /* 004c35e6: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_004c35ea:; BB(0x004c35ea);
    /* 004c35ea: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c35ee: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004c35f2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c35f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c35f8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c35fa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c35fc: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 004c3600: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c3602: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c3604: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 004c3608: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c360a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004c360e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004c3612: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 004c361a: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004c361e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c3621: push dword ptr [ebx + 0x688] */ { u32 v = R32((u32)(r_ebx+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3627: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3629: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c362a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c362b: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c3630u); f_0051fdf8();
    /* 004c3630: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004c3634: fsub dword ptr [0x908734] */ ST(0) = ST(0) - R_F32((u32)(0x908734u));
    /* 004c363a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004c363e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4c3643u); f_0082d7b0();
    /* 004c3643: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004c3647: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4c364cu); f_0082d838();
    /* 004c364c: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3651: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3656: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c365b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c365d: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4c3662u); f_0082fa0c();
    /* 004c3662: push dword ptr [0x9f9830] */ { u32 v = R32((u32)(0x9f9830u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3668: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4c366du); f_0082e1e8();
    /* 004c366d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c366e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4c3673u); f_0082da80();
    /* 004c3673: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004c3677: fcomp dword ptr [0x908728] */ fx_compare(ST(0), R_F32((u32)(0x908728u))); FPOP();
    /* 004c367d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c367f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3680: ja 0x4c35ea */ if ((!fC&&!fZ)) goto L_004c35ea;
L_004c3686:; BB(0x004c3686);
    /* 004c3686: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3689: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c368f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3690: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3692: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c3697u); f_00520c70();
    /* 004c3697: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c369a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c369b: ret  */ FN_RET(0x004c34e8); r_esp += 4; return;
}

void f_004c369c(void) /* sub_4C369C */
{
    FN_ENTER(0x004c369c);
    /* 004c369c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c369d: mov esi, ecx */ r_esi = r_ecx;
    /* 004c369f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c36a1: mov ecx, esi */ r_ecx = r_esi;
    /* 004c36a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c36a4: push dword ptr [0xa48520] */ { u32 v = R32((u32)(0xa48520u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c36aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c36ab: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c36b0u); f_00520c70();
    /* 004c36b0: push 0x9ac4d0 */ { u32 v = 0x9ac4d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c36b5: mov ecx, esi */ r_ecx = r_esi;
    /* 004c36b7: call 0x4c36d0 */ r_esp -= 4; W32(r_esp, 0x4c36bcu); f_004c36d0();
    /* 004c36bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c36be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c36bf: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c36c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c36c6: mov ecx, esi */ r_ecx = r_esi;
    /* 004c36c8: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c36cdu); f_00520c70();
    /* 004c36cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c36ce: ret  */ FN_RET(0x004c369c); r_esp += 4; return;
}

void f_004c36d0(void) /* sub_4C36D0 */
{
    FN_ENTER(0x004c36d0);
    /* 004c36d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c36d2: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 004c36d5: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c36d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c36da: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c36dfu); f_0051fdf8();
    /* 004c36df: ret 4 */ FN_RET(0x004c36d0); r_esp += 8; return;
}

void f_004c36e4(void) /* sub_4C36E4 */
{
    FN_ENTER(0x004c36e4);
    /* 004c36e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c36e5: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c36e8: mov edi, ecx */ r_edi = r_ecx;
    /* 004c36ea: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004c36ee: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c36f1: ja 0x4c38a5 */ if ((!fC&&!fZ)) goto L_004c38a5;
L_004c36f7:; BB(0x004c36f7);
    /* 004c36f7: mov eax, dword ptr [eax*4 + 0x907a2c] */ r_eax = R32((u32)(r_eax*4+0x907a2cu));
    /* 004c36fe: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c38a5:; BB(0x004c38a5);
    /* 004c38a5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38a9: ret 4 */ FN_RET(0x004c36e4); r_esp += 8; return;
}

void f_004c3700(void)
{
    FN_ENTER(0x004c3700);
    /* 004c3700: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 004c3706: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c3708: je 0x4c38a5 */ if (fZ) goto L_004c38a5;
L_004c370e:; BB(0x004c370e);
    /* 004c370e: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c3714: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c3716: je 0x4c3727 */ if (fZ) goto L_004c3727;
L_004c3718:; BB(0x004c3718);
    /* 004c3718: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c371e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3720: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004c3725: jmp 0x4c3743 */ goto L_004c3743;
L_004c3727:; BB(0x004c3727);
    /* 004c3727: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c372d: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3730: jge 0x4c373b */ if ((fS==fO)) goto L_004c373b;
L_004c3732:; BB(0x004c3732);
    /* 004c3732: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3734: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004c3739: jmp 0x4c3743 */ goto L_004c3743;
L_004c373b:; BB(0x004c373b);
    /* 004c373b: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004c373e: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004c3743:; BB(0x004c3743);
    /* 004c3743: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004c3746: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3749: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c374c: jne 0x4c38ac */ if (!fZ) goto L_004c38ac;
L_004c3752:; BB(0x004c3752);
    /* 004c3752: mov dword ptr [edi + 0x67c], 0 */ W32((u32)(r_edi+0x67cu), 0x0u);
    /* 004c375c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c375e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3760: jmp 0x4c3743 */ goto L_004c3743;
L_004c38a5:; BB(0x004c38a5);
    /* 004c38a5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38a9: ret 4 */ FN_RET(0x004c3700); r_esp += 8; return;
L_004c38ac:; BB(0x004c38ac);
    /* 004c38ac: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c38af: je 0x4c38c6 */ if (fZ) goto L_004c38c6;
L_004c38b1:; BB(0x004c38b1);
    /* 004c38b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c38b2: mov dword ptr [edi + 0x67c], eax */ W32((u32)(r_edi+0x67cu), r_eax);
    /* 004c38b8: mov ecx, edi */ r_ecx = r_edi;
    /* 004c38ba: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c38bfu); f_004c3074();
    /* 004c38bf: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38c3: ret 4 */ FN_RET(0x004c3700); r_esp += 8; return;
L_004c38c6:; BB(0x004c38c6);
    /* 004c38c6: mov dword ptr [edi + 0x67c], 0x32 */ W32((u32)(r_edi+0x67cu), 0x32u);
    /* 004c38d0: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c38d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c38d7: jmp 0x4c3743 */ goto L_004c3743;
}

void f_004c3762(void)
{
    FN_ENTER(0x004c3762);
    /* 004c3762: mov ecx, edi */ r_ecx = r_edi;
    /* 004c3764: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c3769u); f_004c32b0();
    /* 004c3769: jmp 0x4c38a5 */ goto L_004c38a5;
L_004c38a5:; BB(0x004c38a5);
    /* 004c38a5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38a9: ret 4 */ FN_RET(0x004c3762); r_esp += 8; return;
}

void f_004c376e(void)
{
    FN_ENTER(0x004c376e);
    /* 004c376e: mov ecx, edi */ r_ecx = r_edi;
    /* 004c3770: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c3775u); f_004c32c4();
    /* 004c3775: jmp 0x4c38a5 */ goto L_004c38a5;
L_004c38a5:; BB(0x004c38a5);
    /* 004c38a5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38a9: ret 4 */ FN_RET(0x004c376e); r_esp += 8; return;
}

void f_004c377a(void)
{
    FN_ENTER(0x004c377a);
    /* 004c377a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c377c: mov ecx, edi */ r_ecx = r_edi;
    /* 004c377e: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x4c3784u); call_ind(t); }
    /* 004c3784: jmp 0x4c38a5 */ goto L_004c38a5;
L_004c38a5:; BB(0x004c38a5);
    /* 004c38a5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38a9: ret 4 */ FN_RET(0x004c377a); r_esp += 8; return;
}

void f_004c3789(void)
{
    FN_ENTER(0x004c3789);
    /* 004c3789: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004c378b: mov eax, 2 */ r_eax = 0x2u;
    /* 004c3790: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004c3797: mov ecx, edi */ r_ecx = r_edi;
    /* 004c3799: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4c379fu); call_ind(t); }
    /* 004c379f: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 004c37a9: mov ecx, edi */ r_ecx = r_edi;
    /* 004c37ab: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c37b0u); f_004cb184();
    /* 004c37b0: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c37b6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004c37b8: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c37bb: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c37be: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 004c37c4: mov ecx, edi */ r_ecx = r_edi;
    /* 004c37c6: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4c37ccu); call_ind(t); }
    /* 004c37cc: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c37cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c37d0: ret 4 */ FN_RET(0x004c3789); r_esp += 8; return;
}

void f_004c37d3(void)
{
    FN_ENTER(0x004c37d3);
    /* 004c37d3: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 004c37d9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c37db: je 0x4c38a5 */ if (fZ) goto L_004c38a5;
L_004c37e1:; BB(0x004c37e1);
    /* 004c37e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c37e3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c37e5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c37e7: mov ecx, edi */ r_ecx = r_edi;
    /* 004c37e9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c37efu); call_ind(t); }
    /* 004c37ef: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c37f3: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c37f9: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c37fd: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c3802: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c3807: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c380c: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c3812: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c3817: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c381c: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c3823: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c3827: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c382d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c3831: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c3835: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c383au); f_008587a5();
    /* 004c383a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004c383e: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004c3842: fdiv dword ptr [0x908720] */ ST(0) = ST(0) / R_F32((u32)(0x908720u));
    /* 004c3848: fmul dword ptr [0x908724] */ ST(0) = ST(0) * R_F32((u32)(0x908724u));
    /* 004c384e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c3851: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004c3855: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004c385a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c385f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004c3863: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004c3867: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c386b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c386f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004c3873: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c3877: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c387cu); f_008003e0();
    /* 004c387c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c387f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3880: ret 4 */ FN_RET(0x004c37d3); r_esp += 8; return;
L_004c38a5:; BB(0x004c38a5);
    /* 004c38a5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38a9: ret 4 */ FN_RET(0x004c37d3); r_esp += 8; return;
}

void f_004c3883(void)
{
    FN_ENTER(0x004c3883);
    /* 004c3883: mov ecx, edi */ r_ecx = r_edi;
    /* 004c3885: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c388au); f_007aa094();
    /* 004c388a: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c388f: mov ecx, edi */ r_ecx = r_edi;
    /* 004c3891: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c3896u); f_007aaa30();
    /* 004c3896: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3898: je 0x4c38a5 */ if (fZ) goto L_004c38a5;
L_004c389a:; BB(0x004c389a);
    /* 004c389a: push 0x8fc300 */ { u32 v = 0x8fc300u; r_esp -= 4; W32(r_esp, v); }
    /* 004c389f: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x4c38a4u); f_00814f0c();
    /* 004c38a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004c38a5:; BB(0x004c38a5);
    /* 004c38a5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38a9: ret 4 */ FN_RET(0x004c3883); r_esp += 8; return;
}

void f_004c38a5(void)
{
    FN_ENTER(0x004c38a5);
    /* 004c38a5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c38a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c38a9: ret 4 */ FN_RET(0x004c38a5); r_esp += 8; return;
}

void f_004c38dc(void) /* sub_4C38DC */
{
    FN_ENTER(0x004c38dc);
    /* 004c38dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c38dd: mov edi, ecx */ r_edi = r_ecx;
    /* 004c38df: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004c38e3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c38e6: ja 0x4c39f4 */ if ((!fC&&!fZ)) goto L_004c39f4;
L_004c38ec:; BB(0x004c38ec);
    /* 004c38ec: mov eax, dword ptr [eax*4 + 0x907a5c] */ r_eax = R32((u32)(r_eax*4+0x907a5cu));
    /* 004c38f3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c39f4:; BB(0x004c39f4);
    /* 004c39f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c39f5: ret 4 */ FN_RET(0x004c38dc); r_esp += 8; return;
}

void f_004c38f5(void)
{
    FN_ENTER(0x004c38f5);
    /* 004c38f5: mov eax, dword ptr [edi + 0x85c] */ r_eax = R32((u32)(r_edi+0x85cu));
    /* 004c38fb: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c38fe: jl 0x4c39f4 */ if ((fS!=fO)) goto L_004c39f4;
L_004c3904:; BB(0x004c3904);
    /* 004c3904: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c390a: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c390c: je 0x4c391d */ if (fZ) goto L_004c391d;
L_004c390e:; BB(0x004c390e);
    /* 004c390e: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c3914: mov ecx, eax */ r_ecx = r_eax;
    /* 004c3916: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004c391b: jmp 0x4c3939 */ goto L_004c3939;
L_004c391d:; BB(0x004c391d);
    /* 004c391d: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c3923: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3926: jge 0x4c3931 */ if ((fS==fO)) goto L_004c3931;
L_004c3928:; BB(0x004c3928);
    /* 004c3928: mov ecx, eax */ r_ecx = r_eax;
    /* 004c392a: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004c392f: jmp 0x4c3939 */ goto L_004c3939;
L_004c3931:; BB(0x004c3931);
    /* 004c3931: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004c3934: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004c3939:; BB(0x004c3939);
    /* 004c3939: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004c393c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c393f: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3942: jne 0x4c39f8 */ if (!fZ) goto L_004c39f8;
L_004c3948:; BB(0x004c3948);
    /* 004c3948: mov dword ptr [edi + 0x67c], 0 */ W32((u32)(r_edi+0x67cu), 0x0u);
    /* 004c3952: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3954: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3956: jmp 0x4c3939 */ goto L_004c3939;
L_004c39f4:; BB(0x004c39f4);
    /* 004c39f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c39f5: ret 4 */ FN_RET(0x004c38f5); r_esp += 8; return;
L_004c39f8:; BB(0x004c39f8);
    /* 004c39f8: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c39fb: je 0x4c3a0f */ if (fZ) goto L_004c3a0f;
L_004c39fd:; BB(0x004c39fd);
    /* 004c39fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c39fe: mov dword ptr [edi + 0x67c], eax */ W32((u32)(r_edi+0x67cu), r_eax);
    /* 004c3a04: mov ecx, edi */ r_ecx = r_edi;
    /* 004c3a06: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c3a0bu); f_004c3074();
    /* 004c3a0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3a0c: ret 4 */ FN_RET(0x004c38f5); r_esp += 8; return;
L_004c3a0f:; BB(0x004c3a0f);
    /* 004c3a0f: mov dword ptr [edi + 0x67c], 0x32 */ W32((u32)(r_edi+0x67cu), 0x32u);
    /* 004c3a19: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c3a1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c3a20: jmp 0x4c3939 */ goto L_004c3939;
}

void f_004c3958(void)
{
    FN_ENTER(0x004c3958);
    /* 004c3958: mov ecx, edi */ r_ecx = r_edi;
    /* 004c395a: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c395fu); f_004c32b0();
    /* 004c395f: jmp 0x4c39f4 */ goto L_004c39f4;
L_004c39f4:; BB(0x004c39f4);
    /* 004c39f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c39f5: ret 4 */ FN_RET(0x004c3958); r_esp += 8; return;
}

void f_004c3964(void)
{
    FN_ENTER(0x004c3964);
    /* 004c3964: mov ecx, edi */ r_ecx = r_edi;
    /* 004c3966: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c396bu); f_004c32c4();
    /* 004c396b: jmp 0x4c39f4 */ goto L_004c39f4;
L_004c39f4:; BB(0x004c39f4);
    /* 004c39f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c39f5: ret 4 */ FN_RET(0x004c3964); r_esp += 8; return;
}

void f_004c3970(void)
{
    FN_ENTER(0x004c3970);
    /* 004c3970: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c3972: mov ecx, edi */ r_ecx = r_edi;
    /* 004c3974: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x4c397au); call_ind(t); }
    /* 004c397a: jmp 0x4c39f4 */ goto L_004c39f4;
L_004c39f4:; BB(0x004c39f4);
    /* 004c39f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c39f5: ret 4 */ FN_RET(0x004c3970); r_esp += 8; return;
}

void f_004c397c(void)
{
    FN_ENTER(0x004c397c);
    /* 004c397c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004c397e: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004c3983: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004c398a: mov ecx, edi */ r_ecx = r_edi;
    /* 004c398c: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c3992u); call_ind(t); }
    /* 004c3992: mov dword ptr [edi + 0x3ec], 1 */ W32((u32)(r_edi+0x3ecu), 0x1u);
    /* 004c399c: mov ecx, edi */ r_ecx = r_edi;
    /* 004c399e: call 0x4c1f00 */ r_esp -= 4; W32(r_esp, 0x4c39a3u); f_004c1f00();
    /* 004c39a3: push 0x8fc300 */ { u32 v = 0x8fc300u; r_esp -= 4; W32(r_esp, v); }
    /* 004c39a8: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c39ae: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c39b1: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c39b4: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 004c39ba: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x4c39bfu); f_00814f0c();
    /* 004c39bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c39c0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c39c2: mov ecx, edi */ r_ecx = r_edi;
    /* 004c39c4: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x4c39cau); call_ind(t); }
    /* 004c39ca: mov dword ptr [edi + 0x85c], 0 */ W32((u32)(r_edi+0x85cu), 0x0u);
    /* 004c39d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c39d5: ret 4 */ FN_RET(0x004c397c); r_esp += 8; return;
}

void f_004c39d8(void)
{
    FN_ENTER(0x004c39d8);
    /* 004c39d8: mov ecx, edi */ r_ecx = r_edi;
    /* 004c39da: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c39dfu); f_007aa094();
    /* 004c39df: add dword ptr [edi + 0x85c], 1 */ { u32 ad = (u32)(r_edi+0x85cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c39e6: mov ecx, edi */ r_ecx = r_edi;
    /* 004c39e8: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c39edu); f_004c53d8();
    /* 004c39ed: mov ecx, edi */ r_ecx = r_edi;
    /* 004c39ef: call 0x4c1f18 */ r_esp -= 4; W32(r_esp, 0x4c39f4u); f_004c1f18();
    /* 004c39f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c39f5: ret 4 */ FN_RET(0x004c39d8); r_esp += 8; return;
}

void f_004c39f4(void)
{
    FN_ENTER(0x004c39f4);
    /* 004c39f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c39f5: ret 4 */ FN_RET(0x004c39f4); r_esp += 8; return;
}

void f_004c3a28(void) /* sub_4C3A28 */
{
    FN_ENTER(0x004c3a28);
    /* 004c3a28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3a29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3a2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3a2b: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c3a31: mov esi, ecx */ r_esi = r_ecx;
    /* 004c3a33: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 004c3a3a: movzx eax, byte ptr [0xa484a0] */ r_eax = (u32)R8((u32)(0xa484a0u));
    /* 004c3a41: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c3a43: jne 0x4c3a6d */ if (!fZ) goto L_004c3a6d;
L_004c3a45:; BB(0x004c3a45);
    /* 004c3a45: mov dword ptr [0xa48530], 0x43340000 */ W32((u32)(0xa48530u), 0x43340000u);
    /* 004c3a4f: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c3a54: mov byte ptr [0xa484a0], al */ W8((u32)(0xa484a0u), (u8)r_eax);
    /* 004c3a59: mov dword ptr [0xa48540], 0x44610000 */ W32((u32)(0xa48540u), 0x44610000u);
    /* 004c3a63: mov dword ptr [0xa48550], 0xc3c80000 */ W32((u32)(0xa48550u), 0xc3c80000u);
L_004c3a6d:; BB(0x004c3a6d);
    /* 004c3a6d: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c3a70: ja 0x4c3f67 */ if ((!fC&&!fZ)) goto L_004c3f67;
L_004c3a76:; BB(0x004c3a76);
    /* 004c3a76: mov eax, dword ptr [edx*4 + 0x907a8c] */ r_eax = R32((u32)(r_edx*4+0x907a8cu));
    /* 004c3a7d: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c3a28); r_esp += 8; return;
}

void f_004c3a7f(void)
{
    FN_ENTER(0x004c3a7f);
    /* 004c3a7f: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c3a85: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3a88: jne 0x4c3f67 */ if (!fZ) goto L_004c3f67;
L_004c3a8e:; BB(0x004c3a8e);
    /* 004c3a8e: jmp 0x4c3f73 */ goto L_004c3f73;
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c3a7f); r_esp += 8; return;
L_004c3f73:; BB(0x004c3f73);
    /* 004c3f73: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f75: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f77: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3f79: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3f7b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c3f81u); call_ind(t); }
    /* 004c3f81: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c3f85: mov ebx, dword ptr [esi + 0x67c] */ r_ebx = R32((u32)(r_esi+0x67cu));
    /* 004c3f8b: movzx edi, word ptr [esi + 0x394] */ r_edi = (u32)R16((u32)(r_esi+0x394u));
    /* 004c3f92: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c3f98: mov edx, 0x25 */ r_edx = 0x25u;
    /* 004c3f9d: mov byte ptr [esp + 0x14], 0xa8 */ W8((u32)(r_esp+0x14u), 0xa8u);
    /* 004c3fa2: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 004c3fa7: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c3fad: mov byte ptr [esp + 0x15], 6 */ W8((u32)(r_esp+0x15u), 0x6u);
    /* 004c3fb2: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 004c3fb7: mov word ptr [esp + 0x1a], bx */ W16((u32)(r_esp+0x1au), (u16)r_ebx);
    /* 004c3fbc: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 004c3fc0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c3fc4: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 004c3fc8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c3fcdu); f_008587a5();
    /* 004c3fcd: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 004c3fd1: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 004c3fd5: fdiv dword ptr [0x908710] */ ST(0) = ST(0) / R_F32((u32)(0x908710u));
    /* 004c3fdb: fmul dword ptr [0x908714] */ ST(0) = ST(0) * R_F32((u32)(0x908714u));
    /* 004c3fe1: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 004c3fe5: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 004c3fe9: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 004c3fee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c3ff3: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004c3ff7: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 004c3ffb: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c3fff: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 004c4003: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 004c4007: mov byte ptr [esp + 0x28], al */ W8((u32)(r_esp+0x28u), (u8)r_eax);
    /* 004c400b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c4010u); f_008003e0();
    /* 004c4010: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4016: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4017: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4018: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4019: ret 4 */ FN_RET(0x004c3a7f); r_esp += 8; return;
}

void f_004c3a93(void)
{
    FN_ENTER(0x004c3a93);
    /* 004c3a93: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c3a99: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3a9c: jne 0x4c3f67 */ if (!fZ) goto L_004c3f67;
L_004c3aa2:; BB(0x004c3aa2);
    /* 004c3aa2: jmp 0x4c401c */ goto L_004c401c;
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c3a93); r_esp += 8; return;
L_004c401c:; BB(0x004c401c);
    /* 004c401c: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c4022: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c4024: je 0x4c4035 */ if (fZ) goto L_004c4035;
L_004c4026:; BB(0x004c4026);
    /* 004c4026: mov edx, dword ptr [esi + 0x67c] */ r_edx = R32((u32)(r_esi+0x67cu));
    /* 004c402c: mov eax, edx */ r_eax = r_edx;
    /* 004c402e: mov ebx, 0x9080e0 */ r_ebx = 0x9080e0u;
    /* 004c4033: jmp 0x4c4051 */ goto L_004c4051;
L_004c4035:; BB(0x004c4035);
    /* 004c4035: mov edx, dword ptr [esi + 0x67c] */ r_edx = R32((u32)(r_esi+0x67cu));
    /* 004c403b: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c403e: jge 0x4c4049 */ if ((fS==fO)) goto L_004c4049;
L_004c4040:; BB(0x004c4040);
    /* 004c4040: mov eax, edx */ r_eax = r_edx;
    /* 004c4042: mov ebx, 0x9088c0 */ r_ebx = 0x9088c0u;
    /* 004c4047: jmp 0x4c4051 */ goto L_004c4051;
L_004c4049:; BB(0x004c4049);
    /* 004c4049: lea eax, [edx - 0x32] */ r_eax = (u32)(r_edx+0xffffffceu);
    /* 004c404c: mov ebx, 0x908160 */ r_ebx = 0x908160u;
L_004c4051:; BB(0x004c4051);
    /* 004c4051: mov eax, dword ptr [ebx + eax*4] */ r_eax = R32((u32)(r_ebx+r_eax*4));
    /* 004c4054: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c4057: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c405a: jne 0x4c406c */ if (!fZ) goto L_004c406c;
L_004c405c:; BB(0x004c405c);
    /* 004c405c: mov dword ptr [esi + 0x67c], 0 */ W32((u32)(r_esi+0x67cu), 0x0u);
    /* 004c4066: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c4068: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c406a: jmp 0x4c4051 */ goto L_004c4051;
L_004c406c:; BB(0x004c406c);
    /* 004c406c: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c406f: je 0x4c408b */ if (fZ) goto L_004c408b;
L_004c4071:; BB(0x004c4071);
    /* 004c4071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4072: mov dword ptr [esi + 0x67c], edx */ W32((u32)(r_esi+0x67cu), r_edx);
    /* 004c4078: mov ecx, esi */ r_ecx = r_esi;
    /* 004c407a: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c407fu); f_004c3074();
    /* 004c407f: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4085: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4088: ret 4 */ FN_RET(0x004c3a93); r_esp += 8; return;
L_004c408b:; BB(0x004c408b);
    /* 004c408b: mov dword ptr [esi + 0x67c], 0x32 */ W32((u32)(r_esi+0x67cu), 0x32u);
    /* 004c4095: mov edx, 0x32 */ r_edx = 0x32u;
    /* 004c409a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c409c: jmp 0x4c4051 */ goto L_004c4051;
}

void f_004c3aa7(void)
{
    FN_ENTER(0x004c3aa7);
    /* 004c3aa7: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3aa9: call 0x4c0b34 */ r_esp -= 4; W32(r_esp, 0x4c3aaeu); f_004c0b34();
    /* 004c3aae: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3ab0: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c3ab5u); f_00521410();
    /* 004c3ab5: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3abb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3abc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3abd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3abe: ret 4 */ FN_RET(0x004c3aa7); r_esp += 8; return;
}

void f_004c3ac1(void)
{
    FN_ENTER(0x004c3ac1);
    /* 004c3ac1: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3ac3: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4c3ac8u); f_007751b0();
    /* 004c3ac8: fld dword ptr [0x90870c] */ FPUSH(R_F32((u32)(0x90870cu)));
    /* 004c3ace: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c3ad0: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 004c3ad4: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 004c3ad9: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c3ade: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c3ae3: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004c3ae7: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 004c3aeb: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c3aef: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 004c3af3: mov eax, dword ptr [esi + 0x6a0] */ r_eax = R32((u32)(r_esi+0x6a0u));
    /* 004c3af9: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 004c3afd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3b00: jge 0x4c3b66 */ if ((fS==fO)) goto L_004c3b66;
L_004c3b02:; BB(0x004c3b02);
    /* 004c3b02: fld dword ptr [0x908708] */ FPUSH(R_F32((u32)(0x908708u)));
    /* 004c3b08: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3b0b: mov dword ptr [esi + 0x6a0], eax */ W32((u32)(r_esi+0x6a0u), r_eax);
    /* 004c3b11: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 004c3b14: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c3b16: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c3b18: fcom dword ptr [edi + 0x6a8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x6a8u))); 
    /* 004c3b1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c3b20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3b21: je 0x4c420f */ if (fZ) goto L_004c420f;
L_004c3b27:; BB(0x004c3b27);
    /* 004c3b27: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004c3b2a: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3b2d: jl 0x4c3b31 */ if ((fS!=fO)) goto L_004c3b31;
L_004c3b2f:; BB(0x004c3b2f);
    /* 004c3b2f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004c3b31:; BB(0x004c3b31);
    /* 004c3b31: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 004c3b34: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c3b36: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c3b38: fcom dword ptr [edi + 0x6a8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x6a8u))); 
    /* 004c3b3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c3b40: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3b41: jne 0x4c3b27 */ if (!fZ) goto L_004c3b27;
L_004c3b43:; BB(0x004c3b43);
    /* 004c3b43: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004c3b45:; BB(0x004c3b45);
    /* 004c3b45: push 0x435c0000 */ { u32 v = 0x435c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b4a: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3b4c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3b51: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x4c3b56u); f_00520c08();
    /* 004c3b56: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 004c3b5a: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 004c3b5e: fstp dword ptr [edi + 0x6a8] */ W_F32((u32)(r_edi+0x6a8u), ST(0)); FPOP();
    /* 004c3b64: jmp 0x4c3b71 */ goto L_004c3b71;
L_004c3b66:; BB(0x004c3b66);
    /* 004c3b66: fld dword ptr [esi + ebx*4 + 0x6a8] */ FPUSH(R_F32((u32)(r_esi+r_ebx*4+0x6a8u)));
    /* 004c3b6d: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
L_004c3b71:; BB(0x004c3b71);
    /* 004c3b71: imul ebx, ebx, 0x1555 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1555u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c3b77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3b79: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c3b7eu); f_0082dcbc();
    /* 004c3b7e: fmul dword ptr [esp + 0x7c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x7cu));
    /* 004c3b82: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 004c3b88: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c3b8a: mov dword ptr [esi + 0x3a0], 0 */ W32((u32)(r_esi+0x3a0u), 0x0u);
    /* 004c3b94: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c3b99u); f_0082ddd8();
    /* 004c3b99: fmul dword ptr [esp + 0x7c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x7cu));
    /* 004c3b9d: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 004c3ba3: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3ba5: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c3baau); f_00521410();
    /* 004c3baa: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3bac: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c3bb1u); f_004c0b5c();
    /* 004c3bb1: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3bb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3bb8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3bb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3bba: ret 4 */ FN_RET(0x004c3ac1); r_esp += 8; return;
L_004c420f:; BB(0x004c420f);
    /* 004c420f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c4211: jmp 0x4c3b45 */ goto L_004c3b45;
}

void f_004c3bbd(void)
{
    FN_ENTER(0x004c3bbd);
    /* 004c3bbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3bbf: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 004c3bc2: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 004c3bc5: jmp 0x4c3f67 */ goto L_004c3f67;
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c3bbd); r_esp += 8; return;
}

void f_004c3bca(void)
{
    FN_ENTER(0x004c3bca);
    /* 004c3bca: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004c3bcc: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004c3bd1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004c3bd8: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3bda: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c3be0u); call_ind(t); }
    /* 004c3be0: mov dword ptr [esi + 0x3ec], 1 */ W32((u32)(r_esi+0x3ecu), 0x1u);
    /* 004c3bea: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3bec: call 0x4c1f00 */ r_esp -= 4; W32(r_esp, 0x4c3bf1u); f_004c1f00();
    /* 004c3bf1: mov ebx, dword ptr [esi + 0x3c8] */ r_ebx = R32((u32)(r_esi+0x3c8u));
    /* 004c3bf7: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 004c3bfd: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 004c3c03: and ebx, 0xffffffc9 */ {  u32 a = r_ebx; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004c3c06: mov dword ptr [esi + 0x3c8], ebx */ W32((u32)(r_esi+0x3c8u), r_ebx);
    /* 004c3c0c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004c3c0e: mov dword ptr [esi + 0x85c], edi */ W32((u32)(r_esi+0x85cu), r_edi);
    /* 004c3c14: mov dword ptr [esi + 0x860], edi */ W32((u32)(r_esi+0x860u), r_edi);
    /* 004c3c1a: mov dword ptr [esi + 0x8a0], edi */ W32((u32)(r_esi+0x8a0u), r_edi);
    /* 004c3c20: mov dword ptr [esi + 0x870], edi */ W32((u32)(r_esi+0x870u), r_edi);
    /* 004c3c26: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c3c28: fmul qword ptr [0x908268] */ ST(0) = ST(0) * R_F64((u32)(0x908268u));
    /* 004c3c2e: fdiv qword ptr [0x908260] */ ST(0) = ST(0) / R_F64((u32)(0x908260u));
    /* 004c3c34: fld dword ptr [0x9086fc] */ FPUSH(R_F32((u32)(0x9086fcu)));
    /* 004c3c3a: fadd dword ptr [esi + 0x3b4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3b4u));
    /* 004c3c40: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c3c42: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 004c3c46: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 004c3c4b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c3c50: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004c3c54: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 004c3c58: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c3c5c: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 004c3c60: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 004c3c64: fstp dword ptr [esi + 0x3b4] */ W_F32((u32)(r_esi+0x3b4u), ST(0)); FPOP();
    /* 004c3c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3c6b: mov dword ptr [esi + 0x86c], eax */ W32((u32)(r_esi+0x86cu), r_eax);
    /* 004c3c71: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3c73: call 0x4cda5c */ r_esp -= 4; W32(r_esp, 0x4c3c78u); f_004cda5c();
    /* 004c3c78: fld dword ptr [0x9086d4] */ FPUSH(R_F32((u32)(0x9086d4u)));
    /* 004c3c7e: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 004c3c84: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c3c86: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c3c88: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3c89: jae 0x4c3cb7 */ if (!fC) goto L_004c3cb7;
L_004c3c8b:; BB(0x004c3c8b);
    /* 004c3c8b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004c3c8d: fld dword ptr [0x9086e8] */ FPUSH(R_F32((u32)(0x9086e8u)));
    /* 004c3c93: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004c3c95: fst dword ptr [esi + 0x878] */ W_F32((u32)(r_esi+0x878u), ST(0));
    /* 004c3c9b: fstp dword ptr [esi + 0x874] */ W_F32((u32)(r_esi+0x874u), ST(0)); FPOP();
    /* 004c3ca1: mov dword ptr [esi + 0x87c], 0 */ W32((u32)(r_esi+0x87cu), 0x0u);
    /* 004c3cab: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3cb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3cb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3cb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3cb4: ret 4 */ FN_RET(0x004c3bca); r_esp += 8; return;
L_004c3cb7:; BB(0x004c3cb7);
    /* 004c3cb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c3cb9: fld dword ptr [0x9086f8] */ FPUSH(R_F32((u32)(0x9086f8u)));
    /* 004c3cbf: fld dword ptr [0x9086ec] */ FPUSH(R_F32((u32)(0x9086ecu)));
    /* 004c3cc5: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 004c3ccb: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 004c3ccd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c3ccf: fsubr dword ptr [0x9086f0] */ ST(0) = R_F32((u32)(0x9086f0u)) - ST(0);
    /* 004c3cd5: fmul dword ptr [0x9086f4] */ ST(0) = ST(0) * R_F32((u32)(0x9086f4u));
    /* 004c3cdb: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004c3cdd: mov dword ptr [esi + 0x878], 0x3fd55555 */ W32((u32)(r_esi+0x878u), 0x3fd55555u);
    /* 004c3ce7: fdivr st(2), st(0) */ ST(2) = ST(0) / ST(2);
    /* 004c3ce9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c3ceb: fstp dword ptr [esi + 0x87c] */ W_F32((u32)(r_esi+0x87cu), ST(0)); FPOP();
    /* 004c3cf1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004c3cf3: fstp dword ptr [esi + 0x874] */ W_F32((u32)(r_esi+0x874u), ST(0)); FPOP();
    /* 004c3cf9: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3cff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3d00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3d01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3d02: ret 4 */ FN_RET(0x004c3bca); r_esp += 8; return;
}

void f_004c3d05(void)
{
    FN_ENTER(0x004c3d05);
    /* 004c3d05: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c3d0b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3d0e: jne 0x4c3f67 */ if (!fZ) goto L_004c3f67;
L_004c3d14:; BB(0x004c3d14);
    /* 004c3d14: jmp 0x4c409e */ goto L_004c409e;
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c3d05); r_esp += 8; return;
L_004c409e:; BB(0x004c409e);
    /* 004c409e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c40a0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c40a2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c40a4: mov ecx, esi */ r_ecx = r_esi;
    /* 004c40a6: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c40acu); call_ind(t); }
    /* 004c40ac: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c40b0: mov ebx, dword ptr [esi + 0x67c] */ r_ebx = R32((u32)(r_esi+0x67cu));
    /* 004c40b6: movzx edi, word ptr [esi + 0x394] */ r_edi = (u32)R16((u32)(r_esi+0x394u));
    /* 004c40bd: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c40c3: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004c40c8: mov byte ptr [esp + 0x2c], 0xa8 */ W8((u32)(r_esp+0x2cu), 0xa8u);
    /* 004c40cd: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 004c40d2: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c40d8: mov byte ptr [esp + 0x2d], 6 */ W8((u32)(r_esp+0x2du), 0x6u);
    /* 004c40dd: mov word ptr [esp + 0x30], dx */ W16((u32)(r_esp+0x30u), (u16)r_edx);
    /* 004c40e2: mov word ptr [esp + 0x32], bx */ W16((u32)(r_esp+0x32u), (u16)r_ebx);
    /* 004c40e7: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 004c40eb: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c40ef: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 004c40f3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c40f8u); f_008587a5();
    /* 004c40f8: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 004c40fc: fild dword ptr [esp + 0x74] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x74u)));
    /* 004c4100: fdiv dword ptr [0x908710] */ ST(0) = ST(0) / R_F32((u32)(0x908710u));
    /* 004c4106: fmul dword ptr [0x908714] */ ST(0) = ST(0) * R_F32((u32)(0x908714u));
    /* 004c410c: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 004c4110: fnstcw word ptr [esp + 0x5c] */ W16((u32)(r_esp+0x5cu), fcw);
    /* 004c4114: movzx eax, word ptr [esp + 0x5c] */ r_eax = (u32)R16((u32)(r_esp+0x5cu));
    /* 004c4119: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c411e: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004c4122: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 004c4126: fistp dword ptr [esp + 0x6c] */ W32((u32)(r_esp+0x6cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c412a: fldcw word ptr [esp + 0x5c] */ fcw = R16((u32)(r_esp+0x5cu));
    /* 004c412e: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 004c4132: mov byte ptr [esp + 0x40], al */ W8((u32)(r_esp+0x40u), (u8)r_eax);
    /* 004c4136: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c413bu); f_008003e0();
    /* 004c413b: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4141: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4142: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4143: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4144: ret 4 */ FN_RET(0x004c3d05); r_esp += 8; return;
}

void f_004c3d19(void)
{
    FN_ENTER(0x004c3d19);
    /* 004c3d19: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3d1b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c3d20u); f_007aa094();
    /* 004c3d20: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c3d26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3d28: je 0x4c4203 */ if (fZ) goto L_004c4203;
L_004c3d2e:; BB(0x004c3d2e);
    /* 004c3d2e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3d31: je 0x4c41b1 */ if (fZ) goto L_004c41b1;
L_004c3d37:; BB(0x004c3d37);
    /* 004c3d37: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3d3a: je 0x4c416e */ if (fZ) goto L_004c416e;
L_004c3d40:; BB(0x004c3d40);
    /* 004c3d40: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3d43: je 0x4c3ec0 */ if (fZ) goto L_004c3ec0;
L_004c3d49:; BB(0x004c3d49);
    /* 004c3d49: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3d4c: jl 0x4c3f67 */ if ((fS!=fO)) goto L_004c3f67;
L_004c3d52:; BB(0x004c3d52);
    /* 004c3d52: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3d55: jg 0x4c3f67 */ if ((!fZ&&fS==fO)) goto L_004c3f67;
L_004c3d5b:; BB(0x004c3d5b);
    /* 004c3d5b: push dword ptr [esi + 0x878] */ { u32 v = R32((u32)(r_esi+0x878u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3d61: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3d67: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3d69: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3d6f: call 0x520aa8 */ r_esp -= 4; W32(r_esp, 0x4c3d74u); f_00520aa8();
    /* 004c3d74: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3d79: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3d7e: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c3d81: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c3d86u); f_007a8c74();
    /* 004c3d86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3d89: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 004c3d8c: mov eax, dword ptr [esi + 0x870] */ r_eax = R32((u32)(r_esi+0x870u));
    /* 004c3d92: cmp eax, 0x2811 */ {  u32 a = r_eax; u32 b = 0x2811u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3d97: jge 0x4c3da4 */ if ((fS==fO)) goto L_004c3da4;
L_004c3d99:; BB(0x004c3d99);
    /* 004c3d99: add eax, 0x117 */ {  u32 a = r_eax; u32 b = 0x117u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3d9e: mov dword ptr [esi + 0x870], eax */ W32((u32)(r_esi+0x870u), r_eax);
L_004c3da4:; BB(0x004c3da4);
    /* 004c3da4: fild dword ptr [esi + 0x860] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x860u)));
    /* 004c3daa: fdiv dword ptr [0x9086e8] */ ST(0) = ST(0) / R_F32((u32)(0x9086e8u));
    /* 004c3db0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c3db4: add dword ptr [esi + 0x64], eax */ { u32 ad = (u32)(r_esi+0x64u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c3db7: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 004c3dbb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c3dbf: mov dword ptr [esp], 0xa4852c */ W32((u32)(r_esp), 0xa4852cu);
    /* 004c3dc6: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 004c3dce: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004c3dd6: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4c3ddbu); f_007be6b8();
    /* 004c3ddb: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004c3ddf: fld dword ptr [esi + 0x41c] */ FPUSH(R_F32((u32)(r_esi+0x41cu)));
    /* 004c3de5: fcomp dword ptr [0x9086e4] */ fx_compare(ST(0), R_F32((u32)(0x9086e4u))); FPOP();
    /* 004c3deb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c3ded: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004c3df0: add dword ptr [esi + 0x860], 1 */ { u32 ad = (u32)(r_esi+0x860u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c3df7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3df8: ja 0x4c3e09 */ if ((!fC&&!fZ)) goto L_004c3e09;
L_004c3dfa:; BB(0x004c3dfa);
    /* 004c3dfa: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c3e00: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3e03: je 0x4c4147 */ if (fZ) goto L_004c4147;
L_004c3e09:; BB(0x004c3e09);
    /* 004c3e09: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004c3e0c: fcomp dword ptr [0x908708] */ fx_compare(ST(0), R_F32((u32)(0x908708u))); FPOP();
    /* 004c3e12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c3e14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3e15: ja 0x4c3e8c */ if ((!fC&&!fZ)) goto L_004c3e8c;
L_004c3e17:; BB(0x004c3e17);
    /* 004c3e17: mov eax, dword ptr [esi + 0x8a0] */ r_eax = R32((u32)(r_esi+0x8a0u));
    /* 004c3e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3e1f: jne 0x4c3e8c */ if (!fZ) goto L_004c3e8c;
L_004c3e21:; BB(0x004c3e21);
    /* 004c3e21: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e23: call 0x4c4218 */ r_esp -= 4; W32(r_esp, 0x4c3e28u); f_004c4218();
    /* 004c3e28: mov edx, dword ptr [esi + 0x688] */ r_edx = R32((u32)(r_esi+0x688u));
    /* 004c3e2e: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 004c3e31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3e33: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c3e35: jle 0x4c3e47 */ if ((fZ||fS!=fO)) goto L_004c3e47;
L_004c3e37:; BB(0x004c3e37);
    /* 004c3e37: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004c3e39: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004c3e3c: mov dword ptr [edi + eax*4], ebx */ W32((u32)(r_edi+r_eax*4), r_ebx);
    /* 004c3e3f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3e42: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e45: jl 0x4c3e37 */ if ((fS!=fO)) goto L_004c3e37;
L_004c3e47:; BB(0x004c3e47);
    /* 004c3e47: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004c3e4e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c3e52: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004c3e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e56: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e5c: call 0x4cfc08 */ r_esp -= 4; W32(r_esp, 0x4c3e61u); f_004cfc08();
    /* 004c3e61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3e64: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3e66: mov dword ptr [esi + 0x8a0], 1 */ W32((u32)(r_esi+0x8a0u), 0x1u);
    /* 004c3e70: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e72: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x4c3e78u); call_ind(t); }
    /* 004c3e78: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3e7a: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e7c: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c3e82u); call_ind(t); }
    /* 004c3e82: mov dword ptr [esi + 0x3ec], 2 */ W32((u32)(r_esi+0x3ecu), 0x2u);
L_004c3e8c:; BB(0x004c3e8c);
    /* 004c3e8c: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c3e92: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e95: jl 0x4c3f67 */ if ((fS!=fO)) goto L_004c3f67;
L_004c3e9b:; BB(0x004c3e9b);
    /* 004c3e9b: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c3ea1: mov dword ptr [esi + 0x85c], 6 */ W32((u32)(r_esi+0x85cu), 0x6u);
    /* 004c3eab: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c3eae: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c3eb4: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3eba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3ebb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3ebc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3ebd: ret 4 */ FN_RET(0x004c3d19); r_esp += 8; return;
L_004c3ec0:; BB(0x004c3ec0);
    /* 004c3ec0: fld dword ptr [esi + 0x87c] */ FPUSH(R_F32((u32)(r_esi+0x87cu)));
    /* 004c3ec6: fadd dword ptr [esi + 0x874] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x874u));
    /* 004c3ecc: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 004c3ed2: mov edx, dword ptr [esi + 0x3b0] */ r_edx = R32((u32)(r_esi+0x3b0u));
    /* 004c3ed8: fst dword ptr [esi + 0x874] */ W_F32((u32)(r_esi+0x874u), ST(0));
    /* 004c3ede: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3ee1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c3ee5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c3ee8: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3eea: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004c3eee: call 0x520aa8 */ r_esp -= 4; W32(r_esp, 0x4c3ef3u); f_00520aa8();
    /* 004c3ef3: fild dword ptr [esi + 0x860] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x860u)));
    /* 004c3ef9: fdiv dword ptr [0x9086e8] */ ST(0) = ST(0) / R_F32((u32)(0x9086e8u));
    /* 004c3eff: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c3f03: mov dword ptr [esp], 0xa4852c */ W32((u32)(r_esp), 0xa4852cu);
    /* 004c3f0a: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 004c3f0e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c3f12: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 004c3f1a: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004c3f22: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4c3f27u); f_007be6b8();
    /* 004c3f27: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 004c3f2b: add dword ptr [esi + 0x860], 1 */ { u32 ad = (u32)(r_esi+0x860u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c3f32: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 004c3f35: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3f37: push 0x421c0000 */ { u32 v = 0x421c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f3c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c3f41u); f_007aaa30();
    /* 004c3f41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3f43: je 0x4c3f67 */ if (fZ) goto L_004c3f67;
L_004c3f45:; BB(0x004c3f45);
    /* 004c3f45: mov dword ptr [esi + 0x85c], 4 */ W32((u32)(r_esi+0x85cu), 0x4u);
    /* 004c3f4f: add esi, 0x63c */ {  u32 a = r_esi; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c3f55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3f57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f5a: push 0x411 */ { u32 v = 0x411u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3f5f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c3f64u); f_00814298();
    /* 004c3f64: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c3d19); r_esp += 8; return;
L_004c4147:; BB(0x004c4147);
    /* 004c4147: mov dword ptr [esi + 0x85c], 5 */ W32((u32)(r_esi+0x85cu), 0x5u);
    /* 004c4151: lea edx, [esi + 0x63c] */ r_edx = (u32)(r_esi+0x63cu);
    /* 004c4157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c415a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c415b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c415c: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4161: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c4166u); f_00814298();
    /* 004c4166: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4169: jmp 0x4c3e09 */ goto L_004c3e09;
L_004c416e:; BB(0x004c416e);
    /* 004c416e: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4173: mov ecx, esi */ r_ecx = r_esi;
    /* 004c4175: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c417au); f_007aaa30();
    /* 004c417a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c417c: je 0x4c3f67 */ if (fZ) goto L_004c3f67;
L_004c4182:; BB(0x004c4182);
    /* 004c4182: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c4188: mov dword ptr [esi + 0x860], 0 */ W32((u32)(r_esi+0x860u), 0x0u);
    /* 004c4192: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c4195: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c419b: mov dword ptr [esi + 0x85c], 3 */ W32((u32)(r_esi+0x85cu), 0x3u);
    /* 004c41a5: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c41ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c41ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c41ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c41ae: ret 4 */ FN_RET(0x004c3d19); r_esp += 8; return;
L_004c41b1:; BB(0x004c41b1);
    /* 004c41b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004c41b3: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c41b8u); f_004c53d8();
    /* 004c41b8: mov ecx, esi */ r_ecx = r_esi;
    /* 004c41ba: call 0x4c1f18 */ r_esp -= 4; W32(r_esp, 0x4c41bfu); f_004c1f18();
    /* 004c41bf: mov ecx, esi */ r_ecx = r_esi;
    /* 004c41c1: call 0x4c29ec */ r_esp -= 4; W32(r_esp, 0x4c41c6u); f_004c29ec();
    /* 004c41c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c41c8: je 0x4c3f67 */ if (fZ) goto L_004c3f67;
L_004c41ce:; BB(0x004c41ce);
    /* 004c41ce: mov eax, dword ptr [esi + 0x86c] */ r_eax = R32((u32)(r_esi+0x86cu));
    /* 004c41d4: mov dword ptr [esi + 0x658], 0 */ W32((u32)(r_esi+0x658u), 0x0u);
    /* 004c41de: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 004c41e1: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004c41e6: mov dword ptr [esi + 0x85c], 2 */ W32((u32)(r_esi+0x85cu), 0x2u);
    /* 004c41f0: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 004c41f7: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c41fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c41fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c41ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4200: ret 4 */ FN_RET(0x004c3d19); r_esp += 8; return;
L_004c4203:; BB(0x004c4203);
    /* 004c4203: mov dword ptr [esi + 0x85c], 1 */ W32((u32)(r_esi+0x85cu), 0x1u);
    /* 004c420d: jmp 0x4c41b1 */ goto L_004c41b1;
}

void f_004c3f67(void)
{
    FN_ENTER(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c3f67); r_esp += 8; return;
}

