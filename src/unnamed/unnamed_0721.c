#include "protos.h"

void f_0072112c(void) /* sub_72112C */
{
    FN_ENTER(0x0072112c);
    /* 0072112c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072112d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072112e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00721131: mov esi, ecx */ r_esi = r_ecx;
    /* 00721133: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00721139: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x72113eu); f_00719140();
    /* 0072113e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072113f: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 00721142: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00721144: jae 0x72114c */ if (!fC) goto L_0072114c;
L_00721146:; BB(0x00721146);
    /* 00721146: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00721149: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072114a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072114b: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_0072114c:; BB(0x0072114c);
    /* 0072114c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072114f: jbe 0x721342 */ if ((fC||fZ)) goto L_00721342;
L_00721155:; BB(0x00721155);
    /* 00721155: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721158: je 0x7213a1 */ if (fZ) goto L_007213a1;
L_0072115e:; BB(0x0072115e);
    /* 0072115e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721161: je 0x721246 */ if (fZ) goto L_00721246;
L_00721167:; BB(0x00721167);
    /* 00721167: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072116a: jne 0x7211f9 */ if (!fZ) goto L_007211f9;
L_00721170:; BB(0x00721170);
    /* 00721170: mov edx, dword ptr [0xa95de0] */ r_edx = R32((u32)(0xa95de0u));
    /* 00721176: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721178: jne 0x7211b7 */ if (!fZ) goto L_007211b7;
L_0072117a:; BB(0x0072117a);
    /* 0072117a: call 0x78164c */ r_esp -= 4; W32(r_esp, 0x72117fu); f_0078164c();
    /* 0072117f: mov ebx, eax */ r_ebx = r_eax;
    /* 00721181: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721182: call 0x781ba0 */ r_esp -= 4; W32(r_esp, 0x721187u); f_00781ba0();
    /* 00721187: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721188: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0072118e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721190: je 0x721198 */ if (fZ) goto L_00721198;
L_00721192:; BB(0x00721192);
    /* 00721192: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721193: call 0x7f3014 */ r_esp -= 4; W32(r_esp, 0x721198u); f_007f3014();
L_00721198:; BB(0x00721198);
    /* 00721198: call 0x781654 */ r_esp -= 4; W32(r_esp, 0x72119du); f_00781654();
    /* 0072119d: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007211a1: mov dword ptr [esi + 0x24], 6 */ W32((u32)(r_esi+0x24u), 0x6u);
    /* 007211a8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007211ad: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007211b1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007211b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007211b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007211b6: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_007211b7:; BB(0x007211b7);
    /* 007211b7: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 007211bd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007211c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007211c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007211c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007211c6: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007211cd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7211d2u); f_007c1160();
    /* 007211d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007211d4: je 0x721146 */ if (fZ) goto L_00721146;
L_007211da:; BB(0x007211da);
    /* 007211da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007211dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007211dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007211de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007211df: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 007211e4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7211e9u); f_00814298();
    /* 007211e9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007211ec: mov dword ptr [esi + 0x24], 2 */ W32((u32)(r_esi+0x24u), 0x2u);
    /* 007211f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007211f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007211f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007211f8: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_007211f9:; BB(0x007211f9);
    /* 007211f9: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007211fc: jne 0x721146 */ if (!fZ) goto L_00721146;
L_00721202:; BB(0x00721202);
    /* 00721202: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00721205: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00721208: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0072120b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072120d: jle 0x721227 */ if ((fZ||fS!=fO)) goto L_00721227;
L_0072120f:; BB(0x0072120f);
    /* 0072120f: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00721215: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0072121a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x72121fu); f_007c1160();
    /* 0072121f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721221: je 0x721146 */ if (fZ) goto L_00721146;
L_00721227:; BB(0x00721227);
    /* 00721227: call 0x781654 */ r_esp -= 4; W32(r_esp, 0x72122cu); f_00781654();
    /* 0072122c: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00721230: mov dword ptr [esi + 0x24], 6 */ W32((u32)(r_esi+0x24u), 0x6u);
    /* 00721237: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072123c: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00721240: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00721243: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721244: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00721245: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_00721246:; BB(0x00721246);
    /* 00721246: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072124c: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x721251u); f_00718e88();
    /* 00721251: mov ebx, eax */ r_ebx = r_eax;
    /* 00721253: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721256: cmp ebx, dword ptr [0xa985e4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa985e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072125c: je 0x7212ec */ if (fZ) goto L_007212ec;
L_00721262:; BB(0x00721262);
    /* 00721262: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721264: je 0x7212bf */ if (fZ) goto L_007212bf;
L_00721266:; BB(0x00721266);
    /* 00721266: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00721269: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072126b: je 0x72128f */ if (fZ) goto L_0072128f;
L_0072126d:; BB(0x0072126d);
    /* 0072126d: mov edx, dword ptr [0x9f24d0] */ r_edx = R32((u32)(0x9f24d0u));
    /* 00721273: fld dword ptr [0x9f24d4] */ FPUSH(R_F32((u32)(0x9f24d4u)));
    /* 00721279: fsub dword ptr [0x9705d4] */ ST(0) = ST(0) - R_F32((u32)(0x9705d4u));
    /* 0072127f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00721283: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00721286: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00721289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072128a: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x72128fu); f_00712be4();
L_0072128f:; BB(0x0072128f);
    /* 0072128f: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00721292: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721294: je 0x7212e4 */ if (fZ) goto L_007212e4;
L_00721296:; BB(0x00721296);
    /* 00721296: mov edx, dword ptr [0x9f24c8] */ r_edx = R32((u32)(0x9f24c8u));
    /* 0072129c: fld dword ptr [0x9f24cc] */ FPUSH(R_F32((u32)(0x9f24ccu)));
    /* 007212a2: fsub dword ptr [0x9705d4] */ ST(0) = ST(0) - R_F32((u32)(0x9705d4u));
    /* 007212a8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007212ac: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007212b0: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007212b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007212b5: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x7212bau); f_00712be4();
    /* 007212ba: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 007212bd: jmp 0x7212e4 */ goto L_007212e4;
L_007212bf:; BB(0x007212bf);
    /* 007212bf: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007212c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007212c4: je 0x7212d0 */ if (fZ) goto L_007212d0;
L_007212c6:; BB(0x007212c6);
    /* 007212c6: push 0x9f24d0 */ { u32 v = 0x9f24d0u; r_esp -= 4; W32(r_esp, v); }
    /* 007212cb: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x7212d0u); f_00712be4();
L_007212d0:; BB(0x007212d0);
    /* 007212d0: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 007212d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007212d5: je 0x7212e4 */ if (fZ) goto L_007212e4;
L_007212d7:; BB(0x007212d7);
    /* 007212d7: push 0x9f24c8 */ { u32 v = 0x9f24c8u; r_esp -= 4; W32(r_esp, v); }
    /* 007212dc: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x7212e1u); f_00712be4();
    /* 007212e1: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
L_007212e4:; BB(0x007212e4);
    /* 007212e4: mov dword ptr [0xa985e4], ebx */ W32((u32)(0xa985e4u), r_ebx);
    /* 007212ea: jmp 0x7212ef */ goto L_007212ef;
L_007212ec:; BB(0x007212ec);
    /* 007212ec: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
L_007212ef:; BB(0x007212ef);
    /* 007212ef: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007212f6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007212f8: je 0x721319 */ if (fZ) goto L_00721319;
L_007212fa:; BB(0x007212fa);
    /* 007212fa: call 0x781654 */ r_esp -= 4; W32(r_esp, 0x7212ffu); f_00781654();
    /* 007212ff: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00721303: mov dword ptr [esi + 0x24], 6 */ W32((u32)(r_esi+0x24u), 0x6u);
    /* 0072130a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072130f: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00721313: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00721316: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721317: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00721318: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_00721319:; BB(0x00721319);
    /* 00721319: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072131b: je 0x721146 */ if (fZ) goto L_00721146;
L_00721321:; BB(0x00721321);
    /* 00721321: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x721326u); f_007365f4();
    /* 00721326: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721328: jne 0x721337 */ if (!fZ) goto L_00721337;
L_0072132a:; BB(0x0072132a);
    /* 0072132a: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 00721331: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00721334: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721335: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00721336: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_00721337:; BB(0x00721337);
    /* 00721337: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072133a: jne 0x721146 */ if (!fZ) goto L_00721146;
L_00721340:; BB(0x00721340);
    /* 00721340: jmp 0x721382 */ goto L_00721382;
L_00721342:; BB(0x00721342);
    /* 00721342: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00721345: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x72134au); f_0073b170();
    /* 0072134a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072134c: je 0x721355 */ if (fZ) goto L_00721355;
L_0072134e:; BB(0x0072134e);
    /* 0072134e: mov dword ptr [esi + 0x24], 2 */ W32((u32)(r_esi+0x24u), 0x2u);
L_00721355:; BB(0x00721355);
    /* 00721355: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072135b: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00721360: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x721365u); f_007c1160();
    /* 00721365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721367: je 0x721146 */ if (fZ) goto L_00721146;
L_0072136d:; BB(0x0072136d);
    /* 0072136d: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00721370: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x721375u); f_0073b0f0();
    /* 00721375: mov dword ptr [esi + 0x24], 2 */ W32((u32)(r_esi+0x24u), 0x2u);
    /* 0072137c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072137f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00721381: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_00721382:; BB(0x00721382);
    /* 00721382: call 0x781654 */ r_esp -= 4; W32(r_esp, 0x721387u); f_00781654();
    /* 00721387: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0072138b: mov dword ptr [esi + 0x24], 6 */ W32((u32)(r_esi+0x24u), 0x6u);
    /* 00721392: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00721397: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0072139b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072139e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072139f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007213a0: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_007213a1:; BB(0x007213a1);
    /* 007213a1: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007213a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007213a6: jne 0x7213dc */ if (!fZ) goto L_007213dc;
L_007213a8:; BB(0x007213a8);
    /* 007213a8: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 007213ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007213ad: je 0x7213e9 */ if (fZ) goto L_007213e9;
L_007213af:; BB(0x007213af);
    /* 007213af: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007213b6: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007213bb: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007213be: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007213c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007213c7: je 0x7213d0 */ if (fZ) goto L_007213d0;
L_007213c9:; BB(0x007213c9);
    /* 007213c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007213cb: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7213d0u); f_00760acc();
L_007213d0:; BB(0x007213d0);
    /* 007213d0: mov dword ptr [esi + 0x24], 3 */ W32((u32)(r_esi+0x24u), 0x3u);
    /* 007213d7: jmp 0x721246 */ goto L_00721246;
L_007213dc:; BB(0x007213dc);
    /* 007213dc: mov dword ptr [esi + 0x24], 5 */ W32((u32)(r_esi+0x24u), 0x5u);
    /* 007213e3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007213e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007213e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007213e8: ret  */ FN_RET(0x0072112c); r_esp += 4; return;
L_007213e9:; BB(0x007213e9);
    /* 007213e9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007213ef: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x7213f4u); f_00718e88();
    /* 007213f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007213f5: mov edx, dword ptr [0x9f24c8] */ r_edx = R32((u32)(0x9f24c8u));
    /* 007213fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007213fd: je 0x721419 */ if (fZ) goto L_00721419;
L_007213ff:; BB(0x007213ff);
    /* 007213ff: fld dword ptr [0x9f24cc] */ FPUSH(R_F32((u32)(0x9f24ccu)));
    /* 00721405: fsub dword ptr [0x9705d4] */ ST(0) = ST(0) - R_F32((u32)(0x9705d4u));
    /* 0072140b: fstp dword ptr [0xa985e0] */ W_F32((u32)(0xa985e0u), ST(0)); FPOP();
    /* 00721411: mov dword ptr [0xa985dc], edx */ W32((u32)(0xa985dcu), r_edx);
    /* 00721417: jmp 0x721429 */ goto L_00721429;
L_00721419:; BB(0x00721419);
    /* 00721419: mov eax, dword ptr [0x9f24cc] */ r_eax = R32((u32)(0x9f24ccu));
    /* 0072141e: mov dword ptr [0xa985dc], edx */ W32((u32)(0xa985dcu), r_edx);
    /* 00721424: mov dword ptr [0xa985e0], eax */ W32((u32)(0xa985e0u), r_eax);
L_00721429:; BB(0x00721429);
    /* 00721429: push 0xa985dc */ { u32 v = 0xa985dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0072142e: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x721433u); f_00735874();
    /* 00721433: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721434: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00721437: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0072143e: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00721444: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0072144b: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0072144e: jmp 0x7213af */ goto L_007213af;
}

