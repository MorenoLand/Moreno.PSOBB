#include "protos.h"

void f_00771160(void) /* sub_771160 */
{
    FN_ENTER(0x00771160);
    /* 00771160: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771161: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771162: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00771165: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00771167: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0077116b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077116d: je 0x771297 */ if (fZ) goto L_00771297;
L_00771173:; BB(0x00771173);
    /* 00771173: movzx edx, word ptr [ebx + 0x2c0] */ r_edx = (u32)R16((u32)(r_ebx+0x2c0u));
    /* 0077117a: mov dword ptr [ebx + 0x2b4], ecx */ W32((u32)(r_ebx+0x2b4u), r_ecx);
    /* 00771180: movzx edi, word ptr [ecx + 6] */ r_edi = (u32)R16((u32)(r_ecx+0x6u));
    /* 00771184: add edi, dword ptr [ecx + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00771187: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00771189: movzx edx, word ptr [ebx + 0x2c2] */ r_edx = (u32)R16((u32)(r_ebx+0x2c2u));
    /* 00771190: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 00771193: mov word ptr [ebx + 0x2bc], ax */ W16((u32)(r_ebx+0x2bcu), (u16)r_eax);
    /* 0077119a: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 0077119e: add edi, dword ptr [ecx + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007711a1: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007711a3: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 007711a6: mov word ptr [ebx + 0x2be], dx */ W16((u32)(r_ebx+0x2beu), (u16)r_edx);
    /* 007711ad: mov word ptr [ebx + 0x334], ax */ W16((u32)(r_ebx+0x334u), (u16)r_eax);
    /* 007711b4: mov word ptr [ebx + 0x336], dx */ W16((u32)(r_ebx+0x336u), (u16)r_edx);
L_007711bb:; BB(0x007711bb);
    /* 007711bb: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 007711be: mov word ptr [ebx + 0x2cc], ax */ W16((u32)(r_ebx+0x2ccu), (u16)r_eax);
    /* 007711c5: mov word ptr [ebx + 0x2c4], ax */ W16((u32)(r_ebx+0x2c4u), (u16)r_eax);
    /* 007711cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007711ce: mov word ptr [ebx + 0x2ce], dx */ W16((u32)(r_ebx+0x2ceu), (u16)r_edx);
    /* 007711d5: mov word ptr [ebx + 0x2c6], dx */ W16((u32)(r_ebx+0x2c6u), (u16)r_edx);
    /* 007711dc: movsx edi, word ptr [ecx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 007711e0: mov word ptr [ebx + 0x2d0], di */ W16((u32)(r_ebx+0x2d0u), (u16)r_edi);
    /* 007711e7: mov word ptr [ebx + 0x2c8], di */ W16((u32)(r_ebx+0x2c8u), (u16)r_edi);
    /* 007711ee: movsx eax, word ptr [ecx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 007711f2: mov word ptr [ebx + 0x2d2], ax */ W16((u32)(r_ebx+0x2d2u), (u16)r_eax);
    /* 007711f9: mov word ptr [ebx + 0x2ca], ax */ W16((u32)(r_ebx+0x2cau), (u16)r_eax);
    /* 00771200: movsx eax, word ptr [ecx + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xau));
    /* 00771204: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771207: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0077120a: fmul dword ptr [0x978354] */ ST(0) = ST(0) * R_F32((u32)(0x978354u));
    /* 00771210: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00771214: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00771219: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077121e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00771222: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00771226: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077122a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077122e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00771232: mov word ptr [ebx + 0x2d4], ax */ W16((u32)(r_ebx+0x2d4u), (u16)r_eax);
    /* 00771239: movzx eax, word ptr [ecx + 0xc] */ r_eax = (u32)R16((u32)(r_ecx+0xcu));
    /* 0077123d: mov word ptr [ebx + 0x2d6], ax */ W16((u32)(r_ebx+0x2d6u), (u16)r_eax);
    /* 00771244: mov word ptr [ebx + 0x2f2], dx */ W16((u32)(r_ebx+0x2f2u), (u16)r_edx);
    /* 0077124b: mov word ptr [ebx + 0x2f4], dx */ W16((u32)(r_ebx+0x2f4u), (u16)r_edx);
    /* 00771252: mov word ptr [ebx + 0x2f0], dx */ W16((u32)(r_ebx+0x2f0u), (u16)r_edx);
    /* 00771259: mov word ptr [ebx + 0x2ee], dx */ W16((u32)(r_ebx+0x2eeu), (u16)r_edx);
    /* 00771260: mov word ptr [ebx + 0x2ec], dx */ W16((u32)(r_ebx+0x2ecu), (u16)r_edx);
    /* 00771267: mov word ptr [ebx + 0x2fc], dx */ W16((u32)(r_ebx+0x2fcu), (u16)r_edx);
    /* 0077126e: mov word ptr [ebx + 0x2fe], dx */ W16((u32)(r_ebx+0x2feu), (u16)r_edx);
    /* 00771275: mov word ptr [ebx + 0x2fa], dx */ W16((u32)(r_ebx+0x2fau), (u16)r_edx);
    /* 0077127c: mov word ptr [ebx + 0x2f8], dx */ W16((u32)(r_ebx+0x2f8u), (u16)r_edx);
    /* 00771283: mov word ptr [ebx + 0x2f6], dx */ W16((u32)(r_ebx+0x2f6u), (u16)r_edx);
    /* 0077128a: mov eax, 1 */ r_eax = 0x1u;
    /* 0077128f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771292: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771293: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771294: ret 4 */ FN_RET(0x00771160); r_esp += 8; return;
L_00771297:; BB(0x00771297);
    /* 00771297: mov ecx, dword ptr [ebx + 0x2b4] */ r_ecx = R32((u32)(r_ebx+0x2b4u));
    /* 0077129d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077129f: je 0x7712d4 */ if (fZ) goto L_007712d4;
L_007712a1:; BB(0x007712a1);
    /* 007712a1: movzx eax, word ptr [ebx + 0x2c0] */ r_eax = (u32)R16((u32)(r_ebx+0x2c0u));
    /* 007712a8: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 007712ac: add edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007712af: movzx edi, word ptr [ebx + 0x2c2] */ r_edi = (u32)R16((u32)(r_ebx+0x2c2u));
    /* 007712b6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007712b8: mov word ptr [ebx + 0x2bc], dx */ W16((u32)(r_ebx+0x2bcu), (u16)r_edx);
    /* 007712bf: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 007712c3: add eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007712c6: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007712c8: mov word ptr [ebx + 0x2be], ax */ W16((u32)(r_ebx+0x2beu), (u16)r_eax);
    /* 007712cf: jmp 0x7711bb */ goto L_007711bb;
L_007712d4:; BB(0x007712d4);
    /* 007712d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007712d6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007712d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007712da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007712db: ret 4 */ FN_RET(0x00771160); r_esp += 8; return;
}

