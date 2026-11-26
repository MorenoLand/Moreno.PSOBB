#include "protos.h"

void f_0045d154(void)
{
    FN_ENTER(0x0045d154);
    /* 0045d154: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d155: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d156: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045d158: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045d15e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d160: jne 0x45d1bd */ if (!fZ) goto L_0045d1bd;
L_0045d162:; BB(0x0045d162);
    /* 0045d162: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045d167: mov ecx, dword ptr [ebp + 0x394] */ r_ecx = R32((u32)(r_ebp+0x394u));
    /* 0045d16d: mov word ptr [ebp + 0x3c0], ax */ W16((u32)(r_ebp+0x3c0u), (u16)r_eax);
    /* 0045d174: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d176: je 0x45d1bd */ if (fZ) goto L_0045d1bd;
L_0045d178:; BB(0x0045d178);
    /* 0045d178: mov esi, dword ptr [ebp + 0x3a8] */ r_esi = R32((u32)(r_ebp+0x3a8u));
    /* 0045d17e: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 0045d184: movzx ebp, word ptr [ebp + 0x3c2] */ r_ebp = (u32)R16((u32)(r_ebp+0x3c2u));
    /* 0045d18b: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045d18e: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045d191: mov eax, esi */ r_eax = r_esi;
    /* 0045d193: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045d196: or eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d199: shl esi, 0xa */ { u32 c = (10u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045d19c: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d19e: mov esi, edx */ r_esi = r_edx;
    /* 0045d1a0: shl esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045d1a3: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d1a5: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045d1a8: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d1aa: or eax, 0x7800000 */ {  u32 a = r_eax; u32 b = 0x7800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d1af: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045d1b2: shl ebp, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045d1b5: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d1b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1b8: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45d1bdu); f_0044cf88();
L_0045d1bd:; BB(0x0045d1bd);
    /* 0045d1bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d1be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d1bf: ret  */ FN_RET(0x0045d154); r_esp += 4; return;
}

void f_0045d1c0(void) /* sub_45D1C0 */
{
    FN_ENTER(0x0045d1c0);
    /* 0045d1c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1c5: mov esi, ecx */ r_esi = r_ecx;
    /* 0045d1c7: movzx ebx, word ptr [esi + 0x3c0] */ r_ebx = (u32)R16((u32)(r_esi+0x3c0u));
    /* 0045d1ce: lea ebp, [esi + 0x458] */ r_ebp = (u32)(r_esi+0x458u);
    /* 0045d1d4: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d1da: lea eax, [esi + 0x464] */ r_eax = (u32)(r_esi+0x464u);
    /* 0045d1e0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045d1e3: je 0x45d3de */ if (fZ) goto L_0045d3de;
L_0045d1e9:; BB(0x0045d1e9);
    /* 0045d1e9: mov eax, dword ptr [0xa458b4] */ r_eax = R32((u32)(0xa458b4u));
    /* 0045d1ee: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 0045d1f4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d1f6: jg 0x45d2b3 */ if ((!fZ&&fS==fO)) goto L_0045d2b3;
L_0045d1fc:; BB(0x0045d1fc);
    /* 0045d1fc: je 0x45d24c */ if (fZ) goto L_0045d24c;
L_0045d1fe:; BB(0x0045d1fe);
    /* 0045d1fe: cmp edx, dword ptr [0xa458b8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa458b8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d204: jne 0x45d2bb */ if (!fZ) goto L_0045d2bb;
L_0045d20a:; BB(0x0045d20a);
    /* 0045d20a: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 0045d210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d212: je 0x45d225 */ if (fZ) goto L_0045d225;
L_0045d214:; BB(0x0045d214);
    /* 0045d214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d215: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45d21au); f_005cdcc0();
    /* 0045d21a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d21b: mov dword ptr [esi + 0x42c], 0 */ W32((u32)(r_esi+0x42cu), 0x0u);
L_0045d225:; BB(0x0045d225);
    /* 0045d225: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 0045d22b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d22d: je 0x45d240 */ if (fZ) goto L_0045d240;
L_0045d22f:; BB(0x0045d22f);
    /* 0045d22f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d230: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45d235u); f_005cdcc0();
    /* 0045d235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d236: mov dword ptr [esi + 0x430], 0 */ W32((u32)(r_esi+0x430u), 0x0u);
L_0045d240:; BB(0x0045d240);
    /* 0045d240: mov dword ptr [esi + 0x534], 0 */ W32((u32)(r_esi+0x534u), 0x0u);
    /* 0045d24a: jmp 0x45d2bb */ goto L_0045d2bb;
L_0045d24c:; BB(0x0045d24c);
    /* 0045d24c: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d251: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d252: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45d257u); f_00509590();
    /* 0045d257: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d25a: mov dword ptr [esi + 0x42c], eax */ W32((u32)(r_esi+0x42cu), r_eax);
    /* 0045d260: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d262: je 0x45d26d */ if (fZ) goto L_0045d26d;
L_0045d264:; BB(0x0045d264);
    /* 0045d264: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d266: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d268: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45d26du); f_00508efc();
L_0045d26d:; BB(0x0045d26d);
    /* 0045d26d: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d272: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0045d276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d277: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45d27cu); f_00509590();
    /* 0045d27c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d27f: mov dword ptr [esi + 0x430], eax */ W32((u32)(r_esi+0x430u), r_eax);
    /* 0045d285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d287: je 0x45d292 */ if (fZ) goto L_0045d292;
L_0045d289:; BB(0x0045d289);
    /* 0045d289: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d28b: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d28d: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45d292u); f_00508efc();
L_0045d292:; BB(0x0045d292);
    /* 0045d292: mov eax, dword ptr [0x9a64b8] */ r_eax = R32((u32)(0x9a64b8u));
    /* 0045d297: mov dword ptr [esi + 0x3f8], 6 */ W32((u32)(r_esi+0x3f8u), 0x6u);
    /* 0045d2a1: mov dword ptr [esi + 0x408], eax */ W32((u32)(r_esi+0x408u), r_eax);
    /* 0045d2a7: mov dword ptr [esi + 0x3fc], 0 */ W32((u32)(r_esi+0x3fcu), 0x0u);
    /* 0045d2b1: jmp 0x45d2bb */ goto L_0045d2bb;
L_0045d2b3:; BB(0x0045d2b3);
    /* 0045d2b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2b4: mov ecx, esi */ r_ecx = r_esi;
    /* 0045d2b6: call 0x45d46c */ r_esp -= 4; W32(r_esp, 0x45d2bbu); f_0045d46c();
L_0045d2bb:; BB(0x0045d2bb);
    /* 0045d2bb: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d2bd: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x45d2c2u); f_0077a6cc();
    /* 0045d2c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d2c3: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 0045d2c6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045d2c8: jle 0x45d2cf */ if ((fZ||fS!=fO)) goto L_0045d2cf;
L_0045d2ca:; BB(0x0045d2ca);
    /* 0045d2ca: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d2cd: jle 0x45d2d4 */ if ((fZ||fS!=fO)) goto L_0045d2d4;
L_0045d2cf:; BB(0x0045d2cf);
    /* 0045d2cf: mov ebx, 4 */ r_ebx = 0x4u;
L_0045d2d4:; BB(0x0045d2d4);
    /* 0045d2d4: mov eax, dword ptr [0xa458bc] */ r_eax = R32((u32)(0xa458bcu));
    /* 0045d2d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0045d2da: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0045d2da, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0045d2da, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0045d2dc: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d2de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045d2e0: jg 0x45d2e7 */ if ((!fZ&&fS==fO)) goto L_0045d2e7;
L_0045d2e2:; BB(0x0045d2e2);
    /* 0045d2e2: mov ecx, 1 */ r_ecx = 0x1u;
L_0045d2e7:; BB(0x0045d2e7);
    /* 0045d2e7: mov eax, dword ptr [0xa458c0] */ r_eax = R32((u32)(0xa458c0u));
    /* 0045d2ec: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045d2ee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045d2f0: jle 0x45d309 */ if ((fZ||fS!=fO)) goto L_0045d309;
L_0045d2f2:; BB(0x0045d2f2);
    /* 0045d2f2: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
L_0045d2f8:; BB(0x0045d2f8);
    /* 0045d2f8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d2fa: je 0x45d3a2 */ if (fZ) goto L_0045d3a2;
L_0045d300:; BB(0x0045d300);
    /* 0045d300: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d302: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045d305: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d307: jl 0x45d2f8 */ if ((fS!=fO)) goto L_0045d2f8;
L_0045d309:; BB(0x0045d309);
    /* 0045d309: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 0045d30f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d311: je 0x45d319 */ if (fZ) goto L_0045d319;
L_0045d313:; BB(0x0045d313);
    /* 0045d313: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d314: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45d319u); f_00508db8();
L_0045d319:; BB(0x0045d319);
    /* 0045d319: mov ecx, dword ptr [esi + 0x430] */ r_ecx = R32((u32)(r_esi+0x430u));
    /* 0045d31f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d321: je 0x45d32c */ if (fZ) goto L_0045d32c;
L_0045d323:; BB(0x0045d323);
    /* 0045d323: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0045d326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d327: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45d32cu); f_00508db8();
L_0045d32c:; BB(0x0045d32c);
    /* 0045d32c: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 0045d332: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d335: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 0045d33b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d33d: jl 0x45d345 */ if ((fS!=fO)) goto L_0045d345;
L_0045d33f:; BB(0x0045d33f);
    /* 0045d33f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d340: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d341: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d342: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d343: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d344: ret  */ FN_RET(0x0045d1c0); r_esp += 4; return;
L_0045d345:; BB(0x0045d345);
    /* 0045d345: lea ebp, [esi + 0x42c] */ r_ebp = (u32)(r_esi+0x42cu);
    /* 0045d34b: lea ebx, [esi + 0x440] */ r_ebx = (u32)(r_esi+0x440u);
L_0045d351:; BB(0x0045d351);
    /* 0045d351: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0045d354: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d356: je 0x45d366 */ if (fZ) goto L_0045d366;
L_0045d358:; BB(0x0045d358);
    /* 0045d358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d359: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45d35eu); f_005cdcc0();
    /* 0045d35e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d35f: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
L_0045d366:; BB(0x0045d366);
    /* 0045d366: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045d369: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045d36b: ja 0x45d351 */ if ((!fC&&!fZ)) goto L_0045d351;
L_0045d36d:; BB(0x0045d36d);
    /* 0045d36d: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045d373: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 0045d37d: mov ecx, esi */ r_ecx = r_esi;
    /* 0045d37f: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45d384u); f_0045d43c();
    /* 0045d384: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045d38a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045d38d: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045d394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d396: je 0x45d39c */ if (fZ) goto L_0045d39c;
L_0045d398:; BB(0x0045d398);
    /* 0045d398: mov ecx, esi */ r_ecx = r_esi;
    /* 0045d39a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d39cu); call_ind(t); }
L_0045d39c:; BB(0x0045d39c);
    /* 0045d39c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d39d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d39e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d39f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d3a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d3a1: ret  */ FN_RET(0x0045d1c0); r_esp += 4; return;
L_0045d3a2:; BB(0x0045d3a2);
    /* 0045d3a2: movzx eax, word ptr [esi + 0x3c0] */ r_eax = (u32)R16((u32)(r_esi+0x3c0u));
    /* 0045d3a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3ac: call 0x453030 */ r_esp -= 4; W32(r_esp, 0x45d3b1u); f_00453030();
    /* 0045d3b1: movzx eax, word ptr [esi + 0x3c0] */ r_eax = (u32)R16((u32)(r_esi+0x3c0u));
    /* 0045d3b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3b9: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045d3bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3bf: call 0x453030 */ r_esp -= 4; W32(r_esp, 0x45d3c4u); f_00453030();
    /* 0045d3c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3c8: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0045d3cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3cc: push 0x386 */ { u32 v = 0x386u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3d1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45d3d6u); f_00814298();
    /* 0045d3d6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d3d9: jmp 0x45d309 */ goto L_0045d309;
L_0045d3de:; BB(0x0045d3de);
    /* 0045d3de: lea ebp, [esi + 0x42c] */ r_ebp = (u32)(r_esi+0x42cu);
    /* 0045d3e4: lea ebx, [esi + 0x440] */ r_ebx = (u32)(r_esi+0x440u);
L_0045d3ea:; BB(0x0045d3ea);
    /* 0045d3ea: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0045d3ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d3ef: je 0x45d3ff */ if (fZ) goto L_0045d3ff;
L_0045d3f1:; BB(0x0045d3f1);
    /* 0045d3f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d3f2: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45d3f7u); f_005cdcc0();
    /* 0045d3f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d3f8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
L_0045d3ff:; BB(0x0045d3ff);
    /* 0045d3ff: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045d402: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045d404: ja 0x45d3ea */ if ((!fC&&!fZ)) goto L_0045d3ea;
L_0045d406:; BB(0x0045d406);
    /* 0045d406: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045d40c: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 0045d416: mov ecx, esi */ r_ecx = r_esi;
    /* 0045d418: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45d41du); f_0045d43c();
    /* 0045d41d: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045d423: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045d426: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045d42d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d42f: je 0x45d435 */ if (fZ) goto L_0045d435;
L_0045d431:; BB(0x0045d431);
    /* 0045d431: mov ecx, esi */ r_ecx = r_esi;
    /* 0045d433: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d435u); call_ind(t); }
L_0045d435:; BB(0x0045d435);
    /* 0045d435: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d436: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d437: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d438: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d439: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d43a: ret  */ FN_RET(0x0045d1c0); r_esp += 4; return;
}

void f_0045d43c(void) /* sub_45D43C */
{
    FN_ENTER(0x0045d43c);
    /* 0045d43c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0045d440: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045d443: je 0x45d468 */ if (fZ) goto L_0045d468;
L_0045d445:; BB(0x0045d445);
    /* 0045d445: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 0045d44f: mov dword ptr [ecx + 0x3f8], eax */ W32((u32)(r_ecx+0x3f8u), r_eax);
    /* 0045d455: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0045d458: mov edx, dword ptr [eax*4 + 0x9a6440] */ r_edx = R32((u32)(r_eax*4+0x9a6440u));
    /* 0045d45f: mov dword ptr [ecx + 0x408], edx */ W32((u32)(r_ecx+0x408u), r_edx);
    /* 0045d465: ret 4 */ FN_RET(0x0045d43c); r_esp += 8; return;
L_0045d468:; BB(0x0045d468);
    /* 0045d468: ret 4 */ FN_RET(0x0045d43c); r_esp += 8; return;
}

void f_0045d46c(void) /* sub_45D46C */
{
    FN_ENTER(0x0045d46c);
    /* 0045d46c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d46d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d470: mov esi, ecx */ r_esi = r_ecx;
    /* 0045d472: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0045d477: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d47c: je 0x45d4e3 */ if (fZ) goto L_0045d4e3;
L_0045d47e:; BB(0x0045d47e);
    /* 0045d47e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d47f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45d484u); f_0068d5a8();
    /* 0045d484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d487: je 0x45d4e3 */ if (fZ) goto L_0045d4e3;
L_0045d489:; BB(0x0045d489);
    /* 0045d489: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0045d48c: fsub dword ptr [0xa45860] */ ST(0) = ST(0) - R_F32((u32)(0xa45860u));
    /* 0045d492: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0045d495: fsub dword ptr [0xa45864] */ ST(0) = ST(0) - R_F32((u32)(0xa45864u));
    /* 0045d49b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0045d49d: fmul qword ptr [0x900358] */ ST(0) = ST(0) * R_F64((u32)(0x900358u));
    /* 0045d4a3: fdiv qword ptr [0x900350] */ ST(0) = ST(0) / R_F64((u32)(0x900350u));
    /* 0045d4a9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045d4ac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045d4b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d4b5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045d4b9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045d4bd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045d4c1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045d4c4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0045d4c8: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d4ce: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045d4d1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x45d4d6u); f_007a8c74();
    /* 0045d4d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d4d9: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0045d4dc: mov ecx, esi */ r_ecx = r_esi;
    /* 0045d4de: call 0x45d4ec */ r_esp -= 4; W32(r_esp, 0x45d4e3u); f_0045d4ec();
L_0045d4e3:; BB(0x0045d4e3);
    /* 0045d4e3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d4e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d4e7: ret 4 */ FN_RET(0x0045d46c); r_esp += 8; return;
}

void f_0045d4ec(void) /* sub_45D4EC */
{
    FN_ENTER(0x0045d4ec);
    /* 0045d4ec: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0045d4ef: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045d4f1: add eax, 0xfffff800 */ {  u32 a = r_eax; u32 b = 0xfffff800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d4f6: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0045d4f9: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d4fc: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 0045d502: mov dword ptr [ecx + 0x3b0], eax */ W32((u32)(r_ecx+0x3b0u), r_eax);
    /* 0045d508: ret  */ FN_RET(0x0045d4ec); r_esp += 4; return;
}

void f_0045d50c(void)
{
    FN_ENTER(0x0045d50c);
    /* 0045d50c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d50d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d50e: mov esi, ecx */ r_esi = r_ecx;
    /* 0045d510: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 0045d516: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d518: jne 0x45d573 */ if (!fZ) goto L_0045d573;
L_0045d51a:; BB(0x0045d51a);
    /* 0045d51a: mov ecx, dword ptr [esi + 0x394] */ r_ecx = R32((u32)(r_esi+0x394u));
    /* 0045d520: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d522: je 0x45d573 */ if (fZ) goto L_0045d573;
L_0045d524:; BB(0x0045d524);
    /* 0045d524: mov edi, dword ptr [esi + 0x3a8] */ r_edi = R32((u32)(r_esi+0x3a8u));
    /* 0045d52a: mov edx, dword ptr [esi + 0x3b0] */ r_edx = R32((u32)(r_esi+0x3b0u));
    /* 0045d530: and edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0045d533: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045d536: mov eax, edi */ r_eax = r_edi;
    /* 0045d538: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045d53b: or eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d53e: shl edi, 0xa */ { u32 c = (10u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045d541: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d543: mov edi, edx */ r_edi = r_edx;
    /* 0045d545: shl edi, 0xf */ { u32 c = (15u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045d548: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d54a: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045d54d: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d54f: movzx edx, word ptr [esi + 0x3c0] */ r_edx = (u32)R16((u32)(r_esi+0x3c0u));
    /* 0045d556: movzx esi, word ptr [esi + 0x3c2] */ r_esi = (u32)R16((u32)(r_esi+0x3c2u));
    /* 0045d55d: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045d560: shl edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045d563: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d565: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045d568: shl esi, 0x1b */ { u32 c = (27u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045d56b: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d56d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d56e: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45d573u); f_0044cf88();
L_0045d573:; BB(0x0045d573);
    /* 0045d573: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d574: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d575: ret  */ FN_RET(0x0045d50c); r_esp += 4; return;
}

void f_0045d578(void) /* sub_45D578 */
{
    FN_ENTER(0x0045d578);
    /* 0045d578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d579: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d57a: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d57d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045d57f: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0045d585: cmp edx, dword ptr [0xa458c4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa458c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d58b: lea edi, [ebx + 0x47c] */ r_edi = (u32)(r_ebx+0x47cu);
    /* 0045d591: jne 0x45d5b2 */ if (!fZ) goto L_0045d5b2;
L_0045d593:; BB(0x0045d593);
    /* 0045d593: mov eax, dword ptr [0x9a64cc] */ r_eax = R32((u32)(0x9a64ccu));
    /* 0045d598: mov dword ptr [ebx + 0x3f8], 7 */ W32((u32)(r_ebx+0x3f8u), 0x7u);
    /* 0045d5a2: mov dword ptr [ebx + 0x408], eax */ W32((u32)(r_ebx+0x408u), r_eax);
    /* 0045d5a8: mov dword ptr [ebx + 0x3fc], 0 */ W32((u32)(r_ebx+0x3fcu), 0x0u);
L_0045d5b2:; BB(0x0045d5b2);
    /* 0045d5b2: cmp edx, dword ptr [0xa458c8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa458c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d5b8: jne 0x45d5e3 */ if (!fZ) goto L_0045d5e3;
L_0045d5ba:; BB(0x0045d5ba);
    /* 0045d5ba: push 0x133 */ { u32 v = 0x133u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5c0: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x45d5c5u); f_0050b510();
    /* 0045d5c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d5c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d5ca: je 0x45d5dd */ if (fZ) goto L_0045d5dd;
L_0045d5cc:; BB(0x0045d5cc);
    /* 0045d5cc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5ce: mov ecx, eax */ r_ecx = r_eax;
    /* 0045d5d0: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45d5d5u); f_00508efc();
    /* 0045d5d5: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0045d5db: jmp 0x45d5e3 */ goto L_0045d5e3;
L_0045d5dd:; BB(0x0045d5dd);
    /* 0045d5dd: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
L_0045d5e3:; BB(0x0045d5e3);
    /* 0045d5e3: cmp edx, dword ptr [0xa458cc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa458ccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d5e9: jne 0x45d688 */ if (!fZ) goto L_0045d688;
L_0045d5ef:; BB(0x0045d5ef);
    /* 0045d5ef: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d5f1: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x45d5f6u); f_0077a6cc();
    /* 0045d5f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d5f7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0045d5fa: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045d5fd: mov esi, edi */ r_esi = r_edi;
    /* 0045d5ff: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0045d603: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045d605: mov edi, eax */ r_edi = r_eax;
    /* 0045d607: mov ebp, edx */ r_ebp = r_edx;
L_0045d609:; BB(0x0045d609);
    /* 0045d609: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d60a: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45d60fu); f_00453ab8();
    /* 0045d60f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d610: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d612: je 0x45d664 */ if (fZ) goto L_0045d664;
L_0045d614:; BB(0x0045d614);
    /* 0045d614: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0045d618: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0045d61c: mov edx, 0xb */ r_edx = 0xbu;
    /* 0045d621: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045d623:; BB(0x0045d623);
    /* 0045d623: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0045d628: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 0045d62b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045d62d: mov word ptr [ecx + 2], bx */ W16((u32)(r_ecx+0x2u), (u16)r_ebx);
    /* 0045d631: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0045d634: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d637: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0045d63a: jne 0x45d623 */ if (!fZ) goto L_0045d623;
L_0045d63c:; BB(0x0045d63c);
    /* 0045d63c: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0045d640: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0045d648: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045d64a: mov word ptr [esp + 0x10], di */ W16((u32)(r_esp+0x10u), (u16)r_edi);
    /* 0045d64f: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0045d654: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0045d658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65c: call 0x6e6bf4 */ r_esp -= 4; W32(r_esp, 0x45d661u); f_006e6bf4();
    /* 0045d661: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d664:; BB(0x0045d664);
    /* 0045d664: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045d667: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d66a: jl 0x45d609 */ if ((fS!=fO)) goto L_0045d609;
L_0045d66c:; BB(0x0045d66c);
    /* 0045d66c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0045d66f: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0045d673: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d675: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d67a: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x45d67fu); f_006ff5f8();
    /* 0045d67f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d682: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
L_0045d688:; BB(0x0045d688);
    /* 0045d688: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d68b: mov dword ptr [ebx + 0x3a0], edx */ W32((u32)(r_ebx+0x3a0u), r_edx);
    /* 0045d691: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045d693: jl 0x45d69b */ if ((fS!=fO)) goto L_0045d69b;
L_0045d695:; BB(0x0045d695);
    /* 0045d695: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d698: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d699: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d69a: ret  */ FN_RET(0x0045d578); r_esp += 4; return;
L_0045d69b:; BB(0x0045d69b);
    /* 0045d69b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045d69e: lea eax, [ebx + 0x42c] */ r_eax = (u32)(r_ebx+0x42cu);
    /* 0045d6a4: lea edi, [ebx + 0x440] */ r_edi = (u32)(r_ebx+0x440u);
    /* 0045d6aa: mov esi, eax */ r_esi = r_eax;
L_0045d6ac:; BB(0x0045d6ac);
    /* 0045d6ac: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0045d6ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d6b0: je 0x45d6bf */ if (fZ) goto L_0045d6bf;
L_0045d6b2:; BB(0x0045d6b2);
    /* 0045d6b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6b3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45d6b8u); f_005cdcc0();
    /* 0045d6b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d6b9: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0045d6bf:; BB(0x0045d6bf);
    /* 0045d6bf: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045d6c2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045d6c4: ja 0x45d6ac */ if ((!fC&&!fZ)) goto L_0045d6ac;
L_0045d6c6:; BB(0x0045d6c6);
    /* 0045d6c6: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0045d6c9: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045d6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045d6d1: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 0045d6db: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45d6e0u); f_0045d43c();
    /* 0045d6e0: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045d6e6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045d6e9: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045d6f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d6f2: je 0x45d6f8 */ if (fZ) goto L_0045d6f8;
L_0045d6f4:; BB(0x0045d6f4);
    /* 0045d6f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045d6f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d6f8u); call_ind(t); }
L_0045d6f8:; BB(0x0045d6f8);
    /* 0045d6f8: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d6fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d6fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d6fd: ret  */ FN_RET(0x0045d578); r_esp += 4; return;
}

void f_0045d640(void)
{
    FN_ENTER(0x0045d640);
    goto L_0045d640;
L_0045d609:; BB(0x0045d609);
    /* 0045d609: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d60a: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45d60fu); f_00453ab8();
    /* 0045d60f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d610: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d612: je 0x45d664 */ if (fZ) goto L_0045d664;
L_0045d614:; BB(0x0045d614);
    /* 0045d614: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0045d618: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0045d61c: mov edx, 0xb */ r_edx = 0xbu;
    /* 0045d621: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045d623:; BB(0x0045d623);
    /* 0045d623: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0045d628: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 0045d62b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045d62d: mov word ptr [ecx + 2], bx */ W16((u32)(r_ecx+0x2u), (u16)r_ebx);
    /* 0045d631: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0045d634: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045d637: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0045d63a: jne 0x45d623 */ if (!fZ) goto L_0045d623;
L_0045d63c:; BB(0x0045d63c);
    /* 0045d63c: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_0045d640:; BB(0x0045d640);
    /* 0045d640: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0045d648: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045d64a: mov word ptr [esp + 0x10], di */ W16((u32)(r_esp+0x10u), (u16)r_edi);
    /* 0045d64f: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0045d654: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0045d658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d65c: call 0x6e6bf4 */ r_esp -= 4; W32(r_esp, 0x45d661u); f_006e6bf4();
    /* 0045d661: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d664:; BB(0x0045d664);
    /* 0045d664: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045d667: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d66a: jl 0x45d609 */ if ((fS!=fO)) goto L_0045d609;
L_0045d66c:; BB(0x0045d66c);
    /* 0045d66c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0045d66f: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0045d673: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d675: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d67a: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x45d67fu); f_006ff5f8();
    /* 0045d67f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d682: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0045d688: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045d68b: mov dword ptr [ebx + 0x3a0], edx */ W32((u32)(r_ebx+0x3a0u), r_edx);
    /* 0045d691: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045d693: jl 0x45d69b */ if ((fS!=fO)) goto L_0045d69b;
L_0045d695:; BB(0x0045d695);
    /* 0045d695: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d698: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d699: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d69a: ret  */ FN_RET(0x0045d640); r_esp += 4; return;
L_0045d69b:; BB(0x0045d69b);
    /* 0045d69b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045d69e: lea eax, [ebx + 0x42c] */ r_eax = (u32)(r_ebx+0x42cu);
    /* 0045d6a4: lea edi, [ebx + 0x440] */ r_edi = (u32)(r_ebx+0x440u);
    /* 0045d6aa: mov esi, eax */ r_esi = r_eax;
L_0045d6ac:; BB(0x0045d6ac);
    /* 0045d6ac: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0045d6ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d6b0: je 0x45d6bf */ if (fZ) goto L_0045d6bf;
L_0045d6b2:; BB(0x0045d6b2);
    /* 0045d6b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d6b3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45d6b8u); f_005cdcc0();
    /* 0045d6b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d6b9: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0045d6bf:; BB(0x0045d6bf);
    /* 0045d6bf: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045d6c2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045d6c4: ja 0x45d6ac */ if ((!fC&&!fZ)) goto L_0045d6ac;
L_0045d6c6:; BB(0x0045d6c6);
    /* 0045d6c6: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0045d6c9: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045d6cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045d6d1: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 0045d6db: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45d6e0u); f_0045d43c();
    /* 0045d6e0: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045d6e6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045d6e9: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045d6f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d6f2: je 0x45d6f8 */ if (fZ) goto L_0045d6f8;
L_0045d6f4:; BB(0x0045d6f4);
    /* 0045d6f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045d6f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d6f8u); call_ind(t); }
L_0045d6f8:; BB(0x0045d6f8);
    /* 0045d6f8: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d6fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d6fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d6fd: ret  */ FN_RET(0x0045d640); r_esp += 4; return;
}

void f_0045d700(void)
{
    FN_ENTER(0x0045d700);
    /* 0045d700: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d701: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d702: mov esi, ecx */ r_esi = r_ecx;
    /* 0045d704: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 0045d70a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d70c: jne 0x45d767 */ if (!fZ) goto L_0045d767;
L_0045d70e:; BB(0x0045d70e);
    /* 0045d70e: mov ecx, dword ptr [esi + 0x394] */ r_ecx = R32((u32)(r_esi+0x394u));
    /* 0045d714: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045d716: je 0x45d767 */ if (fZ) goto L_0045d767;
L_0045d718:; BB(0x0045d718);
    /* 0045d718: mov edi, dword ptr [esi + 0x3a8] */ r_edi = R32((u32)(r_esi+0x3a8u));
    /* 0045d71e: mov edx, dword ptr [esi + 0x3b0] */ r_edx = R32((u32)(r_esi+0x3b0u));
    /* 0045d724: and edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0045d727: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045d72a: mov eax, edi */ r_eax = r_edi;
    /* 0045d72c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045d72f: or eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d732: shl edi, 0xa */ { u32 c = (10u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045d735: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d737: mov edi, edx */ r_edi = r_edx;
    /* 0045d739: shl edi, 0xf */ { u32 c = (15u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045d73c: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d73e: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045d741: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d743: movzx edx, word ptr [esi + 0x3c0] */ r_edx = (u32)R16((u32)(r_esi+0x3c0u));
    /* 0045d74a: movzx esi, word ptr [esi + 0x3c2] */ r_esi = (u32)R16((u32)(r_esi+0x3c2u));
    /* 0045d751: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045d754: shl edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045d757: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d759: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045d75c: shl esi, 0x1b */ { u32 c = (27u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045d75f: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d762: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45d767u); f_0044cf88();
L_0045d767:; BB(0x0045d767);
    /* 0045d767: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045d768: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045d769: ret  */ FN_RET(0x0045d700); r_esp += 4; return;
}

void f_0045d76c(void) /* sub_45D76C */
{
    FN_ENTER(0x0045d76c);
    /* 0045d76c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d76d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d770: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045d772: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 0045d778: cmp eax, dword ptr [0xa458d0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d77e: jne 0x45d910 */ if (!fZ) goto L_0045d910;
L_0045d784:; BB(0x0045d784);
    /* 0045d784: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d786: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x45d78bu); f_0077a6cc();
    /* 0045d78b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d78c: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0045d792: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0045d795: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045d797: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045d799: jle 0x45d8fb */ if ((fZ||fS!=fO)) goto L_0045d8fb;
L_0045d79f:; BB(0x0045d79f);
    /* 0045d79f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0045d7a3: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0045d7a7: mov esi, eax */ r_esi = r_eax;
    /* 0045d7a9: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
L_0045d7ad:; BB(0x0045d7ad);
    /* 0045d7ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d7ae: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45d7b3u); f_0068d5a8();
    /* 0045d7b3: mov edi, eax */ r_edi = r_eax;
    /* 0045d7b5: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 0045d7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d7b9: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45d7beu); f_00453ab8();
    /* 0045d7be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d7c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d7c3: je 0x45d8e4 */ if (fZ) goto L_0045d8e4;
L_0045d7c9:; BB(0x0045d7c9);
    /* 0045d7c9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0045d7cc: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0045d7cf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045d7d2: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0045d7d5: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045d7db: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0045d7df: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0045d7e2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045d7e6: mov edx, edi */ r_edx = r_edi;
    /* 0045d7e8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45d7edu); f_0082f9c4();
    /* 0045d7ed: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0045d7f0: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x45d7f5u); f_0083173c();
    /* 0045d7f5: fcomp dword ptr [0x90040c] */ fx_compare(ST(0), R_F32((u32)(0x90040cu))); FPOP();
    /* 0045d7fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045d7fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045d7fe: jne 0x45d80a */ if (!fZ) goto L_0045d80a;
L_0045d800:; BB(0x0045d800);
    /* 0045d800: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0045d808: jmp 0x45d814 */ goto L_0045d814;
L_0045d80a:; BB(0x0045d80a);
    /* 0045d80a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0045d80d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45d812u); f_0082df08();
    /* 0045d812: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045d814:; BB(0x0045d814);
    /* 0045d814: movzx eax, byte ptr [0xa45848] */ r_eax = (u32)R8((u32)(0xa45848u));
    /* 0045d81b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045d81d: jne 0x45d831 */ if (!fZ) goto L_0045d831;
L_0045d81f:; BB(0x0045d81f);
    /* 0045d81f: mov dword ptr [0xa4584c], 0x420c0000 */ W32((u32)(0xa4584cu), 0x420c0000u);
    /* 0045d829: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d82c: mov byte ptr [0xa45848], al */ W8((u32)(0xa45848u), (u8)r_eax);
L_0045d831:; BB(0x0045d831);
    /* 0045d831: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045d833: jne 0x45d847 */ if (!fZ) goto L_0045d847;
L_0045d835:; BB(0x0045d835);
    /* 0045d835: mov dword ptr [0xa45850], 0x42960000 */ W32((u32)(0xa45850u), 0x42960000u);
    /* 0045d83f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d842: mov byte ptr [0xa45848], al */ W8((u32)(0xa45848u), (u8)r_eax);
L_0045d847:; BB(0x0045d847);
    /* 0045d847: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045d849: jne 0x45d862 */ if (!fZ) goto L_0045d862;
L_0045d84b:; BB(0x0045d84b);
    /* 0045d84b: mov edx, dword ptr [0xa4584c] */ r_edx = R32((u32)(0xa4584cu));
    /* 0045d851: mov dword ptr [0xa45854], edx */ W32((u32)(0xa45854u), r_edx);
    /* 0045d857: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045d85a: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d85d: mov byte ptr [0xa45848], al */ W8((u32)(0xa45848u), (u8)r_eax);
L_0045d862:; BB(0x0045d862);
    /* 0045d862: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045d864: jne 0x45d87c */ if (!fZ) goto L_0045d87c;
L_0045d866:; BB(0x0045d866);
    /* 0045d866: mov edx, dword ptr [0xa45850] */ r_edx = R32((u32)(0xa45850u));
    /* 0045d86c: mov dword ptr [0xa45858], edx */ W32((u32)(0xa45858u), r_edx);
    /* 0045d872: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045d877: mov byte ptr [0xa45848], al */ W8((u32)(0xa45848u), (u8)r_eax);
L_0045d87c:; BB(0x0045d87c);
    /* 0045d87c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x45d881u); f_008587a5();
    /* 0045d881: fld dword ptr [0xa45854] */ FPUSH(R_F32((u32)(0xa45854u)));
    /* 0045d887: fld dword ptr [0xa45858] */ FPUSH(R_F32((u32)(0xa45858u)));
    /* 0045d88d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045d890: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045d894: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045d898: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0045d89a: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0045d89c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0045d8a0: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0045d8a4: fdiv dword ptr [0x9003fc] */ ST(0) = ST(0) / R_F32((u32)(0x9003fcu));
    /* 0045d8aa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045d8ac: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0045d8af: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0045d8b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045d8b3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0045d8b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045d8b7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0045d8b9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0045d8bb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0045d8bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045d8c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045d8c2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0045d8c6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045d8ca: mov edx, edi */ r_edx = r_edi;
    /* 0045d8cc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45d8d1u); f_0082ebac();
    /* 0045d8d1: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0045d8d5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0045d8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d8d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045d8da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d8db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d8dc: call 0x6e9e14 */ r_esp -= 4; W32(r_esp, 0x45d8e1u); f_006e9e14();
    /* 0045d8e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d8e4:; BB(0x0045d8e4);
    /* 0045d8e4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045d8e7: cmp esi, dword ptr [0xaae168] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045d8ed: jl 0x45d7ad */ if ((fS!=fO)) goto L_0045d7ad;
L_0045d8f3:; BB(0x0045d8f3);
    /* 0045d8f3: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0045d8f7: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_0045d8fb:; BB(0x0045d8fb);
    /* 0045d8fb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0045d8fd: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d902: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x45d907u); f_006ff5f8();
    /* 0045d907: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d90a: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
L_0045d910:; BB(0x0045d910);
    /* 0045d910: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045d913: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0045d919: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045d91b: jl 0x45d922 */ if ((fS!=fO)) goto L_0045d922;
L_0045d91d:; BB(0x0045d91d);
    /* 0045d91d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d920: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d921: ret  */ FN_RET(0x0045d76c); r_esp += 4; return;
L_0045d922:; BB(0x0045d922);
    /* 0045d922: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0045d926: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0045d92a: lea edx, [ebx + 0x42c] */ r_edx = (u32)(r_ebx+0x42cu);
    /* 0045d930: lea eax, [ebx + 0x440] */ r_eax = (u32)(r_ebx+0x440u);
    /* 0045d936: mov esi, eax */ r_esi = r_eax;
    /* 0045d938: mov edi, edx */ r_edi = r_edx;
L_0045d93a:; BB(0x0045d93a);
    /* 0045d93a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0045d93c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d93e: je 0x45d94d */ if (fZ) goto L_0045d94d;
L_0045d940:; BB(0x0045d940);
    /* 0045d940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d941: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45d946u); f_005cdcc0();
    /* 0045d946: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d947: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045d94d:; BB(0x0045d94d);
    /* 0045d94d: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045d950: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045d952: ja 0x45d93a */ if ((!fC&&!fZ)) goto L_0045d93a;
L_0045d954:; BB(0x0045d954);
    /* 0045d954: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0045d958: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0045d95c: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045d962: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045d964: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 0045d96e: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45d973u); f_0045d43c();
    /* 0045d973: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0045d979: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045d97c: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045d983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d985: je 0x45d98b */ if (fZ) goto L_0045d98b;
L_0045d987:; BB(0x0045d987);
    /* 0045d987: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045d989: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45d98bu); call_ind(t); }
L_0045d98b:; BB(0x0045d98b);
    /* 0045d98b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d98e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d98f: ret  */ FN_RET(0x0045d76c); r_esp += 4; return;
}

void f_0045d990(void) /* sub_45D990 */
{
    FN_ENTER(0x0045d990);
    /* 0045d990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d991: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d992: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045d995: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045d997: movzx eax, word ptr [ebp + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebp+0x3c0u));
    /* 0045d99e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045d99f: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45d9a4u); f_00453ab8();
    /* 0045d9a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045d9a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9a7: je 0x45d9f6 */ if (fZ) goto L_0045d9f6;
L_0045d9a9:; BB(0x0045d9a9);
    /* 0045d9a9: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045d9af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045d9b1: jne 0x45d9f0 */ if (!fZ) goto L_0045d9f0;
L_0045d9b3:; BB(0x0045d9b3);
    /* 0045d9b3: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0045d9b8: movzx eax, word ptr [ebp + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebp+0x3c0u));
    /* 0045d9bf: mov word ptr [ebp + 0x3c2], ax */ W16((u32)(r_ebp+0x3c2u), (u16)r_eax);
    /* 0045d9c6: mov word ptr [ebp + 0x3c0], dx */ W16((u32)(r_ebp+0x3c0u), (u16)r_edx);
    /* 0045d9cd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045d9cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d9d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d9d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d9d2: push 0x389 */ { u32 v = 0x389u; r_esp -= 4; W32(r_esp, v); }
    /* 0045d9d7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45d9dcu); f_00814298();
    /* 0045d9dc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045d9df: mov dword ptr [ebp + 0x3c4], 0 */ W32((u32)(r_ebp+0x3c4u), 0x0u);
    /* 0045d9e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045d9eb: call 0x45c3f0 */ r_esp -= 4; W32(r_esp, 0x45d9f0u); f_0045c3f0();
L_0045d9f0:; BB(0x0045d9f0);
    /* 0045d9f0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045d9f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045d9f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d9f5: ret  */ FN_RET(0x0045d990); r_esp += 4; return;
L_0045d9f6:; BB(0x0045d9f6);
    /* 0045d9f6: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045d9fb: mov word ptr [ebp + 0x3c0], ax */ W16((u32)(r_ebp+0x3c0u), (u16)r_eax);
    /* 0045da02: mov word ptr [ebp + 0x3c2], ax */ W16((u32)(r_ebp+0x3c2u), (u16)r_eax);
    /* 0045da09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045da0b: call 0x45e284 */ r_esp -= 4; W32(r_esp, 0x45da10u); f_0045e284();
    /* 0045da10: mov ebx, eax */ r_ebx = r_eax;
    /* 0045da12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045da14: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45da19u); f_007751b0();
    /* 0045da19: fld dword ptr [0x9003f8] */ FPUSH(R_F32((u32)(0x9003f8u)));
    /* 0045da1f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045da21: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045da24: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045da28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045da2d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045da31: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045da35: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045da39: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045da3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045da3e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045da42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da43: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045da46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da48: call 0x45e338 */ r_esp -= 4; W32(r_esp, 0x45da4du); f_0045e338();
    /* 0045da4d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045da50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045da51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045da52: ret  */ FN_RET(0x0045d990); r_esp += 4; return;
}

void f_0045da00(void)
{
    FN_ENTER(0x0045da00);
    /* 0045da00: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045da02: mov word ptr [ebp + 0x3c2], ax */ W16((u32)(r_ebp+0x3c2u), (u16)r_eax);
    /* 0045da09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045da0b: call 0x45e284 */ r_esp -= 4; W32(r_esp, 0x45da10u); f_0045e284();
    /* 0045da10: mov ebx, eax */ r_ebx = r_eax;
    /* 0045da12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045da14: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45da19u); f_007751b0();
    /* 0045da19: fld dword ptr [0x9003f8] */ FPUSH(R_F32((u32)(0x9003f8u)));
    /* 0045da1f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045da21: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045da24: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045da28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045da2d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045da31: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045da35: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045da39: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045da3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045da3e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045da42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da43: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045da46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045da48: call 0x45e338 */ r_esp -= 4; W32(r_esp, 0x45da4du); f_0045e338();
    /* 0045da4d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045da50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045da51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045da52: ret  */ FN_RET(0x0045da00); r_esp += 4; return;
}

void f_0045da54(void) /* sub_45DA54 */
{
    FN_ENTER(0x0045da54);
    /* 0045da54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045da55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045da56: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045da59: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045da5b: movzx eax, word ptr [ebp + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebp+0x3c0u));
    /* 0045da62: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045da67: je 0x45dd85 */ if (fZ) goto L_0045dd85;
L_0045da6d:; BB(0x0045da6d);
    /* 0045da6d: je 0x45daa4 */ if (fZ) goto L_0045daa4;
L_0045da6f:; BB(0x0045da6f);
    /* 0045da6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045da70: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45da75u); f_0068d5a8();
    /* 0045da75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045da76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045da78: je 0x45dc7d */ if (fZ) goto L_0045dc7d;
L_0045da7e:; BB(0x0045da7e);
    /* 0045da7e: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 0045da84: mov esi, dword ptr [eax + 0x304] */ r_esi = R32((u32)(r_eax+0x304u));
    /* 0045da8a: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0045da90: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0045da93: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0045da97: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045da9b: movzx eax, word ptr [ebp + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebp+0x3c0u));
    /* 0045daa2: jmp 0x45dabb */ goto L_0045dabb;
L_0045daa4:; BB(0x0045daa4);
    /* 0045daa4: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0045daac: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045dab4: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_0045dabb:; BB(0x0045dabb);
    /* 0045dabb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dabc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045dabe: call 0x45d46c */ r_esp -= 4; W32(r_esp, 0x45dac3u); f_0045d46c();
    /* 0045dac3: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045dac9: cmp eax, dword ptr [0xa458d4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dacf: jne 0x45db1c */ if (!fZ) goto L_0045db1c;
L_0045dad1:; BB(0x0045dad1);
    /* 0045dad1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045dad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dad6: push 0x38b */ { u32 v = 0x38bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045dadb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45dae0u); f_00814298();
    /* 0045dae0: movsx eax, word ptr [ebp + 0x3c0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x3c0u));
    /* 0045dae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dae8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0045daea: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045daef: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x45daf4u); f_006ff4ac();
    /* 0045daf4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045daf7: mov eax, dword ptr [0x9a64a4] */ r_eax = R32((u32)(0x9a64a4u));
    /* 0045dafc: mov dword ptr [ebp + 0x3f8], 5 */ W32((u32)(r_ebp+0x3f8u), 0x5u);
    /* 0045db06: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 0045db0c: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045db12: mov dword ptr [ebp + 0x3fc], 0 */ W32((u32)(r_ebp+0x3fcu), 0x0u);
L_0045db1c:; BB(0x0045db1c);
    /* 0045db1c: cmp eax, dword ptr [0xa458d8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045db22: lea esi, [ebp + 0x47c] */ r_esi = (u32)(r_ebp+0x47cu);
    /* 0045db28: jge 0x45db49 */ if ((fS==fO)) goto L_0045db49;
L_0045db2a:; BB(0x0045db2a);
    /* 0045db2a: mov ecx, dword ptr [ebp + 0x434] */ r_ecx = R32((u32)(r_ebp+0x434u));
    /* 0045db30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db32: je 0x45db67 */ if (fZ) goto L_0045db67;
L_0045db34:; BB(0x0045db34);
    /* 0045db34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045db35: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45db3au); f_005cdcc0();
    /* 0045db3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045db3b: mov dword ptr [ebp + 0x434], 0 */ W32((u32)(r_ebp+0x434u), 0x0u);
    /* 0045db45: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045db47: jmp 0x45db67 */ goto L_0045db67;
L_0045db49:; BB(0x0045db49);
    /* 0045db49: cmp eax, dword ptr [0xa458dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045db4f: jg 0x45db61 */ if ((!fZ&&fS==fO)) goto L_0045db61;
L_0045db51:; BB(0x0045db51);
    /* 0045db51: mov ecx, dword ptr [ebp + 0x434] */ r_ecx = R32((u32)(r_ebp+0x434u));
    /* 0045db57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db59: je 0x45dc89 */ if (fZ) goto L_0045dc89;
L_0045db5f:; BB(0x0045db5f);
    /* 0045db5f: jmp 0x45db67 */ goto L_0045db67;
L_0045db61:; BB(0x0045db61);
    /* 0045db61: mov ecx, dword ptr [ebp + 0x434] */ r_ecx = R32((u32)(r_ebp+0x434u));
L_0045db67:; BB(0x0045db67);
    /* 0045db67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db69: je 0x45db71 */ if (fZ) goto L_0045db71;
L_0045db6b:; BB(0x0045db6b);
    /* 0045db6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045db6c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45db71u); f_00508db8();
L_0045db71:; BB(0x0045db71);
    /* 0045db71: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045db77: cmp eax, dword ptr [0xa458dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db7d: jne 0x45db98 */ if (!fZ) goto L_0045db98;
L_0045db7f:; BB(0x0045db7f);
    /* 0045db7f: movzx eax, word ptr [ebp + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebp+0x3c0u));
    /* 0045db86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045db87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045db89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045db8a: call 0x4535e0 */ r_esp -= 4; W32(r_esp, 0x45db8fu); f_004535e0();
    /* 0045db8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045db92: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
L_0045db98:; BB(0x0045db98);
    /* 0045db98: cmp eax, dword ptr [0xa458e0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045db9e: jne 0x45dbc9 */ if (!fZ) goto L_0045dbc9;
L_0045dba0:; BB(0x0045dba0);
    /* 0045dba0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045dba3: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dba6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x45dbabu); f_0050b510();
    /* 0045dbab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045dbae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dbb0: je 0x45dbc3 */ if (fZ) goto L_0045dbc3;
L_0045dbb2:; BB(0x0045dbb2);
    /* 0045dbb2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dbb4: mov ecx, eax */ r_ecx = r_eax;
    /* 0045dbb6: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45dbbbu); f_00508efc();
    /* 0045dbbb: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045dbc1: jmp 0x45dbc9 */ goto L_0045dbc9;
L_0045dbc3:; BB(0x0045dbc3);
    /* 0045dbc3: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
L_0045dbc9:; BB(0x0045dbc9);
    /* 0045dbc9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045dbcc: jge 0x45dc0e */ if ((fS==fO)) goto L_0045dc0e;
L_0045dbce:; BB(0x0045dbce);
    /* 0045dbce: mov ecx, dword ptr [ebp + 0x438] */ r_ecx = R32((u32)(r_ebp+0x438u));
    /* 0045dbd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dbd6: je 0x45dbeb */ if (fZ) goto L_0045dbeb;
L_0045dbd8:; BB(0x0045dbd8);
    /* 0045dbd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dbd9: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45dbdeu); f_005cdcc0();
    /* 0045dbde: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045dbdf: mov dword ptr [ebp + 0x438], 0 */ W32((u32)(r_ebp+0x438u), 0x0u);
    /* 0045dbe9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0045dbeb:; BB(0x0045dbeb);
    /* 0045dbeb: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0045dbf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dbf3: je 0x45dc40 */ if (fZ) goto L_0045dc40;
L_0045dbf5:; BB(0x0045dbf5);
    /* 0045dbf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dbf6: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45dbfbu); f_005cdcc0();
    /* 0045dbfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045dbfc: mov ecx, dword ptr [ebp + 0x438] */ r_ecx = R32((u32)(r_ebp+0x438u));
    /* 0045dc02: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 0045dc0c: jmp 0x45dc40 */ goto L_0045dc40;
L_0045dc0e:; BB(0x0045dc0e);
    /* 0045dc0e: cmp eax, dword ptr [0xa458e4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa458e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045dc14: jg 0x45dc3a */ if ((!fZ&&fS==fO)) goto L_0045dc3a;
L_0045dc16:; BB(0x0045dc16);
    /* 0045dc16: mov eax, dword ptr [ebp + 0x438] */ r_eax = R32((u32)(r_ebp+0x438u));
    /* 0045dc1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dc1e: je 0x45dcf3 */ if (fZ) goto L_0045dcf3;
L_0045dc24:; BB(0x0045dc24);
    /* 0045dc24: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0045dc2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dc2c: je 0x45dcb9 */ if (fZ) goto L_0045dcb9;
L_0045dc32:; BB(0x0045dc32);
    /* 0045dc32: mov ecx, dword ptr [ebp + 0x438] */ r_ecx = R32((u32)(r_ebp+0x438u));
    /* 0045dc38: jmp 0x45dc40 */ goto L_0045dc40;
L_0045dc3a:; BB(0x0045dc3a);
    /* 0045dc3a: mov ecx, dword ptr [ebp + 0x438] */ r_ecx = R32((u32)(r_ebp+0x438u));
L_0045dc40:; BB(0x0045dc40);
    /* 0045dc40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dc42: je 0x45dc4d */ if (fZ) goto L_0045dc4d;
L_0045dc44:; BB(0x0045dc44);
    /* 0045dc44: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045dc47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc48: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45dc4du); f_00508db8();
L_0045dc4d:; BB(0x0045dc4d);
    /* 0045dc4d: mov ecx, dword ptr [ebp + 0x43c] */ r_ecx = R32((u32)(r_ebp+0x43cu));
    /* 0045dc53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dc55: je 0x45dc60 */ if (fZ) goto L_0045dc60;
L_0045dc57:; BB(0x0045dc57);
    /* 0045dc57: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045dc5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc5b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45dc60u); f_00508db8();
L_0045dc60:; BB(0x0045dc60);
    /* 0045dc60: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045dc66: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045dc69: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 0045dc6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045dc71: jl 0x45dd20 */ if ((fS!=fO)) goto L_0045dd20;
L_0045dc77:; BB(0x0045dc77);
    /* 0045dc77: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045dc7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dc7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045dc7c: ret  */ FN_RET(0x0045da54); r_esp += 4; return;
L_0045dc7d:; BB(0x0045dc7d);
    /* 0045dc7d: movzx eax, word ptr [ebp + 0x3c0] */ r_eax = (u32)R16((u32)(r_ebp+0x3c0u));
    /* 0045dc84: jmp 0x45daa4 */ goto L_0045daa4;
L_0045dc89:; BB(0x0045dc89);
    /* 0045dc89: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045dc8f: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45dc94u); f_00509590();
    /* 0045dc94: mov ecx, eax */ r_ecx = r_eax;
    /* 0045dc96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045dc99: mov dword ptr [ebp + 0x434], ecx */ W32((u32)(r_ebp+0x434u), r_ecx);
    /* 0045dc9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dca1: je 0x45db67 */ if (fZ) goto L_0045db67;
L_0045dca7:; BB(0x0045dca7);
    /* 0045dca7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dca9: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45dcaeu); f_00508efc();
    /* 0045dcae: mov ecx, dword ptr [ebp + 0x434] */ r_ecx = R32((u32)(r_ebp+0x434u));
    /* 0045dcb4: jmp 0x45db67 */ goto L_0045db67;
L_0045dcb9:; BB(0x0045dcb9);
    /* 0045dcb9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045dcbc: push 0x139 */ { u32 v = 0x139u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dcc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dcc2: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45dcc7u); f_00509590();
    /* 0045dcc7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045dcca: mov dword ptr [ebp + 0x43c], eax */ W32((u32)(r_ebp+0x43cu), r_eax);
    /* 0045dcd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dcd2: je 0x45dce8 */ if (fZ) goto L_0045dce8;
L_0045dcd4:; BB(0x0045dcd4);
    /* 0045dcd4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dcd6: mov ecx, eax */ r_ecx = r_eax;
    /* 0045dcd8: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45dcddu); f_00508efc();
    /* 0045dcdd: mov ecx, dword ptr [ebp + 0x438] */ r_ecx = R32((u32)(r_ebp+0x438u));
    /* 0045dce3: jmp 0x45dc40 */ goto L_0045dc40;
L_0045dce8:; BB(0x0045dce8);
    /* 0045dce8: mov ecx, dword ptr [ebp + 0x438] */ r_ecx = R32((u32)(r_ebp+0x438u));
    /* 0045dcee: jmp 0x45dc40 */ goto L_0045dc40;
L_0045dcf3:; BB(0x0045dcf3);
    /* 0045dcf3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045dcf6: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 0045dcfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045dcfc: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45dd01u); f_00509590();
    /* 0045dd01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045dd04: mov dword ptr [ebp + 0x438], eax */ W32((u32)(r_ebp+0x438u), r_eax);
    /* 0045dd0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dd0c: je 0x45dc24 */ if (fZ) goto L_0045dc24;
L_0045dd12:; BB(0x0045dd12);
    /* 0045dd12: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045dd14: mov ecx, eax */ r_ecx = r_eax;
    /* 0045dd16: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45dd1bu); f_00508efc();
    /* 0045dd1b: jmp 0x45dc24 */ goto L_0045dc24;
L_0045dd20:; BB(0x0045dd20);
    /* 0045dd20: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0045dd24: lea eax, [ebp + 0x42c] */ r_eax = (u32)(r_ebp+0x42cu);
    /* 0045dd2a: lea esi, [ebp + 0x440] */ r_esi = (u32)(r_ebp+0x440u);
    /* 0045dd30: mov edi, eax */ r_edi = r_eax;
L_0045dd32:; BB(0x0045dd32);
    /* 0045dd32: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0045dd34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dd36: je 0x45dd45 */ if (fZ) goto L_0045dd45;
L_0045dd38:; BB(0x0045dd38);
    /* 0045dd38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dd39: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45dd3eu); f_005cdcc0();
    /* 0045dd3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045dd3f: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045dd45:; BB(0x0045dd45);
    /* 0045dd45: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045dd48: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045dd4a: ja 0x45dd32 */ if ((!fC&&!fZ)) goto L_0045dd32;
L_0045dd4c:; BB(0x0045dd4c);
    /* 0045dd4c: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0045dd50: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045dd56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045dd58: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 0045dd62: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45dd67u); f_0045d43c();
    /* 0045dd67: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045dd6d: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045dd70: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045dd77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dd79: je 0x45dd7f */ if (fZ) goto L_0045dd7f;
L_0045dd7b:; BB(0x0045dd7b);
    /* 0045dd7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045dd7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45dd7fu); call_ind(t); }
L_0045dd7f:; BB(0x0045dd7f);
    /* 0045dd7f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045dd82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dd83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045dd84: ret  */ FN_RET(0x0045da54); r_esp += 4; return;
L_0045dd85:; BB(0x0045dd85);
    /* 0045dd85: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0045dd89: lea eax, [ebp + 0x42c] */ r_eax = (u32)(r_ebp+0x42cu);
    /* 0045dd8f: lea esi, [ebp + 0x440] */ r_esi = (u32)(r_ebp+0x440u);
    /* 0045dd95: mov edi, eax */ r_edi = r_eax;
L_0045dd97:; BB(0x0045dd97);
    /* 0045dd97: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0045dd99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045dd9b: je 0x45ddaa */ if (fZ) goto L_0045ddaa;
L_0045dd9d:; BB(0x0045dd9d);
    /* 0045dd9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045dd9e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45dda3u); f_005cdcc0();
    /* 0045dda3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045dda4: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045ddaa:; BB(0x0045ddaa);
    /* 0045ddaa: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045ddad: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045ddaf: ja 0x45dd97 */ if ((!fC&&!fZ)) goto L_0045dd97;
L_0045ddb1:; BB(0x0045ddb1);
    /* 0045ddb1: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0045ddb5: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045ddbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045ddbd: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 0045ddc7: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45ddccu); f_0045d43c();
    /* 0045ddcc: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045ddd2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045ddd5: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045dddc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ddde: je 0x45dde4 */ if (fZ) goto L_0045dde4;
L_0045dde0:; BB(0x0045dde0);
    /* 0045dde0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045dde2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45dde4u); call_ind(t); }
L_0045dde4:; BB(0x0045dde4);
    /* 0045dde4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045dde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045dde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045dde9: ret  */ FN_RET(0x0045da54); r_esp += 4; return;
}

void f_0045ddec(void)
{
    FN_ENTER(0x0045ddec);
    /* 0045ddec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045dded: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ddee: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045ddf0: movzx eax, word ptr [ebx + 0x3c2] */ r_eax = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045ddf7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ddfc: je 0x45de1c */ if (fZ) goto L_0045de1c;
L_0045ddfe:; BB(0x0045ddfe);
    /* 0045ddfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ddff: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45de04u); f_00453ab8();
    /* 0045de04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045de05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045de07: jne 0x45de1c */ if (!fZ) goto L_0045de1c;
L_0045de09:; BB(0x0045de09);
    /* 0045de09: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045de0e: mov word ptr [ebx + 0x3c0], ax */ W16((u32)(r_ebx+0x3c0u), (u16)r_eax);
    /* 0045de15: mov word ptr [ebx + 0x3c2], ax */ W16((u32)(r_ebx+0x3c2u), (u16)r_eax);
L_0045de1c:; BB(0x0045de1c);
    /* 0045de1c: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 0045de22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045de24: jne 0x45de58 */ if (!fZ) goto L_0045de58;
L_0045de26:; BB(0x0045de26);
    /* 0045de26: mov eax, dword ptr [ebx + 0x3c4] */ r_eax = R32((u32)(r_ebx+0x3c4u));
    /* 0045de2c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045de2f: mov dword ptr [ebx + 0x3c4], eax */ W32((u32)(r_ebx+0x3c4u), r_eax);
    /* 0045de35: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045de38: jge 0x45de5b */ if ((fS==fO)) goto L_0045de5b;
L_0045de3a:; BB(0x0045de3a);
    /* 0045de3a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045de3d: jl 0x45de51 */ if ((fS!=fO)) goto L_0045de51;
L_0045de3f:; BB(0x0045de3f);
    /* 0045de3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045de41: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45de46u); f_007751b0();
    /* 0045de46: fcomp dword ptr [0x900314] */ fx_compare(ST(0), R_F32((u32)(0x900314u))); FPOP();
    /* 0045de4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045de4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045de4f: jb 0x45de5b */ if (fC) goto L_0045de5b;
L_0045de51:; BB(0x0045de51);
    /* 0045de51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045de53: call 0x45c3f0 */ r_esp -= 4; W32(r_esp, 0x45de58u); f_0045c3f0();
L_0045de58:; BB(0x0045de58);
    /* 0045de58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045de59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045de5a: ret  */ FN_RET(0x0045ddec); r_esp += 4; return;
L_0045de5b:; BB(0x0045de5b);
    /* 0045de5b: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 0045de61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045de63: je 0x45deb4 */ if (fZ) goto L_0045deb4;
L_0045de65:; BB(0x0045de65);
    /* 0045de65: mov ebp, dword ptr [ebx + 0x3a8] */ r_ebp = R32((u32)(r_ebx+0x3a8u));
    /* 0045de6b: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 0045de71: and ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045de74: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045de77: mov eax, ebp */ r_eax = r_ebp;
    /* 0045de79: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045de7c: or eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045de7f: shl ebp, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045de82: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045de84: mov ebp, edx */ r_ebp = r_edx;
    /* 0045de86: shl ebp, 0xf */ { u32 c = (15u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045de89: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045de8b: shl edx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045de8e: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045de90: movzx edx, word ptr [ebx + 0x3c0] */ r_edx = (u32)R16((u32)(r_ebx+0x3c0u));
    /* 0045de97: movzx ebx, word ptr [ebx + 0x3c2] */ r_ebx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045de9e: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045dea1: shl edx, 0x17 */ { u32 c = (23u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045dea4: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045dea6: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045dea9: shl ebx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045deac: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045deae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045deaf: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45deb4u); f_0044cf88();
L_0045deb4:; BB(0x0045deb4);
    /* 0045deb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045deb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045deb6: ret  */ FN_RET(0x0045ddec); r_esp += 4; return;
}

void f_0045deb8(void) /* sub_45DEB8 */
{
    FN_ENTER(0x0045deb8);
    /* 0045deb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045deb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045deba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045debb: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045debe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045dec0: mov eax, dword ptr [0xa458e8] */ r_eax = R32((u32)(0xa458e8u));
    /* 0045dec5: fld dword ptr [0x9003f0] */ FPUSH(R_F32((u32)(0x9003f0u)));
    /* 0045decb: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 0045ded1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ded3: jle 0x45deef */ if ((fZ||fS!=fO)) goto L_0045deef;
L_0045ded5:; BB(0x0045ded5);
    /* 0045ded5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045ded7: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0045dedb: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 0045dedf: fdiv dword ptr [0x9003ec] */ ST(0) = ST(0) / R_F32((u32)(0x9003ecu));
    /* 0045dee5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045dee7: fst dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0));
    /* 0045deed: jmp 0x45defa */ goto L_0045defa;
L_0045deef:; BB(0x0045deef);
    /* 0045deef: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0045def4: mov dword ptr [ebp + 0x3a4], eax */ W32((u32)(r_ebp+0x3a4u), r_eax);
L_0045defa:; BB(0x0045defa);
    /* 0045defa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045defd: call 0x453a10 */ r_esp -= 4; W32(r_esp, 0x45df02u); f_00453a10();
    /* 0045df02: movzx eax, byte ptr [0xa45880] */ r_eax = (u32)R8((u32)(0xa45880u));
    /* 0045df09: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 0045df0f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045df11: jne 0x45df27 */ if (!fZ) goto L_0045df27;
L_0045df13:; BB(0x0045df13);
    /* 0045df13: mov dword ptr [0xa45884], 0x42c80000 */ W32((u32)(0xa45884u), 0x42c80000u);
    /* 0045df1d: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045df22: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045df27:; BB(0x0045df27);
    /* 0045df27: mov edi, dword ptr [ebp + 0x3b4] */ r_edi = R32((u32)(r_ebp+0x3b4u));
    /* 0045df2d: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 0045df33: shl edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045df36: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045df39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045df3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045df3b: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x45df40u); f_007a900c();
    /* 0045df40: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0045df44: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 0045df48: fmul dword ptr [ebp + 0x3a4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a4u));
    /* 0045df4e: fnstcw word ptr [esp + 0x3c] */ W16((u32)(r_esp+0x3cu), fcw);
    /* 0045df52: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 0045df57: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045df5c: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0045df60: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 0045df64: fistp dword ptr [esp + 0x4c] */ W32((u32)(r_esp+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0045df68: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0045df6c: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0045df70: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045df72: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0045df74: push 0x888 */ { u32 v = 0x888u; r_esp -= 4; W32(r_esp, v); }
    /* 0045df79: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045df7a: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045df7d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x45df82u); f_007a8c74();
    /* 0045df82: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045df85: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0045df88: movzx eax, byte ptr [0xa45880] */ r_eax = (u32)R8((u32)(0xa45880u));
    /* 0045df8f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045df91: jne 0x45dfbf */ if (!fZ) goto L_0045dfbf;
L_0045df93:; BB(0x0045df93);
    /* 0045df93: mov edx, dword ptr [0xa45860] */ r_edx = R32((u32)(0xa45860u));
    /* 0045df99: mov edi, dword ptr [0xa45894] */ r_edi = R32((u32)(0xa45894u));
    /* 0045df9f: mov dword ptr [0xa45888], edx */ W32((u32)(0xa45888u), r_edx);
    /* 0045dfa5: mov edx, dword ptr [0xa45864] */ r_edx = R32((u32)(0xa45864u));
    /* 0045dfab: mov dword ptr [0xa4588c], edi */ W32((u32)(0xa4588cu), r_edi);
    /* 0045dfb1: mov dword ptr [0xa45890], edx */ W32((u32)(0xa45890u), r_edx);
    /* 0045dfb7: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045dfba: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045dfbf:; BB(0x0045dfbf);
    /* 0045dfbf: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045dfc1: jne 0x45dff1 */ if (!fZ) goto L_0045dff1;
L_0045dfc3:; BB(0x0045dfc3);
    /* 0045dfc3: mov edx, dword ptr [0xa45860] */ r_edx = R32((u32)(0xa45860u));
    /* 0045dfc9: mov edi, dword ptr [0xa458a4] */ r_edi = R32((u32)(0xa458a4u));
    /* 0045dfcf: mov dword ptr [0xa45898], edx */ W32((u32)(0xa45898u), r_edx);
    /* 0045dfd5: mov edx, dword ptr [0xa45864] */ r_edx = R32((u32)(0xa45864u));
    /* 0045dfdb: mov dword ptr [0xa4589c], edi */ W32((u32)(0xa4589cu), r_edi);
    /* 0045dfe1: mov dword ptr [0xa458a0], edx */ W32((u32)(0xa458a0u), r_edx);
    /* 0045dfe7: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045dfec: mov byte ptr [0xa45880], al */ W8((u32)(0xa45880u), (u8)r_eax);
L_0045dff1:; BB(0x0045dff1);
    /* 0045dff1: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0045dff7: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 0045dffd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0045e001: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045e005: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 0045e009: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 0045e00d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045e00f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045e011: mov ebx, eax */ r_ebx = r_eax;
L_0045e013:; BB(0x0045e013);
    /* 0045e013: mov ebp, dword ptr [esp + edi*4 + 4] */ r_ebp = R32((u32)(r_esp+r_edi*4+0x4u));
    /* 0045e017: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e01a: jne 0x45e03f */ if (!fZ) goto L_0045e03f;
L_0045e01c:; BB(0x0045e01c);
    /* 0045e01c: mov edx, dword ptr [0xa45888] */ r_edx = R32((u32)(0xa45888u));
    /* 0045e022: mov ecx, dword ptr [0xa4588c] */ r_ecx = R32((u32)(0xa4588cu));
    /* 0045e028: mov ebp, dword ptr [0xa45890] */ r_ebp = R32((u32)(0xa45890u));
    /* 0045e02e: mov dword ptr [esp + ebx + 0xc], edx */ W32((u32)(r_esp+r_ebx+0xcu), r_edx);
    /* 0045e032: mov dword ptr [esp + ebx + 0x10], ecx */ W32((u32)(r_esp+r_ebx+0x10u), r_ecx);
    /* 0045e036: mov dword ptr [esp + ebx + 0x14], ebp */ W32((u32)(r_esp+r_ebx+0x14u), r_ebp);
    /* 0045e03a: jmp 0x45e0bf */ goto L_0045e0bf;
L_0045e03f:; BB(0x0045e03f);
    /* 0045e03f: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e042: jne 0x45e064 */ if (!fZ) goto L_0045e064;
L_0045e044:; BB(0x0045e044);
    /* 0045e044: mov edx, dword ptr [0xa45898] */ r_edx = R32((u32)(0xa45898u));
    /* 0045e04a: mov ecx, dword ptr [0xa4589c] */ r_ecx = R32((u32)(0xa4589cu));
    /* 0045e050: mov ebp, dword ptr [0xa458a0] */ r_ebp = R32((u32)(0xa458a0u));
    /* 0045e056: mov dword ptr [esp + ebx + 0xc], edx */ W32((u32)(r_esp+r_ebx+0xcu), r_edx);
    /* 0045e05a: mov dword ptr [esp + ebx + 0x10], ecx */ W32((u32)(r_esp+r_ebx+0x10u), r_ecx);
    /* 0045e05e: mov dword ptr [esp + ebx + 0x14], ebp */ W32((u32)(r_esp+r_ebx+0x14u), r_ebp);
    /* 0045e062: jmp 0x45e0bf */ goto L_0045e0bf;
L_0045e064:; BB(0x0045e064);
    /* 0045e064: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0045e067: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045e069: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0045e06c: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045e06e: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0045e071: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e073: mov edx, dword ptr [0xa45888] */ r_edx = R32((u32)(0xa45888u));
    /* 0045e079: mov dword ptr [esp + esi + 0xc], edx */ W32((u32)(r_esp+r_esi+0xcu), r_edx);
    /* 0045e07d: mov edx, dword ptr [0xa4588c] */ r_edx = R32((u32)(0xa4588cu));
    /* 0045e083: mov dword ptr [esp + esi + 0x10], edx */ W32((u32)(r_esp+r_esi+0x10u), r_edx);
    /* 0045e087: mov edx, dword ptr [0xa45890] */ r_edx = R32((u32)(0xa45890u));
    /* 0045e08d: mov dword ptr [esp + esi + 0x14], edx */ W32((u32)(r_esp+r_esi+0x14u), r_edx);
    /* 0045e091: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45e096u); f_0082dcbc();
    /* 0045e096: fld dword ptr [0xa45884] */ FPUSH(R_F32((u32)(0xa45884u)));
    /* 0045e09c: fchs  */ ST(0) = -ST(0);
    /* 0045e09e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045e0a0: fadd dword ptr [esp + esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_esi+0xcu));
    /* 0045e0a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e0a6: fstp dword ptr [esp + esi + 0xc] */ W_F32((u32)(r_esp+r_esi+0xcu), ST(0)); FPOP();
    /* 0045e0aa: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45e0afu); f_0082ddd8();
    /* 0045e0af: fld dword ptr [0xa45884] */ FPUSH(R_F32((u32)(0xa45884u)));
    /* 0045e0b5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045e0b7: fadd dword ptr [esp + esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_esi+0x14u));
    /* 0045e0bb: fstp dword ptr [esp + esi + 0x14] */ W_F32((u32)(r_esp+r_esi+0x14u), ST(0)); FPOP();
L_0045e0bf:; BB(0x0045e0bf);
    /* 0045e0bf: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045e0c2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045e0c5: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e0c8: jl 0x45e013 */ if ((fS!=fO)) goto L_0045e013;
L_0045e0ce:; BB(0x0045e0ce);
    /* 0045e0ce: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 0045e0d2: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 0045e0d6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0045e0da: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0045e0de: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0045e0e1: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0045e0e5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045e0e9: mov dword ptr [ebp + 0x3c], edi */ W32((u32)(r_ebp+0x3cu), r_edi);
    /* 0045e0ec: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0045e0ef: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0045e0f2: mov ecx, edi */ r_ecx = r_edi;
    /* 0045e0f4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45e0f9u); f_0082f9c4();
    /* 0045e0f9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045e0fd: fld dword ptr [ebp + 0x3a4] */ FPUSH(R_F32((u32)(r_ebp+0x3a4u)));
    /* 0045e103: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0045e106: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045e108: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0045e10b: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0045e10e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045e110: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0045e112: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0045e114: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045e116: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045e118: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0045e11b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045e11d: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0045e120: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0045e123: mov ecx, edi */ r_ecx = r_edi;
    /* 0045e125: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45e12au); f_0082ebac();
    /* 0045e12a: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 0045e130: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e133: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 0045e139: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045e13b: jl 0x45e144 */ if ((fS!=fO)) goto L_0045e144;
L_0045e13d:; BB(0x0045e13d);
    /* 0045e13d: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e141: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e142: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045e143: ret  */ FN_RET(0x0045deb8); r_esp += 4; return;
L_0045e144:; BB(0x0045e144);
    /* 0045e144: lea eax, [ebp + 0x42c] */ r_eax = (u32)(r_ebp+0x42cu);
    /* 0045e14a: lea edi, [ebp + 0x440] */ r_edi = (u32)(r_ebp+0x440u);
    /* 0045e150: mov esi, eax */ r_esi = r_eax;
L_0045e152:; BB(0x0045e152);
    /* 0045e152: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0045e154: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e156: je 0x45e165 */ if (fZ) goto L_0045e165;
L_0045e158:; BB(0x0045e158);
    /* 0045e158: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e159: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45e15eu); f_005cdcc0();
    /* 0045e15e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045e15f: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0045e165:; BB(0x0045e165);
    /* 0045e165: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045e168: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045e16a: ja 0x45e152 */ if ((!fC&&!fZ)) goto L_0045e152;
L_0045e16c:; BB(0x0045e16c);
    /* 0045e16c: push dword ptr [0x9a6538] */ { u32 v = R32((u32)(0x9a6538u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045e172: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 0045e17c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e17e: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45e183u); f_0045d43c();
    /* 0045e183: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045e189: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045e18c: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045e193: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e195: je 0x45e19b */ if (fZ) goto L_0045e19b;
L_0045e197:; BB(0x0045e197);
    /* 0045e197: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045e199: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45e19bu); call_ind(t); }
L_0045e19b:; BB(0x0045e19b);
    /* 0045e19b: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045e19e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e19f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045e1a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045e1a1: ret  */ FN_RET(0x0045deb8); r_esp += 4; return;
}