void f_00721454(void) /* sub_721454 */
{
    FN_ENTER(0x00721454);
    /* 00721454: mov dword ptr [0xa985e8], 0x3f800000 */ W32((u32)(0xa985e8u), 0x3f800000u);
    /* 0072145e: mov dword ptr [0xa985ec], 0x41000000 */ W32((u32)(0xa985ecu), 0x41000000u);
    /* 00721468: mov dword ptr [0xa985f0], 0x3fc00000 */ W32((u32)(0xa985f0u), 0x3fc00000u);
    /* 00721472: ret  */ FN_RET(0x00721454); r_esp += 4; return;
}

void f_00721474(void) /* sub_721474 */
{
    FN_ENTER(0x00721474);
    /* 00721474: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721475: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00721477: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00721479: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x72147eu); f_0061cdb0();
    /* 0072147e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00721482: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00721484: jne 0x72148a */ if (!fZ) goto L_0072148a;
L_00721486:; BB(0x00721486);
    /* 00721486: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721487: ret 4 */ FN_RET(0x00721474); r_esp += 8; return;
L_0072148a:; BB(0x0072148a);
    /* 0072148a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072148b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x721490u); f_00857e98();
    /* 00721490: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721491: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721492: ret 4 */ FN_RET(0x00721474); r_esp += 8; return;
}

void f_00721498(void) /* sub_721498 */
{
    FN_ENTER(0x00721498);
    /* 00721498: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721499: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072149b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072149d: call 0x7214bc */ r_esp -= 4; W32(r_esp, 0x7214a2u); f_007214bc();
    /* 007214a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007214a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007214a8: jne 0x7214ae */ if (!fZ) goto L_007214ae;
L_007214aa:; BB(0x007214aa);
    /* 007214aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007214ab: ret 4 */ FN_RET(0x00721498); r_esp += 8; return;
L_007214ae:; BB(0x007214ae);
    /* 007214ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007214af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7214b4u); f_005c2f74();
    /* 007214b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007214b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007214b6: ret 4 */ FN_RET(0x00721498); r_esp += 8; return;
}

