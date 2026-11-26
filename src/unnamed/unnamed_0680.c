#include "protos.h"

void f_00680000(void)
{
    FN_ENTER(0x00680000);
    goto L_00680000;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680000); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_00680000:; BB(0x00680000);
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680020(void)
{
    FN_ENTER(0x00680020);
    goto L_00680020;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680020); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
L_00680020:; BB(0x00680020);
    /* 00680020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680021: sbb al, 0x3b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x3bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = ((u64)a < (u64)b + c); }
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680023: adc eax, 0xa9c4f4 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa9c4f4u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680043(void)
{
    FN_ENTER(0x00680043);
    goto L_00680043;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680043); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
L_00680043:; BB(0x00680043);
    /* 00680043: call dword ptr [edx - 0x75] */ { u32 t = R32((u32)(r_edx+0xffffff8bu)); r_esp -= 4; W32(r_esp, 0x680046u); call_ind(t); }
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680046: int 0x52 */ UNSUP(0x00680046, "int 0x52");
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680053(void)
{
    FN_ENTER(0x00680053);
    goto L_00680053;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680053); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
L_00680053:; BB(0x00680053);
    /* 00680053: jl 0x680079 */ if ((fS!=fO)) goto L_00680079;
L_00680055:; BB(0x00680055);
    /* 00680055: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
L_00680079:; BB(0x00680079);
    /* 00680079: mov bh, 0x55 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x55u) & 0xffu) << 8);
    /* 0068007b: sbb al, 0x52 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x52u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680054(void)
{
    FN_ENTER(0x00680054);
    goto L_00680054;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680054); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
L_00680054:; BB(0x00680054);
    /* 00680054: and al, 0x48 */ {  u32 a = (u8)r_eax; u32 b = 0x48u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680063(void)
{
    FN_ENTER(0x00680063);
    goto L_00680063;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680063); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
L_00680063:; BB(0x00680063);
    /* 00680063: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680067(void)
{
    FN_ENTER(0x00680067);
    goto L_00680067;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680067); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
L_00680067:; BB(0x00680067);
    /* 00680067: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00680069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680073(void)
{
    FN_ENTER(0x00680073);
    goto L_00680073;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680073); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00680073:; BB(0x00680073);
    /* 00680073: or al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680075: sal byte ptr [esp + ecx + 0xf], 0xb7 */ { u32 ad = (u32)(r_esp+r_ecx+0xfu); u32 c = (23u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r); fC = (c <= 8) ? ((a >> (8 - c)) & 1) : 0; } }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068007b: sbb al, 0x52 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x52u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680074(void)
{
    FN_ENTER(0x00680074);
    goto L_00680074;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680074); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00680074:; BB(0x00680074);
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680077(void)
{
    FN_ENTER(0x00680077);
    goto L_00680077;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680077); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680077:; BB(0x00680077);
    /* 00680077: or al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680079: mov bh, 0x55 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x55u) & 0xffu) << 8);
    /* 0068007b: sbb al, 0x52 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x52u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_00680085(void)
{
    FN_ENTER(0x00680085);
    goto L_00680085;
L_0067fa5c:; BB(0x0067fa5c);
    /* 0067fa5c: movzx edx, word ptr [esi + 0xa90220] */ r_edx = (u32)R16((u32)(r_esi+0xa90220u));
    /* 0067fa63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa64: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67fa69u); f_007b4d18();
    /* 0067fa69: mov ebp, eax */ r_ebp = r_eax;
    /* 0067fa6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa6e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa70: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fa76:; BB(0x0067fa76);
    /* 0067fa76: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fa7c: fld dword ptr [esi + 0xa90224] */ FPUSH(R_F32((u32)(r_esi+0xa90224u)));
    /* 0067fa82: fld dword ptr [0x93bcf0] */ FPUSH(R_F32((u32)(0x93bcf0u)));
    /* 0067fa88: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fa8c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067fa8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067fa91: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067fa95: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fa99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fa9b: je 0x67fba1 */ if (fZ) goto L_0067fba1;
L_0067faa1:; BB(0x0067faa1);
    /* 0067faa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067faa3: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067faa9: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67faaeu); f_0069792c();
    /* 0067faae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab0: je 0x67ff98 */ if (fZ) goto L_0067ff98;
L_0067fab6:; BB(0x0067fab6);
    /* 0067fab6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fab8: je 0x67ff3b */ if (fZ) goto L_0067ff3b;
L_0067fabe:; BB(0x0067fabe);
    /* 0067fabe: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fac1: je 0x67fee9 */ if (fZ) goto L_0067fee9;
L_0067fac7:; BB(0x0067fac7);
    /* 0067fac7: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067faca: je 0x67fe8c */ if (fZ) goto L_0067fe8c;
L_0067fad0:; BB(0x0067fad0);
    /* 0067fad0: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fad3: je 0x67fb54 */ if (fZ) goto L_0067fb54;
L_0067fad9:; BB(0x0067fad9);
    /* 0067fad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fadc: jne 0x67fb06 */ if (!fZ) goto L_0067fb06;
L_0067fade:; BB(0x0067fade);
    /* 0067fade: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fae4: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067faeb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067faef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067faf3: fmul dword ptr [0x93bce4] */ ST(0) = ST(0) * R_F32((u32)(0x93bce4u));
    /* 0067faf9: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067fafd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb01: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb06:; BB(0x0067fb06);
    /* 0067fb06: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb09: je 0x67fb16 */ if (fZ) goto L_0067fb16;
L_0067fb0b:; BB(0x0067fb0b);
    /* 0067fb0b: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb11: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb16:; BB(0x0067fb16);
    /* 0067fb16: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb1d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb21: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb25: fmul dword ptr [0x93bcec] */ ST(0) = ST(0) * R_F32((u32)(0x93bcecu));
    /* 0067fb2b: fcom dword ptr [0x93bce8] */ fx_compare(ST(0), R_F32((u32)(0x93bce8u))); 
    /* 0067fb31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067fb33: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067fb38: jb 0x67fb4c */ if (fC) goto L_0067fb4c;
L_0067fb3a:; BB(0x0067fb3a);
    /* 0067fb3a: fld dword ptr [0x93bce8] */ FPUSH(R_F32((u32)(0x93bce8u)));
    /* 0067fb40: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb46: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fb4a: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb4c:; BB(0x0067fb4c);
    /* 0067fb4c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb52: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fb54:; BB(0x0067fb54);
    /* 0067fb54: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067fb58: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fb5c: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fb63: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fb66: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067fb6d: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067fb74: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fb77: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fb7d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067fb81: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb85: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fb8b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb8d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067fb91: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fb95: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fb9b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fb9d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067fba1:; BB(0x0067fba1);
    /* 0067fba1: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fba5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067fba9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fbac: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fbb0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbb3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fbb7: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fbbb: fmul qword ptr [0x93bc88] */ ST(0) = ST(0) * R_F64((u32)(0x93bc88u));
    /* 0067fbc1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067fbc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067fbc7: je 0x67ffa3 */ if (fZ) goto L_0067ffa3;
L_0067fbcd:; BB(0x0067fbcd);
    /* 0067fbcd: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbd0: je 0x67fbfe */ if (fZ) goto L_0067fbfe;
L_0067fbd2:; BB(0x0067fbd2);
    /* 0067fbd2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fbd5: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067fbdc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fbe1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fbe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbe7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbed: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fbf1: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fbf4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fbf7u); call_ind(t); }
    /* 0067fbf7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fbf9: jmp 0x67fe53 */ goto L_0067fe53;
L_0067fbfe:; BB(0x0067fbfe);
    /* 0067fbfe: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067fc02: mov esi, edx */ r_esi = r_edx;
    /* 0067fc04: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fc08: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067fc0a:; BB(0x0067fc0a);
    /* 0067fc0a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc11: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fc16u); f_0068d5a8();
    /* 0067fc16: mov ebx, eax */ r_ebx = r_eax;
    /* 0067fc18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc1d: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc1f:; BB(0x0067fc1f);
    /* 0067fc1f: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067fc22: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc28: je 0x67fc34 */ if (fZ) goto L_0067fc34;
L_0067fc2a:; BB(0x0067fc2a);
    /* 0067fc2a: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067fc2f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067fc32: jmp 0x67fc3e */ goto L_0067fc3e;
L_0067fc34:; BB(0x0067fc34);
    /* 0067fc34: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fc3b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067fc3e:; BB(0x0067fc3e);
    /* 0067fc3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067fc40: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc49: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc4e: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067fc53: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fc56u); call_ind(t); }
    /* 0067fc56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fc58: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5a: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc5f: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fc65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc66: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fc6bu); f_0050b7a4();
    /* 0067fc6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc70: je 0x67fc7e */ if (fZ) goto L_0067fc7e;
L_0067fc72:; BB(0x0067fc72);
    /* 0067fc72: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067fc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc77: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fc79: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fc7eu); f_00508f14();
L_0067fc7e:; BB(0x0067fc7e);
    /* 0067fc7e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fc81: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fc84: jl 0x67fc0a */ if ((fS!=fO)) goto L_0067fc0a;
L_0067fc86:; BB(0x0067fc86);
    /* 0067fc86: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067fc8a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fc8e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067fc91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fc97: je 0x67fca3 */ if (fZ) goto L_0067fca3;
L_0067fc99:; BB(0x0067fc99);
    /* 0067fc99: mov eax, 8 */ r_eax = 0x8u;
    /* 0067fc9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067fca1: jmp 0x67fcad */ goto L_0067fcad;
L_0067fca3:; BB(0x0067fca3);
    /* 0067fca3: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067fcaa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067fcad:; BB(0x0067fcad);
    /* 0067fcad: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067fcb0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067fcb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fcb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc0: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fcc4: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fcc7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fccau); call_ind(t); }
    /* 0067fcca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fccc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcd3: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067fcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcda: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fcdfu); f_0050b7a4();
    /* 0067fcdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fce4: je 0x67fcf2 */ if (fZ) goto L_0067fcf2;
L_0067fce6:; BB(0x0067fce6);
    /* 0067fce6: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fcea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fced: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fcf2u); f_00508f14();
L_0067fcf2:; BB(0x0067fcf2);
    /* 0067fcf2: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067fcf9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fcfd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fcff: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd03:; BB(0x0067fd03);
    /* 0067fd03: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd0fu); f_0068d5a8();
    /* 0067fd0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd16: je 0x67fd33 */ if (fZ) goto L_0067fd33;
L_0067fd18:; BB(0x0067fd18);
    /* 0067fd18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd23: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd27: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2b: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd2e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd31u); call_ind(t); }
    /* 0067fd31: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fd33:; BB(0x0067fd33);
    /* 0067fd33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd39: jl 0x67fd03 */ if ((fS!=fO)) goto L_0067fd03;
L_0067fd3b:; BB(0x0067fd3b);
    /* 0067fd3b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fd3f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fd42: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fd4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd51: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd55: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fd59: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd5c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fd5fu); call_ind(t); }
    /* 0067fd5f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fd61: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067fd68: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067fd6c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067fd6e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067fd72:; BB(0x0067fd72);
    /* 0067fd72: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd79: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67fd7eu); f_0068d5a8();
    /* 0067fd7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fd80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd85: je 0x67fda2 */ if (fZ) goto L_0067fda2;
