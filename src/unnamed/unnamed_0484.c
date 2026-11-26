#include "protos.h"

void f_00484060(void) /* sub_484060 */
{
    FN_ENTER(0x00484060);
    /* 00484060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484061: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00484062: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00484064: fld dword ptr [0x9008e0] */ FPUSH(R_F32((u32)(0x9008e0u)));
    /* 0048406a: fadd dword ptr [ebp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x34u));
    /* 0048406d: fcom dword ptr [0x900888] */ fx_compare(ST(0), R_F32((u32)(0x900888u))); 
    /* 00484073: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00484075: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00484076: jbe 0x484084 */ if ((fC||fZ)) goto L_00484084;
L_00484078:; BB(0x00484078);
    /* 00484078: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048407a: mov eax, 0x43ae8000 */ r_eax = 0x43ae8000u;
    /* 0048407f: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 00484082: jmp 0x484087 */ goto L_00484087;
L_00484084:; BB(0x00484084);
    /* 00484084: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
L_00484087:; BB(0x00484087);
    /* 00484087: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484089: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048408b: lea ecx, [ebp + 0x40] */ r_ecx = (u32)(r_ebp+0x40u);
    /* 0048408e: call 0x48eb24 */ r_esp -= 4; W32(r_esp, 0x484093u); f_0048eb24();
    /* 00484093: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00484096: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484099: je 0x484204 */ if (fZ) goto L_00484204;
L_0048409f:; BB(0x0048409f);
    /* 0048409f: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840a4: je 0x4840cb */ if (fZ) goto L_004840cb;
L_004840a6:; BB(0x004840a6);
    /* 004840a6: cmp eax, 0x1b8 */ {  u32 a = r_eax; u32 b = 0x1b8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840ab: je 0x4840cb */ if (fZ) goto L_004840cb;
L_004840ad:; BB(0x004840ad);
    /* 004840ad: cmp eax, 0x154 */ {  u32 a = r_eax; u32 b = 0x154u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840b2: jne 0x4840e0 */ if (!fZ) goto L_004840e0;
L_004840b4:; BB(0x004840b4);
    /* 004840b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004840b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840b9: push 0x3d6 */ { u32 v = 0x3d6u; r_esp -= 4; W32(r_esp, v); }
    /* 004840be: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4840c3u); f_00814298();
    /* 004840c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004840c6: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004840c9: jmp 0x4840e0 */ goto L_004840e0;
L_004840cb:; BB(0x004840cb);
    /* 004840cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004840cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840d0: push 0x3c5 */ { u32 v = 0x3c5u; r_esp -= 4; W32(r_esp, v); }
    /* 004840d5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4840dau); f_00814298();
    /* 004840da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004840dd: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
L_004840e0:; BB(0x004840e0);
    /* 004840e0: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840e3: je 0x484101 */ if (fZ) goto L_00484101;
L_004840e5:; BB(0x004840e5);
    /* 004840e5: cmp eax, 0xc6 */ {  u32 a = r_eax; u32 b = 0xc6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840ea: je 0x484101 */ if (fZ) goto L_00484101;
L_004840ec:; BB(0x004840ec);
    /* 004840ec: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840f1: je 0x484101 */ if (fZ) goto L_00484101;
L_004840f3:; BB(0x004840f3);
    /* 004840f3: cmp eax, 0x13f */ {  u32 a = r_eax; u32 b = 0x13fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840f8: je 0x484101 */ if (fZ) goto L_00484101;
L_004840fa:; BB(0x004840fa);
    /* 004840fa: cmp eax, 0x1b8 */ {  u32 a = r_eax; u32 b = 0x1b8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840ff: jne 0x484113 */ if (!fZ) goto L_00484113;
L_00484101:; BB(0x00484101);
    /* 00484101: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00484103: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484108: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x48410du); f_006ff5f8();
    /* 0048410d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484110: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
L_00484113:; BB(0x00484113);
    /* 00484113: lea ebx, [ebp + 0x54] */ r_ebx = (u32)(r_ebp+0x54u);
    /* 00484116: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484119: je 0x4841e1 */ if (fZ) goto L_004841e1;
L_0048411f:; BB(0x0048411f);
    /* 0048411f: cmp eax, 0x8e */ {  u32 a = r_eax; u32 b = 0x8eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484124: je 0x484171 */ if (fZ) goto L_00484171;
L_00484126:; BB(0x00484126);
    /* 00484126: cmp eax, 0x1ac */ {  u32 a = r_eax; u32 b = 0x1acu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048412b: je 0x484171 */ if (fZ) goto L_00484171;
L_0048412d:; BB(0x0048412d);
    /* 0048412d: cmp eax, 0x11d */ {  u32 a = r_eax; u32 b = 0x11du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484132: jne 0x48416c */ if (!fZ) goto L_0048416c;
L_00484134:; BB(0x00484134);
    /* 00484134: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 00484137: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484139: je 0x484149 */ if (fZ) goto L_00484149;
L_0048413b:; BB(0x0048413b);
    /* 0048413b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048413c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x484141u); f_005cdcc0();
    /* 00484141: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00484142: mov dword ptr [ebp + 0x64], 0 */ W32((u32)(r_ebp+0x64u), 0x0u);
L_00484149:; BB(0x00484149);
    /* 00484149: push 0x210 */ { u32 v = 0x210u; r_esp -= 4; W32(r_esp, v); }
    /* 0048414e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048414f: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x484154u); f_00509590();
    /* 00484154: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484157: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 0048415a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048415c: je 0x4841a7 */ if (fZ) goto L_004841a7;
L_0048415e:; BB(0x0048415e);
    /* 0048415e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00484160: mov ecx, eax */ r_ecx = r_eax;
    /* 00484162: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x484167u); f_00508efc();
    /* 00484167: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 0048416a: jmp 0x4841a7 */ goto L_004841a7;
L_0048416c:; BB(0x0048416c);
    /* 0048416c: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 0048416f: jmp 0x4841a7 */ goto L_004841a7;
L_00484171:; BB(0x00484171);
    /* 00484171: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 00484174: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484176: je 0x484186 */ if (fZ) goto L_00484186;
L_00484178:; BB(0x00484178);
    /* 00484178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484179: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48417eu); f_005cdcc0();
    /* 0048417e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048417f: mov dword ptr [ebp + 0x64], 0 */ W32((u32)(r_ebp+0x64u), 0x0u);
L_00484186:; BB(0x00484186);
    /* 00484186: push 0x211 */ { u32 v = 0x211u; r_esp -= 4; W32(r_esp, v); }
    /* 0048418b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048418c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x484191u); f_00509590();
    /* 00484191: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484194: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 00484197: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484199: je 0x4841a7 */ if (fZ) goto L_004841a7;
L_0048419b:; BB(0x0048419b);
    /* 0048419b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048419d: mov ecx, eax */ r_ecx = r_eax;
    /* 0048419f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4841a4u); f_00508efc();
    /* 004841a4: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
L_004841a7:; BB(0x004841a7);
    /* 004841a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004841a9: je 0x4841b3 */ if (fZ) goto L_004841b3;
L_004841ab:; BB(0x004841ab);
    /* 004841ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004841ac: mov ecx, eax */ r_ecx = r_eax;
    /* 004841ae: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4841b3u); f_00508db8();
L_004841b3:; BB(0x004841b3);
    /* 004841b3: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004841b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004841b9: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 004841bc: cmp eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004841c1: jge 0x4841d1 */ if ((fS==fO)) goto L_004841d1;
L_004841c3:; BB(0x004841c3);
    /* 004841c3: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004841c6: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 004841cc: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004841cf: je 0x48421e */ if (fZ) goto L_0048421e;
L_004841d1:; BB(0x004841d1);
    /* 004841d1: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004841d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004841da: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004841de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004841df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004841e0: ret  */ FN_RET(0x00484060); r_esp += 4; return;
L_004841e1:; BB(0x004841e1);
    /* 004841e1: push 0x210 */ { u32 v = 0x210u; r_esp -= 4; W32(r_esp, v); }
    /* 004841e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004841e7: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4841ecu); f_00509590();
    /* 004841ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004841ef: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 004841f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004841f4: je 0x4841a7 */ if (fZ) goto L_004841a7;
L_004841f6:; BB(0x004841f6);
    /* 004841f6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004841f8: mov ecx, eax */ r_ecx = r_eax;
    /* 004841fa: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4841ffu); f_00508efc();
    /* 004841ff: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 00484202: jmp 0x4841a7 */ goto L_004841a7;
L_00484204:; BB(0x00484204);
    /* 00484204: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00484206: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484209: push 0x3b9 */ { u32 v = 0x3b9u; r_esp -= 4; W32(r_esp, v); }
    /* 0048420e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x484213u); f_00814298();
    /* 00484213: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484216: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00484219: jmp 0x48409f */ goto L_0048409f;
L_0048421e:; BB(0x0048421e);
    /* 0048421e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048421f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484220: ret  */ FN_RET(0x00484060); r_esp += 4; return;
}

void f_00484224(void) /* sub_484224 */
{
    FN_ENTER(0x00484224);
    /* 00484224: call 0x48422c */ r_esp -= 4; W32(r_esp, 0x484229u); f_0048422c();
    /* 00484229: ret  */ FN_RET(0x00484224); r_esp += 4; return;
}

void f_0048422c(void) /* sub_48422C */
{
    FN_ENTER(0x0048422c);
    /* 0048422c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048422d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048422f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x484234u); f_0082d7b0();
    /* 00484234: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x484239u); f_0082fa9c();
    /* 00484239: mov ecx, 0x9008e4 */ r_ecx = 0x9008e4u;
    /* 0048423e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x484243u); f_0082d838();
    /* 00484243: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00484246: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x48424bu); f_00829cc8();
    /* 0048424b: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048424e: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00484251: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00484254: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x484259u); f_0083046c();
    /* 00484259: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048425c: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 0048425f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x484264u); f_00829cc8();
    /* 00484264: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00484267: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x48426cu); f_00588428();
    /* 0048426c: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048426f: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00484272: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00484275: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x48427au); f_0083046c();
    /* 0048427a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048427d: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00484280: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x484285u); f_00452050();
    /* 00484285: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x48428au); f_0082faac();
    /* 0048428a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x48428fu); f_0082da80();
    /* 0048428f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484290: ret  */ FN_RET(0x0048422c); r_esp += 4; return;
}

void f_00484294(void) /* sub_484294 */
{
    FN_ENTER(0x00484294);
    /* 00484294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484295: mov ebp, esp */ r_ebp = r_esp;
    /* 00484297: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00484299: push 0x8cf962 */ { u32 v = 0x8cf962u; r_esp -= 4; W32(r_esp, v); }
    /* 0048429e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004842a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004842a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004842ac: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004842af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004842b2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004842b5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004842b8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004842bb: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004842bd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004842c4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4842c9u); f_005caba4();
    /* 004842c9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004842cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004842cf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004842d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004842d4: je 0x4843f0 */ if (fZ) goto L_004843f0;
L_004842da:; BB(0x004842da);
    /* 004842da: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004842e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004842e8: mov ecx, eax */ r_ecx = r_eax;
    /* 004842ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004842ed: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004842f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004842f1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4842f6u); f_008193cc();
    /* 004842f6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004842fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484300: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00484303: mov dword ptr [ecx], 0xaf8600 */ W32((u32)(r_ecx), 0xaf8600u);
    /* 00484309: mov eax, dword ptr [0x9a68a4] */ r_eax = R32((u32)(0x9a68a4u));
    /* 0048430e: mov ebx, dword ptr [0xa46fa0] */ r_ebx = R32((u32)(0xa46fa0u));
    /* 00484314: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00484317: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0048431a: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0048431d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0048431f:; BB(0x0048431f);
    /* 0048431f: mov esi, dword ptr [edi*4 + 0x9a7058] */ r_esi = R32((u32)(r_edi*4+0x9a7058u));
    /* 00484326: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484329: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048432a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48432fu); f_005b8610();
    /* 0048432f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484332: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484333: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00484336: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484338: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0048433b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048433d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484340: mov dword ptr [ebx + edx + 0x1c], eax */ W32((u32)(r_ebx+r_edx+0x1cu), r_eax);
    /* 00484344: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x484349u); f_005b8624();
    /* 00484349: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048434c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048434f: mov dword ptr [ebx + edx + 0x20], eax */ W32((u32)(r_ebx+r_edx+0x20u), r_eax);
    /* 00484353: push dword ptr [edi*4 + 0x9a68a8] */ { u32 v = R32((u32)(r_edi*4+0x9a68a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048435a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48435fu); f_005b8638();
    /* 0048435f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484362: mov dword ptr [ebx + edx + 0x24], eax */ W32((u32)(r_ebx+r_edx+0x24u), r_eax);
    /* 00484366: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484369: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048436c: jl 0x48431f */ if ((fS!=fO)) goto L_0048431f;
L_0048436e:; BB(0x0048436e);
    /* 0048436e: mov eax, edx */ r_eax = r_edx;
    /* 00484370: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 00484373: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484374: push 0x9008bc */ { u32 v = 0x9008bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00484379: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x48437eu); f_0058836c();
    /* 0048437e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484381: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484384: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
    /* 0048438b: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0048438e: lea ecx, [edx + 0x40] */ r_ecx = (u32)(r_edx+0x40u);
    /* 00484391: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00484393: push 0x9008a4 */ { u32 v = 0x9008a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484398: call 0x48ebc4 */ r_esp -= 4; W32(r_esp, 0x48439du); f_0048ebc4();
    /* 0048439d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048439f: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4843a4u); f_004d31f4();
    /* 004843a4: push 0x900898 */ { u32 v = 0x900898u; r_esp -= 4; W32(r_esp, v); }
    /* 004843a9: mov eax, 0x9008e4 */ r_eax = 0x9008e4u;
    /* 004843ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004843af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004843b0: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x4843b5u); f_004d681c();
    /* 004843b5: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 004843ba: push 0x90088c */ { u32 v = 0x90088cu; r_esp -= 4; W32(r_esp, v); }
    /* 004843bf: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4843c4u); f_004d6770();
    /* 004843c4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004843c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004843ca: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 004843d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004843d3: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004843d6: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_004843d9:; BB(0x004843d9);
    /* 004843d9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004843dc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004843df: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004843e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004843e5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004843ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004843ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004843ef: ret  */ FN_RET(0x00484294); r_esp += 4; return;
L_004843f0:; BB(0x004843f0);
    /* 004843f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004843f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004843f5: jmp 0x4843d9 */ goto L_004843d9;
}

void f_00484341(void)
{
    FN_ENTER(0x00484341);
    goto L_00484341;
L_0048431f:; BB(0x0048431f);
    /* 0048431f: mov esi, dword ptr [edi*4 + 0x9a7058] */ r_esi = R32((u32)(r_edi*4+0x9a7058u));
    /* 00484326: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484329: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048432a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48432fu); f_005b8610();
    /* 0048432f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484332: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484333: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00484336: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484338: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0048433b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048433d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484340: mov dword ptr [ebx + edx + 0x1c], eax */ W32((u32)(r_ebx+r_edx+0x1cu), r_eax);
L_00484341:; BB(0x00484341);
    /* 00484341: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484342: adc ebx, dword ptr [eax + ebp*8] */ { u32 c = fC; u32 a = r_ebx; u32 b = R32((u32)(r_eax+r_ebp*8)); u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 00484344: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x484349u); f_005b8624();
    /* 00484345: fild dword ptr [edx + 0x13] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x13u)));
    /* 00484348: add byte ptr [ebx + 0x4d8bec55], cl */ { u32 ad = (u32)(r_ebx+0x4d8bec55u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00484349: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048434c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048434e: call 0x205b87dc */ r_esp -= 4; W32(r_esp, 0x484353u); f_205b87dc();
    /* 0048434f: mov dword ptr [ebx + edx + 0x20], eax */ W32((u32)(r_ebx+r_edx+0x20u), r_eax);
    /* 00484353: push dword ptr [edi*4 + 0x9a68a8] */ { u32 v = R32((u32)(r_edi*4+0x9a68a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048435a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48435fu); f_005b8638();
    /* 0048435f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484362: mov dword ptr [ebx + edx + 0x24], eax */ W32((u32)(r_ebx+r_edx+0x24u), r_eax);
    /* 00484366: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484369: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048436c: jl 0x48431f */ if ((fS!=fO)) goto L_0048431f;
L_0048436e:; BB(0x0048436e);
    /* 0048436e: mov eax, edx */ r_eax = r_edx;
    /* 00484370: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 00484373: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484374: push 0x9008bc */ { u32 v = 0x9008bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00484379: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x48437eu); f_0058836c();
    /* 0048437e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484381: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484384: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
    /* 0048438b: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0048438e: lea ecx, [edx + 0x40] */ r_ecx = (u32)(r_edx+0x40u);
    /* 00484391: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00484393: push 0x9008a4 */ { u32 v = 0x9008a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484398: call 0x48ebc4 */ r_esp -= 4; W32(r_esp, 0x48439du); f_0048ebc4();
    /* 0048439d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048439f: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4843a4u); f_004d31f4();
    /* 004843a4: push 0x900898 */ { u32 v = 0x900898u; r_esp -= 4; W32(r_esp, v); }
    /* 004843a9: mov eax, 0x9008e4 */ r_eax = 0x9008e4u;
    /* 004843ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004843af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004843b0: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x4843b5u); f_004d681c();
    /* 004843b5: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 004843ba: push 0x90088c */ { u32 v = 0x90088cu; r_esp -= 4; W32(r_esp, v); }
    /* 004843bf: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4843c4u); f_004d6770();
    /* 004843c4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004843c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004843ca: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 004843d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004843d3: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004843d6: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004843d9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004843dc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004843df: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004843e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004843e5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004843ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004843ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004843ef: ret  */ FN_RET(0x00484341); r_esp += 4; return;
}

void f_00484352(void)
{
    FN_ENTER(0x00484352);
    goto L_00484352;
L_0048431f:; BB(0x0048431f);
    /* 0048431f: mov esi, dword ptr [edi*4 + 0x9a7058] */ r_esi = R32((u32)(r_edi*4+0x9a7058u));
    /* 00484326: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484329: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048432a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48432fu); f_005b8610();
    /* 0048432f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484332: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484333: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00484336: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484338: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0048433b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048433d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484340: mov dword ptr [ebx + edx + 0x1c], eax */ W32((u32)(r_ebx+r_edx+0x1cu), r_eax);
    /* 00484344: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x484349u); f_005b8624();
    /* 00484349: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048434c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048434f: mov dword ptr [ebx + edx + 0x20], eax */ W32((u32)(r_ebx+r_edx+0x20u), r_eax);
L_00484352:; BB(0x00484352);
    /* 00484352: and bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00484353: push dword ptr [edi*4 + 0x9a68a8] */ { u32 v = R32((u32)(r_edi*4+0x9a68a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00484354: xor al, 0xbd */ {  u32 a = (u8)r_eax; u32 b = 0xbdu; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00484356: test al, 0x68 */ {  u32 a = (u8)r_eax; u32 b = 0x68u; u32 r = (a & b) & 0xffu;   }
    /* 00484358: lcall 0x13, 0x42d9e800 */ UNSUP(0x00484358, "lcall 0x13, 0x42d9e800");
    /* 0048435a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48435fu); f_005b8638();
    /* 0048435f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484362: mov dword ptr [ebx + edx + 0x24], eax */ W32((u32)(r_ebx+r_edx+0x24u), r_eax);
    /* 00484366: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484369: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048436c: jl 0x48431f */ if ((fS!=fO)) goto L_0048431f;
L_0048436e:; BB(0x0048436e);
    /* 0048436e: mov eax, edx */ r_eax = r_edx;
    /* 00484370: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 00484373: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484374: push 0x9008bc */ { u32 v = 0x9008bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00484379: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x48437eu); f_0058836c();
    /* 0048437e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484381: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484384: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
    /* 0048438b: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0048438e: lea ecx, [edx + 0x40] */ r_ecx = (u32)(r_edx+0x40u);
    /* 00484391: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00484393: push 0x9008a4 */ { u32 v = 0x9008a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484398: call 0x48ebc4 */ r_esp -= 4; W32(r_esp, 0x48439du); f_0048ebc4();
    /* 0048439d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048439f: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4843a4u); f_004d31f4();
    /* 004843a4: push 0x900898 */ { u32 v = 0x900898u; r_esp -= 4; W32(r_esp, v); }
    /* 004843a9: mov eax, 0x9008e4 */ r_eax = 0x9008e4u;
    /* 004843ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004843af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004843b0: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x4843b5u); f_004d681c();
    /* 004843b5: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 004843ba: push 0x90088c */ { u32 v = 0x90088cu; r_esp -= 4; W32(r_esp, v); }
    /* 004843bf: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4843c4u); f_004d6770();
    /* 004843c4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004843c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004843ca: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 004843d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004843d3: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004843d6: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004843d9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004843dc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004843df: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004843e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004843e5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004843ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004843ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004843ef: ret  */ FN_RET(0x00484352); r_esp += 4; return;
}

void f_00484354(void)
{
    FN_ENTER(0x00484354);
    goto L_00484354;
L_0048431f:; BB(0x0048431f);
    /* 0048431f: mov esi, dword ptr [edi*4 + 0x9a7058] */ r_esi = R32((u32)(r_edi*4+0x9a7058u));
    /* 00484326: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484329: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048432a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48432fu); f_005b8610();
    /* 0048432f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484332: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484333: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00484336: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484338: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0048433b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048433d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484340: mov dword ptr [ebx + edx + 0x1c], eax */ W32((u32)(r_ebx+r_edx+0x1cu), r_eax);
    /* 00484344: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x484349u); f_005b8624();
    /* 00484349: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048434c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048434f: mov dword ptr [ebx + edx + 0x20], eax */ W32((u32)(r_ebx+r_edx+0x20u), r_eax);
    /* 00484353: push dword ptr [edi*4 + 0x9a68a8] */ { u32 v = R32((u32)(r_edi*4+0x9a68a8u)); r_esp -= 4; W32(r_esp, v); }
L_00484354:; BB(0x00484354);
    /* 00484354: xor al, 0xbd */ {  u32 a = (u8)r_eax; u32 b = 0xbdu; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00484356: test al, 0x68 */ {  u32 a = (u8)r_eax; u32 b = 0x68u; u32 r = (a & b) & 0xffu;   }
    /* 00484358: lcall 0x13, 0x42d9e800 */ UNSUP(0x00484358, "lcall 0x13, 0x42d9e800");
    /* 0048435a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48435fu); f_005b8638();
    /* 0048435f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484362: mov dword ptr [ebx + edx + 0x24], eax */ W32((u32)(r_ebx+r_edx+0x24u), r_eax);
    /* 00484366: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484369: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048436c: jl 0x48431f */ if ((fS!=fO)) goto L_0048431f;
L_0048436e:; BB(0x0048436e);
    /* 0048436e: mov eax, edx */ r_eax = r_edx;
    /* 00484370: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 00484373: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484374: push 0x9008bc */ { u32 v = 0x9008bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00484379: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x48437eu); f_0058836c();
    /* 0048437e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484381: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484384: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
    /* 0048438b: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0048438e: lea ecx, [edx + 0x40] */ r_ecx = (u32)(r_edx+0x40u);
    /* 00484391: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00484393: push 0x9008a4 */ { u32 v = 0x9008a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00484398: call 0x48ebc4 */ r_esp -= 4; W32(r_esp, 0x48439du); f_0048ebc4();
    /* 0048439d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048439f: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4843a4u); f_004d31f4();
    /* 004843a4: push 0x900898 */ { u32 v = 0x900898u; r_esp -= 4; W32(r_esp, v); }
    /* 004843a9: mov eax, 0x9008e4 */ r_eax = 0x9008e4u;
    /* 004843ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004843af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004843b0: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x4843b5u); f_004d681c();
    /* 004843b5: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 004843ba: push 0x90088c */ { u32 v = 0x90088cu; r_esp -= 4; W32(r_esp, v); }
    /* 004843bf: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4843c4u); f_004d6770();
    /* 004843c4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004843c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004843ca: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 004843d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004843d3: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004843d6: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004843d9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004843dc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004843df: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004843e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004843e5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004843ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004843ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004843ef: ret  */ FN_RET(0x00484354); r_esp += 4; return;
}

void f_004843f8(void) /* sub_4843F8 */
{
    FN_ENTER(0x004843f8);
    /* 004843f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004843f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004843fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004843fd: call 0x48441c */ r_esp -= 4; W32(r_esp, 0x484402u); f_0048441c();
    /* 00484402: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00484406: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00484408: jne 0x48440e */ if (!fZ) goto L_0048440e;
L_0048440a:; BB(0x0048440a);
    /* 0048440a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048440b: ret 4 */ FN_RET(0x004843f8); r_esp += 8; return;
L_0048440e:; BB(0x0048440e);
    /* 0048440e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048440f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x484414u); f_005c2f74();
    /* 00484414: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00484415: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00484416: ret 4 */ FN_RET(0x004843f8); r_esp += 8; return;
}

void f_0048441c(void) /* sub_48441C */
{
    FN_ENTER(0x0048441c);
    /* 0048441c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048441d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048441f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00484421: push 0x8cf97c */ { u32 v = 0x8cf97cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484426: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048442c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048442d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00484434: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484437: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048443a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048443d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00484440: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00484443: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00484446: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048444d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484450: mov dword ptr [eax], 0xaf8668 */ W32((u32)(r_eax), 0xaf8668u);
    /* 00484456: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x48445bu); f_004d3250();
    /* 0048445b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048445e: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 00484464: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484466: je 0x48447a */ if (fZ) goto L_0048447a;
L_00484468:; BB(0x00484468);
    /* 00484468: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x48446du); f_005883f0();
    /* 0048446d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484470: mov dword ptr [edx + 0x88], 0 */ W32((u32)(r_edx+0x88u), 0x0u);
L_0048447a:; BB(0x0048447a);
    /* 0048447a: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00484480: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484482: je 0x484498 */ if (fZ) goto L_00484498;
L_00484484:; BB(0x00484484);
    /* 00484484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484485: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48448au); f_005cdcc0();
    /* 0048448a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048448b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048448e: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
L_00484498:; BB(0x00484498);
    /* 00484498: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048449f: mov ecx, edx */ r_ecx = r_edx;
    /* 004844a1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4844a6u); f_008171e8();
    /* 004844a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004844a9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004844b0: mov esp, ebp */ r_esp = r_ebp;
    /* 004844b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004844b3: ret  */ FN_RET(0x0048441c); r_esp += 4; return;
}

void f_004844b4(void) /* sub_4844B4 */
{
    FN_ENTER(0x004844b4);
    /* 004844b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004844b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004844b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004844b7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004844b9: fld dword ptr [0x9009f0] */ FPUSH(R_F32((u32)(0x9009f0u)));
    /* 004844bf: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004844c2: fcom dword ptr [0x900948] */ fx_compare(ST(0), R_F32((u32)(0x900948u))); 
    /* 004844c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004844ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004844cb: jbe 0x4844d9 */ if ((fC||fZ)) goto L_004844d9;
L_004844cd:; BB(0x004844cd);
    /* 004844cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004844cf: mov eax, 0x43330000 */ r_eax = 0x43330000u;
    /* 004844d4: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 004844d7: jmp 0x4844dc */ goto L_004844dc;
L_004844d9:; BB(0x004844d9);
    /* 004844d9: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
L_004844dc:; BB(0x004844dc);
    /* 004844dc: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 004844df: cmp edi, 0x98 */ {  u32 a = r_edi; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004844e5: je 0x484722 */ if (fZ) goto L_00484722;
L_004844eb:; BB(0x004844eb);
    /* 004844eb: cmp edi, 0xf9 */ {  u32 a = r_edi; u32 b = 0xf9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004844f1: je 0x484708 */ if (fZ) goto L_00484708;
L_004844f7:; BB(0x004844f7);
    /* 004844f7: cmp edi, 0x1e */ {  u32 a = r_edi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004844fa: je 0x4846ee */ if (fZ) goto L_004846ee;
L_00484500:; BB(0x00484500);
    /* 00484500: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484503: je 0x484514 */ if (fZ) goto L_00484514;
L_00484505:; BB(0x00484505);
    /* 00484505: cmp edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484508: je 0x484514 */ if (fZ) goto L_00484514;
L_0048450a:; BB(0x0048450a);
    /* 0048450a: cmp edi, 0x3c */ {  u32 a = r_edi; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048450d: je 0x484514 */ if (fZ) goto L_00484514;
L_0048450f:; BB(0x0048450f);
    /* 0048450f: cmp edi, 0x5a */ {  u32 a = r_edi; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484512: jne 0x484529 */ if (!fZ) goto L_00484529;
L_00484514:; BB(0x00484514);
    /* 00484514: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00484516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484519: push 0x3d7 */ { u32 v = 0x3d7u; r_esp -= 4; W32(r_esp, v); }
    /* 0048451e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x484523u); f_00814298();
    /* 00484523: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484526: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
L_00484529:; BB(0x00484529);
    /* 00484529: cmp edi, 0x89 */ {  u32 a = r_edi; u32 b = 0x89u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048452f: jl 0x484547 */ if ((fS!=fO)) goto L_00484547;
L_00484531:; BB(0x00484531);
    /* 00484531: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00484533: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484536: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484537: push 0x3d8 */ { u32 v = 0x3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048453c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x484541u); f_008144b0();
    /* 00484541: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484544: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
L_00484547:; BB(0x00484547);
    /* 00484547: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048454a: jne 0x484571 */ if (!fZ) goto L_00484571;
L_0048454c:; BB(0x0048454c);
    /* 0048454c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048454e: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484553: lea edi, [ebp + 0x7c] */ r_edi = (u32)(r_ebp+0x7cu);
    /* 00484556: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484557: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x48455cu); f_0050b7a4();
    /* 0048455c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048455e: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 00484563: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484564: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x484569u); f_0050b7a4();
    /* 00484569: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048456c: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 0048456f: jmp 0x484599 */ goto L_00484599;
L_00484571:; BB(0x00484571);
    /* 00484571: cmp edi, 0x4e */ {  u32 a = r_edi; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484574: jne 0x484599 */ if (!fZ) goto L_00484599;
L_00484576:; BB(0x00484576);
    /* 00484576: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00484578: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048457d: lea edi, [ebp + 0x70] */ r_edi = (u32)(r_ebp+0x70u);
    /* 00484580: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484581: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x484586u); f_0050b7a4();
    /* 00484586: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00484588: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0048458d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048458e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x484593u); f_0050b7a4();
    /* 00484593: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484596: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
L_00484599:; BB(0x00484599);
    /* 00484599: cmp edi, 0xb9 */ {  u32 a = r_edi; u32 b = 0xb9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048459f: jl 0x4845cc */ if ((fS!=fO)) goto L_004845cc;
L_004845a1:; BB(0x004845a1);
    /* 004845a1: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004845a7: jne 0x4845cc */ if (!fZ) goto L_004845cc;
L_004845a9:; BB(0x004845a9);
    /* 004845a9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004845ab: push 0x13c */ { u32 v = 0x13cu; r_esp -= 4; W32(r_esp, v); }
    /* 004845b0: lea edi, [ebp + 0x4c] */ r_edi = (u32)(r_ebp+0x4cu);
    /* 004845b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004845b4: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4845b9u); f_0050b7a4();
    /* 004845b9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004845bb: push 0x13d */ { u32 v = 0x13du; r_esp -= 4; W32(r_esp, v); }
    /* 004845c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004845c1: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4845c6u); f_0050b7a4();
    /* 004845c6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004845c9: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
L_004845cc:; BB(0x004845cc);
    /* 004845cc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004845cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004845d1:; BB(0x004845d1);
    /* 004845d1: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004845d4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004845d7: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004845da: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004845dc: cmp edi, dword ptr [esi + 0x900918] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x900918u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004845e2: jl 0x4845f1 */ if ((fS!=fO)) goto L_004845f1;
L_004845e4:; BB(0x004845e4);
    /* 004845e4: cmp edi, dword ptr [eax + edx*4 + 0x90091c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+r_edx*4+0x90091cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004845eb: jl 0x48468e */ if ((fS!=fO)) goto L_0048468e;
L_004845f1:; BB(0x004845f1);
    /* 004845f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004845f4: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004845f7: jl 0x4845d1 */ if ((fS!=fO)) goto L_004845d1;
L_004845f9:; BB(0x004845f9);
    /* 004845f9: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004845fc: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 00484602: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484604: je 0x48461a */ if (fZ) goto L_0048461a;
L_00484606:; BB(0x00484606);
    /* 00484606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484607: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48460cu); f_005cdcc0();
    /* 0048460c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048460d: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 00484610: mov dword ptr [ebp + 0x8c], 0 */ W32((u32)(r_ebp+0x8cu), 0x0u);
L_0048461a:; BB(0x0048461a);
    /* 0048461a: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048461d: je 0x48464b */ if (fZ) goto L_0048464b;
L_0048461f:; BB(0x0048461f);
    /* 0048461f: cmp edi, 0x19 */ {  u32 a = r_edi; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484622: je 0x48464b */ if (fZ) goto L_0048464b;
L_00484624:; BB(0x00484624);
    /* 00484624: cmp edi, 0x46 */ {  u32 a = r_edi; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484627: je 0x48464b */ if (fZ) goto L_0048464b;
L_00484629:; BB(0x00484629);
    /* 00484629: cmp edi, 0x5f */ {  u32 a = r_edi; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048462c: je 0x48464b */ if (fZ) goto L_0048464b;
L_0048462e:; BB(0x0048462e);
    /* 0048462e: cmp edi, 0x6e */ {  u32 a = r_edi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484631: je 0x48464b */ if (fZ) goto L_0048464b;
L_00484633:; BB(0x00484633);
    /* 00484633: cmp edi, 0x8c */ {  u32 a = r_edi; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484639: je 0x48464b */ if (fZ) goto L_0048464b;
L_0048463b:; BB(0x0048463b);
    /* 0048463b: cmp edi, 0xbe */ {  u32 a = r_edi; u32 b = 0xbeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484641: je 0x48464b */ if (fZ) goto L_0048464b;
L_00484643:; BB(0x00484643);
    /* 00484643: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484649: jne 0x48465d */ if (!fZ) goto L_0048465d;
L_0048464b:; BB(0x0048464b);
    /* 0048464b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0048464d: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484652: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x484657u); f_006ff5f8();
    /* 00484657: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048465a: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
L_0048465d:; BB(0x0048465d);
    /* 0048465d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484660: mov dword ptr [ebp + 0x44], edi */ W32((u32)(r_ebp+0x44u), r_edi);
    /* 00484663: cmp edi, 0x101 */ {  u32 a = r_edi; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484669: jge 0x48467d */ if ((fS==fO)) goto L_0048467d;
L_0048466b:; BB(0x0048466b);
    /* 0048466b: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 0048466e: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 00484674: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00484677: je 0x48473c */ if (fZ) goto L_0048473c;
L_0048467d:; BB(0x0048467d);
    /* 0048467d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00484681: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00484686: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0048468a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048468b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048468c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048468d: ret  */ FN_RET(0x004844b4); r_esp += 4; return;
L_0048468e:; BB(0x0048468e);
    /* 0048468e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00484691: mov eax, dword ptr [eax + edx*4 + 0x900920] */ r_eax = R32((u32)(r_eax+r_edx*4+0x900920u));
    /* 00484698: mov ecx, dword ptr [ebp + 0x8c] */ r_ecx = R32((u32)(r_ebp+0x8cu));
    /* 0048469e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004846a0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004846a2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004846a5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004846a7: lea eax, [ebp + edx + 0x4c] */ r_eax = (u32)(r_ebp+r_edx+0x4cu);
    /* 004846ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004846ad: je 0x4846bd */ if (fZ) goto L_004846bd;
L_004846af:; BB(0x004846af);
    /* 004846af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004846b0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4846b5u); f_00508db8();
    /* 004846b5: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 004846b8: jmp 0x48461a */ goto L_0048461a;
L_004846bd:; BB(0x004846bd);
    /* 004846bd: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 004846c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004846c3: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4846c8u); f_00509590();
    /* 004846c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004846cb: mov dword ptr [ebp + 0x8c], eax */ W32((u32)(r_ebp+0x8cu), r_eax);
    /* 004846d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004846d3: je 0x4846e6 */ if (fZ) goto L_004846e6;
L_004846d5:; BB(0x004846d5);
    /* 004846d5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004846d7: mov ecx, eax */ r_ecx = r_eax;
    /* 004846d9: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4846deu); f_00508efc();
    /* 004846de: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 004846e1: jmp 0x48461a */ goto L_0048461a;
L_004846e6:; BB(0x004846e6);
    /* 004846e6: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 004846e9: jmp 0x48461a */ goto L_0048461a;
L_004846ee:; BB(0x004846ee);
    /* 004846ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004846f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004846f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004846f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004846f3: push 0x3c5 */ { u32 v = 0x3c5u; r_esp -= 4; W32(r_esp, v); }
    /* 004846f8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4846fdu); f_00814298();
    /* 004846fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484700: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 00484703: jmp 0x484529 */ goto L_00484529;
L_00484708:; BB(0x00484708);
    /* 00484708: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048470a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048470b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048470c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048470d: push 0x3d9 */ { u32 v = 0x3d9u; r_esp -= 4; W32(r_esp, v); }
    /* 00484712: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x484717u); f_00814298();
    /* 00484717: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048471a: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 0048471d: jmp 0x484529 */ goto L_00484529;
L_00484722:; BB(0x00484722);
    /* 00484722: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00484724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484725: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484726: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484727: push 0x3b8 */ { u32 v = 0x3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048472c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x484731u); f_00814298();
    /* 00484731: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484734: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 00484737: jmp 0x484529 */ goto L_00484529;
L_0048473c:; BB(0x0048473c);
    /* 0048473c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048473d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048473e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048473f: ret  */ FN_RET(0x004844b4); r_esp += 4; return;
}

void f_00484740(void) /* sub_484740 */
{
    FN_ENTER(0x00484740);
    /* 00484740: call 0x484748 */ r_esp -= 4; W32(r_esp, 0x484745u); f_00484748();
    /* 00484745: ret  */ FN_RET(0x00484740); r_esp += 4; return;
}

void f_00484748(void) /* sub_484748 */
{
    FN_ENTER(0x00484748);
    /* 00484748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484749: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048474c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048474e: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00484751: cmp eax, 0xbf */ {  u32 a = r_eax; u32 b = 0xbfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484756: jge 0x484764 */ if ((fS==fO)) goto L_00484764;
L_00484758:; BB(0x00484758);
    /* 00484758: fld dword ptr [0x9009e4] */ FPUSH(R_F32((u32)(0x9009e4u)));
    /* 0048475e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00484762: jmp 0x4847b2 */ goto L_004847b2;
L_00484764:; BB(0x00484764);
    /* 00484764: cmp eax, 0xcc */ {  u32 a = r_eax; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484769: jge 0x48482a */ if ((fS==fO)) goto L_0048482a;
L_0048476f:; BB(0x0048476f);
    /* 0048476f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00484771: add eax, 0xcc */ {  u32 a = r_eax; u32 b = 0xccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00484776: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0048477a: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0048477e: fdiv dword ptr [0x9009ec] */ ST(0) = ST(0) / R_F32((u32)(0x9009ecu));
    /* 00484784: fcom dword ptr [0x9009e8] */ fx_compare(ST(0), R_F32((u32)(0x9009e8u))); 
    /* 0048478a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048478c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00484790: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00484791: je 0x48482a */ if (fZ) goto L_0048482a;
L_00484797:; BB(0x00484797);
    /* 00484797: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0048479b: fcomp dword ptr [0x9009e4] */ fx_compare(ST(0), R_F32((u32)(0x9009e4u))); FPOP();
    /* 004847a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004847a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004847a4: jae 0x4847b2 */ if (!fC) goto L_004847b2;
L_004847a6:; BB(0x004847a6);
    /* 004847a6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004847aa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004847ad: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x4847b2u); f_0048e3a4();
L_004847b2:; BB(0x004847b2);
    /* 004847b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4847b7u); f_0082d7b0();
    /* 004847b7: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4847bcu); f_0082fa9c();
    /* 004847bc: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 004847bf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4847c4u); f_0082d838();
    /* 004847c4: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004847c7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4847ccu); f_00829cc8();
    /* 004847cc: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847cf: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847d2: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847d5: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4847dau); f_0083046c();
    /* 004847da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004847dd: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004847e0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4847e5u); f_00829cc8();
    /* 004847e5: mov ecx, dword ptr [ebp + 0x88] */ r_ecx = R32((u32)(r_ebp+0x88u));
    /* 004847eb: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4847f0u); f_00588428();
    /* 004847f0: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847f3: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004847f6: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847f9: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4847feu); f_0083046c();
    /* 004847fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484801: mov ecx, dword ptr [ebp + 0x88] */ r_ecx = R32((u32)(r_ebp+0x88u));
    /* 00484807: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x48480cu); f_00452050();
    /* 0048480c: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x484811u); f_0082faac();
    /* 00484811: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x484816u); f_0082da80();
    /* 00484816: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0048481a: fcomp dword ptr [0x9009e4] */ fx_compare(ST(0), R_F32((u32)(0x9009e4u))); FPOP();
    /* 00484820: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00484822: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00484823: jae 0x48482a */ if (!fC) goto L_0048482a;
L_00484825:; BB(0x00484825);
    /* 00484825: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x48482au); f_005963d0();
L_0048482a:; BB(0x0048482a);
    /* 0048482a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048482d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048482e: ret  */ FN_RET(0x00484748); r_esp += 4; return;
}

void f_00484749(void)
{
    FN_ENTER(0x00484749);
    /* 00484749: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048474c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048474e: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00484751: cmp eax, 0xbf */ {  u32 a = r_eax; u32 b = 0xbfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484756: jge 0x484764 */ if ((fS==fO)) goto L_00484764;
L_00484758:; BB(0x00484758);
    /* 00484758: fld dword ptr [0x9009e4] */ FPUSH(R_F32((u32)(0x9009e4u)));
    /* 0048475e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00484762: jmp 0x4847b2 */ goto L_004847b2;
L_00484764:; BB(0x00484764);
    /* 00484764: cmp eax, 0xcc */ {  u32 a = r_eax; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484769: jge 0x48482a */ if ((fS==fO)) goto L_0048482a;
L_0048476f:; BB(0x0048476f);
    /* 0048476f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00484771: add eax, 0xcc */ {  u32 a = r_eax; u32 b = 0xccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00484776: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0048477a: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0048477e: fdiv dword ptr [0x9009ec] */ ST(0) = ST(0) / R_F32((u32)(0x9009ecu));
    /* 00484784: fcom dword ptr [0x9009e8] */ fx_compare(ST(0), R_F32((u32)(0x9009e8u))); 
    /* 0048478a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048478c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00484790: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00484791: je 0x48482a */ if (fZ) goto L_0048482a;
L_00484797:; BB(0x00484797);
    /* 00484797: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0048479b: fcomp dword ptr [0x9009e4] */ fx_compare(ST(0), R_F32((u32)(0x9009e4u))); FPOP();
    /* 004847a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004847a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004847a4: jae 0x4847b2 */ if (!fC) goto L_004847b2;
L_004847a6:; BB(0x004847a6);
    /* 004847a6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004847aa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004847ad: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x4847b2u); f_0048e3a4();
L_004847b2:; BB(0x004847b2);
    /* 004847b2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4847b7u); f_0082d7b0();
    /* 004847b7: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4847bcu); f_0082fa9c();
    /* 004847bc: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 004847bf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4847c4u); f_0082d838();
    /* 004847c4: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004847c7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4847ccu); f_00829cc8();
    /* 004847cc: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847cf: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847d2: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847d5: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4847dau); f_0083046c();
    /* 004847da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004847dd: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004847e0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4847e5u); f_00829cc8();
    /* 004847e5: mov ecx, dword ptr [ebp + 0x88] */ r_ecx = R32((u32)(r_ebp+0x88u));
    /* 004847eb: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4847f0u); f_00588428();
    /* 004847f0: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847f3: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004847f6: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004847f9: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4847feu); f_0083046c();
    /* 004847fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484801: mov ecx, dword ptr [ebp + 0x88] */ r_ecx = R32((u32)(r_ebp+0x88u));
    /* 00484807: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x48480cu); f_00452050();
    /* 0048480c: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x484811u); f_0082faac();
    /* 00484811: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x484816u); f_0082da80();
    /* 00484816: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0048481a: fcomp dword ptr [0x9009e4] */ fx_compare(ST(0), R_F32((u32)(0x9009e4u))); FPOP();
    /* 00484820: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00484822: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00484823: jae 0x48482a */ if (!fC) goto L_0048482a;
L_00484825:; BB(0x00484825);
    /* 00484825: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x48482au); f_005963d0();
L_0048482a:; BB(0x0048482a);
    /* 0048482a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048482d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048482e: ret  */ FN_RET(0x00484749); r_esp += 4; return;
}

void f_00484830(void) /* sub_484830 */
{
    FN_ENTER(0x00484830);
    /* 00484830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484831: mov ebp, esp */ r_ebp = r_esp;
    /* 00484833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00484835: push 0x8cf9b2 */ { u32 v = 0x8cf9b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048483a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00484840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484841: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00484848: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048484b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048484e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00484851: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00484854: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00484857: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0048485c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00484863: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x484868u); f_005caba4();
    /* 00484868: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048486b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048486e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00484871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484873: je 0x48499e */ if (fZ) goto L_0048499e;
L_00484879:; BB(0x00484879);
    /* 00484879: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00484880: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00484887: mov ecx, eax */ r_ecx = r_eax;
    /* 00484889: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048488c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0048488f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484890: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x484895u); f_008193cc();
    /* 00484895: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048489c: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0048489f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004848a2: mov ecx, dword ptr [0x9a68bc] */ r_ecx = R32((u32)(0x9a68bcu));
    /* 004848a8: mov ebx, dword ptr [0x9a68c0] */ r_ebx = R32((u32)(0x9a68c0u));
    /* 004848ae: mov esi, dword ptr [0x9a68c4] */ r_esi = R32((u32)(0x9a68c4u));
    /* 004848b4: mov dword ptr [edi], 0xaf8668 */ W32((u32)(r_edi), 0xaf8668u);
    /* 004848ba: mov eax, dword ptr [0x9a68b0] */ r_eax = R32((u32)(0x9a68b0u));
    /* 004848bf: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004848c2: mov eax, dword ptr [0xa46fa0] */ r_eax = R32((u32)(0xa46fa0u));
    /* 004848c7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004848ca: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004848cd: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 004848d0: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 004848d3: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004848d6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004848d8:; BB(0x004848d8);
    /* 004848d8: mov esi, dword ptr [edi*4 + 0x9a7058] */ r_esi = R32((u32)(r_edi*4+0x9a7058u));
    /* 004848df: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004848e2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004848e3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4848e8u); f_005b8610();
    /* 004848e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004848eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004848ec: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004848ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004848f1: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004848f4: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004848f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004848f9: mov dword ptr [ebx + edx + 0x28], eax */ W32((u32)(r_ebx+r_edx+0x28u), r_eax);
    /* 004848fd: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x484902u); f_005b8624();
    /* 00484902: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484905: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484908: mov dword ptr [ebx + edx + 0x2c], eax */ W32((u32)(r_ebx+r_edx+0x2cu), r_eax);
    /* 0048490c: push dword ptr [edi*4 + 0x9a68b4] */ { u32 v = R32((u32)(r_edi*4+0x9a68b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00484913: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x484918u); f_005b8638();
    /* 00484918: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048491b: mov dword ptr [ebx + edx + 0x30], eax */ W32((u32)(r_ebx+r_edx+0x30u), r_eax);
    /* 0048491f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484922: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484925: jl 0x4848d8 */ if ((fS!=fO)) goto L_004848d8;
L_00484927:; BB(0x00484927);
    /* 00484927: mov eax, edx */ r_eax = r_edx;
    /* 00484929: lea edx, [eax + 0x4c] */ r_edx = (u32)(r_eax+0x4cu);
    /* 0048492c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048492d: push 0x900980 */ { u32 v = 0x900980u; r_esp -= 4; W32(r_esp, v); }
    /* 00484932: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x484937u); f_0058836c();
    /* 00484937: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048493a: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 00484944: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 0048494a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048494c: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x484951u); f_004d31f4();
    /* 00484951: push 0x900958 */ { u32 v = 0x900958u; r_esp -= 4; W32(r_esp, v); }
    /* 00484956: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00484959: lea edx, [eax + 0x1c] */ r_edx = (u32)(r_eax+0x1cu);
    /* 0048495c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048495d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048495e: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x484963u); f_004d681c();
    /* 00484963: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484968: push 0x90094c */ { u32 v = 0x90094cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048496d: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x484972u); f_004d6770();
    /* 00484972: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484975: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00484978: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 0048497f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00484981: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 00484984: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00484987:; BB(0x00484987);
    /* 00484987: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048498a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048498d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00484990: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00484993: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048499a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048499c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048499d: ret  */ FN_RET(0x00484830); r_esp += 4; return;
L_0048499e:; BB(0x0048499e);
    /* 0048499e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004849a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004849a3: jmp 0x484987 */ goto L_00484987;
}

void f_0048485a(void)
{
    FN_ENTER(0x0048485a);
    /* 0048485a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0048485c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00484863: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x484868u); f_005caba4();
    /* 00484868: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048486b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048486e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00484871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484873: je 0x48499e */ if (fZ) goto L_0048499e;
L_00484879:; BB(0x00484879);
    /* 00484879: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00484880: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00484887: mov ecx, eax */ r_ecx = r_eax;
    /* 00484889: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048488c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0048488f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484890: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x484895u); f_008193cc();
    /* 00484895: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048489c: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0048489f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004848a2: mov ecx, dword ptr [0x9a68bc] */ r_ecx = R32((u32)(0x9a68bcu));
    /* 004848a8: mov ebx, dword ptr [0x9a68c0] */ r_ebx = R32((u32)(0x9a68c0u));
    /* 004848ae: mov esi, dword ptr [0x9a68c4] */ r_esi = R32((u32)(0x9a68c4u));
    /* 004848b4: mov dword ptr [edi], 0xaf8668 */ W32((u32)(r_edi), 0xaf8668u);
    /* 004848ba: mov eax, dword ptr [0x9a68b0] */ r_eax = R32((u32)(0x9a68b0u));
    /* 004848bf: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004848c2: mov eax, dword ptr [0xa46fa0] */ r_eax = R32((u32)(0xa46fa0u));
    /* 004848c7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004848ca: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004848cd: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 004848d0: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 004848d3: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004848d6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004848d8:; BB(0x004848d8);
    /* 004848d8: mov esi, dword ptr [edi*4 + 0x9a7058] */ r_esi = R32((u32)(r_edi*4+0x9a7058u));
    /* 004848df: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004848e2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004848e3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4848e8u); f_005b8610();
    /* 004848e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004848eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004848ec: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004848ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004848f1: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004848f4: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004848f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004848f9: mov dword ptr [ebx + edx + 0x28], eax */ W32((u32)(r_ebx+r_edx+0x28u), r_eax);
    /* 004848fd: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x484902u); f_005b8624();
    /* 00484902: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484905: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484908: mov dword ptr [ebx + edx + 0x2c], eax */ W32((u32)(r_ebx+r_edx+0x2cu), r_eax);
    /* 0048490c: push dword ptr [edi*4 + 0x9a68b4] */ { u32 v = R32((u32)(r_edi*4+0x9a68b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00484913: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x484918u); f_005b8638();
    /* 00484918: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048491b: mov dword ptr [ebx + edx + 0x30], eax */ W32((u32)(r_ebx+r_edx+0x30u), r_eax);
    /* 0048491f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484922: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484925: jl 0x4848d8 */ if ((fS!=fO)) goto L_004848d8;
L_00484927:; BB(0x00484927);
    /* 00484927: mov eax, edx */ r_eax = r_edx;
    /* 00484929: lea edx, [eax + 0x4c] */ r_edx = (u32)(r_eax+0x4cu);
    /* 0048492c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048492d: push 0x900980 */ { u32 v = 0x900980u; r_esp -= 4; W32(r_esp, v); }
    /* 00484932: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x484937u); f_0058836c();
    /* 00484937: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048493a: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 00484944: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 0048494a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048494c: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x484951u); f_004d31f4();
    /* 00484951: push 0x900958 */ { u32 v = 0x900958u; r_esp -= 4; W32(r_esp, v); }
    /* 00484956: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00484959: lea edx, [eax + 0x1c] */ r_edx = (u32)(r_eax+0x1cu);
    /* 0048495c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048495d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048495e: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x484963u); f_004d681c();
    /* 00484963: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484968: push 0x90094c */ { u32 v = 0x90094cu; r_esp -= 4; W32(r_esp, v); }
    /* 0048496d: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x484972u); f_004d6770();
    /* 00484972: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484975: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00484978: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 0048497f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00484981: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 00484984: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00484987:; BB(0x00484987);
    /* 00484987: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048498a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048498d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00484990: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00484993: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048499a: mov esp, ebp */ r_esp = r_ebp;
    /* 0048499c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048499d: ret  */ FN_RET(0x0048485a); r_esp += 4; return;
L_0048499e:; BB(0x0048499e);
    /* 0048499e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004849a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004849a3: jmp 0x484987 */ goto L_00484987;
}

void f_004849a8(void) /* sub_4849A8 */
{
    FN_ENTER(0x004849a8);
    /* 004849a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004849a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004849ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004849ad: call 0x4849cc */ r_esp -= 4; W32(r_esp, 0x4849b2u); f_004849cc();
    /* 004849b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004849b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004849b8: jne 0x4849be */ if (!fZ) goto L_004849be;
L_004849ba:; BB(0x004849ba);
    /* 004849ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004849bb: ret 4 */ FN_RET(0x004849a8); r_esp += 8; return;
L_004849be:; BB(0x004849be);
    /* 004849be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004849bf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4849c4u); f_005c2f74();
    /* 004849c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004849c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004849c6: ret 4 */ FN_RET(0x004849a8); r_esp += 8; return;
}

void f_004849cc(void) /* sub_4849CC */
{
    FN_ENTER(0x004849cc);
    /* 004849cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004849cd: mov ebp, esp */ r_ebp = r_esp;
    /* 004849cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004849d1: push 0x8cf9cc */ { u32 v = 0x8cf9ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004849d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004849dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004849dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004849e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004849e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004849ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004849ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004849f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004849f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004849f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004849fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484a00: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00484a03: mov dword ptr [ecx], 0xaf86d0 */ W32((u32)(r_ecx), 0xaf86d0u);
    /* 00484a09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484a0b: je 0x484a1e */ if (fZ) goto L_00484a1e;
L_00484a0d:; BB(0x00484a0d);
    /* 00484a0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484a0e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x484a13u); f_005cdcc0();
    /* 00484a13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00484a14: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484a17: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_00484a1e:; BB(0x00484a1e);
    /* 00484a1e: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00484a21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484a23: je 0x484a3c */ if (fZ) goto L_00484a3c;
L_00484a25:; BB(0x00484a25);
    /* 00484a25: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484a28: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484a2c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484a31: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484a35: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
L_00484a3c:; BB(0x00484a3c);
    /* 00484a3c: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00484a3f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484a41: je 0x484a5a */ if (fZ) goto L_00484a5a;
L_00484a43:; BB(0x00484a43);
    /* 00484a43: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484a46: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484a4a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484a4f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484a53: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_00484a5a:; BB(0x00484a5a);
    /* 00484a5a: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00484a5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484a5f: je 0x484a78 */ if (fZ) goto L_00484a78;
L_00484a61:; BB(0x00484a61);
    /* 00484a61: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484a64: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484a68: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484a6d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484a71: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
L_00484a78:; BB(0x00484a78);
    /* 00484a78: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00484a7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484a7d: je 0x484a96 */ if (fZ) goto L_00484a96;
L_00484a7f:; BB(0x00484a7f);
    /* 00484a7f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484a82: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484a86: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484a8b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484a8f: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
L_00484a96:; BB(0x00484a96);
    /* 00484a96: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 00484a99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484a9b: je 0x484ab4 */ if (fZ) goto L_00484ab4;
L_00484a9d:; BB(0x00484a9d);
    /* 00484a9d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484aa0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484aa4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484aa9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484aad: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
L_00484ab4:; BB(0x00484ab4);
    /* 00484ab4: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00484ab7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484ab9: je 0x484ad2 */ if (fZ) goto L_00484ad2;
L_00484abb:; BB(0x00484abb);
    /* 00484abb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484abe: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484ac2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484ac7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484acb: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
L_00484ad2:; BB(0x00484ad2);
    /* 00484ad2: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00484ad5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484ad7: je 0x484af0 */ if (fZ) goto L_00484af0;
L_00484ad9:; BB(0x00484ad9);
    /* 00484ad9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484adc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484ae0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484ae5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484ae9: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
L_00484af0:; BB(0x00484af0);
    /* 00484af0: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00484af3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484af5: je 0x484b0e */ if (fZ) goto L_00484b0e;
L_00484af7:; BB(0x00484af7);
    /* 00484af7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484afa: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484afe: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484b03: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484b07: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
L_00484b0e:; BB(0x00484b0e);
    /* 00484b0e: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00484b14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484b16: je 0x484b32 */ if (fZ) goto L_00484b32;
L_00484b18:; BB(0x00484b18);
    /* 00484b18: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484b1b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484b1f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484b24: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484b28: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_00484b32:; BB(0x00484b32);
    /* 00484b32: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00484b38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484b3a: je 0x484b56 */ if (fZ) goto L_00484b56;
L_00484b3c:; BB(0x00484b3c);
    /* 00484b3c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484b3f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484b43: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484b48: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484b4c: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
L_00484b56:; BB(0x00484b56);
    /* 00484b56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00484b5d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x484b62u); f_008171e8();
    /* 00484b62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00484b65: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00484b6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00484b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484b6f: ret  */ FN_RET(0x004849cc); r_esp += 4; return;
}

void f_00484ae0(void)
{
    FN_ENTER(0x00484ae0);
    /* 00484ae0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484ae5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484ae9: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 00484af0: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00484af3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484af5: je 0x484b0e */ if (fZ) goto L_00484b0e;
L_00484af7:; BB(0x00484af7);
    /* 00484af7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484afa: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484afe: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484b03: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484b07: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
L_00484b0e:; BB(0x00484b0e);
    /* 00484b0e: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00484b14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484b16: je 0x484b32 */ if (fZ) goto L_00484b32;
L_00484b18:; BB(0x00484b18);
    /* 00484b18: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484b1b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484b1f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484b24: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484b28: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_00484b32:; BB(0x00484b32);
    /* 00484b32: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00484b38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484b3a: je 0x484b56 */ if (fZ) goto L_00484b56;
L_00484b3c:; BB(0x00484b3c);
    /* 00484b3c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484b3f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00484b43: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484b48: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00484b4c: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
L_00484b56:; BB(0x00484b56);
    /* 00484b56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00484b5d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x484b62u); f_008171e8();
    /* 00484b62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00484b65: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00484b6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00484b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484b6f: ret  */ FN_RET(0x00484ae0); r_esp += 4; return;
}

void f_00484b70(void) /* sub_484B70 */
{
    FN_ENTER(0x00484b70);
    /* 00484b70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484b71: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484b74: mov edi, ecx */ r_edi = r_ecx;
    /* 00484b76: mov ecx, dword ptr [edi + 0x5c] */ r_ecx = R32((u32)(r_edi+0x5cu));
    /* 00484b79: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x484b7eu); f_0082dcbc();
    /* 00484b7e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00484b82: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00484b86: fmul dword ptr [0x900a0c] */ ST(0) = ST(0) * R_F32((u32)(0x900a0cu));
    /* 00484b8c: fadd dword ptr [0x900a10] */ ST(0) = ST(0) + R_F32((u32)(0x900a10u));
    /* 00484b92: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 00484b95: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00484b99: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x484b9eu); f_0082dcbc();
    /* 00484b9e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00484ba1: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 00484ba4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x484ba9u); f_0082ddd8();
    /* 00484ba9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00484bac: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00484bb0: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00484bb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00484bb4: fadd dword ptr [0x900a00] */ ST(0) = ST(0) + R_F32((u32)(0x900a00u));
    /* 00484bba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00484bbc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00484bbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00484bc0: fadd dword ptr [0x900a08] */ ST(0) = ST(0) + R_F32((u32)(0x900a08u));
    /* 00484bc6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00484bc8: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00484bcb: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 00484bce: mov dword ptr [edi + 0x44], 0x41a00000 */ W32((u32)(r_edi+0x44u), 0x41a00000u);
    /* 00484bd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00484bd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00484bd9: ret  */ FN_RET(0x00484b70); r_esp += 4; return;
}

void f_00484bdc(void) /* sub_484BDC */
{
    FN_ENTER(0x00484bdc);
    /* 00484bdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484bdd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484bde: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484be1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00484be3: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x484be8u); f_00520db8();
    /* 00484be8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484bea: je 0x484bf2 */ if (fZ) goto L_00484bf2;
L_00484bec:; BB(0x00484bec);
    /* 00484bec: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00484bef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484bf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00484bf1: ret  */ FN_RET(0x00484bdc); r_esp += 4; return;
L_00484bf2:; BB(0x00484bf2);
    /* 00484bf2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00484bf4: call 0x484cf4 */ r_esp -= 4; W32(r_esp, 0x484bf9u); f_00484cf4();
    /* 00484bf9: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00484bfc: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 00484bff: mov edi, dword ptr [ebp + 0x48] */ r_edi = R32((u32)(r_ebp+0x48u));
    /* 00484c02: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 00484c05: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 00484c08: mov dword ptr [ebp + 0x54], edi */ W32((u32)(r_ebp+0x54u), r_edi);
    /* 00484c0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00484c0d: call 0x484b70 */ r_esp -= 4; W32(r_esp, 0x484c12u); f_00484b70();
    /* 00484c12: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00484c15: lea edi, [ebp + 0x40] */ r_edi = (u32)(r_ebp+0x40u);
    /* 00484c18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484c1a: je 0x484c22 */ if (fZ) goto L_00484c22;
L_00484c1c:; BB(0x00484c1c);
    /* 00484c1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484c1d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x484c22u); f_00508db8();
L_00484c22:; BB(0x00484c22);
    /* 00484c22: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00484c28: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 00484c2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00484c31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00484c33: jle 0x484ca6 */ if ((fZ||fS!=fO)) goto L_00484ca6;
L_00484c35:; BB(0x00484c35);
    /* 00484c35: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00484c39: mov edi, eax */ r_edi = r_eax;
    /* 00484c3b: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00484c3f: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00484c43: mov ebx, edx */ r_ebx = r_edx;
L_00484c45:; BB(0x00484c45);
    /* 00484c45: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00484c4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484c4d: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x484c52u); f_0048e100();
    /* 00484c52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00484c53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484c55: je 0x484c93 */ if (fZ) goto L_00484c93;
L_00484c57:; BB(0x00484c57);
    /* 00484c57: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00484c5a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00484c5d: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 00484c60: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00484c63: mov edx, esi */ r_edx = r_esi;
    /* 00484c65: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00484c69: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 00484c6c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00484c70: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00484c73: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x484c78u); f_0082f9c4();
    /* 00484c78: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00484c80: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00484c83: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x484c88u); f_0083173c();
    /* 00484c88: fcomp dword ptr [0x900b38] */ fx_compare(ST(0), R_F32((u32)(0x900b38u))); FPOP();
    /* 00484c8e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00484c90: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00484c91: jbe 0x484cde */ if ((fC||fZ)) goto L_00484cde;
L_00484c93:; BB(0x00484c93);
    /* 00484c93: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484c96: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484c98: jl 0x484c45 */ if ((fS!=fO)) goto L_00484c45;
L_00484c9a:; BB(0x00484c9a);
    /* 00484c9a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00484c9e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00484ca2: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_00484ca6:; BB(0x00484ca6);
    /* 00484ca6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00484ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484ca9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484caa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484cab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484cac: push 0x3da */ { u32 v = 0x3dau; r_esp -= 4; W32(r_esp, v); }
    /* 00484cb1: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x484cb6u); f_008144b0();
    /* 00484cb6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484cb9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00484cbc: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 00484cc2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484cc5: je 0x484bec */ if (fZ) goto L_00484bec;
L_00484ccb:; BB(0x00484ccb);
    /* 00484ccb: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00484ccf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484cd4: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00484cd8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00484cdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484cdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00484cdd: ret  */ FN_RET(0x00484bdc); r_esp += 4; return;
L_00484cde:; BB(0x00484cde);
    /* 00484cde: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00484ce2: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00484ce6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00484cea: mov dword ptr [ebp + 0x24], 1 */ W32((u32)(r_ebp+0x24u), 0x1u);
    /* 00484cf1: jmp 0x484ca6 */ goto L_00484ca6;
}

void f_00484c60(void)
{
    FN_ENTER(0x00484c60);
    goto L_00484c60;
L_00484bec:; BB(0x00484bec);
    /* 00484bec: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00484bef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484bf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00484bf1: ret  */ FN_RET(0x00484c60); r_esp += 4; return;
L_00484c45:; BB(0x00484c45);
    /* 00484c45: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00484c4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484c4d: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x484c52u); f_0048e100();
    /* 00484c52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00484c53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484c55: je 0x484c93 */ if (fZ) goto L_00484c93;
L_00484c57:; BB(0x00484c57);
    /* 00484c57: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00484c5a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00484c5d: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
L_00484c60:; BB(0x00484c60);
    /* 00484c60: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00484c63: mov edx, esi */ r_edx = r_esi;
    /* 00484c65: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00484c69: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 00484c6c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00484c70: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00484c73: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x484c78u); f_0082f9c4();
    /* 00484c78: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00484c80: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00484c83: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x484c88u); f_0083173c();
    /* 00484c88: fcomp dword ptr [0x900b38] */ fx_compare(ST(0), R_F32((u32)(0x900b38u))); FPOP();
    /* 00484c8e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00484c90: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00484c91: jbe 0x484cde */ if ((fC||fZ)) goto L_00484cde;
L_00484c93:; BB(0x00484c93);
    /* 00484c93: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484c96: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484c98: jl 0x484c45 */ if ((fS!=fO)) goto L_00484c45;
L_00484c9a:; BB(0x00484c9a);
    /* 00484c9a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00484c9e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00484ca2: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_00484ca6:; BB(0x00484ca6);
    /* 00484ca6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00484ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484ca9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484caa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484cab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484cac: push 0x3da */ { u32 v = 0x3dau; r_esp -= 4; W32(r_esp, v); }
    /* 00484cb1: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x484cb6u); f_008144b0();
    /* 00484cb6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484cb9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00484cbc: mov edx, dword ptr [eax + 0x380] */ r_edx = R32((u32)(r_eax+0x380u));
    /* 00484cc2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484cc5: je 0x484bec */ if (fZ) goto L_00484bec;
L_00484ccb:; BB(0x00484ccb);
    /* 00484ccb: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00484ccf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484cd4: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00484cd8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00484cdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484cdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00484cdd: ret  */ FN_RET(0x00484c60); r_esp += 4; return;
L_00484cde:; BB(0x00484cde);
    /* 00484cde: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00484ce2: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00484ce6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00484cea: mov dword ptr [ebp + 0x24], 1 */ W32((u32)(r_ebp+0x24u), 0x1u);
    /* 00484cf1: jmp 0x484ca6 */ goto L_00484ca6;
}

void f_00484cf4(void) /* sub_484CF4 */
{
    FN_ENTER(0x00484cf4);
    /* 00484cf4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484cf7: fild dword ptr [ecx + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x58u)));
    /* 00484cfa: fadd dword ptr [0x900b50] */ ST(0) = ST(0) + R_F32((u32)(0x900b50u));
    /* 00484d00: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00484d03: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00484d07: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484d0c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00484d10: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00484d14: fistp dword ptr [ecx + 0x58] */ W32((u32)(r_ecx+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 00484d17: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00484d1a: fild dword ptr [ecx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x5cu)));
    /* 00484d1d: fadd dword ptr [0x900b4c] */ ST(0) = ST(0) + R_F32((u32)(0x900b4cu));
    /* 00484d23: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00484d26: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00484d2a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00484d2f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00484d33: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00484d37: fistp dword ptr [ecx + 0x5c] */ W32((u32)(r_ecx+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00484d3a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00484d3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00484d40: ret  */ FN_RET(0x00484cf4); r_esp += 4; return;
}

void f_00484d44(void) /* sub_484D44 */
{
    FN_ENTER(0x00484d44);
    /* 00484d44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484d45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00484d46: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00484d48: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x484d4du); f_0082d7b0();
    /* 00484d4d: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x484d52u); f_0082fa9c();
    /* 00484d52: mov ecx, 0x900b5c */ r_ecx = 0x900b5cu;
    /* 00484d57: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x484d5cu); f_0082d838();
    /* 00484d5c: lea eax, [ebx + 0x28] */ r_eax = (u32)(r_ebx+0x28u);
    /* 00484d5f: add ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00484d62: mov esi, eax */ r_esi = r_eax;
L_00484d64:; BB(0x00484d64);
    /* 00484d64: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00484d67: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x484d6cu); f_00829cc8();
    /* 00484d6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00484d6e: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00484d71: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00484d73: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x484d78u); f_0083046c();
    /* 00484d78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484d7b: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00484d7e: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00484d80: ja 0x484d64 */ if ((!fC&&!fZ)) goto L_00484d64;
L_00484d82:; BB(0x00484d82);
    /* 00484d82: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x484d87u); f_0082faac();
    /* 00484d87: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x484d8cu); f_0082da80();
    /* 00484d8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00484d8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00484d8e: ret  */ FN_RET(0x00484d44); r_esp += 4; return;
}

void f_00484d90(void) /* sub_484D90 */
{
    FN_ENTER(0x00484d90);
    /* 00484d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00484d93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00484d95: push 0x8cfa02 */ { u32 v = 0x8cfa02u; r_esp -= 4; W32(r_esp, v); }
    /* 00484d9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00484da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484da1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00484da8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484dab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00484dae: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00484db1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00484db4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00484db7: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00484dbc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00484dc3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x484dc8u); f_005caba4();
    /* 00484dc8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00484dcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484dce: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00484dd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484dd3: je 0x484edd */ if (fZ) goto L_00484edd;
L_00484dd9:; BB(0x00484dd9);
    /* 00484dd9: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00484de0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00484de7: mov ecx, eax */ r_ecx = r_eax;
    /* 00484de9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00484dec: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00484def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484df0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x484df5u); f_008193cc();
    /* 00484df5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00484dfc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484dff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00484e02: mov dword ptr [ecx], 0xaf86d0 */ W32((u32)(r_ecx), 0xaf86d0u);
    /* 00484e08: mov eax, dword ptr [0x9a68c8] */ r_eax = R32((u32)(0x9a68c8u));
    /* 00484e0d: mov ebx, dword ptr [0xa46fa0] */ r_ebx = R32((u32)(0xa46fa0u));
    /* 00484e13: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00484e16: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00484e19: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00484e1c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00484e1e:; BB(0x00484e1e);
    /* 00484e1e: mov esi, dword ptr [edi*4 + 0x9a7058] */ r_esi = R32((u32)(r_edi*4+0x9a7058u));
    /* 00484e25: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484e28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484e29: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x484e2eu); f_005b8610();
    /* 00484e2e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484e31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484e32: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00484e35: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484e37: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00484e3a: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00484e3c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484e3f: mov dword ptr [ebx + edx + 0x28], eax */ W32((u32)(r_ebx+r_edx+0x28u), r_eax);
    /* 00484e43: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x484e48u); f_005b8624();
    /* 00484e48: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484e4b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00484e4e: mov dword ptr [ebx + edx + 0x2c], eax */ W32((u32)(r_ebx+r_edx+0x2cu), r_eax);
    /* 00484e52: push dword ptr [edi*4 + 0x9a68cc] */ { u32 v = R32((u32)(r_edi*4+0x9a68ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00484e59: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x484e5eu); f_005b8638();
    /* 00484e5e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484e61: mov dword ptr [ebx + edx + 0x30], eax */ W32((u32)(r_ebx+r_edx+0x30u), r_eax);
    /* 00484e65: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484e68: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00484e6b: jl 0x484e1e */ if ((fS!=fO)) goto L_00484e1e;
L_00484e6d:; BB(0x00484e6d);
    /* 00484e6d: mov ecx, edx */ r_ecx = r_edx;
    /* 00484e6f: call 0x484f14 */ r_esp -= 4; W32(r_esp, 0x484e74u); f_00484f14();
    /* 00484e74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484e77: call 0x484f04 */ r_esp -= 4; W32(r_esp, 0x484e7cu); f_00484f04();
    /* 00484e7c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484e7f: call 0x484b70 */ r_esp -= 4; W32(r_esp, 0x484e84u); f_00484b70();
    /* 00484e84: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00484e87: push 0x225 */ { u32 v = 0x225u; r_esp -= 4; W32(r_esp, v); }
    /* 00484e8c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00484e8f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 00484e92: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00484e95: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00484e98: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 00484e9b: mov dword ptr [ebx + 0x54], ecx */ W32((u32)(r_ebx+0x54u), r_ecx);
    /* 00484e9e: lea esi, [ebx + 0x40] */ r_esi = (u32)(r_ebx+0x40u);
    /* 00484ea1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484ea2: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x484ea7u); f_00509590();
    /* 00484ea7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484eaa: mov edx, ebx */ r_edx = r_ebx;
    /* 00484eac: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00484eaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484eb1: je 0x484ebc */ if (fZ) goto L_00484ebc;
L_00484eb3:; BB(0x00484eb3);
    /* 00484eb3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00484eb5: mov ecx, eax */ r_ecx = r_eax;
    /* 00484eb7: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x484ebcu); f_00508efc();
L_00484ebc:; BB(0x00484ebc);
    /* 00484ebc: mov eax, ebx */ r_eax = r_ebx;
    /* 00484ebe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00484ec0: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00484ec3: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
L_00484ec6:; BB(0x00484ec6);
    /* 00484ec6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00484ec9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484ecc: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00484ecf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00484ed2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00484ed9: mov esp, ebp */ r_esp = r_ebp;
    /* 00484edb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484edc: ret  */ FN_RET(0x00484d90); r_esp += 4; return;
L_00484edd:; BB(0x00484edd);
    /* 00484edd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00484edf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00484ee2: jmp 0x484ec6 */ goto L_00484ec6;
}

void f_00484ee4(void) /* sub_484EE4 */
{
    FN_ENTER(0x00484ee4);
    /* 00484ee4: mov dword ptr [0xa46ca8], 0x3f800000 */ W32((u32)(0xa46ca8u), 0x3f800000u);
    /* 00484eee: mov dword ptr [0xa46cac], 0x41000000 */ W32((u32)(0xa46cacu), 0x41000000u);
    /* 00484ef8: mov dword ptr [0xa46cb0], 0x3fc00000 */ W32((u32)(0xa46cb0u), 0x3fc00000u);
    /* 00484f02: ret  */ FN_RET(0x00484ee4); r_esp += 4; return;
}

void f_00484f04(void) /* sub_484F04 */
{
    FN_ENTER(0x00484f04);
    /* 00484f04: mov dword ptr [ecx + 0x58], 0x6000 */ W32((u32)(r_ecx+0x58u), 0x6000u);
    /* 00484f0b: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 00484f12: ret  */ FN_RET(0x00484f04); r_esp += 4; return;
}

void f_00484f14(void) /* sub_484F14 */
{
    FN_ENTER(0x00484f14);
    /* 00484f14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00484f15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00484f16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00484f17: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484f1a: mov eax, ecx */ r_eax = r_ecx;
    /* 00484f1c: mov dword ptr [esp + 0x30], 2 */ W32((u32)(r_esp+0x30u), 0x2u);
    /* 00484f24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00484f26: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00484f2a: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00484f2d: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 00484f30: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 00484f33: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 00484f36: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 00484f39: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 00484f3c: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00484f3f: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00484f42: mov dword ptr [eax + 0x80], edx */ W32((u32)(r_eax+0x80u), r_edx);
    /* 00484f48: mov dword ptr [eax + 0x84], edx */ W32((u32)(r_eax+0x84u), r_edx);
    /* 00484f4e: lea ecx, [eax + 0x60] */ r_ecx = (u32)(r_eax+0x60u);
    /* 00484f51: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00484f53: add eax, 0x88 */ {  u32 a = r_eax; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00484f58: mov ebx, eax */ r_ebx = r_eax;
    /* 00484f5a: mov esi, edx */ r_esi = r_edx;
    /* 00484f5c: mov edi, ecx */ r_edi = r_ecx;
L_00484f5e:; BB(0x00484f5e);
    /* 00484f5e: mov eax, dword ptr [esi + 0x900a20] */ r_eax = R32((u32)(r_esi+0x900a20u));
    /* 00484f64: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00484f68: mov eax, dword ptr [esi + 0x900a24] */ r_eax = R32((u32)(r_esi+0x900a24u));
    /* 00484f6e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00484f70: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00484f74: mov eax, dword ptr [esi + 0x900a28] */ r_eax = R32((u32)(r_esi+0x900a28u));
    /* 00484f7a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00484f7e: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00484f82: mov eax, dword ptr [esi + 0x900a38] */ r_eax = R32((u32)(r_esi+0x900a38u));
    /* 00484f88: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00484f8c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00484f90: mov eax, dword ptr [esi + 0x900a2c] */ r_eax = R32((u32)(r_esi+0x900a2cu));
    /* 00484f96: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00484f9a: mov eax, dword ptr [esi + 0x900a30] */ r_eax = R32((u32)(r_esi+0x900a30u));
    /* 00484fa0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00484fa4: mov eax, dword ptr [esi + 0x900a34] */ r_eax = R32((u32)(r_esi+0x900a34u));
    /* 00484faa: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00484fae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00484fb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484fb2: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x484fb7u); f_0065f960();
    /* 00484fb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00484fb8: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00484fba: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00484fbd: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00484fc0: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00484fc2: ja 0x484f5e */ if ((!fC&&!fZ)) goto L_00484f5e;
L_00484fc4:; BB(0x00484fc4);
    /* 00484fc4: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00484fc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00484fc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00484fc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00484fca: ret  */ FN_RET(0x00484f14); r_esp += 4; return;
}

void f_00484fcc(void) /* sub_484FCC */
{
    FN_ENTER(0x00484fcc);
    /* 00484fcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484fcd: mov ebp, esp */ r_ebp = r_esp;
    /* 00484fcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00484fd1: push 0x8cfa1c */ { u32 v = 0x8cfa1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00484fd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00484fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484fdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00484fe4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00484fe7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00484fea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00484fed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00484ff0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00484ff3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00484ff6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00484ff9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00485000: mov eax, ecx */ r_eax = r_ecx;
    /* 00485002: mov dword ptr [eax], 0xaf8738 */ W32((u32)(r_eax), 0xaf8738u);
    /* 00485008: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0048500a:; BB(0x0048500a);
    /* 0048500a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048500d: mov eax, dword ptr [eax + esi*4 + 0x80] */ r_eax = R32((u32)(r_eax+r_esi*4+0x80u));
    /* 00485014: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00485017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485019: je 0x485030 */ if (fZ) goto L_00485030;
L_0048501b:; BB(0x0048501b);
    /* 0048501b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048501c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x485021u); f_005cdcc0();
    /* 00485021: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00485022: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485025: mov dword ptr [eax + ebx*2 + 0x80], 0 */ W32((u32)(r_eax+r_ebx*2+0x80u), 0x0u);
L_00485030:; BB(0x00485030);
    /* 00485030: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00485033: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485036: jl 0x48500a */ if ((fS!=fO)) goto L_0048500a;
L_00485038:; BB(0x00485038);
    /* 00485038: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x48503du); f_004d3250();
    /* 0048503d: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x485042u); f_0048ea5c();
    /* 00485042: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485045: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00485048: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048504a: je 0x48505b */ if (fZ) goto L_0048505b;
L_0048504c:; BB(0x0048504c);
    /* 0048504c: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x485051u); f_005883f0();
    /* 00485051: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485054: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_0048505b:; BB(0x0048505b);
    /* 0048505b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00485062: mov ecx, eax */ r_ecx = r_eax;
    /* 00485064: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x485069u); f_008171e8();
    /* 00485069: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048506c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048506e: jne 0x485089 */ if (!fZ) goto L_00485089;
L_00485070:; BB(0x00485070);
    /* 00485070: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00485073: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485076: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00485079: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048507c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00485083: mov esp, ebp */ r_esp = r_ebp;
    /* 00485085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485086: ret 4 */ FN_RET(0x00484fcc); r_esp += 8; return;
L_00485089:; BB(0x00485089);
    /* 00485089: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048508c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048508d: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x485092u); f_005c2f74();
    /* 00485092: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00485093: jmp 0x485070 */ goto L_00485070;
}

