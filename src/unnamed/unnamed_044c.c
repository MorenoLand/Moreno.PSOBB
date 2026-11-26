#include "protos.h"

void f_0044c090(void) /* sub_44C090 */
{
    FN_ENTER(0x0044c090);
    /* 0044c090: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c093: mov ecx, dword ptr [ecx + 0x398] */ r_ecx = R32((u32)(r_ecx+0x398u));
    /* 0044c099: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044c09b: jle 0x44c198 */ if ((fZ||fS!=fO)) goto L_0044c198;
L_0044c0a1:; BB(0x0044c0a1);
    /* 0044c0a1: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 0044c0a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044c0a8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044c0a8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044c0a8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044c0aa: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0044c0ae:; BB(0x0044c0ae);
    /* 0044c0ae: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044c0b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c0b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c0b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044c0ba: jle 0x44c0ff */ if ((fZ||fS!=fO)) goto L_0044c0ff;
L_0044c0bc:; BB(0x0044c0bc);
    /* 0044c0bc: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0044c0c0: mov ebx, eax */ r_ebx = r_eax;
    /* 0044c0c2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0044c0c6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0044c0ca: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0044c0ce: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0044c0d1: mov ebp, ecx */ r_ebp = r_ecx;
L_0044c0d3:; BB(0x0044c0d3);
    /* 0044c0d3: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0044c0da: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c0dc: je 0x44c0e9 */ if (fZ) goto L_0044c0e9;
L_0044c0de:; BB(0x0044c0de);
    /* 0044c0de: mov eax, dword ptr [esi + 0x3ec] */ r_eax = R32((u32)(r_esi+0x3ecu));
    /* 0044c0e4: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c0e7: je 0x44c103 */ if (fZ) goto L_0044c103;
L_0044c0e9:; BB(0x0044c0e9);
    /* 0044c0e9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044c0ec: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c0ee: jl 0x44c0d3 */ if ((fS!=fO)) goto L_0044c0d3;
L_0044c0f0:; BB(0x0044c0f0);
    /* 0044c0f0: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0044c0f4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0044c0f8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0044c0fc: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0044c0ff:; BB(0x0044c0ff);
    /* 0044c0ff: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044c102: ret  */ FN_RET(0x0044c090); r_esp += 4; return;
L_0044c103:; BB(0x0044c103);
    /* 0044c103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044c105: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44c10au); f_0082dcbc();
    /* 0044c10a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0044c10e: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0044c112: fmul dword ptr [0x8fea30] */ ST(0) = ST(0) * R_F32((u32)(0x8fea30u));
    /* 0044c118: fadd dword ptr [0x8feadc] */ ST(0) = ST(0) + R_F32((u32)(0x8feadcu));
    /* 0044c11e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0044c122: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044c124: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44c129u); f_0082ddd8();
    /* 0044c129: fmul dword ptr [0x8fea30] */ ST(0) = ST(0) * R_F32((u32)(0x8fea30u));
    /* 0044c12f: fadd dword ptr [0x8fead8] */ ST(0) = ST(0) + R_F32((u32)(0x8fead8u));
    /* 0044c135: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0044c139: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
    /* 0044c13c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044c13e: fst dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0));
    /* 0044c141: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044c143: fstp dword ptr [esi + 0x44] */ W_F32((u32)(r_esi+0x44u), ST(0)); FPOP();
    /* 0044c146: fstp dword ptr [esi + 0x4c] */ W_F32((u32)(r_esi+0x4cu), ST(0)); FPOP();
    /* 0044c149: mov dword ptr [esi + 0x3c], 0x41200000 */ W32((u32)(r_esi+0x3cu), 0x41200000u);
    /* 0044c150: mov ecx, esi */ r_ecx = r_esi;
    /* 0044c152: mov dword ptr [esi + 0x48], 0x41200000 */ W32((u32)(r_esi+0x48u), 0x41200000u);
    /* 0044c159: lea edx, [ebp + 0x8000] */ r_edx = (u32)(r_ebp+0x8000u);
    /* 0044c15f: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 0044c162: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x44c167u); f_0069357c();
    /* 0044c167: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0044c16e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c171: jne 0x44c17a */ if (!fZ) goto L_0044c17a;
L_0044c173:; BB(0x0044c173);
    /* 0044c173: mov edx, 1 */ r_edx = 0x1u;
    /* 0044c178: jmp 0x44c17c */ goto L_0044c17c;
L_0044c17a:; BB(0x0044c17a);
    /* 0044c17a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0044c17c:; BB(0x0044c17c);
    /* 0044c17c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c17e: je 0x44c18b */ if (fZ) goto L_0044c18b;
L_0044c180:; BB(0x0044c180);
    /* 0044c180: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c182: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c183: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x44c188u); f_004d2fb4();
    /* 0044c188: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044c18b:; BB(0x0044c18b);
    /* 0044c18b: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044c191: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044c193: jmp 0x44c0e9 */ goto L_0044c0e9;
L_0044c198:; BB(0x0044c198);
    /* 0044c198: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c19a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044c19e: jmp 0x44c0ae */ goto L_0044c0ae;
}

void f_0044c1a4(void) /* sub_44C1A4 */
{
    FN_ENTER(0x0044c1a4);
    /* 0044c1a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c1a5: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044c1aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044c1ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044c1ae: jle 0x44c1d5 */ if ((fZ||fS!=fO)) goto L_0044c1d5;
L_0044c1b0:; BB(0x0044c1b0);
    /* 0044c1b0: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0044c1b3: mov ebx, edx */ r_ebx = r_edx;
L_0044c1b5:; BB(0x0044c1b5);
    /* 0044c1b5: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 0044c1bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c1be: je 0x44c1cb */ if (fZ) goto L_0044c1cb;
L_0044c1c0:; BB(0x0044c1c0);
    /* 0044c1c0: mov edx, dword ptr [ecx + 0x3ec] */ r_edx = R32((u32)(r_ecx+0x3ecu));
    /* 0044c1c6: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c1c9: je 0x44c1d7 */ if (fZ) goto L_0044c1d7;
L_0044c1cb:; BB(0x0044c1cb);
    /* 0044c1cb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044c1ce: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044c1d0: jl 0x44c1b5 */ if ((fS!=fO)) goto L_0044c1b5;
L_0044c1d2:; BB(0x0044c1d2);
    /* 0044c1d2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0044c1d5:; BB(0x0044c1d5);
    /* 0044c1d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c1d6: ret  */ FN_RET(0x0044c1a4); r_esp += 4; return;
L_0044c1d7:; BB(0x0044c1d7);
    /* 0044c1d7: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x44c1dcu); f_0069357c();
    /* 0044c1dc: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044c1e1: jmp 0x44c1cb */ goto L_0044c1cb;
}

void f_0044c1e4(void) /* sub_44C1E4 */
{
    FN_ENTER(0x0044c1e4);
    /* 0044c1e4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0044c1e8: mov ecx, dword ptr [ecx + 0x3a0] */ r_ecx = R32((u32)(r_ecx+0x3a0u));
    /* 0044c1ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044c1f0: je 0x44c22b */ if (fZ) goto L_0044c22b;
L_0044c1f2:; BB(0x0044c1f2);
    /* 0044c1f2: fcom dword ptr [0x8fead0] */ fx_compare(ST(0), R_F32((u32)(0x8fead0u))); 
    /* 0044c1f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044c1fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044c1fb: jbe 0x44c226 */ if ((fC||fZ)) goto L_0044c226;
L_0044c1fd:; BB(0x0044c1fd);
    /* 0044c1fd: fld dword ptr [0x8feacc] */ FPUSH(R_F32((u32)(0x8feaccu)));
    /* 0044c203: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0044c205: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044c207: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c20a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0044c20e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0044c211: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044c212: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044c214: jb 0x44c218 */ if (fC) goto L_0044c218;
L_0044c216:; BB(0x0044c216);
    /* 0044c216: fst st(1) */ ST(1) = ST(0);
L_0044c218:; BB(0x0044c218);
    /* 0044c218: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044c21a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044c21e: call 0x4538cc */ r_esp -= 4; W32(r_esp, 0x44c223u); f_004538cc();
    /* 0044c223: ret 8 */ FN_RET(0x0044c1e4); r_esp += 12; return;
L_0044c226:; BB(0x0044c226);
    /* 0044c226: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044c228: ret 8 */ FN_RET(0x0044c1e4); r_esp += 12; return;
L_0044c22b:; BB(0x0044c22b);
    /* 0044c22b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044c22d: ret 8 */ FN_RET(0x0044c1e4); r_esp += 12; return;
}