L_0067fd87:; BB(0x0067fd87);
    /* 0067fd87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067fd89: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067fd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd92: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd96: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fd9d: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67fda0u); call_ind(t); }
    /* 0067fda0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067fda2:; BB(0x0067fda2);
    /* 0067fda2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fda5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fda8: jl 0x67fd72 */ if ((fS!=fO)) goto L_0067fd72;
L_0067fdaa:; BB(0x0067fdaa);
    /* 0067fdaa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067fdae: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067fdb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067fdb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067fdb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdbc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdc4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067fdc8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067fdcb: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67fdceu); call_ind(t); }
    /* 0067fdce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067fdd0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fdd4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fdda: jne 0x67fe0c */ if (!fZ) goto L_0067fe0c;
L_0067fddc:; BB(0x0067fddc);
    /* 0067fddc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde1: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fde6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdebu); f_00814298();
    /* 0067fdeb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdf5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fdfau); f_00814298();
    /* 0067fdfa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067fdfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdff: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67fe09u); f_00814298();
    /* 0067fe09: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067fe0c:; BB(0x0067fe0c);
    /* 0067fe0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe10: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067fe13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe15: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe1b: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67fe20u); f_0050ac1c();
    /* 0067fe20: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe25: je 0x67fe33 */ if (fZ) goto L_0067fe33;
L_0067fe27:; BB(0x0067fe27);
    /* 0067fe27: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe2c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe2e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe33u); f_00508f14();
L_0067fe33:; BB(0x0067fe33);
    /* 0067fe33: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe35: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe3b: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fe40u); f_0050b7a4();
    /* 0067fe40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fe45: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_0067fe47:; BB(0x0067fe47);
    /* 0067fe47: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067fe4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067fe4e: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67fe53u); f_00508f14();
L_0067fe53:; BB(0x0067fe53);
    /* 0067fe53: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fe56: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067fe59: cmp ebx, dword ptr [0xa903b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fe5f: jl 0x67fa5c */ if ((fS!=fO)) goto L_0067fa5c;
L_0067fe65:; BB(0x0067fe65);
    /* 0067fe65: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067fe69: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067fe6d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0067fe71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe73: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067fe78: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067fe7d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067fe82: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067fe87: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067fe8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067fe8b: ret  */ FN_RET(0x00680085); r_esp += 4; return;
L_0067fe8c:; BB(0x0067fe8c);
    /* 0067fe8c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067fe90: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fe94: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fe9b: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067fe9e: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067fea5: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067feab: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067feae: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067feb5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067feb9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067febd: fmul dword ptr [0x93bce0] */ ST(0) = ST(0) * R_F32((u32)(0x93bce0u));
    /* 0067fec3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fec5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067fec7: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067feca: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067fed0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067fed4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067fed8: fmul dword ptr [0x93bcdc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcdcu));
    /* 0067fede: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067fee0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067fee4: jmp 0x67fba1 */ goto L_0067fba1;
L_0067fee9:; BB(0x0067fee9);
    /* 0067fee9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067feed: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067fef1: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067fef8: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067fefb: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067ff02: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff09: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff0c: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff12: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067ff16: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff1a: fmul dword ptr [0x93bcd8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd8u));
    /* 0067ff20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff22: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff26: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff2a: fmul dword ptr [0x93bcd4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd4u));
    /* 0067ff30: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff32: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff36: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff3b:; BB(0x0067ff3b);
    /* 0067ff3b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ff3f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067ff43: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067ff4a: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067ff4d: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067ff54: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067ff5a: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067ff5d: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067ff64: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067ff68: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff6c: fmul dword ptr [0x93bcd0] */ ST(0) = ST(0) * R_F32((u32)(0x93bcd0u));
    /* 0067ff72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff74: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ff76: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067ff79: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff7f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067ff83: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067ff87: fmul dword ptr [0x93bccc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcccu));
    /* 0067ff8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067ff8f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ff93: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ff98:; BB(0x0067ff98);
    /* 0067ff98: mov edi, dword ptr [esi + 0xa90228] */ r_edi = R32((u32)(r_esi+0xa90228u));
    /* 0067ff9e: jmp 0x67fba1 */ goto L_0067fba1;
L_0067ffa3:; BB(0x0067ffa3);
    /* 0067ffa3: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067ffaa: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067ffae: mov esi, edx */ r_esi = r_edx;
    /* 0067ffb0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067ffb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067ffb6:; BB(0x0067ffb6);
    /* 0067ffb6: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ffc2u); f_0068d5a8();
    /* 0067ffc2: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ffc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffc7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ffc9: je 0x68000e */ if (fZ) goto L_0068000e;
L_0067ffcb:; BB(0x0067ffcb);
    /* 0067ffcb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ffcd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ffd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ffd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffd8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffdc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe0: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe3: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ffe6u); call_ind(t); }
    /* 0067ffe6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ffe8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffea: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffef: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067fff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff6: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67fffbu); f_0050b7a4();
    /* 0067fffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680000: je 0x68000e */ if (fZ) goto L_0068000e;
L_00680002:; BB(0x00680002);
    /* 00680002: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00680006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680007: mov ecx, eax */ r_ecx = r_eax;
    /* 00680009: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x68000eu); f_00508f14();
L_0068000e:; BB(0x0068000e);
    /* 0068000e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00680011: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680014: jl 0x67ffb6 */ if ((fS!=fO)) goto L_0067ffb6;
L_00680016:; BB(0x00680016);
    /* 00680016: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0068001a: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0068001e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00680022: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680028: jne 0x68003c */ if (!fZ) goto L_0068003c;
L_0068002a:; BB(0x0068002a);
    /* 0068002a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068002c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068002f: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00680034: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x680039u); f_00814298();
    /* 00680039: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068003c:; BB(0x0068003c);
    /* 0068003c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068003f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00680044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00680047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068004a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068004e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680052: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00680056: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680059: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x68005cu); call_ind(t); }
    /* 0068005c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068005e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00680060: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00680065: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0068006b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068006c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680071u); f_0050b7a4();
    /* 00680071: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680076: je 0x680084 */ if (fZ) goto L_00680084;
