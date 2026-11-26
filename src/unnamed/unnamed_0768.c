#include "protos.h"

void f_00768098(void) /* sub_768098 */
{
    FN_ENTER(0x00768098);
    /* 00768098: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768099: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076809c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076809e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007680a2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007680a5: je 0x76815b */ if (fZ) goto L_0076815b;
L_007680ab:; BB(0x007680ab);
    /* 007680ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007680ad: jne 0x76815b */ if (!fZ) goto L_0076815b;
L_007680b3:; BB(0x007680b3);
    /* 007680b3: mov dword ptr [esp], 0xc2480000 */ W32((u32)(r_esp), 0xc2480000u);
    /* 007680ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007680bc: mov dword ptr [esp + 8], 0x41c00000 */ W32((u32)(r_esp+0x8u), 0x41c00000u);
    /* 007680c4: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 007680c9: call 0x521160 */ r_esp -= 4; W32(r_esp, 0x7680ceu); f_00521160();
    /* 007680ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007680cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007680d1: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x7680d6u); f_00520fcc();
    /* 007680d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007680d8: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x7680ddu); f_005213d8();
    /* 007680dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007680df: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x7680e4u); f_00521410();
    /* 007680e4: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 007680ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007680ec: je 0x76815b */ if (fZ) goto L_0076815b;
L_007680ee:; BB(0x007680ee);
    /* 007680ee: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007680f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007680f2:; BB(0x007680f2);
    /* 007680f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007680f3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7680f8u); f_0068d5a8();
    /* 007680f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007680f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007680fb: je 0x768151 */ if (fZ) goto L_00768151;
L_007680fd:; BB(0x007680fd);
    /* 007680fd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00768100: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00768105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768107: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x76810cu); f_007a9180();
    /* 0076810c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076810f: fcomp dword ptr [0x9768a0] */ fx_compare(ST(0), R_F32((u32)(0x9768a0u))); FPOP();
    /* 00768115: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00768117: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00768118: jae 0x768151 */ if (!fC) goto L_00768151;
L_0076811a:; BB(0x0076811a);
    /* 0076811a: mov byte ptr [esp + 0xc], 0xdc */ W8((u32)(r_esp+0xcu), 0xdcu);
    /* 0076811f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00768124: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00768126: mov byte ptr [esp + 0xd], 2 */ W8((u32)(r_esp+0xdu), 0x2u);
    /* 0076812b: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00768130: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 00768135: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 0076813a: mov word ptr [esp + 0x12], cx */ W16((u32)(r_esp+0x12u), (u16)r_ecx);
    /* 0076813f: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x768144u); f_0052cf54();
    /* 00768144: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768146: je 0x768151 */ if (fZ) goto L_00768151;
L_00768148:; BB(0x00768148);
    /* 00768148: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0076814c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x768151u); f_008003e0();
L_00768151:; BB(0x00768151);
    /* 00768151: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00768154: mov eax, ebx */ r_eax = r_ebx;
    /* 00768156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768159: jl 0x7680f2 */ if ((fS!=fO)) goto L_007680f2;
L_0076815b:; BB(0x0076815b);
    /* 0076815b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076815e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076815f: ret 4 */ FN_RET(0x00768098); r_esp += 8; return;
}

void f_00768164(void)
{
    FN_ENTER(0x00768164);
    /* 00768164: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00768168: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076816b: jne 0x768172 */ if (!fZ) goto L_00768172;
L_0076816d:; BB(0x0076816d);
    /* 0076816d: call 0x76bbc8 */ r_esp -= 4; W32(r_esp, 0x768172u); f_0076bbc8();
L_00768172:; BB(0x00768172);
    /* 00768172: ret 4 */ FN_RET(0x00768164); r_esp += 8; return;
}

void f_00768178(void)
{
    FN_ENTER(0x00768178);
    /* 00768178: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076817c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076817f: je 0x76819a */ if (fZ) goto L_0076819a;
L_00768181:; BB(0x00768181);
    /* 00768181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768183: jne 0x76818d */ if (!fZ) goto L_0076818d;
L_00768185:; BB(0x00768185);
    /* 00768185: call 0x7681a4 */ r_esp -= 4; W32(r_esp, 0x76818au); f_007681a4();
    /* 0076818a: ret 4 */ FN_RET(0x00768178); r_esp += 8; return;
L_0076818d:; BB(0x0076818d);
    /* 0076818d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00768190: jne 0x76819f */ if (!fZ) goto L_0076819f;
L_00768192:; BB(0x00768192);
    /* 00768192: call 0x76bb3c */ r_esp -= 4; W32(r_esp, 0x768197u); f_0076bb3c();
    /* 00768197: ret 4 */ FN_RET(0x00768178); r_esp += 8; return;
L_0076819a:; BB(0x0076819a);
    /* 0076819a: call 0x76bb70 */ r_esp -= 4; W32(r_esp, 0x76819fu); f_0076bb70();
L_0076819f:; BB(0x0076819f);
    /* 0076819f: ret 4 */ FN_RET(0x00768178); r_esp += 8; return;
}

