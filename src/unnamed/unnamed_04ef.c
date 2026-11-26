#include "protos.h"

void f_004ef07c(void) /* sub_4EF07C */
{
    FN_ENTER(0x004ef07c);
    /* 004ef07c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ef07d: mov esi, ecx */ r_esi = r_ecx;
    /* 004ef07f: mov eax, dword ptr [0xa72574] */ r_eax = R32((u32)(0xa72574u));
    /* 004ef084: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef087: jl 0x4ef0b0 */ if ((fS!=fO)) goto L_004ef0b0;
L_004ef089:; BB(0x004ef089);
    /* 004ef089: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef08c: jg 0x4ef0b0 */ if ((!fZ&&fS==fO)) goto L_004ef0b0;
L_004ef08e:; BB(0x004ef08e);
    /* 004ef08e: fld dword ptr [0x91dc54] */ FPUSH(R_F32((u32)(0x91dc54u)));
    /* 004ef094: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004ef097: fcom dword ptr [0x91e1e0] */ fx_compare(ST(0), R_F32((u32)(0x91e1e0u))); 
    /* 004ef09d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef09f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef0a0: jae 0x4ef0ab */ if (!fC) goto L_004ef0ab;
L_004ef0a2:; BB(0x004ef0a2);
    /* 004ef0a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef0a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef0a6: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 004ef0a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ef0aa: ret  */ FN_RET(0x004ef07c); r_esp += 4; return;
L_004ef0ab:; BB(0x004ef0ab);
    /* 004ef0ab: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 004ef0ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ef0af: ret  */ FN_RET(0x004ef07c); r_esp += 4; return;
L_004ef0b0:; BB(0x004ef0b0);
    /* 004ef0b0: fld dword ptr [0x91dc50] */ FPUSH(R_F32((u32)(0x91dc50u)));
    /* 004ef0b6: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004ef0b9: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 004ef0bc: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4ef0c1u); f_004e9398();
    /* 004ef0c1: fld dword ptr [0x91e1dc] */ FPUSH(R_F32((u32)(0x91e1dcu)));
    /* 004ef0c7: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004ef0ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004ef0cc: je 0x4ef0dd */ if (fZ) goto L_004ef0dd;
L_004ef0ce:; BB(0x004ef0ce);
    /* 004ef0ce: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004ef0d0: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004ef0d2: fmul dword ptr [0x91dc4c] */ ST(0) = ST(0) * R_F32((u32)(0x91dc4cu));
    /* 004ef0d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ef0da: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
L_004ef0dd:; BB(0x004ef0dd);
    /* 004ef0dd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004ef0df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef0e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef0e2: jbe 0x4ef0ec */ if ((fC||fZ)) goto L_004ef0ec;
L_004ef0e4:; BB(0x004ef0e4);
    /* 004ef0e4: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004ef0e9: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
L_004ef0ec:; BB(0x004ef0ec);
    /* 004ef0ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ef0ed: ret  */ FN_RET(0x004ef07c); r_esp += 4; return;
}

void f_004ef0f0(void) /* sub_4EF0F0 */
{
    FN_ENTER(0x004ef0f0);
    /* 004ef0f0: mov eax, dword ptr [0xa72574] */ r_eax = R32((u32)(0xa72574u));
    /* 004ef0f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004ef0f7: jne 0x4ef11c */ if (!fZ) goto L_004ef11c;
L_004ef0f9:; BB(0x004ef0f9);
    /* 004ef0f9: fld dword ptr [0x91dc58] */ FPUSH(R_F32((u32)(0x91dc58u)));
    /* 004ef0ff: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 004ef102: fcom dword ptr [0x91e1d4] */ fx_compare(ST(0), R_F32((u32)(0x91e1d4u))); 
    /* 004ef108: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef10a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef10b: jbe 0x4ef118 */ if ((fC||fZ)) goto L_004ef118;
L_004ef10d:; BB(0x004ef10d);
    /* 004ef10d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef10f: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004ef114: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004ef117: ret  */ FN_RET(0x004ef0f0); r_esp += 4; return;
L_004ef118:; BB(0x004ef118);
    /* 004ef118: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 004ef11b: ret  */ FN_RET(0x004ef0f0); r_esp += 4; return;
L_004ef11c:; BB(0x004ef11c);
    /* 004ef11c: fld dword ptr [0x91dc5c] */ FPUSH(R_F32((u32)(0x91dc5cu)));
    /* 004ef122: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 004ef125: fcom dword ptr [0x91e1d8] */ fx_compare(ST(0), R_F32((u32)(0x91e1d8u))); 
    /* 004ef12b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef12d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef12e: jae 0x4ef138 */ if (!fC) goto L_004ef138;
L_004ef130:; BB(0x004ef130);
    /* 004ef130: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef132: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef134: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004ef137: ret  */ FN_RET(0x004ef0f0); r_esp += 4; return;
L_004ef138:; BB(0x004ef138);
    /* 004ef138: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 004ef13b: ret  */ FN_RET(0x004ef0f0); r_esp += 4; return;
}

void f_004ef13c(void) /* sub_4EF13C */
{
    FN_ENTER(0x004ef13c);
    /* 004ef13c: mov eax, dword ptr [0xa72574] */ r_eax = R32((u32)(0xa72574u));
    /* 004ef141: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef144: jne 0x4ef166 */ if (!fZ) goto L_004ef166;
L_004ef146:; BB(0x004ef146);
    /* 004ef146: fld dword ptr [0x91dc60] */ FPUSH(R_F32((u32)(0x91dc60u)));
    /* 004ef14c: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 004ef14f: fcom dword ptr [0x91e1cc] */ fx_compare(ST(0), R_F32((u32)(0x91e1ccu))); 
    /* 004ef155: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef157: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef158: jae 0x4ef162 */ if (!fC) goto L_004ef162;
L_004ef15a:; BB(0x004ef15a);
    /* 004ef15a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef15c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef15e: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 004ef161: ret  */ FN_RET(0x004ef13c); r_esp += 4; return;
L_004ef162:; BB(0x004ef162);
    /* 004ef162: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 004ef165: ret  */ FN_RET(0x004ef13c); r_esp += 4; return;
L_004ef166:; BB(0x004ef166);
    /* 004ef166: fld dword ptr [0x91dc64] */ FPUSH(R_F32((u32)(0x91dc64u)));
    /* 004ef16c: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 004ef16f: fcom dword ptr [0x91e1d0] */ fx_compare(ST(0), R_F32((u32)(0x91e1d0u))); 
    /* 004ef175: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef177: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef178: jbe 0x4ef185 */ if ((fC||fZ)) goto L_004ef185;
L_004ef17a:; BB(0x004ef17a);
    /* 004ef17a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef17c: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004ef181: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 004ef184: ret  */ FN_RET(0x004ef13c); r_esp += 4; return;
L_004ef185:; BB(0x004ef185);
    /* 004ef185: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 004ef188: ret  */ FN_RET(0x004ef13c); r_esp += 4; return;
}

