#include "protos.h"

void f_00679010(void) /* sub_679010 */
{
    FN_ENTER(0x00679010);
    /* 00679010: mov edx, ecx */ r_edx = r_ecx;
    /* 00679012: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00679016: mov eax, 1 */ r_eax = 0x1u;
    /* 0067901b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0067901d: or dword ptr [edx + 0x348], eax */ { u32 ad = (u32)(r_edx+0x348u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679023: ret 4 */ FN_RET(0x00679010); r_esp += 8; return;
}

void f_00679028(void) /* sub_679028 */
{
    FN_ENTER(0x00679028);
    /* 00679028: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00679029: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067902a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067902c: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 00679032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679034: je 0x67903d */ if (fZ) goto L_0067903d;
L_00679036:; BB(0x00679036);
    /* 00679036: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00679038: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x67903du); f_007aa094();
L_0067903d:; BB(0x0067903d);
    /* 0067903d: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00679044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679046: je 0x679056 */ if (fZ) goto L_00679056;
L_00679048:; BB(0x00679048);
    /* 00679048: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067904b: jne 0x6790b3 */ if (!fZ) goto L_006790b3;
L_0067904d:; BB(0x0067904d);
    /* 0067904d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067904f: call 0x6790b8 */ r_esp -= 4; W32(r_esp, 0x679054u); f_006790b8();
    /* 00679054: jmp 0x6790b3 */ goto L_006790b3;
L_00679056:; BB(0x00679056);
    /* 00679056: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00679059: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067905b: mov esi, ebx */ r_esi = r_ebx;
    /* 0067905d: mov ebx, eax */ r_ebx = r_eax;
L_0067905f:; BB(0x0067905f);
    /* 0067905f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00679060: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x679065u); f_0068d5a8();
    /* 00679065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679068: je 0x6790a8 */ if (fZ) goto L_006790a8;
L_0067906a:; BB(0x0067906a);
    /* 0067906a: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00679070: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679076: jne 0x6790a8 */ if (!fZ) goto L_006790a8;
L_00679078:; BB(0x00679078);
    /* 00679078: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0067907b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067907e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067907f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679080: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x679085u); f_007a9180();
    /* 00679085: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00679088: fcomp dword ptr [0x93b2a0] */ fx_compare(ST(0), R_F32((u32)(0x93b2a0u))); FPOP();
    /* 0067908e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00679090: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00679091: jae 0x6790a8 */ if (!fC) goto L_006790a8;
L_00679093:; BB(0x00679093);
    /* 00679093: mov edx, 1 */ r_edx = 0x1u;
    /* 00679098: mov word ptr [esi + 0x32e], dx */ W16((u32)(r_esi+0x32eu), (u16)r_edx);
    /* 0067909f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006790a1: mov word ptr [esi + 0x330], cx */ W16((u32)(r_esi+0x330u), (u16)r_ecx);
L_006790a8:; BB(0x006790a8);
    /* 006790a8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006790ab: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006790ae: jl 0x67905f */ if ((fS!=fO)) goto L_0067905f;
L_006790b0:; BB(0x006790b0);
    /* 006790b0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006790b3:; BB(0x006790b3);
    /* 006790b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006790b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006790b5: ret  */ FN_RET(0x00679028); r_esp += 4; return;
}

void f_006790b8(void) /* sub_6790B8 */
{
    FN_ENTER(0x006790b8);
    /* 006790b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006790bb: movsx eax, word ptr [ecx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x330u));
    /* 006790c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006790c4: je 0x6791d1 */ if (fZ) goto L_006791d1;
L_006790ca:; BB(0x006790ca);
    /* 006790ca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006790cd: jne 0x6791c5 */ if (!fZ) goto L_006791c5;
L_006790d3:; BB(0x006790d3);
    /* 006790d3: mov eax, dword ptr [ecx + 0x344] */ r_eax = R32((u32)(r_ecx+0x344u));
    /* 006790d9: cmp eax, 0x99 */ {  u32 a = r_eax; u32 b = 0x99u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006790de: jge 0x6791aa */ if ((fS==fO)) goto L_006791aa;
L_006790e4:; BB(0x006790e4);
    /* 006790e4: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 006790e8: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 006790ec: mov esi, ecx */ r_esi = r_ecx;
    /* 006790ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006790f0: mov ebx, eax */ r_ebx = r_eax;
    /* 006790f2: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
L_006790f6:; BB(0x006790f6);
    /* 006790f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006790f7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6790fcu); f_0068d5a8();
    /* 006790fc: mov edi, eax */ r_edi = r_eax;
    /* 006790fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00679101: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679103: je 0x67918a */ if (fZ) goto L_0067918a;
L_00679109:; BB(0x00679109);
    /* 00679109: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0067910f: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679115: jne 0x67918a */ if (!fZ) goto L_0067918a;
L_00679117:; BB(0x00679117);
    /* 00679117: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0067911a: test edx, 0x4000e00 */ {  u32 a = r_edx; u32 b = 0x4000e00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00679120: jne 0x67918a */ if (!fZ) goto L_0067918a;
L_00679122:; BB(0x00679122);
    /* 00679122: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00679124: mov edx, 1 */ r_edx = 0x1u;
    /* 00679129: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0067912b: test dword ptr [esi + 0x348], edx */ {  u32 a = R32((u32)(r_esi+0x348u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679131: je 0x67913a */ if (fZ) goto L_0067913a;
L_00679133:; BB(0x00679133);
    /* 00679133: mov edx, 1 */ r_edx = 0x1u;
    /* 00679138: jmp 0x67913c */ goto L_0067913c;
L_0067913a:; BB(0x0067913a);
    /* 0067913a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0067913c:; BB(0x0067913c);
    /* 0067913c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067913e: jne 0x67918a */ if (!fZ) goto L_0067918a;
L_00679140:; BB(0x00679140);
    /* 00679140: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00679145: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00679146: mov ecx, esi */ r_ecx = r_esi;
    /* 00679148: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x67914du); f_007b8338();
    /* 0067914d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067914f: je 0x67918a */ if (fZ) goto L_0067918a;
L_00679151:; BB(0x00679151);
    /* 00679151: mov dword ptr [esp], 0xf */ W32((u32)(r_esp), 0xfu);
    /* 00679158: mov ecx, esi */ r_ecx = r_esi;
    /* 0067915a: call 0x678fd8 */ r_esp -= 4; W32(r_esp, 0x67915fu); f_00678fd8();
    /* 0067915f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00679161: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00679165: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067916a: mov ecx, edi */ r_ecx = r_edi;
    /* 0067916c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067916d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067916e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679170: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679174: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679178: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00679179: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67917cu); call_ind(t); }
    /* 0067917c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067917e: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00679182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679183: mov ecx, esi */ r_ecx = r_esi;
    /* 00679185: call 0x679010 */ r_esp -= 4; W32(r_esp, 0x67918au); f_00679010();
L_0067918a:; BB(0x0067918a);
    /* 0067918a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067918d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679190: jl 0x6790f6 */ if ((fS!=fO)) goto L_006790f6;
L_00679196:; BB(0x00679196);
    /* 00679196: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0067919a: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0067919e: mov ecx, esi */ r_ecx = r_esi;
    /* 006791a0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006791a4: mov eax, dword ptr [ecx + 0x344] */ r_eax = R32((u32)(r_ecx+0x344u));
L_006791aa:; BB(0x006791aa);
    /* 006791aa: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006791ad: mov dword ptr [ecx + 0x344], eax */ W32((u32)(r_ecx+0x344u), r_eax);
    /* 006791b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006791b5: jge 0x6791d6 */ if ((fS==fO)) goto L_006791d6;
L_006791b7:; BB(0x006791b7);
    /* 006791b7: mov eax, 2 */ r_eax = 0x2u;
    /* 006791bc: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 006791c3: jmp 0x6791d6 */ goto L_006791d6;
L_006791c5:; BB(0x006791c5);
    /* 006791c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006791c8: jne 0x6791d6 */ if (!fZ) goto L_006791d6;
L_006791ca:; BB(0x006791ca);
    /* 006791ca: call 0x6791dc */ r_esp -= 4; W32(r_esp, 0x6791cfu); f_006791dc();
    /* 006791cf: jmp 0x6791d6 */ goto L_006791d6;
L_006791d1:; BB(0x006791d1);
    /* 006791d1: call 0x679558 */ r_esp -= 4; W32(r_esp, 0x6791d6u); f_00679558();
L_006791d6:; BB(0x006791d6);
    /* 006791d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006791d9: ret  */ FN_RET(0x006790b8); r_esp += 4; return;
}

void f_006791dc(void) /* sub_6791DC */
{
    FN_ENTER(0x006791dc);
    /* 006791dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006791dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006791df: mov ecx, dword ptr [ebx + 0x340] */ r_ecx = R32((u32)(r_ebx+0x340u));
    /* 006791e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006791e7: je 0x6791f0 */ if (fZ) goto L_006791f0;
L_006791e9:; BB(0x006791e9);
    /* 006791e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006791eb: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x6791f0u); f_00508dac();
L_006791f0:; BB(0x006791f0);
    /* 006791f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006791f2: mov dword ptr [ebx + 0x348], eax */ W32((u32)(r_ebx+0x348u), r_eax);
    /* 006791f8: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 006791ff: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00679206: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00679207: ret  */ FN_RET(0x006791dc); r_esp += 4; return;
}

void f_00679208(void) /* sub_679208 */
{
    FN_ENTER(0x00679208);
    /* 00679208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00679209: mov edi, ecx */ r_edi = r_ecx;
    /* 0067920b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0067920d: mov ecx, edi */ r_ecx = r_edi;
    /* 0067920f: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00679214: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00679219: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x67921cu); call_ind(t); }
    /* 0067921c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067921e: jne 0x679222 */ if (!fZ) goto L_00679222;
L_00679220:; BB(0x00679220);
    /* 00679220: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00679221: ret  */ FN_RET(0x00679208); r_esp += 4; return;
L_00679222:; BB(0x00679222);
    /* 00679222: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x679227u); f_0082d7b0();
    /* 00679227: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0067922a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67922fu); f_0082d838();
    /* 0067922f: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00679232: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x679237u); f_00829cc8();
    /* 00679237: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067923d: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00679243: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679249: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067924c: call 0x8304e0 */ r_esp -= 4; W32(r_esp, 0x679251u); f_008304e0();
    /* 00679251: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00679254: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x679259u); f_0082da80();
    /* 00679259: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067925a: ret  */ FN_RET(0x00679208); r_esp += 4; return;
}

void f_0067925c(void) /* sub_67925C */
{
    FN_ENTER(0x0067925c);
    /* 0067925c: mov ecx, dword ptr [0xa8ffb4] */ r_ecx = R32((u32)(0xa8ffb4u));
    /* 00679262: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679264: je 0x679279 */ if (fZ) goto L_00679279;
L_00679266:; BB(0x00679266);
    /* 00679266: je 0x67926f */ if (fZ) goto L_0067926f;
L_00679268:; BB(0x00679268);
    /* 00679268: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067926a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x67926fu); f_004066a8();
L_0067926f:; BB(0x0067926f);
    /* 0067926f: mov dword ptr [0xa8ffb4], 0 */ W32((u32)(0xa8ffb4u), 0x0u);
L_00679279:; BB(0x00679279);
    /* 00679279: ret  */ FN_RET(0x0067925c); r_esp += 4; return;
}

void f_0067927c(void)
{
    FN_ENTER(0x0067927c);
    /* 0067927c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067927d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067927f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00679281: push 0x8e9e00 */ { u32 v = 0x8e9e00u; r_esp -= 4; W32(r_esp, v); }
    /* 00679286: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067928c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067928d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00679294: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679297: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067929a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067929d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006792a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006792a3: push 0x34c */ { u32 v = 0x34cu; r_esp -= 4; W32(r_esp, v); }
    /* 006792a8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006792af: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6792b4u); f_005caba4();
    /* 006792b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006792b5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006792b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006792ba: je 0x6792f3 */ if (fZ) goto L_006792f3;
L_006792bc:; BB(0x006792bc);
    /* 006792bc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006792c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006792ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006792cd: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 006792d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006792d6: call 0x6792f8 */ r_esp -= 4; W32(r_esp, 0x6792dbu); f_006792f8();
    /* 006792db: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006792de: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006792e5:; BB(0x006792e5);
    /* 006792e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006792e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006792ef: mov esp, ebp */ r_esp = r_ebp;
    /* 006792f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006792f2: ret  */ FN_RET(0x0067927c); r_esp += 4; return;
L_006792f3:; BB(0x006792f3);
    /* 006792f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006792f5: jmp 0x6792e5 */ goto L_006792e5;
}

void f_006792f8(void) /* sub_6792F8 */
{
    FN_ENTER(0x006792f8);
    /* 006792f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006792f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006792fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006792fd: push 0x8e9e1c */ { u32 v = 0x8e9e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00679302: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00679308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679309: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00679310: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679313: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00679316: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00679319: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0067931c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0067931f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00679322: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679325: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00679328: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067932b: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x679330u); f_00770748();
    /* 00679330: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679337: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067933a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067933d: mov dword ptr [ecx], 0xb37900 */ W32((u32)(r_ecx), 0xb37900u);
    /* 00679343: mov eax, dword ptr [0x9c9f14] */ r_eax = R32((u32)(0x9c9f14u));
    /* 00679348: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679349: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067934c: call dword ptr [0xb37914] */ { u32 t = R32((u32)(0xb37914u)); r_esp -= 4; W32(r_esp, 0x679352u); call_ind(t); }
    /* 00679352: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679355: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679357: push 0x9c9f18 */ { u32 v = 0x9c9f18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067935c: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x679361u); f_007b9a88();
    /* 00679361: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679364: push 0x1f00 */ { u32 v = 0x1f00u; r_esp -= 4; W32(r_esp, v); }
    /* 00679369: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067936b: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x679370u); f_007b52c4();
    /* 00679370: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679373: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x679378u); f_007b4f54();
    /* 00679378: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067937b: call 0x67948c */ r_esp -= 4; W32(r_esp, 0x679380u); f_0067948c();
    /* 00679380: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679383: mov eax, dword ptr [0xa8ffb4] */ r_eax = R32((u32)(0xa8ffb4u));
    /* 00679388: mov dword ptr [ecx + 0xd8], 0x9c9f44 */ W32((u32)(r_ecx+0xd8u), 0x9c9f44u);
    /* 00679392: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00679398: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067939a: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 006793a0: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x6793a5u); f_007aa4c8();
    /* 006793a5: mov ecx, dword ptr [0xa8ffb4] */ r_ecx = R32((u32)(0xa8ffb4u));
    /* 006793ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006793ad: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6793b2u); f_005b8638();
    /* 006793b2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006793b5: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 006793ba: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
    /* 006793c0: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 006793c3: add edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006793c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006793c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006793c8: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x6793cdu); f_00509b24();
    /* 006793cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006793d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006793d3: mov dword ptr [ecx + 0x340], eax */ W32((u32)(r_ecx+0x340u), r_eax);
    /* 006793d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006793db: je 0x679462 */ if (fZ) goto L_00679462;
L_006793e1:; BB(0x006793e1);
    /* 006793e1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006793e3: mov ecx, eax */ r_ecx = r_eax;
    /* 006793e5: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x6793eau); f_00508f08();
    /* 006793ea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006793ed: push 0xff001a15 */ { u32 v = 0xff001a15u; r_esp -= 4; W32(r_esp, v); }
    /* 006793f2: mov ecx, dword ptr [eax + 0x340] */ r_ecx = R32((u32)(r_eax+0x340u));
    /* 006793f8: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6793fdu); f_00508ee4();
    /* 006793fd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679400: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679403: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679408: mov edx, dword ptr [eax + 0x340] */ r_edx = R32((u32)(r_eax+0x340u));
    /* 0067940e: mov dword ptr [edx + 0x44], 0x3f400000 */ W32((u32)(r_edx+0x44u), 0x3f400000u);
    /* 00679415: mov dword ptr [edx + 0x48], 0x3f400000 */ W32((u32)(r_edx+0x48u), 0x3f400000u);
    /* 0067941c: mov edi, dword ptr [ebx + 0x340] */ r_edi = R32((u32)(r_ebx+0x340u));
    /* 00679422: movzx esi, word ptr [edi + 0x2e] */ r_esi = (u32)R16((u32)(r_edi+0x2eu));
    /* 00679426: mov dword ptr [edi + 0x68], 0x3f400000 */ W32((u32)(r_edi+0x68u), 0x3f400000u);
    /* 0067942d: or esi, 0xffff0010 */ {  u32 a = r_esi; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00679433: mov word ptr [edi + 0x2e], si */ W16((u32)(r_edi+0x2eu), (u16)r_esi);
    /* 00679437: mov edx, dword ptr [ecx + 0x340] */ r_edx = R32((u32)(r_ecx+0x340u));
    /* 0067943d: movzx eax, word ptr [edx + 0x2e] */ r_eax = (u32)R16((u32)(r_edx+0x2eu));
    /* 00679441: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00679446: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0067944a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067944d: mov dword ptr [edx + 0x64], 0x40000000 */ W32((u32)(r_edx+0x64u), 0x40000000u);
    /* 00679454: mov ecx, dword ptr [eax + 0x340] */ r_ecx = R32((u32)(r_eax+0x340u));
    /* 0067945a: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x67945fu); f_00508dac();
    /* 0067945f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00679462:; BB(0x00679462);
    /* 00679462: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679465: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00679468: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067946b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067946d: mov dword ptr [ecx + 0x344], edx */ W32((u32)(r_ecx+0x344u), r_edx);
    /* 00679473: mov dword ptr [ecx + 0x348], edx */ W32((u32)(r_ecx+0x348u), r_edx);
    /* 00679479: mov eax, ecx */ r_eax = r_ecx;
    /* 0067947b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067947e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00679485: mov esp, ebp */ r_esp = r_ebp;
    /* 00679487: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679488: ret 8 */ FN_RET(0x006792f8); r_esp += 12; return;
}

void f_0067948c(void) /* sub_67948C */
{
    FN_ENTER(0x0067948c);
    /* 0067948c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067948d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067948f: mov ecx, dword ptr [0xa8ffb4] */ r_ecx = R32((u32)(0xa8ffb4u));
    /* 00679495: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679497: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67949cu); f_005b8610();
    /* 0067949c: mov ecx, dword ptr [0xa8ffb4] */ r_ecx = R32((u32)(0xa8ffb4u));
    /* 006794a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006794a4: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 006794a7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6794acu); f_005b8624();
    /* 006794ac: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006794af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006794b0: ret  */ FN_RET(0x0067948c); r_esp += 4; return;
}

void f_006794b4(void) /* sub_6794B4 */
{
    FN_ENTER(0x006794b4);
    /* 006794b4: mov dword ptr [0xa8ffa8], 0x3f800000 */ W32((u32)(0xa8ffa8u), 0x3f800000u);
    /* 006794be: mov dword ptr [0xa8ffac], 0x41000000 */ W32((u32)(0xa8ffacu), 0x41000000u);
    /* 006794c8: mov dword ptr [0xa8ffb0], 0x3fc00000 */ W32((u32)(0xa8ffb0u), 0x3fc00000u);
    /* 006794d2: ret  */ FN_RET(0x006794b4); r_esp += 4; return;
}

void f_006794d4(void) /* sub_6794D4 */
{
    FN_ENTER(0x006794d4);
    /* 006794d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006794d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006794d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006794d9: push 0x8e9e44 */ { u32 v = 0x8e9e44u; r_esp -= 4; W32(r_esp, v); }
    /* 006794de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006794e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006794e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006794ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006794ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006794f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006794f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006794f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006794fb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00679500: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00679507: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x67950cu); f_008581c5();
    /* 0067950c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067950d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00679510: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679512: je 0x679553 */ if (fZ) goto L_00679553;
L_00679514:; BB(0x00679514);
    /* 00679514: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067951b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679522: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679525: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00679527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067952a: push 0x9c9f04 */ { u32 v = 0x9c9f04u; r_esp -= 4; W32(r_esp, v); }
    /* 0067952f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679531: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x679536u); f_005b7a84();
    /* 00679536: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679539: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00679540:; BB(0x00679540);
    /* 00679540: mov dword ptr [0xa8ffb4], eax */ W32((u32)(0xa8ffb4u), r_eax);
    /* 00679545: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00679548: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067954f: mov esp, ebp */ r_esp = r_ebp;
    /* 00679551: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679552: ret  */ FN_RET(0x006794d4); r_esp += 4; return;
L_00679553:; BB(0x00679553);
    /* 00679553: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679555: jmp 0x679540 */ goto L_00679540;
}

void f_00679558(void) /* sub_679558 */
{
    FN_ENTER(0x00679558);
    /* 00679558: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00679559: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067955b: mov ecx, dword ptr [ebx + 0x340] */ r_ecx = R32((u32)(r_ebx+0x340u));
    /* 00679561: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679563: je 0x67956f */ if (fZ) goto L_0067956f;
L_00679565:; BB(0x00679565);
    /* 00679565: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067956a: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x67956fu); f_00508dac();
L_0067956f:; BB(0x0067956f);
    /* 0067956f: mov dword ptr [ebx + 0x344], 0xa0 */ W32((u32)(r_ebx+0x344u), 0xa0u);
    /* 00679579: mov eax, 1 */ r_eax = 0x1u;
    /* 0067957e: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00679585: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00679586: ret  */ FN_RET(0x00679558); r_esp += 4; return;
}

void f_00679588(void) /* sub_679588 */
{
    FN_ENTER(0x00679588);
    /* 00679588: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00679589: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067958b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067958d: call 0x6795ac */ r_esp -= 4; W32(r_esp, 0x679592u); f_006795ac();
    /* 00679592: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00679596: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679598: jne 0x67959e */ if (!fZ) goto L_0067959e;
L_0067959a:; BB(0x0067959a);
    /* 0067959a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067959b: ret 4 */ FN_RET(0x00679588); r_esp += 8; return;
L_0067959e:; BB(0x0067959e);
    /* 0067959e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067959f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6795a4u); f_005c2f74();
    /* 006795a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006795a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006795a6: ret 4 */ FN_RET(0x00679588); r_esp += 8; return;
}

void f_006795ac(void) /* sub_6795AC */
{
    FN_ENTER(0x006795ac);
    /* 006795ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006795ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006795af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006795b1: push 0x8e9e60 */ { u32 v = 0x8e9e60u; r_esp -= 4; W32(r_esp, v); }
    /* 006795b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006795bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006795bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006795c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006795c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006795ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006795cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006795d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006795d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006795d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006795d9: mov dword ptr [ecx], 0xb37b00 */ W32((u32)(r_ecx), 0xb37b00u);
    /* 006795df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006795e6: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x6795ebu); f_006131f4();
    /* 006795eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006795ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006795f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006795f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006795f8: ret  */ FN_RET(0x006795ac); r_esp += 4; return;
}

void f_006795fc(void) /* sub_6795FC */
{
    FN_ENTER(0x006795fc);
    /* 006795fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006795fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006795fe: mov edi, ecx */ r_edi = r_ecx;
    /* 00679600: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00679605: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00679608: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067960d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067960e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067960f: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x679614u); f_0078ea2c();
    /* 00679614: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00679617: fcomp dword ptr [0x93b330] */ fx_compare(ST(0), R_F32((u32)(0x93b330u))); FPOP();
    /* 0067961d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067961f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00679620: jbe 0x679625 */ if ((fC||fZ)) goto L_00679625;
L_00679622:; BB(0x00679622);
    /* 00679622: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00679623: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00679624: ret  */ FN_RET(0x006795fc); r_esp += 4; return;
L_00679625:; BB(0x00679625);
    /* 00679625: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x67962au); f_0082d7b0();
    /* 0067962a: mov ecx, esi */ r_ecx = r_esi;
    /* 0067962c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x679631u); f_0082d838();
    /* 00679631: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00679634: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x679639u); f_00829cc8();
    /* 00679639: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067963f: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00679645: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679648: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x67964du); f_0083046c();
    /* 0067964d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00679650: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x679655u); f_0082da80();
    /* 00679655: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00679656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00679657: ret  */ FN_RET(0x006795fc); r_esp += 4; return;
}

void f_00679658(void) /* sub_679658 */
{
    FN_ENTER(0x00679658);
    /* 00679658: mov ecx, dword ptr [0xa8ffbc] */ r_ecx = R32((u32)(0xa8ffbcu));
    /* 0067965e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679660: je 0x679675 */ if (fZ) goto L_00679675;
L_00679662:; BB(0x00679662);
    /* 00679662: je 0x67966b */ if (fZ) goto L_0067966b;
L_00679664:; BB(0x00679664);
    /* 00679664: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679666: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x67966bu); f_004066a8();
L_0067966b:; BB(0x0067966b);
    /* 0067966b: mov dword ptr [0xa8ffbc], 0 */ W32((u32)(0xa8ffbcu), 0x0u);
L_00679675:; BB(0x00679675);
    /* 00679675: ret  */ FN_RET(0x00679658); r_esp += 4; return;
}

void f_00679678(void)
{
    FN_ENTER(0x00679678);
    /* 00679678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679679: mov ebp, esp */ r_ebp = r_esp;
    /* 0067967b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067967d: push 0x8e9e88 */ { u32 v = 0x8e9e88u; r_esp -= 4; W32(r_esp, v); }
    /* 00679682: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00679688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679689: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00679690: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679693: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00679696: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00679699: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067969c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067969f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006796a4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006796ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6796b0u); f_005caba4();
    /* 006796b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006796b1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006796b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006796b6: je 0x6796ef */ if (fZ) goto L_006796ef;
L_006796b8:; BB(0x006796b8);
    /* 006796b8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006796bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006796c6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006796c9: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006796cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006796d2: call 0x6796f4 */ r_esp -= 4; W32(r_esp, 0x6796d7u); f_006796f4();
    /* 006796d7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006796da: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006796e1:; BB(0x006796e1);
    /* 006796e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006796e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006796eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006796ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006796ee: ret  */ FN_RET(0x00679678); r_esp += 4; return;
L_006796ef:; BB(0x006796ef);
    /* 006796ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006796f1: jmp 0x6796e1 */ goto L_006796e1;
}

void f_006796f4(void) /* sub_6796F4 */
{
    FN_ENTER(0x006796f4);
    /* 006796f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006796f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006796f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006796f9: push 0x8e9ea4 */ { u32 v = 0x8e9ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006796fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00679704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679705: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067970c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067970f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00679712: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00679715: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00679718: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0067971b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067971e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679721: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00679724: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00679727: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x67972cu); f_006132e4();
    /* 0067972c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679733: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679736: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00679739: mov dword ptr [ecx], 0xb37b00 */ W32((u32)(r_ecx), 0xb37b00u);
    /* 0067973f: mov eax, dword ptr [0x9c9f8c] */ r_eax = R32((u32)(0x9c9f8cu));
    /* 00679744: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679745: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00679748: call dword ptr [0xb37b14] */ { u32 t = R32((u32)(0xb37b14u)); r_esp -= 4; W32(r_esp, 0x67974eu); call_ind(t); }
    /* 0067974e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679751: call 0x6797a0 */ r_esp -= 4; W32(r_esp, 0x679756u); f_006797a0();
    /* 00679756: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679759: call 0x6797bc */ r_esp -= 4; W32(r_esp, 0x67975eu); f_006797bc();
    /* 0067975e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679761: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00679767: mov dword ptr [eax + 0xb8], 0x3f800000 */ W32((u32)(r_eax+0xb8u), 0x3f800000u);
    /* 00679771: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 00679774: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00679777: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0067977a: fadd dword ptr [ecx*4 + 0x93b320] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x93b320u));
    /* 00679781: fadd dword ptr [0x93b328] */ ST(0) = ST(0) + R_F32((u32)(0x93b328u));
    /* 00679787: fstp dword ptr [eax + 0xb4] */ W_F32((u32)(r_eax+0xb4u), ST(0)); FPOP();
    /* 0067978d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00679790: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00679797: mov esp, ebp */ r_esp = r_ebp;
    /* 00679799: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067979a: ret 8 */ FN_RET(0x006796f4); r_esp += 12; return;
}

void f_006797a0(void) /* sub_6797A0 */
{
    FN_ENTER(0x006797a0);
    /* 006797a0: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 006797a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006797a8: jge 0x6797ae */ if ((fS==fO)) goto L_006797ae;
L_006797aa:; BB(0x006797aa);
    /* 006797aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006797ac: jmp 0x6797b5 */ goto L_006797b5;
L_006797ae:; BB(0x006797ae);
    /* 006797ae: jle 0x6797b5 */ if ((fZ||fS!=fO)) goto L_006797b5;
L_006797b0:; BB(0x006797b0);
    /* 006797b0: mov eax, 1 */ r_eax = 0x1u;
L_006797b5:; BB(0x006797b5);
    /* 006797b5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 006797bb: ret  */ FN_RET(0x006797a0); r_esp += 4; return;
}

void f_006797bc(void) /* sub_6797BC */
{
    FN_ENTER(0x006797bc);
    /* 006797bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006797bd: mov edi, ecx */ r_edi = r_ecx;
    /* 006797bf: push dword ptr [edi + 0x84] */ { u32 v = R32((u32)(r_edi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 006797c5: mov ecx, dword ptr [0xa8ffbc] */ r_ecx = R32((u32)(0xa8ffbcu));
    /* 006797cb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6797d0u); f_005b8610();
    /* 006797d0: push dword ptr [edi + 0x84] */ { u32 v = R32((u32)(r_edi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 006797d6: mov ecx, dword ptr [0xa8ffbc] */ r_ecx = R32((u32)(0xa8ffbcu));
    /* 006797dc: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006797df: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6797e4u); f_005b8624();
    /* 006797e4: push dword ptr [edi + 0x84] */ { u32 v = R32((u32)(r_edi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 006797ea: mov ecx, dword ptr [0xa8ffbc] */ r_ecx = R32((u32)(0xa8ffbcu));
    /* 006797f0: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006797f3: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6797f8u); f_005b8638();
    /* 006797f8: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 006797fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006797ff: ret  */ FN_RET(0x006797bc); r_esp += 4; return;
}

void f_00679800(void) /* sub_679800 */
{
    FN_ENTER(0x00679800);
    /* 00679800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679801: mov ebp, esp */ r_ebp = r_esp;
    /* 00679803: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00679805: push 0x8e9ecc */ { u32 v = 0x8e9eccu; r_esp -= 4; W32(r_esp, v); }
    /* 0067980a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00679810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679811: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00679818: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067981b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067981e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00679821: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00679824: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00679827: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0067982c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00679833: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x679838u); f_008581c5();
    /* 00679838: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679839: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067983c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067983e: je 0x67987f */ if (fZ) goto L_0067987f;
L_00679840:; BB(0x00679840);
    /* 00679840: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00679847: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067984e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679851: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00679853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679855: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679856: push 0x9c9f7c */ { u32 v = 0x9c9f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067985b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067985d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x679862u); f_005b7a84();
    /* 00679862: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679865: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0067986c:; BB(0x0067986c);
    /* 0067986c: mov dword ptr [0xa8ffbc], eax */ W32((u32)(0xa8ffbcu), r_eax);
    /* 00679871: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00679874: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067987b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067987d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067987e: ret  */ FN_RET(0x00679800); r_esp += 4; return;
L_0067987f:; BB(0x0067987f);
    /* 0067987f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679881: jmp 0x67986c */ goto L_0067986c;
}

void f_00679884(void) /* sub_679884 */
{
    FN_ENTER(0x00679884);
    /* 00679884: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00679885: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00679887: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00679889: call 0x6798a8 */ r_esp -= 4; W32(r_esp, 0x67988eu); f_006798a8();
    /* 0067988e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00679892: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679894: jne 0x67989a */ if (!fZ) goto L_0067989a;
L_00679896:; BB(0x00679896);
    /* 00679896: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00679897: ret 4 */ FN_RET(0x00679884); r_esp += 8; return;
L_0067989a:; BB(0x0067989a);
    /* 0067989a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067989b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6798a0u); f_005c2f74();
    /* 006798a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006798a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006798a2: ret 4 */ FN_RET(0x00679884); r_esp += 8; return;
}

void f_006798a8(void) /* sub_6798A8 */
{
    FN_ENTER(0x006798a8);
    /* 006798a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006798a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006798ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006798ad: push 0x8e9ee8 */ { u32 v = 0x8e9ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 006798b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006798b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006798b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006798c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006798c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006798c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006798c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006798cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006798cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006798d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006798d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006798dc: mov dword ptr [eax], 0xb37c00 */ W32((u32)(r_eax), 0xb37c00u);
    /* 006798e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006798e3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6798e8u); f_007b4e84();
    /* 006798e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006798e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006798ec: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6798f1u); f_007b9c8c();
    /* 006798f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006798f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006798fb: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x679900u); f_00770660();
    /* 00679900: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00679903: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067990a: mov esp, ebp */ r_esp = r_ebp;
    /* 0067990c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067990d: ret  */ FN_RET(0x006798a8); r_esp += 4; return;
}

void f_00679910(void) /* sub_679910 */
{
    FN_ENTER(0x00679910);
    /* 00679910: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679913: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00679919: fld dword ptr [0x93b708] */ FPUSH(R_F32((u32)(0x93b708u)));
    /* 0067991f: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00679926: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 0067992e: mov dword ptr [esp + 8], 0x40400000 */ W32((u32)(r_esp+0x8u), 0x40400000u);
    /* 00679936: mov dword ptr [esp + 0xc], 0x40c00000 */ W32((u32)(r_esp+0xcu), 0x40c00000u);
    /* 0067993e: fmul dword ptr [esp + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_edx*4));
    /* 00679941: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00679944: ret  */ FN_RET(0x00679910); r_esp += 4; return;
}

void f_00679948(void) /* sub_679948 */
{
    FN_ENTER(0x00679948);
    /* 00679948: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00679949: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067994a: mov esi, ecx */ r_esi = r_ecx;
    /* 0067994c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x679951u); f_004f7c84();
    /* 00679951: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679953: jne 0x6799c2 */ if (!fZ) goto L_006799c2;
L_00679955:; BB(0x00679955);
    /* 00679955: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0067995c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067995e: je 0x67996e */ if (fZ) goto L_0067996e;
L_00679960:; BB(0x00679960);
    /* 00679960: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00679963: jne 0x6799c2 */ if (!fZ) goto L_006799c2;
L_00679965:; BB(0x00679965);
    /* 00679965: mov ecx, esi */ r_ecx = r_esi;
    /* 00679967: call 0x6799c8 */ r_esp -= 4; W32(r_esp, 0x67996cu); f_006799c8();
    /* 0067996c: jmp 0x6799c2 */ goto L_006799c2;
L_0067996e:; BB(0x0067996e);
    /* 0067996e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00679971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00679973: mov ebx, esi */ r_ebx = r_esi;
    /* 00679975: mov esi, eax */ r_esi = r_eax;
L_00679977:; BB(0x00679977);
    /* 00679977: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00679978: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67997du); f_0068d5a8();
    /* 0067997d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067997e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679980: je 0x6799b7 */ if (fZ) goto L_006799b7;
L_00679982:; BB(0x00679982);
    /* 00679982: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00679988: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067998e: jne 0x6799b7 */ if (!fZ) goto L_006799b7;
L_00679990:; BB(0x00679990);
    /* 00679990: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00679993: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00679996: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679997: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679998: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x67999du); f_007a9180();
    /* 0067999d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006799a0: fcomp dword ptr [0x93b6fc] */ fx_compare(ST(0), R_F32((u32)(0x93b6fcu))); FPOP();
    /* 006799a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006799a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006799a9: jae 0x6799b7 */ if (!fC) goto L_006799b7;
L_006799ab:; BB(0x006799ab);
    /* 006799ab: mov edx, 1 */ r_edx = 0x1u;
    /* 006799b0: mov word ptr [ebx + 0x32e], dx */ W16((u32)(r_ebx+0x32eu), (u16)r_edx);
L_006799b7:; BB(0x006799b7);
    /* 006799b7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006799ba: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006799bd: jl 0x679977 */ if ((fS!=fO)) goto L_00679977;
L_006799bf:; BB(0x006799bf);
    /* 006799bf: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006799c2:; BB(0x006799c2);
    /* 006799c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006799c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006799c4: ret  */ FN_RET(0x00679948); r_esp += 4; return;
}

void f_006799c8(void) /* sub_6799C8 */
{
    FN_ENTER(0x006799c8);
    /* 006799c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006799c9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006799cc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006799ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006799d0: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006799d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006799d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006799d7: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x6799dcu); f_00772b44();
    /* 006799dc: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 006799df: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 006799e3: fcom dword ptr [0x93b6f0] */ fx_compare(ST(0), R_F32((u32)(0x93b6f0u))); 
    /* 006799e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006799eb: fstp dword ptr [ebp + 0x340] */ W_F32((u32)(r_ebp+0x340u), ST(0)); FPOP();
    /* 006799f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006799f2: jae 0x679aab */ if (!fC) goto L_00679aab;
L_006799f8:; BB(0x006799f8);
    /* 006799f8: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006799fc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006799ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00679a01: mov ebx, ecx */ r_ebx = r_ecx;
L_00679a03:; BB(0x00679a03);
    /* 00679a03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00679a04: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x679a09u); f_0068d5a8();
    /* 00679a09: mov esi, eax */ r_esi = r_eax;
    /* 00679a0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00679a0e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679a10: je 0x679a98 */ if (fZ) goto L_00679a98;
L_00679a16:; BB(0x00679a16);
    /* 00679a16: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 00679a1c: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679a22: jne 0x679a98 */ if (!fZ) goto L_00679a98;
L_00679a24:; BB(0x00679a24);
    /* 00679a24: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00679a27: test edx, 0x4000e00 */ {  u32 a = r_edx; u32 b = 0x4000e00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00679a2d: jne 0x679a98 */ if (!fZ) goto L_00679a98;
L_00679a2f:; BB(0x00679a2f);
    /* 00679a2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00679a31: mov edx, 1 */ r_edx = 0x1u;
    /* 00679a36: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00679a38: test dword ptr [ebp + 0x33c], edx */ {  u32 a = R32((u32)(r_ebp+0x33cu)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679a3e: je 0x679a47 */ if (fZ) goto L_00679a47;
L_00679a40:; BB(0x00679a40);
    /* 00679a40: mov edx, 1 */ r_edx = 0x1u;
    /* 00679a45: jmp 0x679a49 */ goto L_00679a49;
L_00679a47:; BB(0x00679a47);
    /* 00679a47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00679a49:; BB(0x00679a49);
    /* 00679a49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679a4b: jne 0x679a98 */ if (!fZ) goto L_00679a98;
L_00679a4d:; BB(0x00679a4d);
    /* 00679a4d: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00679a52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00679a53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00679a55: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x679a5au); f_007b8338();
    /* 00679a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679a5c: je 0x679a98 */ if (fZ) goto L_00679a98;
L_00679a5e:; BB(0x00679a5e);
    /* 00679a5e: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00679a66: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00679a68: call 0x679910 */ r_esp -= 4; W32(r_esp, 0x679a6du); f_00679910();
    /* 00679a6d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00679a6f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00679a73: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00679a78: mov ecx, esi */ r_ecx = r_esi;
    /* 00679a7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679a7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679a7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679a7e: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679a82: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679a86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679a87: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x679a8au); call_ind(t); }
    /* 00679a8a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00679a8c: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00679a8f: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00679a95: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_00679a98:; BB(0x00679a98);
    /* 00679a98: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00679a9b: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679a9e: jl 0x679a03 */ if ((fS!=fO)) goto L_00679a03;
L_00679aa4:; BB(0x00679aa4);
    /* 00679aa4: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00679aa8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00679aab:; BB(0x00679aab);
    /* 00679aab: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00679aae: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679ab3: je 0x679abc */ if (fZ) goto L_00679abc;
L_00679ab5:; BB(0x00679ab5);
    /* 00679ab5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00679ab7: call 0x679ac4 */ r_esp -= 4; W32(r_esp, 0x679abcu); f_00679ac4();
L_00679abc:; BB(0x00679abc);
    /* 00679abc: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00679abf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679ac0: ret  */ FN_RET(0x006799c8); r_esp += 4; return;
}

void f_00679ac4(void) /* sub_679AC4 */
{
    FN_ENTER(0x00679ac4);
    /* 00679ac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679ac5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00679ac6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00679ac7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00679ac9: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 00679acf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679ad1: je 0x679b37 */ if (fZ) goto L_00679b37;
L_00679ad3:; BB(0x00679ad3);
    /* 00679ad3: je 0x679b33 */ if (fZ) goto L_00679b33;
L_00679ad5:; BB(0x00679ad5);
    /* 00679ad5: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00679ad9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679adb: jl 0x679b33 */ if ((fS!=fO)) goto L_00679b33;
L_00679add:; BB(0x00679add);
    /* 00679add: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00679ae3: jg 0x679b33 */ if ((!fZ&&fS==fO)) goto L_00679b33;
L_00679ae5:; BB(0x00679ae5);
    /* 00679ae5: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 00679aeb: movzx ebp, word ptr [edx + ecx*4] */ r_ebp = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 00679aef: mov word ptr [esp], bp */ W16((u32)(r_esp), (u16)r_ebp);
    /* 00679af3: movzx ebp, word ptr [edx + ecx*4 + 2] */ r_ebp = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 00679af8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679afa: mov word ptr [esp + 2], bp */ W16((u32)(r_esp+0x2u), (u16)r_ebp);
    /* 00679aff: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00679b04: mov word ptr [esp], bp */ W16((u32)(r_esp), (u16)r_ebp);
    /* 00679b08: je 0x679b28 */ if (fZ) goto L_00679b28;
L_00679b0a:; BB(0x00679b0a);
    /* 00679b0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00679b0c: jl 0x679b28 */ if ((fS!=fO)) goto L_00679b28;
L_00679b0e:; BB(0x00679b0e);
    /* 00679b0e: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679b14: jg 0x679b28 */ if ((!fZ&&fS==fO)) goto L_00679b28;
L_00679b16:; BB(0x00679b16);
    /* 00679b16: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00679b1a: mov word ptr [edx + ecx*4], ax */ W16((u32)(r_edx+r_ecx*4), (u16)r_eax);
    /* 00679b1e: movzx ebp, word ptr [esp + 2] */ r_ebp = (u32)R16((u32)(r_esp+0x2u));
    /* 00679b23: mov word ptr [edx + ecx*4 + 2], bp */ W16((u32)(r_edx+r_ecx*4+0x2u), (u16)r_ebp);
L_00679b28:; BB(0x00679b28);
    /* 00679b28: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00679b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679b2c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00679b2e: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x679b33u); f_007b5038();
L_00679b33:; BB(0x00679b33);
    /* 00679b33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679b34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00679b35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679b36: ret  */ FN_RET(0x00679ac4); r_esp += 4; return;
L_00679b37:; BB(0x00679b37);
    /* 00679b37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679b39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679b3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00679b3d: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x679b42u); f_007b52ec();
    /* 00679b42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00679b43: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x679b48u); f_008113bc();
    /* 00679b48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679b49: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00679b4d: mov eax, 2 */ r_eax = 0x2u;
    /* 00679b52: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 00679b59: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00679b5f: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 00679b63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00679b65: call 0x679b70 */ r_esp -= 4; W32(r_esp, 0x679b6au); f_00679b70();
    /* 00679b6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679b6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00679b6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679b6d: ret  */ FN_RET(0x00679ac4); r_esp += 4; return;
}

void f_00679b70(void) /* sub_679B70 */
{
    FN_ENTER(0x00679b70);
    /* 00679b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00679b73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00679b75: push 0x8e9f10 */ { u32 v = 0x8e9f10u; r_esp -= 4; W32(r_esp, v); }
    /* 00679b7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00679b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679b81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00679b88: sub esp, 0x19c */ {  u32 a = r_esp; u32 b = 0x19cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679b8e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00679b91: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00679b94: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00679b97: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00679b9a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00679b9d: lea edi, [ebp - 0x1a8] */ r_edi = (u32)(r_ebp+0xfffffe58u);
    /* 00679ba3: mov esi, 0x93b540 */ r_esi = 0x93b540u;
    /* 00679ba8: mov ecx, 0x17c */ r_ecx = 0x17cu;
    /* 00679bad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00679bae: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00679bb1: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00679bb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679bb4: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00679bb7: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00679bb9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679bbc: fld dword ptr [0x93b6ec] */ FPUSH(R_F32((u32)(0x93b6ecu)));
    /* 00679bc2: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 00679bc5: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679bcb: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00679bce: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00679bd1: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00679bd4: fstp dword ptr [ebp - 0x198] */ W_F32((u32)(r_ebp+0xfffffe68u), ST(0)); FPOP();
    /* 00679bda: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 00679be0: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00679be6: mov dword ptr [ebp - 0x170], esi */ W32((u32)(r_ebp+0xfffffe90u), r_esi);
    /* 00679bec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679bee: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x679bf3u); f_005b8610();
    /* 00679bf3: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679bf9: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 00679bff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679c01: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x679c06u); f_005b8624();
    /* 00679c06: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679c09: fld dword ptr [0x93b6ec] */ FPUSH(R_F32((u32)(0x93b6ecu)));
    /* 00679c0f: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 00679c12: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679c18: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00679c1b: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00679c1e: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 00679c24: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00679c27: fstp dword ptr [ebp - 0x14c] */ W_F32((u32)(r_ebp+0xfffffeb4u), ST(0)); FPOP();
    /* 00679c2d: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 00679c33: mov dword ptr [ebp - 0x148], ebx */ W32((u32)(r_ebp+0xfffffeb8u), r_ebx);
    /* 00679c39: mov dword ptr [ebp - 0x124], esi */ W32((u32)(r_ebp+0xfffffedcu), r_esi);
    /* 00679c3f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00679c41: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x679c46u); f_005b8610();
    /* 00679c46: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679c4c: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00679c52: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00679c54: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x679c59u); f_005b8624();
    /* 00679c59: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679c5c: fld dword ptr [0x93b6ec] */ FPUSH(R_F32((u32)(0x93b6ecu)));
    /* 00679c62: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 00679c65: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679c6b: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00679c6e: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00679c71: fstp dword ptr [ebp - 0x100] */ W_F32((u32)(r_ebp+0xffffff00u), ST(0)); FPOP();
    /* 00679c77: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00679c7d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00679c80: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00679c86: mov dword ptr [ebp - 0xfc], ebx */ W32((u32)(r_ebp+0xffffff04u), r_ebx);
    /* 00679c8c: mov dword ptr [ebp - 0xd8], esi */ W32((u32)(r_ebp+0xffffff28u), r_esi);
    /* 00679c92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679c94: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x679c99u); f_005b8610();
    /* 00679c99: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679c9f: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00679ca5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679ca7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x679cacu); f_005b8624();
    /* 00679cac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679caf: fld dword ptr [0x93b6e8] */ FPUSH(R_F32((u32)(0x93b6e8u)));
    /* 00679cb5: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 00679cb8: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679cbe: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00679cc1: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00679cc4: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 00679cca: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00679cd0: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00679cd3: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00679cd9: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 00679cdf: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 00679ce5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00679ce7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x679cecu); f_005b8610();
    /* 00679cec: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679cf2: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00679cf8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00679cfa: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x679cffu); f_005b8624();
    /* 00679cff: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679d02: fld dword ptr [0x93b6e8] */ FPUSH(R_F32((u32)(0x93b6e8u)));
    /* 00679d08: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 00679d0b: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679d11: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00679d14: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00679d17: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 00679d1a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00679d1d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00679d20: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00679d23: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 00679d26: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00679d29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679d2b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x679d30u); f_005b8610();
    /* 00679d30: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679d36: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00679d39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679d3b: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x679d40u); f_005b8624();
    /* 00679d40: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00679d43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00679d45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00679d48:; BB(0x00679d48);
    /* 00679d48: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00679d4f: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00679d54: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x679d59u); f_005caba4();
    /* 00679d59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679d5a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00679d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679d5f: je 0x679d9c */ if (fZ) goto L_00679d9c;
L_00679d61:; BB(0x00679d61);
    /* 00679d61: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00679d68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679d6f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00679d72: lea ebx, [ebp - 0x1a8] */ r_ebx = (u32)(r_ebp+0xfffffe58u);
    /* 00679d78: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 00679d7b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00679d7d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00679d7f: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00679d81: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00679d83: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00679d85: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00679d87: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00679d88: mov ecx, eax */ r_ecx = r_eax;
    /* 00679d8a: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679d90: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x679d95u); f_006441f4();
    /* 00679d95: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00679d9c:; BB(0x00679d9c);
    /* 00679d9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00679da3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00679da6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00679da9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00679dac: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00679daf: jb 0x679d48 */ if (fC) goto L_00679d48;
L_00679db1:; BB(0x00679db1);
    /* 00679db1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679db4: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00679db6: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00679db9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00679dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679dbd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x679dc2u); f_0050b510();
    /* 00679dc2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679dc5: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679dca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679dcb: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x679dd0u); f_0050b510();
    /* 00679dd0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679dd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00679dd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679dd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679dd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679dd8: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00679ddd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x679de2u); f_00814298();
    /* 00679de2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00679de5: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679de8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679deb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00679dee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00679df1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00679df8: mov esp, ebp */ r_esp = r_ebp;
    /* 00679dfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679dfb: ret  */ FN_RET(0x00679b70); r_esp += 4; return;
}

void f_00679dfc(void) /* sub_679DFC */
{
    FN_ENTER(0x00679dfc);
    /* 00679dfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00679dfd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679dfe: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679e01: mov edi, ecx */ r_edi = r_ecx;
    /* 00679e03: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00679e08: mov ecx, edi */ r_ecx = r_edi;
    /* 00679e0a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00679e0c: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00679e11: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x679e14u); call_ind(t); }
    /* 00679e14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679e16: je 0x679e53 */ if (fZ) goto L_00679e53;
L_00679e18:; BB(0x00679e18);
    /* 00679e18: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00679e1f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679e22: je 0x679e53 */ if (fZ) goto L_00679e53;
L_00679e24:; BB(0x00679e24);
    /* 00679e24: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x679e29u); f_0082d7b0();
    /* 00679e29: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00679e2c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x679e31u); f_0082d838();
    /* 00679e31: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00679e34: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x679e39u); f_00829cc8();
    /* 00679e39: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679e3c: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x679e41u); f_0082e760();
    /* 00679e41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679e42: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x679e47u); f_0082da80();
    /* 00679e47: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00679e4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679e51: je 0x679e59 */ if (fZ) goto L_00679e59;
L_00679e53:; BB(0x00679e53);
    /* 00679e53: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00679e56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679e57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00679e58: ret  */ FN_RET(0x00679dfc); r_esp += 4; return;
L_00679e59:; BB(0x00679e59);
    /* 00679e59: fld dword ptr [0x93b6dc] */ FPUSH(R_F32((u32)(0x93b6dcu)));
    /* 00679e5f: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00679e62: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 00679e65: fld dword ptr [edi + 0x340] */ FPUSH(R_F32((u32)(r_edi+0x340u)));
    /* 00679e6b: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00679e6d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00679e6f: fmul dword ptr [0x93b6d8] */ ST(0) = ST(0) * R_F32((u32)(0x93b6d8u));
    /* 00679e75: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00679e7b: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00679e7e: fmul dword ptr [0x93b6d4] */ ST(0) = ST(0) * R_F32((u32)(0x93b6d4u));
    /* 00679e84: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00679e86: fmul dword ptr [0x93b6d0] */ ST(0) = ST(0) * R_F32((u32)(0x93b6d0u));
    /* 00679e8c: fcom dword ptr [0x93b6cc] */ fx_compare(ST(0), R_F32((u32)(0x93b6ccu))); 
    /* 00679e92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00679e94: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00679e98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00679e99: jae 0x679eb0 */ if (!fC) goto L_00679eb0;
L_00679e9b:; BB(0x00679e9b);
    /* 00679e9b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00679e9d: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 00679ea2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00679ea5: mov edx, 0x3dcccccd */ r_edx = 0x3dcccccdu;
    /* 00679eaa: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00679eae: jmp 0x679eb3 */ goto L_00679eb3;
L_00679eb0:; BB(0x00679eb0);
    /* 00679eb0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00679eb3:; BB(0x00679eb3);
    /* 00679eb3: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00679eb5: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 00679eb8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00679ebb: mov ecx, edi */ r_ecx = r_edi;
    /* 00679ebd: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00679ec5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679ec8: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x679ecdu); f_00779d4c();
    /* 00679ecd: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 00679ed0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00679ed3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679ed4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00679ed5: ret  */ FN_RET(0x00679dfc); r_esp += 4; return;
}

void f_00679ed8(void) /* sub_679ED8 */
{
    FN_ENTER(0x00679ed8);
    /* 00679ed8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00679edc: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00679edf: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00679ee2: je 0x679ee7 */ if (fZ) goto L_00679ee7;
L_00679ee4:; BB(0x00679ee4);
    /* 00679ee4: ret 8 */ FN_RET(0x00679ed8); r_esp += 12; return;
L_00679ee7:; BB(0x00679ee7);
    /* 00679ee7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679eeb: call 0x679ef4 */ r_esp -= 4; W32(r_esp, 0x679ef0u); f_00679ef4();
    /* 00679ef0: ret 8 */ FN_RET(0x00679ed8); r_esp += 12; return;
}

void f_00679ef4(void) /* sub_679EF4 */
{
    FN_ENTER(0x00679ef4);
    /* 00679ef4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00679ef5: mov edi, ecx */ r_edi = r_ecx;
    /* 00679ef7: mov ecx, edi */ r_ecx = r_edi;
    /* 00679ef9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679efb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679efd: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x679f02u); f_007b52ec();
    /* 00679f02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00679f03: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x679f08u); f_008113bc();
    /* 00679f08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679f09: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00679f0d: mov eax, 2 */ r_eax = 0x2u;
    /* 00679f12: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00679f19: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00679f1d: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00679f23: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 00679f27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679f29: je 0x679f32 */ if (fZ) goto L_00679f32;
L_00679f2b:; BB(0x00679f2b);
    /* 00679f2b: mov ecx, edi */ r_ecx = r_edi;
    /* 00679f2d: call 0x679b70 */ r_esp -= 4; W32(r_esp, 0x679f32u); f_00679b70();
L_00679f32:; BB(0x00679f32);
    /* 00679f32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00679f33: ret 4 */ FN_RET(0x00679ef4); r_esp += 8; return;
}

void f_00679f38(void) /* sub_679F38 */
{
    FN_ENTER(0x00679f38);
    /* 00679f38: mov ecx, dword ptr [0xa8ffd0] */ r_ecx = R32((u32)(0xa8ffd0u));
    /* 00679f3e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679f40: je 0x679f55 */ if (fZ) goto L_00679f55;
L_00679f42:; BB(0x00679f42);
    /* 00679f42: je 0x679f4b */ if (fZ) goto L_00679f4b;
L_00679f44:; BB(0x00679f44);
    /* 00679f44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679f46: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x679f4bu); f_004066a8();
L_00679f4b:; BB(0x00679f4b);
    /* 00679f4b: mov dword ptr [0xa8ffd0], 0 */ W32((u32)(0xa8ffd0u), 0x0u);
L_00679f55:; BB(0x00679f55);
    /* 00679f55: ret  */ FN_RET(0x00679f38); r_esp += 4; return;
}

void f_00679f58(void)
{
    FN_ENTER(0x00679f58);
    /* 00679f58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679f59: mov ebp, esp */ r_ebp = r_esp;
    /* 00679f5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00679f5d: push 0x8e9f38 */ { u32 v = 0x8e9f38u; r_esp -= 4; W32(r_esp, v); }
    /* 00679f62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00679f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679f69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00679f70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679f73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00679f76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00679f79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00679f7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00679f7f: push 0x344 */ { u32 v = 0x344u; r_esp -= 4; W32(r_esp, v); }
    /* 00679f84: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00679f8b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x679f90u); f_005caba4();
    /* 00679f90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679f91: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00679f94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679f96: je 0x679fcf */ if (fZ) goto L_00679fcf;
L_00679f98:; BB(0x00679f98);
    /* 00679f98: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00679f9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679fa6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679fa9: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00679faf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679fb2: call 0x679fd4 */ r_esp -= 4; W32(r_esp, 0x679fb7u); f_00679fd4();
    /* 00679fb7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679fba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00679fc1:; BB(0x00679fc1);
    /* 00679fc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00679fc4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00679fcb: mov esp, ebp */ r_esp = r_ebp;
    /* 00679fcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679fce: ret  */ FN_RET(0x00679f58); r_esp += 4; return;
L_00679fcf:; BB(0x00679fcf);
    /* 00679fcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00679fd1: jmp 0x679fc1 */ goto L_00679fc1;
}

void f_00679fd4(void) /* sub_679FD4 */
{
    FN_ENTER(0x00679fd4);
    /* 00679fd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679fd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00679fd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00679fd9: push 0x8e9f54 */ { u32 v = 0x8e9f54u; r_esp -= 4; W32(r_esp, v); }
    /* 00679fde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00679fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679fe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00679fec: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679fef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00679ff2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00679ff5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00679ff8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00679ffb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00679ffe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067a001: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067a004: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067a007: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x67a00cu); f_00770748();
    /* 0067a00c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a013: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a016: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067a019: mov dword ptr [ecx], 0xb37c00 */ W32((u32)(r_ecx), 0xb37c00u);
    /* 0067a01f: mov eax, dword ptr [0x9c9fb4] */ r_eax = R32((u32)(0x9c9fb4u));
    /* 0067a024: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a025: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067a028: call dword ptr [0xb37c14] */ { u32 t = R32((u32)(0xb37c14u)); r_esp -= 4; W32(r_esp, 0x67a02eu); call_ind(t); }
    /* 0067a02e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a031: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a033: push 0x9c9fb8 */ { u32 v = 0x9c9fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a038: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x67a03du); f_007b9a88();
    /* 0067a03d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a040: push 0x1f00 */ { u32 v = 0x1f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a045: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a047: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x67a04cu); f_007b52c4();
    /* 0067a04c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a04f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x67a054u); f_007b4f54();
    /* 0067a054: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a057: call 0x67a0b4 */ r_esp -= 4; W32(r_esp, 0x67a05cu); f_0067a0b4();
    /* 0067a05c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a05f: lea edi, [ebp - 0x30] */ r_edi = (u32)(r_ebp+0xffffffd0u);
    /* 0067a062: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0067a065: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0067a068: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0067a06b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0067a06d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067a070: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067a071: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0067a074: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0067a077: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067a078: mov word ptr [ecx + 0x32e], si */ W16((u32)(r_ecx+0x32eu), (u16)r_esi);
    /* 0067a07f: mov dword ptr [ecx + 0x33c], esi */ W32((u32)(r_ecx+0x33cu), r_esi);
    /* 0067a085: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x67a08au); f_007b4c58();
    /* 0067a08a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067a08d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067a090: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067a093: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067a096: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0067a099: fsub dword ptr [ebp - 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffd4u));
    /* 0067a09c: fstp dword ptr [eax + 0x340] */ W_F32((u32)(r_eax+0x340u), ST(0)); FPOP();
    /* 0067a0a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067a0a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067a0ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a0ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a0af: ret 8 */ FN_RET(0x00679fd4); r_esp += 12; return;
}