void f_0044c230(void) /* sub_44C230 */
{
    FN_ENTER(0x0044c230);
    /* 0044c230: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c231: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c232: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c233: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c234: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c237: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044c239: call 0x454038 */ r_esp -= 4; W32(r_esp, 0x44c23eu); f_00454038();
    /* 0044c23e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c240: je 0x44c280 */ if (fZ) goto L_0044c280;
L_0044c242:; BB(0x0044c242);
    /* 0044c242: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c247: push 0x3e5 */ { u32 v = 0x3e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c24c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44c251u); f_00814298();
    /* 0044c251: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c254: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044c259: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0044c25b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044c25d: jle 0x44c280 */ if ((fZ||fS!=fO)) goto L_0044c280;
L_0044c25f:; BB(0x0044c25f);
    /* 0044c25f: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0044c266: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c268: je 0x44c279 */ if (fZ) goto L_0044c279;
L_0044c26a:; BB(0x0044c26a);
    /* 0044c26a: mov edx, dword ptr [esi + 0x3ec] */ r_edx = R32((u32)(r_esi+0x3ecu));
    /* 0044c270: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c273: je 0x44c3fd */ if (fZ) goto L_0044c3fd;
L_0044c279:; BB(0x0044c279);
    /* 0044c279: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044c27c: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c27e: jl 0x44c25f */ if ((fS!=fO)) goto L_0044c25f;
L_0044c280:; BB(0x0044c280);
    /* 0044c280: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0044c287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c288: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44c28du); f_0068d5a8();
    /* 0044c28d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c28e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c290: je 0x44c38a */ if (fZ) goto L_0044c38a;
L_0044c296:; BB(0x0044c296);
    /* 0044c296: mov edi, dword ptr [ebx + 0x300] */ r_edi = R32((u32)(r_ebx+0x300u));
    /* 0044c29c: mov ebp, dword ptr [ebx + 0x304] */ r_ebp = R32((u32)(r_ebx+0x304u));
    /* 0044c2a2: mov esi, dword ptr [eax + 0x300] */ r_esi = R32((u32)(r_eax+0x300u));
    /* 0044c2a8: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0044c2ac: mov edi, dword ptr [ebx + 0x308] */ r_edi = R32((u32)(r_ebx+0x308u));
    /* 0044c2b2: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0044c2b6: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 0044c2b9: mov dword ptr [ebx + 0x300], esi */ W32((u32)(r_ebx+0x300u), r_esi);
    /* 0044c2bf: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 0044c2c5: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0044c2c8: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0044c2ce: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0044c2d4: mov dword ptr [ebx + 0x308], eax */ W32((u32)(r_ebx+0x308u), r_eax);
    /* 0044c2da: mov eax, dword ptr [ebx + 0x378] */ r_eax = R32((u32)(r_ebx+0x378u));
    /* 0044c2e0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0044c2e4: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0044c2e7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0044c2eb: movzx eax, word ptr [ebx + 0x28] */ r_eax = (u32)R16((u32)(r_ebx+0x28u));
    /* 0044c2ef: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0044c2f3: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0044c2f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c2fa: jne 0x44c326 */ if (!fZ) goto L_0044c326;
L_0044c2fc:; BB(0x0044c2fc);
    /* 0044c2fc: mov dword ptr [ebx + 0x38], 0x41a00000 */ W32((u32)(r_ebx+0x38u), 0x41a00000u);
    /* 0044c303: mov eax, 1 */ r_eax = 0x1u;
    /* 0044c308: mov word ptr [ebx + 0x28], ax */ W16((u32)(r_ebx+0x28u), (u16)r_eax);
    /* 0044c30c: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 0044c313: mov dword ptr [ebx + 0x40], 0x41a00000 */ W32((u32)(r_ebx+0x40u), 0x41a00000u);
    /* 0044c31a: mov dword ptr [ebx + 0x378], 0x2f */ W32((u32)(r_ebx+0x378u), 0x2fu);
    /* 0044c324: jmp 0x44c34a */ goto L_0044c34a;
L_0044c326:; BB(0x0044c326);
    /* 0044c326: mov dword ptr [ebx + 0x38], 0x461fc800 */ W32((u32)(r_ebx+0x38u), 0x461fc800u);
    /* 0044c32d: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 0044c330: mov eax, 2 */ r_eax = 0x2u;
    /* 0044c335: mov word ptr [ebx + 0x28], ax */ W16((u32)(r_ebx+0x28u), (u16)r_eax);
    /* 0044c339: mov dword ptr [ebx + 0x40], 0x42c00000 */ W32((u32)(r_ebx+0x40u), 0x42c00000u);
    /* 0044c340: mov dword ptr [ebx + 0x378], 0x2f */ W32((u32)(r_ebx+0x378u), 0x2fu);
L_0044c34a:; BB(0x0044c34a);
    /* 0044c34a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044c34c: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x44c351u); f_00787534();
    /* 0044c351: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0044c355: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0044c359: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0044c35f: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0044c365: mov dword ptr [ebx + 0x308], edi */ W32((u32)(r_ebx+0x308u), r_edi);
    /* 0044c36b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0044c36f: mov dword ptr [ebx + 0x38], edi */ W32((u32)(r_ebx+0x38u), r_edi);
    /* 0044c372: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 0044c375: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0044c379: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 0044c37c: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0044c380: mov word ptr [ebx + 0x28], bp */ W16((u32)(r_ebx+0x28u), (u16)r_ebp);
    /* 0044c384: mov dword ptr [ebx + 0x378], esi */ W32((u32)(r_ebx+0x378u), r_esi);
L_0044c38a:; BB(0x0044c38a);
    /* 0044c38a: mov dword ptr [esp + 0xc], 0x800 */ W32((u32)(r_esp+0xcu), 0x800u);
    /* 0044c392: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0044c396: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044c398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c399: call 0x787710 */ r_esp -= 4; W32(r_esp, 0x44c39eu); f_00787710();
    /* 0044c39e: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 0044c3a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044c3a4: jl 0x44c3d3 */ if ((fS!=fO)) goto L_0044c3d3;
L_0044c3a6:; BB(0x0044c3a6);
    /* 0044c3a6: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c3ab: jg 0x44c3d3 */ if ((!fZ&&fS==fO)) goto L_0044c3d3;
L_0044c3ad:; BB(0x0044c3ad);
    /* 0044c3ad: mov edi, dword ptr [0xab02b8] */ r_edi = R32((u32)(0xab02b8u));
    /* 0044c3b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044c3b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044c3b7: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0044c3ba: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044c3bc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0044c3c0: mov dword ptr [esi + edi], eax */ W32((u32)(r_esi+r_edi), r_eax);
    /* 0044c3c3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0044c3c7: mov dword ptr [esi + edi + 4], edx */ W32((u32)(r_esi+r_edi+0x4u), r_edx);
    /* 0044c3cb: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0044c3cf: mov dword ptr [esi + edi + 8], ebp */ W32((u32)(r_esi+r_edi+0x8u), r_ebp);
L_0044c3d3:; BB(0x0044c3d3);
    /* 0044c3d3: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0044c3d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3d8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0044c3da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044c3dc: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x44c3e2u); call_ind(t); }
    /* 0044c3e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c3e3: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x44c3e8u); f_008113e4();
    /* 0044c3e8: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0044c3ec: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044c3f1: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0044c3f5: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044c3f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044c3f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c3fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044c3fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044c3fc: ret  */ FN_RET(0x0044c230); r_esp += 4; return;
L_0044c3fd:; BB(0x0044c3fd);
    /* 0044c3fd: fld dword ptr [0x8feac8] */ FPUSH(R_F32((u32)(0x8feac8u)));
    /* 0044c403: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0044c406: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0044c409: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0044c40c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044c410: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044c413: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0044c417: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0044c41a: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c41c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c41d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44c422u); f_0050b510();
    /* 0044c422: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c425: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044c42a: jmp 0x44c279 */ goto L_0044c279;
}