void f_007712e0(void) /* sub_7712E0 */
{
    FN_ENTER(0x007712e0);
    /* 007712e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007712e1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007712e4: mov edi, ecx */ r_edi = r_ecx;
    /* 007712e6: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 007712ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007712ee: fld dword ptr [0x978350] */ FPUSH(R_F32((u32)(0x978350u)));
    /* 007712f4: je 0x7712fb */ if (fZ) goto L_007712fb;
L_007712f6:; BB(0x007712f6);
    /* 007712f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007712f8: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
L_007712fb:; BB(0x007712fb);
    /* 007712fb: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 007712fe: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00771301: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00771304: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00771308: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0077130b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0077130f: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 00771315: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00771318: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0077131a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077131b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077131c: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x771321u); f_007806dc();
    /* 00771321: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771324: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771326: je 0x771336 */ if (fZ) goto L_00771336;
L_00771328:; BB(0x00771328);
    /* 00771328: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0077132b: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0077132e: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00771331: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771334: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771335: ret  */ FN_RET(0x007712e0); r_esp += 4; return;
L_00771336:; BB(0x00771336);
    /* 00771336: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00771338: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077133b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077133c: ret  */ FN_RET(0x007712e0); r_esp += 4; return;
}

void f_00771340(void) /* sub_771340 */
{
    FN_ENTER(0x00771340);
    /* 00771340: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771341: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00771344: mov edi, ecx */ r_edi = r_ecx;
    /* 00771346: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0077134c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077134e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00771352: fld dword ptr [0x97834c] */ FPUSH(R_F32((u32)(0x97834cu)));
    /* 00771358: je 0x77135f */ if (fZ) goto L_0077135f;
L_0077135a:; BB(0x0077135a);
    /* 0077135a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077135c: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
L_0077135f:; BB(0x0077135f);
    /* 0077135f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00771361: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771364: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 00771367: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0077136b: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 00771371: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00771374: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00771378: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0077137b: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0077137d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077137e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077137f: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x771384u); f_007806dc();
    /* 00771384: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771389: je 0x77139b */ if (fZ) goto L_0077139b;
L_0077138b:; BB(0x0077138b);
    /* 0077138b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0077138e: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00771391: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00771394: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771397: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771398: ret 4 */ FN_RET(0x00771340); r_esp += 8; return;
L_0077139b:; BB(0x0077139b);
    /* 0077139b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077139d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007713a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007713a1: ret 4 */ FN_RET(0x00771340); r_esp += 8; return;
}

void f_007713a4(void) /* sub_7713A4 */
{
    FN_ENTER(0x007713a4);
    /* 007713a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007713a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007713a6: mov edi, ecx */ r_edi = r_ecx;
    /* 007713a8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007713ac: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 007713b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007713b2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x007713b2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007713b2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007713b4: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007713b8: mov esi, edx */ r_esi = r_edx;
    /* 007713ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007713bc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x007713bc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007713bc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007713be: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007713c0: jne 0x7713cc */ if (!fZ) goto L_007713cc;
L_007713c2:; BB(0x007713c2);
    /* 007713c2: mov eax, 1 */ r_eax = 0x1u;
    /* 007713c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007713c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007713c9: ret 4 */ FN_RET(0x007713a4); r_esp += 8; return;
L_007713cc:; BB(0x007713cc);
    /* 007713cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007713ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007713cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007713d0: ret 4 */ FN_RET(0x007713a4); r_esp += 8; return;
}

void f_007713d4(void) /* sub_7713D4 */
{
    FN_ENTER(0x007713d4);
    /* 007713d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007713d5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007713d8: mov edi, ecx */ r_edi = r_ecx;
    /* 007713da: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 007713df: fld dword ptr [0x978348] */ FPUSH(R_F32((u32)(0x978348u)));
    /* 007713e5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007713e8: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007713ed: jge 0x77144b */ if ((fS==fO)) goto L_0077144b;
L_007713ef:; BB(0x007713ef);
    /* 007713ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007713f0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7713f5u); f_0068d5a8();
    /* 007713f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007713f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007713f8: je 0x77144b */ if (fZ) goto L_0077144b;
L_007713fa:; BB(0x007713fa);
    /* 007713fa: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007713fd: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771403: jne 0x77144b */ if (!fZ) goto L_0077144b;
L_00771405:; BB(0x00771405);
    /* 00771405: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0077140b: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771411: jne 0x77144b */ if (!fZ) goto L_0077144b;
L_00771413:; BB(0x00771413);
    /* 00771413: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00771417: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00771418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771419: mov ecx, edi */ r_ecx = r_edi;
    /* 0077141b: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x771420u); f_00771458();
    /* 00771420: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00771423: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00771427: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771429: je 0x77144b */ if (fZ) goto L_0077144b;
L_0077142b:; BB(0x0077142b);
    /* 0077142b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077142f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00771433: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00771437: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0077143b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0077143d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00771441: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00771445: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 00771448: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_0077144b:; BB(0x0077144b);
    /* 0077144b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0077144e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771451: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771452: ret 8 */ FN_RET(0x007713d4); r_esp += 12; return;
}

