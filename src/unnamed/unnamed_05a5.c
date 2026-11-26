#include "protos.h"

void f_005a500c(void) /* sub_5A500C */
{
    FN_ENTER(0x005a500c);
    /* 005a500c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a500f: mov dword ptr [ecx + 0x428], 0 */ W32((u32)(r_ecx+0x428u), 0x0u);
    /* 005a5019: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a501b: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005a501f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a5021: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005a5024: jmp 0x5a5035 */ goto L_005a5035;
L_005a5026:; BB(0x005a5026);
    /* 005a5026: mov eax, dword ptr [ebx + 0x428] */ r_eax = R32((u32)(r_ebx+0x428u));
    /* 005a502c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a502f: mov dword ptr [ebx + 0x428], eax */ W32((u32)(r_ebx+0x428u), r_eax);
L_005a5035:; BB(0x005a5035);
    /* 005a5035: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5038: jge 0x5a515a */ if ((fS==fO)) goto L_005a515a;
L_005a503e:; BB(0x005a503e);
    /* 005a503e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5041: jne 0x5a504d */ if (!fZ) goto L_005a504d;
L_005a5043:; BB(0x005a5043);
    /* 005a5043: mov eax, dword ptr [0xa747e0] */ r_eax = R32((u32)(0xa747e0u));
    /* 005a5048: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005a504b: jmp 0x5a5066 */ goto L_005a5066;
L_005a504d:; BB(0x005a504d);
    /* 005a504d: mov edx, dword ptr [0xa747e0] */ r_edx = R32((u32)(0xa747e0u));
    /* 005a5053: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5056: jne 0x5a505d */ if (!fZ) goto L_005a505d;
L_005a5058:; BB(0x005a5058);
    /* 005a5058: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005a505b: jmp 0x5a5066 */ goto L_005a5066;
L_005a505d:; BB(0x005a505d);
    /* 005a505d: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 005a5063: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
L_005a5066:; BB(0x005a5066);
    /* 005a5066: mov dword ptr [ebx + 0x31c], eax */ W32((u32)(r_ebx+0x31cu), r_eax);
    /* 005a506c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a506e: call 0x777904 */ r_esp -= 4; W32(r_esp, 0x5a5073u); f_00777904();
    /* 005a5073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5075: je 0x5a5026 */ if (fZ) goto L_005a5026;
L_005a5077:; BB(0x005a5077);
    /* 005a5077: mov eax, dword ptr [ebx + 0x428] */ r_eax = R32((u32)(r_ebx+0x428u));
    /* 005a507d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5080: jne 0x5a50df */ if (!fZ) goto L_005a50df;
L_005a5082:; BB(0x005a5082);
    /* 005a5082: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 005a5088: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a508b: jne 0x5a50db */ if (!fZ) goto L_005a50db;
L_005a508d:; BB(0x005a508d);
    /* 005a508d: mov eax, dword ptr [0xa747d8] */ r_eax = R32((u32)(0xa747d8u));
    /* 005a5092: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005a5095: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5098: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005a509a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a509c: call dword ptr [esi + 0x44] */ { u32 t = R32((u32)(r_esi+0x44u)); r_esp -= 4; W32(r_esp, 0x5a509fu); call_ind(t); }
    /* 005a509f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a50a1: je 0x5a50db */ if (fZ) goto L_005a50db;
L_005a50a3:; BB(0x005a50a3);
    /* 005a50a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a50a5: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a50aau); f_00770738();
    /* 005a50aa: mov esi, eax */ r_esi = r_eax;
    /* 005a50ac: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a50ae: je 0x5a50db */ if (fZ) goto L_005a50db;
L_005a50b0:; BB(0x005a50b0);
    /* 005a50b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a50b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a50b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a50b5: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5a50bau); f_00771458();
    /* 005a50ba: fcomp dword ptr [0x92a1a0] */ fx_compare(ST(0), R_F32((u32)(0x92a1a0u))); FPOP();
    /* 005a50c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a50c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a50c3: jb 0x5a50db */ if (fC) goto L_005a50db;
L_005a50c5:; BB(0x005a50c5);
    /* 005a50c5: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a50c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a50c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a50cb: call 0x5a5168 */ r_esp -= 4; W32(r_esp, 0x5a50d0u); f_005a5168();
    /* 005a50d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a50d2: je 0x5a50db */ if (fZ) goto L_005a50db;
L_005a50d4:; BB(0x005a50d4);
    /* 005a50d4: mov eax, 1 */ r_eax = 0x1u;
    /* 005a50d9: jmp 0x5a5138 */ goto L_005a5138;
L_005a50db:; BB(0x005a50db);
    /* 005a50db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a50dd: jmp 0x5a5138 */ goto L_005a5138;
L_005a50df:; BB(0x005a50df);
    /* 005a50df: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a50e2: jne 0x5a5141 */ if (!fZ) goto L_005a5141;
L_005a50e4:; BB(0x005a50e4);
    /* 005a50e4: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 005a50ea: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a50ed: jne 0x5a5136 */ if (!fZ) goto L_005a5136;
L_005a50ef:; BB(0x005a50ef);
    /* 005a50ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a50f1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a50f6u); f_007751b0();
    /* 005a50f6: fld dword ptr [0x92a19c] */ FPUSH(R_F32((u32)(0x92a19cu)));
    /* 005a50fc: fadd dword ptr [ebx + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x364u));
    /* 005a5102: fmul dword ptr [0x92a1a8] */ ST(0) = ST(0) * R_F32((u32)(0x92a1a8u));
    /* 005a5108: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a510a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a510c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a510d: jbe 0x5a5136 */ if ((fC||fZ)) goto L_005a5136;
L_005a510f:; BB(0x005a510f);
    /* 005a510f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a5111: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a5116u); f_00770738();
    /* 005a5116: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5118: je 0x5a5136 */ if (fZ) goto L_005a5136;
L_005a511a:; BB(0x005a511a);
    /* 005a511a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a511c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a511d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a511f: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5a5124u); f_00771458();
    /* 005a5124: fcomp dword ptr [0x92a1a4] */ fx_compare(ST(0), R_F32((u32)(0x92a1a4u))); FPOP();
    /* 005a512a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a512c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a512d: jb 0x5a5136 */ if (fC) goto L_005a5136;
L_005a512f:; BB(0x005a512f);
    /* 005a512f: mov eax, 1 */ r_eax = 0x1u;
    /* 005a5134: jmp 0x5a5138 */ goto L_005a5138;
L_005a5136:; BB(0x005a5136);
    /* 005a5136: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a5138:; BB(0x005a5138);
    /* 005a5138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a513a: jne 0x5a5151 */ if (!fZ) goto L_005a5151;
L_005a513c:; BB(0x005a513c);
    /* 005a513c: jmp 0x5a5026 */ goto L_005a5026;
L_005a5141:; BB(0x005a5141);
    /* 005a5141: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005a5145: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005a5148:; BB(0x005a5148);
    /* 005a5148: mov eax, 1 */ r_eax = 0x1u;
    /* 005a514d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a5150: ret  */ FN_RET(0x005a500c); r_esp += 4; return;
L_005a5151:; BB(0x005a5151);
    /* 005a5151: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005a5155: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005a5158: jmp 0x5a5148 */ goto L_005a5148;
L_005a515a:; BB(0x005a515a);
    /* 005a515a: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005a515e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005a5161: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a5163: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a5166: ret  */ FN_RET(0x005a500c); r_esp += 4; return;
}