void f_0044c430(void) /* sub_44C430 */
{
    FN_ENTER(0x0044c430);
    /* 0044c430: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c431: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c432: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c433: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c434: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c437: mov eax, ecx */ r_eax = r_ecx;
    /* 0044c439: movzx edx, byte ptr [0xa44cc0] */ r_edx = (u32)R8((u32)(0xa44cc0u));
    /* 0044c440: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044c443: jne 0x44c460 */ if (!fZ) goto L_0044c460;
L_0044c445:; BB(0x0044c445);
    /* 0044c445: fld dword ptr [0x8feab0] */ FPUSH(R_F32((u32)(0x8feab0u)));
    /* 0044c44b: mov dword ptr [0xa44cc4], 0x41e49249 */ W32((u32)(0xa44cc4u), 0x41e49249u);
    /* 0044c455: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044c458: mov byte ptr [0xa44cc0], dl */ W8((u32)(0xa44cc0u), (u8)r_edx);
    /* 0044c45e: jmp 0x44c466 */ goto L_0044c466;
L_0044c460:; BB(0x0044c460);
    /* 0044c460: fld dword ptr [0xa44cc4] */ FPUSH(R_F32((u32)(0xa44cc4u)));
L_0044c466:; BB(0x0044c466);
    /* 0044c466: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044c469: jne 0x44c481 */ if (!fZ) goto L_0044c481;
L_0044c46b:; BB(0x0044c46b);
    /* 0044c46b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0044c46d: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0044c46f: fstp dword ptr [0xa44cc8] */ W_F32((u32)(0xa44cc8u), ST(0)); FPOP();
    /* 0044c475: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044c47b: mov byte ptr [0xa44cc0], dl */ W8((u32)(0xa44cc0u), (u8)r_edx);
L_0044c481:; BB(0x0044c481);
    /* 0044c481: fld dword ptr [0xa44cc8] */ FPUSH(R_F32((u32)(0xa44cc8u)));
    /* 0044c487: movzx edx, word ptr [0xa44ce2] */ r_edx = (u32)R16((u32)(0xa44ce2u));
    /* 0044c48e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044c491: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0044c496: movzx edx, word ptr [0xa44ce4] */ r_edx = (u32)R16((u32)(0xa44ce4u));
    /* 0044c49d: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0044c4a2: movzx edx, word ptr [0xa44cea] */ r_edx = (u32)R16((u32)(0xa44ceau));
    /* 0044c4a9: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0044c4ae: movzx edx, word ptr [0xa44cec] */ r_edx = (u32)R16((u32)(0xa44cecu));
    /* 0044c4b5: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0044c4ba: movzx edx, word ptr [0xa44cee] */ r_edx = (u32)R16((u32)(0xa44ceeu));
    /* 0044c4c1: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 0044c4c6: mov edx, dword ptr [0xa44cfc] */ r_edx = R32((u32)(0xa44cfcu));
    /* 0044c4cc: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0044c4d0: mov edx, dword ptr [0xa44d00] */ r_edx = R32((u32)(0xa44d00u));
    /* 0044c4d6: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0044c4da: mov edx, dword ptr [0xa44d04] */ r_edx = R32((u32)(0xa44d04u));
    /* 0044c4e0: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0044c4e4: mov edx, dword ptr [0xa44d08] */ r_edx = R32((u32)(0xa44d08u));
    /* 0044c4ea: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0044c4ee: mov edx, dword ptr [0xa44d0c] */ r_edx = R32((u32)(0xa44d0cu));
    /* 0044c4f4: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0044c4f8: mov edx, dword ptr [0xa44d10] */ r_edx = R32((u32)(0xa44d10u));
    /* 0044c4fe: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0044c502: mov edx, dword ptr [0xa44d14] */ r_edx = R32((u32)(0xa44d14u));
    /* 0044c508: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0044c50c: mov edx, dword ptr [0xa44d18] */ r_edx = R32((u32)(0xa44d18u));
    /* 0044c512: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0044c516: movzx edx, word ptr [0xa44d1c] */ r_edx = (u32)R16((u32)(0xa44d1cu));
    /* 0044c51d: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
    /* 0044c522: movzx edx, word ptr [0xa44d1e] */ r_edx = (u32)R16((u32)(0xa44d1eu));
    /* 0044c529: mov word ptr [esp + 0x42], dx */ W16((u32)(r_esp+0x42u), (u16)r_edx);
    /* 0044c52e: mov edx, 1 */ r_edx = 0x1u;
    /* 0044c533: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 0044c538: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0044c53e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c541: jne 0x44c54d */ if (!fZ) goto L_0044c54d;
L_0044c543:; BB(0x0044c543);
    /* 0044c543: fld dword ptr [0x8fea34] */ FPUSH(R_F32((u32)(0x8fea34u)));
    /* 0044c549: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0044c54b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_0044c54d:; BB(0x0044c54d);
    /* 0044c54d: mov edx, 5 */ r_edx = 0x5u;
    /* 0044c552: mov ebp, eax */ r_ebp = r_eax;
    /* 0044c554: mov ebx, edx */ r_ebx = r_edx;
    /* 0044c556: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0044c558:; BB(0x0044c558);
    /* 0044c558: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 0044c55d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044c55f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044c561: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0044c561, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044c561, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044c563: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0044c565: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044c567: jle 0x44c622 */ if ((fZ||fS!=fO)) goto L_0044c622;
L_0044c56d:; BB(0x0044c56d);
    /* 0044c56d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044c56f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0044c573: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0044c577: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
L_0044c57b:; BB(0x0044c57b);
    /* 0044c57b: mov edx, dword ptr [ebp + 0x38c] */ r_edx = R32((u32)(r_ebp+0x38cu));
    /* 0044c581: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044c583: jle 0x44c634 */ if ((fZ||fS!=fO)) goto L_0044c634;
L_0044c589:; BB(0x0044c589);
    /* 0044c589: cmp edx, 0x1fe */ {  u32 a = r_edx; u32 b = 0x1feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c58f: jg 0x44c634 */ if ((!fZ&&fS==fO)) goto L_0044c634;
L_0044c595:; BB(0x0044c595);
    /* 0044c595: cmp edx, 0x1fd */ {  u32 a = r_edx; u32 b = 0x1fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c59b: jg 0x44c634 */ if ((!fZ&&fS==fO)) goto L_0044c634;
L_0044c5a1:; BB(0x0044c5a1);
    /* 0044c5a1: movzx eax, word ptr [ebp + 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0x2cu));
    /* 0044c5a5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044c5a7: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0044c5ac: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0044c5b0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044c5b2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c5b5: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0044c5ba: mov eax, dword ptr [0x9a56a0] */ r_eax = R32((u32)(0x9a56a0u));
    /* 0044c5bf: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044c5c3: mov eax, dword ptr [0x9a56a4] */ r_eax = R32((u32)(0x9a56a4u));
    /* 0044c5c8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0044c5cc: mov eax, dword ptr [0x9a56a8] */ r_eax = R32((u32)(0x9a56a8u));
    /* 0044c5d1: mov dword ptr [ebp + 0x38c], edx */ W32((u32)(r_ebp+0x38cu), r_edx);
    /* 0044c5d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0044c5d9: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0044c5dd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44c5e2u); f_0082dcbc();
    /* 0044c5e2: fmul dword ptr [esp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4cu));
    /* 0044c5e6: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0044c5ea: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0044c5ee: mov ecx, edi */ r_ecx = r_edi;
    /* 0044c5f0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x44c5f5u); f_0082ddd8();
    /* 0044c5f5: fmul dword ptr [esp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4cu));
    /* 0044c5f9: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0044c5fd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0044c601: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044c604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c605: call 0x45fb24 */ r_esp -= 4; W32(r_esp, 0x44c60au); f_0045fb24();
    /* 0044c60a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c60b: add edi, dword ptr [esp + 0x48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044c60f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044c612: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c614: jl 0x44c57b */ if ((fS!=fO)) goto L_0044c57b;
L_0044c61a:; BB(0x0044c61a);
    /* 0044c61a: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0044c61e: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
L_0044c622:; BB(0x0044c622);
    /* 0044c622: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0044c624: add ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044c627: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c62a: jl 0x44c558 */ if ((fS!=fO)) goto L_0044c558;
L_0044c630:; BB(0x0044c630);
    /* 0044c630: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0044c632: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0044c634:; BB(0x0044c634);
    /* 0044c634: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044c637: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044c638: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c639: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044c63a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044c63b: ret  */ FN_RET(0x0044c430); r_esp += 4; return;
}

void f_0044c63c(void) /* sub_44C63C */
{
    FN_ENTER(0x0044c63c);
    /* 0044c63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c63d: mov edi, ecx */ r_edi = r_ecx;
    /* 0044c63f: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c641: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x44c646u); f_0077a6cc();
    /* 0044c646: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c647: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0044c64a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044c64c: jle 0x44c653 */ if ((fZ||fS!=fO)) goto L_0044c653;
L_0044c64e:; BB(0x0044c64e);
    /* 0044c64e: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c651: jle 0x44c658 */ if ((fZ||fS!=fO)) goto L_0044c658;
L_0044c653:; BB(0x0044c653);
    /* 0044c653: mov eax, 2 */ r_eax = 0x2u;
L_0044c658:; BB(0x0044c658);
    /* 0044c658: imul eax, dword ptr [edi + 0x398] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edi+0x398u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044c65f: cmp eax, dword ptr [edi + 0x394] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x394u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044c665: jg 0x44c66e */ if ((!fZ&&fS==fO)) goto L_0044c66e;
L_0044c667:; BB(0x0044c667);
    /* 0044c667: mov eax, 1 */ r_eax = 0x1u;
    /* 0044c66c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044c66d: ret  */ FN_RET(0x0044c63c); r_esp += 4; return;
L_0044c66e:; BB(0x0044c66e);
    /* 0044c66e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044c670: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044c671: ret  */ FN_RET(0x0044c63c); r_esp += 4; return;
}

void f_0044c674(void) /* sub_44C674 */
{
    FN_ENTER(0x0044c674);
    /* 0044c674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c675: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c678: movzx eax, byte ptr [0xa44d20] */ r_eax = (u32)R8((u32)(0xa44d20u));
    /* 0044c67f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044c681: jne 0x44c697 */ if (!fZ) goto L_0044c697;
L_0044c683:; BB(0x0044c683);
    /* 0044c683: mov dword ptr [0xa44d24], 0x40f00000 */ W32((u32)(0xa44d24u), 0x40f00000u);
    /* 0044c68d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044c692: mov byte ptr [0xa44d20], al */ W8((u32)(0xa44d20u), (u8)r_eax);
L_0044c697:; BB(0x0044c697);
    /* 0044c697: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0044c69b: mov ebp, dword ptr [0xaae168] */ r_ebp = R32((u32)(0xaae168u));
    /* 0044c6a1: add ebp, dword ptr [0xaae164] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044c6a7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0044c6aa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044c6ac: fld dword ptr [eax*8 + 0x9a58ac] */ FPUSH(R_F32((u32)(r_eax*8+0x9a58acu)));
    /* 0044c6b3: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0044c6b6: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0044c6bb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044c6bd: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c6bf: lea edx, [ecx + ecx + 0x9a58a0] */ r_edx = (u32)(r_ecx+r_ecx+0x9a58a0u);
    /* 0044c6c6: lea ecx, [ecx + ecx + 0x9a58b0] */ r_ecx = (u32)(r_ecx+r_ecx+0x9a58b0u);
    /* 0044c6cd: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0044c6d0: jge 0x44c880 */ if ((fS==fO)) goto L_0044c880;
L_0044c6d6:; BB(0x0044c6d6);
    /* 0044c6d6: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0044c6da: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0044c6de: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0044c6e2: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0044c6e6: mov ebx, edx */ r_ebx = r_edx;
    /* 0044c6e8: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0044c6ec: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
L_0044c6f0:; BB(0x0044c6f0);
    /* 0044c6f0: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0044c6f7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c6f9: je 0x44c7a7 */ if (fZ) goto L_0044c7a7;
L_0044c6ff:; BB(0x0044c6ff);
    /* 0044c6ff: mov ecx, dword ptr [esi + 0xa4] */ r_ecx = R32((u32)(r_esi+0xa4u));
    /* 0044c705: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c707: je 0x44c7a7 */ if (fZ) goto L_0044c7a7;
L_0044c70d:; BB(0x0044c70d);
    /* 0044c70d: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0044c710: test ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c716: je 0x44c7a7 */ if (fZ) goto L_0044c7a7;
L_0044c71c:; BB(0x0044c71c);
    /* 0044c71c: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0044c71f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c720: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c721: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x44c726u); f_00836208();
    /* 0044c726: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c729: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 0044c72d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044c72f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044c730: ja 0x44c739 */ if ((!fC&&!fZ)) goto L_0044c739;
L_0044c732:; BB(0x0044c732);
    /* 0044c732: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0044c737: jmp 0x44c7a7 */ goto L_0044c7a7;
L_0044c739:; BB(0x0044c739);
    /* 0044c739: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0044c73d: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0044c741: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0044c745: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0044c749: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0044c74d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044c74f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c751: mov ebx, eax */ r_ebx = r_eax;
    /* 0044c753: mov ebp, edx */ r_ebp = r_edx;
L_0044c755:; BB(0x0044c755);
    /* 0044c755: fld dword ptr [ebx + 0x9a58ac] */ FPUSH(R_F32((u32)(r_ebx+0x9a58acu)));
    /* 0044c75b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0044c75f: lea edi, [ebx + 0x9a58a0] */ r_edi = (u32)(r_ebx+0x9a58a0u);
    /* 0044c765: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c767: je 0x44c784 */ if (fZ) goto L_0044c784;
L_0044c769:; BB(0x0044c769);
    /* 0044c769: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c76a: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0044c76e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c76f: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x44c774u); f_00836208();
    /* 0044c774: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c777: fcomp dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); FPOP();
    /* 0044c77b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044c77d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044c77e: jbe 0x44c814 */ if ((fC||fZ)) goto L_0044c814;
L_0044c784:; BB(0x0044c784);
    /* 0044c784: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044c787: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044c78a: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c78d: jl 0x44c755 */ if ((fS!=fO)) goto L_0044c755;
L_0044c78f:; BB(0x0044c78f);
    /* 0044c78f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0044c793: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0044c797: mov edx, ebp */ r_edx = r_ebp;
    /* 0044c799: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0044c79d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c7a0: jne 0x44c7c5 */ if (!fZ) goto L_0044c7c5;
L_0044c7a2:; BB(0x0044c7a2);
    /* 0044c7a2: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_0044c7a7:; BB(0x0044c7a7);
    /* 0044c7a7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044c7aa: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c7ac: jl 0x44c6f0 */ if ((fS!=fO)) goto L_0044c6f0;
L_0044c7b2:; BB(0x0044c7b2);
    /* 0044c7b2: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0044c7b6: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0044c7ba: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_0044c7be:; BB(0x0044c7be);
    /* 0044c7be: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044c7c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c7c2: ret 4 */ FN_RET(0x0044c674); r_esp += 8; return;
L_0044c7c5:; BB(0x0044c7c5);
    /* 0044c7c5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0044c7c8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_0044c7cc:; BB(0x0044c7cc);
    /* 0044c7cc: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0044c7d0: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0044c7d2: mov eax, dword ptr [0xa44d24] */ r_eax = R32((u32)(0xa44d24u));
    /* 0044c7d7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0044c7db: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044c7dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044c7df: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044c7e2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0044c7e6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0044c7ea: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044c7ed: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44c7f2u); f_0082ebac();
    /* 0044c7f2: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0044c7f5: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0044c7f9: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0044c7fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044c7fe: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0044c801: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 0044c804: mov dword ptr [esi + 0x40], edi */ W32((u32)(r_esi+0x40u), r_edi);
    /* 0044c807: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x44c80cu); f_007b999c();
    /* 0044c80c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c80d: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0044c812: jmp 0x44c7a7 */ goto L_0044c7a7;
L_0044c814:; BB(0x0044c814);
    /* 0044c814: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0044c818: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0044c81c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0044c820: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044c823: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0044c826: mov edx, edi */ r_edx = r_edi;
    /* 0044c828: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044c82b: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0044c82e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0044c832: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0044c835: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0044c839: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44c83eu); f_0082f9c4();
    /* 0044c83e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0044c846: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044c849: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x44c84eu); f_0083173c();
    /* 0044c84e: fcomp dword ptr [0x8feaa4] */ fx_compare(ST(0), R_F32((u32)(0x8feaa4u))); FPOP();
    /* 0044c854: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044c856: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044c857: ja 0x44c86a */ if ((!fC&&!fZ)) goto L_0044c86a;
L_0044c859:; BB(0x0044c859);
    /* 0044c859: fld dword ptr [0x8feaa8] */ FPUSH(R_F32((u32)(0x8feaa8u)));
    /* 0044c85f: fld dword ptr [0x8feaa0] */ FPUSH(R_F32((u32)(0x8feaa0u)));
    /* 0044c865: jmp 0x44c7cc */ goto L_0044c7cc;
L_0044c86a:; BB(0x0044c86a);
    /* 0044c86a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044c86d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x44c872u); f_0082df08();
    /* 0044c872: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044c874: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0044c877: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0044c87b: jmp 0x44c7cc */ goto L_0044c7cc;
L_0044c880:; BB(0x0044c880);
    /* 0044c880: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0044c882: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044c884: jmp 0x44c7be */ goto L_0044c7be;
}

void f_0044c88c(void)
{
    FN_ENTER(0x0044c88c);
    /* 0044c88c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c88d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c88f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c891: push 0x8cecde */ { u32 v = 0x8cecdeu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c896: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044c89c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c89d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044c8a4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c8a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044c8aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044c8ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044c8b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044c8b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c8b5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0044c8b8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044c8bb: push 0x3b4 */ { u32 v = 0x3b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c8c0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44c8c5u); f_005caba4();
    /* 0044c8c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c8c6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044c8c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c8cb: je 0x44c938 */ if (fZ) goto L_0044c938;
L_0044c8cd:; BB(0x0044c8cd);
    /* 0044c8cd: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0044c8d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044c8db: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c8dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44c8e2u); f_005caba4();
    /* 0044c8e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044c8e3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044c8e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c8e8: je 0x44c934 */ if (fZ) goto L_0044c934;
L_0044c8ea:; BB(0x0044c8ea);
    /* 0044c8ea: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0044c8f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044c8f8: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044c8fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044c901: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x44c906u); f_00787a4c();
    /* 0044c906: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044c909: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0044c910:; BB(0x0044c910);
    /* 0044c910: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044c913: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044c916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c917: call 0x44c93c */ r_esp -= 4; W32(r_esp, 0x44c91cu); f_0044c93c();
    /* 0044c91c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044c91f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0044c926:; BB(0x0044c926);
    /* 0044c926: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044c929: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044c930: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c932: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c933: ret  */ FN_RET(0x0044c88c); r_esp += 4; return;
L_0044c934:; BB(0x0044c934);
    /* 0044c934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c936: jmp 0x44c910 */ goto L_0044c910;
L_0044c938:; BB(0x0044c938);
    /* 0044c938: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044c93a: jmp 0x44c926 */ goto L_0044c926;
}

void f_0044c93c(void) /* sub_44C93C */
{
    FN_ENTER(0x0044c93c);
    /* 0044c93c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c93d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c93f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c941: push 0x8cecf8 */ { u32 v = 0x8cecf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c946: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044c94c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c94d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044c954: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c957: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044c95a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0044c95d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0044c960: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0044c963: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044c966: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044c969: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0044c96c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044c96f: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x44c974u); f_007865e8();
    /* 0044c974: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044c97b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c97e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044c981: mov dword ptr [ecx], 0xaf6a20 */ W32((u32)(r_ecx), 0xaf6a20u);
    /* 0044c987: mov eax, dword ptr [0x9a5910] */ r_eax = R32((u32)(0x9a5910u));
    /* 0044c98c: mov dword ptr [ecx + 0x38c], 1 */ W32((u32)(r_ecx+0x38cu), 0x1u);
    /* 0044c996: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0044c999: movsx ebx, word ptr [edx + 2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0044c99d: cmp ebx, 0x200 */ {  u32 a = r_ebx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044c9a3: je 0x44c9ba */ if (fZ) goto L_0044c9ba;
L_0044c9a5:; BB(0x0044c9a5);
    /* 0044c9a5: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044c9a8: mov eax, ecx */ r_eax = r_ecx;
    /* 0044c9aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044c9ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044c9b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c9b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c9b7: ret 8 */ FN_RET(0x0044c93c); r_esp += 12; return;
L_0044c9ba:; BB(0x0044c9ba);
    /* 0044c9ba: mov dword ptr [0xa44d4c], ecx */ W32((u32)(0xa44d4cu), r_ecx);
    /* 0044c9c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c9c1: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0044c9c3: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x44c9c9u); call_ind(t); }
    /* 0044c9c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044c9cc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c9cf: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0044c9d2: mov word ptr [0xa44ce0], dx */ W16((u32)(0xa44ce0u), (u16)r_edx);
    /* 0044c9d9: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 0044c9dd: mov word ptr [0xa44ce2], bx */ W16((u32)(0xa44ce2u), (u16)r_ebx);
    /* 0044c9e4: movzx esi, word ptr [eax + 4] */ r_esi = (u32)R16((u32)(r_eax+0x4u));
    /* 0044c9e8: mov word ptr [0xa44ce4], si */ W16((u32)(0xa44ce4u), (u16)r_esi);
    /* 0044c9ef: movzx edi, word ptr [eax + 6] */ r_edi = (u32)R16((u32)(r_eax+0x6u));
    /* 0044c9f3: mov word ptr [0xa44ce6], di */ W16((u32)(0xa44ce6u), (u16)r_edi);
    /* 0044c9fa: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0044c9fe: mov word ptr [0xa44ce8], dx */ W16((u32)(0xa44ce8u), (u16)r_edx);
    /* 0044ca05: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0044ca09: mov word ptr [0xa44cea], dx */ W16((u32)(0xa44ceau), (u16)r_edx);
    /* 0044ca10: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 0044ca14: mov word ptr [0xa44cec], dx */ W16((u32)(0xa44cecu), (u16)r_edx);
    /* 0044ca1b: movzx edx, word ptr [eax + 0xe] */ r_edx = (u32)R16((u32)(r_eax+0xeu));
    /* 0044ca1f: mov word ptr [0xa44cee], dx */ W16((u32)(0xa44ceeu), (u16)r_edx);
    /* 0044ca26: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0044ca29: mov dword ptr [0xa44cf0], edx */ W32((u32)(0xa44cf0u), r_edx);
    /* 0044ca2f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0044ca32: mov dword ptr [0xa44cf4], edx */ W32((u32)(0xa44cf4u), r_edx);
    /* 0044ca38: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0044ca3b: mov dword ptr [0xa44cf8], edx */ W32((u32)(0xa44cf8u), r_edx);
    /* 0044ca41: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0044ca44: mov dword ptr [0xa44cfc], edx */ W32((u32)(0xa44cfcu), r_edx);
    /* 0044ca4a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0044ca4d: mov dword ptr [0xa44d00], edx */ W32((u32)(0xa44d00u), r_edx);
    /* 0044ca53: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0044ca56: mov dword ptr [0xa44d04], edx */ W32((u32)(0xa44d04u), r_edx);
    /* 0044ca5c: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0044ca5f: mov dword ptr [0xa44d08], edx */ W32((u32)(0xa44d08u), r_edx);
    /* 0044ca65: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0044ca68: mov dword ptr [0xa44d0c], edx */ W32((u32)(0xa44d0cu), r_edx);
    /* 0044ca6e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0044ca71: mov dword ptr [0xa44d10], edx */ W32((u32)(0xa44d10u), r_edx);
    /* 0044ca77: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0044ca7a: mov dword ptr [0xa44d14], edx */ W32((u32)(0xa44d14u), r_edx);
    /* 0044ca80: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0044ca83: mov dword ptr [0xa44d18], edx */ W32((u32)(0xa44d18u), r_edx);
    /* 0044ca89: movzx edx, word ptr [eax + 0x3c] */ r_edx = (u32)R16((u32)(r_eax+0x3cu));
    /* 0044ca8d: mov word ptr [0xa44d1c], dx */ W16((u32)(0xa44d1cu), (u16)r_edx);
    /* 0044ca94: movzx eax, word ptr [eax + 0x3e] */ r_eax = (u32)R16((u32)(r_eax+0x3eu));
    /* 0044ca98: mov word ptr [0xa44d1e], ax */ W16((u32)(0xa44d1eu), (u16)r_eax);
    /* 0044ca9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044caa0: mov word ptr [0xa44ce2], ax */ W16((u32)(0xa44ce2u), (u16)r_eax);
    /* 0044caa6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044caa8: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x44caaeu); call_ind(t); }
    /* 0044caae: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cab1: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0044cab4: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0044cab7: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0044caba: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 0044cabd: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 0044cac0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cac3: mov dword ptr [ebx + 0x7c], ecx */ W32((u32)(r_ebx+0x7cu), r_ecx);
    /* 0044cac6: mov esi, dword ptr [edx + 0x74] */ r_esi = R32((u32)(r_edx+0x74u));
    /* 0044cac9: mov edi, dword ptr [edx + 0x78] */ r_edi = R32((u32)(r_edx+0x78u));
    /* 0044cacc: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0044cacf: mov dword ptr [edx + 0x50], esi */ W32((u32)(r_edx+0x50u), r_esi);
    /* 0044cad2: mov dword ptr [edx + 0x54], edi */ W32((u32)(r_edx+0x54u), r_edi);
    /* 0044cad5: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0044cad8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cadb: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0044cade: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0044cae1: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0044cae4: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0044cae7: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0044caea: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0044caed: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044caf0: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0044caf3: mov dword ptr [edx + 0x300], eax */ W32((u32)(r_edx+0x300u), r_eax);
    /* 0044caf9: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0044cafc: mov dword ptr [edx + 0x304], eax */ W32((u32)(r_edx+0x304u), r_eax);
    /* 0044cb02: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0044cb05: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 0044cb0b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cb0e: mov dword ptr [eax + 0x314], 0 */ W32((u32)(r_eax+0x314u), 0x0u);
    /* 0044cb18: mov dword ptr [eax + 0x310], 0 */ W32((u32)(r_eax+0x310u), 0x0u);
    /* 0044cb22: mov dword ptr [eax + 0x30c], 0 */ W32((u32)(r_eax+0x30cu), 0x0u);
    /* 0044cb2c: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0044cb31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cb33: jne 0x44cb5e */ if (!fZ) goto L_0044cb5e;
L_0044cb35:; BB(0x0044cb35);
    /* 0044cb35: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb37: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x44cb3cu); f_0077a684();
    /* 0044cb3c: mov esi, eax */ r_esi = r_eax;
    /* 0044cb3e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb40: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x44cb45u); f_0077a698();
    /* 0044cb45: mov ebx, eax */ r_ebx = r_eax;
    /* 0044cb47: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb49: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x44cb4eu); f_0077a6b4();
    /* 0044cb4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cb51: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cb54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb57: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x44cb5cu); f_007868f8();
    /* 0044cb5c: jmp 0x44cb85 */ goto L_0044cb85;
L_0044cb5e:; BB(0x0044cb5e);
    /* 0044cb5e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb60: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x44cb65u); f_0077a684();
    /* 0044cb65: mov esi, eax */ r_esi = r_eax;
    /* 0044cb67: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb69: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x44cb6eu); f_0077a698();
    /* 0044cb6e: mov ebx, eax */ r_ebx = r_eax;
    /* 0044cb70: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb72: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x44cb77u); f_0077a6b4();
    /* 0044cb77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cb7a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cb7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb7f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb80: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x44cb85u); f_007868f8();
L_0044cb85:; BB(0x0044cb85);
    /* 0044cb85: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044cb88: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x44cb8du); f_007b4d98();
    /* 0044cb8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044cb8e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cb91: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0044cb94: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044cb99: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0044cb9c: call 0x44be10 */ r_esp -= 4; W32(r_esp, 0x44cba1u); f_0044be10();
    /* 0044cba1: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0044cba7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0044cba9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044cbab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044cbad: jle 0x44cbcd */ if ((fZ||fS!=fO)) goto L_0044cbcd;
L_0044cbaf:; BB(0x0044cbaf);
    /* 0044cbaf: mov eax, dword ptr [edx*4 + 0xaad720] */ r_eax = R32((u32)(r_edx*4+0xaad720u));
    /* 0044cbb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cbb8: je 0x44cbbd */ if (fZ) goto L_0044cbbd;
L_0044cbba:; BB(0x0044cbba);
    /* 0044cbba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0044cbbd:; BB(0x0044cbbd);
    /* 0044cbbd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044cbc0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cbc2: jl 0x44cbaf */ if ((fS!=fO)) goto L_0044cbaf;
L_0044cbc4:; BB(0x0044cbc4);
    /* 0044cbc4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cbc6: je 0x44cbcd */ if (fZ) goto L_0044cbcd;
L_0044cbc8:; BB(0x0044cbc8);
    /* 0044cbc8: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cbcb: jle 0x44cbd2 */ if ((fZ||fS!=fO)) goto L_0044cbd2;
L_0044cbcd:; BB(0x0044cbcd);
    /* 0044cbcd: mov ebx, 1 */ r_ebx = 0x1u;
L_0044cbd2:; BB(0x0044cbd2);
    /* 0044cbd2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cbd5: mov dword ptr [eax + 0x398], ebx */ W32((u32)(r_eax+0x398u), r_ebx);
    /* 0044cbdb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0044cbdd: mov dword ptr [0xa44d64], ebx */ W32((u32)(0xa44d64u), r_ebx);
    /* 0044cbe3: mov dword ptr [eax + 0x39c], ebx */ W32((u32)(r_eax+0x39cu), r_ebx);
    /* 0044cbe9: mov dword ptr [0xa44d60], ebx */ W32((u32)(0xa44d60u), r_ebx);
    /* 0044cbef: mov dword ptr [0xa44d5c], ebx */ W32((u32)(0xa44d5cu), r_ebx);
    /* 0044cbf5: call 0x45390c */ r_esp -= 4; W32(r_esp, 0x44cbfau); f_0045390c();
    /* 0044cbfa: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cbfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cbfe: mov dword ptr [edx + 0x3a0], eax */ W32((u32)(r_edx+0x3a0u), r_eax);
    /* 0044cc04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044cc06: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 0044cc0c: mov dword ptr [edx + 0x394], eax */ W32((u32)(r_edx+0x394u), r_eax);
    /* 0044cc12: call 0x4614fc */ r_esp -= 4; W32(r_esp, 0x44cc17u); f_004614fc();
    /* 0044cc17: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc19: call 0x814c7c */ r_esp -= 4; W32(r_esp, 0x44cc1eu); f_00814c7c();
    /* 0044cc1e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cc21: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044cc25: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 0044cc2b: mov dword ptr [0xa44d68], eax */ W32((u32)(0xa44d68u), r_eax);
    /* 0044cc30: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x44cc35u); f_0077a6cc();
    /* 0044cc35: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cc38: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0044cc3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044cc3d: jl 0x44cc44 */ if ((fS!=fO)) goto L_0044cc44;
L_0044cc3f:; BB(0x0044cc3f);
    /* 0044cc3f: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cc42: jle 0x44cc50 */ if ((fZ||fS!=fO)) goto L_0044cc50;
L_0044cc44:; BB(0x0044cc44);
    /* 0044cc44: mov dword ptr [0xa44d54], 0 */ W32((u32)(0xa44d54u), 0x0u);
    /* 0044cc4e: jmp 0x44cc55 */ goto L_0044cc55;
L_0044cc50:; BB(0x0044cc50);
    /* 0044cc50: mov dword ptr [0xa44d54], eax */ W32((u32)(0xa44d54u), r_eax);
L_0044cc55:; BB(0x0044cc55);
    /* 0044cc55: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc57: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x44cc5cu); f_0077a6cc();
    /* 0044cc5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044cc5d: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0044cc60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044cc62: jl 0x44cc69 */ if ((fS!=fO)) goto L_0044cc69;
L_0044cc64:; BB(0x0044cc64);
    /* 0044cc64: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cc67: jle 0x44cc75 */ if ((fZ||fS!=fO)) goto L_0044cc75;
L_0044cc69:; BB(0x0044cc69);
    /* 0044cc69: mov dword ptr [0xa44d50], 0 */ W32((u32)(0xa44d50u), 0x0u);
    /* 0044cc73: jmp 0x44cc7a */ goto L_0044cc7a;
L_0044cc75:; BB(0x0044cc75);
    /* 0044cc75: mov dword ptr [0xa44d50], eax */ W32((u32)(0xa44d50u), r_eax);
L_0044cc7a:; BB(0x0044cc7a);
    /* 0044cc7a: movzx eax, byte ptr [0xa44d20] */ r_eax = (u32)R8((u32)(0xa44d20u));
    /* 0044cc81: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044cc83: jne 0x44cc99 */ if (!fZ) goto L_0044cc99;
L_0044cc85:; BB(0x0044cc85);
    /* 0044cc85: mov dword ptr [0xa44d24], 0x40f00000 */ W32((u32)(0xa44d24u), 0x40f00000u);
    /* 0044cc8f: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044cc94: mov byte ptr [0xa44d20], al */ W8((u32)(0xa44d20u), (u8)r_eax);
L_0044cc99:; BB(0x0044cc99);
    /* 0044cc99: fld dword ptr [0x9a58ac] */ FPUSH(R_F32((u32)(0x9a58acu)));
    /* 0044cc9f: fld dword ptr [0x9a58bc] */ FPUSH(R_F32((u32)(0x9a58bcu)));
    /* 0044cca5: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0044ccab: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 0044ccb1: add edi, dword ptr [0xaae164] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044ccb7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044ccb9: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0044ccbc: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0044ccbf: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ccc1: jge 0x44cd63 */ if ((fS==fO)) goto L_0044cd63;
L_0044ccc7:; BB(0x0044ccc7);
    /* 0044ccc7: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0044ccce: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ccd0: je 0x44cd58 */ if (fZ) goto L_0044cd58;
L_0044ccd6:; BB(0x0044ccd6);
    /* 0044ccd6: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044ccdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ccde: je 0x44cd58 */ if (fZ) goto L_0044cd58;
L_0044cce0:; BB(0x0044cce0);
    /* 0044cce0: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0044cce3: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cce8: je 0x44cd58 */ if (fZ) goto L_0044cd58;
L_0044ccea:; BB(0x0044ccea);
    /* 0044ccea: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0044cced: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044ccf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccf1: push 0x9a58a0 */ { u32 v = 0x9a58a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccf6: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x44ccfbu); f_00836208();
    /* 0044ccfb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ccfe: fcomp dword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0044cd01: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044cd03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044cd04: ja 0x44cd0e */ if ((!fC&&!fZ)) goto L_0044cd0e;
L_0044cd06:; BB(0x0044cd06);
    /* 0044cd06: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 0044cd0c: jmp 0x44cd58 */ goto L_0044cd58;
L_0044cd0e:; BB(0x0044cd0e);
    /* 0044cd0e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0044cd10:; BB(0x0044cd10);
    /* 0044cd10: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0044cd13: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cd15: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cd17: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cd19: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cd1b: lea edx, [eax + eax + 0x9a58a0] */ r_edx = (u32)(r_eax+r_eax+0x9a58a0u);
    /* 0044cd22: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0044cd25: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0044cd28: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0044cd2b: je 0x44cd48 */ if (fZ) goto L_0044cd48;
L_0044cd2d:; BB(0x0044cd2d);
    /* 0044cd2d: mov eax, edx */ r_eax = r_edx;
    /* 0044cd2f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044cd32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd34: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x44cd39u); f_00836208();
    /* 0044cd39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cd3c: fcomp dword ptr [ebp - 0x18] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffe8u))); FPOP();
    /* 0044cd3f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044cd41: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044cd42: jbe 0x44cde7 */ if ((fC||fZ)) goto L_0044cde7;
L_0044cd48:; BB(0x0044cd48);
    /* 0044cd48: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044cd4b: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cd4e: jl 0x44cd10 */ if ((fS!=fO)) goto L_0044cd10;
L_0044cd50:; BB(0x0044cd50);
    /* 0044cd50: jne 0x44cd99 */ if (!fZ) goto L_0044cd99;
L_0044cd52:; BB(0x0044cd52);
    /* 0044cd52: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
L_0044cd58:; BB(0x0044cd58);
    /* 0044cd58: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044cd5b: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cd5d: jl 0x44ccc7 */ if ((fS!=fO)) goto L_0044ccc7;
L_0044cd63:; BB(0x0044cd63);
    /* 0044cd63: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044cd66: mov eax, dword ptr [0x9a5958] */ r_eax = R32((u32)(0x9a5958u));
    /* 0044cd6b: mov dword ptr [ecx + 0x384], 1 */ W32((u32)(r_ecx+0x384u), 0x1u);
    /* 0044cd75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044cd77: je 0x44cd7e */ if (fZ) goto L_0044cd7e;
L_0044cd79:; BB(0x0044cd79);
    /* 0044cd79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44cd7bu); call_ind(t); }
    /* 0044cd7b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_0044cd7e:; BB(0x0044cd7e);
    /* 0044cd7e: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044cd81: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044cd84: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044cd87: mov eax, ecx */ r_eax = r_ecx;
    /* 0044cd89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044cd8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044cd93: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cd95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cd96: ret 8 */ FN_RET(0x0044c93c); r_esp += 12; return;
L_0044cd99:; BB(0x0044cd99);
    /* 0044cd99: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0044cd9c: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
L_0044cd9f:; BB(0x0044cd9f);
    /* 0044cd9f: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0044cda2: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0044cda4: mov eax, dword ptr [0xa44d24] */ r_eax = R32((u32)(0xa44d24u));
    /* 0044cda9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044cdab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044cdad: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0044cdb0: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0044cdb3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0044cdb6: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0044cdb9: mov edx, 0x9a58b0 */ r_edx = 0x9a58b0u;
    /* 0044cdbe: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44cdc3u); f_0082ebac();
    /* 0044cdc3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044cdc6: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044cdc9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044cdcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044cdcd: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0044cdd0: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0044cdd3: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 0044cdd6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x44cddbu); f_007b999c();
    /* 0044cddb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044cddc: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 0044cde2: jmp 0x44cd58 */ goto L_0044cd58;
L_0044cde7:; BB(0x0044cde7);
    /* 0044cde7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044cdea: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0044cded: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0044cdf0: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 0044cdf3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0044cdf6: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0044cdf9: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 0044cdfc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044cdff: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44ce04u); f_0082f9c4();
    /* 0044ce04: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0044ce0b: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0044ce0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x44ce13u); f_0083173c();
    /* 0044ce13: fcomp dword ptr [0x8fea94] */ fx_compare(ST(0), R_F32((u32)(0x8fea94u))); FPOP();
    /* 0044ce19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ce1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044ce1c: ja 0x44ce2f */ if ((!fC&&!fZ)) goto L_0044ce2f;
L_0044ce1e:; BB(0x0044ce1e);
    /* 0044ce1e: fld dword ptr [0x8fea9c] */ FPUSH(R_F32((u32)(0x8fea9cu)));
    /* 0044ce24: fld dword ptr [0x8fea90] */ FPUSH(R_F32((u32)(0x8fea90u)));
    /* 0044ce2a: jmp 0x44cd9f */ goto L_0044cd9f;
L_0044ce2f:; BB(0x0044ce2f);
    /* 0044ce2f: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0044ce32: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x44ce37u); f_0082df08();
    /* 0044ce37: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044ce39: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0044ce3c: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0044ce3f: jmp 0x44cd9f */ goto L_0044cd9f;
}

void f_0044ce44(void) /* sub_44CE44 */
{
    FN_ENTER(0x0044ce44);
    /* 0044ce44: call 0x67ab60 */ r_esp -= 4; W32(r_esp, 0x44ce49u); f_0067ab60();
    /* 0044ce49: call 0x461464 */ r_esp -= 4; W32(r_esp, 0x44ce4eu); f_00461464();
    /* 0044ce4e: mov ecx, dword ptr [0xa44d58] */ r_ecx = R32((u32)(0xa44d58u));
    /* 0044ce54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044ce56: je 0x44ce5f */ if (fZ) goto L_0044ce5f;
L_0044ce58:; BB(0x0044ce58);
    /* 0044ce58: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce5a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x44ce5fu); f_004066a8();
L_0044ce5f:; BB(0x0044ce5f);
    /* 0044ce5f: mov dword ptr [0xa44d58], 0 */ W32((u32)(0xa44d58u), 0x0u);
    /* 0044ce69: ret  */ FN_RET(0x0044ce44); r_esp += 4; return;
}

void f_0044ce6c(void) /* sub_44CE6C */
{
    FN_ENTER(0x0044ce6c);
    /* 0044ce6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce6f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0044ce73: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 0044ce77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce78: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x44ce7du); f_00786b3c();
    /* 0044ce7d: mov ebx, eax */ r_ebx = r_eax;
    /* 0044ce7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ce82: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044ce84: je 0x44cf36 */ if (fZ) goto L_0044cf36;
L_0044ce8a:; BB(0x0044ce8a);
    /* 0044ce8a: movsx ebp, word ptr [edi + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 0044ce8e: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ce91: je 0x44cedf */ if (fZ) goto L_0044cedf;
L_0044ce93:; BB(0x0044ce93);
    /* 0044ce93: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044ce95: jl 0x44cedf */ if ((fS!=fO)) goto L_0044cedf;
L_0044ce97:; BB(0x0044ce97);
    /* 0044ce97: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ce9a: jge 0x44cedf */ if ((fS==fO)) goto L_0044cedf;
L_0044ce9c:; BB(0x0044ce9c);
    /* 0044ce9c: mov edx, dword ptr [ebx + 0x384] */ r_edx = R32((u32)(r_ebx+0x384u));
    /* 0044cea2: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cea4: je 0x44cedf */ if (fZ) goto L_0044cedf;
L_0044cea6:; BB(0x0044cea6);
    /* 0044cea6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044cea8: jl 0x44cedf */ if ((fS!=fO)) goto L_0044cedf;
L_0044ceaa:; BB(0x0044ceaa);
    /* 0044ceaa: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cead: jge 0x44cedf */ if ((fS==fO)) goto L_0044cedf;
L_0044ceaf:; BB(0x0044ceaf);
    /* 0044ceaf: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ceb2: je 0x44cec6 */ if (fZ) goto L_0044cec6;
L_0044ceb4:; BB(0x0044ceb4);
    /* 0044ceb4: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0044ceb7: mov edx, dword ptr [edx*4 + 0x9a5948] */ r_edx = R32((u32)(r_edx*4+0x9a5948u));
    /* 0044cebe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cec0: je 0x44cec6 */ if (fZ) goto L_0044cec6;
L_0044cec2:; BB(0x0044cec2);
    /* 0044cec2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044cec4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44cec6u); call_ind(t); }
L_0044cec6:; BB(0x0044cec6);
    /* 0044cec6: mov dword ptr [ebx + 0x384], ebp */ W32((u32)(r_ebx+0x384u), r_ebp);
    /* 0044cecc: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 0044ced0: mov edx, dword ptr [edx*4 + 0x9a5944] */ r_edx = R32((u32)(r_edx*4+0x9a5944u));
    /* 0044ced7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ced9: je 0x44cedf */ if (fZ) goto L_0044cedf;
L_0044cedb:; BB(0x0044cedb);
    /* 0044cedb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044cedd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44cedfu); call_ind(t); }
L_0044cedf:; BB(0x0044cedf);
    /* 0044cedf: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0044cee2: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044cee5: je 0x44cf36 */ if (fZ) goto L_0044cf36;
L_0044cee7:; BB(0x0044cee7);
    /* 0044cee7: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 0044ceed: lea eax, [ecx - 5] */ r_eax = (u32)(r_ecx+0xfffffffbu);
    /* 0044cef0: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044cef3: ja 0x44cf36 */ if ((!fC&&!fZ)) goto L_0044cf36;
L_0044cef5:; BB(0x0044cef5);
    /* 0044cef5: mov eax, dword ptr [ecx*4 + 0x8fea24] */ r_eax = R32((u32)(r_ecx*4+0x8fea24u));
    /* 0044cefc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0044cf36:; BB(0x0044cf36);
    /* 0044cf36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044cf37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cf38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044cf39: ret  */ FN_RET(0x0044ce6c); r_esp += 4; return;
}

void f_0044cefe(void)
{
    FN_ENTER(0x0044cefe);
    /* 0044cefe: mov ecx, dword ptr [0xa44d5c] */ r_ecx = R32((u32)(0xa44d5cu));
    /* 0044cf04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044cf06: je 0x44cf36 */ if (fZ) goto L_0044cf36;
L_0044cf08:; BB(0x0044cf08);
    /* 0044cf08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cf09: call 0x45eab0 */ r_esp -= 4; W32(r_esp, 0x44cf0eu); f_0045eab0();
    /* 0044cf0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044cf0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cf10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044cf11: ret  */ FN_RET(0x0044cefe); r_esp += 4; return;
L_0044cf36:; BB(0x0044cf36);
    /* 0044cf36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044cf37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cf38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044cf39: ret  */ FN_RET(0x0044cefe); r_esp += 4; return;
}

void f_0044cf12(void)
{
    FN_ENTER(0x0044cf12);
    /* 0044cf12: mov ecx, dword ptr [0xa44d60] */ r_ecx = R32((u32)(0xa44d60u));
    /* 0044cf18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044cf1a: je 0x44cf36 */ if (fZ) goto L_0044cf36;
L_0044cf1c:; BB(0x0044cf1c);
    /* 0044cf1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cf1d: call 0x459cec */ r_esp -= 4; W32(r_esp, 0x44cf22u); f_00459cec();
    /* 0044cf22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044cf23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cf24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044cf25: ret  */ FN_RET(0x0044cf12); r_esp += 4; return;
L_0044cf36:; BB(0x0044cf36);
    /* 0044cf36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044cf37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cf38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044cf39: ret  */ FN_RET(0x0044cf12); r_esp += 4; return;
}

void f_0044cf26(void)
{
    FN_ENTER(0x0044cf26);
    /* 0044cf26: mov ecx, dword ptr [0xa44d64] */ r_ecx = R32((u32)(0xa44d64u));
    /* 0044cf2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044cf2e: je 0x44cf36 */ if (fZ) goto L_0044cf36;
L_0044cf30:; BB(0x0044cf30);
    /* 0044cf30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cf31: call 0x4574bc */ r_esp -= 4; W32(r_esp, 0x44cf36u); f_004574bc();
L_0044cf36:; BB(0x0044cf36);
    /* 0044cf36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044cf37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cf38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044cf39: ret  */ FN_RET(0x0044cf26); r_esp += 4; return;
}

void f_0044cf36(void)
{
    FN_ENTER(0x0044cf36);
    /* 0044cf36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044cf37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cf38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044cf39: ret  */ FN_RET(0x0044cf36); r_esp += 4; return;
}

void f_0044cf3c(void) /* sub_44CF3C */
{
    FN_ENTER(0x0044cf3c);
    /* 0044cf3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044cf3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044cf3e: mov esi, ecx */ r_esi = r_ecx;
    /* 0044cf40: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0044cf44: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044cf46: jl 0x44cf83 */ if ((fS!=fO)) goto L_0044cf83;
L_0044cf48:; BB(0x0044cf48);
    /* 0044cf48: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044cf4b: jge 0x44cf83 */ if ((fS==fO)) goto L_0044cf83;
L_0044cf4d:; BB(0x0044cf4d);
    /* 0044cf4d: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0044cf53: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cf56: je 0x44cf6a */ if (fZ) goto L_0044cf6a;
L_0044cf58:; BB(0x0044cf58);
    /* 0044cf58: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0044cf5b: mov eax, dword ptr [eax*4 + 0x9a5948] */ r_eax = R32((u32)(r_eax*4+0x9a5948u));
    /* 0044cf62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cf64: je 0x44cf6a */ if (fZ) goto L_0044cf6a;
L_0044cf66:; BB(0x0044cf66);
    /* 0044cf66: mov ecx, esi */ r_ecx = r_esi;
    /* 0044cf68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44cf6au); call_ind(t); }
L_0044cf6a:; BB(0x0044cf6a);
    /* 0044cf6a: mov dword ptr [esi + 0x384], ebp */ W32((u32)(r_esi+0x384u), r_ebp);
    /* 0044cf70: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 0044cf74: mov eax, dword ptr [eax*4 + 0x9a5944] */ r_eax = R32((u32)(r_eax*4+0x9a5944u));
    /* 0044cf7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044cf7d: je 0x44cf83 */ if (fZ) goto L_0044cf83;
L_0044cf7f:; BB(0x0044cf7f);
    /* 0044cf7f: mov ecx, esi */ r_ecx = r_esi;
    /* 0044cf81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44cf83u); call_ind(t); }
L_0044cf83:; BB(0x0044cf83);
    /* 0044cf83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cf84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044cf85: ret 4 */ FN_RET(0x0044cf3c); r_esp += 8; return;
}

void f_0044cf88(void) /* sub_44CF88 */
{
    FN_ENTER(0x0044cf88);
    /* 0044cf88: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044cf8b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0044cf8f: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0044cf93: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0044cf98: mov byte ptr [esp], 0x19 */ W8((u32)(r_esp), 0x19u);
    /* 0044cf9c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0044cfa1: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0044cfa6: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0044cfab: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0044cfaf: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044cfb2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x44cfb7u); f_008003e0();
    /* 0044cfb7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044cfba: ret 4 */ FN_RET(0x0044cf88); r_esp += 8; return;
}

void f_0044cfc0(void) /* sub_44CFC0 */
{
    FN_ENTER(0x0044cfc0);
    /* 0044cfc0: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 0044cfc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044cfc8: jle 0x44cfd8 */ if ((fZ||fS!=fO)) goto L_0044cfd8;
L_0044cfca:; BB(0x0044cfca);
    /* 0044cfca: cmp eax, 0x1fe */ {  u32 a = r_eax; u32 b = 0x1feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cfcf: jg 0x44cfd8 */ if ((!fZ&&fS==fO)) goto L_0044cfd8;
L_0044cfd1:; BB(0x0044cfd1);
    /* 0044cfd1: cmp eax, 0x1fd */ {  u32 a = r_eax; u32 b = 0x1fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cfd6: jle 0x44cfdd */ if ((fZ||fS!=fO)) goto L_0044cfdd;
L_0044cfd8:; BB(0x0044cfd8);
    /* 0044cfd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044cfda: ret 8 */ FN_RET(0x0044cfc0); r_esp += 12; return;
L_0044cfdd:; BB(0x0044cfdd);
    /* 0044cfdd: movzx edx, word ptr [ecx + 0x2c] */ r_edx = (u32)R16((u32)(r_ecx+0x2cu));
    /* 0044cfe1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044cfe3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0044cfe7: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0044cfea: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0044cfee: add eax, dword ptr [ecx + 0x38c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x38cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cff4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0044cff8: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0044cffb: mov eax, 1 */ r_eax = 0x1u;
    /* 0044d000: add dword ptr [ecx + 0x38c], 1 */ { u32 ad = (u32)(r_ecx+0x38cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d007: ret 8 */ FN_RET(0x0044cfc0); r_esp += 12; return;
}