void f_007214bc(void) /* sub_7214BC */
{
    FN_ENTER(0x007214bc);
    /* 007214bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007214bd: mov ebp, esp */ r_ebp = r_esp;
    /* 007214bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007214c1: push 0x8f0d88 */ { u32 v = 0x8f0d88u; r_esp -= 4; W32(r_esp, v); }
    /* 007214c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007214cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007214cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007214d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007214d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007214da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007214dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007214e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007214e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007214e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007214ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007214f0: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007214f3: mov dword ptr [eax], 0xb3fdb8 */ W32((u32)(r_eax), 0xb3fdb8u);
    /* 007214f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007214fb: je 0x721507 */ if (fZ) goto L_00721507;
L_007214fd:; BB(0x007214fd);
    /* 007214fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007214ff: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x721504u); f_00721474();
    /* 00721504: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00721507:; BB(0x00721507);
    /* 00721507: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072150e: mov ecx, eax */ r_ecx = r_eax;
    /* 00721510: call 0x73a5a8 */ r_esp -= 4; W32(r_esp, 0x721515u); f_0073a5a8();
    /* 00721515: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00721518: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072151f: mov esp, ebp */ r_esp = r_ebp;
    /* 00721521: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00721522: ret  */ FN_RET(0x007214bc); r_esp += 4; return;
}