void f_00771458(void) /* sub_771458 */
{
    FN_ENTER(0x00771458);
    /* 00771458: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771459: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077145c: mov edx, ecx */ r_edx = r_ecx;
    /* 0077145e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00771462: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00771466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771468: je 0x7714bd */ if (fZ) goto L_007714bd;
L_0077146a:; BB(0x0077146a);
    /* 0077146a: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0077146d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00771470: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00771473: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00771476: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00771479: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0077147d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00771481: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771484: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x771489u); f_0082f9c4();
    /* 00771489: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0077148c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0077148e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00771491: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00771495: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771497: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00771499: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0077149d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077149f: je 0x7714c3 */ if (fZ) goto L_007714c3;
L_007714a1:; BB(0x007714a1);
    /* 007714a1: mov eax, 0x3c23d70a */ r_eax = 0x3c23d70au;
    /* 007714a6: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 007714a8: mov dword ptr [edi + 4], 0x3c23d70a */ W32((u32)(r_edi+0x4u), 0x3c23d70au);
    /* 007714af: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 007714b2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007714b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007714b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007714ba: ret 8 */ FN_RET(0x00771458); r_esp += 12; return;
L_007714bd:; BB(0x007714bd);
    /* 007714bd: fld dword ptr [0x978344] */ FPUSH(R_F32((u32)(0x978344u)));
L_007714c3:; BB(0x007714c3);
    /* 007714c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007714c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007714c7: ret 8 */ FN_RET(0x00771458); r_esp += 12; return;
}