L_00680078:; BB(0x00680078);
    /* 00680078: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068007c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068007d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068007f: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x680084u); f_00508f14();
L_00680084:; BB(0x00680084);
    /* 00680084: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
L_00680085:; BB(0x00680085);
    /* 00680085: adc byte ptr [eax + 0x6c], ch */ { u32 ad = (u32)(r_eax+0x6cu); u32 c = fC; u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 00680086: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 00680088: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0068008a: add byte ptr [ebp - 0x17a8c783], cl */ { u32 ad = (u32)(r_ebp+0xe857387du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 0068008b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0068008e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068008f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x680094u); f_0050b7a4();
    /* 00680090: adc byte ptr [edi - 0x3b7c0018], dh */ { u32 ad = (u32)(r_edi+0xc483ffe8u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 00680094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680096: or al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00680097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680098: sal byte ptr [esp + ecx + 0xf], 0xb7 */ { u32 ad = (u32)(r_esp+r_ecx+0xfu); u32 c = (23u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r); fC = (c <= 8) ? ((a >> (8 - c)) & 1) : 0; } }
    /* 00680099: je 0x6800a7 */ if (fZ) goto L_006800a7;
L_0068009b:; BB(0x0068009b);
    /* 0068009b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068009d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068009e: sbb al, 0x52 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x52u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068009f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800a0: mov ecx, eax */ r_ecx = r_eax;
    /* 006800a2: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800a7u); f_00508f14();
L_006800a7:; BB(0x006800a7);
    /* 006800a7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006800a9: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 006800ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006800af: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6800b4u); f_0050b7a4();
    /* 006800b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006800b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006800b9: je 0x67fe53 */ if (fZ) goto L_0067fe53;
L_006800bf:; BB(0x006800bf);
    /* 006800bf: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006800c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c4: mov ecx, eax */ r_ecx = r_eax;
    /* 006800c6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6800cbu); f_00508f14();
    /* 006800cb: jmp 0x67fe53 */ goto L_0067fe53;
}

void f_006800d0(void) /* sub_6800D0 */
{
    FN_ENTER(0x006800d0);
    /* 006800d0: mov dword ptr [0xa90490], 0x3f800000 */ W32((u32)(0xa90490u), 0x3f800000u);
    /* 006800da: mov dword ptr [0xa90494], 0x41000000 */ W32((u32)(0xa90494u), 0x41000000u);
    /* 006800e4: mov dword ptr [0xa90498], 0x3fc00000 */ W32((u32)(0xa90498u), 0x3fc00000u);
    /* 006800ee: ret  */ FN_RET(0x006800d0); r_esp += 4; return;
}

void f_006800f0(void) /* sub_6800F0 */
{
    FN_ENTER(0x006800f0);
    /* 006800f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006800f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006800f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006800f5: push 0x8ea4a4 */ { u32 v = 0x8ea4a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006800fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680101: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00680108: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068010b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068010e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00680111: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00680114: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00680117: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0068011c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00680123: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x680128u); f_008581c5();
    /* 00680128: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068012b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068012e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00680131: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680133: je 0x680208 */ if (fZ) goto L_00680208;
L_00680139:; BB(0x00680139);
    /* 00680139: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00680140: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680147: mov ecx, eax */ r_ecx = r_eax;
    /* 00680149: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068014b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068014c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068014d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068014e: push 0x9cb684 */ { u32 v = 0x9cb684u; r_esp -= 4; W32(r_esp, v); }
    /* 00680153: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680155: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x68015au); f_005b7a84();
    /* 0068015a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00680161:; BB(0x00680161);
    /* 00680161: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00680164: mov dword ptr [0xa9049c], eax */ W32((u32)(0xa9049cu), r_eax);
    /* 00680169: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00680170: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00680172: push 0x9cb600 */ { u32 v = 0x9cb600u; r_esp -= 4; W32(r_esp, v); }
    /* 00680177: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x68017cu); f_0078b184();
    /* 0068017c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068017f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680181: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 00680186: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0068018b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0068018d: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 00680192: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
L_00680197:; BB(0x00680197);
    /* 00680197: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0068019c: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0068019f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006801a1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006801a6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006801a9: mov dword ptr [ecx + ecx*8 + 0xa90400], eax */ W32((u32)(r_ecx+r_ecx*8+0xa90400u), r_eax);
    /* 006801b0: mov dword ptr [ecx + ecx*8 + 0xa90410], edx */ W32((u32)(r_ecx+r_ecx*8+0xa90410u), r_edx);
    /* 006801b7: mov dword ptr [ecx + ecx*8 + 0xa90404], eax */ W32((u32)(r_ecx+r_ecx*8+0xa90404u), r_eax);
    /* 006801be: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006801c1: mov dword ptr [ecx + ecx*8 + 0xa90414], edx */ W32((u32)(r_ecx+r_ecx*8+0xa90414u), r_edx);
    /* 006801c8: mov dword ptr [ecx + ecx*8 + 0xa90408], eax */ W32((u32)(r_ecx+r_ecx*8+0xa90408u), r_eax);
    /* 006801cf: mov dword ptr [ecx + ecx*8 + 0xa90418], edx */ W32((u32)(r_ecx+r_ecx*8+0xa90418u), r_edx);
    /* 006801d6: mov dword ptr [ecx + ecx*8 + 0xa9040c], eax */ W32((u32)(r_ecx+r_ecx*8+0xa9040cu), r_eax);
    /* 006801dd: mov dword ptr [ecx + ecx*8 + 0xa9041c], edx */ W32((u32)(r_ecx+r_ecx*8+0xa9041cu), r_edx);
    /* 006801e4: mov dword ptr [ecx + ecx*8 + 0xa90420], 0 */ W32((u32)(r_ecx+r_ecx*8+0xa90420u), 0x0u);
    /* 006801ef: jl 0x680197 */ if ((fS!=fO)) goto L_00680197;
L_006801f1:; BB(0x006801f1);
    /* 006801f1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006801f4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006801f7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006801fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006801fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680204: mov esp, ebp */ r_esp = r_ebp;
    /* 00680206: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680207: ret  */ FN_RET(0x006800f0); r_esp += 4; return;
L_00680208:; BB(0x00680208);
    /* 00680208: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068020a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068020d: jmp 0x680161 */ goto L_00680161;
}

void f_00680214(void) /* sub_680214 */
{
    FN_ENTER(0x00680214);
    /* 00680214: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00680215: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00680217: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00680219: call 0x680238 */ r_esp -= 4; W32(r_esp, 0x68021eu); f_00680238();
    /* 0068021e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00680222: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00680224: jne 0x68022a */ if (!fZ) goto L_0068022a;
L_00680226:; BB(0x00680226);
    /* 00680226: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00680227: ret 4 */ FN_RET(0x00680214); r_esp += 8; return;
L_0068022a:; BB(0x0068022a);
    /* 0068022a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068022b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x680230u); f_005c2f74();
    /* 00680230: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680231: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00680232: ret 4 */ FN_RET(0x00680214); r_esp += 8; return;
}

void f_00680238(void) /* sub_680238 */
{
    FN_ENTER(0x00680238);
    /* 00680238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680239: mov ebp, esp */ r_ebp = r_esp;
    /* 0068023b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068023d: push 0x8ea4c0 */ { u32 v = 0x8ea4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680242: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680249: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00680250: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680253: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00680256: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00680259: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0068025c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0068025f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00680262: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680269: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068026c: mov dword ptr [ecx], 0xb38418 */ W32((u32)(r_ecx), 0xb38418u);
    /* 00680272: call dword ptr [0xb3844c] */ { u32 t = R32((u32)(0xb3844cu)); r_esp -= 4; W32(r_esp, 0x680278u); call_ind(t); }
    /* 00680278: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068027b: call 0x67cc20 */ r_esp -= 4; W32(r_esp, 0x680280u); f_0067cc20();
    /* 00680280: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00680287: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068028a: call 0x67c61c */ r_esp -= 4; W32(r_esp, 0x68028fu); f_0067c61c();
    /* 0068028f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680292: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680299: mov esp, ebp */ r_esp = r_ebp;
    /* 0068029b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068029c: ret  */ FN_RET(0x00680238); r_esp += 4; return;
}

void f_006802a0(void) /* sub_6802A0 */
{
    FN_ENTER(0x006802a0);
    /* 006802a0: mov ecx, dword ptr [0xa904cc] */ r_ecx = R32((u32)(0xa904ccu));
    /* 006802a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006802a8: je 0x6802b3 */ if (fZ) goto L_006802b3;
L_006802aa:; BB(0x006802aa);
    /* 006802aa: je 0x6802b3 */ if (fZ) goto L_006802b3;
L_006802ac:; BB(0x006802ac);
    /* 006802ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006802ae: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x6802b3u); f_0044bbac();
L_006802b3:; BB(0x006802b3);
    /* 006802b3: mov dword ptr [0xa904cc], 0 */ W32((u32)(0xa904ccu), 0x0u);
    /* 006802bd: ret  */ FN_RET(0x006802a0); r_esp += 4; return;
}

void f_006802c0(void) /* sub_6802C0 */
{
    FN_ENTER(0x006802c0);
    /* 006802c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006802c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006802c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006802c5: push 0x8ea52c */ { u32 v = 0x8ea52cu; r_esp -= 4; W32(r_esp, v); }
    /* 006802ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006802d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006802d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006802d8: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006802db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006802de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006802e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006802e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006802e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006802ea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006802ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006802f0: call 0x67c674 */ r_esp -= 4; W32(r_esp, 0x6802f5u); f_0067c674();
    /* 006802f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006802fc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006802ff: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00680302: mov dword ptr [eax], 0xb38418 */ W32((u32)(r_eax), 0xb38418u);
    /* 00680308: mov edx, dword ptr [0x9cb6c0] */ r_edx = R32((u32)(0x9cb6c0u));
    /* 0068030e: mov dword ptr [eax + 0x138], 1 */ W32((u32)(r_eax+0x138u), 0x1u);
    /* 00680318: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068031b: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0068031d: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00680320: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00680323: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 00680326: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 00680329: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 0068032c: movzx edx, word ptr [edi + 0xc] */ r_edx = (u32)R16((u32)(r_edi+0xcu));
    /* 00680330: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680331: mov word ptr [eax + 0x17c], dx */ W16((u32)(r_eax+0x17cu), (u16)r_edx);
    /* 00680338: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68033du); f_007b4d18();
    /* 0068033d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068033e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680341: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680343: je 0x68034b */ if (fZ) goto L_0068034b;
L_00680345:; BB(0x00680345);
    /* 00680345: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 00680348: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_0068034b:; BB(0x0068034b);
    /* 0068034b: mov edi, dword ptr [0xa9049c] */ r_edi = R32((u32)(0xa9049cu));
    /* 00680351: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00680357: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 0068035d: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00680360: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 00680366: mov esi, dword ptr [ebx + 0x9c] */ r_esi = R32((u32)(r_ebx+0x9cu));
    /* 0068036c: mov dword ptr [ecx + 0xd8], 0x9cb6c4 */ W32((u32)(r_ecx+0xd8u), 0x9cb6c4u);
    /* 00680376: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00680379: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0068037f: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00680385: mov eax, 1 */ r_eax = 0x1u;
    /* 0068038a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068038b: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00680392: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x680397u); f_007aa4c8();
    /* 00680397: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068039a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0068039d: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 006803a4: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006803ab: mov edx, 1 */ r_edx = 0x1u;
    /* 006803b0: mov word ptr [ecx + 0x190], dx */ W16((u32)(r_ecx+0x190u), (u16)r_edx);
    /* 006803b7: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 006803ba: mov dword ptr [ecx + 0x194], ebx */ W32((u32)(r_ecx+0x194u), r_ebx);
    /* 006803c0: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 006803c3: mov dword ptr [ecx + 0x198], edi */ W32((u32)(r_ecx+0x198u), r_edi);
    /* 006803c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006803cb: mov dword ptr [ecx + 0x19c], eax */ W32((u32)(r_ecx+0x19cu), r_eax);
    /* 006803d1: mov dword ptr [ecx + 0x134], eax */ W32((u32)(r_ecx+0x134u), r_eax);
    /* 006803d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006803d9: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6803dcu); call_ind(t); }
    /* 006803dc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006803df: mov dword ptr [eax + 0x1a0], 0 */ W32((u32)(r_eax+0x1a0u), 0x0u);
    /* 006803e9: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6803eeu); f_00807ac0();
    /* 006803ee: lea edx, [eax - 0xb] */ r_edx = (u32)(r_eax+0xfffffff5u);
    /* 006803f1: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006803f4: ja 0x680448 */ if ((!fC&&!fZ)) goto L_00680448;
L_006803f6:; BB(0x006803f6);
    /* 006803f6: mov eax, dword ptr [eax*4 + 0x93bf94] */ r_eax = R32((u32)(r_eax*4+0x93bf94u));
    /* 006803fd: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00680448:; BB(0x00680448);
    /* 00680448: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0068044f: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00680454: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680459u); f_005caba4();
    /* 00680459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068045a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0068045d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068045f: je 0x680488 */ if (fZ) goto L_00680488;
L_00680461:; BB(0x00680461);
    /* 00680461: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00680468: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0068046f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680472: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680475: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680477: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 0068047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068047b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068047c: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x680481u); f_00684ab0();
    /* 00680481: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00680488:; BB(0x00680488);
    /* 00680488: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068048f: mov eax, esi */ r_eax = r_esi;
    /* 00680491: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680494: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00680498: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680499: call 0x6805c0 */ r_esp -= 4; W32(r_esp, 0x68049eu); f_006805c0();
    /* 0068049e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006804a1: mov eax, dword ptr [ecx + 0x198] */ r_eax = R32((u32)(r_ecx+0x198u));
    /* 006804a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006804aa: jne 0x6804bb */ if (!fZ) goto L_006804bb;
L_006804ac:; BB(0x006804ac);
    /* 006804ac: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 006804b2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006804b5: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_006804bb:; BB(0x006804bb);
    /* 006804bb: mov eax, esi */ r_eax = r_esi;
    /* 006804bd: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006804c0: mov ebx, dword ptr [ecx + 0x194] */ r_ebx = R32((u32)(r_ecx+0x194u));
    /* 006804c6: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 006804cc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006804ce: jne 0x680588 */ if (!fZ) goto L_00680588;
L_006804d4:; BB(0x006804d4);
    /* 006804d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006804d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006804d7: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006804de: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6804e3u); f_0067c75c();
    /* 006804e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006804e6: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 006804ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006804ee: mov edx, 1 */ r_edx = 0x1u;
    /* 006804f3: mov dword ptr [ecx + 0x194], edx */ W32((u32)(r_ecx+0x194u), r_edx);
    /* 006804f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006804fb: mov word ptr [ecx + 0x190], ax */ W16((u32)(r_ecx+0x190u), (u16)r_eax);
    /* 00680502: mov dword ptr [ecx + 0x19c], edx */ W32((u32)(r_ecx+0x19cu), r_edx);
    /* 00680508: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68050du); f_007b4d18();
    /* 0068050d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068050e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680510: je 0x68052a */ if (fZ) goto L_0068052a;
L_00680512:; BB(0x00680512);
    /* 00680512: fld dword ptr [0x93c068] */ FPUSH(R_F32((u32)(0x93c068u)));
    /* 00680518: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0068051b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068051e: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00680521: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00680524: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00680527: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0068052a:; BB(0x0068052a);
    /* 0068052a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00680531: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680536: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68053bu); f_005caba4();
    /* 0068053b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068053c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0068053f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680541: je 0x68056a */ if (fZ) goto L_0068056a;
L_00680543:; BB(0x00680543);
    /* 00680543: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0068054a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00680551: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00680554: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00680556: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680557: mov ecx, eax */ r_ecx = r_eax;
    /* 00680559: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068055b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068055e: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x680563u); f_0068327c();
    /* 00680563: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0068056a:; BB(0x0068056a);
    /* 0068056a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680571: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680574: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680576: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x68057bu); f_0067d660();
    /* 0068057b: push 0x93c080 */ { u32 v = 0x93c080u; r_esp -= 4; W32(r_esp, v); }
    /* 00680580: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680585u); f_00814f0c();
    /* 00680585: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680586: jmp 0x6805a4 */ goto L_006805a4;
L_00680588:; BB(0x00680588);
    /* 00680588: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 0068058f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680590: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680592: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x680597u); f_0067cd64();
    /* 00680597: push 0x93c08c */ { u32 v = 0x93c08cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068059c: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6805a1u); f_00814f0c();
    /* 006805a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006805a4:; BB(0x006805a4);
    /* 006805a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006805a7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006805aa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006805ad: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006805b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006805b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006805ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006805bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006805bd: ret 4 */ FN_RET(0x006802c0); r_esp += 8; return;
}

void f_006803ff(void)
{
    FN_ENTER(0x006803ff);
    /* 006803ff: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00680406: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0068040b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680410u); f_005caba4();
    /* 00680410: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680411: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00680414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680416: je 0x68043f */ if (fZ) goto L_0068043f;
L_00680418:; BB(0x00680418);
    /* 00680418: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0068041f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00680426: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680429: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068042c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068042e: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00680431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680432: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680433: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x680438u); f_00684ab0();
    /* 00680438: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0068043f:; BB(0x0068043f);
    /* 0068043f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680446: jmp 0x68048f */ goto L_0068048f;
L_0068048f:; BB(0x0068048f);
    /* 0068048f: mov eax, esi */ r_eax = r_esi;
    /* 00680491: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680494: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00680498: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680499: call 0x6805c0 */ r_esp -= 4; W32(r_esp, 0x68049eu); f_006805c0();
    /* 0068049e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006804a1: mov eax, dword ptr [ecx + 0x198] */ r_eax = R32((u32)(r_ecx+0x198u));
    /* 006804a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006804aa: jne 0x6804bb */ if (!fZ) goto L_006804bb;
L_006804ac:; BB(0x006804ac);
    /* 006804ac: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 006804b2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006804b5: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_006804bb:; BB(0x006804bb);
    /* 006804bb: mov eax, esi */ r_eax = r_esi;
    /* 006804bd: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006804c0: mov ebx, dword ptr [ecx + 0x194] */ r_ebx = R32((u32)(r_ecx+0x194u));
    /* 006804c6: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 006804cc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006804ce: jne 0x680588 */ if (!fZ) goto L_00680588;
L_006804d4:; BB(0x006804d4);
    /* 006804d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006804d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006804d7: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006804de: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6804e3u); f_0067c75c();
    /* 006804e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006804e6: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 006804ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006804ee: mov edx, 1 */ r_edx = 0x1u;
    /* 006804f3: mov dword ptr [ecx + 0x194], edx */ W32((u32)(r_ecx+0x194u), r_edx);
    /* 006804f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006804fb: mov word ptr [ecx + 0x190], ax */ W16((u32)(r_ecx+0x190u), (u16)r_eax);
    /* 00680502: mov dword ptr [ecx + 0x19c], edx */ W32((u32)(r_ecx+0x19cu), r_edx);
    /* 00680508: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68050du); f_007b4d18();
    /* 0068050d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068050e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680510: je 0x68052a */ if (fZ) goto L_0068052a;
L_00680512:; BB(0x00680512);
    /* 00680512: fld dword ptr [0x93c068] */ FPUSH(R_F32((u32)(0x93c068u)));
    /* 00680518: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0068051b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068051e: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00680521: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00680524: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00680527: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0068052a:; BB(0x0068052a);
    /* 0068052a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00680531: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680536: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68053bu); f_005caba4();
    /* 0068053b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068053c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0068053f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680541: je 0x68056a */ if (fZ) goto L_0068056a;
L_00680543:; BB(0x00680543);
    /* 00680543: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0068054a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00680551: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00680554: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00680556: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680557: mov ecx, eax */ r_ecx = r_eax;
    /* 00680559: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068055b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068055e: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x680563u); f_0068327c();
    /* 00680563: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0068056a:; BB(0x0068056a);
    /* 0068056a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680571: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680574: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680576: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x68057bu); f_0067d660();
    /* 0068057b: push 0x93c080 */ { u32 v = 0x93c080u; r_esp -= 4; W32(r_esp, v); }
    /* 00680580: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680585u); f_00814f0c();
    /* 00680585: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680586: jmp 0x6805a4 */ goto L_006805a4;
L_00680588:; BB(0x00680588);
    /* 00680588: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 0068058f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680590: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680592: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x680597u); f_0067cd64();
    /* 00680597: push 0x93c08c */ { u32 v = 0x93c08cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068059c: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6805a1u); f_00814f0c();
    /* 006805a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006805a4:; BB(0x006805a4);
    /* 006805a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006805a7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006805aa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006805ad: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006805b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006805b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006805ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006805bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006805bd: ret 4 */ FN_RET(0x006803ff); r_esp += 8; return;
}

void f_00680448(void)
{
    FN_ENTER(0x00680448);
    /* 00680448: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0068044f: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00680454: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680459u); f_005caba4();
    /* 00680459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068045a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0068045d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068045f: je 0x680488 */ if (fZ) goto L_00680488;
L_00680461:; BB(0x00680461);
    /* 00680461: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00680468: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0068046f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680472: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680475: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680477: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 0068047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068047b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068047c: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x680481u); f_00684ab0();
    /* 00680481: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00680488:; BB(0x00680488);
    /* 00680488: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068048f: mov eax, esi */ r_eax = r_esi;
    /* 00680491: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680494: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00680498: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680499: call 0x6805c0 */ r_esp -= 4; W32(r_esp, 0x68049eu); f_006805c0();
    /* 0068049e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006804a1: mov eax, dword ptr [ecx + 0x198] */ r_eax = R32((u32)(r_ecx+0x198u));
    /* 006804a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006804aa: jne 0x6804bb */ if (!fZ) goto L_006804bb;
L_006804ac:; BB(0x006804ac);
    /* 006804ac: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 006804b2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006804b5: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_006804bb:; BB(0x006804bb);
    /* 006804bb: mov eax, esi */ r_eax = r_esi;
    /* 006804bd: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006804c0: mov ebx, dword ptr [ecx + 0x194] */ r_ebx = R32((u32)(r_ecx+0x194u));
    /* 006804c6: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 006804cc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006804ce: jne 0x680588 */ if (!fZ) goto L_00680588;
L_006804d4:; BB(0x006804d4);
    /* 006804d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006804d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006804d7: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006804de: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6804e3u); f_0067c75c();
    /* 006804e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006804e6: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 006804ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006804ee: mov edx, 1 */ r_edx = 0x1u;
    /* 006804f3: mov dword ptr [ecx + 0x194], edx */ W32((u32)(r_ecx+0x194u), r_edx);
    /* 006804f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006804fb: mov word ptr [ecx + 0x190], ax */ W16((u32)(r_ecx+0x190u), (u16)r_eax);
    /* 00680502: mov dword ptr [ecx + 0x19c], edx */ W32((u32)(r_ecx+0x19cu), r_edx);
    /* 00680508: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68050du); f_007b4d18();
    /* 0068050d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068050e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680510: je 0x68052a */ if (fZ) goto L_0068052a;
L_00680512:; BB(0x00680512);
    /* 00680512: fld dword ptr [0x93c068] */ FPUSH(R_F32((u32)(0x93c068u)));
    /* 00680518: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0068051b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068051e: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00680521: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00680524: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00680527: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0068052a:; BB(0x0068052a);
    /* 0068052a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00680531: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680536: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68053bu); f_005caba4();
    /* 0068053b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068053c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0068053f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680541: je 0x68056a */ if (fZ) goto L_0068056a;
L_00680543:; BB(0x00680543);
    /* 00680543: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0068054a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00680551: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00680554: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00680556: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680557: mov ecx, eax */ r_ecx = r_eax;
    /* 00680559: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068055b: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068055e: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x680563u); f_0068327c();
    /* 00680563: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0068056a:; BB(0x0068056a);
    /* 0068056a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680571: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680574: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680576: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x68057bu); f_0067d660();
    /* 0068057b: push 0x93c080 */ { u32 v = 0x93c080u; r_esp -= 4; W32(r_esp, v); }
    /* 00680580: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680585u); f_00814f0c();
    /* 00680585: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680586: jmp 0x6805a4 */ goto L_006805a4;
L_00680588:; BB(0x00680588);
    /* 00680588: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 0068058f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680590: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680592: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x680597u); f_0067cd64();
    /* 00680597: push 0x93c08c */ { u32 v = 0x93c08cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068059c: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6805a1u); f_00814f0c();
    /* 006805a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006805a4:; BB(0x006805a4);
    /* 006805a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006805a7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006805aa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006805ad: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006805b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006805b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006805ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006805bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006805bd: ret 4 */ FN_RET(0x00680448); r_esp += 8; return;
}

void f_006805c0(void) /* sub_6805C0 */
{
    FN_ENTER(0x006805c0);
    /* 006805c0: mov dword ptr [ecx + 0x180], 0 */ W32((u32)(r_ecx+0x180u), 0x0u);
    /* 006805ca: mov dword ptr [ecx + 0x184], 0 */ W32((u32)(r_ecx+0x184u), 0x0u);
    /* 006805d4: mov dword ptr [ecx + 0x188], 0 */ W32((u32)(r_ecx+0x188u), 0x0u);
    /* 006805de: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 006805e8: ret 4 */ FN_RET(0x006805c0); r_esp += 8; return;
}

void f_006805ec(void) /* sub_6805EC */
{
    FN_ENTER(0x006805ec);
    /* 006805ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006805ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006805ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006805f1: push 0x8ea554 */ { u32 v = 0x8ea554u; r_esp -= 4; W32(r_esp, v); }
    /* 006805f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006805fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006805fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00680604: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680607: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068060a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0068060d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00680610: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00680613: mov ebx, dword ptr [ecx + 0x1a0] */ r_ebx = R32((u32)(r_ecx+0x1a0u));
    /* 00680619: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068061c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068061f: mov dword ptr [ecx + 0x1a0], ebx */ W32((u32)(r_ecx+0x1a0u), r_ebx);
    /* 00680625: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680628: je 0x680743 */ if (fZ) goto L_00680743;
L_0068062e:; BB(0x0068062e);
    /* 0068062e: cmp ebx, 0x64 */ {  u32 a = r_ebx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680631: je 0x6806fe */ if (fZ) goto L_006806fe;
L_00680637:; BB(0x00680637);
    /* 00680637: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068063a: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
L_00680641:; BB(0x00680641);
    /* 00680641: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680644: mov word ptr [ecx + 0x190], ax */ W16((u32)(r_ecx+0x190u), (u16)r_eax);
    /* 0068064b: call 0x67c7d8 */ r_esp -= 4; W32(r_esp, 0x680650u); f_0067c7d8();
    /* 00680650: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680653: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x680658u); f_007aa094();
    /* 00680658: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068065b: call 0x67cc34 */ r_esp -= 4; W32(r_esp, 0x680660u); f_0067cc34();
    /* 00680660: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680663: fild dword ptr [ecx + 0x1a0] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x1a0u)));
    /* 00680669: fcom dword ptr [0x93c054] */ fx_compare(ST(0), R_F32((u32)(0x93c054u))); 
    /* 0068066f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00680671: movzx edx, word ptr [ecx + 0x14c] */ r_edx = (u32)R16((u32)(r_ecx+0x14cu));
    /* 00680678: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068067b: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0068067e: mov word ptr [ecx + 0x14c], dx */ W16((u32)(r_ecx+0x14cu), (u16)r_edx);
    /* 00680685: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00680686: je 0x6806ec */ if (fZ) goto L_006806ec;
L_00680688:; BB(0x00680688);
    /* 00680688: fcom dword ptr [0x93c050] */ fx_compare(ST(0), R_F32((u32)(0x93c050u))); 
    /* 0068068e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00680690: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00680691: jbe 0x6806b7 */ if ((fC||fZ)) goto L_006806b7;
L_00680693:; BB(0x00680693);
    /* 00680693: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00680695: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680698: fld dword ptr [edx + 0x180] */ FPUSH(R_F32((u32)(r_edx+0x180u)));
    /* 0068069e: fcom dword ptr [0x93c05c] */ fx_compare(ST(0), R_F32((u32)(0x93c05cu))); 
    /* 006806a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006806a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006806a7: jbe 0x6806b7 */ if ((fC||fZ)) goto L_006806b7;
L_006806a9:; BB(0x006806a9);
    /* 006806a9: fadd dword ptr [0x93c058] */ ST(0) = ST(0) + R_F32((u32)(0x93c058u));
    /* 006806af: mov eax, edx */ r_eax = r_edx;
    /* 006806b1: fst dword ptr [eax + 0x180] */ W_F32((u32)(r_eax+0x180u), ST(0));
L_006806b7:; BB(0x006806b7);
    /* 006806b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006806b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006806bc: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 006806c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006806c4: je 0x6806db */ if (fZ) goto L_006806db;
L_006806c6:; BB(0x006806c6);
    /* 006806c6: mov edx, eax */ r_edx = r_eax;
    /* 006806c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006806ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006806cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006806cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006806cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006806ce: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 006806d3: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6806d8u); f_008144b0();
    /* 006806d8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006806db:; BB(0x006806db);
    /* 006806db: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006806de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006806e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006806e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006806ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006806eb: ret  */ FN_RET(0x006805ec); r_esp += 4; return;
L_006806ec:; BB(0x006806ec);
    /* 006806ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006806ee: call 0x6807e0 */ r_esp -= 4; W32(r_esp, 0x6806f3u); f_006807e0();
    /* 006806f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006806f6: fild dword ptr [eax + 0x1a0] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a0u)));
    /* 006806fc: jmp 0x680688 */ goto L_00680688;
L_006806fe:; BB(0x006806fe);
    /* 006806fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00680701: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00680708: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068070b: jne 0x680641 */ if (!fZ) goto L_00680641;
L_00680711:; BB(0x00680711);
    /* 00680711: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680714: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680716: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x68071bu); f_0067c75c();
    /* 0068071b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068071e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680722: mov dword ptr [ecx + 0x1a0], eax */ W32((u32)(r_ecx+0x1a0u), r_eax);
    /* 00680728: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0068072f: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x680734u); f_0067d660();
    /* 00680734: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00680737: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 0068073e: jmp 0x680641 */ goto L_00680641;
L_00680743:; BB(0x00680743);
    /* 00680743: mov eax, ecx */ r_eax = r_ecx;
    /* 00680745: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 0068074b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068074d: jne 0x68062e */ if (!fZ) goto L_0068062e;
L_00680753:; BB(0x00680753);
    /* 00680753: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 0068075a: mov dword ptr [eax + 0x19c], 1 */ W32((u32)(r_eax+0x19cu), 0x1u);
    /* 00680764: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680765: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68076au); f_007b4d18();
    /* 0068076a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068076b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068076d: je 0x680787 */ if (fZ) goto L_00680787;
L_0068076f:; BB(0x0068076f);
    /* 0068076f: fld dword ptr [0x93c060] */ FPUSH(R_F32((u32)(0x93c060u)));
    /* 00680775: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00680778: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068077b: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0068077e: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00680781: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00680784: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00680787:; BB(0x00680787);
    /* 00680787: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0068078e: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680793: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680798u); f_005caba4();
    /* 00680798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680799: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0068079c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068079e: je 0x6807c8 */ if (fZ) goto L_006807c8;
L_006807a0:; BB(0x006807a0);
    /* 006807a0: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006807a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006807ae: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006807b1: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 006807b4: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 006807b6: mov ecx, eax */ r_ecx = r_eax;
    /* 006807b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006807b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006807bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006807bc: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x6807c1u); f_0068327c();
    /* 006807c1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006807c8:; BB(0x006807c8);
    /* 006807c8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006807cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006807d2: mov ebx, dword ptr [eax + 0x1a0] */ r_ebx = R32((u32)(r_eax+0x1a0u));
    /* 006807d8: jmp 0x68062e */ goto L_0068062e;
}

void f_006807e0(void) /* sub_6807E0 */
{
    FN_ENTER(0x006807e0);
    /* 006807e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006807e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006807e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006807e5: push 0x8ea57c */ { u32 v = 0x8ea57cu; r_esp -= 4; W32(r_esp, v); }
    /* 006807ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006807f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006807f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006807f8: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006807fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006807fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00680801: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00680804: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00680807: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 0068080e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00680811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680812: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x680817u); f_007b4d18();
    /* 00680817: mov ebx, eax */ r_ebx = r_eax;
    /* 00680819: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068081c: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00680823: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00680828: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0068082f: mov dword ptr [ebp - 0x58], 0x3f800000 */ W32((u32)(r_ebp+0xffffffa8u), 0x3f800000u);
    /* 00680836: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x68083bu); f_0082d990();
    /* 0068083b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068083d: je 0x680849 */ if (fZ) goto L_00680849;
L_0068083f:; BB(0x0068083f);
    /* 0068083f: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00680842: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00680844: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x680849u); f_0082d8bc();
L_00680849:; BB(0x00680849);
    /* 00680849: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 0068084c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068084d: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00680850: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00680852: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x680857u); f_0082eab8();
    /* 00680857: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0068085c: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x680861u); f_0082eb80();
    /* 00680861: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00680864: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 00680867: mov edi, dword ptr [ebp - 0x50] */ r_edi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0068086a: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068086d: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00680870: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 00680873: mov eax, dword ptr [eax + 0x150] */ r_eax = R32((u32)(r_eax+0x150u));
    /* 00680879: mov dword ptr [ebp - 0x30], 0x41200000 */ W32((u32)(r_ebp+0xffffffd0u), 0x41200000u);
    /* 00680880: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00680883: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00680886: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0068088d: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00680890: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00680893: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00680896: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00680899: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0068089c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0068089f: push 0x380 */ { u32 v = 0x380u; r_esp -= 4; W32(r_esp, v); }
    /* 006808a4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6808a9u); f_005caba4();
    /* 006808a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006808aa: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006808ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006808af: je 0x6808de */ if (fZ) goto L_006808de;
L_006808b1:; BB(0x006808b1);
    /* 006808b1: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006808b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006808bf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006808c2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006808c5: lea ebx, [ebp - 0x48] */ r_ebx = (u32)(r_ebp+0xffffffb8u);
    /* 006808c8: movzx eax, word ptr [edx + 0x17c] */ r_eax = (u32)R16((u32)(r_edx+0x17cu));
    /* 006808cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006808d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006808d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006808d2: call 0x682d60 */ r_esp -= 4; W32(r_esp, 0x6808d7u); f_00682d60();
    /* 006808d7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006808de:; BB(0x006808de);
    /* 006808de: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006808e1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006808e4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006808e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006808ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006808f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006808f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006808f4: ret  */ FN_RET(0x006807e0); r_esp += 4; return;
}

void f_006808f8(void) /* sub_6808F8 */
{
    FN_ENTER(0x006808f8);
    /* 006808f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006808f9: mov edi, ecx */ r_edi = r_ecx;
    /* 006808fb: mov eax, dword ptr [edi + 0x19c] */ r_eax = R32((u32)(r_edi+0x19cu));
    /* 00680901: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00680903: jne 0x680907 */ if (!fZ) goto L_00680907;
L_00680905:; BB(0x00680905);
    /* 00680905: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00680906: ret  */ FN_RET(0x006808f8); r_esp += 4; return;
L_00680907:; BB(0x00680907);
    /* 00680907: mov ecx, dword ptr [0xa904cc] */ r_ecx = R32((u32)(0xa904ccu));
    /* 0068090d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068090f: movsx eax, word ptr [edi + 0x14c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x14cu));
    /* 00680916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680917: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x68091cu); f_0052ddac();
    /* 0068091c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x680921u); f_0082dbac();
    /* 00680921: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00680924: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x680929u); f_00829cc8();
    /* 00680929: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x68092eu); f_0082d7b0();
    /* 0068092e: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680931: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00680934: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00680936: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680939: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x68093eu); f_00830b74();
    /* 0068093e: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00680941: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00680943: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x680948u); f_0082d8bc();
    /* 00680948: mov ecx, edi */ r_ecx = r_edi;
    /* 0068094a: call 0x67d5e0 */ r_esp -= 4; W32(r_esp, 0x68094fu); f_0067d5e0();
    /* 0068094f: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00680954: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 0068095a: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0068095f: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00680965: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 0068096b: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00680971: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00680977: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 0068097d: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00680983: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00680989: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0068098f: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00680995: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0068099b: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 006809a1: or eax, 0x200820 */ {  u32 a = r_eax; u32 b = 0x200820u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006809a6: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006809ab: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x6809b0u); f_0082fa9c();
    /* 006809b0: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 006809b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006809b7: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x6809bcu); f_0082d6fc();
    /* 006809bc: lea eax, [edi + 0x180] */ r_eax = (u32)(r_edi+0x180u);
    /* 006809c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006809c3: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6809c8u); f_0082d710();
    /* 006809c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006809cb: mov ecx, edi */ r_ecx = r_edi;
    /* 006809cd: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x6809d2u); f_007aa668();
    /* 006809d2: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x6809d7u); f_0082faac();
    /* 006809d7: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 006809dc: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 006809e2: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 006809e7: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 006809ec: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 006809f2: mov ecx, edi */ r_ecx = r_edi;
    /* 006809f4: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 006809f9: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 006809fe: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 00680a03: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 00680a08: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00680a0d: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00680a12: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 00680a17: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00680a1c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00680a21: call 0x67ccc8 */ r_esp -= 4; W32(r_esp, 0x680a26u); f_0067ccc8();
    /* 00680a26: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x680a2bu); f_0082da80();
    /* 00680a2b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x680a30u); f_0082dab0();
    /* 00680a30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00680a31: ret  */ FN_RET(0x006808f8); r_esp += 4; return;
}

void f_00680a34(void) /* sub_680A34 */
{
    FN_ENTER(0x00680a34);
    /* 00680a34: mov dword ptr [0xa904c0], 0x3f800000 */ W32((u32)(0xa904c0u), 0x3f800000u);
    /* 00680a3e: mov dword ptr [0xa904c4], 0x41000000 */ W32((u32)(0xa904c4u), 0x41000000u);
    /* 00680a48: mov dword ptr [0xa904c8], 0x3fc00000 */ W32((u32)(0xa904c8u), 0x3fc00000u);
    /* 00680a52: ret  */ FN_RET(0x00680a34); r_esp += 4; return;
}

void f_00680a54(void) /* sub_680A54 */
{
    FN_ENTER(0x00680a54);
    /* 00680a54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680a55: mov ebp, esp */ r_ebp = r_esp;
    /* 00680a57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680a59: push 0x8ea5a4 */ { u32 v = 0x8ea5a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00680a5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680a65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00680a6c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680a6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00680a72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00680a75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00680a78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00680a7b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00680a7d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00680a84: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x680a89u); f_008581c5();
    /* 00680a89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680a8a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00680a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680a8f: je 0x680add */ if (fZ) goto L_00680add;
L_00680a91:; BB(0x00680a91);
    /* 00680a91: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00680a98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680a9f: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 00680aa4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680aa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680aa9: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00680aaf: mov ebx, dword ptr [edx + 0x98] */ r_ebx = R32((u32)(r_edx+0x98u));
    /* 00680ab5: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00680ab8: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x680abdu); f_0052d584();
    /* 00680abd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680ac0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00680ac7:; BB(0x00680ac7);
    /* 00680ac7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680aca: mov dword ptr [0xa904cc], eax */ W32((u32)(0xa904ccu), r_eax);
    /* 00680acf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680ad2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680ad9: mov esp, ebp */ r_esp = r_ebp;
    /* 00680adb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680adc: ret  */ FN_RET(0x00680a54); r_esp += 4; return;
L_00680add:; BB(0x00680add);
    /* 00680add: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00680adf: jmp 0x680ac7 */ goto L_00680ac7;
}

void f_00680ae4(void) /* sub_680AE4 */
{
    FN_ENTER(0x00680ae4);
    /* 00680ae4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00680ae5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00680ae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00680ae9: call 0x680b08 */ r_esp -= 4; W32(r_esp, 0x680aeeu); f_00680b08();
    /* 00680aee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00680af2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00680af4: jne 0x680afa */ if (!fZ) goto L_00680afa;
L_00680af6:; BB(0x00680af6);
    /* 00680af6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00680af7: ret 4 */ FN_RET(0x00680ae4); r_esp += 8; return;
L_00680afa:; BB(0x00680afa);
    /* 00680afa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00680afb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x680b00u); f_005c2f74();
    /* 00680b00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680b01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00680b02: ret 4 */ FN_RET(0x00680ae4); r_esp += 8; return;
}

void f_00680b08(void) /* sub_680B08 */
{
    FN_ENTER(0x00680b08);
    /* 00680b08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680b09: mov ebp, esp */ r_ebp = r_esp;
    /* 00680b0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680b0d: push 0x8ea5c0 */ { u32 v = 0x8ea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680b12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680b19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00680b20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680b23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00680b26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00680b29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00680b2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00680b2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00680b32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680b39: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680b3c: mov dword ptr [ecx], 0xb38508 */ W32((u32)(r_ecx), 0xb38508u);
    /* 00680b42: call dword ptr [0xb3853c] */ { u32 t = R32((u32)(0xb3853cu)); r_esp -= 4; W32(r_esp, 0x680b48u); call_ind(t); }
    /* 00680b48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680b4b: call 0x67cc20 */ r_esp -= 4; W32(r_esp, 0x680b50u); f_0067cc20();
    /* 00680b50: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00680b53: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x680b58u); f_007b4e84();
    /* 00680b58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680b59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680b5c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x680b61u); f_007b9c8c();
    /* 00680b61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00680b68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680b6b: call 0x67c61c */ r_esp -= 4; W32(r_esp, 0x680b70u); f_0067c61c();
    /* 00680b70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680b73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680b7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00680b7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680b7d: ret  */ FN_RET(0x00680b08); r_esp += 4; return;
}

void f_00680b80(void) /* sub_680B80 */
{
    FN_ENTER(0x00680b80);
    /* 00680b80: mov ecx, dword ptr [0xa904e0] */ r_ecx = R32((u32)(0xa904e0u));
    /* 00680b86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00680b88: je 0x680b93 */ if (fZ) goto L_00680b93;
L_00680b8a:; BB(0x00680b8a);
    /* 00680b8a: je 0x680b93 */ if (fZ) goto L_00680b93;
L_00680b8c:; BB(0x00680b8c);
    /* 00680b8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680b8e: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x680b93u); f_0044bbac();
L_00680b93:; BB(0x00680b93);
    /* 00680b93: mov dword ptr [0xa904e0], 0 */ W32((u32)(0xa904e0u), 0x0u);
    /* 00680b9d: ret  */ FN_RET(0x00680b80); r_esp += 4; return;
}

void f_00680ba0(void) /* sub_680BA0 */
{
    FN_ENTER(0x00680ba0);
    /* 00680ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00680ba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680ba5: push 0x8ea62c */ { u32 v = 0x8ea62cu; r_esp -= 4; W32(r_esp, v); }
    /* 00680baa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680bb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00680bb8: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680bbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00680bbe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00680bc1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00680bc4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00680bc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00680bca: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00680bcd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00680bd0: call 0x67c674 */ r_esp -= 4; W32(r_esp, 0x680bd5u); f_0067c674();
    /* 00680bd5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680bdc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680bdf: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00680be2: mov dword ptr [ecx], 0xb38508 */ W32((u32)(r_ecx), 0xb38508u);
    /* 00680be8: mov eax, dword ptr [0x9cb6e4] */ r_eax = R32((u32)(0x9cb6e4u));
    /* 00680bed: mov dword ptr [ecx + 0x138], 0 */ W32((u32)(r_ecx+0x138u), 0x0u);
    /* 00680bf7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00680bfa: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00680bfc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680bfe: push 0x9cb708 */ { u32 v = 0x9cb708u; r_esp -= 4; W32(r_esp, v); }
    /* 00680c03: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00680c06: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00680c09: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 00680c0c: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 00680c0f: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 00680c12: movzx eax, word ptr [edi + 0xc] */ r_eax = (u32)R16((u32)(r_edi+0xcu));
    /* 00680c16: mov word ptr [ecx + 0x17c], ax */ W16((u32)(r_ecx+0x17cu), (u16)r_eax);
    /* 00680c1d: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x680c22u); f_007b9a88();
    /* 00680c22: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00680c25: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x680c2au); f_007b999c();
    /* 00680c2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680c2b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680c2e: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x680c33u); f_007b4f54();
    /* 00680c33: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680c36: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 00680c3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680c3e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x680c43u); f_007b4d18();
    /* 00680c43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680c44: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680c47: mov dword ptr [ecx + 0x180], eax */ W32((u32)(r_ecx+0x180u), r_eax);
    /* 00680c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680c4f: je 0x680c57 */ if (fZ) goto L_00680c57;
L_00680c51:; BB(0x00680c51);
    /* 00680c51: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 00680c54: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_00680c57:; BB(0x00680c57);
    /* 00680c57: mov edi, dword ptr [0xa9049c] */ r_edi = R32((u32)(0xa9049cu));
    /* 00680c5d: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00680c63: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00680c66: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00680c69: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 00680c6f: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00680c72: mov dword ptr [ecx + 0xd8], 0x9cb6e8 */ W32((u32)(r_ecx+0xd8u), 0x9cb6e8u);
    /* 00680c7c: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00680c7f: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 00680c85: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00680c8b: mov eax, 1 */ r_eax = 0x1u;
    /* 00680c90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680c91: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00680c98: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x680c9du); f_007aa4c8();
    /* 00680c9d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680ca0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680ca3: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00680caa: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00680cb1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00680cb3: mov edi, 1 */ r_edi = 0x1u;
    /* 00680cb8: mov word ptr [ecx + 0x194], di */ W16((u32)(r_ecx+0x194u), (u16)r_edi);
    /* 00680cbf: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00680cc2: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00680cc8: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 00680ccb: mov dword ptr [ecx + 0x19c], esi */ W32((u32)(r_ecx+0x19cu), r_esi);
    /* 00680cd1: mov dword ptr [ecx + 0x134], edi */ W32((u32)(r_ecx+0x134u), r_edi);
    /* 00680cd7: mov dword ptr [ecx + 0x1a0], 0 */ W32((u32)(r_ecx+0x1a0u), 0x0u);
    /* 00680ce1: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x680ce4u); call_ind(t); }
    /* 00680ce4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680ce7: mov dword ptr [eax + 0x1a4], 0 */ W32((u32)(r_eax+0x1a4u), 0x0u);
    /* 00680cf1: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x680cf6u); f_00807ac0();
    /* 00680cf6: lea edx, [eax - 0xb] */ r_edx = (u32)(r_eax+0xfffffff5u);
    /* 00680cf9: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00680cfc: ja 0x680d50 */ if ((!fC&&!fZ)) goto L_00680d50;
L_00680cfe:; BB(0x00680cfe);
    /* 00680cfe: mov eax, dword ptr [eax*4 + 0x93c074] */ r_eax = R32((u32)(r_eax*4+0x93c074u));
    /* 00680d05: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00680d50:; BB(0x00680d50);
    /* 00680d50: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00680d57: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00680d5c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680d61u); f_005caba4();
    /* 00680d61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680d62: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00680d65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680d67: je 0x680d90 */ if (fZ) goto L_00680d90;
L_00680d69:; BB(0x00680d69);
    /* 00680d69: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00680d70: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00680d77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680d7a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680d7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680d7f: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00680d82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680d83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d84: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x680d89u); f_00684ab0();
    /* 00680d89: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00680d90:; BB(0x00680d90);
    /* 00680d90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680d97: mov eax, ebx */ r_eax = r_ebx;
    /* 00680d99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680d9c: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00680da0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680da1: call 0x680ed0 */ r_esp -= 4; W32(r_esp, 0x680da6u); f_00680ed0();
    /* 00680da6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680da9: mov eax, dword ptr [ecx + 0x19c] */ r_eax = R32((u32)(r_ecx+0x19cu));
    /* 00680daf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680db2: jne 0x680dc3 */ if (!fZ) goto L_00680dc3;
L_00680db4:; BB(0x00680db4);
    /* 00680db4: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00680dba: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00680dbd: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00680dc3:; BB(0x00680dc3);
    /* 00680dc3: mov eax, ebx */ r_eax = r_ebx;
    /* 00680dc5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00680dc8: mov ebx, dword ptr [ecx + 0x198] */ r_ebx = R32((u32)(r_ecx+0x198u));
    /* 00680dce: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 00680dd4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680dd6: jne 0x680e97 */ if (!fZ) goto L_00680e97;
L_00680ddc:; BB(0x00680ddc);
    /* 00680ddc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680dde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680de0: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00680de7: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x680decu); f_0067c75c();
    /* 00680dec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680def: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00680df6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00680df7: mov edx, 1 */ r_edx = 0x1u;
    /* 00680dfc: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00680e02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680e04: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00680e0b: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 00680e11: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x680e16u); f_007b4d18();
    /* 00680e16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680e19: je 0x680e39 */ if (fZ) goto L_00680e39;
L_00680e1b:; BB(0x00680e1b);
    /* 00680e1b: fld dword ptr [0x93c134] */ FPUSH(R_F32((u32)(0x93c134u)));
    /* 00680e21: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00680e24: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00680e27: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00680e2a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00680e2d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00680e30: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 00680e33: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00680e36: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00680e39:; BB(0x00680e39);
    /* 00680e39: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00680e40: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e45: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680e4au); f_005caba4();
    /* 00680e4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e4b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00680e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680e50: je 0x680e79 */ if (fZ) goto L_00680e79;
L_00680e52:; BB(0x00680e52);
    /* 00680e52: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00680e59: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00680e60: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00680e63: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680e66: mov ecx, eax */ r_ecx = r_eax;
    /* 00680e68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e6a: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00680e6d: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x680e72u); f_0068327c();
    /* 00680e72: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00680e79:; BB(0x00680e79);
    /* 00680e79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680e80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680e83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e85: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x680e8au); f_0067d660();
    /* 00680e8a: push 0x93c140 */ { u32 v = 0x93c140u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e8f: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680e94u); f_00814f0c();
    /* 00680e94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e95: jmp 0x680eb3 */ goto L_00680eb3;
L_00680e97:; BB(0x00680e97);
    /* 00680e97: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00680e9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680e9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680ea1: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x680ea6u); f_0067cd64();
    /* 00680ea6: push 0x93c14c */ { u32 v = 0x93c14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00680eab: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680eb0u); f_00814f0c();
    /* 00680eb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00680eb3:; BB(0x00680eb3);
    /* 00680eb3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680eb6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680eb9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00680ebc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680ebf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680ec2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680ec9: mov esp, ebp */ r_esp = r_ebp;
    /* 00680ecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680ecc: ret 4 */ FN_RET(0x00680ba0); r_esp += 8; return;
}

void f_00680d07(void)
{
    FN_ENTER(0x00680d07);
    /* 00680d07: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00680d0e: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00680d13: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680d18u); f_005caba4();
    /* 00680d18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680d19: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00680d1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680d1e: je 0x680d47 */ if (fZ) goto L_00680d47;
L_00680d20:; BB(0x00680d20);
    /* 00680d20: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00680d27: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00680d2e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680d31: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680d34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680d36: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00680d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680d3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d3b: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x680d40u); f_00684ab0();
    /* 00680d40: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00680d47:; BB(0x00680d47);
    /* 00680d47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680d4e: jmp 0x680d97 */ goto L_00680d97;
L_00680d97:; BB(0x00680d97);
    /* 00680d97: mov eax, ebx */ r_eax = r_ebx;
    /* 00680d99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680d9c: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00680da0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680da1: call 0x680ed0 */ r_esp -= 4; W32(r_esp, 0x680da6u); f_00680ed0();
    /* 00680da6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680da9: mov eax, dword ptr [ecx + 0x19c] */ r_eax = R32((u32)(r_ecx+0x19cu));
    /* 00680daf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680db2: jne 0x680dc3 */ if (!fZ) goto L_00680dc3;
L_00680db4:; BB(0x00680db4);
    /* 00680db4: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00680dba: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00680dbd: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00680dc3:; BB(0x00680dc3);
    /* 00680dc3: mov eax, ebx */ r_eax = r_ebx;
    /* 00680dc5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00680dc8: mov ebx, dword ptr [ecx + 0x198] */ r_ebx = R32((u32)(r_ecx+0x198u));
    /* 00680dce: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 00680dd4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680dd6: jne 0x680e97 */ if (!fZ) goto L_00680e97;
L_00680ddc:; BB(0x00680ddc);
    /* 00680ddc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680dde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680de0: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00680de7: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x680decu); f_0067c75c();
    /* 00680dec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680def: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00680df6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00680df7: mov edx, 1 */ r_edx = 0x1u;
    /* 00680dfc: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00680e02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680e04: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00680e0b: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 00680e11: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x680e16u); f_007b4d18();
    /* 00680e16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680e19: je 0x680e39 */ if (fZ) goto L_00680e39;
L_00680e1b:; BB(0x00680e1b);
    /* 00680e1b: fld dword ptr [0x93c134] */ FPUSH(R_F32((u32)(0x93c134u)));
    /* 00680e21: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00680e24: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00680e27: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00680e2a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00680e2d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00680e30: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 00680e33: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00680e36: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00680e39:; BB(0x00680e39);
    /* 00680e39: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00680e40: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e45: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680e4au); f_005caba4();
    /* 00680e4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e4b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00680e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680e50: je 0x680e79 */ if (fZ) goto L_00680e79;
L_00680e52:; BB(0x00680e52);
    /* 00680e52: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00680e59: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00680e60: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00680e63: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680e66: mov ecx, eax */ r_ecx = r_eax;
    /* 00680e68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e6a: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00680e6d: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x680e72u); f_0068327c();
    /* 00680e72: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00680e79:; BB(0x00680e79);
    /* 00680e79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680e80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680e83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e85: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x680e8au); f_0067d660();
    /* 00680e8a: push 0x93c140 */ { u32 v = 0x93c140u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e8f: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680e94u); f_00814f0c();
    /* 00680e94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e95: jmp 0x680eb3 */ goto L_00680eb3;
L_00680e97:; BB(0x00680e97);
    /* 00680e97: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00680e9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680e9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680ea1: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x680ea6u); f_0067cd64();
    /* 00680ea6: push 0x93c14c */ { u32 v = 0x93c14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00680eab: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680eb0u); f_00814f0c();
    /* 00680eb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00680eb3:; BB(0x00680eb3);
    /* 00680eb3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680eb6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680eb9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00680ebc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680ebf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680ec2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680ec9: mov esp, ebp */ r_esp = r_ebp;
    /* 00680ecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680ecc: ret 4 */ FN_RET(0x00680d07); r_esp += 8; return;
}

void f_00680d50(void)
{
    FN_ENTER(0x00680d50);
    /* 00680d50: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00680d57: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00680d5c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680d61u); f_005caba4();
    /* 00680d61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680d62: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00680d65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680d67: je 0x680d90 */ if (fZ) goto L_00680d90;
L_00680d69:; BB(0x00680d69);
    /* 00680d69: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00680d70: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00680d77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680d7a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680d7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680d7f: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00680d82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680d83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680d84: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x680d89u); f_00684ab0();
    /* 00680d89: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00680d90:; BB(0x00680d90);
    /* 00680d90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680d97: mov eax, ebx */ r_eax = r_ebx;
    /* 00680d99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680d9c: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00680da0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680da1: call 0x680ed0 */ r_esp -= 4; W32(r_esp, 0x680da6u); f_00680ed0();
    /* 00680da6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680da9: mov eax, dword ptr [ecx + 0x19c] */ r_eax = R32((u32)(r_ecx+0x19cu));
    /* 00680daf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680db2: jne 0x680dc3 */ if (!fZ) goto L_00680dc3;
L_00680db4:; BB(0x00680db4);
    /* 00680db4: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 00680dba: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00680dbd: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00680dc3:; BB(0x00680dc3);
    /* 00680dc3: mov eax, ebx */ r_eax = r_ebx;
    /* 00680dc5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00680dc8: mov ebx, dword ptr [ecx + 0x198] */ r_ebx = R32((u32)(r_ecx+0x198u));
    /* 00680dce: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 00680dd4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680dd6: jne 0x680e97 */ if (!fZ) goto L_00680e97;
L_00680ddc:; BB(0x00680ddc);
    /* 00680ddc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680dde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680de0: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00680de7: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x680decu); f_0067c75c();
    /* 00680dec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680def: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00680df6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00680df7: mov edx, 1 */ r_edx = 0x1u;
    /* 00680dfc: mov dword ptr [ecx + 0x198], edx */ W32((u32)(r_ecx+0x198u), r_edx);
    /* 00680e02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680e04: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00680e0b: mov dword ptr [ecx + 0x1a0], edx */ W32((u32)(r_ecx+0x1a0u), r_edx);
    /* 00680e11: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x680e16u); f_007b4d18();
    /* 00680e16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680e19: je 0x680e39 */ if (fZ) goto L_00680e39;
L_00680e1b:; BB(0x00680e1b);
    /* 00680e1b: fld dword ptr [0x93c134] */ FPUSH(R_F32((u32)(0x93c134u)));
    /* 00680e21: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00680e24: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00680e27: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00680e2a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00680e2d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00680e30: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 00680e33: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00680e36: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00680e39:; BB(0x00680e39);
    /* 00680e39: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00680e40: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e45: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x680e4au); f_005caba4();
    /* 00680e4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e4b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00680e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680e50: je 0x680e79 */ if (fZ) goto L_00680e79;
L_00680e52:; BB(0x00680e52);
    /* 00680e52: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00680e59: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00680e60: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00680e63: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680e66: mov ecx, eax */ r_ecx = r_eax;
    /* 00680e68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e6a: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00680e6d: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x680e72u); f_0068327c();
    /* 00680e72: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00680e79:; BB(0x00680e79);
    /* 00680e79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680e80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680e83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e85: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x680e8au); f_0067d660();
    /* 00680e8a: push 0x93c140 */ { u32 v = 0x93c140u; r_esp -= 4; W32(r_esp, v); }
    /* 00680e8f: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680e94u); f_00814f0c();
    /* 00680e94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e95: jmp 0x680eb3 */ goto L_00680eb3;
L_00680e97:; BB(0x00680e97);
    /* 00680e97: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00680e9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680e9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680ea1: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x680ea6u); f_0067cd64();
    /* 00680ea6: push 0x93c14c */ { u32 v = 0x93c14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00680eab: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x680eb0u); f_00814f0c();
    /* 00680eb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00680eb3:; BB(0x00680eb3);
    /* 00680eb3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00680eb6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680eb9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00680ebc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680ebf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680ec2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680ec9: mov esp, ebp */ r_esp = r_ebp;
    /* 00680ecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680ecc: ret 4 */ FN_RET(0x00680d50); r_esp += 8; return;
}

void f_00680ed0(void) /* sub_680ED0 */
{
    FN_ENTER(0x00680ed0);
    /* 00680ed0: mov dword ptr [ecx + 0x184], 0 */ W32((u32)(r_ecx+0x184u), 0x0u);
    /* 00680eda: mov dword ptr [ecx + 0x188], 0 */ W32((u32)(r_ecx+0x188u), 0x0u);
    /* 00680ee4: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 00680eee: mov dword ptr [ecx + 0x190], 0 */ W32((u32)(r_ecx+0x190u), 0x0u);
    /* 00680ef8: ret 4 */ FN_RET(0x00680ed0); r_esp += 8; return;
}

void f_00680efc(void) /* sub_680EFC */
{
    FN_ENTER(0x00680efc);
    /* 00680efc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680efd: mov ebp, esp */ r_ebp = r_esp;
    /* 00680eff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680f01: push 0x8ea654 */ { u32 v = 0x8ea654u; r_esp -= 4; W32(r_esp, v); }
    /* 00680f06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680f0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680f0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00680f14: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680f17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00680f1a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00680f1d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00680f20: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00680f23: mov ebx, dword ptr [ecx + 0x1a4] */ r_ebx = R32((u32)(r_ecx+0x1a4u));
    /* 00680f29: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00680f2c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00680f2f: mov dword ptr [ecx + 0x1a4], ebx */ W32((u32)(r_ecx+0x1a4u), r_ebx);
    /* 00680f35: cmp ebx, 0x32 */ {  u32 a = r_ebx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680f38: je 0x68119d */ if (fZ) goto L_0068119d;
L_00680f3e:; BB(0x00680f3e);
    /* 00680f3e: cmp ebx, 0x64 */ {  u32 a = r_ebx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680f41: je 0x681159 */ if (fZ) goto L_00681159;
L_00680f47:; BB(0x00680f47);
    /* 00680f47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00680f4a: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
L_00680f51:; BB(0x00680f51);
    /* 00680f51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680f54: mov word ptr [ecx + 0x194], ax */ W16((u32)(r_ecx+0x194u), (u16)r_eax);
    /* 00680f5b: call 0x67c7d8 */ r_esp -= 4; W32(r_esp, 0x680f60u); f_0067c7d8();
    /* 00680f60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680f63: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x680f68u); f_007aa094();
    /* 00680f68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680f6b: call 0x67cc34 */ r_esp -= 4; W32(r_esp, 0x680f70u); f_0067cc34();
    /* 00680f70: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680f73: fild dword ptr [ecx + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x1a4u)));
    /* 00680f79: fcom dword ptr [0x93c110] */ fx_compare(ST(0), R_F32((u32)(0x93c110u))); 
    /* 00680f7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00680f81: movzx edx, word ptr [ecx + 0x14c] */ r_edx = (u32)R16((u32)(r_ecx+0x14cu));
    /* 00680f88: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00680f8b: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00680f8e: mov word ptr [ecx + 0x14c], dx */ W16((u32)(r_ecx+0x14cu), (u16)r_edx);
    /* 00680f95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00680f96: je 0x6810ec */ if (fZ) goto L_006810ec;
L_00680f9c:; BB(0x00680f9c);
    /* 00680f9c: fcom dword ptr [0x93c10c] */ fx_compare(ST(0), R_F32((u32)(0x93c10cu))); 
    /* 00680fa2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00680fa4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00680fa5: je 0x68107f */ if (fZ) goto L_0068107f;
L_00680fab:; BB(0x00680fab);
    /* 00680fab: fcom dword ptr [0x93c120] */ fx_compare(ST(0), R_F32((u32)(0x93c120u))); 
    /* 00680fb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00680fb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00680fb4: je 0x68102b */ if (fZ) goto L_0068102b;
L_00680fb6:; BB(0x00680fb6);
    /* 00680fb6: fcom dword ptr [0x93c11c] */ fx_compare(ST(0), R_F32((u32)(0x93c11cu))); 
    /* 00680fbc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00680fbe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00680fbf: je 0x68102b */ if (fZ) goto L_0068102b;
L_00680fc1:; BB(0x00680fc1);
    /* 00680fc1: fcom dword ptr [0x93c108] */ fx_compare(ST(0), R_F32((u32)(0x93c108u))); 
    /* 00680fc7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00680fc9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00680fca: jbe 0x680ff0 */ if ((fC||fZ)) goto L_00680ff0;
L_00680fcc:; BB(0x00680fcc);
    /* 00680fcc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00680fce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680fd1: fld dword ptr [edx + 0x184] */ FPUSH(R_F32((u32)(r_edx+0x184u)));
    /* 00680fd7: fcom dword ptr [0x93c118] */ fx_compare(ST(0), R_F32((u32)(0x93c118u))); 
    /* 00680fdd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00680fdf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00680fe0: jbe 0x680ff0 */ if ((fC||fZ)) goto L_00680ff0;
L_00680fe2:; BB(0x00680fe2);
    /* 00680fe2: fadd dword ptr [0x93c114] */ ST(0) = ST(0) + R_F32((u32)(0x93c114u));
    /* 00680fe8: mov eax, edx */ r_eax = r_edx;
    /* 00680fea: fst dword ptr [eax + 0x184] */ W_F32((u32)(r_eax+0x184u), ST(0));
L_00680ff0:; BB(0x00680ff0);
    /* 00680ff0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00680ff2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00680ff5: mov edx, dword ptr [eax + 0x1a0] */ r_edx = R32((u32)(r_eax+0x1a0u));
    /* 00680ffb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00680ffd: je 0x681014 */ if (fZ) goto L_00681014;
L_00680fff:; BB(0x00680fff);
    /* 00680fff: mov edx, eax */ r_edx = r_eax;
    /* 00681001: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00681003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681005: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681007: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 0068100c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x681011u); f_008144b0();
    /* 00681011: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00681014:; BB(0x00681014);
    /* 00681014: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00681017: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068101a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068101d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00681020: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00681027: mov esp, ebp */ r_esp = r_ebp;
    /* 00681029: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068102a: ret  */ FN_RET(0x00680efc); r_esp += 4; return;
L_0068102b:; BB(0x0068102b);
    /* 0068102b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068102d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681030: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 00681037: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681038: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68103du); f_007b4d18();
    /* 0068103d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068103e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681040: je 0x681060 */ if (fZ) goto L_00681060;
L_00681042:; BB(0x00681042);
    /* 00681042: fld dword ptr [0x93c128] */ FPUSH(R_F32((u32)(0x93c128u)));
    /* 00681048: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068104b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0068104e: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00681051: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00681054: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00681057: fadd dword ptr [ebp - 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0068105a: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0068105d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00681060:; BB(0x00681060);
    /* 00681060: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00681063: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 00681068: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681069: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x68106eu); f_0050b510();
    /* 0068106e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681071: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681074: fild dword ptr [eax + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a4u)));
    /* 0068107a: jmp 0x680fc1 */ goto L_00680fc1;
L_0068107f:; BB(0x0068107f);
    /* 0068107f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00681081: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681084: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 0068108b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068108c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x681091u); f_007b4d18();
    /* 00681091: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00681092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681094: je 0x6810e7 */ if (fZ) goto L_006810e7;
L_00681096:; BB(0x00681096);
    /* 00681096: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00681099: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0068109c: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0068109f: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006810a2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_006810a5:; BB(0x006810a5);
    /* 006810a5: fadd dword ptr [0x93c128] */ ST(0) = ST(0) + R_F32((u32)(0x93c128u));
    /* 006810ab: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 006810ae: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 006810b1: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 006810b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006810b7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6810bcu); f_0050b510();
    /* 006810bc: fld dword ptr [0x93c124] */ FPUSH(R_F32((u32)(0x93c124u)));
    /* 006810c2: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 006810c5: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 006810c8: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 006810cb: push 0x15f */ { u32 v = 0x15fu; r_esp -= 4; W32(r_esp, v); }
    /* 006810d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006810d1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6810d6u); f_0050b510();
    /* 006810d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006810d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006810dc: fild dword ptr [eax + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a4u)));
    /* 006810e2: jmp 0x680fab */ goto L_00680fab;
L_006810e7:; BB(0x006810e7);
    /* 006810e7: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 006810ea: jmp 0x6810a5 */ goto L_006810a5;
L_006810ec:; BB(0x006810ec);
    /* 006810ec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006810ee: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x6810f3u); f_007b51c4();
    /* 006810f3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006810f6: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x6810fbu); f_007b8980();
    /* 006810fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006810fe: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00681104: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00681107: test ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068110d: je 0x681140 */ if (fZ) goto L_00681140;
L_0068110f:; BB(0x0068110f);
    /* 0068110f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00681111:; BB(0x00681111);
    /* 00681111: mov eax, dword ptr [ebx*4 + 0xaad6e0] */ r_eax = R32((u32)(r_ebx*4+0xaad6e0u));
    /* 00681118: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068111a: je 0x681136 */ if (fZ) goto L_00681136;
L_0068111c:; BB(0x0068111c);
    /* 0068111c: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00681120: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681123: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00681125: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681126: push dword ptr [eax + 0x150] */ { u32 v = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068112c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068112d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068112e: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x681133u); f_0067d488();
    /* 00681133: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00681136:; BB(0x00681136);
    /* 00681136: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681139: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068113c: jl 0x681111 */ if ((fS!=fO)) goto L_00681111;
L_0068113e:; BB(0x0068113e);
    /* 0068113e: jmp 0x68114b */ goto L_0068114b;
L_00681140:; BB(0x00681140);
    /* 00681140: fild dword ptr [eax + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a4u)));
    /* 00681146: jmp 0x680f9c */ goto L_00680f9c;
L_0068114b:; BB(0x0068114b);
    /* 0068114b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068114e: fild dword ptr [eax + 0x1a4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1a4u)));
    /* 00681154: jmp 0x680f9c */ goto L_00680f9c;
L_00681159:; BB(0x00681159);
    /* 00681159: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068115c: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00681163: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681166: jne 0x680f51 */ if (!fZ) goto L_00680f51;
L_0068116c:; BB(0x0068116c);
    /* 0068116c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068116f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00681171: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x681176u); f_0067c75c();
    /* 00681176: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681179: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068117b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068117c: mov dword ptr [ecx + 0x1a4], eax */ W32((u32)(r_ecx+0x1a4u), r_eax);
    /* 00681182: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00681189: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x68118eu); f_0067d660();
    /* 0068118e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681191: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00681198: jmp 0x680f51 */ goto L_00680f51;
L_0068119d:; BB(0x0068119d);
    /* 0068119d: mov eax, ecx */ r_eax = r_ecx;
    /* 0068119f: mov edx, dword ptr [eax + 0x1a0] */ r_edx = R32((u32)(r_eax+0x1a0u));
    /* 006811a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006811a7: jne 0x680f3e */ if (!fZ) goto L_00680f3e;
L_006811ad:; BB(0x006811ad);
    /* 006811ad: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 006811b4: mov dword ptr [eax + 0x1a0], 1 */ W32((u32)(r_eax+0x1a0u), 0x1u);
    /* 006811be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006811bf: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6811c4u); f_007b4d18();
    /* 006811c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006811c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006811c7: je 0x6811e7 */ if (fZ) goto L_006811e7;
L_006811c9:; BB(0x006811c9);
    /* 006811c9: fld dword ptr [0x93c12c] */ FPUSH(R_F32((u32)(0x93c12cu)));
    /* 006811cf: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006811d2: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006811d5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006811d8: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006811db: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006811de: fadd dword ptr [ebp - 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb8u));
    /* 006811e1: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 006811e4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
L_006811e7:; BB(0x006811e7);
    /* 006811e7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006811ee: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006811f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6811f8u); f_005caba4();
    /* 006811f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006811f9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006811fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006811fe: je 0x681228 */ if (fZ) goto L_00681228;
L_00681200:; BB(0x00681200);
    /* 00681200: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00681207: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068120e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00681211: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 00681214: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00681216: mov ecx, eax */ r_ecx = r_eax;
    /* 00681218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681219: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068121b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068121c: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x681221u); f_0068327c();
    /* 00681221: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00681228:; BB(0x00681228);
    /* 00681228: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068122f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00681232: mov ebx, dword ptr [eax + 0x1a4] */ r_ebx = R32((u32)(r_eax+0x1a4u));
    /* 00681238: jmp 0x680f3e */ goto L_00680f3e;
}