void f_005a5168(void) /* sub_5A5168 */
{
    FN_ENTER(0x005a5168);
    /* 005a5168: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a5169: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a516a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a516c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005a5170: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5172: je 0x5a5194 */ if (fZ) goto L_005a5194;
L_005a5174:; BB(0x005a5174);
    /* 005a5174: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5177: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a5179: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5a517eu); f_007b4c58();
    /* 005a517e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5180: je 0x5a5194 */ if (fZ) goto L_005a5194;
L_005a5182:; BB(0x005a5182);
    /* 005a5182: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5187: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5188: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x5a518du); f_00780630();
    /* 005a518d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5190: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5192: je 0x5a519b */ if (fZ) goto L_005a519b;
L_005a5194:; BB(0x005a5194);
    /* 005a5194: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a5196: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a5197: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a5198: ret 4 */ FN_RET(0x005a5168); r_esp += 8; return;
L_005a519b:; BB(0x005a519b);
    /* 005a519b: push 0x8fe0 */ { u32 v = 0x8fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a51a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a51a1: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a51a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a51a8: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5a51adu); f_0077fffc();
    /* 005a51ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a51b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a51b2: jne 0x5a5194 */ if (!fZ) goto L_005a5194;
L_005a51b4:; BB(0x005a51b4);
    /* 005a51b4: mov eax, 1 */ r_eax = 0x1u;
    /* 005a51b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a51ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a51bb: ret 4 */ FN_RET(0x005a5168); r_esp += 8; return;
}

void f_005a51c0(void) /* sub_5A51C0 */
{
    FN_ENTER(0x005a51c0);
    /* 005a51c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a51c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a51c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a51c5: call 0x52be48 */ r_esp -= 4; W32(r_esp, 0x5a51cau); f_0052be48();
    /* 005a51ca: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005a51d1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a51d4: je 0x5a51d8 */ if (fZ) goto L_005a51d8;
L_005a51d6:; BB(0x005a51d6);
    /* 005a51d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a51d7: ret  */ FN_RET(0x005a51c0); r_esp += 4; return;
L_005a51d8:; BB(0x005a51d8);
    /* 005a51d8: mov eax, dword ptr [ebx + 0x428] */ r_eax = R32((u32)(r_ebx+0x428u));
    /* 005a51de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a51e0: jle 0x5a51d6 */ if ((fZ||fS!=fO)) goto L_005a51d6;
L_005a51e2:; BB(0x005a51e2);
    /* 005a51e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a51e5: jg 0x5a51d6 */ if ((!fZ&&fS==fO)) goto L_005a51d6;
L_005a51e7:; BB(0x005a51e7);
    /* 005a51e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a51e9: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 005a51f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a51f1: ret  */ FN_RET(0x005a51c0); r_esp += 4; return;
}

void f_005a51f4(void) /* sub_5A51F4 */
{
    FN_ENTER(0x005a51f4);
    /* 005a51f4: mov eax, dword ptr [ecx + 0x428] */ r_eax = R32((u32)(r_ecx+0x428u));
    /* 005a51fa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a51fd: jne 0x5a5205 */ if (!fZ) goto L_005a5205;
L_005a51ff:; BB(0x005a51ff);
    /* 005a51ff: call 0x5a53f4 */ r_esp -= 4; W32(r_esp, 0x5a5204u); f_005a53f4();
    /* 005a5204: ret  */ FN_RET(0x005a51f4); r_esp += 4; return;
L_005a5205:; BB(0x005a5205);
    /* 005a5205: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5208: jne 0x5a5210 */ if (!fZ) goto L_005a5210;
L_005a520a:; BB(0x005a520a);
    /* 005a520a: call 0x5a5218 */ r_esp -= 4; W32(r_esp, 0x5a520fu); f_005a5218();
    /* 005a520f: ret  */ FN_RET(0x005a51f4); r_esp += 4; return;
L_005a5210:; BB(0x005a5210);
    /* 005a5210: call 0x52b5f0 */ r_esp -= 4; W32(r_esp, 0x5a5215u); f_0052b5f0();
    /* 005a5215: ret  */ FN_RET(0x005a51f4); r_esp += 4; return;
}

void f_005a5218(void) /* sub_5A5218 */
{
    FN_ENTER(0x005a5218);
    /* 005a5218: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a5219: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a521a: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a521d: mov edi, ecx */ r_edi = r_ecx;
    /* 005a521f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a5221: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a5226u); f_00770738();
    /* 005a5226: mov ebp, eax */ r_ebp = r_eax;
    /* 005a5228: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 005a522f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5231: je 0x5a5263 */ if (fZ) goto L_005a5263;
L_005a5233:; BB(0x005a5233);
    /* 005a5233: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5236: je 0x5a52a2 */ if (fZ) goto L_005a52a2;
L_005a5238:; BB(0x005a5238);
    /* 005a5238: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a523b: jne 0x5a53a2 */ if (!fZ) goto L_005a53a2;
L_005a5241:; BB(0x005a5241);
    /* 005a5241: movsx edx, word ptr [edi + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 005a5248: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a524b: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005a524e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005a5250: jl 0x5a53a8 */ if ((fS!=fO)) goto L_005a53a8;
L_005a5256:; BB(0x005a5256);
    /* 005a5256: mov word ptr [edi + 0x344], dx */ W16((u32)(r_edi+0x344u), (u16)r_edx);
    /* 005a525d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a5260: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a5261: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a5262: ret  */ FN_RET(0x005a5218); r_esp += 4; return;
L_005a5263:; BB(0x005a5263);
    /* 005a5263: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 005a5269: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a526c: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a526f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a5271: call 0x77a07c */ r_esp -= 4; W32(r_esp, 0x5a5276u); f_0077a07c();
    /* 005a5276: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5278: mov ecx, edi */ r_ecx = r_edi;
    /* 005a527a: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5a527fu); f_00772358();
    /* 005a527f: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5284: jge 0x5a5396 */ if ((fS==fO)) goto L_005a5396;
L_005a528a:; BB(0x005a528a);
    /* 005a528a: mov edx, 1 */ r_edx = 0x1u;
    /* 005a528f: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 005a5296: mov edx, 0xa */ r_edx = 0xau;
    /* 005a529b: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
L_005a52a2:; BB(0x005a52a2);
    /* 005a52a2: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a52a7: mov ecx, edi */ r_ecx = r_edi;
    /* 005a52a9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a52aeu); f_007aaa30();
    /* 005a52ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a52b0: je 0x5a5336 */ if (fZ) goto L_005a5336;
L_005a52b6:; BB(0x005a52b6);
    /* 005a52b6: mov dword ptr [esp], 0xc1400000 */ W32((u32)(r_esp), 0xc1400000u);
    /* 005a52bd: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005a52c2: mov dword ptr [esp + 4], 0x40a00000 */ W32((u32)(r_esp+0x4u), 0x40a00000u);
    /* 005a52ca: mov dword ptr [esp + 8], 0x41f00000 */ W32((u32)(r_esp+0x8u), 0x41f00000u);
    /* 005a52d2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5a52d7u); f_0082d990();
    /* 005a52d7: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a52da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a52dc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a52e1u); f_0082d8bc();
    /* 005a52e1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a52e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a52e5: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005a52e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a52eb: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5a52f0u); f_0082eab8();
    /* 005a52f0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005a52f5: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5a52fau); f_0082eb80();
    /* 005a52fa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005a52fd: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005a5303: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5a5308u); f_0082ebac();
    /* 005a5308: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a530a: je 0x5a53cc */ if (fZ) goto L_005a53cc;
L_005a5310:; BB(0x005a5310);
    /* 005a5310: mov edx, dword ptr [0xa747d8] */ r_edx = R32((u32)(0xa747d8u));
    /* 005a5316: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 005a531c: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 005a531f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a5322: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a5328: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a532b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a532c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a532d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a532e: call 0x6e3408 */ r_esp -= 4; W32(r_esp, 0x5a5333u); f_006e3408();
    /* 005a5333: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a5336:; BB(0x005a5336);
    /* 005a5336: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 005a533c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a533f: je 0x5a53a2 */ if (fZ) goto L_005a53a2;
L_005a5341:; BB(0x005a5341);
    /* 005a5341: mov eax, dword ptr [0xa747d8] */ r_eax = R32((u32)(0xa747d8u));
    /* 005a5346: mov edx, 2 */ r_edx = 0x2u;
    /* 005a534b: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 005a5352: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 005a5358: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005a535a: mov word ptr [edi + 0xb8], bp */ W16((u32)(r_edi+0xb8u), (u16)r_ebp);
    /* 005a5361: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005a5364: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005a5367: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005a536b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005a5370: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a5375: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005a5379: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005a537d: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005a5381: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005a5385: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005a5389: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 005a5390: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a5393: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a5394: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a5395: ret  */ FN_RET(0x005a5218); r_esp += 4; return;
L_005a5396:; BB(0x005a5396);
    /* 005a5396: mov eax, 2 */ r_eax = 0x2u;
    /* 005a539b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_005a53a2:; BB(0x005a53a2);
    /* 005a53a2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a53a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a53a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a53a7: ret  */ FN_RET(0x005a5218); r_esp += 4; return;
L_005a53a8:; BB(0x005a53a8);
    /* 005a53a8: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005a53ab: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 005a53ad: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a53b2: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005a53b5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a53b7: mov word ptr [edi + 0x344], dx */ W16((u32)(r_edi+0x344u), (u16)r_edx);
    /* 005a53be: mov ecx, edi */ r_ecx = r_edi;
    /* 005a53c0: call dword ptr [ebp + 0x19c] */ { u32 t = R32((u32)(r_ebp+0x19cu)); r_esp -= 4; W32(r_esp, 0x5a53c6u); call_ind(t); }
    /* 005a53c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a53c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a53ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a53cb: ret  */ FN_RET(0x005a5218); r_esp += 4; return;
L_005a53cc:; BB(0x005a53cc);
    /* 005a53cc: mov eax, dword ptr [0xa747d8] */ r_eax = R32((u32)(0xa747d8u));
    /* 005a53d1: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 005a53d7: mov ebp, dword ptr [eax + edx*4] */ r_ebp = R32((u32)(r_eax+r_edx*4));
    /* 005a53da: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a53dd: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a53e0: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a53e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a53e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a53e5: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5a53eau); f_006e2f20();
    /* 005a53ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a53ed: jmp 0x5a5336 */ goto L_005a5336;
}