void f_004ef18c(void) /* sub_4EF18C */
{
    FN_ENTER(0x004ef18c);
    /* 004ef18c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ef18f: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4ef194u); f_004e9398();
    /* 004ef194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef196: je 0x4ef201 */ if (fZ) goto L_004ef201;
L_004ef198:; BB(0x004ef198);
    /* 004ef198: mov eax, dword ptr [0xa72574] */ r_eax = R32((u32)(0xa72574u));
    /* 004ef19d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ef19f: jl 0x4ef201 */ if ((fS!=fO)) goto L_004ef201;
L_004ef1a1:; BB(0x004ef1a1);
    /* 004ef1a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef1a4: jg 0x4ef201 */ if ((!fZ&&fS==fO)) goto L_004ef201;
L_004ef1a6:; BB(0x004ef1a6);
    /* 004ef1a6: call 0x4f3fe8 */ r_esp -= 4; W32(r_esp, 0x4ef1abu); f_004f3fe8();
    /* 004ef1ab: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004ef1af: call 0x4f3fc0 */ r_esp -= 4; W32(r_esp, 0x4ef1b4u); f_004f3fc0();
    /* 004ef1b4: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004ef1b8: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004ef1ba: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004ef1be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ef1bf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ef1c2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4ef1c7u); f_0082e900();
    /* 004ef1c7: fcomp dword ptr [0x91dc68] */ fx_compare(ST(0), R_F32((u32)(0x91dc68u))); FPOP();
    /* 004ef1cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef1cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef1d0: jbe 0x4ef201 */ if ((fC||fZ)) goto L_004ef201;
L_004ef1d2:; BB(0x004ef1d2);
    /* 004ef1d2: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004ef1d6: fmul dword ptr [0x91e1c8] */ ST(0) = ST(0) * R_F32((u32)(0x91e1c8u));
    /* 004ef1dc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004ef1df: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004ef1e3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef1e8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ef1ec: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004ef1f0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ef1f4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004ef1f7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004ef1fb: add dword ptr [0xa72120], eax */ { u32 ad = (u32)(0xa72120u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004ef201:; BB(0x004ef201);
    /* 004ef201: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ef204: ret  */ FN_RET(0x004ef18c); r_esp += 4; return;
}

void f_004ef208(void) /* sub_4EF208 */
{
    FN_ENTER(0x004ef208);
    /* 004ef208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ef209: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ef20b: mov eax, dword ptr [0xa72570] */ r_eax = R32((u32)(0xa72570u));
    /* 004ef210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef212: je 0x4ef220 */ if (fZ) goto L_004ef220;
L_004ef214:; BB(0x004ef214);
    /* 004ef214: mov dword ptr [0xa72570], 0 */ W32((u32)(0xa72570u), 0x0u);
    /* 004ef21e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef21f: ret  */ FN_RET(0x004ef208); r_esp += 4; return;
L_004ef220:; BB(0x004ef220);
    /* 004ef220: mov eax, dword ptr [0xa4d7fc] */ r_eax = R32((u32)(0xa4d7fcu));
    /* 004ef225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef227: jne 0x4ef233 */ if (!fZ) goto L_004ef233;
L_004ef229:; BB(0x004ef229);
    /* 004ef229: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef22b: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4ef230u); f_004ecd84();
    /* 004ef230: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef231: jmp 0x4ef24e */ goto L_004ef24e;
L_004ef233:; BB(0x004ef233);
    /* 004ef233: call 0x4e74f8 */ r_esp -= 4; W32(r_esp, 0x4ef238u); f_004e74f8();
    /* 004ef238: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef23a: je 0x4ef246 */ if (fZ) goto L_004ef246;
L_004ef23c:; BB(0x004ef23c);
    /* 004ef23c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef23e: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4ef243u); f_004ecd84();
    /* 004ef243: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef244: jmp 0x4ef24e */ goto L_004ef24e;
L_004ef246:; BB(0x004ef246);
    /* 004ef246: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef248: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4ef24du); f_004ecd84();
    /* 004ef24d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ef24e:; BB(0x004ef24e);
    /* 004ef24e: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4ef253u); f_004e9398();
    /* 004ef253: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef255: je 0x4ef304 */ if (fZ) goto L_004ef304;
L_004ef25b:; BB(0x004ef25b);
    /* 004ef25b: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004ef25e: movsx edx, byte ptr [eax + 0x30] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x30u));
    /* 004ef262: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef265: je 0x4ef311 */ if (fZ) goto L_004ef311;
L_004ef26b:; BB(0x004ef26b);
    /* 004ef26b: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ef271: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4ef276u); f_004f4010();
    /* 004ef276: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef279: je 0x4ef2a6 */ if (fZ) goto L_004ef2a6;
L_004ef27b:; BB(0x004ef27b);
    /* 004ef27b: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004ef27e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ef281: cmp eax, dword ptr [ebp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef284: jl 0x4ef28f */ if ((fS!=fO)) goto L_004ef28f;
L_004ef286:; BB(0x004ef286);
    /* 004ef286: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 004ef28d: jmp 0x4ef292 */ goto L_004ef292;
L_004ef28f:; BB(0x004ef28f);
    /* 004ef28f: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
L_004ef292:; BB(0x004ef292);
    /* 004ef292: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ef294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef297: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef29c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ef2a1u); f_00814298();
    /* 004ef2a1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef2a4: jmp 0x4ef2d5 */ goto L_004ef2d5;
L_004ef2a6:; BB(0x004ef2a6);
    /* 004ef2a6: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ef2ac: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4ef2b1u); f_004f4010();
    /* 004ef2b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef2b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef2b4: je 0x4ef2d5 */ if (fZ) goto L_004ef2d5;
L_004ef2b6:; BB(0x004ef2b6);
    /* 004ef2b6: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004ef2b9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ef2bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ef2be: jl 0x4ef306 */ if ((fS!=fO)) goto L_004ef306;
L_004ef2c0:; BB(0x004ef2c0);
    /* 004ef2c0: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
L_004ef2c3:; BB(0x004ef2c3);
    /* 004ef2c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ef2c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2c8: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2cd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ef2d2u); f_00814298();
    /* 004ef2d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef2d5:; BB(0x004ef2d5);
    /* 004ef2d5: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004ef2da: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2e1: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4ef2e6u); f_004f3eb8();
    /* 004ef2e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef2e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef2e9: je 0x4ef304 */ if (fZ) goto L_004ef304;
L_004ef2eb:; BB(0x004ef2eb);
    /* 004ef2eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ef2ed: call 0x4ef354 */ r_esp -= 4; W32(r_esp, 0x4ef2f2u); f_004ef354();
    /* 004ef2f2: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 004ef2f5: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004ef2f8: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 004ef2fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ef2fd: call dword ptr [eax*8 + 0x9b8fc4] */ { u32 t = R32((u32)(r_eax*8+0x9b8fc4u)); r_esp -= 4; W32(r_esp, 0x4ef304u); call_ind(t); }
L_004ef304:; BB(0x004ef304);
    /* 004ef304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef305: ret  */ FN_RET(0x004ef208); r_esp += 4; return;
L_004ef306:; BB(0x004ef306);
    /* 004ef306: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004ef309: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ef30c: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 004ef30f: jmp 0x4ef2c3 */ goto L_004ef2c3;
L_004ef311:; BB(0x004ef311);
    /* 004ef311: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 004ef316: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef319: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4ef31eu); f_004f3eb8();
    /* 004ef31e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef31f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef321: je 0x4ef26b */ if (fZ) goto L_004ef26b;
L_004ef327:; BB(0x004ef327);
    /* 004ef327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ef329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef32a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef32b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef32c: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef331: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ef336u); f_00814298();
    /* 004ef336: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ef339: call 0x4e742c */ r_esp -= 4; W32(r_esp, 0x4ef33eu); f_004e742c();
    /* 004ef33e: mov dword ptr [ebp + 0x30], 7 */ W32((u32)(r_ebp+0x30u), 0x7u);
    /* 004ef345: mov dword ptr [0xa72574], 6 */ W32((u32)(0xa72574u), 0x6u);
    /* 004ef34f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ef352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef353: ret  */ FN_RET(0x004ef208); r_esp += 4; return;
}

void f_004ef354(void) /* sub_4EF354 */
{
    FN_ENTER(0x004ef354);
    /* 004ef354: mov eax, dword ptr [0xa72568] */ r_eax = R32((u32)(0xa72568u));
    /* 004ef359: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef35b: je 0x4ef40f */ if (fZ) goto L_004ef40f;
L_004ef361:; BB(0x004ef361);
    /* 004ef361: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004ef364: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004ef366: mov edx, 0xa723e0 */ r_edx = 0xa723e0u;
    /* 004ef36b: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004ef36d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004ef370: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004ef373: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004ef376: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 004ef379: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004ef37c: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004ef37f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004ef382: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 004ef385: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004ef388: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 004ef38b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004ef38e: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 004ef391: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004ef394: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004ef397: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004ef39a: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004ef39d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004ef3a0: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 004ef3a3: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004ef3a6: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 004ef3a9: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004ef3ac: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 004ef3af: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004ef3b2: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 004ef3b5: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004ef3b8: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 004ef3bb: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004ef3be: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 004ef3c1: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004ef3c4: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 004ef3c7: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004ef3ca: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 004ef3cd: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004ef3d0: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 004ef3d3: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004ef3d6: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 004ef3d9: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004ef3dc: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 004ef3df: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 004ef3e2: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 004ef3e5: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 004ef3e8: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 004ef3eb: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 004ef3ee: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 004ef3f1: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 004ef3f4: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 004ef3f7: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 004ef3fa: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 004ef3fd: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004ef400: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 004ef403: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004ef406: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 004ef409: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 004ef40c: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
L_004ef40f:; BB(0x004ef40f);
    /* 004ef40f: ret  */ FN_RET(0x004ef354); r_esp += 4; return;
}

void f_004ef410(void) /* sub_4EF410 */
{
    FN_ENTER(0x004ef410);
    /* 004ef410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ef411: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ef413: movzx eax, byte ptr [0xa7234c] */ r_eax = (u32)R8((u32)(0xa7234cu));
    /* 004ef41a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ef41c: jne 0x4ef432 */ if (!fZ) goto L_004ef432;
L_004ef41e:; BB(0x004ef41e);
    /* 004ef41e: mov dword ptr [0xa72350], 0x3c5a740e */ W32((u32)(0xa72350u), 0x3c5a740eu);
    /* 004ef428: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef42d: mov byte ptr [0xa7234c], al */ W8((u32)(0xa7234cu), (u8)r_eax);
L_004ef432:; BB(0x004ef432);
    /* 004ef432: fld dword ptr [0xa72350] */ FPUSH(R_F32((u32)(0xa72350u)));
    /* 004ef438: fadd dword ptr [ebp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x48u));
    /* 004ef43b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 004ef43e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ef441: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ef443: jl 0x4ef4ea */ if ((fS!=fO)) goto L_004ef4ea;
L_004ef449:; BB(0x004ef449);
    /* 004ef449: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
L_004ef44c:; BB(0x004ef44c);
    /* 004ef44c: mov eax, dword ptr [0xa720ac] */ r_eax = R32((u32)(0xa720acu));
    /* 004ef451: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef454: je 0x4ef476 */ if (fZ) goto L_004ef476;
L_004ef456:; BB(0x004ef456);
    /* 004ef456: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004ef458: je 0x4ef476 */ if (fZ) goto L_004ef476;
L_004ef45a:; BB(0x004ef45a);
    /* 004ef45a: fcom dword ptr [0x91e1bc] */ fx_compare(ST(0), R_F32((u32)(0x91e1bcu))); 
    /* 004ef460: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef462: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef463: jbe 0x4ef471 */ if ((fC||fZ)) goto L_004ef471;
L_004ef465:; BB(0x004ef465);
    /* 004ef465: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef467: mov eax, 0x3f4ccccd */ r_eax = 0x3f4ccccdu;
    /* 004ef46c: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 004ef46f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef470: ret  */ FN_RET(0x004ef410); r_esp += 4; return;
L_004ef471:; BB(0x004ef471);
    /* 004ef471: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004ef474: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef475: ret  */ FN_RET(0x004ef410); r_esp += 4; return;
L_004ef476:; BB(0x004ef476);
    /* 004ef476: fld dword ptr [0x91e1bc] */ FPUSH(R_F32((u32)(0x91e1bcu)));
    /* 004ef47c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ef47e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef480: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef481: jbe 0x4ef48d */ if ((fC||fZ)) goto L_004ef48d;
L_004ef483:; BB(0x004ef483);
    /* 004ef483: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004ef485: fmul dword ptr [0x91dc6c] */ ST(0) = ST(0) * R_F32((u32)(0x91dc6cu));
    /* 004ef48b: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
L_004ef48d:; BB(0x004ef48d);
    /* 004ef48d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef48f: fld dword ptr [0x91e1c0] */ FPUSH(R_F32((u32)(0x91e1c0u)));
    /* 004ef495: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ef497: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef499: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 004ef49f: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ef4a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ef4a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef4a7: ja 0x4ef4ab */ if ((!fC&&!fZ)) goto L_004ef4ab;
L_004ef4a9:; BB(0x004ef4a9);
    /* 004ef4a9: fst st(1) */ ST(1) = ST(0);
L_004ef4ab:; BB(0x004ef4ab);
    /* 004ef4ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef4ad: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004ef4b0: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4ef4b5u); f_004f3eb8();
    /* 004ef4b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef4b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef4b8: jne 0x4ef4bc */ if (!fZ) goto L_004ef4bc;
L_004ef4ba:; BB(0x004ef4ba);
    /* 004ef4ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef4bb: ret  */ FN_RET(0x004ef410); r_esp += 4; return;
L_004ef4bc:; BB(0x004ef4bc);
    /* 004ef4bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ef4be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef4bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef4c1: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef4c6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ef4cbu); f_00814298();
    /* 004ef4cb: mov dword ptr [0xa72574], 5 */ W32((u32)(0xa72574u), 0x5u);
    /* 004ef4d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef4d7: mov eax, 7 */ r_eax = 0x7u;
    /* 004ef4dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef4dd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 004ef4e0: call 0x4ec4a4 */ r_esp -= 4; W32(r_esp, 0x4ef4e5u); f_004ec4a4();
    /* 004ef4e5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ef4e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef4e9: ret  */ FN_RET(0x004ef410); r_esp += 4; return;
L_004ef4ea:; BB(0x004ef4ea);
    /* 004ef4ea: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 004ef4f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ef4f3: jmp 0x4ef44c */ goto L_004ef44c;
}

void f_004ef4f8(void) /* sub_4EF4F8 */
{
    FN_ENTER(0x004ef4f8);
    /* 004ef4f8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004ef4fb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ef4fe: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004ef501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef503: jl 0x4ef506 */ if ((fS!=fO)) goto L_004ef506;
L_004ef505:; BB(0x004ef505);
    /* 004ef505: ret  */ FN_RET(0x004ef4f8); r_esp += 4; return;
L_004ef506:; BB(0x004ef506);
    /* 004ef506: mov dword ptr [0xa72574], 3 */ W32((u32)(0xa72574u), 0x3u);
    /* 004ef510: ret  */ FN_RET(0x004ef4f8); r_esp += 4; return;
}

void f_004ef514(void) /* sub_4EF514 */
{
    FN_ENTER(0x004ef514);
    /* 004ef514: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004ef517: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ef51a: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004ef51d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ef51f: jl 0x4ef522 */ if ((fS!=fO)) goto L_004ef522;
L_004ef521:; BB(0x004ef521);
    /* 004ef521: ret  */ FN_RET(0x004ef514); r_esp += 4; return;
L_004ef522:; BB(0x004ef522);
    /* 004ef522: mov dword ptr [0xa72574], 4 */ W32((u32)(0xa72574u), 0x4u);
    /* 004ef52c: ret  */ FN_RET(0x004ef514); r_esp += 4; return;
}

void f_004ef530(void) /* sub_4EF530 */
{
    FN_ENTER(0x004ef530);
    /* 004ef530: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ef531: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ef532: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ef533: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ef539: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ef53b: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x4ef540u); f_007a9044();
    /* 004ef540: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4ef545u); f_007a9380();
    /* 004ef545: movzx eax, byte ptr [0xa72450] */ r_eax = (u32)R8((u32)(0xa72450u));
    /* 004ef54c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ef54e: jne 0x4ef5aa */ if (!fZ) goto L_004ef5aa;
L_004ef550:; BB(0x004ef550);
    /* 004ef550: mov dword ptr [0xa723a0], 0x43898000 */ W32((u32)(0xa723a0u), 0x43898000u);
    /* 004ef55a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef55f: mov byte ptr [0xa72450], al */ W8((u32)(0xa72450u), (u8)r_eax);
    /* 004ef564: mov dword ptr [0xa723a8], 0x43c80000 */ W32((u32)(0xa723a8u), 0x43c80000u);
    /* 004ef56e: mov dword ptr [0xa723b0], 0x43c80000 */ W32((u32)(0xa723b0u), 0x43c80000u);
    /* 004ef578: mov dword ptr [0xa723b8], 0x43898000 */ W32((u32)(0xa723b8u), 0x43898000u);
    /* 004ef582: mov dword ptr [0xa723c0], 0x43c80000 */ W32((u32)(0xa723c0u), 0x43c80000u);
    /* 004ef58c: mov dword ptr [0xa723c8], 0x44200000 */ W32((u32)(0xa723c8u), 0x44200000u);
    /* 004ef596: mov dword ptr [0xa723d0], 0x44200000 */ W32((u32)(0xa723d0u), 0x44200000u);
    /* 004ef5a0: mov dword ptr [0xa723d8], 0x43c80000 */ W32((u32)(0xa723d8u), 0x43c80000u);
L_004ef5aa:; BB(0x004ef5aa);
    /* 004ef5aa: fld dword ptr [0xa7221c] */ FPUSH(R_F32((u32)(0xa7221cu)));
    /* 004ef5b0: fld dword ptr [0x91e198] */ FPUSH(R_F32((u32)(0x91e198u)));
    /* 004ef5b6: fld dword ptr [0x91e194] */ FPUSH(R_F32((u32)(0x91e194u)));
    /* 004ef5bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ef5be: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004ef5c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ef5c2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004ef5c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ef5c6: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 004ef5ca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ef5cc: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004ef5d0: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 004ef5d8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004ef5da: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ef5dc: mov dword ptr [esp + 0x54], 4 */ W32((u32)(r_esp+0x54u), 0x4u);
L_004ef5e4:; BB(0x004ef5e4);
    /* 004ef5e4: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004ef5e8: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004ef5ec: mov edx, dword ptr [esi + 0x9b90d4] */ r_edx = R32((u32)(r_esi+0x9b90d4u));
    /* 004ef5f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ef5f4: fst dword ptr [edi + 0xa723ac] */ W_F32((u32)(r_edi+0xa723acu), ST(0));
    /* 004ef5fa: fstp dword ptr [edi + 0xa723a4] */ W_F32((u32)(r_edi+0xa723a4u), ST(0)); FPOP();
    /* 004ef600: fst dword ptr [edi + 0xa723bc] */ W_F32((u32)(r_edi+0xa723bcu), ST(0));
    /* 004ef606: fstp dword ptr [edi + 0xa723b4] */ W_F32((u32)(r_edi+0xa723b4u), ST(0)); FPOP();
    /* 004ef60c: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 004ef60f: mov eax, edx */ r_eax = r_edx;
    /* 004ef611: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ef617: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef61a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ef61e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 004ef622: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef625: fadd dword ptr [eax*4 + 0x91deb0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x91deb0u));
    /* 004ef62c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ef62e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004ef632: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004ef637: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef63c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ef640: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004ef644: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ef648: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004ef64c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004ef650: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ef653: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef655: mov edx, dword ptr [esi + 0x9b90d8] */ r_edx = R32((u32)(r_esi+0x9b90d8u));
    /* 004ef65b: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004ef65f: mov eax, edx */ r_eax = r_edx;
    /* 004ef661: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ef667: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef66a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004ef66e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004ef672: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef675: fadd dword ptr [eax*4 + 0x91deb0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x91deb0u));
    /* 004ef67c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ef67e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004ef682: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004ef687: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef68c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ef690: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004ef694: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ef698: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004ef69c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004ef6a0: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ef6a3: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef6a5: mov edx, dword ptr [esi + 0x9b90dc] */ r_edx = R32((u32)(r_esi+0x9b90dcu));
    /* 004ef6ab: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004ef6af: mov eax, edx */ r_eax = r_edx;
    /* 004ef6b1: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ef6b7: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef6ba: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004ef6be: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004ef6c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef6c5: fadd dword ptr [eax*4 + 0x91deb0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x91deb0u));
    /* 004ef6cc: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ef6ce: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004ef6d2: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004ef6d7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef6dc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ef6e0: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004ef6e4: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ef6e8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004ef6ec: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004ef6f0: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ef6f3: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef6f5: mov edx, dword ptr [esi + 0x9b90e0] */ r_edx = R32((u32)(r_esi+0x9b90e0u));
    /* 004ef6fb: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004ef6ff: mov eax, edx */ r_eax = r_edx;
    /* 004ef701: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ef707: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef70a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004ef70e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004ef712: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef715: fadd dword ptr [eax*4 + 0x91deb0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x91deb0u));
    /* 004ef71c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ef71e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004ef722: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004ef727: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef72c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ef730: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004ef734: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ef738: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004ef73c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004ef740: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ef743: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef745: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004ef749: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 004ef74d: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004ef751: lea eax, [edi + 0xa723a0] */ r_eax = (u32)(r_edi+0xa723a0u);
    /* 004ef757: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004ef75b: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 004ef75f: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef761: push 0xbfe80000 */ { u32 v = 0xbfe80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef766: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef769: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4ef76eu); f_0082b5d8();
    /* 004ef76e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef771: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ef774: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ef777: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef77a: jl 0x4ef5e4 */ if ((fS!=fO)) goto L_004ef5e4;
L_004ef780:; BB(0x004ef780);
    /* 004ef780: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004ef783: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004ef786: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 004ef789: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef78c: je 0x4efa76 */ if (fZ) goto L_004efa76;
L_004ef792:; BB(0x004ef792);
    /* 004ef792: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004ef798: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef79a: je 0x4ef848 */ if (fZ) goto L_004ef848;
L_004ef7a0:; BB(0x004ef7a0);
    /* 004ef7a0: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef7a3: jne 0x4ef7f6 */ if (!fZ) goto L_004ef7f6;
L_004ef7a5:; BB(0x004ef7a5);
    /* 004ef7a5: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004ef7a8: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004ef7ab: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 004ef7ae: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef7b1: jne 0x4ef7c3 */ if (!fZ) goto L_004ef7c3;
L_004ef7b3:; BB(0x004ef7b3);
    /* 004ef7b3: call 0x4f4214 */ r_esp -= 4; W32(r_esp, 0x4ef7b8u); f_004f4214();
    /* 004ef7b8: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004ef7be: jmp 0x4ef89d */ goto L_004ef89d;
L_004ef7c3:; BB(0x004ef7c3);
    /* 004ef7c3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef7c6: je 0x4ef89d */ if (fZ) goto L_004ef89d;
L_004ef7cc:; BB(0x004ef7cc);
    /* 004ef7cc: mov dword ptr [esp + 0x6c], 1 */ W32((u32)(r_esp+0x6cu), 0x1u);
    /* 004ef7d4: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 004ef7d8: mov dword ptr [esp + 0x70], 3 */ W32((u32)(r_esp+0x70u), 0x3u);
    /* 004ef7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef7e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef7e3: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4ef7e8u); f_004f4128();
    /* 004ef7e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef7eb: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004ef7f1: jmp 0x4ef89d */ goto L_004ef89d;
L_004ef7f6:; BB(0x004ef7f6);
    /* 004ef7f6: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef7f9: jne 0x4ef83b */ if (!fZ) goto L_004ef83b;
L_004ef7fb:; BB(0x004ef7fb);
    /* 004ef7fb: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004ef7fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef800: je 0x4ef81c */ if (fZ) goto L_004ef81c;
L_004ef802:; BB(0x004ef802);
    /* 004ef802: mov eax, dword ptr [0xa720ac] */ r_eax = R32((u32)(0xa720acu));
    /* 004ef807: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef80a: je 0x4ef81c */ if (fZ) goto L_004ef81c;
L_004ef80c:; BB(0x004ef80c);
    /* 004ef80c: call 0x4f4214 */ r_esp -= 4; W32(r_esp, 0x4ef811u); f_004f4214();
    /* 004ef811: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004ef817: jmp 0x4ef89d */ goto L_004ef89d;
L_004ef81c:; BB(0x004ef81c);
    /* 004ef81c: mov dword ptr [esp + 0x68], 2 */ W32((u32)(r_esp+0x68u), 0x2u);
    /* 004ef824: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 004ef828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef829: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef82b: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4ef830u); f_004f4128();
    /* 004ef830: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef833: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004ef839: jmp 0x4ef89d */ goto L_004ef89d;
L_004ef83b:; BB(0x004ef83b);
    /* 004ef83b: call 0x4f4214 */ r_esp -= 4; W32(r_esp, 0x4ef840u); f_004f4214();
    /* 004ef840: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004ef846: jmp 0x4ef89d */ goto L_004ef89d;
L_004ef848:; BB(0x004ef848);
    /* 004ef848: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4ef84du); f_004e9398();
    /* 004ef84d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef84f: je 0x4ef892 */ if (fZ) goto L_004ef892;
L_004ef851:; BB(0x004ef851);
    /* 004ef851: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004ef854: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004ef857: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 004ef85a: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef85d: je 0x4efa28 */ if (fZ) goto L_004efa28;
L_004ef863:; BB(0x004ef863);
    /* 004ef863: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004ef866: movsx edx, byte ptr [eax + 0x30] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x30u));
    /* 004ef86a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef86d: je 0x4ef9fb */ if (fZ) goto L_004ef9fb;
L_004ef873:; BB(0x004ef873);
    /* 004ef873: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 004ef877: mov edx, 1 */ r_edx = 0x1u;
    /* 004ef87c: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 004ef880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ef881: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ef882: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4ef887u); f_004f4128();
    /* 004ef887: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef88a: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004ef890: jmp 0x4ef89d */ goto L_004ef89d;
L_004ef892:; BB(0x004ef892);
    /* 004ef892: call 0x4f4214 */ r_esp -= 4; W32(r_esp, 0x4ef897u); f_004f4214();
    /* 004ef897: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
L_004ef89d:; BB(0x004ef89d);
    /* 004ef89d: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 004ef8a0: add edi, 0x50 */ {  u32 a = r_edi; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ef8a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef8a5: je 0x4ef8b2 */ if (fZ) goto L_004ef8b2;
L_004ef8a7:; BB(0x004ef8a7);
    /* 004ef8a7: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef8aa: je 0x4efa5f */ if (fZ) goto L_004efa5f;
L_004ef8b0:; BB(0x004ef8b0);
    /* 004ef8b0: jmp 0x4ef8f8 */ goto L_004ef8f8;
L_004ef8b2:; BB(0x004ef8b2);
    /* 004ef8b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ef8b3: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4ef8b8u); f_004e732c();
    /* 004ef8b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef8b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef8bb: je 0x4ef8f8 */ if (fZ) goto L_004ef8f8;
L_004ef8bd:; BB(0x004ef8bd);
    /* 004ef8bd: fld dword ptr [0x91dc7c] */ FPUSH(R_F32((u32)(0x91dc7cu)));
    /* 004ef8c3: fadd dword ptr [ebx + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x44u));
    /* 004ef8c6: fcom dword ptr [0x91e1b4] */ fx_compare(ST(0), R_F32((u32)(0x91e1b4u))); 
    /* 004ef8cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef8ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef8cf: jbe 0x4ef8eb */ if ((fC||fZ)) goto L_004ef8eb;
L_004ef8d1:; BB(0x004ef8d1);
    /* 004ef8d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef8d3: fld dword ptr [0x91e1b4] */ FPUSH(R_F32((u32)(0x91e1b4u)));
    /* 004ef8d9: fld dword ptr [0x91e1a8] */ FPUSH(R_F32((u32)(0x91e1a8u)));
    /* 004ef8df: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004ef8e4: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 004ef8e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ef8e9: jmp 0x4ef917 */ goto L_004ef917;
L_004ef8eb:; BB(0x004ef8eb);
    /* 004ef8eb: fld dword ptr [0x91e1a8] */ FPUSH(R_F32((u32)(0x91e1a8u)));
    /* 004ef8f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ef8f3: fst dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0));
    /* 004ef8f6: jmp 0x4ef917 */ goto L_004ef917;
L_004ef8f8:; BB(0x004ef8f8);
    /* 004ef8f8: fld dword ptr [0x91dc78] */ FPUSH(R_F32((u32)(0x91dc78u)));
    /* 004ef8fe: fadd dword ptr [ebx + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x44u));
    /* 004ef901: fld dword ptr [0x91e1a8] */ FPUSH(R_F32((u32)(0x91e1a8u)));
    /* 004ef907: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ef909: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef90b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef90c: ja 0x4ef9c0 */ if ((!fC&&!fZ)) goto L_004ef9c0;
L_004ef912:; BB(0x004ef912);
    /* 004ef912: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ef914: fst dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0));
L_004ef917:; BB(0x004ef917);
    /* 004ef917: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004ef919: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ef91b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ef91c: jbe 0x4ef9c9 */ if ((fC||fZ)) goto L_004ef9c9;
L_004ef922:; BB(0x004ef922);
    /* 004ef922: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ef923: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x4ef928u); f_007ac344();
    /* 004ef928: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ef929: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004ef92d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004ef931: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef934: fadd dword ptr [eax*4 + 0x91deb0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x91deb0u));
    /* 004ef93b: fsubr dword ptr [0x91dc74] */ ST(0) = R_F32((u32)(0x91dc74u)) - ST(0);
    /* 004ef941: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004ef944: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ef947: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004ef94b: test edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef951: jne 0x4ef958 */ if (!fZ) goto L_004ef958;
L_004ef953:; BB(0x004ef953);
    /* 004ef953: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
L_004ef958:; BB(0x004ef958);
    /* 004ef958: fld dword ptr [0x91e1ac] */ FPUSH(R_F32((u32)(0x91e1acu)));
    /* 004ef95e: fmul dword ptr [ebx + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x44u));
    /* 004ef961: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004ef965: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004ef96a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ef96f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ef973: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004ef977: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 004ef97b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004ef97f: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ef985: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 004ef989: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004ef98c: or esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004ef98e: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4ef993u); f_004d28a4();
    /* 004ef993: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004ef997: fld dword ptr [0x91dc70] */ FPUSH(R_F32((u32)(0x91dc70u)));
    /* 004ef99d: fmul dword ptr [0xa7221c] */ ST(0) = ST(0) * R_F32((u32)(0xa7221cu));
    /* 004ef9a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ef9a5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ef9a8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004ef9ac: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004ef9b0: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004ef9b4: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4ef9b9u); f_007ac12c();
    /* 004ef9b9: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4ef9beu); f_004d2968();
    /* 004ef9be: jmp 0x4ef9c9 */ goto L_004ef9c9;
L_004ef9c0:; BB(0x004ef9c0);
    /* 004ef9c0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ef9c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ef9c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ef9c6: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
L_004ef9c9:; BB(0x004ef9c9);
    /* 004ef9c9: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 004ef9cc: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x4ef9d1u); f_00818f50();
    /* 004ef9d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ef9d3: call 0x4efb84 */ r_esp -= 4; W32(r_esp, 0x4ef9d8u); f_004efb84();
    /* 004ef9d8: mov eax, dword ptr [0xa72574] */ r_eax = R32((u32)(0xa72574u));
    /* 004ef9dd: mov eax, dword ptr [eax*4 + 0x9b8f3c] */ r_eax = R32((u32)(r_eax*4+0x9b8f3cu));
    /* 004ef9e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef9e6: je 0x4ef9ec */ if (fZ) goto L_004ef9ec;
L_004ef9e8:; BB(0x004ef9e8);
    /* 004ef9e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ef9ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ef9ecu); call_ind(t); }
L_004ef9ec:; BB(0x004ef9ec);
    /* 004ef9ec: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4ef9f1u); f_007a9318();
    /* 004ef9f1: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ef9f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ef9f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ef9f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ef9fa: ret  */ FN_RET(0x004ef530); r_esp += 4; return;
L_004ef9fb:; BB(0x004ef9fb);
    /* 004ef9fb: mov dword ptr [esp + 0x7c], 1 */ W32((u32)(r_esp+0x7cu), 0x1u);
    /* 004efa03: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 004efa07: mov dword ptr [esp + 0x80], 4 */ W32((u32)(r_esp+0x80u), 0x4u);
    /* 004efa12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004efa13: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004efa15: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4efa1au); f_004f4128();
    /* 004efa1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004efa1d: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004efa23: jmp 0x4ef89d */ goto L_004ef89d;
L_004efa28:; BB(0x004efa28);
    /* 004efa28: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004efa2b: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004efa2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004efa2f: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4efa34u); f_004e732c();
    /* 004efa34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004efa35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004efa37: jne 0x4ef863 */ if (!fZ) goto L_004ef863;
L_004efa3d:; BB(0x004efa3d);
    /* 004efa3d: mov dword ptr [esp + 0x74], 4 */ W32((u32)(r_esp+0x74u), 0x4u);
    /* 004efa45: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 004efa49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004efa4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004efa4c: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4efa51u); f_004f4128();
    /* 004efa51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004efa54: mov esi, dword ptr [0xa72574] */ r_esi = R32((u32)(0xa72574u));
    /* 004efa5a: jmp 0x4ef89d */ goto L_004ef89d;
L_004efa5f:; BB(0x004efa5f);
    /* 004efa5f: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004efa62: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004efa65: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 004efa68: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004efa6b: je 0x4ef8f8 */ if (fZ) goto L_004ef8f8;
L_004efa71:; BB(0x004efa71);
    /* 004efa71: jmp 0x4ef8b2 */ goto L_004ef8b2;
L_004efa76:; BB(0x004efa76);
    /* 004efa76: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004efa79: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004efa7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004efa7d: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4efa82u); f_004e732c();
    /* 004efa82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004efa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004efa85: jne 0x4ef792 */ if (!fZ) goto L_004ef792;
L_004efa8b:; BB(0x004efa8b);
    /* 004efa8b: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004efa8e: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004efa91: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4efa96u); f_0082dcbc();
    /* 004efa96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004efa97: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004efa9a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4efa9fu); f_0082e900();
    /* 004efa9f: fld dword ptr [0x91e1b0] */ FPUSH(R_F32((u32)(0x91e1b0u)));
    /* 004efaa5: fld dword ptr [0x91dc84] */ FPUSH(R_F32((u32)(0x91dc84u)));
    /* 004efaab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efaad: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004efaaf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efab1: fadd dword ptr [0x91e1b4] */ ST(0) = ST(0) + R_F32((u32)(0x91e1b4u));
    /* 004efab7: fmul dword ptr [0x91e1ac] */ ST(0) = ST(0) * R_F32((u32)(0x91e1acu));
    /* 004efabd: fld dword ptr [0xa7221c] */ FPUSH(R_F32((u32)(0xa7221cu)));
    /* 004efac3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efac5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004efac9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004eface: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004efad3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004efad7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004efadb: fistp qword ptr [esp + 0x28] */ W64((u32)(r_esp+0x28u), (u64)fx_int64(ST(0))); FPOP();
    /* 004efadf: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004efae3: fld dword ptr [0x91dc88] */ FPUSH(R_F32((u32)(0x91dc88u)));
    /* 004efae9: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 004efaed: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004efaef: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004efaf1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004efaf3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efaf5: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 004efaf9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004efafb: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004efaff: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004efb03: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004efb06: mov esi, 0x3b */ r_esi = 0x3bu;
    /* 004efb0b: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_004efb11:; BB(0x004efb11);
    /* 004efb11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004efb12: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4efb17u); f_007930dc();
    /* 004efb17: mov ebp, eax */ r_ebp = r_eax;
    /* 004efb19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004efb1a: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x4efb1fu); f_007ac344();
    /* 004efb1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004efb22: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004efb26: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004efb2a: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004efb2d: fadd dword ptr [eax*4 + 0x91deb0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x91deb0u));
    /* 004efb34: fsubr dword ptr [0x91dc80] */ ST(0) = R_F32((u32)(0x91dc80u)) - ST(0);
    /* 004efb3a: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004efb3e: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4efb43u); f_004d28a4();
    /* 004efb43: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 004efb47: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004efb4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efb4d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004efb50: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004efb54: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004efb58: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004efb5c: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4efb61u); f_007ac12c();
    /* 004efb61: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4efb66u); f_004d2968();
    /* 004efb66: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004efb6a: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 004efb6e: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004efb72: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004efb75: cmp esi, 0x3d */ {  u32 a = r_esi; u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efb78: jl 0x4efb11 */ if ((fS!=fO)) goto L_004efb11;
L_004efb7a:; BB(0x004efb7a);
    /* 004efb7a: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 004efb7e: jmp 0x4ef792 */ goto L_004ef792;
}

void f_004efb84(void) /* sub_4EFB84 */
{
    FN_ENTER(0x004efb84);
    /* 004efb84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004efb85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004efb86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004efb87: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004efb8a: mov esi, ecx */ r_esi = r_ecx;
    /* 004efb8c: movzx edx, byte ptr [0xa72354] */ r_edx = (u32)R8((u32)(0xa72354u));
    /* 004efb93: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004efb96: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004efb99: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004efb9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004efb9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004efb9e: ja 0x4efba2 */ if ((!fC&&!fZ)) goto L_004efba2;
L_004efba0:; BB(0x004efba0);
    /* 004efba0: fst st(1) */ ST(1) = ST(0);
L_004efba2:; BB(0x004efba2);
    /* 004efba2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004efba4: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004efba7: jne 0x4efbc4 */ if (!fZ) goto L_004efbc4;
L_004efba9:; BB(0x004efba9);
    /* 004efba9: fld dword ptr [0x91dcc4] */ FPUSH(R_F32((u32)(0x91dcc4u)));
    /* 004efbaf: mov dword ptr [0xa72358], 0x3ea8f5c3 */ W32((u32)(0xa72358u), 0x3ea8f5c3u);
    /* 004efbb9: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004efbbc: mov byte ptr [0xa72354], dl */ W8((u32)(0xa72354u), (u8)r_edx);
    /* 004efbc2: jmp 0x4efbca */ goto L_004efbca;
L_004efbc4:; BB(0x004efbc4);
    /* 004efbc4: fld dword ptr [0xa72358] */ FPUSH(R_F32((u32)(0xa72358u)));
L_004efbca:; BB(0x004efbca);
    /* 004efbca: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004efbcd: jne 0x4efbe2 */ if (!fZ) goto L_004efbe2;
L_004efbcf:; BB(0x004efbcf);
    /* 004efbcf: mov dword ptr [0xa7235c], 0x3f28f5c3 */ W32((u32)(0xa7235cu), 0x3f28f5c3u);
    /* 004efbd9: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004efbdc: mov byte ptr [0xa72354], dl */ W8((u32)(0xa72354u), (u8)r_edx);
L_004efbe2:; BB(0x004efbe2);
    /* 004efbe2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004efbe4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004efbe6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004efbe7: jae 0x4f0089 */ if (!fC) goto L_004f0089;
L_004efbed:; BB(0x004efbed);
    /* 004efbed: fld dword ptr [0xa7235c] */ FPUSH(R_F32((u32)(0xa7235cu)));
    /* 004efbf3: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004efbf5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004efbf7: mov edi, 0x3f800000 */ r_edi = 0x3f800000u;
    /* 004efbfc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004efbfd: ja 0x4efc0b */ if ((!fC&&!fZ)) goto L_004efc0b;
L_004efbff:; BB(0x004efbff);
    /* 004efbff: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004efc01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004efc03: fld dword ptr [0x91e190] */ FPUSH(R_F32((u32)(0x91e190u)));
    /* 004efc09: jmp 0x4efc17 */ goto L_004efc17;
L_004efc0b:; BB(0x004efc0b);
    /* 004efc0b: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 004efc0d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efc0f: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004efc11: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004efc13: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004efc15: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
L_004efc17:; BB(0x004efc17);
    /* 004efc17: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004efc1a: jne 0x4efc32 */ if (!fZ) goto L_004efc32;
L_004efc1c:; BB(0x004efc1c);
    /* 004efc1c: mov dword ptr [0xa72360], 0x42e60000 */ W32((u32)(0xa72360u), 0x42e60000u);
    /* 004efc26: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004efc29: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004efc2c: mov byte ptr [0xa72354], dl */ W8((u32)(0xa72354u), (u8)r_edx);
L_004efc32:; BB(0x004efc32);
    /* 004efc32: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004efc35: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 004efc39: mov dword ptr [esp + 0x1c], 0x42a00000 */ W32((u32)(r_esp+0x1cu), 0x42a00000u);
    /* 004efc41: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004efc43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004efc45: jle 0x4f0090 */ if ((fZ||fS!=fO)) goto L_004f0090;
L_004efc4b:; BB(0x004efc4b);
    /* 004efc4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efc4d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004efc51: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_004efc55:; BB(0x004efc55);
    /* 004efc55: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004efc58: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 004efc5b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004efc5d: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004efc63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004efc64: call 0x4ea00c */ r_esp -= 4; W32(r_esp, 0x4efc69u); f_004ea00c();
    /* 004efc69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004efc6a: add eax, 0x90 */ {  u32 a = r_eax; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004efc6f: mov edx, 0xa7 */ r_edx = 0xa7u;
    /* 004efc74: cmp eax, 0xa7 */ {  u32 a = r_eax; u32 b = 0xa7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efc79: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efc7f:; BB(0x004efc7f);
    /* 004efc7f: mov edx, 0xb4 */ r_edx = 0xb4u;
    /* 004efc84: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efc89: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efc8f:; BB(0x004efc8f);
    /* 004efc8f: mov edx, 0xc1 */ r_edx = 0xc1u;
    /* 004efc94: cmp eax, 0xc1 */ {  u32 a = r_eax; u32 b = 0xc1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efc99: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efc9f:; BB(0x004efc9f);
    /* 004efc9f: mov edx, 0xce */ r_edx = 0xceu;
    /* 004efca4: cmp eax, 0xce */ {  u32 a = r_eax; u32 b = 0xceu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efca9: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efcaf:; BB(0x004efcaf);
    /* 004efcaf: mov edx, 0xdb */ r_edx = 0xdbu;
    /* 004efcb4: cmp eax, 0xdb */ {  u32 a = r_eax; u32 b = 0xdbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efcb9: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efcbb:; BB(0x004efcbb);
    /* 004efcbb: mov edx, 0xe7 */ r_edx = 0xe7u;
    /* 004efcc0: cmp eax, 0xe7 */ {  u32 a = r_eax; u32 b = 0xe7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efcc5: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efcc7:; BB(0x004efcc7);
    /* 004efcc7: mov edx, 0xf3 */ r_edx = 0xf3u;
    /* 004efccc: cmp eax, 0xf3 */ {  u32 a = r_eax; u32 b = 0xf3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efcd1: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efcd3:; BB(0x004efcd3);
    /* 004efcd3: mov edx, 0x101 */ r_edx = 0x101u;
    /* 004efcd8: cmp eax, 0x101 */ {  u32 a = r_eax; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efcdd: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efcdf:; BB(0x004efcdf);
    /* 004efcdf: mov edx, 0x10f */ r_edx = 0x10fu;
    /* 004efce4: cmp eax, 0x10f */ {  u32 a = r_eax; u32 b = 0x10fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efce9: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efceb:; BB(0x004efceb);
    /* 004efceb: mov edx, 0x11c */ r_edx = 0x11cu;
    /* 004efcf0: cmp eax, 0x11c */ {  u32 a = r_eax; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efcf5: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efcf7:; BB(0x004efcf7);
    /* 004efcf7: mov edx, 0x129 */ r_edx = 0x129u;
    /* 004efcfc: cmp eax, 0x129 */ {  u32 a = r_eax; u32 b = 0x129u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efd01: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efd03:; BB(0x004efd03);
    /* 004efd03: mov edx, 0x136 */ r_edx = 0x136u;
    /* 004efd08: cmp eax, 0x136 */ {  u32 a = r_eax; u32 b = 0x136u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efd0d: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efd0f:; BB(0x004efd0f);
    /* 004efd0f: mov edx, 0x143 */ r_edx = 0x143u;
    /* 004efd14: cmp eax, 0x143 */ {  u32 a = r_eax; u32 b = 0x143u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efd19: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efd1b:; BB(0x004efd1b);
    /* 004efd1b: mov edx, 0x14f */ r_edx = 0x14fu;
    /* 004efd20: cmp eax, 0x14f */ {  u32 a = r_eax; u32 b = 0x14fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efd25: jl 0x4efd2c */ if ((fS!=fO)) goto L_004efd2c;
L_004efd27:; BB(0x004efd27);
    /* 004efd27: mov edx, 0x15b */ r_edx = 0x15bu;
L_004efd2c:; BB(0x004efd2c);
    /* 004efd2c: fld dword ptr [0xa72360] */ FPUSH(R_F32((u32)(0xa72360u)));
    /* 004efd32: mov eax, dword ptr [0xa72360] */ r_eax = R32((u32)(0xa72360u));
    /* 004efd37: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004efd3b: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004efd3f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004efd41: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 004efd45: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004efd49: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004efd4b: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004efd4f: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4efd54u); f_004e9398();
    /* 004efd54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004efd56: je 0x4efda4 */ if (fZ) goto L_004efda4;
L_004efd58:; BB(0x004efd58);
    /* 004efd58: cmp edi, dword ptr [esi + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004efd5b: jne 0x4efd9e */ if (!fZ) goto L_004efd9e;
L_004efd5d:; BB(0x004efd5d);
    /* 004efd5d: movzx eax, byte ptr [0xa72354] */ r_eax = (u32)R8((u32)(0xa72354u));
    /* 004efd64: mov ebx, 2 */ r_ebx = 0x2u;
    /* 004efd69: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004efd6b: jne 0x4efd81 */ if (!fZ) goto L_004efd81;
L_004efd6d:; BB(0x004efd6d);
    /* 004efd6d: mov dword ptr [0xa72364], 9 */ W32((u32)(0xa72364u), 0x9u);
    /* 004efd77: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004efd7c: mov byte ptr [0xa72354], al */ W8((u32)(0xa72354u), (u8)r_eax);
L_004efd81:; BB(0x004efd81);
    /* 004efd81: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004efd84: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004efd87: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4efd8cu); f_0082dcbc();
    /* 004efd8c: fild dword ptr [0xa72364] */ FPUSH((long double)(i32)R32((u32)(0xa72364u)));
    /* 004efd92: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004efd94: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 004efd98: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004efd9c: jmp 0x4efda8 */ goto L_004efda8;
L_004efd9e:; BB(0x004efd9e);
    /* 004efd9e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004efda2: jmp 0x4efda8 */ goto L_004efda8;
L_004efda4:; BB(0x004efda4);
    /* 004efda4: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
L_004efda8:; BB(0x004efda8);
    /* 004efda8: fsubr dword ptr [esp + 0x40] */ ST(0) = R_F32((u32)(r_esp+0x40u)) - ST(0);
    /* 004efdac: fdiv dword ptr [0x91dcb8] */ ST(0) = ST(0) / R_F32((u32)(0x91dcb8u));
    /* 004efdb2: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004efdb6: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004efdba: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 004efdbd: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004efdc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004efdc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004efdc3: push 0xc0080000 */ { u32 v = 0xc0080000u; r_esp -= 4; W32(r_esp, v); }
    /* 004efdc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004efdc9: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4efdceu); f_004e9eb8();
    /* 004efdce: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 004efdd2: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004efdd6: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 004efdda: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 004efde2: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004efde6: add ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004efde9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004efdea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004efdeb: push 0xc0080000 */ { u32 v = 0xc0080000u; r_esp -= 4; W32(r_esp, v); }
    /* 004efdf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004efdf1: call 0x4e9eb8 */ r_esp -= 4; W32(r_esp, 0x4efdf6u); f_004e9eb8();
    /* 004efdf6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004efdf9: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 004efdfd: fadd dword ptr [0x91dcb4] */ ST(0) = ST(0) + R_F32((u32)(0x91dcb4u));
    /* 004efe03: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004efe07: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004efe0a: cmp edi, dword ptr [esi + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efe0d: jl 0x4efc55 */ if ((fS!=fO)) goto L_004efc55;
L_004efe13:; BB(0x004efe13);
    /* 004efe13: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004efe17: movzx edx, byte ptr [0xa72354] */ r_edx = (u32)R8((u32)(0xa72354u));
L_004efe1e:; BB(0x004efe1e);
    /* 004efe1e: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004efe21: jne 0x4efe39 */ if (!fZ) goto L_004efe39;
L_004efe23:; BB(0x004efe23);
    /* 004efe23: mov dword ptr [0xa72368], 0x3ea8f5c3 */ W32((u32)(0xa72368u), 0x3ea8f5c3u);
    /* 004efe2d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004efe30: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004efe33: mov byte ptr [0xa72354], dl */ W8((u32)(0xa72354u), (u8)r_edx);
L_004efe39:; BB(0x004efe39);
    /* 004efe39: fld dword ptr [0x91dcb0] */ FPUSH(R_F32((u32)(0x91dcb0u)));
    /* 004efe3f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004efe41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004efe43: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004efe44: jae 0x4f0097 */ if (!fC) goto L_004f0097;
L_004efe4a:; BB(0x004efe4a);
    /* 004efe4a: fld dword ptr [0xa72368] */ FPUSH(R_F32((u32)(0xa72368u)));
    /* 004efe50: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004efe52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004efe54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004efe55: ja 0x4efe63 */ if ((!fC&&!fZ)) goto L_004efe63;
L_004efe57:; BB(0x004efe57);
    /* 004efe57: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004efe59: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004efe5b: fld dword ptr [0x91e190] */ FPUSH(R_F32((u32)(0x91e190u)));
    /* 004efe61: jmp 0x4efe6f */ goto L_004efe6f;
L_004efe63:; BB(0x004efe63);
    /* 004efe63: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 004efe65: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efe67: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004efe69: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004efe6b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004efe6d: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
L_004efe6f:; BB(0x004efe6f);
    /* 004efe6f: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004efe72: mov dword ptr [esp + 0x20], 0x42be0000 */ W32((u32)(r_esp+0x20u), 0x42be0000u);
    /* 004efe7a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004efe7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004efe7e: mov dword ptr [esp + 0x24], 0x42a00000 */ W32((u32)(r_esp+0x24u), 0x42a00000u);
    /* 004efe86: jle 0x4f009e */ if ((fZ||fS!=fO)) goto L_004f009e;
L_004efe8c:; BB(0x004efe8c);
    /* 004efe8c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004efe8e: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004efe92: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_004efe96:; BB(0x004efe96);
    /* 004efe96: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004efe98: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4efe9du); f_004e9398();
    /* 004efe9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004efe9f: je 0x4efeab */ if (fZ) goto L_004efeab;
L_004efea1:; BB(0x004efea1);
    /* 004efea1: cmp edi, dword ptr [esi + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004efea4: jne 0x4efeab */ if (!fZ) goto L_004efeab;
L_004efea6:; BB(0x004efea6);
    /* 004efea6: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_004efeab:; BB(0x004efeab);
    /* 004efeab: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004efeaf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004efeb3: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004efeb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004efeba: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004efebd: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004efec5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004efec9: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4efeceu); f_004e9ef8();
    /* 004efece: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004efed2: fadd dword ptr [0x91dca4] */ ST(0) = ST(0) + R_F32((u32)(0x91dca4u));
    /* 004efed8: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004efedc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004efedf: cmp edi, dword ptr [esi + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004efee2: jl 0x4efe96 */ if ((fS!=fO)) goto L_004efe96;
L_004efee4:; BB(0x004efee4);
    /* 004efee4: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004efee8: movzx edx, byte ptr [0xa72354] */ r_edx = (u32)R8((u32)(0xa72354u));
L_004efeef:; BB(0x004efeef);
    /* 004efeef: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004efef2: jne 0x4eff12 */ if (!fZ) goto L_004eff12;
L_004efef4:; BB(0x004efef4);
    /* 004efef4: fld dword ptr [0x91dcc0] */ FPUSH(R_F32((u32)(0x91dcc0u)));
    /* 004efefa: mov dword ptr [0xa7236c], 0x3f28f5c3 */ W32((u32)(0xa7236cu), 0x3f28f5c3u);
    /* 004eff04: or edx, 0xffffff20 */ {  u32 a = r_edx; u32 b = 0xffffff20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004eff0a: mov byte ptr [0xa72354], dl */ W8((u32)(0xa72354u), (u8)r_edx);
    /* 004eff10: jmp 0x4eff18 */ goto L_004eff18;
L_004eff12:; BB(0x004eff12);
    /* 004eff12: fld dword ptr [0xa7236c] */ FPUSH(R_F32((u32)(0xa7236cu)));
L_004eff18:; BB(0x004eff18);
    /* 004eff18: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eff1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004eff1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004eff1d: jae 0x4f00a5 */ if (!fC) goto L_004f00a5;
L_004eff23:; BB(0x004eff23);
    /* 004eff23: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004eff25: fld dword ptr [0x91dca0] */ FPUSH(R_F32((u32)(0x91dca0u)));
    /* 004eff2b: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004eff2d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004eff2f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004eff31: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 004eff34: mov ecx, 0x43100000 */ r_ecx = 0x43100000u;
    /* 004eff39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004eff3b: mov edx, 0x42ba0000 */ r_edx = 0x42ba0000u;
    /* 004eff40: mov edi, 0 */ r_edi = 0x0u;
    /* 004eff45: jle 0x4f00b0 */ if ((fZ||fS!=fO)) goto L_004f00b0;
L_004eff4b:; BB(0x004eff4b);
    /* 004eff4b: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004eff4f: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004eff53: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004eff57: jmp 0x4eff5d */ goto L_004eff5d;
L_004eff59:; BB(0x004eff59);
    /* 004eff59: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_004eff5d:; BB(0x004eff5d);
    /* 004eff5d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004eff60: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 004eff63: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 004eff66: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff69: je 0x4f0069 */ if (fZ) goto L_004f0069;
L_004eff6f:; BB(0x004eff6f);
    /* 004eff6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eff71: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
L_004eff75:; BB(0x004eff75);
    /* 004eff75: call 0x4e9398 */ r_esp -= 4; W32(r_esp, 0x4eff7au); f_004e9398();
    /* 004eff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff7c: je 0x4effe3 */ if (fZ) goto L_004effe3;
L_004eff7e:; BB(0x004eff7e);
    /* 004eff7e: cmp edi, dword ptr [esi + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eff81: jne 0x4effe3 */ if (!fZ) goto L_004effe3;
L_004eff83:; BB(0x004eff83);
    /* 004eff83: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004eff86: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004eff89: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4eff8eu); f_0082dcbc();
    /* 004eff8e: fmul dword ptr [0x91dc94] */ ST(0) = ST(0) * R_F32((u32)(0x91dc94u));
    /* 004eff94: fld dword ptr [0x91e190] */ FPUSH(R_F32((u32)(0x91e190u)));
    /* 004eff9a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004eff9c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004eff9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004effa0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004effa1: jae 0x4effa5 */ if (!fC) goto L_004effa5;
L_004effa3:; BB(0x004effa3);
    /* 004effa3: fst st(1) */ ST(1) = ST(0);
L_004effa5:; BB(0x004effa5);
    /* 004effa5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004effa7: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004effab: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004effaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004effb1: je 0x4effb9 */ if (fZ) goto L_004effb9;
L_004effb3:; BB(0x004effb3);
    /* 004effb3: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004effb9:; BB(0x004effb9);
    /* 004effb9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004effbc: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004effbf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004effc3: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004effc9: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004effcc: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004effd4: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004effd8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004effdc: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4effe1u); f_004e9ef8();
    /* 004effe1: jmp 0x4f004a */ goto L_004f004a;
L_004effe3:; BB(0x004effe3);
    /* 004effe3: movzx eax, byte ptr [0xa72354] */ r_eax = (u32)R8((u32)(0xa72354u));
    /* 004effea: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004effec: jne 0x4f000a */ if (!fZ) goto L_004f000a;
L_004effee:; BB(0x004effee);
    /* 004effee: fld dword ptr [0x91e180] */ FPUSH(R_F32((u32)(0x91e180u)));
    /* 004efff4: mov dword ptr [0xa72370], 0x3f19999a */ W32((u32)(0xa72370u), 0x3f19999au);
    /* 004efffe: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f0003: mov byte ptr [0xa72354], al */ W8((u32)(0xa72354u), (u8)r_eax);
    /* 004f0008: jmp 0x4f0010 */ goto L_004f0010;
L_004f000a:; BB(0x004f000a);
    /* 004f000a: fld dword ptr [0xa72370] */ FPUSH(R_F32((u32)(0xa72370u)));
L_004f0010:; BB(0x004f0010);
    /* 004f0010: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 004f0014: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 004f0018: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f001a: je 0x4f0022 */ if (fZ) goto L_004f0022;
L_004f001c:; BB(0x004f001c);
    /* 004f001c: fmul dword ptr [0x91dc90] */ ST(0) = ST(0) * R_F32((u32)(0x91dc90u));
L_004f0022:; BB(0x004f0022);
    /* 004f0022: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004f0025: mov edx, dword ptr [eax + ebx*2] */ r_edx = R32((u32)(r_eax+r_ebx*2));
    /* 004f0028: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f002c: add edx, 0x93 */ {  u32 a = r_edx; u32 b = 0x93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f0032: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f0035: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004f003d: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 004f0041: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004f0045: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f004au); f_004e9ef8();
L_004f004a:; BB(0x004f004a);
    /* 004f004a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f004e: fadd dword ptr [0x91dc8c] */ ST(0) = ST(0) + R_F32((u32)(0x91dc8cu));
    /* 004f0054: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f0057: cmp edi, dword ptr [esi + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f005a: jl 0x4eff59 */ if ((fS!=fO)) goto L_004eff59;
L_004f0060:; BB(0x004f0060);
    /* 004f0060: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0062: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f0065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f0066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f0068: ret  */ FN_RET(0x004efb84); r_esp += 4; return;
L_004f0069:; BB(0x004f0069);
    /* 004f0069: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004f006c: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f0070: call 0x4e732c */ r_esp -= 4; W32(r_esp, 0x4f0075u); f_004e732c();
    /* 004f0075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f0076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0078: mov eax, 0 */ r_eax = 0x0u;
    /* 004f007d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004f0080: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004f0084: jmp 0x4eff75 */ goto L_004eff75;
L_004f0089:; BB(0x004f0089);
    /* 004f0089: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f008b: jmp 0x4efe1e */ goto L_004efe1e;
L_004f0090:; BB(0x004f0090);
    /* 004f0090: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0092: jmp 0x4efe1e */ goto L_004efe1e;
L_004f0097:; BB(0x004f0097);
    /* 004f0097: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f0099: jmp 0x4efeef */ goto L_004efeef;
L_004f009e:; BB(0x004f009e);
    /* 004f009e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f00a0: jmp 0x4efeef */ goto L_004efeef;
L_004f00a5:; BB(0x004f00a5);
    /* 004f00a5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f00a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f00a9: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f00ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f00ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f00ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f00af: ret  */ FN_RET(0x004efb84); r_esp += 4; return;
L_004f00b0:; BB(0x004f00b0);
    /* 004f00b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f00b2: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f00b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f00b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f00b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f00b8: ret  */ FN_RET(0x004efb84); r_esp += 4; return;
}