void f_007714cc(void) /* sub_7714CC */
{
    FN_ENTER(0x007714cc);
    /* 007714cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007714cd: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007714d0: mov edx, ecx */ r_edx = r_ecx;
    /* 007714d2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007714d4: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007714d8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007714da: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007714df: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 007714e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007714e6: jle 0x771707 */ if ((fZ||fS!=fO)) goto L_00771707;
L_007714ec:; BB(0x007714ec);
    /* 007714ec: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007714f0: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 007714f4: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 007714f8: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 007714fc: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00771500: mov ebp, edx */ r_ebp = r_edx;
L_00771502:; BB(0x00771502);
    /* 00771502: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00771509: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077150b: je 0x77169e */ if (fZ) goto L_0077169e;
L_00771511:; BB(0x00771511);
    /* 00771511: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00771515: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077151b: jge 0x77169e */ if ((fS==fO)) goto L_0077169e;
L_00771521:; BB(0x00771521);
    /* 00771521: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00771524: test ecx, 0x2000800 */ {  u32 a = r_ecx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077152a: jne 0x77169e */ if (!fZ) goto L_0077169e;
L_00771530:; BB(0x00771530);
    /* 00771530: mov ecx, dword ptr [esi + 0x3f0] */ r_ecx = R32((u32)(r_esi+0x3f0u));
    /* 00771536: cmp ecx, dword ptr [0xaafca0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077153c: jne 0x77169e */ if (!fZ) goto L_0077169e;
L_00771542:; BB(0x00771542);
    /* 00771542: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771545: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0077154b: mov edi, dword ptr [esi + 0x304] */ r_edi = R32((u32)(r_esi+0x304u));
    /* 00771551: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771554: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0077155a: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0077155e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00771562: lea edi, [ebp + 0x300] */ r_edi = (u32)(r_ebp+0x300u);
    /* 00771568: mov edx, edi */ r_edx = r_edi;
    /* 0077156a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x77156fu); f_0082f9c4();
    /* 0077156f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00771572: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771574: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00771578: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0077157a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0077157c: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 00771580: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00771582: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00771586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00771587: jb 0x771593 */ if (fC) goto L_00771593;
L_00771589:; BB(0x00771589);
    /* 00771589: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0077158e: jmp 0x77169e */ goto L_0077169e;
L_00771593:; BB(0x00771593);
    /* 00771593: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00771597: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0077159d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007715a1: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 007715a7: mov edx, edi */ r_edx = r_edi;
    /* 007715a9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007715ad: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 007715b3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007715b7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7715bcu); f_0082f9c4();
    /* 007715bc: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007715c0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007715c4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007715c6: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 007715ca: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 007715ce: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007715d0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007715d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007715d4: fcomp dword ptr [0xa9b1a0] */ fx_compare(ST(0), R_F32((u32)(0xa9b1a0u))); FPOP();
    /* 007715da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007715dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007715dd: ja 0x771606 */ if ((!fC&&!fZ)) goto L_00771606;
L_007715df:; BB(0x007715df);
    /* 007715df: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007715e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007715e3: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 007715e9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007715ed: mov ecx, dword ptr [esi + 0x304] */ r_ecx = R32((u32)(r_esi+0x304u));
    /* 007715f3: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 007715f7: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 007715fd: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00771601: jmp 0x771687 */ goto L_00771687;
L_00771606:; BB(0x00771606);
    /* 00771606: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00771608: fmul qword ptr [0x978090] */ ST(0) = ST(0) * R_F64((u32)(0x978090u));
    /* 0077160e: fdiv qword ptr [0x978088] */ ST(0) = ST(0) / R_F64((u32)(0x978088u));
    /* 00771614: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00771618: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0077161d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00771622: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00771626: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0077162a: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077162e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00771632: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00771636: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0077163b: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0077163f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00771647: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0077164f: mov dword ptr [esp + 0x14], 0x43960000 */ W32((u32)(r_esp+0x14u), 0x43960000u);
    /* 00771657: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x77165cu); f_0082d990();
    /* 0077165c: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00771660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00771662: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x771667u); f_0082d8bc();
    /* 00771667: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0077166b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077166c: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00771670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00771672: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x771677u); f_0082eab8();
    /* 00771677: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x77167cu); f_0082da80();
    /* 0077167c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00771680: mov edx, edi */ r_edx = r_edi;
    /* 00771682: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x771687u); f_0082ebac();
L_00771687:; BB(0x00771687);
    /* 00771687: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0077168b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077168c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077168d: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x771692u); f_00780d3c();
    /* 00771692: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771697: je 0x7716c2 */ if (fZ) goto L_007716c2;
L_00771699:; BB(0x00771699);
    /* 00771699: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0077169e:; BB(0x0077169e);
    /* 0077169e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007716a1: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007716a3: jl 0x771502 */ if ((fS!=fO)) goto L_00771502;
L_007716a9:; BB(0x007716a9);
    /* 007716a9: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 007716ad: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 007716b1: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 007716b5: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007716b9:; BB(0x007716b9);
    /* 007716b9: mov eax, ecx */ r_eax = r_ecx;
    /* 007716bb: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007716be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007716bf: ret 8 */ FN_RET(0x007714cc); r_esp += 12; return;
L_007716c2:; BB(0x007716c2);
    /* 007716c2: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 007716c6: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 007716ca: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 007716ce: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007716d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007716d4: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 007716d8: je 0x771700 */ if (fZ) goto L_00771700;
L_007716da:; BB(0x007716da);
    /* 007716da: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007716dd: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 007716e1: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 007716e5: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007716e7: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007716eb: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 007716ef: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 007716f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007716f6: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007716f9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007716fe: jmp 0x77169e */ goto L_0077169e;
L_00771700:; BB(0x00771700);
    /* 00771700: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00771705: jmp 0x77169e */ goto L_0077169e;
L_00771707:; BB(0x00771707);
    /* 00771707: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00771709: jmp 0x7716b9 */ goto L_007716b9;
}

void f_0077170c(void) /* sub_77170C */
{
    FN_ENTER(0x0077170c);
    /* 0077170c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077170d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077170e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077170f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771710: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00771713: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00771717: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0077171b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0077171f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771721: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 00771727: mov ecx, dword ptr [0xaae164] */ r_ecx = R32((u32)(0xaae164u));
    /* 0077172d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00771732: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00771734: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00771736: jge 0x77184c */ if ((fS==fO)) goto L_0077184c;
L_0077173c:; BB(0x0077173c);
    /* 0077173c: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00771740: mov ebx, eax */ r_ebx = r_eax;
    /* 00771742: mov eax, ecx */ r_eax = r_ecx;
    /* 00771744: mov ebp, edx */ r_ebp = r_edx;
L_00771746:; BB(0x00771746);
    /* 00771746: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 0077174d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077174f: je 0x771840 */ if (fZ) goto L_00771840;
L_00771755:; BB(0x00771755);
    /* 00771755: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 0077175c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077175f: jne 0x77181c */ if (!fZ) goto L_0077181c;
L_00771765:; BB(0x00771765);
    /* 00771765: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00771769: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077176f: jl 0x77181c */ if ((fS!=fO)) goto L_0077181c;
L_00771775:; BB(0x00771775);
    /* 00771775: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077177b: jge 0x77181c */ if ((fS==fO)) goto L_0077181c;
L_00771781:; BB(0x00771781);
    /* 00771781: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00771784: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077178a: jne 0x77181c */ if (!fZ) goto L_0077181c;
L_00771790:; BB(0x00771790);
    /* 00771790: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 00771793: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00771796: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00771799: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0077179d: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 007717a0: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007717a4: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007717a8: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 007717ab: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007717ae: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7717b3u); f_0082f9c4();
    /* 007717b3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007717b6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007717b8: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 007717bb: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007717bf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007717c1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007717c3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007717c7: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 007717cb: mov ecx, 0x3c23d70a */ r_ecx = 0x3c23d70au;
    /* 007717d0: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 007717d4: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007717d8: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 007717dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007717de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007717df: jae 0x77180f */ if (!fC) goto L_0077180f;
L_007717e1:; BB(0x007717e1);
    /* 007717e1: movzx ebx, word ptr [edi + 0x1c] */ r_ebx = (u32)R16((u32)(r_edi+0x1cu));
    /* 007717e5: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007717e9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007717eb: je 0x771833 */ if (fZ) goto L_00771833;
L_007717ed:; BB(0x007717ed);
    /* 007717ed: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007717f1: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 007717f4: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 007717f8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007717fd: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00771803: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 00771806: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0077180a: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0077180d: jmp 0x77181c */ goto L_0077181c;
L_0077180f:; BB(0x0077180f);
    /* 0077180f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00771811: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00771816: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0077181c:; BB(0x0077181c);
    /* 0077181c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077181f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00771821: jl 0x771746 */ if ((fS!=fO)) goto L_00771746;
L_00771827:; BB(0x00771827);
    /* 00771827: mov eax, ebx */ r_eax = r_ebx;
    /* 00771829: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077182c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077182d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077182e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077182f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771830: ret 8 */ FN_RET(0x0077170c); r_esp += 12; return;
L_00771833:; BB(0x00771833);
    /* 00771833: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00771838: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077183e: jmp 0x77181c */ goto L_0077181c;
L_00771840:; BB(0x00771840);
    /* 00771840: mov eax, ebx */ r_eax = r_ebx;
    /* 00771842: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771845: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771847: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771848: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771849: ret 8 */ FN_RET(0x0077170c); r_esp += 12; return;
L_0077184c:; BB(0x0077184c);
    /* 0077184c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0077184e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771851: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771852: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771853: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771854: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771855: ret 8 */ FN_RET(0x0077170c); r_esp += 12; return;
}

void f_00771858(void) /* sub_771858 */
{
    FN_ENTER(0x00771858);
    /* 00771858: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771859: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077185a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077185d: mov edi, ecx */ r_edi = r_ecx;
    /* 0077185f: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00771863: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00771865: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00771868: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0077186a: fmul qword ptr [0x978080] */ ST(0) = ST(0) * R_F64((u32)(0x978080u));
    /* 00771870: fdiv qword ptr [0x978078] */ ST(0) = ST(0) / R_F64((u32)(0x978078u));
    /* 00771876: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00771879: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0077187d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00771882: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00771886: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0077188a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077188e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00771891: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00771895: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771899: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077189a: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077189d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x7718a2u); f_007a8c74();
    /* 007718a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007718a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007718a4: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 007718a7: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x7718acu); f_007a9018();
    /* 007718ac: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007718af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007718b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007718b1: ret 8 */ FN_RET(0x00771858); r_esp += 12; return;
}

void f_007718b4(void) /* sub_7718B4 */
{
    FN_ENTER(0x007718b4);
    /* 007718b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007718b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007718b6: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007718b9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007718bb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007718be: mov eax, dword ptr [ebp + 0x2a4] */ r_eax = R32((u32)(r_ebp+0x2a4u));
    /* 007718c4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007718c7: mov eax, dword ptr [ebp + 0x2a8] */ r_eax = R32((u32)(r_ebp+0x2a8u));
    /* 007718cd: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 007718d0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007718d4: mov eax, dword ptr [ebp + 0x2ac] */ r_eax = R32((u32)(r_ebp+0x2acu));
    /* 007718da: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007718de: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7718e3u); f_0082f9c4();
    /* 007718e3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007718e6: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007718ea: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007718ec: fmul qword ptr [0x978070] */ ST(0) = ST(0) * R_F64((u32)(0x978070u));
    /* 007718f2: fdiv qword ptr [0x978068] */ ST(0) = ST(0) / R_F64((u32)(0x978068u));
    /* 007718f8: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 007718fc: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00771901: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00771906: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0077190a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0077190e: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00771912: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00771916: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0077191a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077191b: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077191e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x771923u); f_007a8cb8();
    /* 00771923: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771925: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00771928: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x77192du); f_007a9018();
    /* 0077192d: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771930: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771931: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771932: ret  */ FN_RET(0x007718b4); r_esp += 4; return;
}

void f_00771934(void) /* sub_771934 */
{
    FN_ENTER(0x00771934);
    /* 00771934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771935: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00771938: mov edi, ecx */ r_edi = r_ecx;
    /* 0077193a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0077193e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00771946: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0077194a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0077194f: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00771956: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x77195bu); f_0082d990();
    /* 0077195b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0077195f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00771961: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x771966u); f_0082d8bc();
    /* 00771966: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00771969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077196a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0077196e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00771970: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x771975u); f_0082eab8();
    /* 00771975: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x77197au); f_0082da80();
    /* 0077197a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0077197d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00771981: mov dword ptr [edi + 0x30c], eax */ W32((u32)(r_edi+0x30cu), r_eax);
    /* 00771987: mov dword ptr [edi + 0x314], edx */ W32((u32)(r_edi+0x314u), r_edx);
    /* 0077198d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771990: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771991: ret 8 */ FN_RET(0x00771934); r_esp += 12; return;
}

void f_00771994(void) /* sub_771994 */
{
    FN_ENTER(0x00771994);
    /* 00771994: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771995: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00771996: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771997: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077199a: mov edi, ecx */ r_edi = r_ecx;
    /* 0077199c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0077199f: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007719a2: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 007719a5: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007719a8: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 007719ab: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007719ae: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 007719b1: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 007719b7: lea ebp, [edi + 0x30c] */ r_ebp = (u32)(r_edi+0x30cu);
    /* 007719bd: mov edx, ebp */ r_edx = r_ebp;
    /* 007719bf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007719c2: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 007719c8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007719cc: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 007719d2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007719d6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7719dbu); f_0082ebac();
    /* 007719db: mov ebx, dword ptr [edi + 0x30c] */ r_ebx = R32((u32)(r_edi+0x30cu));
    /* 007719e1: mov eax, dword ptr [edi + 0x310] */ r_eax = R32((u32)(r_edi+0x310u));
    /* 007719e7: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007719eb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007719ef: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 007719f5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007719f9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007719fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007719fe: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x771a03u); f_007828e4();
    /* 00771a03: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00771a05: fld dword ptr [0x978320] */ FPUSH(R_F32((u32)(0x978320u)));
    /* 00771a0b: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00771a0f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00771a11: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00771a15: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00771a19: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00771a1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771a1d: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00771a21: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771a23: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00771a27: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00771a2b: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00771a2f: lea ebx, [edi + 0x300] */ r_ebx = (u32)(r_edi+0x300u);
    /* 00771a35: push 0x8fe0 */ { u32 v = 0x8fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00771a3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771a3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771a3c: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x771a41u); f_0077fffc();
    /* 00771a41: mov edx, eax */ r_edx = r_eax;
    /* 00771a43: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771a46: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771a48: je 0x771b76 */ if (fZ) goto L_00771b76;
L_00771a4e:; BB(0x00771a4e);
    /* 00771a4e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00771a51: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00771a54: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00771a58: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00771a5b: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00771a5e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00771a62: fchs  */ ST(0) = -ST(0);
    /* 00771a64: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00771a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771a69: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x771a6eu); f_007828e4();
    /* 00771a6e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00771a70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771a73: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00771a79: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771a7b: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 00771a81: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771a83: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00771a85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771a86: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00771a89: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x771a8eu); f_0082dc9c();
    /* 00771a8e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00771a92: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00771a96: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00771a9c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00771a9e: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 00771aa4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00771aa6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00771aa8: fcomp dword ptr [0x978328] */ fx_compare(ST(0), R_F32((u32)(0x978328u))); FPOP();
    /* 00771aae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00771ab0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00771ab1: jb 0x771acb */ if (fC) goto L_00771acb;
L_00771ab3:; BB(0x00771ab3);
    /* 00771ab3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771ab5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00771ab7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00771ab9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00771abb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771abd: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 00771ac3: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 00771ac9: jmp 0x771ae1 */ goto L_00771ae1;
L_00771acb:; BB(0x00771acb);
    /* 00771acb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771acd: fchs  */ ST(0) = -ST(0);
    /* 00771acf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00771ad1: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 00771ad7: fchs  */ ST(0) = -ST(0);
    /* 00771ad9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00771adb: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
L_00771ae1:; BB(0x00771ae1);
    /* 00771ae1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771ae4: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00771aea: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771aed: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 00771af3: mov edx, ebp */ r_edx = r_ebp;
    /* 00771af5: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00771af9: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00771aff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00771b03: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x771b08u); f_0082ebac();
    /* 00771b08: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 00771b0e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00771b12: mov eax, dword ptr [edi + 0x310] */ r_eax = R32((u32)(r_edi+0x310u));
    /* 00771b18: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00771b1c: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 00771b22: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00771b26: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00771b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771b2b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x771b30u); f_007828e4();
    /* 00771b30: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00771b32: fld dword ptr [0x978320] */ FPUSH(R_F32((u32)(0x978320u)));
    /* 00771b38: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00771b3c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00771b3e: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00771b42: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00771b46: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00771b48: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771b4a: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00771b4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771b50: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00771b54: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00771b58: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00771b5c: push 0x8fe0 */ { u32 v = 0x8fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00771b61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771b62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771b63: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x771b68u); f_0077fffc();
    /* 00771b68: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771b6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771b6d: je 0x771b76 */ if (fZ) goto L_00771b76;
L_00771b6f:; BB(0x00771b6f);
    /* 00771b6f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771b72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771b73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771b74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771b75: ret  */ FN_RET(0x00771994); r_esp += 4; return;
L_00771b76:; BB(0x00771b76);
    /* 00771b76: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771b79: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00771b7f: mov ebx, dword ptr [edi + 0x304] */ r_ebx = R32((u32)(r_edi+0x304u));
    /* 00771b85: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771b88: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00771b8e: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00771b92: mov edx, ebp */ r_edx = r_ebp;
    /* 00771b94: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00771b98: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x771b9du); f_0082ebac();
    /* 00771b9d: fld dword ptr [0x978324] */ FPUSH(R_F32((u32)(0x978324u)));
    /* 00771ba3: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00771ba7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00771bab: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00771bae: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00771bb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771bb4: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x771bb9u); f_00780630();
    /* 00771bb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771bbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771bbe: je 0x771bc7 */ if (fZ) goto L_00771bc7;
L_00771bc0:; BB(0x00771bc0);
    /* 00771bc0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771bc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771bc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771bc5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771bc6: ret  */ FN_RET(0x00771994); r_esp += 4; return;
L_00771bc7:; BB(0x00771bc7);
    /* 00771bc7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00771bca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00771bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771bcd: mov ecx, edi */ r_ecx = r_edi;
    /* 00771bcf: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x771bd4u); f_007b4c58();
    /* 00771bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771bd6: je 0x771bec */ if (fZ) goto L_00771bec;
L_00771bd8:; BB(0x00771bd8);
    /* 00771bd8: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00771bdb: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00771bdf: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00771be3: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00771be6: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00771be9: mov dword ptr [edi + 0x40], ebx */ W32((u32)(r_edi+0x40u), r_ebx);
L_00771bec:; BB(0x00771bec);
    /* 00771bec: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771bef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771bf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771bf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771bf2: ret  */ FN_RET(0x00771994); r_esp += 4; return;
}

void f_00771bf4(void) /* sub_771BF4 */
{
    FN_ENTER(0x00771bf4);
    /* 00771bf4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771bf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00771bf6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771bf7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00771bf9: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00771bfd: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00771c01: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00771c03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00771c05: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00771c07: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x771c0au); call_ind(t); }
    /* 00771c0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771c0c: je 0x771c3f */ if (fZ) goto L_00771c3f;
L_00771c0e:; BB(0x00771c0e);
    /* 00771c0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00771c0f: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00771c15: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c19: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c1d: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x771c22u); f_00771c8c();
    /* 00771c22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771c24: je 0x771c3f */ if (fZ) goto L_00771c3f;
L_00771c26:; BB(0x00771c26);
    /* 00771c26: push dword ptr [ebx + 0x308] */ { u32 v = R32((u32)(r_ebx+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c2c: push dword ptr [ebx + 0x304] */ { u32 v = R32((u32)(r_ebx+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00771c34: push dword ptr [ebx + 0x300] */ { u32 v = R32((u32)(r_ebx+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c3a: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x771c3fu); f_00771f1c();
L_00771c3f:; BB(0x00771c3f);
    /* 00771c3f: push dword ptr [ebx + 0x2ac] */ { u32 v = R32((u32)(r_ebx+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c45: push dword ptr [ebx + 0x2a8] */ { u32 v = R32((u32)(r_ebx+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00771c4d: push dword ptr [ebx + 0x2a4] */ { u32 v = R32((u32)(r_ebx+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c53: push dword ptr [ebx + 0x2a0] */ { u32 v = R32((u32)(r_ebx+0x2a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c59: push dword ptr [ebx + 0x29c] */ { u32 v = R32((u32)(r_ebx+0x29cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c5f: push dword ptr [ebx + 0x298] */ { u32 v = R32((u32)(r_ebx+0x298u)); r_esp -= 4; W32(r_esp, v); }
    /* 00771c65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771c66: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x771c6bu); f_00771f5c();
    /* 00771c6b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00771c6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00771c6f: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x771c72u); call_ind(t); }
    /* 00771c72: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00771c76: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00771c79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771c7b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x771c80u); f_007a9180();
    /* 00771c80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771c83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771c84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771c85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771c86: ret 0x14 */ FN_RET(0x00771bf4); r_esp += 24; return;
}

void f_00771c8c(void) /* sub_771C8C */
{
    FN_ENTER(0x00771c8c);
    /* 00771c8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771c8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00771c8e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00771c8f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771c90: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00771c93: mov esi, ecx */ r_esi = r_ecx;
    /* 00771c95: mov ecx, esi */ r_ecx = r_esi;
    /* 00771c97: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 00771c9b: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 00771c9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00771ca1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771ca2: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x771ca7u); f_007b4c58();
    /* 00771ca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771ca9: je 0x771dda */ if (fZ) goto L_00771dda;
L_00771caf:; BB(0x00771caf);
    /* 00771caf: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00771cb3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00771cb7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771cba: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00771cbe: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00771cc2: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771cc8: jne 0x771cd6 */ if (!fZ) goto L_00771cd6;
L_00771cca:; BB(0x00771cca);
    /* 00771cca: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 00771cd0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00771cd4: jmp 0x771ceb */ goto L_00771ceb;
L_00771cd6:; BB(0x00771cd6);
    /* 00771cd6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00771cda: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00771cde: fadd dword ptr [esi + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x304u));
    /* 00771ce4: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 00771ce7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_00771ceb:; BB(0x00771ceb);
    /* 00771ceb: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00771cf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771cf3: je 0x771da2 */ if (fZ) goto L_00771da2;
L_00771cf9:; BB(0x00771cf9);
    /* 00771cf9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771cfc: lea ebp, [esi + 0x300] */ r_ebp = (u32)(r_esi+0x300u);
    /* 00771d02: mov edx, ebp */ r_edx = r_ebp;
    /* 00771d04: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x771d09u); f_0082f9c4();
    /* 00771d09: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00771d0c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00771d10: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00771d12: fmul qword ptr [0x978050] */ ST(0) = ST(0) * R_F64((u32)(0x978050u));
    /* 00771d18: fdiv qword ptr [0x978048] */ ST(0) = ST(0) / R_F64((u32)(0x978048u));
    /* 00771d1e: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00771d22: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00771d27: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00771d2c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00771d30: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00771d34: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00771d38: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00771d3c: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00771d42: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00771d45: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00771d49: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 00771d53: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00771d58: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 00771d62: mov dword ptr [0xaab4f8], eax */ W32((u32)(0xaab4f8u), r_eax);
    /* 00771d67: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x771d6cu); f_0082d990();
    /* 00771d6c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00771d6e: mov edx, ebx */ r_edx = r_ebx;
    /* 00771d70: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x771d75u); f_0082d8bc();
    /* 00771d75: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00771d7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00771d7c: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00771d81: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x771d86u); f_0082eab8();
    /* 00771d86: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x771d8bu); f_0082da80();
    /* 00771d8b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771d8e: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00771d93: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x771d98u); f_0082ebac();
    /* 00771d98: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771d9b: mov edx, ebp */ r_edx = r_ebp;
    /* 00771d9d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x771da2u); f_0082ebac();
L_00771da2:; BB(0x00771da2);
    /* 00771da2: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771da8: jne 0x771db9 */ if (!fZ) goto L_00771db9;
L_00771daa:; BB(0x00771daa);
    /* 00771daa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00771dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771dae: mov ecx, esi */ r_ecx = r_esi;
    /* 00771db0: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x771db5u); f_00771e14();
    /* 00771db5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771db7: jne 0x771dda */ if (!fZ) goto L_00771dda;
L_00771db9:; BB(0x00771db9);
    /* 00771db9: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771dbf: jne 0x771de6 */ if (!fZ) goto L_00771de6;
L_00771dc1:; BB(0x00771dc1);
    /* 00771dc1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00771dc4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00771dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771dc7: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00771dcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00771dce: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x771dd3u); f_0077fffc();
    /* 00771dd3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771dd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771dd8: je 0x771de6 */ if (fZ) goto L_00771de6;
L_00771dda:; BB(0x00771dda);
    /* 00771dda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00771ddc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771ddf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771de0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771de1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771de2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771de3: ret 0x10 */ FN_RET(0x00771c8c); r_esp += 20; return;
L_00771de6:; BB(0x00771de6);
    /* 00771de6: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00771dea: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00771dee: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 00771df2: mov dword ptr [esi + 0x2a4], edx */ W32((u32)(r_esi+0x2a4u), r_edx);
    /* 00771df8: mov dword ptr [esi + 0x2a8], eax */ W32((u32)(r_esi+0x2a8u), r_eax);
    /* 00771dfe: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00771e04: mov eax, 1 */ r_eax = 0x1u;
    /* 00771e09: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771e0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771e0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00771e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771e0f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771e10: ret 0x10 */ FN_RET(0x00771c8c); r_esp += 20; return;
}

void f_00771e14(void) /* sub_771E14 */
{
    FN_ENTER(0x00771e14);
    /* 00771e14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771e15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00771e16: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00771e19: mov esi, ecx */ r_esi = r_ecx;
    /* 00771e1b: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00771e1f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771e22: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00771e24: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771e27: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00771e2a: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00771e30: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00771e34: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00771e37: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00771e3b: mov edx, esi */ r_edx = r_esi;
    /* 00771e3d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x771e42u); f_0082f9c4();
    /* 00771e42: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00771e45: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00771e48: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771e4a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00771e4e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00771e52: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771e54: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00771e56: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771e58: fcomp dword ptr [0xa9b1a0] */ fx_compare(ST(0), R_F32((u32)(0xa9b1a0u))); FPOP();
    /* 00771e5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00771e60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00771e61: ja 0x771e7c */ if ((!fC&&!fZ)) goto L_00771e7c;
L_00771e63:; BB(0x00771e63);
    /* 00771e63: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00771e65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00771e67: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00771e69: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771e6c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00771e6f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00771e73: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00771e76: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00771e7a: jmp 0x771ef4 */ goto L_00771ef4;
L_00771e7c:; BB(0x00771e7c);
    /* 00771e7c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00771e7e: fmul qword ptr [0x978040] */ ST(0) = ST(0) * R_F64((u32)(0x978040u));
    /* 00771e84: fdiv qword ptr [0x978038] */ ST(0) = ST(0) / R_F64((u32)(0x978038u));
    /* 00771e8a: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00771e8e: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00771e93: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00771e98: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00771e9c: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00771ea0: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00771ea4: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00771ea8: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00771eac: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00771eb1: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00771eb8: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00771ec0: mov dword ptr [esp + 8], 0x43960000 */ W32((u32)(r_esp+0x8u), 0x43960000u);
    /* 00771ec8: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x771ecdu); f_0082d990();
    /* 00771ecd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00771ecf: mov edx, edi */ r_edx = r_edi;
    /* 00771ed1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x771ed6u); f_0082d8bc();
    /* 00771ed6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00771ed9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771eda: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00771ede: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00771ee0: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x771ee5u); f_0082eab8();
    /* 00771ee5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x771eeau); f_0082da80();
    /* 00771eea: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771eed: mov edx, esi */ r_edx = r_esi;
    /* 00771eef: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x771ef4u); f_0082ebac();
L_00771ef4:; BB(0x00771ef4);
    /* 00771ef4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00771ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771ef8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00771ef9: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x771efeu); f_00780d3c();
    /* 00771efe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00771f01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00771f03: je 0x771f12 */ if (fZ) goto L_00771f12;
L_00771f05:; BB(0x00771f05);
    /* 00771f05: mov eax, 1 */ r_eax = 0x1u;
    /* 00771f0a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771f0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771f0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771f0f: ret 4 */ FN_RET(0x00771e14); r_esp += 8; return;
L_00771f12:; BB(0x00771f12);
    /* 00771f12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00771f14: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771f17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771f18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771f19: ret 4 */ FN_RET(0x00771e14); r_esp += 8; return;
}

void f_00771f1c(void) /* sub_771F1C */
{
    FN_ENTER(0x00771f1c);
    /* 00771f1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771f1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00771f1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00771f21: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00771f25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00771f27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00771f28: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x771f2du); f_007b4c58();
    /* 00771f2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00771f2f: je 0x771f55 */ if (fZ) goto L_00771f55;
L_00771f31:; BB(0x00771f31);
    /* 00771f31: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00771f34: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00771f37: mov dword ptr [ebx + 0x298], edx */ W32((u32)(r_ebx+0x298u), r_edx);
    /* 00771f3d: mov dword ptr [ebx + 0x29c], eax */ W32((u32)(r_ebx+0x29cu), r_eax);
    /* 00771f43: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00771f46: mov dword ptr [ebx + 0x2a0], eax */ W32((u32)(r_ebx+0x2a0u), r_eax);
    /* 00771f4c: mov eax, 1 */ r_eax = 0x1u;
    /* 00771f51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771f52: ret 0xc */ FN_RET(0x00771f1c); r_esp += 16; return;
L_00771f55:; BB(0x00771f55);
    /* 00771f55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00771f57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771f58: ret 0xc */ FN_RET(0x00771f1c); r_esp += 16; return;
}

void f_00771f5c(void) /* sub_771F5C */
{
    FN_ENTER(0x00771f5c);
    /* 00771f5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00771f5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00771f5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00771f5f: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00771f62: mov esi, ecx */ r_esi = r_ecx;
    /* 00771f64: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 00771f68: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00771f6c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00771f6f: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00771f73: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00771f77: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00771f7b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00771f7f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00771f82: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 00771f86: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x771f8bu); f_0082f9c4();
    /* 00771f8b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00771f8e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00771f91: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771f93: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00771f97: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00771f9b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00771f9d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00771f9f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00771fa1: fcomp dword ptr [0x978314] */ fx_compare(ST(0), R_F32((u32)(0x978314u))); FPOP();
    /* 00771fa7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00771fa9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00771faa: jae 0x771fcd */ if (!fC) goto L_00771fcd;
L_00771fac:; BB(0x00771fac);
    /* 00771fac: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00771fae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00771fb0: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 00771fba: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 00771fc4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00771fc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00771fc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00771fc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00771fca: ret 0x1c */ FN_RET(0x00771f5c); r_esp += 32; return;
L_00771fcd:; BB(0x00771fcd);
    /* 00771fcd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00771fcf: fmul qword ptr [0x978030] */ ST(0) = ST(0) * R_F64((u32)(0x978030u));
    /* 00771fd5: fdiv qword ptr [0x978028] */ ST(0) = ST(0) / R_F64((u32)(0x978028u));
    /* 00771fdb: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00771fdf: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00771fe4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00771fe9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00771fed: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00771ff1: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00771ff5: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00771ff9: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00771ffd: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00772002: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0077200a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0077200e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00772015: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x77201au); f_0082d990();
    /* 0077201a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077201c: mov edx, edi */ r_edx = r_edi;
    /* 0077201e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x772023u); f_0082d8bc();
    /* 00772023: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00772026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00772027: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0077202b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077202d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x772032u); f_0082eab8();
    /* 00772032: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x772037u); f_0082da80();
    /* 00772037: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0077203a: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0077203e: mov dword ptr [esi + 0x30c], eax */ W32((u32)(r_esi+0x30cu), r_eax);
    /* 00772044: mov dword ptr [esi + 0x314], edx */ W32((u32)(r_esi+0x314u), r_edx);
    /* 0077204a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077204d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077204e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077204f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00772050: ret 0x1c */ FN_RET(0x00771f5c); r_esp += 32; return;
}