void f_005a5345(void)
{
    FN_ENTER(0x005a5345);
    /* 005a5345: add byte ptr [edx + 2], bh */ { u32 ad = (u32)(r_edx+0x2u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a534b: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 005a5352: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 005a5358: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005a535a: mov word ptr [edi + 0xb8], bp */ W16((u32)(r_edi+0xb8u), (u16)r_ebp);
    /* 005a5361: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005a5364: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005a5367: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005a536b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005a5370: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a5375: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005a5379: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005a537d: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005a5381: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005a5385: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005a5389: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 005a5390: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a5393: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a5394: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a5395: ret  */ FN_RET(0x005a5345); r_esp += 4; return;
}

void f_005a53f4(void) /* sub_5A53F4 */
{
    FN_ENTER(0x005a53f4);
    /* 005a53f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a53f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a53f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a53f7: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a53fa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a53fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a53fe: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a5403u); f_00770738();
    /* 005a5403: mov edi, eax */ r_edi = r_eax;
    /* 005a5405: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5407: je 0x5a558f */ if (fZ) goto L_005a558f;
L_005a540d:; BB(0x005a540d);
    /* 005a540d: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 005a5414: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5416: je 0x5a55ea */ if (fZ) goto L_005a55ea;
L_005a541c:; BB(0x005a541c);
    /* 005a541c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a541f: jne 0x5a55ae */ if (!fZ) goto L_005a55ae;
L_005a5425:; BB(0x005a5425);
    /* 005a5425: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a5427: call 0x5a56dc */ r_esp -= 4; W32(r_esp, 0x5a542cu); f_005a56dc();
    /* 005a542c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a542f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5430: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a5432: call 0x5a5728 */ r_esp -= 4; W32(r_esp, 0x5a5437u); f_005a5728();
    /* 005a5437: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a543a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a543b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a543d: call 0x5a5168 */ r_esp -= 4; W32(r_esp, 0x5a5442u); f_005a5168();
    /* 005a5442: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5444: je 0x5a558f */ if (fZ) goto L_005a558f;
L_005a544a:; BB(0x005a544a);
    /* 005a544a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005a544d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a544f: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5a5452u); call_ind(t); }
    /* 005a5452: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5454: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x5a5459u); f_007b51c4();
    /* 005a5459: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a545b: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5a5460u); f_007b6894();
    /* 005a5460: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a5462: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5a5467u); f_007b798c();
    /* 005a5467: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 005a546d: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 005a5470: test edx, 0x180000 */ {  u32 a = r_edx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5476: je 0x5a54f4 */ if (fZ) goto L_005a54f4;
L_005a5478:; BB(0x005a5478);
    /* 005a5478: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 005a547c: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 005a5480: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005a5485: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a5487: mov edi, eax */ r_edi = r_eax;
L_005a5489:; BB(0x005a5489);
    /* 005a5489: mov esi, dword ptr [edi + 0xaad6e0] */ r_esi = R32((u32)(r_edi+0xaad6e0u));
    /* 005a548f: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a5492: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5494: je 0x5a5681 */ if (fZ) goto L_005a5681;
L_005a549a:; BB(0x005a549a);
    /* 005a549a: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005a549d: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a54a0: jne 0x5a54ae */ if (!fZ) goto L_005a54ae;
L_005a54a2:; BB(0x005a54a2);
    /* 005a54a2: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 005a54a6: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a54ac: jge 0x5a54e7 */ if ((fS==fO)) goto L_005a54e7;
L_005a54ae:; BB(0x005a54ae);
    /* 005a54ae: movzx edx, word ptr [esi + 0x96] */ r_edx = (u32)R16((u32)(r_esi+0x96u));
    /* 005a54b5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a54b8: jne 0x5a54e7 */ if (!fZ) goto L_005a54e7;
L_005a54ba:; BB(0x005a54ba);
    /* 005a54ba: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a54bf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a54c0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005a54c2: mov ecx, esi */ r_ecx = r_esi;
    /* 005a54c4: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5a54c7u); call_ind(t); }
    /* 005a54c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a54c9: je 0x5a54e7 */ if (fZ) goto L_005a54e7;
L_005a54cb:; BB(0x005a54cb);
    /* 005a54cb: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a54d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a54d1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005a54d3: mov ecx, esi */ r_ecx = r_esi;
    /* 005a54d5: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5a54d8u); call_ind(t); }
    /* 005a54d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a54da: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a54df: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a54e0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005a54e2: mov ecx, esi */ r_ecx = r_esi;
    /* 005a54e4: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x5a54e7u); call_ind(t); }
L_005a54e7:; BB(0x005a54e7);
    /* 005a54e7: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a54ea: jl 0x5a5489 */ if ((fS!=fO)) goto L_005a5489;
L_005a54ec:; BB(0x005a54ec);
    /* 005a54ec: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005a54f0: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
L_005a54f4:; BB(0x005a54f4);
    /* 005a54f4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a54f6: je 0x5a5523 */ if (fZ) goto L_005a5523;
L_005a54f8:; BB(0x005a54f8);
    /* 005a54f8: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a54fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a54fe: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 005a5501: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 005a5504: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a550a: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 005a550d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a550f: call dword ptr [ebx + 0x68] */ { u32 t = R32((u32)(r_ebx+0x68u)); r_esp -= 4; W32(r_esp, 0x5a5512u); call_ind(t); }
    /* 005a5512: mov eax, 6 */ r_eax = 0x6u;
    /* 005a5517: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005a551e: jmp 0x5a567a */ goto L_005a567a;
L_005a5523:; BB(0x005a5523);
    /* 005a5523: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5525: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a5527: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x5a552cu); f_00772358();
    /* 005a552c: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5531: jg 0x5a5540 */ if ((!fZ&&fS==fO)) goto L_005a5540;
L_005a5533:; BB(0x005a5533);
    /* 005a5533: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5535: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a5537: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 005a553e: jmp 0x5a5575 */ goto L_005a5575;
L_005a5540:; BB(0x005a5540);
    /* 005a5540: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a5543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5544: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a5546: call 0x5a5728 */ r_esp -= 4; W32(r_esp, 0x5a554bu); f_005a5728();
    /* 005a554b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a554d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5551: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a5553: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5557: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a555b: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5a5560u); f_00771c8c();
    /* 005a5560: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5562: je 0x5a558f */ if (fZ) goto L_005a558f;
L_005a5564:; BB(0x005a5564);
    /* 005a5564: movsx ebx, word ptr [ebp + 0x344] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 005a556b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a556e: mov word ptr [ebp + 0x344], bx */ W16((u32)(r_ebp+0x344u), (u16)r_ebx);
L_005a5575:; BB(0x005a5575);
    /* 005a5575: mov eax, dword ptr [0xa747d8] */ r_eax = R32((u32)(0xa747d8u));
    /* 005a557a: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 005a5580: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 005a5583: movsx ebx, bx */ r_ebx = (u32)(i32)(i16)(u16)r_ebx;
    /* 005a5586: cmp ebx, dword ptr [edi + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5589: jl 0x5a567a */ if ((fS!=fO)) goto L_005a567a;
L_005a558f:; BB(0x005a558f);
    /* 005a558f: mov eax, 2 */ r_eax = 0x2u;
    /* 005a5594: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005a559b: mov edx, 1 */ r_edx = 0x1u;
    /* 005a55a0: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005a55a7: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a55aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a55ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a55ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a55ad: ret  */ FN_RET(0x005a53f4); r_esp += 4; return;
L_005a55ae:; BB(0x005a55ae);
    /* 005a55ae: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a55b1: jne 0x5a567a */ if (!fZ) goto L_005a567a;
L_005a55b7:; BB(0x005a55b7);
    /* 005a55b7: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 005a55bd: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a55c0: je 0x5a567a */ if (fZ) goto L_005a567a;
L_005a55c6:; BB(0x005a55c6);
    /* 005a55c6: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005a55c9: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 005a55cc: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a55d1: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005a55d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a55d6: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 005a55dd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a55df: call dword ptr [ebx + 0x19c] */ { u32 t = R32((u32)(r_ebx+0x19cu)); r_esp -= 4; W32(r_esp, 0x5a55e5u); call_ind(t); }
    /* 005a55e5: jmp 0x5a567a */ goto L_005a567a;
L_005a55ea:; BB(0x005a55ea);
    /* 005a55ea: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 005a55f1: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a55f4: je 0x5a56ce */ if (fZ) goto L_005a56ce;
L_005a55fa:; BB(0x005a55fa);
    /* 005a55fa: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a55fd: je 0x5a568e */ if (fZ) goto L_005a568e;
L_005a5603:; BB(0x005a5603);
    /* 005a5603: mov edx, 2 */ r_edx = 0x2u;
    /* 005a5608: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005a560f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a5611: call 0x77070c */ r_esp -= 4; W32(r_esp, 0x5a5616u); f_0077070c();
    /* 005a5616: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a5619: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a561a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a561b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a561d: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5a5622u); f_00771458();
    /* 005a5622: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a5624: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005a5627: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005a562b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a562d: fmul qword ptr [0x92a0f8] */ ST(0) = ST(0) * R_F64((u32)(0x92a0f8u));
    /* 005a5633: fdiv qword ptr [0x92a0f0] */ ST(0) = ST(0) / R_F64((u32)(0x92a0f0u));
    /* 005a5639: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005a563d: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005a5642: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a5647: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005a564b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005a564f: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005a5653: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005a5657: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005a565b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a565c: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a565f: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5a5664u); f_007a9018();
    /* 005a5664: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5667: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a566c: jg 0x5a567a */ if ((!fZ&&fS==fO)) goto L_005a567a;
L_005a566e:; BB(0x005a566e);
    /* 005a566e: mov eax, 0xd */ r_eax = 0xdu;
    /* 005a5673: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_005a567a:; BB(0x005a567a);
    /* 005a567a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a567d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a567e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a567f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a5680: ret  */ FN_RET(0x005a53f4); r_esp += 4; return;
L_005a5681:; BB(0x005a5681);
    /* 005a5681: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005a5685: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 005a5689: jmp 0x5a54f4 */ goto L_005a54f4;
L_005a568e:; BB(0x005a568e);
    /* 005a568e: mov ebx, dword ptr [0xa747d8] */ r_ebx = R32((u32)(0xa747d8u));
    /* 005a5694: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5697: mov edi, dword ptr [ebp + 0x33c] */ r_edi = R32((u32)(r_ebp+0x33cu));
    /* 005a569d: mov eax, 1 */ r_eax = 0x1u;
    /* 005a56a2: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005a56a9: mov edx, 0xc */ r_edx = 0xcu;
    /* 005a56ae: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005a56b5: mov eax, dword ptr [ebx + edi*4] */ r_eax = R32((u32)(r_ebx+r_edi*4));
    /* 005a56b8: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a56bb: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005a56be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a56c0: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x5a56c3u); call_ind(t); }
    /* 005a56c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a56c5: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 005a56cc: jmp 0x5a567a */ goto L_005a567a;
L_005a56ce:; BB(0x005a56ce);
    /* 005a56ce: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 005a56d4: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a56d7: je 0x5a567a */ if (fZ) goto L_005a567a;
L_005a56d9:; BB(0x005a56d9);
    /* 005a56d9: jmp 0x5a568e */ goto L_005a568e;
}

void f_005a56dc(void) /* sub_5A56DC */
{
    FN_ENTER(0x005a56dc);
    /* 005a56dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a56dd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a56df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a56e1: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a56e6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a56ebu); f_007aaa30();
    /* 005a56eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a56ed: jne 0x5a56ff */ if (!fZ) goto L_005a56ff;
L_005a56ef:; BB(0x005a56ef);
    /* 005a56ef: push 0x41500000 */ { u32 v = 0x41500000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a56f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a56f6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a56fbu); f_007aaa30();
    /* 005a56fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a56fd: je 0x5a5725 */ if (fZ) goto L_005a5725;
L_005a56ff:; BB(0x005a56ff);
    /* 005a56ff: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a5704u); f_00807ac0();
    /* 005a5704: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a5707: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a5709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a570a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a570b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a570c: push dword ptr [eax*4 + 0x9c0680] */ { u32 v = R32((u32)(r_eax*4+0x9c0680u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5713: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a5718u); f_00814298();
    /* 005a5718: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a571d: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a5722u); f_00814680();
    /* 005a5722: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005a5725:; BB(0x005a5725);
    /* 005a5725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a5726: ret  */ FN_RET(0x005a56dc); r_esp += 4; return;
}

void f_005a5728(void) /* sub_5A5728 */
{
    FN_ENTER(0x005a5728);
    /* 005a5728: mov eax, ecx */ r_eax = r_ecx;
    /* 005a572a: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005a572e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a5730: je 0x5a5756 */ if (fZ) goto L_005a5756;
L_005a5732:; BB(0x005a5732);
    /* 005a5732: mov edx, dword ptr [eax + 0x30c] */ r_edx = R32((u32)(r_eax+0x30cu));
    /* 005a5738: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005a573a: mov edx, dword ptr [eax + 0x310] */ r_edx = R32((u32)(r_eax+0x310u));
    /* 005a5740: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005a5743: mov edx, dword ptr [eax + 0x314] */ r_edx = R32((u32)(r_eax+0x314u));
    /* 005a5749: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005a574c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a574f: mov edx, eax */ r_edx = r_eax;
    /* 005a5751: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5a5756u); f_0082ebac();
L_005a5756:; BB(0x005a5756);
    /* 005a5756: ret 4 */ FN_RET(0x005a5728); r_esp += 8; return;
}

void f_005a575c(void) /* sub_5A575C */
{
    FN_ENTER(0x005a575c);
    /* 005a575c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a575d: mov esi, ecx */ r_esi = r_ecx;
    /* 005a575f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a5761: call 0x5a5780 */ r_esp -= 4; W32(r_esp, 0x5a5766u); f_005a5780();
    /* 005a5766: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5768: je 0x5a5777 */ if (fZ) goto L_005a5777;
L_005a576a:; BB(0x005a576a);
    /* 005a576a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a576d: and eax, 0xfffff9ff */ {  u32 a = r_eax; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a5772: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a5775: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a5776: ret  */ FN_RET(0x005a575c); r_esp += 4; return;
L_005a5777:; BB(0x005a5777);
    /* 005a5777: mov ecx, esi */ r_ecx = r_esi;
    /* 005a5779: call 0x52bc44 */ r_esp -= 4; W32(r_esp, 0x5a577eu); f_0052bc44();
    /* 005a577e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a577f: ret  */ FN_RET(0x005a575c); r_esp += 4; return;
}

void f_005a5780(void) /* sub_5A5780 */
{
    FN_ENTER(0x005a5780);
    /* 005a5780: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a5781: mov edi, ecx */ r_edi = r_ecx;
    /* 005a5783: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5a5788u); f_00520e6c();
    /* 005a5788: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a578a: je 0x5a579f */ if (fZ) goto L_005a579f;
L_005a578c:; BB(0x005a578c);
    /* 005a578c: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005a5793: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a5796: jne 0x5a579f */ if (!fZ) goto L_005a579f;
L_005a5798:; BB(0x005a5798);
    /* 005a5798: mov eax, 1 */ r_eax = 0x1u;
    /* 005a579d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a579e: ret  */ FN_RET(0x005a5780); r_esp += 4; return;
L_005a579f:; BB(0x005a579f);
    /* 005a579f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a57a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a57a2: ret  */ FN_RET(0x005a5780); r_esp += 4; return;
}

void f_005a57a4(void) /* sub_5A57A4 */
{
    FN_ENTER(0x005a57a4);
    /* 005a57a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a57a5: mov edi, ecx */ r_edi = r_ecx;
    /* 005a57a7: mov ecx, edi */ r_ecx = r_edi;
    /* 005a57a9: call 0x5a5780 */ r_esp -= 4; W32(r_esp, 0x5a57aeu); f_005a5780();
    /* 005a57ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a57b0: je 0x5a57b6 */ if (fZ) goto L_005a57b6;
L_005a57b2:; BB(0x005a57b2);
    /* 005a57b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a57b3: ret 8 */ FN_RET(0x005a57a4); r_esp += 12; return;
L_005a57b6:; BB(0x005a57b6);
    /* 005a57b6: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a57ba: mov ecx, edi */ r_ecx = r_edi;
    /* 005a57bc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a57c0: call 0x7774a0 */ r_esp -= 4; W32(r_esp, 0x5a57c5u); f_007774a0();
    /* 005a57c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a57c6: ret 8 */ FN_RET(0x005a57a4); r_esp += 12; return;
}

void f_005a57cc(void) /* sub_5A57CC */
{
    FN_ENTER(0x005a57cc);
    /* 005a57cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a57cd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a57cf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a57d1: call 0x52b888 */ r_esp -= 4; W32(r_esp, 0x5a57d6u); f_0052b888();
    /* 005a57d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a57d8: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a57ddu); f_00770738();
    /* 005a57dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a57de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a57e0: call 0x786598 */ r_esp -= 4; W32(r_esp, 0x5a57e5u); f_00786598();
    /* 005a57e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a57e7: jne 0x5a57f0 */ if (!fZ) goto L_005a57f0;
L_005a57e9:; BB(0x005a57e9);
    /* 005a57e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a57eb: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5a57f0u); f_007865cc();
L_005a57f0:; BB(0x005a57f0);
    /* 005a57f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a57f1: ret  */ FN_RET(0x005a57cc); r_esp += 4; return;
}

void f_005a57f4(void) /* sub_5A57F4 */
{
    FN_ENTER(0x005a57f4);
    /* 005a57f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a57f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a57f7: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 005a57fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5801: jne 0x5a5843 */ if (!fZ) goto L_005a5843;
L_005a5803:; BB(0x005a5803);
    /* 005a5803: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 005a5809: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a580c: je 0x5a586d */ if (fZ) goto L_005a586d;
L_005a580e:; BB(0x005a580e);
    /* 005a580e: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5813: mov eax, 2 */ r_eax = 0x2u;
    /* 005a5818: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 005a581f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a5821: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5822: mov dword ptr [ebx + 0x398], edx */ W32((u32)(r_ebx+0x398u), r_edx);
    /* 005a5828: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 005a582f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a5831: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5a5836u); f_007b52ec();
    /* 005a5836: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005a5839: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a583e: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005a5841: jmp 0x5a586d */ goto L_005a586d;
L_005a5843:; BB(0x005a5843);
    /* 005a5843: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5846: jne 0x5a5856 */ if (!fZ) goto L_005a5856;
L_005a5848:; BB(0x005a5848);
    /* 005a5848: mov eax, 1 */ r_eax = 0x1u;
    /* 005a584d: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 005a5854: jmp 0x5a586d */ goto L_005a586d;
L_005a5856:; BB(0x005a5856);
    /* 005a5856: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 005a585c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a585f: je 0x5a5876 */ if (fZ) goto L_005a5876;
L_005a5861:; BB(0x005a5861);
    /* 005a5861: mov eax, 2 */ r_eax = 0x2u;
    /* 005a5866: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
L_005a586d:; BB(0x005a586d);
    /* 005a586d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a586f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a5874u); f_007aa094();
    /* 005a5874: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a5875: ret  */ FN_RET(0x005a57f4); r_esp += 4; return;
L_005a5876:; BB(0x005a5876);
    /* 005a5876: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a587b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a587d: mov eax, 1 */ r_eax = 0x1u;
    /* 005a5882: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 005a5889: mov edx, 0xb */ r_edx = 0xbu;
    /* 005a588e: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 005a5895: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a5897: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5a589cu); f_007b52c4();
    /* 005a589c: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005a589f: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a58a4: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005a58a7: jmp 0x5a586d */ goto L_005a586d;
}

void f_005a58ac(void) /* sub_5A58AC */
{
    FN_ENTER(0x005a58ac);
    /* 005a58ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a58ad: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a58b0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a58b2: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 005a58b8: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005a58bb: fmul dword ptr [0x92a158] */ ST(0) = ST(0) * R_F32((u32)(0x92a158u));
    /* 005a58c1: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005a58c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005a58cc: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 005a58d4: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005a58d9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5a58deu); f_0082d990();
    /* 005a58de: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005a58e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a58e3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a58e8u); f_0082d8bc();
    /* 005a58e8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a58eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a58ec: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005a58f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a58f2: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5a58f7u); f_0082eab8();
    /* 005a58f7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a58fcu); f_0082da80();
    /* 005a58fc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005a58ff: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a5902: mov edx, ebp */ r_edx = r_ebp;
    /* 005a5904: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5a5909u); f_0082ebac();
    /* 005a5909: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a590c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005a590e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a590f: call 0x578778 */ r_esp -= 4; W32(r_esp, 0x5a5914u); f_00578778();
    /* 005a5914: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005a5918: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a591a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a591b: call 0x5782f8 */ r_esp -= 4; W32(r_esp, 0x5a5920u); f_005782f8();
    /* 005a5920: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a5923: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a5924: ret  */ FN_RET(0x005a58ac); r_esp += 4; return;
}

void f_005a5928(void) /* sub_5A5928 */
{
    FN_ENTER(0x005a5928);
    /* 005a5928: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5929: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a592b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a5930u); f_00807ac0();
    /* 005a5930: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5933: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a5935: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5936: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5937: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5938: push dword ptr [eax*4 + 0x9c05f0] */ { u32 v = R32((u32)(r_eax*4+0x9c05f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a593f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a5944u); f_00814298();
    /* 005a5944: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5949: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a594eu); f_00814680();
    /* 005a594e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a5951: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a5952: ret  */ FN_RET(0x005a5928); r_esp += 4; return;
}

void f_005a5954(void) /* sub_5A5954 */
{
    FN_ENTER(0x005a5954);
    /* 005a5954: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5955: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a5957: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a595cu); f_00807ac0();
    /* 005a595c: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a595f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a5961: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5962: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5963: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5964: push dword ptr [eax*4 + 0x9c065c] */ { u32 v = R32((u32)(r_eax*4+0x9c065cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a596b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a5970u); f_00814298();
    /* 005a5970: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5975: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a597au); f_00814680();
    /* 005a597a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a597d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a597e: ret  */ FN_RET(0x005a5954); r_esp += 4; return;
}

void f_005a5980(void) /* sub_5A5980 */
{
    FN_ENTER(0x005a5980);
    /* 005a5980: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5981: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a5983: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a5988u); f_00807ac0();
    /* 005a5988: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a598b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a598d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a598e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a598f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5990: push dword ptr [eax*4 + 0x9c0638] */ { u32 v = R32((u32)(r_eax*4+0x9c0638u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5997: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a599cu); f_00814298();
    /* 005a599c: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a59a1: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a59a6u); f_00814680();
    /* 005a59a6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a59a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a59aa: ret  */ FN_RET(0x005a5980); r_esp += 4; return;
}

void f_005a59ac(void) /* sub_5A59AC */
{
    FN_ENTER(0x005a59ac);
    /* 005a59ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a59ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a59af: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a59b4u); f_00807ac0();
    /* 005a59b4: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a59b7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a59b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a59ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a59bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a59bc: push dword ptr [eax*4 + 0x9c0614] */ { u32 v = R32((u32)(r_eax*4+0x9c0614u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a59c3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a59c8u); f_00814298();
    /* 005a59c8: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a59cd: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a59d2u); f_00814680();
    /* 005a59d2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a59d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a59d6: ret  */ FN_RET(0x005a59ac); r_esp += 4; return;
}

void f_005a59d8(void) /* sub_5A59D8 */
{
    FN_ENTER(0x005a59d8);
    /* 005a59d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a59d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a59da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a59db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a59dc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a59df: mov edi, ecx */ r_edi = r_ecx;
    /* 005a59e1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a59e3: mov ecx, edi */ r_ecx = r_edi;
    /* 005a59e5: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a59ea: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a59ef: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a59f4: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5a59f7u); call_ind(t); }
    /* 005a59f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a59f9: je 0x5a5b32 */ if (fZ) goto L_005a5b32;
L_005a59ff:; BB(0x005a59ff);
    /* 005a59ff: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 005a5a05: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005a5a07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5a09: je 0x5a5a28 */ if (fZ) goto L_005a5a28;
L_005a5a0b:; BB(0x005a5a0b);
    /* 005a5a0b: lea ebx, [edi + 0x3b8] */ r_ebx = (u32)(r_edi+0x3b8u);
    /* 005a5a11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a5a13: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5a5a18u); f_005771a4();
    /* 005a5a18: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 005a5a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5a1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a5a21: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5a5a26u); f_0057725c();
    /* 005a5a26: mov esi, eax */ r_esi = r_eax;
L_005a5a28:; BB(0x005a5a28);
    /* 005a5a28: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005a5a2e: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 005a5a34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a5a35: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x5a5a3au); f_00794548();
    /* 005a5a3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5a3b: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005a5a3e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5a5a43u); f_00829cc8();
    /* 005a5a43: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a5a48u); f_0082d7b0();
    /* 005a5a48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5a4a: push dword ptr [edi + 0x388] */ { u32 v = R32((u32)(r_edi+0x388u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5a50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5a52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5a54: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5a5a59u); f_00830b74();
    /* 005a5a59: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005a5a5c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a5a61u); f_0082d838();
    /* 005a5a61: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a5a64: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5a66: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a5a6bu); f_0082d8bc();
    /* 005a5a6b: mov ebp, dword ptr [edi + 0x370] */ r_ebp = R32((u32)(r_edi+0x370u));
    /* 005a5a71: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 005a5a75: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5a77: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005a5a7a: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a5a7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5a7e: mov eax, dword ptr [edx + 0x9c0794] */ r_eax = R32((u32)(r_edx+0x9c0794u));
    /* 005a5a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5a85: push dword ptr [edx + 0x9c0790] */ { u32 v = R32((u32)(r_edx+0x9c0790u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5a8c: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5a5a91u); f_0082fa0c();
    /* 005a5a91: push dword ptr [ebx + ebp*8 + 0x9c0798] */ { u32 v = R32((u32)(r_ebx+r_ebp*8+0x9c0798u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5a98: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5a5a9du); f_0061cdb0();
    /* 005a5a9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5a9e: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5a5aa3u); f_004f7c84();
    /* 005a5aa3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5aa6: je 0x5a5b3a */ if (fZ) goto L_005a5b3a;
L_005a5aac:; BB(0x005a5aac);
    /* 005a5aac: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5a5ab1u); f_00578b38();
    /* 005a5ab1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5ab3: je 0x5a5acf */ if (fZ) goto L_005a5acf;
L_005a5ab5:; BB(0x005a5ab5);
    /* 005a5ab5: mov edx, dword ptr [edi + 0x3b8] */ r_edx = R32((u32)(r_edi+0x3b8u));
    /* 005a5abb: lea ecx, [edi + 0x3b8] */ r_ecx = (u32)(r_edi+0x3b8u);
    /* 005a5ac1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5a5ac4u); call_ind(t); }
    /* 005a5ac4: mov ecx, edi */ r_ecx = r_edi;
    /* 005a5ac6: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5a5acbu); f_008173d0();
    /* 005a5acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5acd: jne 0x5a5ad6 */ if (!fZ) goto L_005a5ad6;
L_005a5acf:; BB(0x005a5acf);
    /* 005a5acf: mov ecx, edi */ r_ecx = r_edi;
    /* 005a5ad1: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5a5ad6u); f_007aa668();
L_005a5ad6:; BB(0x005a5ad6);
    /* 005a5ad6: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5a5adbu); f_0082dab0();
    /* 005a5adb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5add: je 0x5a5aee */ if (fZ) goto L_005a5aee;
L_005a5adf:; BB(0x005a5adf);
    /* 005a5adf: mov eax, dword ptr [edi + 0x3b8] */ r_eax = R32((u32)(r_edi+0x3b8u));
    /* 005a5ae5: lea ecx, [edi + 0x3b8] */ r_ecx = (u32)(r_edi+0x3b8u);
    /* 005a5aeb: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5a5aeeu); call_ind(t); }
L_005a5aee:; BB(0x005a5aee);
    /* 005a5aee: call 0x520e88 */ r_esp -= 4; W32(r_esp, 0x5a5af3u); f_00520e88();
L_005a5af3:; BB(0x005a5af3);
    /* 005a5af3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a5af8u); f_0082da80();
    /* 005a5af8: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x5a5afdu); f_00794750();
    /* 005a5afd: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005a5b04: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5b07: jl 0x5a5b0e */ if ((fS!=fO)) goto L_005a5b0e;
L_005a5b09:; BB(0x005a5b09);
    /* 005a5b09: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5b0c: jle 0x5a5b32 */ if ((fZ||fS!=fO)) goto L_005a5b32;
L_005a5b0e:; BB(0x005a5b0e);
    /* 005a5b0e: mov dword ptr [esp], 0x3fc00000 */ W32((u32)(r_esp), 0x3fc00000u);
    /* 005a5b15: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a5b18: mov ecx, edi */ r_ecx = r_edi;
    /* 005a5b1a: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005a5b22: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 005a5b2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5b2d: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x5a5b32u); f_00779d4c();
L_005a5b32:; BB(0x005a5b32);
    /* 005a5b32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a5b35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a5b36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a5b37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a5b38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a5b39: ret  */ FN_RET(0x005a59d8); r_esp += 4; return;
L_005a5b3a:; BB(0x005a5b3a);
    /* 005a5b3a: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5b3d: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5a5b42u); f_0082e1e8();
    /* 005a5b42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5b43: jmp 0x5a5af3 */ goto L_005a5af3;
}

void f_005a5b48(void) /* sub_5A5B48 */
{
    FN_ENTER(0x005a5b48);
    /* 005a5b48: mov eax, dword ptr [0xa747e4] */ r_eax = R32((u32)(0xa747e4u));
    /* 005a5b4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5b4f: je 0x5a5b62 */ if (fZ) goto L_005a5b62;
L_005a5b51:; BB(0x005a5b51);
    /* 005a5b51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5b52: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5a5b57u); f_00857e98();
    /* 005a5b57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5b58: mov dword ptr [0xa747e4], 0 */ W32((u32)(0xa747e4u), 0x0u);
L_005a5b62:; BB(0x005a5b62);
    /* 005a5b62: mov eax, dword ptr [0xa747e0] */ r_eax = R32((u32)(0xa747e0u));
    /* 005a5b67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5b69: je 0x5a5b7c */ if (fZ) goto L_005a5b7c;
L_005a5b6b:; BB(0x005a5b6b);
    /* 005a5b6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5b6c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5a5b71u); f_00857e98();
    /* 005a5b71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5b72: mov dword ptr [0xa747e0], 0 */ W32((u32)(0xa747e0u), 0x0u);
L_005a5b7c:; BB(0x005a5b7c);
    /* 005a5b7c: mov eax, dword ptr [0xa747dc] */ r_eax = R32((u32)(0xa747dcu));
    /* 005a5b81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5b83: je 0x5a5b96 */ if (fZ) goto L_005a5b96;
L_005a5b85:; BB(0x005a5b85);
    /* 005a5b85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5b86: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5a5b8bu); f_00857e98();
    /* 005a5b8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5b8c: mov dword ptr [0xa747dc], 0 */ W32((u32)(0xa747dcu), 0x0u);
L_005a5b96:; BB(0x005a5b96);
    /* 005a5b96: mov eax, dword ptr [0xa747d8] */ r_eax = R32((u32)(0xa747d8u));
    /* 005a5b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5b9d: je 0x5a5bb0 */ if (fZ) goto L_005a5bb0;
L_005a5b9f:; BB(0x005a5b9f);
    /* 005a5b9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5ba0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5a5ba5u); f_00857e98();
    /* 005a5ba5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5ba6: mov dword ptr [0xa747d8], 0 */ W32((u32)(0xa747d8u), 0x0u);
L_005a5bb0:; BB(0x005a5bb0);
    /* 005a5bb0: mov ecx, dword ptr [0xa747f0] */ r_ecx = R32((u32)(0xa747f0u));
    /* 005a5bb6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5bb8: je 0x5a5bcd */ if (fZ) goto L_005a5bcd;
L_005a5bba:; BB(0x005a5bba);
    /* 005a5bba: je 0x5a5bc3 */ if (fZ) goto L_005a5bc3;
L_005a5bbc:; BB(0x005a5bbc);
    /* 005a5bbc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5bbe: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5a5bc3u); f_0045a950();
L_005a5bc3:; BB(0x005a5bc3);
    /* 005a5bc3: mov dword ptr [0xa747f0], 0 */ W32((u32)(0xa747f0u), 0x0u);
L_005a5bcd:; BB(0x005a5bcd);
    /* 005a5bcd: mov ecx, dword ptr [0xa747ec] */ r_ecx = R32((u32)(0xa747ecu));
    /* 005a5bd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5bd5: je 0x5a5bea */ if (fZ) goto L_005a5bea;
L_005a5bd7:; BB(0x005a5bd7);
    /* 005a5bd7: je 0x5a5be0 */ if (fZ) goto L_005a5be0;
L_005a5bd9:; BB(0x005a5bd9);
    /* 005a5bd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5bdb: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5a5be0u); f_0045a950();
L_005a5be0:; BB(0x005a5be0);
    /* 005a5be0: mov dword ptr [0xa747ec], 0 */ W32((u32)(0xa747ecu), 0x0u);
L_005a5bea:; BB(0x005a5bea);
    /* 005a5bea: mov ecx, dword ptr [0xa747e8] */ r_ecx = R32((u32)(0xa747e8u));
    /* 005a5bf0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a5bf2: je 0x5a5c07 */ if (fZ) goto L_005a5c07;
L_005a5bf4:; BB(0x005a5bf4);
    /* 005a5bf4: je 0x5a5bfd */ if (fZ) goto L_005a5bfd;
L_005a5bf6:; BB(0x005a5bf6);
    /* 005a5bf6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5bf8: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5a5bfdu); f_004066a8();
L_005a5bfd:; BB(0x005a5bfd);
    /* 005a5bfd: mov dword ptr [0xa747e8], 0 */ W32((u32)(0xa747e8u), 0x0u);
L_005a5c07:; BB(0x005a5c07);
    /* 005a5c07: ret  */ FN_RET(0x005a5b48); r_esp += 4; return;
}

void f_005a5c08(void)
{
    FN_ENTER(0x005a5c08);
    /* 005a5c08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c09: mov ebp, esp */ r_ebp = r_esp;
    /* 005a5c0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c0d: push 0x8d89c2 */ { u32 v = 0x8d89c2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a5c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a5c20: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a5c23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a5c26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005a5c29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005a5c2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a5c2f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c31: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005a5c38: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a5c3du); f_005caba4();
    /* 005a5c3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5c3e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a5c41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5c43: je 0x5a5ccb */ if (fZ) goto L_005a5ccb;
L_005a5c49:; BB(0x005a5c49);
    /* 005a5c49: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005a5c50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a5c57: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5c5d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a5c60: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5a5c65u); f_00787a4c();
    /* 005a5c65: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a5c68: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005a5c6f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005a5c72:; BB(0x005a5c72);
    /* 005a5c72: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a5c79: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005a5c80: push 0x42c */ { u32 v = 0x42cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c85: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a5c8au); f_005caba4();
    /* 005a5c8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5c8b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a5c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5c90: je 0x5a5cc7 */ if (fZ) goto L_005a5cc7;
L_005a5c92:; BB(0x005a5c92);
    /* 005a5c92: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005a5c99: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a5ca0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5ca3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a5ca6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a5ca9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5caa: call 0x5a5cd4 */ r_esp -= 4; W32(r_esp, 0x5a5cafu); f_005a5cd4();
    /* 005a5caf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a5cb2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005a5cb9:; BB(0x005a5cb9);
    /* 005a5cb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a5cbc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a5cc3: mov esp, ebp */ r_esp = r_ebp;
    /* 005a5cc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a5cc6: ret  */ FN_RET(0x005a5c08); r_esp += 4; return;
L_005a5cc7:; BB(0x005a5cc7);
    /* 005a5cc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a5cc9: jmp 0x5a5cb9 */ goto L_005a5cb9;
L_005a5ccb:; BB(0x005a5ccb);
    /* 005a5ccb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a5ccd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a5cd0: jmp 0x5a5c72 */ goto L_005a5c72;
}

void f_005a5c5f(void)
{
    FN_ENTER(0x005a5c5f);
    /* 005a5c5f: aam 0xe8 */ UNSUP(0x005a5c5f, "aam 0xe8");
    /* 005a5c61: out 0x1d, eax */ UNSUP(0x005a5c61, "out 0x1d, eax");
    /* 005a5c63: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c64: add byte ptr [ebx + 0x45c7d445], cl */ { u32 ad = (u32)(r_ebx+0x45c7d445u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a5c6a: rol byte ptr [eax], 1 */ { u32 ad = (u32)(r_eax); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 005a5c6c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a5c6e: add byte ptr [ecx + 0x45c7ec45], cl */ { u32 ad = (u32)(r_ecx+0x45c7ec45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a5c74: cld  */ rt_df = 0;
    UNSUP(0x005a5c75, "falls out of decoded code");
}

void f_005a5cd4(void) /* sub_5A5CD4 */
{
    FN_ENTER(0x005a5cd4);
    /* 005a5cd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a5cd5: mov ebp, esp */ r_ebp = r_esp;
    /* 005a5cd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5cd9: push 0x8d89fa */ { u32 v = 0x8d89fau; r_esp -= 4; W32(r_esp, v); }
    /* 005a5cde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a5ce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5ce5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a5cec: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a5cef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a5cf2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005a5cf5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005a5cf8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a5cfb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a5cfe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5d01: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005a5d04: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a5d07: call 0x52b6ec */ r_esp -= 4; W32(r_esp, 0x5a5d0cu); f_0052b6ec();
    /* 005a5d0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a5d13: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d18: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d1d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5d20: mov dword ptr [eax], 0xb0a680 */ W32((u32)(r_eax), 0xb0a680u);
    /* 005a5d26: add eax, 0x3b8 */ {  u32 a = r_eax; u32 b = 0x3b8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a5d2b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d2d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d30: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5a5d35u); f_00858736();
    /* 005a5d35: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a5d3c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5d3f: mov eax, dword ptr [0x9c078c] */ r_eax = R32((u32)(0x9c078cu));
    /* 005a5d44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a5d47: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005a5d49: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005a5d4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d4d: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5a5d53u); call_ind(t); }
    /* 005a5d53: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5d56: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005a5d59: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005a5d5c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 005a5d5f: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 005a5d65: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 005a5d6b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5d6e: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 005a5d74: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 005a5d7a: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 005a5d80: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005a5d86: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 005a5d8c: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 005a5d92: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5d95: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 005a5d9b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5d9e: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 005a5da4: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 005a5da7: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 005a5dad: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 005a5db0: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 005a5db6: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005a5db9: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 005a5dbf: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 005a5dc5: call 0x5a602c */ r_esp -= 4; W32(r_esp, 0x5a5dcau); f_005a602c();
    /* 005a5dca: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5dcd: mov eax, dword ptr [0xa747e8] */ r_eax = R32((u32)(0xa747e8u));
    /* 005a5dd2: mov edi, dword ptr [ecx + 0x370] */ r_edi = R32((u32)(r_ecx+0x370u));
    /* 005a5dd8: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005a5dde: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a5de0: mov ebx, dword ptr [edx + edi*8 + 8] */ r_ebx = R32((u32)(r_edx+r_edi*8+0x8u));
    /* 005a5de4: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 005a5de7: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005a5ded: mov edx, dword ptr [esi + edi*8 + 0xc] */ r_edx = R32((u32)(r_esi+r_edi*8+0xcu));
    /* 005a5df1: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 005a5df4: mov dword ptr [ecx + 0xd8], 0x9c05a0 */ W32((u32)(r_ecx+0xd8u), 0x9c05a0u);
    /* 005a5dfe: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 005a5e04: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 005a5e0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a5e0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5e0d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a5e14: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5a5e19u); f_007aa4c8();
    /* 005a5e19: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5e1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5e1e: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005a5e25: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 005a5e2b: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a5e32: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 005a5e35: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5e37: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5e39: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5e3b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5e3d: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5e3f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5e41: lea esi, [ebx + ebx + 0x9c0500] */ r_esi = (u32)(r_ebx+r_ebx+0x9c0500u);
    /* 005a5e48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a5e49: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5a5e4eu); f_007b9a88();
    /* 005a5e4e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5e51: mov ebx, dword ptr [0xa747e4] */ r_ebx = R32((u32)(0xa747e4u));
    /* 005a5e57: mov edx, dword ptr [0xa747e0] */ r_edx = R32((u32)(0xa747e0u));
    /* 005a5e5d: mov eax, dword ptr [0xa747dc] */ r_eax = R32((u32)(0xa747dcu));
    /* 005a5e62: mov esi, dword ptr [ecx + 0x33c] */ r_esi = R32((u32)(r_ecx+0x33cu));
    /* 005a5e68: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5e6b: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5e6e: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 005a5e71: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5a5e76u); f_007868f8();
    /* 005a5e76: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5e79: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 005a5e7f: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 005a5e86: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a5e88: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a5e8a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005a5e8d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a5e8f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a5e91: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a5e93: lea ebx, [edx + 0x9c04a0] */ r_ebx = (u32)(r_edx+0x9c04a0u);
    /* 005a5e99: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 005a5e9f: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 005a5ea6: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a5eabu); f_0078730c();
    /* 005a5eab: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5eae: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5eb1: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a5eb7: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a5ebd: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 005a5ec3: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a5ec6: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a5ec9: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 005a5ecc: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5a5ed1u); f_007b4f54();
    /* 005a5ed1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5ed4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a5ed9u); f_007751b0();
    /* 005a5ed9: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5edc: fld dword ptr [0x92a138] */ FPUSH(R_F32((u32)(0x92a138u)));
    /* 005a5ee2: mov ecx, dword ptr [esi + 0x2e8] */ r_ecx = R32((u32)(r_esi+0x2e8u));
    /* 005a5ee8: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 005a5eeb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005a5eed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a5eef: fmul dword ptr [0x92a134] */ ST(0) = ST(0) * R_F32((u32)(0x92a134u));
    /* 005a5ef5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005a5ef7: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005a5efa: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005a5efe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a5f03: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a5f06: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005a5f09: fistp dword ptr [esi + 0x2b0] */ W32((u32)(r_esi+0x2b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005a5f0f: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005a5f12: mov eax, 0xf */ r_eax = 0xfu;
    /* 005a5f17: mov dword ptr [esi + 0x388], 0 */ W32((u32)(r_esi+0x388u), 0x0u);
    /* 005a5f21: or ebx, 0x40000 */ {  u32 a = r_ebx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5f27: mov word ptr [esi + 0x342], ax */ W16((u32)(r_esi+0x342u), (u16)r_eax);
    /* 005a5f2e: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5f33: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5f38: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a5f3f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a5f41: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 005a5f48: mov word ptr [esi + 0x37c], dx */ W16((u32)(r_esi+0x37cu), (u16)r_edx);
    /* 005a5f4f: mov word ptr [esi + 0x37e], dx */ W16((u32)(r_esi+0x37eu), (u16)r_edx);
    /* 005a5f56: mov dword ptr [esi + 0x380], edx */ W32((u32)(r_esi+0x380u), r_edx);
    /* 005a5f5c: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 005a5f62: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5f65: mov dword ptr [esi + 0x2e8], ecx */ W32((u32)(r_esi+0x2e8u), r_ecx);
    /* 005a5f6b: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 005a5f6e: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5a5f73u); f_00578cc4();
    /* 005a5f73: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5f76: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5f7b: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5f80: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
    /* 005a5f86: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5a5f8bu); f_00578cc4();
    /* 005a5f8b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5f8e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a5f91: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 005a5f97: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 005a5f9d: mov eax, dword ptr [0xa747d8] */ r_eax = R32((u32)(0xa747d8u));
    /* 005a5fa2: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 005a5fa5: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005a5fa7: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 005a5fad: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 005a5fb0: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 005a5fb3: mov dword ptr [ecx + 0x3a8], ebx */ W32((u32)(r_ecx+0x3a8u), r_ebx);
    /* 005a5fb9: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 005a5fbc: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005a5fbf: mov dword ptr [ecx + 0x3a4], ebx */ W32((u32)(r_ecx+0x3a4u), r_ebx);
    /* 005a5fc5: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005a5fc8: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005a5fcb: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 005a5fd1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5fd3: mov dword ptr [ecx + 0x398], 1 */ W32((u32)(r_ecx+0x398u), 0x1u);
L_005a5fdd:; BB(0x005a5fdd);
    /* 005a5fdd: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005a5fe0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a5fe2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005a5fe5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a5fe7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a5fe9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a5feb: lea ecx, [ecx + edx + 0x3b8] */ r_ecx = (u32)(r_ecx+r_edx+0x3b8u);
    /* 005a5ff2: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5a5ff7u); f_0057739c();
    /* 005a5ff7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a5ffa: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5ffd: jge 0x5a6004 */ if ((fS==fO)) goto L_005a6004;
L_005a5fff:; BB(0x005a5fff);
    /* 005a5fff: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a6002: jmp 0x5a5fdd */ goto L_005a5fdd;
L_005a6004:; BB(0x005a6004);
    /* 005a6004: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a6007: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a6009: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5a600fu); call_ind(t); }
    /* 005a600f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a6012: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6015: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a6018: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a601b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a601e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a6025: mov esp, ebp */ r_esp = r_ebp;
    /* 005a6027: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6028: ret 8 */ FN_RET(0x005a5cd4); r_esp += 12; return;
}