void f_00721524(void) /* sub_721524 */
{
    FN_ENTER(0x00721524);
    /* 00721524: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721525: mov eax, 0x20a0 */ r_eax = 0x20a0u;
    /* 0072152a: mov ebx, eax */ r_ebx = r_eax;
L_0072152c:; BB(0x0072152c);
    /* 0072152c: lea edx, [ebx + 0xa98600] */ r_edx = (u32)(r_ebx+0xa98600u);
    /* 00721532: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00721537: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0072153c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072153d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x721542u); f_00857dec();
    /* 00721542: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721545: add ebx, 0xfffffee0 */ {  u32 a = r_ebx; u32 b = 0xfffffee0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072154b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072154d: jge 0x72152c */ if ((fS==fO)) goto L_0072152c;
L_0072154f:; BB(0x0072154f);
    /* 0072154f: mov byte ptr [0xa9a7cc], 0 */ W8((u32)(0xa9a7ccu), 0x0u);
    /* 00721556: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721557: ret  */ FN_RET(0x00721524); r_esp += 4; return;
}

void f_00721558(void) /* sub_721558 */
{
    FN_ENTER(0x00721558);
    /* 00721558: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00721559: mov ebp, esp */ r_ebp = r_esp;
    /* 0072155b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072155d: push 0x8f0db0 */ { u32 v = 0x8f0db0u; r_esp -= 4; W32(r_esp, v); }
    /* 00721562: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00721568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00721569: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00721570: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00721573: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00721576: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00721579: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072157c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072157f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00721581: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00721584: call 0x73b1e8 */ r_esp -= 4; W32(r_esp, 0x721589u); f_0073b1e8();
    /* 00721589: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00721590: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00721595: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x72159au); f_005caba4();
    /* 0072159a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072159d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007215a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007215a2: je 0x7215d8 */ if (fZ) goto L_007215d8;
L_007215a4:; BB(0x007215a4);
    /* 007215a4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007215ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007215b2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007215b5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007215b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007215bb: call 0x7215dc */ r_esp -= 4; W32(r_esp, 0x7215c0u); f_007215dc();
    /* 007215c0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007215c3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007215ca:; BB(0x007215ca);
    /* 007215ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007215cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007215d4: mov esp, ebp */ r_esp = r_ebp;
    /* 007215d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007215d7: ret  */ FN_RET(0x00721558); r_esp += 4; return;
L_007215d8:; BB(0x007215d8);
    /* 007215d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007215da: jmp 0x7215ca */ goto L_007215ca;
}

void f_007215dc(void) /* sub_7215DC */
{
    FN_ENTER(0x007215dc);
    /* 007215dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007215dd: mov ebp, esp */ r_ebp = r_esp;
    /* 007215df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007215e1: push 0x8f0dec */ { u32 v = 0x8f0decu; r_esp -= 4; W32(r_esp, v); }
    /* 007215e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007215ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007215ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007215f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007215f5: mov eax, 0x21f0 */ r_eax = 0x21f0u;
    /* 007215fa: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7215ffu); f_00858020();
    /* 007215ff: mov ecx, dword ptr [esp + 0x21f0] */ r_ecx = R32((u32)(r_esp+0x21f0u));
    /* 00721606: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00721609: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0072160c: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0072160f: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00721612: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00721615: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00721618: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0072161a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072161d: call 0x73a610 */ r_esp -= 4; W32(r_esp, 0x721622u); f_0073a610();
    /* 00721622: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00721629: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072162c: movzx eax, byte ptr [0xa9a7cc] */ r_eax = (u32)R8((u32)(0xa9a7ccu));
    /* 00721633: fld dword ptr [0x9706a0] */ FPUSH(R_F32((u32)(0x9706a0u)));
    /* 00721639: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 0072163c: fstp dword ptr [ebp - 0x2200] */ W_F32((u32)(r_ebp+0xffffde00u), ST(0)); FPOP();
    /* 00721642: mov dword ptr [ecx], 0xb3fdb8 */ W32((u32)(r_ecx), 0xb3fdb8u);
    /* 00721648: mov edx, dword ptr [0x9f24d8] */ r_edx = R32((u32)(0x9f24d8u));
    /* 0072164e: mov dword ptr [ebp - 0x21fc], 0 */ W32((u32)(r_ebp+0xffffde04u), 0x0u);
    /* 00721658: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0072165b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0072165e: mov dword ptr [ebp - 0x21f8], 0 */ W32((u32)(r_ebp+0xffffde08u), 0x0u);
    /* 00721668: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0072166a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72166fu); f_008581c5();
    /* 0072166f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00721672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721675: mov dword ptr [ebp - 0x21f4], eax */ W32((u32)(r_ebp+0xffffde0cu), r_eax);
    /* 0072167b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072167d: je 0x72192f */ if (fZ) goto L_0072192f;
L_00721683:; BB(0x00721683);
    /* 00721683: mov dword ptr [ebp - 0x21f8], 1 */ W32((u32)(r_ebp+0xffffde08u), 0x1u);
    /* 0072168d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00721694: mov ecx, eax */ r_ecx = r_eax;
    /* 00721696: lea eax, [ebp - 0x2200] */ r_eax = (u32)(r_ebp+0xffffde00u);
    /* 0072169c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072169d: call 0x73f670 */ r_esp -= 4; W32(r_esp, 0x7216a2u); f_0073f670();
    /* 007216a2: mov dword ptr [ebp - 0x21f8], 0 */ W32((u32)(r_ebp+0xffffde08u), 0x0u);
L_007216ac:; BB(0x007216ac);
    /* 007216ac: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007216af: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007216b2: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 007216b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007216bc: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 007216bf: mov dword ptr [ecx + 0xa4], 3 */ W32((u32)(r_ecx+0xa4u), 0x3u);
    /* 007216c9: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007216ce: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 007216d1: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 007216db: push 0x21c0 */ { u32 v = 0x21c0u; r_esp -= 4; W32(r_esp, v); }
    /* 007216e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007216e2: push 0xa98600 */ { u32 v = 0xa98600u; r_esp -= 4; W32(r_esp, v); }
    /* 007216e7: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 007216ed: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 007216f3: lea ecx, [ebp - 0x21f0] */ r_ecx = (u32)(r_ebp+0xffffde10u);
    /* 007216f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007216fa: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7216ffu); f_0086b6b8();
    /* 007216ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721702: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00721705: cmp esi, 0x1e */ {  u32 a = r_esi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00721708: jge 0x721927 */ if ((fS==fO)) goto L_00721927;
L_0072170e:; BB(0x0072170e);
    /* 0072170e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
L_00721711:; BB(0x00721711);
    /* 00721711: lea ebx, [ebp - 0x21f0] */ r_ebx = (u32)(r_ebp+0xffffde10u);
    /* 00721717: lea eax, [esi + esi*8] */ r_eax = (u32)(r_esi+r_esi*8);
    /* 0072171a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072171c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072171e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00721720: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00721722: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00721724: movzx edx, word ptr [ebp + eax - 0x21f0] */ r_edx = (u32)R16((u32)(r_ebp+r_eax+0xffffde10u));
    /* 0072172c: lea ebx, [ebx + eax] */ r_ebx = (u32)(r_ebx+r_eax);
    /* 0072172f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721731: je 0x7217f3 */ if (fZ) goto L_007217f3;
L_00721737:; BB(0x00721737);
    /* 00721737: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 0072173a: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0072173d: call 0x72193c */ r_esp -= 4; W32(r_esp, 0x721742u); f_0072193c();
    /* 00721742: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00721745: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721746: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72174bu); f_00858009();
    /* 0072174b: mov edi, eax */ r_edi = r_eax;
    /* 0072174d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00721750: mov edx, 0x8f */ r_edx = 0x8fu;
    /* 00721755: cmp edi, 0x8f */ {  u32 a = r_edi; u32 b = 0x8fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072175b: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 0072175e: jbe 0x721762 */ if ((fC||fZ)) goto L_00721762;
L_00721760:; BB(0x00721760);
    /* 00721760: mov edi, edx */ r_edi = r_edx;
L_00721762:; BB(0x00721762);
    /* 00721762: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00721764: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00721766: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00721767: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721768: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072176a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072176c: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0072176f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00721772: lea edx, [ecx + ecx + 0xa98600] */ r_edx = (u32)(r_ecx+r_ecx+0xa98600u);
    /* 00721779: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0072177c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072177d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x721782u); f_00857dec();
    /* 00721782: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721785: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00721788: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072178b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072178e: push 0x540 */ { u32 v = 0x540u; r_esp -= 4; W32(r_esp, v); }
    /* 00721793: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00721795: mov word ptr [ebx + edi*2 + 0xa98600], dx */ W16((u32)(r_ebx+r_edi*2+0xa98600u), (u16)r_edx);
    /* 0072179d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072179e: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7217a3u); f_0073ae38();
    /* 007217a3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007217a6: call 0x721968 */ r_esp -= 4; W32(r_esp, 0x7217abu); f_00721968();
    /* 007217ab: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007217ae: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007217b1: fadd dword ptr [0x970698] */ ST(0) = ST(0) + R_F32((u32)(0x970698u));
    /* 007217b7: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 007217bd: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 007217c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007217c6: je 0x7217cf */ if (fZ) goto L_007217cf;
L_007217c8:; BB(0x007217c8);
    /* 007217c8: mov byte ptr [ecx + 0xb4], 1 */ W8((u32)(r_ecx+0xb4u), 0x1u);
L_007217cf:; BB(0x007217cf);
    /* 007217cf: mov byte ptr [ecx + 0xc1], 1 */ W8((u32)(r_ecx+0xc1u), 0x1u);
    /* 007217d6: mov eax, 0xff */ r_eax = 0xffu;
    /* 007217db: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 007217e1: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 007217e7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007217ea: cmp esi, 0x1e */ {  u32 a = r_esi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007217ed: jl 0x721711 */ if ((fS!=fO)) goto L_00721711;
L_007217f3:; BB(0x007217f3);
    /* 007217f3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007217f6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007217f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007217fa: jle 0x7218e4 */ if ((fZ||fS!=fO)) goto L_007218e4;
L_00721800:; BB(0x00721800);
    /* 00721800: lea ebx, [ebp - 0x21f0] */ r_ebx = (u32)(r_ebp+0xffffde10u);
    /* 00721806: lea eax, [esi + esi*8] */ r_eax = (u32)(r_esi+r_esi*8);
    /* 00721809: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072180b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072180d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072180f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00721811: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00721813: movzx edx, word ptr [ebp + eax - 0x21f0] */ r_edx = (u32)R16((u32)(r_ebp+r_eax+0xffffde10u));
    /* 0072181b: lea ebx, [ebx + eax] */ r_ebx = (u32)(r_ebx+r_eax);
    /* 0072181e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721820: je 0x7218e4 */ if (fZ) goto L_007218e4;
L_00721826:; BB(0x00721826);
    /* 00721826: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 00721829: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0072182c: call 0x72193c */ r_esp -= 4; W32(r_esp, 0x721831u); f_0072193c();
    /* 00721831: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00721834: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721835: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72183au); f_00858009();
    /* 0072183a: mov edi, eax */ r_edi = r_eax;
    /* 0072183c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072183f: mov edx, 0x8f */ r_edx = 0x8fu;
    /* 00721844: cmp edi, 0x8f */ {  u32 a = r_edi; u32 b = 0x8fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0072184a: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 0072184d: jbe 0x721851 */ if ((fC||fZ)) goto L_00721851;
L_0072184f:; BB(0x0072184f);
    /* 0072184f: mov edi, edx */ r_edi = r_edx;
L_00721851:; BB(0x00721851);
    /* 00721851: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00721853: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00721855: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00721856: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721857: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00721859: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072185b: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0072185e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00721861: lea edx, [ecx + ecx + 0xa98600] */ r_edx = (u32)(r_ecx+r_ecx+0xa98600u);
    /* 00721868: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0072186b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072186c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x721871u); f_00857dec();
    /* 00721871: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721874: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00721877: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072187a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072187d: push 0x540 */ { u32 v = 0x540u; r_esp -= 4; W32(r_esp, v); }
    /* 00721882: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00721884: mov word ptr [ebx + edi*2 + 0xa98600], dx */ W16((u32)(r_ebx+r_edi*2+0xa98600u), (u16)r_edx);
    /* 0072188c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072188d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x721892u); f_0073ae38();
    /* 00721892: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00721895: call 0x721968 */ r_esp -= 4; W32(r_esp, 0x72189au); f_00721968();
    /* 0072189a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072189d: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007218a0: fadd dword ptr [0x970698] */ ST(0) = ST(0) + R_F32((u32)(0x970698u));
    /* 007218a6: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 007218ac: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 007218b2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007218b5: je 0x7218be */ if (fZ) goto L_007218be;
L_007218b7:; BB(0x007218b7);
    /* 007218b7: mov byte ptr [ecx + 0xb4], 1 */ W8((u32)(r_ecx+0xb4u), 0x1u);
L_007218be:; BB(0x007218be);
    /* 007218be: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007218c1: mov byte ptr [ecx + 0xc1], 1 */ W8((u32)(r_ecx+0xc1u), 0x1u);
    /* 007218c8: mov eax, 0xff */ r_eax = 0xffu;
    /* 007218cd: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 007218d3: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 007218d9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007218dc: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007218de: jl 0x721800 */ if ((fS!=fO)) goto L_00721800;
L_007218e4:; BB(0x007218e4);
    /* 007218e4: call 0x7219f0 */ r_esp -= 4; W32(r_esp, 0x7218e9u); f_007219f0();
    /* 007218e9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007218ec: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007218ef: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007218f2: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007218f5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007218f7: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 007218fd: mov byte ptr [eax + 0xb4], 1 */ W8((u32)(r_eax+0xb4u), 0x1u);
    /* 00721904: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 0072190a: mov byte ptr [eax + 0xc1], dl */ W8((u32)(r_eax+0xc1u), (u8)r_edx);
    /* 00721910: mov byte ptr [eax + 0xc0], 0xf8 */ W8((u32)(r_eax+0xc0u), 0xf8u);
    /* 00721917: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072191a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00721921: mov esp, ebp */ r_esp = r_ebp;
    /* 00721923: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00721924: ret 8 */ FN_RET(0x007215dc); r_esp += 12; return;
L_00721927:; BB(0x00721927);
    /* 00721927: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0072192a: jmp 0x7217f3 */ goto L_007217f3;
L_0072192f:; BB(0x0072192f);
    /* 0072192f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00721931: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00721934: jmp 0x7216ac */ goto L_007216ac;
}

void f_0072193c(void) /* sub_72193C */
{
    FN_ENTER(0x0072193c);
    /* 0072193c: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 00721942: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00721945: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00721948: jl 0x721958 */ if ((fS!=fO)) goto L_00721958;
L_0072194a:; BB(0x0072194a);
    /* 0072194a: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00721954: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00721956: jmp 0x72195e */ goto L_0072195e;
L_00721958:; BB(0x00721958);
    /* 00721958: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
L_0072195e:; BB(0x0072195e);
    /* 0072195e: mov byte ptr [0xa9a7cc], al */ W8((u32)(0xa9a7ccu), (u8)r_eax);
    /* 00721963: mov eax, edx */ r_eax = r_edx;
    /* 00721965: ret  */ FN_RET(0x0072193c); r_esp += 4; return;
}

void f_00721968(void) /* sub_721968 */
{
    FN_ENTER(0x00721968);
    /* 00721968: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721969: mov eax, dword ptr [ecx + 0x9c] */ r_eax = R32((u32)(r_ecx+0x9cu));
    /* 0072196f: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00721972: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00721974: jge 0x72197f */ if ((fS==fO)) goto L_0072197f;
L_00721976:; BB(0x00721976);
    /* 00721976: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0072197c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0072197f:; BB(0x0072197f);
    /* 0072197f: fld dword ptr [0x970694] */ FPUSH(R_F32((u32)(0x970694u)));
    /* 00721985: fadd dword ptr [ecx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48u));
    /* 00721988: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 0072198b: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 0072198e: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 00721991: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00721994: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 00721997: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 0072199a: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 0072199d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072199f: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007219a1: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 007219a4: call 0x7219ac */ r_esp -= 4; W32(r_esp, 0x7219a9u); f_007219ac();
    /* 007219a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007219aa: ret  */ FN_RET(0x00721968); r_esp += 4; return;
}

void f_007219ac(void) /* sub_7219AC */
{
    FN_ENTER(0x007219ac);
    /* 007219ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007219ad: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007219b0: mov esi, ecx */ r_esi = r_ecx;
    /* 007219b2: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 007219b5: fld dword ptr [0x97068c] */ FPUSH(R_F32((u32)(0x97068cu)));
    /* 007219bb: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 007219be: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007219c2: lea edx, [esi + 0x70] */ r_edx = (u32)(r_esi+0x70u);
    /* 007219c5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007219cc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007219cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007219d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007219d1: call 0x73f8a4 */ r_esp -= 4; W32(r_esp, 0x7219d6u); f_0073f8a4();
    /* 007219d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007219d8: jne 0x7219df */ if (!fZ) goto L_007219df;
L_007219da:; BB(0x007219da);
    /* 007219da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007219dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007219de: ret  */ FN_RET(0x007219ac); r_esp += 4; return;
L_007219df:; BB(0x007219df);
    /* 007219df: mov eax, dword ptr [esi + 0x74] */ r_eax = R32((u32)(r_esi+0x74u));
    /* 007219e2: mov dword ptr [esi + 0x98], eax */ W32((u32)(r_esi+0x98u), r_eax);
    /* 007219e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007219eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007219ec: ret  */ FN_RET(0x007219ac); r_esp += 4; return;
}

void f_007219f0(void) /* sub_7219F0 */
{
    FN_ENTER(0x007219f0);
    /* 007219f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007219f1: mov edi, ecx */ r_edi = r_ecx;
    /* 007219f3: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 007219f6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007219f9: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 007219fc: mov ecx, edi */ r_ecx = r_edi;
    /* 007219fe: call 0x7219ac */ r_esp -= 4; W32(r_esp, 0x721a03u); f_007219ac();
    /* 00721a03: mov dword ptr [edi + 0xac], 0 */ W32((u32)(r_edi+0xacu), 0x0u);
    /* 00721a0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00721a0e: ret  */ FN_RET(0x007219f0); r_esp += 4; return;
}

void f_00721a10(void) /* sub_721A10 */
{
    FN_ENTER(0x00721a10);
    /* 00721a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00721a11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721a12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00721a13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721a14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721a15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00721a17: fld dword ptr [ebx + 0x74] */ FPUSH(R_F32((u32)(r_ebx+0x74u)));
    /* 00721a1a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00721a1d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00721a1f: call 0x72193c */ r_esp -= 4; W32(r_esp, 0x721a24u); f_0072193c();
    /* 00721a24: mov esi, eax */ r_esi = r_eax;
    /* 00721a26: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00721a2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00721a2b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x721a30u); f_00858009();
    /* 00721a30: mov ebp, eax */ r_ebp = r_eax;
    /* 00721a32: mov edi, 0x8f */ r_edi = 0x8fu;
    /* 00721a37: cmp ebp, 0x8f */ {  u32 a = r_ebp; u32 b = 0x8fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00721a3d: lea esi, [esi + esi*8] */ r_esi = (u32)(r_esi+r_esi*8);
    /* 00721a40: jbe 0x721a44 */ if ((fC||fZ)) goto L_00721a44;
L_00721a42:; BB(0x00721a42);
    /* 00721a42: mov ebp, edi */ r_ebp = r_edi;
L_00721a44:; BB(0x00721a44);
    /* 00721a44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00721a45: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00721a47: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00721a4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00721a4c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00721a4e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00721a50: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00721a52: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00721a55: lea esi, [esi + esi + 0xa98600] */ r_esi = (u32)(r_esi+r_esi+0xa98600u);
    /* 00721a5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721a5d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x721a62u); f_00857dec();
    /* 00721a62: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721a65: push 0x540 */ { u32 v = 0x540u; r_esp -= 4; W32(r_esp, v); }
    /* 00721a6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721a6b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00721a6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00721a6f: mov word ptr [edi + ebp*2 + 0xa98600], dx */ W16((u32)(r_edi+r_ebp*2+0xa98600u), (u16)r_edx);
    /* 00721a77: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x721a7cu); f_0073ae38();
    /* 00721a7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00721a7e: call 0x721968 */ r_esp -= 4; W32(r_esp, 0x721a83u); f_00721968();
    /* 00721a83: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00721a86: fadd dword ptr [0x970684] */ ST(0) = ST(0) + R_F32((u32)(0x970684u));
    /* 00721a8c: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00721a92: fstp dword ptr [ebx + 0x98] */ W_F32((u32)(r_ebx+0x98u), ST(0)); FPOP();
    /* 00721a98: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00721a9b: je 0x721aa4 */ if (fZ) goto L_00721aa4;
L_00721a9d:; BB(0x00721a9d);
    /* 00721a9d: mov byte ptr [ebx + 0xb4], 1 */ W8((u32)(r_ebx+0xb4u), 0x1u);
L_00721aa4:; BB(0x00721aa4);
    /* 00721aa4: mov byte ptr [ebx + 0xc1], 1 */ W8((u32)(r_ebx+0xc1u), 0x1u);
    /* 00721aab: mov eax, 0xff */ r_eax = 0xffu;
    /* 00721ab0: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 00721ab6: mov dword ptr [ebx + 0xb8], eax */ W32((u32)(r_ebx+0xb8u), r_eax);
    /* 00721abc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721abd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00721abf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00721ac0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00721ac1: ret 4 */ FN_RET(0x00721a10); r_esp += 8; return;
}

void f_00721ac4(void) /* sub_721AC4 */
{
    FN_ENTER(0x00721ac4);
    /* 00721ac4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00721ac5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00721ac6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00721ac7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00721aca: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00721acc: mov ebx, dword ptr [ebp + 0xa4] */ r_ebx = R32((u32)(r_ebp+0xa4u));
    /* 00721ad2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721ad4: je 0x721ca7 */ if (fZ) goto L_00721ca7;
L_00721ada:; BB(0x00721ada);
    /* 00721ada: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721add: je 0x721b3d */ if (fZ) goto L_00721b3d;
L_00721adf:; BB(0x00721adf);
    /* 00721adf: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721ae2: jne 0x721b35 */ if (!fZ) goto L_00721b35;
L_00721ae4:; BB(0x00721ae4);
    /* 00721ae4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00721ae6: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x721aebu); f_007bfe60();
    /* 00721aeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721aec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721aee: je 0x721b02 */ if (fZ) goto L_00721b02;
L_00721af0:; BB(0x00721af0);
    /* 00721af0: fld dword ptr [0x970680] */ FPUSH(R_F32((u32)(0x970680u)));
    /* 00721af6: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 00721afc: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
L_00721b02:; BB(0x00721b02);
    /* 00721b02: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00721b04: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x721b09u); f_007bfe60();
    /* 00721b09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721b0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721b0c: je 0x721b20 */ if (fZ) goto L_00721b20;
L_00721b0e:; BB(0x00721b0e);
    /* 00721b0e: fld dword ptr [0x97067c] */ FPUSH(R_F32((u32)(0x97067cu)));
    /* 00721b14: fadd dword ptr [ebp + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xacu));
    /* 00721b1a: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
L_00721b20:; BB(0x00721b20);
    /* 00721b20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721b22: call 0x721cfc */ r_esp -= 4; W32(r_esp, 0x721b27u); f_00721cfc();
    /* 00721b27: fild dword ptr [ebp + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xa8u)));
    /* 00721b2d: mov ebx, dword ptr [ebp + 0xa4] */ r_ebx = R32((u32)(r_ebp+0xa4u));
    /* 00721b33: jmp 0x721b5a */ goto L_00721b5a;
L_00721b35:; BB(0x00721b35);
    /* 00721b35: fild dword ptr [ebp + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xa8u)));
    /* 00721b3b: jmp 0x721b5a */ goto L_00721b5a;
L_00721b3d:; BB(0x00721b3d);
    /* 00721b3d: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 00721b43: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00721b46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00721b48: jle 0x721c83 */ if ((fZ||fS!=fO)) goto L_00721c83;
L_00721b4e:; BB(0x00721b4e);
    /* 00721b4e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00721b51: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00721b54: mov dword ptr [ebp + 0xa8], eax */ W32((u32)(r_ebp+0xa8u), r_eax);
L_00721b5a:; BB(0x00721b5a);
    /* 00721b5a: fld dword ptr [0x970670] */ FPUSH(R_F32((u32)(0x970670u)));
    /* 00721b60: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00721b62: fld dword ptr [0x970668] */ FPUSH(R_F32((u32)(0x970668u)));
    /* 00721b68: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00721b6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00721b6c: fadd dword ptr [0x97066c] */ ST(0) = ST(0) + R_F32((u32)(0x97066cu));
    /* 00721b72: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00721b74: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00721b77: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 00721b7a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721b7d: je 0x721c5f */ if (fZ) goto L_00721c5f;
L_00721b83:; BB(0x00721b83);
    /* 00721b83: movsx edi, byte ptr [ebp + 0xc0] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+0xc0u));
    /* 00721b8a: add edi, dword ptr [ebp + 0xbc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xbcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00721b90: mov ebx, dword ptr [ebp + 0xb8] */ r_ebx = R32((u32)(r_ebp+0xb8u));
    /* 00721b96: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00721b98: jle 0x721ba5 */ if ((fZ||fS!=fO)) goto L_00721ba5;
L_00721b9a:; BB(0x00721b9a);
    /* 00721b9a: mov byte ptr [ebp + 0xc0], 0xf8 */ W8((u32)(r_ebp+0xc0u), 0xf8u);
    /* 00721ba1: mov edi, ebx */ r_edi = r_ebx;
    /* 00721ba3: jmp 0x721bb9 */ goto L_00721bb9;
L_00721ba5:; BB(0x00721ba5);
    /* 00721ba5: cmp edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00721bab: jge 0x721bb9 */ if ((fS==fO)) goto L_00721bb9;
L_00721bad:; BB(0x00721bad);
    /* 00721bad: mov byte ptr [ebp + 0xc0], 8 */ W8((u32)(r_ebp+0xc0u), 0x8u);
    /* 00721bb4: mov edi, 0x80 */ r_edi = 0x80u;
L_00721bb9:; BB(0x00721bb9);
    /* 00721bb9: add ebx, -8 */ {  u32 a = r_ebx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00721bbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00721bbe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00721bc0: jg 0x721bc4 */ if ((!fZ&&fS==fO)) goto L_00721bc4;
L_00721bc2:; BB(0x00721bc2);
    /* 00721bc2: mov ebx, eax */ r_ebx = r_eax;
L_00721bc4:; BB(0x00721bc4);
    /* 00721bc4: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00721bc7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00721bc9: mov eax, 0x80808081 */ r_eax = 0x80808081u;
    /* 00721bce: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00721bd0: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00721bd2: sar edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00721bd5: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00721bd8: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_00721bda:; BB(0x00721bda);
    /* 00721bda: movsx eax, byte ptr [ebp + 0xc1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xc1u));
    /* 00721be1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00721be3: jle 0x721c51 */ if ((fZ||fS!=fO)) goto L_00721c51;
L_00721be5:; BB(0x00721be5);
    /* 00721be5: cmp ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00721beb: jge 0x721c09 */ if ((fS==fO)) goto L_00721c09;
L_00721bed:; BB(0x00721bed);
    /* 00721bed: mov edx, 0xff */ r_edx = 0xffu;
    /* 00721bf2: mov dword ptr [ebp + 0xb8], edx */ W32((u32)(r_ebp+0xb8u), r_edx);
    /* 00721bf8: mov dword ptr [ebp + 0xbc], edx */ W32((u32)(r_ebp+0xbcu), r_edx);
    /* 00721bfe: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00721c01: mov byte ptr [ebp + 0xc1], al */ W8((u32)(r_ebp+0xc1u), (u8)r_eax);
    /* 00721c07: jmp 0x721c15 */ goto L_00721c15;
L_00721c09:; BB(0x00721c09);
    /* 00721c09: mov dword ptr [ebp + 0xb8], ecx */ W32((u32)(r_ebp+0xb8u), r_ecx);
    /* 00721c0f: mov dword ptr [ebp + 0xbc], edx */ W32((u32)(r_ebp+0xbcu), r_edx);
L_00721c15:; BB(0x00721c15);
    /* 00721c15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721c17: call 0x721d48 */ r_esp -= 4; W32(r_esp, 0x721c1cu); f_00721d48();
    /* 00721c1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721c1e: call 0x73adcc */ r_esp -= 4; W32(r_esp, 0x721c23u); f_0073adcc();
    /* 00721c23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721c25: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x721c2au); f_0061cdb0();
    /* 00721c2a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721c2c: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x721c31u); f_0071087c();
    /* 00721c31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721c33: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x721c38u); f_00710db4();
    /* 00721c38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721c3a: call 0x721d84 */ r_esp -= 4; W32(r_esp, 0x721c3fu); f_00721d84();
    /* 00721c3f: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 00721c42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00721c43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721c45: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x721c4au); f_0072a5ec();
    /* 00721c4a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00721c4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00721c4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00721c4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00721c50: ret  */ FN_RET(0x00721ac4); r_esp += 4; return;
L_00721c51:; BB(0x00721c51);
    /* 00721c51: mov dword ptr [ebp + 0xb8], ecx */ W32((u32)(r_ebp+0xb8u), r_ecx);
    /* 00721c57: mov dword ptr [ebp + 0xbc], edx */ W32((u32)(r_ebp+0xbcu), r_edx);
    /* 00721c5d: jmp 0x721c15 */ goto L_00721c15;
L_00721c5f:; BB(0x00721c5f);
    /* 00721c5f: mov edx, dword ptr [ebp + 0xbc] */ r_edx = R32((u32)(r_ebp+0xbcu));
    /* 00721c65: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00721c6a: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 00721c6f: add edx, -8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00721c72: mov eax, 0x40 */ r_eax = 0x40u;
    /* 00721c77: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00721c7a: jg 0x721c7e */ if ((!fZ&&fS==fO)) goto L_00721c7e;
L_00721c7c:; BB(0x00721c7c);
    /* 00721c7c: mov edx, eax */ r_edx = r_eax;
L_00721c7e:; BB(0x00721c7e);
    /* 00721c7e: jmp 0x721bda */ goto L_00721bda;
L_00721c83:; BB(0x00721c83);
    /* 00721c83: fld dword ptr [0x970678] */ FPUSH(R_F32((u32)(0x970678u)));
    /* 00721c89: mov dword ptr [ebp + 0xa8], 0 */ W32((u32)(r_ebp+0xa8u), 0x0u);
    /* 00721c93: mov ebx, 3 */ r_ebx = 0x3u;
    /* 00721c98: mov dword ptr [ebp + 0xa4], 3 */ W32((u32)(r_ebp+0xa4u), 0x3u);
    /* 00721ca2: jmp 0x721b5a */ goto L_00721b5a;
L_00721ca7:; BB(0x00721ca7);
    /* 00721ca7: mov edx, dword ptr [ebp + 0xa8] */ r_edx = R32((u32)(r_ebp+0xa8u));
    /* 00721cad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00721cb0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00721cb4: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00721cb8: fcom dword ptr [0x970674] */ fx_compare(ST(0), R_F32((u32)(0x970674u))); 
    /* 00721cbe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00721cc0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00721cc1: jae 0x721cce */ if (!fC) goto L_00721cce;
L_00721cc3:; BB(0x00721cc3);
    /* 00721cc3: mov dword ptr [ebp + 0xa8], edx */ W32((u32)(r_ebp+0xa8u), r_edx);
    /* 00721cc9: jmp 0x721b5a */ goto L_00721b5a;
L_00721cce:; BB(0x00721cce);
    /* 00721cce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00721cd0: mov dword ptr [ebp + 0xa8], 3 */ W32((u32)(r_ebp+0xa8u), 0x3u);
    /* 00721cda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00721cdc: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x721ce1u); f_0073b0f0();
    /* 00721ce1: fild dword ptr [ebp + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xa8u)));
    /* 00721ce7: mov dword ptr [ebp + 0xa4], 1 */ W32((u32)(r_ebp+0xa4u), 0x1u);
    /* 00721cf1: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00721cf6: jmp 0x721b5a */ goto L_00721b5a;
}

void f_00721cfc(void) /* sub_721CFC */
{
    FN_ENTER(0x00721cfc);
    /* 00721cfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721cfd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00721d00: mov esi, ecx */ r_esi = r_ecx;
    /* 00721d02: fild dword ptr [esi + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_esi+0xa8u)));
    /* 00721d08: fmul dword ptr [0x970664] */ ST(0) = ST(0) * R_F32((u32)(0x970664u));
    /* 00721d0e: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 00721d12: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00721d16: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00721d19: call 0x719978 */ r_esp -= 4; W32(r_esp, 0x721d1eu); f_00719978();
    /* 00721d1e: fild dword ptr [esi + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_esi+0xa8u)));
    /* 00721d24: fmul dword ptr [0x97065c] */ ST(0) = ST(0) * R_F32((u32)(0x97065cu));
    /* 00721d2a: fadd dword ptr [0x970660] */ ST(0) = ST(0) + R_F32((u32)(0x970660u));
    /* 00721d30: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 00721d34: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00721d38: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00721d3b: call 0x71998c */ r_esp -= 4; W32(r_esp, 0x721d40u); f_0071998c();
    /* 00721d40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00721d43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00721d44: ret  */ FN_RET(0x00721cfc); r_esp += 4; return;
}

void f_00721d48(void) /* sub_721D48 */
{
    FN_ENTER(0x00721d48);
    /* 00721d48: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 00721d4e: fcom dword ptr [0x970658] */ fx_compare(ST(0), R_F32((u32)(0x970658u))); 
    /* 00721d54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00721d56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00721d57: je 0x721d7f */ if (fZ) goto L_00721d7f;
L_00721d59:; BB(0x00721d59);
    /* 00721d59: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 00721d5f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00721d61: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 00721d64: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00721d66: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 00721d6c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00721d6e: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 00721d71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00721d73: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 00721d79: call 0x7219ac */ r_esp -= 4; W32(r_esp, 0x721d7eu); f_007219ac();
    /* 00721d7e: ret  */ FN_RET(0x00721d48); r_esp += 4; return;
L_00721d7f:; BB(0x00721d7f);
    /* 00721d7f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00721d81: ret  */ FN_RET(0x00721d48); r_esp += 4; return;
}

void f_00721d84(void) /* sub_721D84 */
{
    FN_ENTER(0x00721d84);
    /* 00721d84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00721d85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721d86: mov edi, ecx */ r_edi = r_ecx;
    /* 00721d88: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 00721d8b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00721d8e: mov ecx, edi */ r_ecx = r_edi;
    /* 00721d90: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x721d95u); f_00710ee4();
    /* 00721d95: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 00721d98: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 00721d9b: fcom dword ptr [0x970654] */ fx_compare(ST(0), R_F32((u32)(0x970654u))); 
    /* 00721da1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00721da3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00721da4: je 0x721dc8 */ if (fZ) goto L_00721dc8;
L_00721da6:; BB(0x00721da6);
    /* 00721da6: fld dword ptr [edi + 0x98] */ FPUSH(R_F32((u32)(r_edi+0x98u)));
    /* 00721dac: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00721dae: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 00721db1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00721db3: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 00721db9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00721dbb: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 00721dbe: mov ecx, edi */ r_ecx = r_edi;
    /* 00721dc0: call 0x7219ac */ r_esp -= 4; W32(r_esp, 0x721dc5u); f_007219ac();
    /* 00721dc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721dc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00721dc7: ret  */ FN_RET(0x00721d84); r_esp += 4; return;
L_00721dc8:; BB(0x00721dc8);
    /* 00721dc8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00721dca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721dcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00721dcc: ret  */ FN_RET(0x00721d84); r_esp += 4; return;
}

void f_00721dd0(void) /* sub_721DD0 */
{
    FN_ENTER(0x00721dd0);
    /* 00721dd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00721dd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721dd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00721dd3: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00721dd9: mov edi, ecx */ r_edi = r_ecx;
    /* 00721ddb: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00721ddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00721de0: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x721de5u); f_00716ba0();
    /* 00721de5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00721de6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721de8: je 0x721df4 */ if (fZ) goto L_00721df4;
L_00721dea:; BB(0x00721dea);
    /* 00721dea: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00721df0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00721df1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00721df2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00721df3: ret  */ FN_RET(0x00721dd0); r_esp += 4; return;
L_00721df4:; BB(0x00721df4);
    /* 00721df4: mov ecx, edi */ r_ecx = r_edi;
    /* 00721df6: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x721dfbu); f_007108f4();
    /* 00721dfb: mov esi, eax */ r_esi = r_eax;
    /* 00721dfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721dfe: mov ecx, edi */ r_ecx = r_edi;
    /* 00721e00: call 0x72202c */ r_esp -= 4; W32(r_esp, 0x721e05u); f_0072202c();
    /* 00721e05: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00721e0b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00721e0e: je 0x722018 */ if (fZ) goto L_00722018;
L_00721e14:; BB(0x00721e14);
    /* 00721e14: fild dword ptr [edi + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_edi+0xa8u)));
    /* 00721e1a: fld dword ptr [0x970650] */ FPUSH(R_F32((u32)(0x970650u)));
    /* 00721e20: fdiv dword ptr [esi + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x38u));
    /* 00721e23: mov ebp, dword ptr [esi + 0x38] */ r_ebp = R32((u32)(r_esi+0x38u));
    /* 00721e26: fld dword ptr [0x970648] */ FPUSH(R_F32((u32)(0x970648u)));
    /* 00721e2c: fld dword ptr [0x970644] */ FPUSH(R_F32((u32)(0x970644u)));
    /* 00721e32: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00721e34: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00721e36: fmul dword ptr [0x97063c] */ ST(0) = ST(0) * R_F32((u32)(0x97063cu));
    /* 00721e3c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00721e3e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00721e42: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00721e44: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00721e46: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00721e4a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00721e4c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00721e4e: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00721e56: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00721e58: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00721e5c: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00721e60: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00721e64: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00721e68: mov dword ptr [esp + 0x20], 0x44200000 */ W32((u32)(r_esp+0x20u), 0x44200000u);
    /* 00721e70: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00721e74: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00721e76: mov dword ptr [esp + 0x28], 0x44200000 */ W32((u32)(r_esp+0x28u), 0x44200000u);
    /* 00721e7e: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 00721e82: mov eax, 0xff000000 */ r_eax = 0xff000000u;
    /* 00721e87: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00721e8b: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00721e93: mov edx, 4 */ r_edx = 0x4u;
    /* 00721e98: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00721e9c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00721ea0: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00721ea4: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00721ea8: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00721eac: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00721eb0: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00721eb4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00721eb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00721eb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00721eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00721eb9: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x721ebeu); f_0082b5d8();
    /* 00721ebe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721ec1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00721ec6: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x721ecbu); f_0082bb30();
    /* 00721ecb: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00721ed1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x721ed6u); f_00829cc8();
    /* 00721ed6: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00721edb: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00721ee0: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x721ee5u); f_0082bb60();
    /* 00721ee5: fild dword ptr [edi + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_edi+0xa8u)));
    /* 00721eeb: fmul dword ptr [0x97063c] */ ST(0) = ST(0) * R_F32((u32)(0x97063cu));
    /* 00721ef1: fadd dword ptr [0x970638] */ ST(0) = ST(0) + R_F32((u32)(0x970638u));
    /* 00721ef7: fcom dword ptr [0x970648] */ fx_compare(ST(0), R_F32((u32)(0x970648u))); 
    /* 00721efd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00721eff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00721f00: jae 0x722022 */ if (!fC) goto L_00722022;
L_00721f06:; BB(0x00721f06);
    /* 00721f06: fld dword ptr [0x9706a4] */ FPUSH(R_F32((u32)(0x9706a4u)));
    /* 00721f0c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00721f0e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00721f11:; BB(0x00721f11);
    /* 00721f11: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00721f14: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 00721f18: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00721f1a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00721f1e: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00721f26: mov dword ptr [esp + 0x50], 0x44200000 */ W32((u32)(r_esp+0x50u), 0x44200000u);
    /* 00721f2e: mov dword ptr [esp + 0x58], 0x3d980000 */ W32((u32)(r_esp+0x58u), 0x3d980000u);
    /* 00721f36: mov dword ptr [esp + 0x5c], 0x3f6f0000 */ W32((u32)(r_esp+0x5cu), 0x3f6f0000u);
    /* 00721f3e: mov dword ptr [esp + 0x60], 0x3e0c0000 */ W32((u32)(r_esp+0x60u), 0x3e0c0000u);
    /* 00721f46: mov dword ptr [esp + 0x64], 0x3f7f0000 */ W32((u32)(r_esp+0x64u), 0x3f7f0000u);
    /* 00721f4e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00721f4f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00721f53: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00721f56: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 00721f5a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x721f5fu); f_0082b440();
    /* 00721f5f: fld dword ptr [0x9706a4] */ FPUSH(R_F32((u32)(0x9706a4u)));
    /* 00721f65: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00721f68: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00721f6a: fcom dword ptr [0x970648] */ fx_compare(ST(0), R_F32((u32)(0x970648u))); 
    /* 00721f70: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00721f72: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00721f75: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00721f76: jb 0x721f11 */ if (fC) goto L_00721f11;
L_00721f78:; BB(0x00721f78);
    /* 00721f78: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00721f7a:; BB(0x00721f7a);
    /* 00721f7a: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x721f7fu); f_004ac444();
    /* 00721f7f: fild dword ptr [edi + 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_edi+0xa8u)));
    /* 00721f85: fmul dword ptr [0x97063c] */ ST(0) = ST(0) * R_F32((u32)(0x97063cu));
    /* 00721f8b: fadd dword ptr [0x970638] */ ST(0) = ST(0) + R_F32((u32)(0x970638u));
    /* 00721f91: fst dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0));
    /* 00721f95: lea edx, [esp + 0x78] */ r_edx = (u32)(r_esp+0x78u);
    /* 00721f99: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 00721fa1: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00721fa5: mov eax, 2 */ r_eax = 0x2u;
    /* 00721faa: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 00721fb2: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00721fb9: mov dword ptr [esp + 0x80], 0x44200000 */ W32((u32)(r_esp+0x80u), 0x44200000u);
    /* 00721fc4: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 00721fcb: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00721fcf: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00721fd3: mov edx, 0xff00edff */ r_edx = 0xff00edffu;
    /* 00721fd8: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 00721fdf: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 00721fe6: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 00721fea: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00721fec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00721fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00721fee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00721fef: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x721ff4u); f_0082b558();
    /* 00721ff4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00721ff7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00721ff8: mov ecx, edi */ r_ecx = r_edi;
    /* 00721ffa: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x721fffu); f_00710f80();
    /* 00721fff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00722000: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00722003: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722004: mov ecx, edi */ r_ecx = r_edi;
    /* 00722006: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x72200bu); f_0072a648();
    /* 0072200b: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 0072200e: lea edx, [edi + 0x70] */ r_edx = (u32)(r_edi+0x70u);
    /* 00722011: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00722012: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00722013: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x722018u); f_0073f694();
L_00722018:; BB(0x00722018);
    /* 00722018: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072201e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072201f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00722020: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00722021: ret  */ FN_RET(0x00721dd0); r_esp += 4; return;
L_00722022:; BB(0x00722022);
    /* 00722022: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00722024: jmp 0x721f7a */ goto L_00721f7a;
}