void f_007681a4(void) /* sub_7681A4 */
{
    FN_ENTER(0x007681a4);
    /* 007681a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007681a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007681a6: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007681a9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007681ab: mov edx, dword ptr [ebp + 0xf74] */ r_edx = R32((u32)(r_ebp+0xf74u));
    /* 007681b1: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007681b7: je 0x7681c0 */ if (fZ) goto L_007681c0;
L_007681b9:; BB(0x007681b9);
    /* 007681b9: mov eax, 1 */ r_eax = 0x1u;
    /* 007681be: jmp 0x7681c2 */ goto L_007681c2;
L_007681c0:; BB(0x007681c0);
    /* 007681c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007681c2:; BB(0x007681c2);
    /* 007681c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007681c4: je 0x76822e */ if (fZ) goto L_0076822e;
L_007681c6:; BB(0x007681c6);
    /* 007681c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007681c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007681ca: call 0x76bf88 */ r_esp -= 4; W32(r_esp, 0x7681cfu); f_0076bf88();
    /* 007681cf: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 007681d6: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007681d9: je 0x768228 */ if (fZ) goto L_00768228;
L_007681db:; BB(0x007681db);
    /* 007681db: mov eax, dword ptr [ebp + 0xf74] */ r_eax = R32((u32)(r_ebp+0xf74u));
    /* 007681e1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007681e3: je 0x7681ec */ if (fZ) goto L_007681ec;
L_007681e5:; BB(0x007681e5);
    /* 007681e5: mov eax, 1 */ r_eax = 0x1u;
    /* 007681ea: jmp 0x7681ee */ goto L_007681ee;
L_007681ec:; BB(0x007681ec);
    /* 007681ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007681ee:; BB(0x007681ee);
    /* 007681ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007681f0: jne 0x768228 */ if (!fZ) goto L_00768228;
L_007681f2:; BB(0x007681f2);
    /* 007681f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007681f4: call 0x76af64 */ r_esp -= 4; W32(r_esp, 0x7681f9u); f_0076af64();
    /* 007681f9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007681fb: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007681fe: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00768205: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00768207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768208: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76820eu); call_ind(t); }
    /* 0076820e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00768210: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00768213: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 00768218: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0076821f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00768221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768222: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x768228u); call_ind(t); }
L_00768228:; BB(0x00768228);
    /* 00768228: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076822b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076822c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076822d: ret  */ FN_RET(0x007681a4); r_esp += 4; return;
L_0076822e:; BB(0x0076822e);
    /* 0076822e: mov edi, dword ptr [0xa9b070] */ r_edi = R32((u32)(0xa9b070u));
    /* 00768234: test edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076823a: je 0x768243 */ if (fZ) goto L_00768243;
L_0076823c:; BB(0x0076823c);
    /* 0076823c: mov eax, 1 */ r_eax = 0x1u;
    /* 00768241: jmp 0x768245 */ goto L_00768245;
L_00768243:; BB(0x00768243);
    /* 00768243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00768245:; BB(0x00768245);
    /* 00768245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768247: je 0x768317 */ if (fZ) goto L_00768317;
L_0076824d:; BB(0x0076824d);
    /* 0076824d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00768250: je 0x768259 */ if (fZ) goto L_00768259;
L_00768252:; BB(0x00768252);
    /* 00768252: mov eax, 1 */ r_eax = 0x1u;
    /* 00768257: jmp 0x76825b */ goto L_0076825b;
L_00768259:; BB(0x00768259);
    /* 00768259: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076825b:; BB(0x0076825b);
    /* 0076825b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076825d: jne 0x76830e */ if (!fZ) goto L_0076830e;
L_00768263:; BB(0x00768263);
    /* 00768263: mov ecx, dword ptr [0xa9b06c] */ r_ecx = R32((u32)(0xa9b06cu));
    /* 00768269: mov edi, dword ptr [ebp + 0xd8] */ r_edi = R32((u32)(r_ebp+0xd8u));
    /* 0076826f: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768272: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x768277u); f_005b8638();
    /* 00768277: mov dword ptr [ebp + 0xf4c], 0 */ W32((u32)(r_ebp+0xf4cu), 0x0u);
    /* 00768281: mov dword ptr [ebp + 0xf44], eax */ W32((u32)(r_ebp+0xf44u), r_eax);
    /* 00768287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768289: mov dword ptr [ebp + 0xf50], 0 */ W32((u32)(r_ebp+0xf50u), 0x0u);
    /* 00768293: mov dword ptr [ebp + 0xf54], 0 */ W32((u32)(r_ebp+0xf54u), 0x0u);
    /* 0076829d: je 0x7682bd */ if (fZ) goto L_007682bd;
L_0076829f:; BB(0x0076829f);
    /* 0076829f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007682a1: mov dword ptr [ebp + 0xf48], edx */ W32((u32)(r_ebp+0xf48u), r_edx);
    /* 007682a7: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 007682aa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007682ad: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007682b0: fadd dword ptr [edx*4 + 0x977060] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x977060u));
    /* 007682b7: fstp dword ptr [ebp + 0xf4c] */ W_F32((u32)(r_ebp+0xf4cu), ST(0)); FPOP();
L_007682bd:; BB(0x007682bd);
    /* 007682bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007682bf: mov dword ptr [ebp + 0xf48], eax */ W32((u32)(r_ebp+0xf48u), r_eax);
    /* 007682c5: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007682c8: mov dword ptr [ebp + 0xf50], edx */ W32((u32)(r_ebp+0xf50u), r_edx);
    /* 007682ce: movsx edi, word ptr [edi + 0x20] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 007682d2: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007682d5: jne 0x7682e3 */ if (!fZ) goto L_007682e3;
L_007682d7:; BB(0x007682d7);
    /* 007682d7: mov dword ptr [ebp + 0xf54], 0 */ W32((u32)(r_ebp+0xf54u), 0x0u);
    /* 007682e1: jmp 0x7682ed */ goto L_007682ed;
L_007682e3:; BB(0x007682e3);
    /* 007682e3: mov dword ptr [ebp + 0xf54], 2 */ W32((u32)(r_ebp+0xf54u), 0x2u);
L_007682ed:; BB(0x007682ed);
    /* 007682ed: mov edi, dword ptr [0xa9b070] */ r_edi = R32((u32)(0xa9b070u));
    /* 007682f3: mov edx, dword ptr [ebp + 0xf74] */ r_edx = R32((u32)(r_ebp+0xf74u));
    /* 007682f9: mov eax, 2 */ r_eax = 0x2u;
    /* 007682fe: mov word ptr [ebp + 0xfa4], ax */ W16((u32)(r_ebp+0xfa4u), (u16)r_eax);
    /* 00768305: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00768308: mov dword ptr [ebp + 0xf74], edx */ W32((u32)(r_ebp+0xf74u), r_edx);
L_0076830e:; BB(0x0076830e);
    /* 0076830e: and edi, 0xffffffbf */ {  u32 a = r_edi; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00768311: mov dword ptr [0xa9b070], edi */ W32((u32)(0xa9b070u), r_edi);
L_00768317:; BB(0x00768317);
    /* 00768317: test edi, 0x380 */ {  u32 a = r_edi; u32 b = 0x380u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076831d: je 0x768326 */ if (fZ) goto L_00768326;
L_0076831f:; BB(0x0076831f);
    /* 0076831f: mov eax, 1 */ r_eax = 0x1u;
    /* 00768324: jmp 0x768328 */ goto L_00768328;
L_00768326:; BB(0x00768326);
    /* 00768326: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00768328:; BB(0x00768328);
    /* 00768328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076832a: je 0x768365 */ if (fZ) goto L_00768365;
L_0076832c:; BB(0x0076832c);
    /* 0076832c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076832e: call 0x7685d0 */ r_esp -= 4; W32(r_esp, 0x768333u); f_007685d0();
    /* 00768333: mov byte ptr [esp], 0xdc */ W8((u32)(r_esp), 0xdcu);
    /* 00768337: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0076833c: mov edx, 2 */ r_edx = 0x2u;
    /* 00768341: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 00768346: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0076834a: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0076834f: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00768354: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x768359u); f_0052cf54();
    /* 00768359: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076835b: je 0x768365 */ if (fZ) goto L_00768365;
L_0076835d:; BB(0x0076835d);
    /* 0076835d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00768360: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x768365u); f_008003e0();
L_00768365:; BB(0x00768365);
    /* 00768365: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00768367: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00768369: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76836eu); f_00768964();
    /* 0076836e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768370: je 0x768390 */ if (fZ) goto L_00768390;
L_00768372:; BB(0x00768372);
    /* 00768372: mov eax, dword ptr [ebp + 0x804] */ r_eax = R32((u32)(r_ebp+0x804u));
    /* 00768378: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0076837c: mov edx, dword ptr [ebp + 0x808] */ r_edx = R32((u32)(r_ebp+0x808u));
    /* 00768382: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00768386: mov edi, dword ptr [ebp + 0x80c] */ r_edi = R32((u32)(r_ebp+0x80cu));
    /* 0076838c: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_00768390:; BB(0x00768390);
    /* 00768390: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00768394: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00768396: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768399: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076839a: push 0x6e9 */ { u32 v = 0x6e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0076839f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x7683a4u); f_008144b0();
    /* 007683a4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007683a7: mov edi, dword ptr [ebp + 0xf9c] */ r_edi = R32((u32)(r_ebp+0xf9cu));
    /* 007683ad: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 007683b2: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007683b4: mov eax, edi */ r_eax = r_edi;
    /* 007683b6: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007683b9: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007683bb: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007683be: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007683c0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007683c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007683c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007683c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007683c9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007683cb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007683cd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007683cf: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007683d1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007683d3: jne 0x768470 */ if (!fZ) goto L_00768470;
L_007683d9:; BB(0x007683d9);
    /* 007683d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007683db: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007683df: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007683e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007683e5: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007683e9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007683ed: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007683f1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007683f5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007683f9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007683fd: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00768404: jle 0x768431 */ if ((fZ||fS!=fO)) goto L_00768431;
L_00768406:; BB(0x00768406);
    /* 00768406: mov edi, dword ptr [edx*4 + 0xaad720] */ r_edi = R32((u32)(r_edx*4+0xaad720u));
    /* 0076840d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00768410: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768412: je 0x76842d */ if (fZ) goto L_0076842d;
L_00768414:; BB(0x00768414);
    /* 00768414: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00768417: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076841d: jne 0x76842d */ if (!fZ) goto L_0076842d;
L_0076841f:; BB(0x0076841f);
    /* 0076841f: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00768422: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 00768425: mov dword ptr [esp + edx*4 + 0x10], ecx */ W32((u32)(r_esp+r_edx*4+0x10u), r_ecx);
    /* 00768429: mov dword ptr [esp + edx*4 + 0x20], edi */ W32((u32)(r_esp+r_edx*4+0x20u), r_edi);
L_0076842d:; BB(0x0076842d);
    /* 0076842d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076842f: jl 0x768406 */ if ((fS!=fO)) goto L_00768406;
L_00768431:; BB(0x00768431);
    /* 00768431: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 00768435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768436: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00768438: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076843b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076843d: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x768443u); call_ind(t); }
    /* 00768443: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 00768447: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076844b: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076844f: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768453: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768457: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076845b: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076845f: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00768463: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768467: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768468: call 0x76f420 */ r_esp -= 4; W32(r_esp, 0x76846du); f_0076f420();
    /* 0076846d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00768470:; BB(0x00768470);
    /* 00768470: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00768474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768475: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00768477: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076847a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076847c: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x768482u); call_ind(t); }
    /* 00768482: fld dword ptr [0x9774c0] */ FPUSH(R_F32((u32)(0x9774c0u)));
    /* 00768488: fcomp dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); FPOP();
    /* 0076848c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076848e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076848f: jae 0x768542 */ if (!fC) goto L_00768542;
L_00768495:; BB(0x00768495);
    /* 00768495: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00768499: fcomp dword ptr [0x9774bc] */ fx_compare(ST(0), R_F32((u32)(0x9774bcu))); FPOP();
    /* 0076849f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007684a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007684a2: jae 0x768542 */ if (!fC) goto L_00768542;
L_007684a8:; BB(0x007684a8);
    /* 007684a8: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 007684ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007684ad: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 007684af: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007684b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007684b4: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x7684bau); call_ind(t); }
    /* 007684ba: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007684be: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007684c2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007684c6: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007684ca: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 007684ce: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007684d2: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 007684d6: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 007684da: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7684dfu); f_0082f9c4();
    /* 007684df: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007684e3: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 007684e7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007684e9: fmul qword ptr [0x977070] */ ST(0) = ST(0) * R_F64((u32)(0x977070u));
    /* 007684ef: fdiv qword ptr [0x977068] */ ST(0) = ST(0) / R_F64((u32)(0x977068u));
    /* 007684f5: fnstcw word ptr [esp + 0x58] */ W16((u32)(r_esp+0x58u), fcw);
    /* 007684f9: movzx eax, word ptr [esp + 0x58] */ r_eax = (u32)R16((u32)(r_esp+0x58u));
    /* 007684fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768503: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00768507: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 0076850b: fistp dword ptr [esp + 0x68] */ W32((u32)(r_esp+0x68u), (u32)fx_int32(ST(0))); FPOP();
    /* 0076850f: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 00768513: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 00768517: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00768519: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 00768521: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00768525: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768527: call 0x768548 */ r_esp -= 4; W32(r_esp, 0x76852cu); f_00768548();
    /* 0076852c: add edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00768532: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00768536: movzx edi, di */ r_edi = (u32)(u16)r_edi;
    /* 00768539: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076853b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076853c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076853d: call 0x768548 */ r_esp -= 4; W32(r_esp, 0x768542u); f_00768548();
L_00768542:; BB(0x00768542);
    /* 00768542: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768545: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768546: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768547: ret  */ FN_RET(0x007681a4); r_esp += 4; return;
}

void f_00768548(void) /* sub_768548 */
{
    FN_ENTER(0x00768548);
    /* 00768548: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768549: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076854c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00768550: mov eax, dword ptr [0x9768bc] */ r_eax = R32((u32)(0x9768bcu));
    /* 00768555: mov edx, dword ptr [0x9768c0] */ r_edx = R32((u32)(0x9768c0u));
    /* 0076855b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0076855f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00768563: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00768566: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00768568: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076856c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x768571u); f_0050b510();
    /* 00768571: mov esi, eax */ r_esi = r_eax;
    /* 00768573: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768576: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768578: je 0x7685c6 */ if (fZ) goto L_007685c6;
L_0076857a:; BB(0x0076857a);
    /* 0076857a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0076857c: mov ecx, esi */ r_ecx = r_esi;
    /* 0076857e: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x768583u); f_00508efc();
    /* 00768583: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00768585: mov ecx, esi */ r_ecx = r_esi;
    /* 00768587: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x76858cu); f_00508f08();
    /* 0076858c: push 0x60ffffff */ { u32 v = 0x60ffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768591: mov ecx, esi */ r_ecx = r_esi;
    /* 00768593: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x768598u); f_00508ee4();
    /* 00768598: movzx edx, word ptr [esi + 0x2e] */ r_edx = (u32)R16((u32)(r_esi+0x2eu));
    /* 0076859c: mov dword ptr [esi + 0x44], 0x40a00000 */ W32((u32)(r_esi+0x44u), 0x40a00000u);
    /* 007685a3: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007685a9: mov word ptr [esi + 0x2e], dx */ W16((u32)(r_esi+0x2eu), (u16)r_edx);
    /* 007685ad: mov dword ptr [esi + 0x48], 0x40a00000 */ W32((u32)(r_esi+0x48u), 0x40a00000u);
    /* 007685b4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007685b7: mov ecx, esi */ r_ecx = r_esi;
    /* 007685b9: mov dword ptr [esi + 0x64], 0x40a00000 */ W32((u32)(r_esi+0x64u), 0x40a00000u);
    /* 007685c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007685c1: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x7685c6u); f_00508dd0();
L_007685c6:; BB(0x007685c6);
    /* 007685c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007685c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007685ca: ret 8 */ FN_RET(0x00768548); r_esp += 12; return;
}

void f_007685d0(void) /* sub_7685D0 */
{
    FN_ENTER(0x007685d0);
    /* 007685d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007685d3: mov edx, dword ptr [0xa9b070] */ r_edx = R32((u32)(0xa9b070u));
    /* 007685d9: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 007685df: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007685e2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007685e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007685eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007685ef: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007685f3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007685f7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007685fa: and edx, 0x380 */ {  u32 a = r_edx; u32 b = 0x380u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00768600: sar edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00768603: shl edx, 0xd */ { u32 c = (13u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00768606: or edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0076860a: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0076860d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768610: ret  */ FN_RET(0x007685d0); r_esp += 4; return;
}

void f_00768614(void)
{
    FN_ENTER(0x00768614);
    /* 00768614: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00768618: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076861b: jne 0x768622 */ if (!fZ) goto L_00768622;
L_0076861d:; BB(0x0076861d);
    /* 0076861d: call 0x76badc */ r_esp -= 4; W32(r_esp, 0x768622u); f_0076badc();
L_00768622:; BB(0x00768622);
    /* 00768622: ret 4 */ FN_RET(0x00768614); r_esp += 8; return;
}

void f_00768628(void)
{
    FN_ENTER(0x00768628);
    /* 00768628: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076862c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076862f: je 0x76864f */ if (fZ) goto L_0076864f;
L_00768631:; BB(0x00768631);
    /* 00768631: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768633: jne 0x76863d */ if (!fZ) goto L_0076863d;
L_00768635:; BB(0x00768635);
    /* 00768635: call 0x76865c */ r_esp -= 4; W32(r_esp, 0x76863au); f_0076865c();
    /* 0076863a: ret 4 */ FN_RET(0x00768628); r_esp += 8; return;
L_0076863d:; BB(0x0076863d);
    /* 0076863d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00768640: jne 0x768659 */ if (!fZ) goto L_00768659;
L_00768642:; BB(0x00768642);
    /* 00768642: mov dword ptr [ecx + 0xf8c], 0x42c80000 */ W32((u32)(r_ecx+0xf8cu), 0x42c80000u);
    /* 0076864c: ret 4 */ FN_RET(0x00768628); r_esp += 8; return;
L_0076864f:; BB(0x0076864f);
    /* 0076864f: mov dword ptr [ecx + 0xf90], 0 */ W32((u32)(r_ecx+0xf90u), 0x0u);
L_00768659:; BB(0x00768659);
    /* 00768659: ret 4 */ FN_RET(0x00768628); r_esp += 8; return;
}

void f_0076865c(void) /* sub_76865C */
{
    FN_ENTER(0x0076865c);
    /* 0076865c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076865d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076865f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768661: push 0x8f3ad6 */ { u32 v = 0x8f3ad6u; r_esp -= 4; W32(r_esp, v); }
    /* 00768666: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076866c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076866d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00768674: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076867a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076867d: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00768680: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00768683: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00768686: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00768689: push 0x42340000 */ { u32 v = 0x42340000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076868e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x768693u); f_007aaa30();
    /* 00768693: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768695: je 0x768728 */ if (fZ) goto L_00768728;
L_0076869b:; BB(0x0076869b);
    /* 0076869b: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 007686a5: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 007686aa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7686afu); f_005caba4();
    /* 007686af: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007686b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007686b5: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 007686bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007686bd: je 0x768865 */ if (fZ) goto L_00768865;
L_007686c3:; BB(0x007686c3);
    /* 007686c3: mov dword ptr [ebp - 0x94], 1 */ W32((u32)(r_ebp+0xffffff6cu), 0x1u);
    /* 007686cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007686d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007686d7: push dword ptr [eax + 0x3cc] */ { u32 v = R32((u32)(r_eax+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 007686dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007686e0: call 0x76c644 */ r_esp -= 4; W32(r_esp, 0x7686e5u); f_0076c644();
    /* 007686e5: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_007686ef:; BB(0x007686ef);
    /* 007686ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007686f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007686f9: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x7686feu); f_007751b0();
    /* 007686fe: fmul dword ptr [0x9774ac] */ ST(0) = ST(0) * R_F32((u32)(0x9774acu));
    /* 00768704: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00768707: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0076870a: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0076870e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768713: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00768716: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00768719: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0076871c: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0076871f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00768722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768723: call 0x76c790 */ r_esp -= 4; W32(r_esp, 0x768728u); f_0076c790();
L_00768728:; BB(0x00768728);
    /* 00768728: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076872d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00768730: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x768735u); f_007aaa30();
    /* 00768735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768737: jne 0x7688fa */ if (!fZ) goto L_007688fa;
L_0076873d:; BB(0x0076873d);
    /* 0076873d: push 0x42380000 */ { u32 v = 0x42380000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768742: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00768745: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x76874au); f_007aaa30();
    /* 0076874a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076874c: jne 0x7688b4 */ if (!fZ) goto L_007688b4;
L_00768752:; BB(0x00768752);
    /* 00768752: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00768755: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0076875b: fcom dword ptr [0x97749c] */ fx_compare(ST(0), R_F32((u32)(0x97749cu))); 
    /* 00768761: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00768763: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00768765: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00768766: jb 0x768778 */ if (fC) goto L_00768778;
L_00768768:; BB(0x00768768);
    /* 00768768: fcom dword ptr [0x977498] */ fx_compare(ST(0), R_F32((u32)(0x977498u))); 
    /* 0076876e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00768770: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00768771: ja 0x768778 */ if ((!fC&&!fZ)) goto L_00768778;
L_00768773:; BB(0x00768773);
    /* 00768773: mov esi, 1 */ r_esi = 0x1u;
L_00768778:; BB(0x00768778);
    /* 00768778: fcom dword ptr [0x977494] */ fx_compare(ST(0), R_F32((u32)(0x977494u))); 
    /* 0076877e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00768780: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00768781: jb 0x7687ad */ if (fC) goto L_007687ad;
L_00768783:; BB(0x00768783);
    /* 00768783: fcomp dword ptr [0x977490] */ fx_compare(ST(0), R_F32((u32)(0x977490u))); FPOP();
    /* 00768789: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076878b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076878c: ja 0x7687af */ if ((!fC&&!fZ)) goto L_007687af;
L_0076878e:; BB(0x0076878e);
    /* 0076878e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00768795: mov byte ptr [0x9ba3fc], 0x8f */ W8((u32)(0x9ba3fcu), 0x8fu);
    /* 0076879c: mov esi, 1 */ r_esi = 0x1u;
    /* 007687a1: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007687a6: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 007687ab: jmp 0x7687af */ goto L_007687af;
L_007687ad:; BB(0x007687ad);
    /* 007687ad: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007687af:; BB(0x007687af);
    /* 007687af: mov ecx, edx */ r_ecx = r_edx;
    /* 007687b1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007687b3: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x7687b8u); f_00768964();
    /* 007687b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007687ba: je 0x7687da */ if (fZ) goto L_007687da;
L_007687bc:; BB(0x007687bc);
    /* 007687bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007687bf: mov eax, dword ptr [ecx + 0x544] */ r_eax = R32((u32)(r_ecx+0x544u));
    /* 007687c5: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 007687c8: mov edx, dword ptr [ecx + 0x548] */ r_edx = R32((u32)(r_ecx+0x548u));
    /* 007687ce: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 007687d1: mov ebx, dword ptr [ecx + 0x54c] */ r_ebx = R32((u32)(r_ecx+0x54cu));
    /* 007687d7: mov dword ptr [ebp - 0x58], ebx */ W32((u32)(r_ebp+0xffffffa8u), r_ebx);
L_007687da:; BB(0x007687da);
    /* 007687da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007687dd: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 007687df: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x7687e4u); f_00768964();
    /* 007687e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007687e6: je 0x768806 */ if (fZ) goto L_00768806;
L_007687e8:; BB(0x007687e8);
    /* 007687e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007687eb: mov eax, dword ptr [ecx + 0xa04] */ r_eax = R32((u32)(r_ecx+0xa04u));
    /* 007687f1: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 007687f4: mov edx, dword ptr [ecx + 0xa08] */ r_edx = R32((u32)(r_ecx+0xa08u));
    /* 007687fa: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 007687fd: mov ebx, dword ptr [ecx + 0xa0c] */ r_ebx = R32((u32)(r_ecx+0xa0cu));
    /* 00768803: mov dword ptr [ebp - 0x4c], ebx */ W32((u32)(r_ebp+0xffffffb4u), r_ebx);
L_00768806:; BB(0x00768806);
    /* 00768806: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 00768809: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 0076880c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768811u); f_0082f9c4();
    /* 00768811: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00768814: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00768817: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00768819: fmul qword ptr [0x977058] */ ST(0) = ST(0) * R_F64((u32)(0x977058u));
    /* 0076881f: fdiv qword ptr [0x977050] */ ST(0) = ST(0) / R_F64((u32)(0x977050u));
    /* 00768825: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 00768828: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0076882c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768831: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00768834: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00768837: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0076883a: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0076883d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076883f: movzx ebx, word ptr [ebp - 0x2c] */ r_ebx = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 00768843: jne 0x76886f */ if (!fZ) goto L_0076886f;
L_00768845:; BB(0x00768845);
    /* 00768845: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00768848: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076884b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076884e: mov dword ptr [eax + 0xf90], ebx */ W32((u32)(r_eax+0xf90u), r_ebx);
    /* 00768854: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00768857: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076885a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00768861: mov esp, ebp */ r_esp = r_ebp;
    /* 00768863: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768864: ret  */ FN_RET(0x0076865c); r_esp += 4; return;
L_00768865:; BB(0x00768865);
    /* 00768865: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00768867: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076886a: jmp 0x7686ef */ goto L_007686ef;
L_0076886f:; BB(0x0076886f);
    /* 0076886f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00768872: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00768874: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x768879u); f_00768964();
    /* 00768879: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076887b: je 0x76889b */ if (fZ) goto L_0076889b;
L_0076887d:; BB(0x0076887d);
    /* 0076887d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00768880: mov eax, dword ptr [ecx + 0xb44] */ r_eax = R32((u32)(r_ecx+0xb44u));
    /* 00768886: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00768889: mov edx, dword ptr [ecx + 0xb48] */ r_edx = R32((u32)(r_ecx+0xb48u));
    /* 0076888f: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00768892: mov esi, dword ptr [ecx + 0xb4c] */ r_esi = R32((u32)(r_ecx+0xb4cu));
    /* 00768898: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
L_0076889b:; BB(0x0076889b);
    /* 0076889b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076889e: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 007688a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007688a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007688a4: push dword ptr [ecx + 0xf90] */ { u32 v = R32((u32)(r_ecx+0xf90u)); r_esp -= 4; W32(r_esp, v); }
    /* 007688aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007688ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007688ad: call 0x768a84 */ r_esp -= 4; W32(r_esp, 0x7688b2u); f_00768a84();
    /* 007688b2: jmp 0x768845 */ goto L_00768845;
L_007688b4:; BB(0x007688b4);
    /* 007688b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007688b7: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 007688b9: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x7688beu); f_00768964();
    /* 007688be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007688c0: je 0x7688e0 */ if (fZ) goto L_007688e0;
L_007688c2:; BB(0x007688c2);
    /* 007688c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007688c5: mov eax, dword ptr [ecx + 0xa04] */ r_eax = R32((u32)(r_ecx+0xa04u));
    /* 007688cb: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 007688ce: mov edx, dword ptr [ecx + 0xa08] */ r_edx = R32((u32)(r_ecx+0xa08u));
    /* 007688d4: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 007688d7: mov ebx, dword ptr [ecx + 0xa0c] */ r_ebx = R32((u32)(r_ecx+0xa0cu));
    /* 007688dd: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
L_007688e0:; BB(0x007688e0);
    /* 007688e0: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 007688e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007688e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007688e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007688e8: push 0x6f0 */ { u32 v = 0x6f0u; r_esp -= 4; W32(r_esp, v); }
    /* 007688ed: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7688f2u); f_00814298();
    /* 007688f2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007688f5: jmp 0x768752 */ goto L_00768752;
L_007688fa:; BB(0x007688fa);
    /* 007688fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007688fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007688ff: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x768904u); f_00768964();
    /* 00768904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768906: je 0x76892f */ if (fZ) goto L_0076892f;
L_00768908:; BB(0x00768908);
    /* 00768908: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076890b: mov eax, dword ptr [ecx + 0x544] */ r_eax = R32((u32)(r_ecx+0x544u));
    /* 00768911: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00768917: mov edx, dword ptr [ecx + 0x548] */ r_edx = R32((u32)(r_ecx+0x548u));
    /* 0076891d: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00768923: mov ebx, dword ptr [ecx + 0x54c] */ r_ebx = R32((u32)(r_ecx+0x54cu));
    /* 00768929: mov dword ptr [ebp - 0x84], ebx */ W32((u32)(r_ebp+0xffffff7cu), r_ebx);
L_0076892f:; BB(0x0076892f);
    /* 0076892f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00768932: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 00768935: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 00768938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076893a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076893c: call 0x768990 */ r_esp -= 4; W32(r_esp, 0x768941u); f_00768990();
    /* 00768941: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00768944: mov dword ptr [ebp - 0x78], 0x43200000 */ W32((u32)(r_ebp+0xffffff88u), 0x43200000u);
    /* 0076894b: lea edx, [ebp - 0x8c] */ r_edx = (u32)(r_ebp+0xffffff74u);
    /* 00768951: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00768954: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768957: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768958: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x76895du); f_0051fc9c();
    /* 0076895d: jmp 0x76873d */ goto L_0076873d;
}

void f_00768964(void) /* sub_768964 */
{
    FN_ENTER(0x00768964);
    /* 00768964: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00768968: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076896a: jl 0x768979 */ if ((fS!=fO)) goto L_00768979;
L_0076896c:; BB(0x0076896c);
    /* 0076896c: cmp eax, 0x2a */ {  u32 a = r_eax; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076896f: jg 0x768979 */ if ((!fZ&&fS==fO)) goto L_00768979;
L_00768971:; BB(0x00768971);
    /* 00768971: mov eax, 1 */ r_eax = 0x1u;
    /* 00768976: ret 4 */ FN_RET(0x00768964); r_esp += 8; return;
L_00768979:; BB(0x00768979);
    /* 00768979: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076897c: push 0x977808 */ { u32 v = 0x977808u; r_esp -= 4; W32(r_esp, v); }
    /* 00768981: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x768986u); f_0061cdb0();
    /* 00768986: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00768988: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076898b: ret 4 */ FN_RET(0x00768964); r_esp += 8; return;
}

void f_00768990(void) /* sub_768990 */
{
    FN_ENTER(0x00768990);
    /* 00768990: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00768993: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00768997: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0076899b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0076899e: fld dword ptr [0x97748c] */ FPUSH(R_F32((u32)(0x97748cu)));
    /* 007689a4: ja 0x768a7a */ if ((!fC&&!fZ)) goto L_00768a7a;
L_007689aa:; BB(0x007689aa);
    /* 007689aa: mov eax, dword ptr [eax*4 + 0x9768c4] */ r_eax = R32((u32)(r_eax*4+0x9768c4u));
    /* 007689b1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00768a7a:; BB(0x00768a7a);
    /* 00768a7a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x00768990); r_esp += 16; return;
}

void f_007689b3(void)
{
    FN_ENTER(0x007689b3);
    /* 007689b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007689b5: fld dword ptr [0x977488] */ FPUSH(R_F32((u32)(0x977488u)));
    /* 007689bb: fld dword ptr [0x977484] */ FPUSH(R_F32((u32)(0x977484u)));
    /* 007689c1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007689c3: jmp 0x7689cb */ goto L_007689cb;
L_007689cb:; BB(0x007689cb);
    /* 007689cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007689cd: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 007689d3: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 007689d6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007689d8: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 007689dd: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x007689b3); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x007689b3); r_esp += 16; return;
}

void f_007689bb(void)
{
    FN_ENTER(0x007689bb);
    /* 007689bb: fld dword ptr [0x977484] */ FPUSH(R_F32((u32)(0x977484u)));
    /* 007689c1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007689c3: jmp 0x7689cb */ goto L_007689cb;
L_007689cb:; BB(0x007689cb);
    /* 007689cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007689cd: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 007689d3: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 007689d6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007689d8: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 007689dd: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x007689bb); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x007689bb); r_esp += 16; return;
}

void f_007689c5(void)
{
    FN_ENTER(0x007689c5);
    /* 007689c5: fld dword ptr [0x977484] */ FPUSH(R_F32((u32)(0x977484u)));
    /* 007689cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007689cd: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 007689d3: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 007689d6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007689d8: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 007689dd: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x007689c5); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x007689c5); r_esp += 16; return;
}

void f_007689cd(void)
{
    FN_ENTER(0x007689cd);
    /* 007689cd: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 007689d3: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 007689d6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007689d8: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 007689dd: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x007689cd); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x007689cd); r_esp += 16; return;
}

void f_007689df(void)
{
    FN_ENTER(0x007689df);
    /* 007689df: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007689e1: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 007689e7: fild dword ptr [eax + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x28u)));
    /* 007689ea: mov eax, 0x41200000 */ r_eax = 0x41200000u;
    /* 007689ef: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x007689df); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x007689df); r_esp += 16; return;
}

void f_007689f1(void)
{
    FN_ENTER(0x007689f1);
    /* 007689f1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007689f3: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 007689f9: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 007689fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007689fe: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x007689f1); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x007689f1); r_esp += 16; return;
}

void f_00768a00(void)
{
    FN_ENTER(0x00768a00);
    /* 00768a00: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a02: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 00768a08: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 00768a0b: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 00768a10: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x00768a00); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x00768a00); r_esp += 16; return;
}

void f_00768a12(void)
{
    FN_ENTER(0x00768a12);
    /* 00768a12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a14: movsx eax, word ptr [ecx + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c4u));
    /* 00768a1b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00768a1e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00768a21: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 00768a26: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x00768a12); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x00768a12); r_esp += 16; return;
}

void f_00768a28(void)
{
    FN_ENTER(0x00768a28);
    /* 00768a28: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a2a: movsx eax, word ptr [ecx + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c4u));
    /* 00768a31: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768a35: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00768a39: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 00768a3e: jmp 0x768a50 */ goto L_00768a50;
L_00768a50:; BB(0x00768a50);
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x00768a28); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x00768a28); r_esp += 16; return;
}

void f_00768a40(void)
{
    FN_ENTER(0x00768a40);
    /* 00768a40: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a42: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 00768a48: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 00768a4b: mov eax, 0x40400000 */ r_eax = 0x40400000u;
    /* 00768a50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a52: je 0x768a5d */ if (fZ) goto L_00768a5d;
L_00768a54:; BB(0x00768a54);
    /* 00768a54: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00768a57: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00768a5d:; BB(0x00768a5d);
    /* 00768a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768a5f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768a65: je 0x768a7c */ if (fZ) goto L_00768a7c;
L_00768a67:; BB(0x00768a67);
    /* 00768a67: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00768a6b: mov dword ptr [edx + 4], 1 */ W32((u32)(r_edx+0x4u), 0x1u);
    /* 00768a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00768a74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a77: ret 0xc */ FN_RET(0x00768a40); r_esp += 16; return;
L_00768a7c:; BB(0x00768a7c);
    /* 00768a7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768a7f: ret 0xc */ FN_RET(0x00768a40); r_esp += 16; return;
}

void f_00768a84(void) /* sub_768A84 */
{
    FN_ENTER(0x00768a84);
    /* 00768a84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768a85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768a86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768a87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768a88: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00768a8b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00768a8d: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768a93: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 00768a96: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 00768a9d: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 00768aa4: mov ebp, dword ptr [esp + 0x8c] */ r_ebp = R32((u32)(r_esp+0x8cu));
    /* 00768aab: mov ecx, dword ptr [esp + 0x90] */ r_ecx = R32((u32)(r_esp+0x90u));
    /* 00768ab2: fld dword ptr [0x977474] */ FPUSH(R_F32((u32)(0x977474u)));
    /* 00768ab8: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00768abc: movzx esi, word ptr [eax + 2] */ r_esi = (u32)R16((u32)(r_eax+0x2u));
    /* 00768ac0: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00768ac4: movzx esi, word ptr [eax + 4] */ r_esi = (u32)R16((u32)(r_eax+0x4u));
    /* 00768ac8: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00768acc: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 00768ad0: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00768ad4: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00768ad7: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00768adb: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00768ade: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00768ae2: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 00768ae5: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00768ae9: movzx esi, word ptr [eax + 0x14] */ r_esi = (u32)R16((u32)(r_eax+0x14u));
    /* 00768aed: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00768af1: movzx esi, word ptr [eax + 0x16] */ r_esi = (u32)R16((u32)(r_eax+0x16u));
    /* 00768af5: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00768af9: movzx esi, word ptr [eax + 0x18] */ r_esi = (u32)R16((u32)(r_eax+0x18u));
    /* 00768afd: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 00768b01: movzx esi, word ptr [eax + 0x1a] */ r_esi = (u32)R16((u32)(r_eax+0x1au));
    /* 00768b05: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00768b09: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 00768b0c: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00768b10: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 00768b13: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00768b17: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 00768b1a: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00768b1e: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 00768b21: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00768b24: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 00768b28: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00768b2c: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00768b2f: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00768b33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00768b35: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768b39: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00768b3c: ja 0x768bde */ if ((!fC&&!fZ)) goto L_00768bde;
L_00768b42:; BB(0x00768b42);
    /* 00768b42: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768b49: mov edx, dword ptr [eax*4 + 0x9768ec] */ r_edx = R32((u32)(r_eax*4+0x9768ecu));
    /* 00768b50: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00768bde:; BB(0x00768bde);
    /* 00768bde: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768a84); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768b52(void)
{
    FN_ENTER(0x00768b52);
    /* 00768b52: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768b54: fld dword ptr [0x977470] */ FPUSH(R_F32((u32)(0x977470u)));
    /* 00768b5a: fld dword ptr [0x97746c] */ FPUSH(R_F32((u32)(0x97746cu)));
    /* 00768b60: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00768b62: jmp 0x768b6a */ goto L_00768b6a;
L_00768b6a:; BB(0x00768b6a);
    /* 00768b6a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768b6c: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00768b72: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 00768b75: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768b77: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768b52); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768b5a(void)
{
    FN_ENTER(0x00768b5a);
    /* 00768b5a: fld dword ptr [0x97746c] */ FPUSH(R_F32((u32)(0x97746cu)));
    /* 00768b60: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00768b62: jmp 0x768b6a */ goto L_00768b6a;
L_00768b6a:; BB(0x00768b6a);
    /* 00768b6a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768b6c: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00768b72: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 00768b75: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768b77: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768b5a); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768b64(void)
{
    FN_ENTER(0x00768b64);
    /* 00768b64: fld dword ptr [0x97746c] */ FPUSH(R_F32((u32)(0x97746cu)));
    /* 00768b6a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768b6c: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00768b72: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 00768b75: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768b77: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768b64); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768b6c(void)
{
    FN_ENTER(0x00768b6c);
    /* 00768b6c: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00768b72: fild dword ptr [eax + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x24u)));
    /* 00768b75: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768b77: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768b6c); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768b79(void)
{
    FN_ENTER(0x00768b79);
    /* 00768b79: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768b7b: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00768b81: fild dword ptr [eax + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x28u)));
    /* 00768b84: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768b79); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768b86(void)
{
    FN_ENTER(0x00768b86);
    /* 00768b86: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768b88: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00768b8e: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 00768b91: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768b86); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768b93(void)
{
    FN_ENTER(0x00768b93);
    /* 00768b93: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768b95: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00768b9b: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 00768b9e: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768b93); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768ba0(void)
{
    FN_ENTER(0x00768ba0);
    /* 00768ba0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768ba2: movsx eax, word ptr [ebx + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c4u));
    /* 00768ba9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00768bad: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00768bb1: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768ba0); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768bb3(void)
{
    FN_ENTER(0x00768bb3);
    /* 00768bb3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768bb5: movsx eax, word ptr [ebx + 0x2c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c4u));
    /* 00768bbc: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00768bc0: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 00768bc4: jmp 0x768bd1 */ goto L_00768bd1;
L_00768bd1:; BB(0x00768bd1);
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768bb3); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768bc6(void)
{
    FN_ENTER(0x00768bc6);
    /* 00768bc6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768bc8: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00768bce: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 00768bd1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00768bd5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00768bdc: jmp 0x768be0 */ goto L_00768be0;
L_00768be0:; BB(0x00768be0);
    /* 00768be0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00768be2: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00768be5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00768be9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00768bec: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768bf0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00768bf4: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768bf8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768bfb: mov edx, esi */ r_edx = r_esi;
    /* 00768bfd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x768c02u); f_0082f9c4();
    /* 00768c02: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00768c0a: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00768c0e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x768c13u); f_0083173c();
    /* 00768c13: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c15: mov eax, dword ptr [ebx + 0x31c] */ r_eax = R32((u32)(r_ebx+0x31cu));
    /* 00768c1b: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00768c1e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x768c23u); f_007a9018();
    /* 00768c23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00768c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c25: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768c2b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768c2e: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x768c33u); f_007a8cb8();
    /* 00768c33: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c36: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 00768c3d: mov dword ptr [esp + 0x6c], ebx */ W32((u32)(r_esp+0x6cu), r_ebx);
    /* 00768c41: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768c44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c46: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c4b:; BB(0x00768c4b);
    /* 00768c4b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768c4d: jge 0x768ca1 */ if ((fS==fO)) goto L_00768ca1;
L_00768c4f:; BB(0x00768c4f);
    /* 00768c4f: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 00768c56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c58: je 0x768c9c */ if (fZ) goto L_00768c9c;
L_00768c5a:; BB(0x00768c5a);
    /* 00768c5a: movzx edx, word ptr [ebx + 0x96] */ r_edx = (u32)R16((u32)(r_ebx+0x96u));
    /* 00768c61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c64: jne 0x768c9c */ if (!fZ) goto L_00768c9c;
L_00768c66:; BB(0x00768c66);
    /* 00768c66: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c68: je 0x768c7d */ if (fZ) goto L_00768c7d;
L_00768c6a:; BB(0x00768c6a);
    /* 00768c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768c6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00768c6d: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x768c72u); f_00521b18();
    /* 00768c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c74: jne 0x768c7d */ if (!fZ) goto L_00768c7d;
L_00768c76:; BB(0x00768c76);
    /* 00768c76: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768c7b: jmp 0x768c9c */ goto L_00768c9c;
L_00768c7d:; BB(0x00768c7d);
    /* 00768c7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00768c7f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00768c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768c87: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x768c8cu); f_0077fffc();
    /* 00768c8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768c91: je 0x768d37 */ if (fZ) goto L_00768d37;
L_00768c97:; BB(0x00768c97);
    /* 00768c97: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00768c9c:; BB(0x00768c9c);
    /* 00768c9c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00768c9f: jmp 0x768c4b */ goto L_00768c4b;
L_00768ca1:; BB(0x00768ca1);
    /* 00768ca1: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 00768ca5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00768ca9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00768cad: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00768cb1: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 00768cb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00768cbb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00768cbe: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00768cc2: mov word ptr [edx + 2], bp */ W16((u32)(r_edx+0x2u), (u16)r_ebp);
    /* 00768cc6: mov word ptr [edx + 4], si */ W16((u32)(r_edx+0x4u), (u16)r_esi);
    /* 00768cca: mov word ptr [edx + 6], di */ W16((u32)(r_edx+0x6u), (u16)r_edi);
    /* 00768cce: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00768cd1: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00768cd5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00768cd8: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00768cdc: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00768cdf: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00768ce3: mov word ptr [edx + 0x14], ax */ W16((u32)(r_edx+0x14u), (u16)r_eax);
    /* 00768ce7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00768ceb: mov word ptr [edx + 0x16], ax */ W16((u32)(r_edx+0x16u), (u16)r_eax);
    /* 00768cef: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00768cf3: mov word ptr [edx + 0x18], ax */ W16((u32)(r_edx+0x18u), (u16)r_eax);
    /* 00768cf7: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00768cfb: mov word ptr [edx + 0x1a], ax */ W16((u32)(r_edx+0x1au), (u16)r_eax);
    /* 00768cff: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00768d03: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00768d06: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00768d0a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00768d0d: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00768d11: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00768d14: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00768d18: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00768d1b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00768d1f: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00768d22: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00768d26: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00768d29: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00768d2d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768d30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768d32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768d33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768d34: ret 0x14 */ FN_RET(0x00768bc6); r_esp += 24; return;
L_00768d37:; BB(0x00768d37);
    /* 00768d37: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d41: jne 0x768d93 */ if (!fZ) goto L_00768d93;
L_00768d43:; BB(0x00768d43);
    /* 00768d43: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d48: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d4c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d51: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x768d54u); call_ind(t); }
    /* 00768d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d56: jne 0x768d62 */ if (!fZ) goto L_00768d62;
L_00768d58:; BB(0x00768d58);
    /* 00768d58: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d5d: jmp 0x768c9c */ goto L_00768c9c;
L_00768d62:; BB(0x00768d62);
    /* 00768d62: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00768d64: mov eax, 1 */ r_eax = 0x1u;
    /* 00768d69: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768d6d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768d6f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00768d74: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00768d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768d79: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x768d7cu); call_ind(t); }
    /* 00768d7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768d7e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768d81: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00768d86: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00768d89: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768d8e: jmp 0x768c9c */ goto L_00768c9c;
L_00768d93:; BB(0x00768d93);
    /* 00768d93: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00768d9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768d9d: jne 0x768e02 */ if (!fZ) goto L_00768e02;
L_00768d9f:; BB(0x00768d9f);
    /* 00768d9f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00768da2: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768da7: je 0x768db3 */ if (fZ) goto L_00768db3;
L_00768da9:; BB(0x00768da9);
    /* 00768da9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dae: jmp 0x768c9c */ goto L_00768c9c;
L_00768db3:; BB(0x00768db3);
    /* 00768db3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00768db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768db8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dba: call 0x772c08 */ r_esp -= 4; W32(r_esp, 0x768dbfu); f_00772c08();
    /* 00768dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00768dc1: jl 0x768df8 */ if ((fS!=fO)) goto L_00768df8;
L_00768dc3:; BB(0x00768dc3);
    /* 00768dc3: mov eax, 1 */ r_eax = 0x1u;
    /* 00768dc8: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00768dcc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00768dce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00768dd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768dd9: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768ddd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00768de1: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00768de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00768de9: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x768decu); call_ind(t); }
    /* 00768dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00768dee: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768df3: jmp 0x768c9c */ goto L_00768c9c;
L_00768df8:; BB(0x00768df8);
    /* 00768df8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768dfd: jmp 0x768c9c */ goto L_00768c9c;
L_00768e02:; BB(0x00768e02);
    /* 00768e02: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00768e07: jmp 0x768c9c */ goto L_00768c9c;
}

void f_00768e0c(void)
{
    FN_ENTER(0x00768e0c);
    /* 00768e0c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00768e10: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768e13: je 0x768e33 */ if (fZ) goto L_00768e33;
L_00768e15:; BB(0x00768e15);
    /* 00768e15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768e17: jne 0x768e21 */ if (!fZ) goto L_00768e21;
L_00768e19:; BB(0x00768e19);
    /* 00768e19: call 0x768e3c */ r_esp -= 4; W32(r_esp, 0x768e1eu); f_00768e3c();
    /* 00768e1e: ret 4 */ FN_RET(0x00768e0c); r_esp += 8; return;
L_00768e21:; BB(0x00768e21);
    /* 00768e21: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00768e24: jne 0x768e38 */ if (!fZ) goto L_00768e38;
L_00768e26:; BB(0x00768e26);
    /* 00768e26: mov dword ptr [ecx + 0xf8c], 0 */ W32((u32)(r_ecx+0xf8cu), 0x0u);
    /* 00768e30: ret 4 */ FN_RET(0x00768e0c); r_esp += 8; return;
L_00768e33:; BB(0x00768e33);
    /* 00768e33: call 0x76ba68 */ r_esp -= 4; W32(r_esp, 0x768e38u); f_0076ba68();
L_00768e38:; BB(0x00768e38);
    /* 00768e38: ret 4 */ FN_RET(0x00768e0c); r_esp += 8; return;
}

void f_00768e3c(void) /* sub_768E3C */
{
    FN_ENTER(0x00768e3c);
    /* 00768e3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768e3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00768e3e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00768e41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00768e43: mov dword ptr [ebx + 0xf8c], 0x43480000 */ W32((u32)(r_ebx+0xf8cu), 0x43480000u);
    /* 00768e4d: lea eax, [ebx + 0x2a4] */ r_eax = (u32)(r_ebx+0x2a4u);
    /* 00768e53: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00768e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768e57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00768e58: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x768e5du); f_007a9180();
    /* 00768e5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768e60: fld dword ptr [0xa9b048] */ FPUSH(R_F32((u32)(0xa9b048u)));
    /* 00768e66: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00768e68: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00768e6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00768e6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00768e6d: jae 0x768f3c */ if (!fC) goto L_00768f3c;
L_00768e73:; BB(0x00768e73);
    /* 00768e73: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00768e76: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x768e7bu); f_0082ddd8();
    /* 00768e7b: fld dword ptr [0xa9b048] */ FPUSH(R_F32((u32)(0xa9b048u)));
    /* 00768e81: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768e83: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00768e86: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
    /* 00768e8c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x768e91u); f_0082dcbc();
    /* 00768e91: fld dword ptr [0xa9b048] */ FPUSH(R_F32((u32)(0xa9b048u)));
    /* 00768e97: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00768e99: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 00768e9f: lea edx, [ebx + 0x30c] */ r_edx = (u32)(r_ebx+0x30cu);
    /* 00768ea5: mov ecx, esi */ r_ecx = r_esi;
    /* 00768ea7: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 00768eb1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x768eb6u); f_0082ebac();
    /* 00768eb6: fld dword ptr [0xa9b048] */ FPUSH(R_F32((u32)(0xa9b048u)));
    /* 00768ebc: fadd dword ptr [ebx + 0xfac] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xfacu));
    /* 00768ec2: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00768ec7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00768eca: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00768ecd: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00768ed0: fstp dword ptr [ebx + 0xfac] */ W_F32((u32)(r_ebx+0xfacu), ST(0)); FPOP();
    /* 00768ed6: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00768ed9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768edb: jne 0x768fb4 */ if (!fZ) goto L_00768fb4;
L_00768ee1:; BB(0x00768ee1);
    /* 00768ee1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00768ee5: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00768ee9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00768eed: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00768ef1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768ef3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768ef6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x768efbu); f_007b4c58();
    /* 00768efb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768efd: je 0x768fb4 */ if (fZ) goto L_00768fb4;
L_00768f03:; BB(0x00768f03);
    /* 00768f03: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00768f07: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00768f09: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00768f0f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x768f14u); f_0050b7a4();
    /* 00768f14: mov ebx, eax */ r_ebx = r_eax;
    /* 00768f16: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00768f19: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768f1b: je 0x768fb4 */ if (fZ) goto L_00768fb4;
L_00768f21:; BB(0x00768f21);
    /* 00768f21: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00768f23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768f25: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x768f2au); f_00508f08();
    /* 00768f2a: push 0xff3f4f5f */ { u32 v = 0xff3f4f5fu; r_esp -= 4; W32(r_esp, v); }
    /* 00768f2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00768f31: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x768f36u); f_00508ee4();
    /* 00768f36: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768f39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768f3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768f3b: ret  */ FN_RET(0x00768e3c); r_esp += 4; return;
L_00768f3c:; BB(0x00768f3c);
    /* 00768f3c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00768f3e:; BB(0x00768f3e);
    /* 00768f3e: mov eax, dword ptr [ebx + 0xfb0] */ r_eax = R32((u32)(r_ebx+0xfb0u));
    /* 00768f44: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 00768f47: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00768f4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768f4c: je 0x768f53 */ if (fZ) goto L_00768f53;
L_00768f4e:; BB(0x00768f4e);
    /* 00768f4e: call 0x764f54 */ r_esp -= 4; W32(r_esp, 0x768f53u); f_00764f54();
L_00768f53:; BB(0x00768f53);
    /* 00768f53: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768f56: jl 0x768f3e */ if ((fS!=fO)) goto L_00768f3e;
L_00768f58:; BB(0x00768f58);
    /* 00768f58: mov edx, dword ptr [ebx + 0xf74] */ r_edx = R32((u32)(r_ebx+0xf74u));
    /* 00768f5e: fld dword ptr [ebx + 0xfac] */ FPUSH(R_F32((u32)(r_ebx+0xfacu)));
    /* 00768f64: fcomp dword ptr [0xa9b048] */ fx_compare(ST(0), R_F32((u32)(0xa9b048u))); FPOP();
    /* 00768f6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00768f6c: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00768f72: mov dword ptr [ebx + 0xf74], edx */ W32((u32)(r_ebx+0xf74u), r_edx);
    /* 00768f78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00768f79: jb 0x768fb4 */ if (fC) goto L_00768fb4;
L_00768f7b:; BB(0x00768f7b);
    /* 00768f7b: mov ecx, dword ptr [ebx + 0xf80] */ r_ecx = R32((u32)(r_ebx+0xf80u));
    /* 00768f81: mov byte ptr [esp], 0xdc */ W8((u32)(r_esp), 0xdcu);
    /* 00768f85: mov edx, 4 */ r_edx = 0x4u;
    /* 00768f8a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00768f8f: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00768f94: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00768f99: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00768f9e: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 00768fa3: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x768fa8u); f_0052cf54();
    /* 00768fa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768faa: je 0x768fb4 */ if (fZ) goto L_00768fb4;
L_00768fac:; BB(0x00768fac);
    /* 00768fac: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00768faf: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x768fb4u); f_008003e0();
L_00768fb4:; BB(0x00768fb4);
    /* 00768fb4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768fb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768fb8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00768fb9: ret  */ FN_RET(0x00768e3c); r_esp += 4; return;
}

void f_00768fbc(void)
{
    FN_ENTER(0x00768fbc);
    /* 00768fbc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00768fc0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00768fc3: jne 0x768fd2 */ if (!fZ) goto L_00768fd2;
L_00768fc5:; BB(0x00768fc5);
    /* 00768fc5: mov dword ptr [ecx + 0xf9c], 0 */ W32((u32)(r_ecx+0xf9cu), 0x0u);
    /* 00768fcf: ret 4 */ FN_RET(0x00768fbc); r_esp += 8; return;
L_00768fd2:; BB(0x00768fd2);
    /* 00768fd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00768fd4: jne 0x768fdb */ if (!fZ) goto L_00768fdb;
L_00768fd6:; BB(0x00768fd6);
    /* 00768fd6: call 0x768fe0 */ r_esp -= 4; W32(r_esp, 0x768fdbu); f_00768fe0();
L_00768fdb:; BB(0x00768fdb);
    /* 00768fdb: ret 4 */ FN_RET(0x00768fbc); r_esp += 8; return;
}

void f_00768fe0(void) /* sub_768FE0 */
{
    FN_ENTER(0x00768fe0);
    /* 00768fe0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00768fe1: mov edi, ecx */ r_edi = r_ecx;
    /* 00768fe3: mov ecx, edi */ r_ecx = r_edi;
    /* 00768fe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00768fe7: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x768fecu); f_007aaa30();
    /* 00768fec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00768fee: je 0x76902c */ if (fZ) goto L_0076902c;
L_00768ff0:; BB(0x00768ff0);
    /* 00768ff0: mov eax, dword ptr [edi + 0xf80] */ r_eax = R32((u32)(r_edi+0xf80u));
    /* 00768ff6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768ff9: jl 0x769017 */ if ((fS!=fO)) goto L_00769017;
L_00768ffb:; BB(0x00768ffb);
    /* 00768ffb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00768ffe: jg 0x769017 */ if ((!fZ&&fS==fO)) goto L_00769017;
L_00769000:; BB(0x00769000);
    /* 00769000: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00769002: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00769004: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00769007: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00769008: push 0x6f3 */ { u32 v = 0x6f3u; r_esp -= 4; W32(r_esp, v); }
    /* 0076900d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x769012u); f_00814298();
    /* 00769012: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00769015: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00769016: ret  */ FN_RET(0x00768fe0); r_esp += 4; return;
L_00769017:; BB(0x00769017);
    /* 00769017: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00769019: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076901b: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076901e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076901f: push 0x6f2 */ { u32 v = 0x6f2u; r_esp -= 4; W32(r_esp, v); }
    /* 00769024: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x769029u); f_00814298();
    /* 00769029: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0076902c:; BB(0x0076902c);
    /* 0076902c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076902d: ret  */ FN_RET(0x00768fe0); r_esp += 4; return;
}

