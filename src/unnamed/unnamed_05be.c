#include "protos.h"

void f_005be178(void) /* sub_5BE178 */
{
    FN_ENTER(0x005be178);
    /* 005be178: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005be179: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005be17a: mov esi, ecx */ r_esi = r_ecx;
    /* 005be17c: mov eax, dword ptr [esi + 0x53c] */ r_eax = R32((u32)(r_esi+0x53cu));
    /* 005be182: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005be185: je 0x5be18a */ if (fZ) goto L_005be18a;
L_005be187:; BB(0x005be187);
    /* 005be187: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be188: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005be189: ret  */ FN_RET(0x005be178); r_esp += 4; return;
L_005be18a:; BB(0x005be18a);
    /* 005be18a: mov ecx, esi */ r_ecx = r_esi;
    /* 005be18c: call 0x5be270 */ r_esp -= 4; W32(r_esp, 0x5be191u); f_005be270();
    /* 005be191: mov edi, eax */ r_edi = r_eax;
    /* 005be193: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be195: je 0x5be187 */ if (fZ) goto L_005be187;
L_005be197:; BB(0x005be197);
    /* 005be197: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005be19a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be19b: push dword ptr [esi + 0x544] */ { u32 v = R32((u32)(r_esi+0x544u)); r_esp -= 4; W32(r_esp, v); }
    /* 005be1a1: call 0x5bcbd4 */ r_esp -= 4; W32(r_esp, 0x5be1a6u); f_005bcbd4();
    /* 005be1a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be1a9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005be1ab: jle 0x5be1d1 */ if ((fZ||fS!=fO)) goto L_005be1d1;
L_005be1ad:; BB(0x005be1ad);
    /* 005be1ad: mov eax, dword ptr [esi + 0x544] */ r_eax = R32((u32)(r_esi+0x544u));
    /* 005be1b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be1b6: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be1bb: jge 0x5be1c5 */ if ((fS==fO)) goto L_005be1c5;
L_005be1bd:; BB(0x005be1bd);
    /* 005be1bd: mov dword ptr [esi + 0x544], eax */ W32((u32)(r_esi+0x544u), r_eax);
    /* 005be1c3: jmp 0x5be1f2 */ goto L_005be1f2;
L_005be1c5:; BB(0x005be1c5);
    /* 005be1c5: mov dword ptr [esi + 0x544], 0 */ W32((u32)(r_esi+0x544u), 0x0u);
    /* 005be1cf: jmp 0x5be1f2 */ goto L_005be1f2;
L_005be1d1:; BB(0x005be1d1);
    /* 005be1d1: jge 0x5be1f2 */ if ((fS==fO)) goto L_005be1f2;
L_005be1d3:; BB(0x005be1d3);
    /* 005be1d3: mov eax, dword ptr [esi + 0x544] */ r_eax = R32((u32)(r_esi+0x544u));
    /* 005be1d9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be1dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005be1de: jl 0x5be1e8 */ if ((fS!=fO)) goto L_005be1e8;
L_005be1e0:; BB(0x005be1e0);
    /* 005be1e0: mov dword ptr [esi + 0x544], eax */ W32((u32)(r_esi+0x544u), r_eax);
    /* 005be1e6: jmp 0x5be1f2 */ goto L_005be1f2;
L_005be1e8:; BB(0x005be1e8);
    /* 005be1e8: mov dword ptr [esi + 0x544], 0xff */ W32((u32)(r_esi+0x544u), 0xffu);
L_005be1f2:; BB(0x005be1f2);
    /* 005be1f2: push dword ptr [esi + 0x544] */ { u32 v = R32((u32)(r_esi+0x544u)); r_esp -= 4; W32(r_esp, v); }
    /* 005be1f8: call 0x5bcbbc */ r_esp -= 4; W32(r_esp, 0x5be1fdu); f_005bcbbc();
    /* 005be1fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005be1fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005be200: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 005be203: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005be206: mov dword ptr [esi + 0x3c], edi */ W32((u32)(r_esi+0x3cu), r_edi);
    /* 005be209: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005be20c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 005be20f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005be212: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 005be215: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005be218: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 005be21b: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005be21e: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 005be221: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005be224: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 005be227: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005be22a: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 005be22d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005be230: mov dword ptr [esi + 0x58], edx */ W32((u32)(r_esi+0x58u), r_edx);
    /* 005be233: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005be236: mov dword ptr [esi + 0x5c], edx */ W32((u32)(r_esi+0x5cu), r_edx);
    /* 005be239: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005be23c: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 005be23f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005be242: mov dword ptr [esi + 0x64], edx */ W32((u32)(r_esi+0x64u), r_edx);
    /* 005be245: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005be248: mov dword ptr [esi + 0x68], edx */ W32((u32)(r_esi+0x68u), r_edx);
    /* 005be24b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005be24e: mov dword ptr [esi + 0x6c], edx */ W32((u32)(r_esi+0x6cu), r_edx);
    /* 005be251: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005be254: mov dword ptr [esi + 0x70], edx */ W32((u32)(r_esi+0x70u), r_edx);
    /* 005be257: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 005be25a: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005be25d: mov ecx, esi */ r_ecx = r_esi;
    /* 005be25f: call 0x5be308 */ r_esp -= 4; W32(r_esp, 0x5be264u); f_005be308();
    /* 005be264: mov ecx, esi */ r_ecx = r_esi;
    /* 005be266: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5be26bu); f_005bf8b0();
    /* 005be26b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be26c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005be26d: ret  */ FN_RET(0x005be178); r_esp += 4; return;
}

void f_005be270(void) /* sub_5BE270 */
{
    FN_ENTER(0x005be270);
    /* 005be270: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005be271: mov edi, ecx */ r_edi = r_ecx;
    /* 005be273: mov ecx, edi */ r_ecx = r_edi;
    /* 005be275: call 0x5bdea8 */ r_esp -= 4; W32(r_esp, 0x5be27au); f_005bdea8();
    /* 005be27a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be27c: je 0x5be304 */ if (fZ) goto L_005be304;
L_005be282:; BB(0x005be282);
    /* 005be282: push dword ptr [0xa8d7a0] */ { u32 v = R32((u32)(0xa8d7a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005be288: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005be28b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005be28e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be290: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be292: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be294: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005be29b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5be2a0u); f_007c1160();
    /* 005be2a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be2a2: jne 0x5be2b3 */ if (!fZ) goto L_005be2b3;
L_005be2a4:; BB(0x005be2a4);
    /* 005be2a4: mov eax, dword ptr [edi + 0x84c] */ r_eax = R32((u32)(r_edi+0x84cu));
    /* 005be2aa: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be2ad: jge 0x5be2b3 */ if ((fS==fO)) goto L_005be2b3;
L_005be2af:; BB(0x005be2af);
    /* 005be2af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005be2b1: jmp 0x5be2b8 */ goto L_005be2b8;
L_005be2b3:; BB(0x005be2b3);
    /* 005be2b3: mov eax, 1 */ r_eax = 0x1u;
L_005be2b8:; BB(0x005be2b8);
    /* 005be2b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be2ba: je 0x5be2c3 */ if (fZ) goto L_005be2c3;
L_005be2bc:; BB(0x005be2bc);
    /* 005be2bc: mov eax, 1 */ r_eax = 0x1u;
    /* 005be2c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005be2c2: ret  */ FN_RET(0x005be270); r_esp += 4; return;
L_005be2c3:; BB(0x005be2c3);
    /* 005be2c3: push dword ptr [0xa8d7a4] */ { u32 v = R32((u32)(0xa8d7a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005be2c9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005be2cc: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005be2cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be2d1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be2d3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be2d5: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005be2dc: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5be2e1u); f_007c1160();
    /* 005be2e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be2e3: jne 0x5be2f4 */ if (!fZ) goto L_005be2f4;
L_005be2e5:; BB(0x005be2e5);
    /* 005be2e5: mov eax, dword ptr [edi + 0x850] */ r_eax = R32((u32)(r_edi+0x850u));
    /* 005be2eb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be2ee: jge 0x5be2f4 */ if ((fS==fO)) goto L_005be2f4;
L_005be2f0:; BB(0x005be2f0);
    /* 005be2f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005be2f2: jmp 0x5be2f9 */ goto L_005be2f9;
L_005be2f4:; BB(0x005be2f4);
    /* 005be2f4: mov eax, 1 */ r_eax = 0x1u;
L_005be2f9:; BB(0x005be2f9);
    /* 005be2f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be2fb: je 0x5be304 */ if (fZ) goto L_005be304;
L_005be2fd:; BB(0x005be2fd);
    /* 005be2fd: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005be302: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005be303: ret  */ FN_RET(0x005be270); r_esp += 4; return;
L_005be304:; BB(0x005be304);
    /* 005be304: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be306: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005be307: ret  */ FN_RET(0x005be270); r_esp += 4; return;
}

void f_005be308(void) /* sub_5BE308 */
{
    FN_ENTER(0x005be308);
    /* 005be308: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005be309: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005be30a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be30b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005be30c: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be30f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005be311: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005be314: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005be317: mov edx, 0 */ r_edx = 0x0u;
    /* 005be31c: je 0x5be337 */ if (fZ) goto L_005be337;
L_005be31e:; BB(0x005be31e);
    /* 005be31e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005be320: jne 0x5be753 */ if (!fZ) goto L_005be753;
L_005be326:; BB(0x005be326);
    /* 005be326: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be329: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005be32b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005be32d: je 0x5be326 */ if (fZ) goto L_005be326;
L_005be32f:; BB(0x005be32f);
    /* 005be32f: mov dword ptr [ebx + 0x554], edx */ W32((u32)(r_ebx+0x554u), r_edx);
    /* 005be335: jmp 0x5be341 */ goto L_005be341;
L_005be337:; BB(0x005be337);
    /* 005be337: mov dword ptr [ebx + 0x554], 0 */ W32((u32)(r_ebx+0x554u), 0x0u);
L_005be341:; BB(0x005be341);
    /* 005be341: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005be344: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 005be347: lea edx, [ebx + 0x138] */ r_edx = (u32)(r_ebx+0x138u);
    /* 005be34d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005be34f: jne 0x5be515 */ if (!fZ) goto L_005be515;
L_005be355:; BB(0x005be355);
    /* 005be355: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005be357: jne 0x5be439 */ if (!fZ) goto L_005be439;
L_005be35d:; BB(0x005be35d);
    /* 005be35d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005be35f: je 0x5be51f */ if (fZ) goto L_005be51f;
L_005be365:; BB(0x005be365);
    /* 005be365: lea ecx, [ebx + 0x138] */ r_ecx = (u32)(r_ebx+0x138u);
    /* 005be36b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005be36d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005be36f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005be371: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005be373: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005be379:; BB(0x005be379);
    /* 005be379: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005be37b: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 005be37e: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 005be381: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005be384: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005be387: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be389: ja 0x5be379 */ if ((!fC&&!fZ)) goto L_005be379;
L_005be38b:; BB(0x005be38b);
    /* 005be38b: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005be390: fld dword ptr [ebx + 0x60] */ FPUSH(R_F32((u32)(r_ebx+0x60u)));
    /* 005be393: fmul dword ptr [0x92b854] */ ST(0) = ST(0) * R_F32((u32)(0x92b854u));
    /* 005be399: fld dword ptr [ebx + 0x58] */ FPUSH(R_F32((u32)(r_ebx+0x58u)));
    /* 005be39c: mov edi, dword ptr [ebx + 0x58] */ r_edi = R32((u32)(r_ebx+0x58u));
    /* 005be39f: movzx ecx, byte ptr [ebx + 0x73] */ r_ecx = (u32)R8((u32)(r_ebx+0x73u));
    /* 005be3a3: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005be3a7: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005be3ab: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 005be3af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005be3b1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005be3b1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005be3b1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005be3b3: movzx edx, byte ptr [ebx + 0x72] */ r_edx = (u32)R8((u32)(r_ebx+0x72u));
    /* 005be3b7: mov esi, 0x7f */ r_esi = 0x7fu;
    /* 005be3bc: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005be3c0: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005be3c4: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 005be3c8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005be3ca: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 005be3ce: mov edi, ebp */ r_edi = r_ebp;
    /* 005be3d0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005be3d2:; BB(0x005be3d2);
    /* 005be3d2: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 005be3d6: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005be3d9: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005be3df: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5be3e4u); f_0082dcbc();
    /* 005be3e4: fadd dword ptr [0x92b850] */ ST(0) = ST(0) + R_F32((u32)(0x92b850u));
    /* 005be3ea: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 005be3ee: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 005be3f2: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005be3f6: fstp dword ptr [ebx + esi*4 + 0x138] */ W_F32((u32)(r_ebx+r_esi*4+0x138u), ST(0)); FPOP();
    /* 005be3fd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005be400: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005be403: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be405: jl 0x5be40e */ if ((fS!=fO)) goto L_005be40e;
L_005be407:; BB(0x005be407);
    /* 005be407: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005be409: mov edi, 1 */ r_edi = 0x1u;
L_005be40e:; BB(0x005be40e);
    /* 005be40e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005be412: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
L_005be416:; BB(0x005be416);
    /* 005be416: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005be418: jl 0x5be51f */ if ((fS!=fO)) goto L_005be51f;
L_005be41e:; BB(0x005be41e);
    /* 005be41e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be420: je 0x5be3d2 */ if (fZ) goto L_005be3d2;
L_005be422:; BB(0x005be422);
    /* 005be422: mov dword ptr [ebx + esi*4 + 0x138], edx */ W32((u32)(r_ebx+r_esi*4+0x138u), r_edx);
    /* 005be429: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005be42c: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005be42f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be431: jl 0x5be416 */ if ((fS!=fO)) goto L_005be416;
L_005be433:; BB(0x005be433);
    /* 005be433: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005be435: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005be437: jmp 0x5be416 */ goto L_005be416;
L_005be439:; BB(0x005be439);
    /* 005be439: lea ecx, [ebx + 0x138] */ r_ecx = (u32)(r_ebx+0x138u);
    /* 005be43f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005be441: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005be443: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005be445: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005be447: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005be44d:; BB(0x005be44d);
    /* 005be44d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005be44f: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 005be452: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 005be455: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005be458: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005be45b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be45d: ja 0x5be44d */ if ((!fC&&!fZ)) goto L_005be44d;
L_005be45f:; BB(0x005be45f);
    /* 005be45f: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 005be462: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005be464: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005be466: jbe 0x5be51f */ if ((fC||fZ)) goto L_005be51f;
L_005be46c:; BB(0x005be46c);
    /* 005be46c: mov ecx, ebx */ r_ecx = r_ebx;
L_005be46e:; BB(0x005be46e);
    /* 005be46e: fld dword ptr [ecx + edx*8 + 0x58] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0x58u)));
    /* 005be472: fmul dword ptr [0x92b854] */ ST(0) = ST(0) * R_F32((u32)(0x92b854u));
    /* 005be478: movzx ebx, byte ptr [ecx + edx*2 + 0x72] */ r_ebx = (u32)R8((u32)(r_ecx+r_edx*2+0x72u));
    /* 005be47d: movzx eax, byte ptr [ecx + edx*2 + 0x73] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0x73u));
    /* 005be482: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005be486: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005be489: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005be48c: fdiv dword ptr [0x92b848] */ ST(0) = ST(0) / R_F32((u32)(0x92b848u));
    /* 005be492: fmul dword ptr [0x92b84c] */ ST(0) = ST(0) * R_F32((u32)(0x92b84cu));
    /* 005be498: fdiv dword ptr [0x92b844] */ ST(0) = ST(0) / R_F32((u32)(0x92b844u));
    /* 005be49e: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005be4a2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005be4a6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005be4ab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005be4b0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005be4b4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005be4b8: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005be4bc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005be4c0: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005be4c4: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005be4c7: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005be4cd: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 005be4d1: lea esi, [ecx + 0x338] */ r_esi = (u32)(r_ecx+0x338u);
    /* 005be4d7: lea ebp, [ecx + 0x13c] */ r_ebp = (u32)(r_ecx+0x13cu);
L_005be4dd:; BB(0x005be4dd);
    /* 005be4dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be4df: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5be4e4u); f_0082dcbc();
    /* 005be4e4: fadd dword ptr [0x92b850] */ ST(0) = ST(0) + R_F32((u32)(0x92b850u));
    /* 005be4ea: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 005be4ee: fadd dword ptr [esi - 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffffcu));
    /* 005be4f1: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 005be4f4: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005be4f6: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005be4f9: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be4fb: jbe 0x5be4dd */ if ((fC||fZ)) goto L_005be4dd;
L_005be4fd:; BB(0x005be4fd);
    /* 005be4fd: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 005be501: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 005be505: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be508: cmp edx, dword ptr [ecx + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be50b: jb 0x5be46e */ if (fC) goto L_005be46e;
L_005be511:; BB(0x005be511);
    /* 005be511: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005be513: jmp 0x5be51f */ goto L_005be51f;
L_005be515:; BB(0x005be515);
    /* 005be515: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be516: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be517: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5be51cu); f_005bcc88();
    /* 005be51c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005be51f:; BB(0x005be51f);
    /* 005be51f: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 005be522: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 005be525: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 005be528: mov ebp, dword ptr [ebx + 0x48] */ r_ebp = R32((u32)(r_ebx+0x48u));
    /* 005be52b: mov esi, dword ptr [ebx + 0x4c] */ r_esi = R32((u32)(r_ebx+0x4cu));
    /* 005be52e: mov edi, dword ptr [ebx + 0x50] */ r_edi = R32((u32)(r_ebx+0x50u));
    /* 005be531: mov dword ptr [ebx + 0x78], 1 */ W32((u32)(r_ebx+0x78u), 0x1u);
    /* 005be538: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 005be53c: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005be53f: mov dword ptr [ebx + 0xb8], 2 */ W32((u32)(r_ebx+0xb8u), 0x2u);
    /* 005be549: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 005be54d: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
    /* 005be553: mov dword ptr [ebx + 0xf8], 4 */ W32((u32)(r_ebx+0xf8u), 0x4u);
    /* 005be55d: mov dword ptr [ebx + 0x84], ecx */ W32((u32)(r_ebx+0x84u), r_ecx);
    /* 005be563: mov dword ptr [ebx + 0x88], ebp */ W32((u32)(r_ebx+0x88u), r_ebp);
    /* 005be569: mov dword ptr [ebx + 0x8c], esi */ W32((u32)(r_ebx+0x8cu), r_esi);
    /* 005be56f: mov dword ptr [ebx + 0x90], edi */ W32((u32)(r_ebx+0x90u), r_edi);
    /* 005be575: mov edi, dword ptr [ebx + 0x54] */ r_edi = R32((u32)(r_ebx+0x54u));
    /* 005be578: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 005be57c: mov dword ptr [ebx + 0x94], edi */ W32((u32)(r_ebx+0x94u), r_edi);
    /* 005be582: mov edi, dword ptr [ebx + 0x58] */ r_edi = R32((u32)(r_ebx+0x58u));
    /* 005be585: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 005be589: mov dword ptr [ebx + 0x98], edi */ W32((u32)(r_ebx+0x98u), r_edi);
    /* 005be58f: mov edi, dword ptr [ebx + 0x5c] */ r_edi = R32((u32)(r_ebx+0x5cu));
    /* 005be592: mov dword ptr [ebx + 0x9c], edi */ W32((u32)(r_ebx+0x9cu), r_edi);
    /* 005be598: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 005be59e: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 005be5a2: mov edi, dword ptr [ebx + 0x60] */ r_edi = R32((u32)(r_ebx+0x60u));
    /* 005be5a5: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 005be5a9: mov dword ptr [ebx + 0xa0], edi */ W32((u32)(r_ebx+0xa0u), r_edi);
    /* 005be5af: mov edi, dword ptr [ebx + 0x64] */ r_edi = R32((u32)(r_ebx+0x64u));
    /* 005be5b2: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 005be5b6: mov dword ptr [ebx + 0xa4], edi */ W32((u32)(r_ebx+0xa4u), r_edi);
    /* 005be5bc: mov edi, dword ptr [ebx + 0x68] */ r_edi = R32((u32)(r_ebx+0x68u));
    /* 005be5bf: mov dword ptr [ebx + 0xa8], edi */ W32((u32)(r_ebx+0xa8u), r_edi);
    /* 005be5c5: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 005be5c9: mov edi, dword ptr [ebx + 0x6c] */ r_edi = R32((u32)(r_ebx+0x6cu));
    /* 005be5cc: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 005be5d0: mov dword ptr [ebx + 0xac], edi */ W32((u32)(r_ebx+0xacu), r_edi);
    /* 005be5d6: mov edi, dword ptr [ebx + 0x70] */ r_edi = R32((u32)(r_ebx+0x70u));
    /* 005be5d9: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 005be5dd: mov dword ptr [ebx + 0xb0], edi */ W32((u32)(r_ebx+0xb0u), r_edi);
    /* 005be5e3: mov edi, dword ptr [ebx + 0x74] */ r_edi = R32((u32)(r_ebx+0x74u));
    /* 005be5e6: mov dword ptr [ebx + 0xb4], edi */ W32((u32)(r_ebx+0xb4u), r_edi);
    /* 005be5ec: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 005be5f0: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 005be5f6: mov dword ptr [ebx + 0xc4], ecx */ W32((u32)(r_ebx+0xc4u), r_ecx);
    /* 005be5fc: mov dword ptr [ebx + 0xc8], ebp */ W32((u32)(r_ebx+0xc8u), r_ebp);
    /* 005be602: mov dword ptr [ebx + 0xcc], esi */ W32((u32)(r_ebx+0xccu), r_esi);
    /* 005be608: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 005be60c: mov dword ptr [ebx + 0xd0], esi */ W32((u32)(r_ebx+0xd0u), r_esi);
    /* 005be612: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 005be616: mov dword ptr [ebx + 0xd4], esi */ W32((u32)(r_ebx+0xd4u), r_esi);
    /* 005be61c: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 005be620: mov dword ptr [ebx + 0xd8], esi */ W32((u32)(r_ebx+0xd8u), r_esi);
    /* 005be626: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 005be62a: mov dword ptr [ebx + 0xdc], esi */ W32((u32)(r_ebx+0xdcu), r_esi);
    /* 005be630: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 005be634: mov dword ptr [ebx + 0xe0], esi */ W32((u32)(r_ebx+0xe0u), r_esi);
    /* 005be63a: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 005be63e: mov dword ptr [ebx + 0xe4], esi */ W32((u32)(r_ebx+0xe4u), r_esi);
    /* 005be644: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 005be648: mov dword ptr [ebx + 0xe8], esi */ W32((u32)(r_ebx+0xe8u), r_esi);
    /* 005be64e: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 005be652: mov dword ptr [ebx + 0xec], esi */ W32((u32)(r_ebx+0xecu), r_esi);
    /* 005be658: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 005be65c: mov dword ptr [ebx + 0xf0], esi */ W32((u32)(r_ebx+0xf0u), r_esi);
    /* 005be662: mov dword ptr [ebx + 0xf4], edi */ W32((u32)(r_ebx+0xf4u), r_edi);
    /* 005be668: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005be66e: mov dword ptr [ebx + 0xfc], eax */ W32((u32)(r_ebx+0xfcu), r_eax);
    /* 005be674: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005be678: mov dword ptr [ebx + 0x100], edx */ W32((u32)(r_ebx+0x100u), r_edx);
    /* 005be67e: mov dword ptr [ebx + 0x104], ecx */ W32((u32)(r_ebx+0x104u), r_ecx);
    /* 005be684: mov dword ptr [ebx + 0x108], ebp */ W32((u32)(r_ebx+0x108u), r_ebp);
    /* 005be68a: mov dword ptr [ebx + 0x10c], eax */ W32((u32)(r_ebx+0x10cu), r_eax);
    /* 005be690: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005be694: mov dword ptr [ebx + 0x110], eax */ W32((u32)(r_ebx+0x110u), r_eax);
    /* 005be69a: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005be69e: mov dword ptr [ebx + 0x114], eax */ W32((u32)(r_ebx+0x114u), r_eax);
    /* 005be6a4: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005be6a8: mov dword ptr [ebx + 0x118], eax */ W32((u32)(r_ebx+0x118u), r_eax);
    /* 005be6ae: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005be6b2: mov dword ptr [ebx + 0x11c], eax */ W32((u32)(r_ebx+0x11cu), r_eax);
    /* 005be6b8: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005be6bc: mov dword ptr [ebx + 0x120], eax */ W32((u32)(r_ebx+0x120u), r_eax);
    /* 005be6c2: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005be6c6: mov dword ptr [ebx + 0x124], eax */ W32((u32)(r_ebx+0x124u), r_eax);
    /* 005be6cc: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005be6d0: mov dword ptr [ebx + 0x128], eax */ W32((u32)(r_ebx+0x128u), r_eax);
    /* 005be6d6: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 005be6da: mov dword ptr [ebx + 0x12c], eax */ W32((u32)(r_ebx+0x12cu), r_eax);
    /* 005be6e0: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 005be6e4: mov dword ptr [ebx + 0x130], esi */ W32((u32)(r_ebx+0x130u), r_esi);
    /* 005be6ea: mov dword ptr [ebx + 0x134], eax */ W32((u32)(r_ebx+0x134u), r_eax);
    /* 005be6f0: mov edx, esi */ r_edx = r_esi;
    /* 005be6f2: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005be6f5: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005be6f8: mov dword ptr [ebx + 0x6b0], edx */ W32((u32)(r_ebx+0x6b0u), r_edx);
    /* 005be6fe: mov edx, esi */ r_edx = r_esi;
    /* 005be700: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005be703: mov dword ptr [ebx + 0x71c], edx */ W32((u32)(r_ebx+0x71cu), r_edx);
    /* 005be709: mov dword ptr [ebx + 0x6b4], edi */ W32((u32)(r_ebx+0x6b4u), r_edi);
    /* 005be70f: mov edx, eax */ r_edx = r_eax;
    /* 005be711: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005be714: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005be717: mov dword ptr [ebx + 0x720], edx */ W32((u32)(r_ebx+0x720u), r_edx);
    /* 005be71d: mov edx, eax */ r_edx = r_eax;
    /* 005be71f: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005be722: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005be725: mov dword ptr [ebx + 0x6b8], edx */ W32((u32)(r_ebx+0x6b8u), r_edx);
    /* 005be72b: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005be72e: mov dword ptr [ebx + 0x724], eax */ W32((u32)(r_ebx+0x724u), r_eax);
    /* 005be734: mov eax, esi */ r_eax = r_esi;
    /* 005be736: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005be739: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005be73c: mov dword ptr [ebx + 0x78c], eax */ W32((u32)(r_ebx+0x78cu), r_eax);
    /* 005be742: shr esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005be745: mov dword ptr [ebx + 0x790], esi */ W32((u32)(r_ebx+0x790u), r_esi);
    /* 005be74b: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005be74e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005be74f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be750: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be751: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005be752: ret  */ FN_RET(0x005be308); r_esp += 4; return;
L_005be753:; BB(0x005be753);
    /* 005be753: mov dword ptr [ebx + 0x554], 0 */ W32((u32)(r_ebx+0x554u), 0x0u);
    /* 005be75d: jmp 0x5be341 */ goto L_005be341;
}

void f_005be764(void) /* sub_5BE764 */
{
    FN_ENTER(0x005be764);
    /* 005be764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be765: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005be767: mov eax, dword ptr [ebp + 0x53c] */ r_eax = R32((u32)(r_ebp+0x53cu));
    /* 005be76d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005be770: je 0x5be77e */ if (fZ) goto L_005be77e;
L_005be772:; BB(0x005be772);
    /* 005be772: mov dword ptr [ebp + 0x54c], 0 */ W32((u32)(r_ebp+0x54cu), 0x0u);
L_005be77c:; BB(0x005be77c);
    /* 005be77c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be77d: ret  */ FN_RET(0x005be764); r_esp += 4; return;
L_005be77e:; BB(0x005be77e);
    /* 005be77e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005be780: call 0x5be270 */ r_esp -= 4; W32(r_esp, 0x5be785u); f_005be270();
    /* 005be785: mov edx, dword ptr [ebp + 0x54c] */ r_edx = R32((u32)(r_ebp+0x54cu));
    /* 005be78b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be78d: je 0x5be819 */ if (fZ) goto L_005be819;
L_005be793:; BB(0x005be793);
    /* 005be793: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be796: je 0x5be7f2 */ if (fZ) goto L_005be7f2;
L_005be798:; BB(0x005be798);
    /* 005be798: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be79b: jne 0x5be7c2 */ if (!fZ) goto L_005be7c2;
L_005be79d:; BB(0x005be79d);
    /* 005be79d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be79f: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005be7a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be7a3: call 0x5bcab8 */ r_esp -= 4; W32(r_esp, 0x5be7a8u); f_005bcab8();
    /* 005be7a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be7ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be7ad: je 0x5be7b9 */ if (fZ) goto L_005be7b9;
L_005be7af:; BB(0x005be7af);
    /* 005be7af: mov dword ptr [ebp + 0x54c], 3 */ W32((u32)(r_ebp+0x54cu), 0x3u);
L_005be7b9:; BB(0x005be7b9);
    /* 005be7b9: add dword ptr [ebp + 0x550], 1 */ { u32 ad = (u32)(r_ebp+0x550u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005be7c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be7c1: ret  */ FN_RET(0x005be764); r_esp += 4; return;
L_005be7c2:; BB(0x005be7c2);
    /* 005be7c2: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005be7c5: jne 0x5be77c */ if (!fZ) goto L_005be77c;
L_005be7c7:; BB(0x005be7c7);
    /* 005be7c7: call 0x5bcc5c */ r_esp -= 4; W32(r_esp, 0x5be7ccu); f_005bcc5c();
    /* 005be7cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be7ce: jne 0x5be7e9 */ if (!fZ) goto L_005be7e9;
L_005be7d0:; BB(0x005be7d0);
    /* 005be7d0: mov eax, dword ptr [ebp + 0x538] */ r_eax = R32((u32)(r_ebp+0x538u));
    /* 005be7d6: mov dword ptr [ebp + 0x54c], 0 */ W32((u32)(r_ebp+0x54cu), 0x0u);
    /* 005be7e0: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005be7e3: mov dword ptr [ebp + 0x538], eax */ W32((u32)(r_ebp+0x538u), r_eax);
L_005be7e9:; BB(0x005be7e9);
    /* 005be7e9: add dword ptr [ebp + 0x550], 1 */ { u32 ad = (u32)(r_ebp+0x550u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005be7f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be7f1: ret  */ FN_RET(0x005be764); r_esp += 4; return;
L_005be7f2:; BB(0x005be7f2);
    /* 005be7f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005be7f4: push dword ptr [ebp + 0x548] */ { u32 v = R32((u32)(r_ebp+0x548u)); r_esp -= 4; W32(r_esp, v); }
    /* 005be7fa: call 0x5bcba8 */ r_esp -= 4; W32(r_esp, 0x5be7ffu); f_005bcba8();
    /* 005be7ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be802: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be804: je 0x5be810 */ if (fZ) goto L_005be810;
L_005be806:; BB(0x005be806);
    /* 005be806: mov dword ptr [ebp + 0x54c], 2 */ W32((u32)(r_ebp+0x54cu), 0x2u);
L_005be810:; BB(0x005be810);
    /* 005be810: add dword ptr [ebp + 0x550], 1 */ { u32 ad = (u32)(r_ebp+0x550u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005be817: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be818: ret  */ FN_RET(0x005be764); r_esp += 4; return;
L_005be819:; BB(0x005be819);
    /* 005be819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005be81b: je 0x5be864 */ if (fZ) goto L_005be864;
L_005be81d:; BB(0x005be81d);
    /* 005be81d: jle 0x5be843 */ if ((fZ||fS!=fO)) goto L_005be843;
L_005be81f:; BB(0x005be81f);
    /* 005be81f: mov eax, dword ptr [ebp + 0x548] */ r_eax = R32((u32)(r_ebp+0x548u));
    /* 005be825: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be828: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be82d: jge 0x5be837 */ if ((fS==fO)) goto L_005be837;
L_005be82f:; BB(0x005be82f);
    /* 005be82f: mov dword ptr [ebp + 0x548], eax */ W32((u32)(r_ebp+0x548u), r_eax);
    /* 005be835: jmp 0x5be864 */ goto L_005be864;
L_005be837:; BB(0x005be837);
    /* 005be837: mov dword ptr [ebp + 0x548], 0 */ W32((u32)(r_ebp+0x548u), 0x0u);
    /* 005be841: jmp 0x5be864 */ goto L_005be864;
L_005be843:; BB(0x005be843);
    /* 005be843: jge 0x5be864 */ if ((fS==fO)) goto L_005be864;
L_005be845:; BB(0x005be845);
    /* 005be845: mov eax, dword ptr [ebp + 0x548] */ r_eax = R32((u32)(r_ebp+0x548u));
    /* 005be84b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be84e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005be850: jl 0x5be85a */ if ((fS!=fO)) goto L_005be85a;
L_005be852:; BB(0x005be852);
    /* 005be852: mov dword ptr [ebp + 0x548], eax */ W32((u32)(r_ebp+0x548u), r_eax);
    /* 005be858: jmp 0x5be864 */ goto L_005be864;
L_005be85a:; BB(0x005be85a);
    /* 005be85a: mov dword ptr [ebp + 0x548], 0xff */ W32((u32)(r_ebp+0x548u), 0xffu);
L_005be864:; BB(0x005be864);
    /* 005be864: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 005be86a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005be86d: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005be870: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be872: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be874: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be876: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005be87d: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5be882u); f_007c1160();
    /* 005be882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be884: je 0x5be8ab */ if (fZ) goto L_005be8ab;
L_005be886:; BB(0x005be886);
    /* 005be886: mov eax, dword ptr [ebp + 0x538] */ r_eax = R32((u32)(r_ebp+0x538u));
    /* 005be88c: mov dword ptr [ebp + 0x54c], 1 */ W32((u32)(r_ebp+0x54cu), 0x1u);
    /* 005be896: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be899: mov dword ptr [ebp + 0x538], eax */ W32((u32)(r_ebp+0x538u), r_eax);
    /* 005be89f: mov dword ptr [ebp + 0x550], 0 */ W32((u32)(r_ebp+0x550u), 0x0u);
    /* 005be8a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be8aa: ret  */ FN_RET(0x005be764); r_esp += 4; return;
L_005be8ab:; BB(0x005be8ab);
    /* 005be8ab: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005be8b1: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005be8b4: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005be8b7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be8b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be8bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be8bd: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005be8c4: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5be8c9u); f_007c1160();
    /* 005be8c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be8cb: je 0x5be77c */ if (fZ) goto L_005be77c;
L_005be8d1:; BB(0x005be8d1);
    /* 005be8d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be8d3: call 0x5bce4c */ r_esp -= 4; W32(r_esp, 0x5be8d8u); f_005bce4c();
    /* 005be8d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005be8d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be8da: ret  */ FN_RET(0x005be764); r_esp += 4; return;
}

void f_005be8dc(void) /* sub_5BE8DC */
{
    FN_ENTER(0x005be8dc);
    /* 005be8dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005be8dd: mov edi, ecx */ r_edi = r_ecx;
    /* 005be8df: mov eax, dword ptr [edi + 0x53c] */ r_eax = R32((u32)(r_edi+0x53cu));
    /* 005be8e5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005be8e8: je 0x5be8ec */ if (fZ) goto L_005be8ec;
L_005be8ea:; BB(0x005be8ea);
    /* 005be8ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005be8eb: ret  */ FN_RET(0x005be8dc); r_esp += 4; return;
L_005be8ec:; BB(0x005be8ec);
    /* 005be8ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005be8ee: call 0x5be960 */ r_esp -= 4; W32(r_esp, 0x5be8f3u); f_005be960();
    /* 005be8f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be8f5: je 0x5be8ea */ if (fZ) goto L_005be8ea;
L_005be8f7:; BB(0x005be8f7);
    /* 005be8f7: jle 0x5be91b */ if ((fZ||fS!=fO)) goto L_005be91b;
L_005be8f9:; BB(0x005be8f9);
    /* 005be8f9: mov eax, dword ptr [edi + 0x554] */ r_eax = R32((u32)(r_edi+0x554u));
    /* 005be8ff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be902: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be905: jge 0x5be90f */ if ((fS==fO)) goto L_005be90f;
L_005be907:; BB(0x005be907);
    /* 005be907: mov dword ptr [edi + 0x554], eax */ W32((u32)(r_edi+0x554u), r_eax);
    /* 005be90d: jmp 0x5be93c */ goto L_005be93c;
L_005be90f:; BB(0x005be90f);
    /* 005be90f: mov dword ptr [edi + 0x554], 0 */ W32((u32)(r_edi+0x554u), 0x0u);
    /* 005be919: jmp 0x5be93c */ goto L_005be93c;
L_005be91b:; BB(0x005be91b);
    /* 005be91b: jge 0x5be93c */ if ((fS==fO)) goto L_005be93c;
L_005be91d:; BB(0x005be91d);
    /* 005be91d: mov eax, dword ptr [edi + 0x554] */ r_eax = R32((u32)(r_edi+0x554u));
    /* 005be923: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be926: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005be928: jl 0x5be932 */ if ((fS!=fO)) goto L_005be932;
L_005be92a:; BB(0x005be92a);
    /* 005be92a: mov dword ptr [edi + 0x554], eax */ W32((u32)(r_edi+0x554u), r_eax);
    /* 005be930: jmp 0x5be93c */ goto L_005be93c;
L_005be932:; BB(0x005be932);
    /* 005be932: mov dword ptr [edi + 0x554], 2 */ W32((u32)(r_edi+0x554u), 0x2u);
L_005be93c:; BB(0x005be93c);
    /* 005be93c: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005be93f: mov ecx, dword ptr [edi + 0x554] */ r_ecx = R32((u32)(r_edi+0x554u));
    /* 005be945: and edx, 0xfffffff8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005be948: mov eax, 1 */ r_eax = 0x1u;
    /* 005be94d: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005be94f: mov ecx, edi */ r_ecx = r_edi;
    /* 005be951: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005be953: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 005be956: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5be95bu); f_005bf8b0();
    /* 005be95b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005be95c: ret  */ FN_RET(0x005be8dc); r_esp += 4; return;
}

void f_005be960(void) /* sub_5BE960 */
{
    FN_ENTER(0x005be960);
    /* 005be960: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005be961: mov esi, ecx */ r_esi = r_ecx;
    /* 005be963: mov ecx, esi */ r_ecx = r_esi;
    /* 005be965: call 0x5bdea8 */ r_esp -= 4; W32(r_esp, 0x5be96au); f_005bdea8();
    /* 005be96a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be96c: je 0x5be9c0 */ if (fZ) goto L_005be9c0;
L_005be96e:; BB(0x005be96e);
    /* 005be96e: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 005be974: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005be977: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005be97a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be97c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be97e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be980: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005be987: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5be98cu); f_007c1160();
    /* 005be98c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be98e: je 0x5be997 */ if (fZ) goto L_005be997;
L_005be990:; BB(0x005be990);
    /* 005be990: mov eax, 1 */ r_eax = 0x1u;
    /* 005be995: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be996: ret  */ FN_RET(0x005be960); r_esp += 4; return;
L_005be997:; BB(0x005be997);
    /* 005be997: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 005be99d: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005be9a0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005be9a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be9a5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be9a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be9a9: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005be9b0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5be9b5u); f_007c1160();
    /* 005be9b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be9b7: je 0x5be9c0 */ if (fZ) goto L_005be9c0;
L_005be9b9:; BB(0x005be9b9);
    /* 005be9b9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005be9be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be9bf: ret  */ FN_RET(0x005be960); r_esp += 4; return;
L_005be9c0:; BB(0x005be9c0);
    /* 005be9c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be9c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be9c3: ret  */ FN_RET(0x005be960); r_esp += 4; return;
}

void f_005be9c4(void) /* sub_5BE9C4 */
{
    FN_ENTER(0x005be9c4);
    /* 005be9c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005be9c5: mov esi, ecx */ r_esi = r_ecx;
    /* 005be9c7: mov eax, dword ptr [esi + 0x53c] */ r_eax = R32((u32)(r_esi+0x53cu));
    /* 005be9cd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005be9d0: je 0x5be9d4 */ if (fZ) goto L_005be9d4;
L_005be9d2:; BB(0x005be9d2);
    /* 005be9d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be9d3: ret  */ FN_RET(0x005be9c4); r_esp += 4; return;
L_005be9d4:; BB(0x005be9d4);
    /* 005be9d4: lea eax, [esi + 0x558] */ r_eax = (u32)(r_esi+0x558u);
    /* 005be9da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be9db: mov ecx, esi */ r_ecx = r_esi;
    /* 005be9dd: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5be9e2u); f_005bf7dc();
    /* 005be9e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005be9e4: je 0x5be9d2 */ if (fZ) goto L_005be9d2;
L_005be9e6:; BB(0x005be9e6);
    /* 005be9e6: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 005be9e9: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005be9ee: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005be9f1: mov ecx, esi */ r_ecx = r_esi;
    /* 005be9f3: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5be9f8u); f_005bf8b0();
    /* 005be9f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005be9f9: ret  */ FN_RET(0x005be9c4); r_esp += 4; return;
}

void f_005be9fc(void) /* sub_5BE9FC */
{
    FN_ENTER(0x005be9fc);
    /* 005be9fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005be9fd: mov edi, ecx */ r_edi = r_ecx;
    /* 005be9ff: mov eax, dword ptr [edi + 0x53c] */ r_eax = R32((u32)(r_edi+0x53cu));
    /* 005bea05: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bea08: je 0x5bea0c */ if (fZ) goto L_005bea0c;
L_005bea0a:; BB(0x005bea0a);
    /* 005bea0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea0b: ret  */ FN_RET(0x005be9fc); r_esp += 4; return;
L_005bea0c:; BB(0x005bea0c);
    /* 005bea0c: lea eax, [edi + 0x578] */ r_eax = (u32)(r_edi+0x578u);
    /* 005bea12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bea13: mov ecx, edi */ r_ecx = r_edi;
    /* 005bea15: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bea1au); f_005bf7dc();
    /* 005bea1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bea1c: je 0x5bea0a */ if (fZ) goto L_005bea0a;
L_005bea1e:; BB(0x005bea1e);
    /* 005bea1e: mov ecx, edi */ r_ecx = r_edi;
    /* 005bea20: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bea25u); f_005bf8b0();
    /* 005bea25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea26: ret  */ FN_RET(0x005be9fc); r_esp += 4; return;
}

void f_005bea00(void)
{
    FN_ENTER(0x005bea00);
    /* 005bea00: xchg dword ptr [eax - 0x77d0000], edi */ { u32 x = R32((u32)(r_eax+0xf8830000u)); u32 y = r_edi; W32((u32)(r_eax+0xf8830000u), y); r_edi = x; }
    /* 005bea07: add eax, 0xc35f0274 */ {  u32 a = r_eax; u32 b = 0xc35f0274u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005bea0a:; BB(0x005bea0a);
    /* 005bea0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea0b: ret  */ FN_RET(0x005bea00); r_esp += 4; return;
    /* 005bea0c: lea eax, [edi + 0x578] */ r_eax = (u32)(r_edi+0x578u);
    /* 005bea12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bea13: mov ecx, edi */ r_ecx = r_edi;
    /* 005bea15: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bea1au); f_005bf7dc();
    /* 005bea1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bea1c: je 0x5bea0a */ if (fZ) goto L_005bea0a;
L_005bea1e:; BB(0x005bea1e);
    /* 005bea1e: mov ecx, edi */ r_ecx = r_edi;
    /* 005bea20: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bea25u); f_005bf8b0();
    /* 005bea25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea26: ret  */ FN_RET(0x005bea00); r_esp += 4; return;
}

void f_005bea28(void) /* sub_5BEA28 */
{
    FN_ENTER(0x005bea28);
    /* 005bea28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bea29: mov edi, ecx */ r_edi = r_ecx;
    /* 005bea2b: mov eax, dword ptr [edi + 0x53c] */ r_eax = R32((u32)(r_edi+0x53cu));
    /* 005bea31: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bea34: je 0x5bea38 */ if (fZ) goto L_005bea38;
L_005bea36:; BB(0x005bea36);
    /* 005bea36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea37: ret  */ FN_RET(0x005bea28); r_esp += 4; return;
L_005bea38:; BB(0x005bea38);
    /* 005bea38: lea eax, [edi + 0x5a0] */ r_eax = (u32)(r_edi+0x5a0u);
    /* 005bea3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bea3f: mov ecx, edi */ r_ecx = r_edi;
    /* 005bea41: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bea46u); f_005bf7dc();
    /* 005bea46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bea48: je 0x5bea36 */ if (fZ) goto L_005bea36;
L_005bea4a:; BB(0x005bea4a);
    /* 005bea4a: mov ecx, edi */ r_ecx = r_edi;
    /* 005bea4c: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bea51u); f_005bf8b0();
    /* 005bea51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea52: ret  */ FN_RET(0x005bea28); r_esp += 4; return;
}

void f_005bea54(void) /* sub_5BEA54 */
{
    FN_ENTER(0x005bea54);
    /* 005bea54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bea55: mov edi, ecx */ r_edi = r_ecx;
    /* 005bea57: mov eax, dword ptr [edi + 0x53c] */ r_eax = R32((u32)(r_edi+0x53cu));
    /* 005bea5d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bea60: je 0x5bea64 */ if (fZ) goto L_005bea64;
L_005bea62:; BB(0x005bea62);
    /* 005bea62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea63: ret  */ FN_RET(0x005bea54); r_esp += 4; return;
L_005bea64:; BB(0x005bea64);
    /* 005bea64: lea eax, [edi + 0x5c8] */ r_eax = (u32)(r_edi+0x5c8u);
    /* 005bea6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bea6b: mov ecx, edi */ r_ecx = r_edi;
    /* 005bea6d: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bea72u); f_005bf7dc();
    /* 005bea72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bea74: je 0x5bea62 */ if (fZ) goto L_005bea62;
L_005bea76:; BB(0x005bea76);
    /* 005bea76: mov ecx, edi */ r_ecx = r_edi;
    /* 005bea78: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bea7du); f_005bf8b0();
    /* 005bea7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea7e: ret  */ FN_RET(0x005bea54); r_esp += 4; return;
}

void f_005bea80(void) /* sub_5BEA80 */
{
    FN_ENTER(0x005bea80);
    /* 005bea80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bea81: mov edi, ecx */ r_edi = r_ecx;
    /* 005bea83: mov eax, dword ptr [edi + 0x53c] */ r_eax = R32((u32)(r_edi+0x53cu));
    /* 005bea89: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bea8c: je 0x5bea90 */ if (fZ) goto L_005bea90;
L_005bea8e:; BB(0x005bea8e);
    /* 005bea8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bea8f: ret  */ FN_RET(0x005bea80); r_esp += 4; return;
L_005bea90:; BB(0x005bea90);
    /* 005bea90: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bea96: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005bea99: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bea9c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bea9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beaa0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beaa2: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005beaa9: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x5beaaeu); f_007c1100();
    /* 005beaae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005beab0: je 0x5bea8e */ if (fZ) goto L_005bea8e;
L_005beab2:; BB(0x005beab2);
    /* 005beab2: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 005beab8: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005beabb: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005beabe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beac0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beac2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beac4: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005beacb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bead0u); f_007c1160();
    /* 005bead0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bead2: je 0x5bea8e */ if (fZ) goto L_005bea8e;
L_005bead4:; BB(0x005bead4);
    /* 005bead4: mov eax, dword ptr [edi + 0x5f0] */ r_eax = R32((u32)(r_edi+0x5f0u));
    /* 005beada: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005beadd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005beae0: jge 0x5beaea */ if ((fS==fO)) goto L_005beaea;
L_005beae2:; BB(0x005beae2);
    /* 005beae2: mov dword ptr [edi + 0x5f0], eax */ W32((u32)(r_edi+0x5f0u), r_eax);
    /* 005beae8: jmp 0x5beaf4 */ goto L_005beaf4;
L_005beaea:; BB(0x005beaea);
    /* 005beaea: mov dword ptr [edi + 0x5f0], 0 */ W32((u32)(r_edi+0x5f0u), 0x0u);
L_005beaf4:; BB(0x005beaf4);
    /* 005beaf4: push dword ptr [edi + 0x5f0] */ { u32 v = R32((u32)(r_edi+0x5f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005beafa: mov ecx, edi */ r_ecx = r_edi;
    /* 005beafc: call 0x5beb04 */ r_esp -= 4; W32(r_esp, 0x5beb01u); f_005beb04();
    /* 005beb01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005beb02: ret  */ FN_RET(0x005bea80); r_esp += 4; return;
}

void f_005beb04(void) /* sub_5BEB04 */
{
    FN_ENTER(0x005beb04);
    /* 005beb04: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005beb08: mov dword ptr [ecx + 0x5f0], edx */ W32((u32)(r_ecx+0x5f0u), r_edx);
    /* 005beb0e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005beb11: mov edx, dword ptr [eax*8 + 0x9c1fa4] */ r_edx = R32((u32)(r_eax*8+0x9c1fa4u));
    /* 005beb18: mov dword ptr [ecx + 0x5f4], edx */ W32((u32)(r_ecx+0x5f4u), r_edx);
    /* 005beb1e: mov edx, dword ptr [eax*8 + 0x9c1fa8] */ r_edx = R32((u32)(r_eax*8+0x9c1fa8u));
    /* 005beb25: mov dword ptr [ecx + 0x5f8], edx */ W32((u32)(r_ecx+0x5f8u), r_edx);
    /* 005beb2b: mov edx, dword ptr [eax*8 + 0x9c1fac] */ r_edx = R32((u32)(r_eax*8+0x9c1facu));
    /* 005beb32: mov eax, dword ptr [eax*8 + 0x9c1fb0] */ r_eax = R32((u32)(r_eax*8+0x9c1fb0u));
    /* 005beb39: mov dword ptr [ecx + 0x5fc], edx */ W32((u32)(r_ecx+0x5fcu), r_edx);
    /* 005beb3f: mov dword ptr [ecx + 0x600], eax */ W32((u32)(r_ecx+0x600u), r_eax);
    /* 005beb45: ret 4 */ FN_RET(0x005beb04); r_esp += 8; return;
}

void f_005beb48(void) /* sub_5BEB48 */
{
    FN_ENTER(0x005beb48);
    /* 005beb48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005beb49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005beb4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beb4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005beb4c: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005beb4f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005beb51: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005beb57: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005beb5a: jne 0x5bf331 */ if (!fZ) goto L_005bf331;
L_005beb60:; BB(0x005beb60);
    /* 005beb60: mov eax, dword ptr [ebx + 0x538] */ r_eax = R32((u32)(r_ebx+0x538u));
    /* 005beb66: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005beb68: jne 0x5beb7e */ if (!fZ) goto L_005beb7e;
L_005beb6a:; BB(0x005beb6a);
    /* 005beb6a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005beb6d: mov dword ptr [ebx + 0x538], eax */ W32((u32)(r_ebx+0x538u), r_eax);
    /* 005beb73: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
    /* 005beb79: jmp 0x5bec52 */ goto L_005bec52;
L_005beb7e:; BB(0x005beb7e);
    /* 005beb7e: push dword ptr [0xa8d7b4] */ { u32 v = R32((u32)(0xa8d7b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005beb84: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005beb87: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005beb8a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beb8c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beb8e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beb90: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005beb97: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5beb9cu); f_007c1160();
    /* 005beb9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005beb9e: jne 0x5bebaf */ if (!fZ) goto L_005bebaf;
L_005beba0:; BB(0x005beba0);
    /* 005beba0: mov eax, dword ptr [ebx + 0x860] */ r_eax = R32((u32)(r_ebx+0x860u));
    /* 005beba6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005beba9: jge 0x5bebaf */ if ((fS==fO)) goto L_005bebaf;
L_005bebab:; BB(0x005bebab);
    /* 005bebab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bebad: jmp 0x5bebb4 */ goto L_005bebb4;
L_005bebaf:; BB(0x005bebaf);
    /* 005bebaf: mov eax, 1 */ r_eax = 0x1u;
L_005bebb4:; BB(0x005bebb4);
    /* 005bebb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bebb6: je 0x5bebf9 */ if (fZ) goto L_005bebf9;
L_005bebb8:; BB(0x005bebb8);
    /* 005bebb8: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
    /* 005bebbe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bebc1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bebc4: jge 0x5bebd1 */ if ((fS==fO)) goto L_005bebd1;
L_005bebc6:; BB(0x005bebc6);
    /* 005bebc6: mov dword ptr [ebx + 0x788], eax */ W32((u32)(r_ebx+0x788u), r_eax);
    /* 005bebcc: jmp 0x5bec52 */ goto L_005bec52;
L_005bebd1:; BB(0x005bebd1);
    /* 005bebd1: mov eax, dword ptr [ebx + 0x538] */ r_eax = R32((u32)(r_ebx+0x538u));
    /* 005bebd7: mov dword ptr [ebx + 0x788], 4 */ W32((u32)(r_ebx+0x788u), 0x4u);
    /* 005bebe1: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bebe4: mov dword ptr [ebx + 0x538], eax */ W32((u32)(r_ebx+0x538u), r_eax);
    /* 005bebea: add dword ptr [ebx + 0x53c], 1 */ { u32 ad = (u32)(r_ebx+0x53cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bebf1: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bebf4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bebf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bebf6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bebf7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bebf8: ret  */ FN_RET(0x005beb48); r_esp += 4; return;
L_005bebf9:; BB(0x005bebf9);
    /* 005bebf9: push dword ptr [0xa8d7b0] */ { u32 v = R32((u32)(0xa8d7b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bebff: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005bec02: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bec05: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bec07: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bec09: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bec0b: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bec12: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bec17u); f_007c1160();
    /* 005bec17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec19: jne 0x5bec2a */ if (!fZ) goto L_005bec2a;
L_005bec1b:; BB(0x005bec1b);
    /* 005bec1b: mov eax, dword ptr [ebx + 0x85c] */ r_eax = R32((u32)(r_ebx+0x85cu));
    /* 005bec21: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bec24: jge 0x5bec2a */ if ((fS==fO)) goto L_005bec2a;
L_005bec26:; BB(0x005bec26);
    /* 005bec26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bec28: jmp 0x5bec2f */ goto L_005bec2f;
L_005bec2a:; BB(0x005bec2a);
    /* 005bec2a: mov eax, 1 */ r_eax = 0x1u;
L_005bec2f:; BB(0x005bec2f);
    /* 005bec2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec31: je 0x5bec4c */ if (fZ) goto L_005bec4c;
L_005bec33:; BB(0x005bec33);
    /* 005bec33: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
    /* 005bec39: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bec3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bec3e: jl 0x5bf7b1 */ if ((fS!=fO)) goto L_005bf7b1;
L_005bec44:; BB(0x005bec44);
    /* 005bec44: mov dword ptr [ebx + 0x788], eax */ W32((u32)(r_ebx+0x788u), r_eax);
    /* 005bec4a: jmp 0x5bec52 */ goto L_005bec52;
L_005bec4c:; BB(0x005bec4c);
    /* 005bec4c: mov eax, dword ptr [ebx + 0x788] */ r_eax = R32((u32)(r_ebx+0x788u));
L_005bec52:; BB(0x005bec52);
    /* 005bec52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec54: je 0x5bf55b */ if (fZ) goto L_005bf55b;
L_005bec5a:; BB(0x005bec5a);
    /* 005bec5a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec5d: je 0x5bf339 */ if (fZ) goto L_005bf339;
L_005bec63:; BB(0x005bec63);
    /* 005bec63: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec66: je 0x5bf118 */ if (fZ) goto L_005bf118;
L_005bec6c:; BB(0x005bec6c);
    /* 005bec6c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec6f: jne 0x5beebf */ if (!fZ) goto L_005beebf;
L_005bec75:; BB(0x005bec75);
    /* 005bec75: lea eax, [ebx + 0x80c] */ r_eax = (u32)(r_ebx+0x80cu);
    /* 005bec7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bec7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bec7e: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bec83u); f_005bf7dc();
    /* 005bec83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bec85: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bec8b:; BB(0x005bec8b);
    /* 005bec8b: mov eax, dword ptr [ebx + 0x78c] */ r_eax = R32((u32)(r_ebx+0x78cu));
    /* 005bec91: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bec93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bec95: mov esi, 0xff */ r_esi = 0xffu;
    /* 005bec9a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bec9c: jg 0x5beca0 */ if ((!fZ&&fS==fO)) goto L_005beca0;
L_005bec9e:; BB(0x005bec9e);
    /* 005bec9e: mov eax, ebp */ r_eax = r_ebp;
L_005beca0:; BB(0x005beca0);
    /* 005beca0: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005beca5: jl 0x5beca9 */ if ((fS!=fO)) goto L_005beca9;
L_005beca7:; BB(0x005beca7);
    /* 005beca7: mov eax, esi */ r_eax = r_esi;
L_005beca9:; BB(0x005beca9);
    /* 005beca9: mov dword ptr [ebx + 0x78c], eax */ W32((u32)(r_ebx+0x78cu), r_eax);
    /* 005becaf: mov byte ptr [ebx + 0x132], al */ W8((u32)(r_ebx+0x132u), (u8)r_eax);
    /* 005becb5: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5becbau); f_005bf8b0();
    /* 005becba: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005becc0: lea ebp, [ebx + 0xf8] */ r_ebp = (u32)(r_ebx+0xf8u);
    /* 005becc6: lea edx, [ebx + 0x138] */ r_edx = (u32)(r_ebx+0x138u);
    /* 005beccc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005becce: jne 0x5beead */ if (!fZ) goto L_005beead;
L_005becd4:; BB(0x005becd4);
    /* 005becd4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005becd6: jne 0x5bedc1 */ if (!fZ) goto L_005bedc1;
L_005becdc:; BB(0x005becdc);
    /* 005becdc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005becde: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bece4:; BB(0x005bece4);
    /* 005bece4: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005becea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005becec: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005becee: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005becf0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005becf2: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005becf8:; BB(0x005becf8);
    /* 005becf8: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005becfa: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005becfd: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bed00: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bed03: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bed06: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bed08: ja 0x5becf8 */ if ((!fC&&!fZ)) goto L_005becf8;
L_005bed0a:; BB(0x005bed0a);
    /* 005bed0a: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005bed0f: fld dword ptr [ebx + 0x120] */ FPUSH(R_F32((u32)(r_ebx+0x120u)));
    /* 005bed15: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bed1b: fld dword ptr [ebx + 0x118] */ FPUSH(R_F32((u32)(r_ebx+0x118u)));
    /* 005bed21: mov ebp, dword ptr [ebx + 0x118] */ r_ebp = R32((u32)(r_ebx+0x118u));
    /* 005bed27: movzx ecx, byte ptr [ebx + 0x133] */ r_ecx = (u32)R8((u32)(r_ebx+0x133u));
    /* 005bed2e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bed32: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005bed36: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 005bed3a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bed3c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bed3c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bed3c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bed3e: movzx edx, byte ptr [ebx + 0x132] */ r_edx = (u32)R8((u32)(r_ebx+0x132u));
    /* 005bed45: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005bed49: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005bed4d: mov edi, 0x7f */ r_edi = 0x7fu;
    /* 005bed52: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bed54: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 005bed58: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005bed5a:; BB(0x005bed5a);
    /* 005bed5a: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 005bed5e: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bed61: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bed67: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bed6cu); f_0082dcbc();
    /* 005bed6c: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bed72: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 005bed76: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 005bed7a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005bed7e: fstp dword ptr [ebx + edi*4 + 0x138] */ W_F32((u32)(r_ebx+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005bed85: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bed88: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bed8b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bed8d: jl 0x5bed96 */ if ((fS!=fO)) goto L_005bed96;
L_005bed8f:; BB(0x005bed8f);
    /* 005bed8f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bed91: mov ebp, 1 */ r_ebp = 0x1u;
L_005bed96:; BB(0x005bed96);
    /* 005bed96: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005bed9a: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
L_005bed9e:; BB(0x005bed9e);
    /* 005bed9e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005beda0: jl 0x5bf331 */ if ((fS!=fO)) goto L_005bf331;
L_005beda6:; BB(0x005beda6);
    /* 005beda6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005beda8: je 0x5bed5a */ if (fZ) goto L_005bed5a;
L_005bedaa:; BB(0x005bedaa);
    /* 005bedaa: mov dword ptr [ebx + edi*4 + 0x138], edx */ W32((u32)(r_ebx+r_edi*4+0x138u), r_edx);
    /* 005bedb1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bedb4: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bedb7: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bedb9: jl 0x5bed9e */ if ((fS!=fO)) goto L_005bed9e;
L_005bedbb:; BB(0x005bedbb);
    /* 005bedbb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bedbd: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bedbf: jmp 0x5bed9e */ goto L_005bed9e;
L_005bedc1:; BB(0x005bedc1);
    /* 005bedc1: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bedc7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bedc9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bedcb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bedcd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bedcf: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bedd5:; BB(0x005bedd5);
    /* 005bedd5: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bedd7: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bedda: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005beddd: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bede0: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bede3: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bede5: ja 0x5bedd5 */ if ((!fC&&!fZ)) goto L_005bedd5;
L_005bede7:; BB(0x005bede7);
    /* 005bede7: mov eax, dword ptr [ebx + 0x10c] */ r_eax = R32((u32)(r_ebx+0x10cu));
    /* 005beded: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bedef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005bedf1: jbe 0x5bf331 */ if ((fC||fZ)) goto L_005bf331;
L_005bedf7:; BB(0x005bedf7);
    /* 005bedf7: mov ecx, ebx */ r_ecx = r_ebx;
L_005bedf9:; BB(0x005bedf9);
    /* 005bedf9: fld dword ptr [ecx + edx*8 + 0x118] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0x118u)));
    /* 005bee00: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bee06: movzx ebx, byte ptr [ecx + edx*2 + 0x132] */ r_ebx = (u32)R8((u32)(r_ecx+r_edx*2+0x132u));
    /* 005bee0e: movzx eax, byte ptr [ecx + edx*2 + 0x133] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0x133u));
    /* 005bee16: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bee1a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005bee1d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005bee20: fdiv dword ptr [0x92b830] */ ST(0) = ST(0) / R_F32((u32)(0x92b830u));
    /* 005bee26: fmul dword ptr [0x92b834] */ ST(0) = ST(0) * R_F32((u32)(0x92b834u));
    /* 005bee2c: fdiv dword ptr [0x92b82c] */ ST(0) = ST(0) / R_F32((u32)(0x92b82cu));
    /* 005bee32: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005bee36: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bee3a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bee3f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bee44: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bee48: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bee4c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bee50: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bee54: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005bee58: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005bee5b: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bee61: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 005bee65: lea esi, [ecx + 0x338] */ r_esi = (u32)(r_ecx+0x338u);
    /* 005bee6b: lea ebp, [ecx + 0x13c] */ r_ebp = (u32)(r_ecx+0x13cu);
L_005bee71:; BB(0x005bee71);
    /* 005bee71: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bee73: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bee78u); f_0082dcbc();
    /* 005bee78: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bee7e: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005bee82: fadd dword ptr [esi - 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffffcu));
    /* 005bee85: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 005bee88: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bee8a: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bee8d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bee8f: jbe 0x5bee71 */ if ((fC||fZ)) goto L_005bee71;
L_005bee91:; BB(0x005bee91);
    /* 005bee91: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005bee95: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 005bee99: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bee9c: cmp edx, dword ptr [ecx + 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005beea2: jb 0x5bedf9 */ if (fC) goto L_005bedf9;
L_005beea8:; BB(0x005beea8);
    /* 005beea8: jmp 0x5bf331 */ goto L_005bf331;
L_005beead:; BB(0x005beead);
    /* 005beead: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005beeae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beeaf: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5beeb4u); f_005bcc88();
    /* 005beeb4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005beeb7: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005beeba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005beebb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005beebc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005beebd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005beebe: ret  */ FN_RET(0x005beb48); r_esp += 4; return;
L_005beebf:; BB(0x005beebf);
    /* 005beebf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005beec2: jne 0x5bf331 */ if (!fZ) goto L_005bf331;
L_005beec8:; BB(0x005beec8);
    /* 005beec8: lea eax, [ebx + 0x82c] */ r_eax = (u32)(r_ebx+0x82cu);
    /* 005beece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005beecf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005beed1: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5beed6u); f_005bf7dc();
    /* 005beed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005beed8: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005beede:; BB(0x005beede);
    /* 005beede: mov eax, dword ptr [ebx + 0x790] */ r_eax = R32((u32)(r_ebx+0x790u));
    /* 005beee4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005beee6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005beee8: mov esi, 0xff */ r_esi = 0xffu;
    /* 005beeed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005beeef: jg 0x5beef3 */ if ((!fZ&&fS==fO)) goto L_005beef3;
L_005beef1:; BB(0x005beef1);
    /* 005beef1: mov eax, ebp */ r_eax = r_ebp;
L_005beef3:; BB(0x005beef3);
    /* 005beef3: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005beef8: jl 0x5beefc */ if ((fS!=fO)) goto L_005beefc;
L_005beefa:; BB(0x005beefa);
    /* 005beefa: mov eax, esi */ r_eax = r_esi;
L_005beefc:; BB(0x005beefc);
    /* 005beefc: mov dword ptr [ebx + 0x790], eax */ W32((u32)(r_ebx+0x790u), r_eax);
    /* 005bef02: mov byte ptr [ebx + 0x133], al */ W8((u32)(r_ebx+0x133u), (u8)r_eax);
    /* 005bef08: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bef0du); f_005bf8b0();
    /* 005bef0d: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005bef13: lea ebp, [ebx + 0xf8] */ r_ebp = (u32)(r_ebx+0xf8u);
    /* 005bef19: lea edx, [ebx + 0x138] */ r_edx = (u32)(r_ebx+0x138u);
    /* 005bef1f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bef21: jne 0x5bf106 */ if (!fZ) goto L_005bf106;
L_005bef27:; BB(0x005bef27);
    /* 005bef27: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bef29: jne 0x5bf018 */ if (!fZ) goto L_005bf018;
L_005bef2f:; BB(0x005bef2f);
    /* 005bef2f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bef31: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bef37:; BB(0x005bef37);
    /* 005bef37: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bef3d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bef3f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bef41: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bef43: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bef45: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bef4b:; BB(0x005bef4b);
    /* 005bef4b: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bef4d: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bef50: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bef53: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bef56: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bef59: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bef5b: ja 0x5bef4b */ if ((!fC&&!fZ)) goto L_005bef4b;
L_005bef5d:; BB(0x005bef5d);
    /* 005bef5d: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005bef62: fld dword ptr [ebx + 0x120] */ FPUSH(R_F32((u32)(r_ebx+0x120u)));
    /* 005bef68: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bef6e: fld dword ptr [ebx + 0x118] */ FPUSH(R_F32((u32)(r_ebx+0x118u)));
    /* 005bef74: mov edi, dword ptr [ebx + 0x118] */ r_edi = R32((u32)(r_ebx+0x118u));
    /* 005bef7a: movzx ecx, byte ptr [ebx + 0x133] */ r_ecx = (u32)R8((u32)(r_ebx+0x133u));
    /* 005bef81: movzx ebp, byte ptr [ebx + 0x132] */ r_ebp = (u32)R8((u32)(r_ebx+0x132u));
    /* 005bef88: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bef8c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005bef90: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bef92: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bef92, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bef92, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bef94: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 005bef98: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005bef9c: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 005befa0: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 005befa4: mov edx, 0x7f */ r_edx = 0x7fu;
    /* 005befa9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005befab: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005befad: mov edi, ebx */ r_edi = r_ebx;
    /* 005befaf: mov ebx, edx */ r_ebx = r_edx;
L_005befb1:; BB(0x005befb1);
    /* 005befb1: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 005befb5: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005befb8: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005befbe: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5befc3u); f_0082dcbc();
    /* 005befc3: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005befc9: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 005befcd: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 005befd1: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005befd5: fstp dword ptr [edi + ebx*4 + 0x138] */ W_F32((u32)(r_edi+r_ebx*4+0x138u), ST(0)); FPOP();
    /* 005befdc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005befdf: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005befe2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005befe4: jl 0x5befed */ if ((fS!=fO)) goto L_005befed;
L_005befe6:; BB(0x005befe6);
    /* 005befe6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005befe8: mov ebp, 1 */ r_ebp = 0x1u;
L_005befed:; BB(0x005befed);
    /* 005befed: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005beff1: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
L_005beff5:; BB(0x005beff5);
    /* 005beff5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005beff7: jl 0x5bf331 */ if ((fS!=fO)) goto L_005bf331;
L_005beffd:; BB(0x005beffd);
    /* 005beffd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005befff: je 0x5befb1 */ if (fZ) goto L_005befb1;
L_005bf001:; BB(0x005bf001);
    /* 005bf001: mov dword ptr [edi + ebx*4 + 0x138], edx */ W32((u32)(r_edi+r_ebx*4+0x138u), r_edx);
    /* 005bf008: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf00b: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf00e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf010: jl 0x5beff5 */ if ((fS!=fO)) goto L_005beff5;
L_005bf012:; BB(0x005bf012);
    /* 005bf012: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf014: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf016: jmp 0x5beff5 */ goto L_005beff5;
L_005bf018:; BB(0x005bf018);
    /* 005bf018: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bf01e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf020: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf022: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf024: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf026: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bf02c:; BB(0x005bf02c);
    /* 005bf02c: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bf02e: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bf031: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bf034: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bf037: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf03a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf03c: ja 0x5bf02c */ if ((!fC&&!fZ)) goto L_005bf02c;
L_005bf03e:; BB(0x005bf03e);
    /* 005bf03e: mov eax, dword ptr [ebx + 0x10c] */ r_eax = R32((u32)(r_ebx+0x10cu));
    /* 005bf044: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005bf048: jbe 0x5bf331 */ if ((fC||fZ)) goto L_005bf331;
L_005bf04e:; BB(0x005bf04e);
    /* 005bf04e: mov ecx, ebx */ r_ecx = r_ebx;
L_005bf050:; BB(0x005bf050);
    /* 005bf050: fld dword ptr [ecx + edx*8 + 0x118] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0x118u)));
    /* 005bf057: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bf05d: movzx ebx, byte ptr [ecx + edx*2 + 0x132] */ r_ebx = (u32)R8((u32)(r_ecx+r_edx*2+0x132u));
    /* 005bf065: movzx eax, byte ptr [ecx + edx*2 + 0x133] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0x133u));
    /* 005bf06d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bf071: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005bf075: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005bf079: fdiv dword ptr [0x92b830] */ ST(0) = ST(0) / R_F32((u32)(0x92b830u));
    /* 005bf07f: fmul dword ptr [0x92b834] */ ST(0) = ST(0) * R_F32((u32)(0x92b834u));
    /* 005bf085: fdiv dword ptr [0x92b82c] */ ST(0) = ST(0) / R_F32((u32)(0x92b82cu));
    /* 005bf08b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005bf08f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bf093: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bf098: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bf09d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bf0a1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bf0a5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bf0a9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bf0ad: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005bf0b1: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005bf0b4: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf0ba: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 005bf0be: lea esi, [ecx + 0x338] */ r_esi = (u32)(r_ecx+0x338u);
    /* 005bf0c4: lea ebp, [ecx + 0x13c] */ r_ebp = (u32)(r_ecx+0x13cu);
L_005bf0ca:; BB(0x005bf0ca);
    /* 005bf0ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf0cc: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bf0d1u); f_0082dcbc();
    /* 005bf0d1: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bf0d7: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005bf0db: fadd dword ptr [esi - 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffffcu));
    /* 005bf0de: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 005bf0e1: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf0e3: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf0e6: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf0e8: jbe 0x5bf0ca */ if ((fC||fZ)) goto L_005bf0ca;
L_005bf0ea:; BB(0x005bf0ea);
    /* 005bf0ea: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005bf0ee: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 005bf0f2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf0f5: cmp edx, dword ptr [ecx + 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bf0fb: jb 0x5bf050 */ if (fC) goto L_005bf050;
L_005bf101:; BB(0x005bf101);
    /* 005bf101: jmp 0x5bf331 */ goto L_005bf331;
L_005bf106:; BB(0x005bf106);
    /* 005bf106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf107: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf108: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5bf10du); f_005bcc88();
    /* 005bf10d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf110: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bf113: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bf114: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf115: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bf116: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf117: ret  */ FN_RET(0x005beb48); r_esp += 4; return;
L_005bf118:; BB(0x005bf118);
    /* 005bf118: lea eax, [ebx + 0x7e4] */ r_eax = (u32)(r_ebx+0x7e4u);
    /* 005bf11e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf11f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf121: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bf126u); f_005bf7dc();
    /* 005bf126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf128: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bf12e:; BB(0x005bf12e);
    /* 005bf12e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf130: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bf135u); f_005bf8b0();
    /* 005bf135: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005bf13b: lea ebp, [ebx + 0xf8] */ r_ebp = (u32)(r_ebx+0xf8u);
    /* 005bf141: lea edx, [ebx + 0x138] */ r_edx = (u32)(r_ebx+0x138u);
    /* 005bf147: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf149: jne 0x5bf327 */ if (!fZ) goto L_005bf327;
L_005bf14f:; BB(0x005bf14f);
    /* 005bf14f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf151: jne 0x5bf23c */ if (!fZ) goto L_005bf23c;
L_005bf157:; BB(0x005bf157);
    /* 005bf157: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf159: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bf15f:; BB(0x005bf15f);
    /* 005bf15f: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bf165: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf167: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf169: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf16b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf16d: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bf173:; BB(0x005bf173);
    /* 005bf173: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bf175: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bf178: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bf17b: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bf17e: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf181: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf183: ja 0x5bf173 */ if ((!fC&&!fZ)) goto L_005bf173;
L_005bf185:; BB(0x005bf185);
    /* 005bf185: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005bf18a: fld dword ptr [ebx + 0x120] */ FPUSH(R_F32((u32)(r_ebx+0x120u)));
    /* 005bf190: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bf196: fld dword ptr [ebx + 0x118] */ FPUSH(R_F32((u32)(r_ebx+0x118u)));
    /* 005bf19c: mov ebp, dword ptr [ebx + 0x118] */ r_ebp = R32((u32)(r_ebx+0x118u));
    /* 005bf1a2: movzx esi, byte ptr [ebx + 0x133] */ r_esi = (u32)R8((u32)(r_ebx+0x133u));
    /* 005bf1a9: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005bf1ad: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bf1b1: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 005bf1b5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf1b7: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x005bf1b7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bf1b7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bf1b9: movzx edx, byte ptr [ebx + 0x132] */ r_edx = (u32)R8((u32)(r_ebx+0x132u));
    /* 005bf1c0: mov edi, 0x7f */ r_edi = 0x7fu;
    /* 005bf1c5: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 005bf1c9: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005bf1cd: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005bf1d1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf1d3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005bf1d5:; BB(0x005bf1d5);
    /* 005bf1d5: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 005bf1d9: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf1dc: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf1e2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bf1e7u); f_0082dcbc();
    /* 005bf1e7: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bf1ed: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005bf1f1: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 005bf1f5: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005bf1f9: fstp dword ptr [ebx + edi*4 + 0x138] */ W_F32((u32)(r_ebx+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005bf200: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf203: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf206: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf208: jl 0x5bf211 */ if ((fS!=fO)) goto L_005bf211;
L_005bf20a:; BB(0x005bf20a);
    /* 005bf20a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf20c: mov ebp, 1 */ r_ebp = 0x1u;
L_005bf211:; BB(0x005bf211);
    /* 005bf211: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005bf215: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
L_005bf219:; BB(0x005bf219);
    /* 005bf219: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bf21b: jl 0x5bf331 */ if ((fS!=fO)) goto L_005bf331;
L_005bf221:; BB(0x005bf221);
    /* 005bf221: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf223: je 0x5bf1d5 */ if (fZ) goto L_005bf1d5;
L_005bf225:; BB(0x005bf225);
    /* 005bf225: mov dword ptr [ebx + edi*4 + 0x138], edx */ W32((u32)(r_ebx+r_edi*4+0x138u), r_edx);
    /* 005bf22c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf22f: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf232: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf234: jl 0x5bf219 */ if ((fS!=fO)) goto L_005bf219;
L_005bf236:; BB(0x005bf236);
    /* 005bf236: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf238: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf23a: jmp 0x5bf219 */ goto L_005bf219;
L_005bf23c:; BB(0x005bf23c);
    /* 005bf23c: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bf242: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf244: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf246: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf248: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf24a: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bf250:; BB(0x005bf250);
    /* 005bf250: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bf252: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bf255: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bf258: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bf25b: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf25e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf260: ja 0x5bf250 */ if ((!fC&&!fZ)) goto L_005bf250;
L_005bf262:; BB(0x005bf262);
    /* 005bf262: mov eax, dword ptr [ebx + 0x10c] */ r_eax = R32((u32)(r_ebx+0x10cu));
    /* 005bf268: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf26a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005bf26c: jbe 0x5bf331 */ if ((fC||fZ)) goto L_005bf331;
L_005bf272:; BB(0x005bf272);
    /* 005bf272: mov ecx, ebx */ r_ecx = r_ebx;
L_005bf274:; BB(0x005bf274);
    /* 005bf274: fld dword ptr [ecx + edx*8 + 0x118] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0x118u)));
    /* 005bf27b: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bf281: movzx ebx, byte ptr [ecx + edx*2 + 0x132] */ r_ebx = (u32)R8((u32)(r_ecx+r_edx*2+0x132u));
    /* 005bf289: movzx eax, byte ptr [ecx + edx*2 + 0x133] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0x133u));
    /* 005bf291: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bf295: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005bf299: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005bf29d: fdiv dword ptr [0x92b830] */ ST(0) = ST(0) / R_F32((u32)(0x92b830u));
    /* 005bf2a3: fmul dword ptr [0x92b834] */ ST(0) = ST(0) * R_F32((u32)(0x92b834u));
    /* 005bf2a9: fdiv dword ptr [0x92b82c] */ ST(0) = ST(0) / R_F32((u32)(0x92b82cu));
    /* 005bf2af: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005bf2b3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bf2b7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bf2bc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bf2c1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bf2c5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bf2c9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bf2cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bf2d1: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005bf2d5: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005bf2d8: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf2de: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 005bf2e2: lea esi, [ecx + 0x338] */ r_esi = (u32)(r_ecx+0x338u);
    /* 005bf2e8: lea ebp, [ecx + 0x13c] */ r_ebp = (u32)(r_ecx+0x13cu);
L_005bf2ee:; BB(0x005bf2ee);
    /* 005bf2ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf2f0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bf2f5u); f_0082dcbc();
    /* 005bf2f5: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bf2fb: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005bf2ff: fadd dword ptr [esi - 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffffcu));
    /* 005bf302: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 005bf305: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf307: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf30a: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf30c: jbe 0x5bf2ee */ if ((fC||fZ)) goto L_005bf2ee;
L_005bf30e:; BB(0x005bf30e);
    /* 005bf30e: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005bf312: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 005bf316: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf319: cmp edx, dword ptr [ecx + 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bf31f: jb 0x5bf274 */ if (fC) goto L_005bf274;
L_005bf325:; BB(0x005bf325);
    /* 005bf325: jmp 0x5bf331 */ goto L_005bf331;
L_005bf327:; BB(0x005bf327);
    /* 005bf327: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf328: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf329: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5bf32eu); f_005bcc88();
    /* 005bf32e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bf331:; BB(0x005bf331);
    /* 005bf331: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bf334: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bf335: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf336: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bf337: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf338: ret  */ FN_RET(0x005beb48); r_esp += 4; return;
L_005bf339:; BB(0x005bf339);
    /* 005bf339: lea eax, [ebx + 0x7bc] */ r_eax = (u32)(r_ebx+0x7bcu);
    /* 005bf33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf342: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bf347u); f_005bf7dc();
    /* 005bf347: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf349: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bf34b:; BB(0x005bf34b);
    /* 005bf34b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf34d: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bf352u); f_005bf8b0();
    /* 005bf352: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005bf358: lea ebp, [ebx + 0xf8] */ r_ebp = (u32)(r_ebx+0xf8u);
    /* 005bf35e: lea edx, [ebx + 0x138] */ r_edx = (u32)(r_ebx+0x138u);
    /* 005bf364: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf366: jne 0x5bf549 */ if (!fZ) goto L_005bf549;
L_005bf36c:; BB(0x005bf36c);
    /* 005bf36c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf36e: jne 0x5bf45b */ if (!fZ) goto L_005bf45b;
L_005bf374:; BB(0x005bf374);
    /* 005bf374: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf376: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bf378:; BB(0x005bf378);
    /* 005bf378: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bf37e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf380: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf382: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf384: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf386: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bf38c:; BB(0x005bf38c);
    /* 005bf38c: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bf38e: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bf391: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bf394: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bf397: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf39a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf39c: ja 0x5bf38c */ if ((!fC&&!fZ)) goto L_005bf38c;
L_005bf39e:; BB(0x005bf39e);
    /* 005bf39e: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005bf3a3: fld dword ptr [ebx + 0x120] */ FPUSH(R_F32((u32)(r_ebx+0x120u)));
    /* 005bf3a9: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bf3af: fld dword ptr [ebx + 0x118] */ FPUSH(R_F32((u32)(r_ebx+0x118u)));
    /* 005bf3b5: mov edi, dword ptr [ebx + 0x118] */ r_edi = R32((u32)(r_ebx+0x118u));
    /* 005bf3bb: movzx ecx, byte ptr [ebx + 0x133] */ r_ecx = (u32)R8((u32)(r_ebx+0x133u));
    /* 005bf3c2: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bf3c6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005bf3ca: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 005bf3ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf3d0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bf3d0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bf3d0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bf3d2: movzx edx, byte ptr [ebx + 0x132] */ r_edx = (u32)R8((u32)(r_ebx+0x132u));
    /* 005bf3d9: mov esi, 0x7f */ r_esi = 0x7fu;
    /* 005bf3de: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005bf3e2: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005bf3e6: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 005bf3ea: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf3ec: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 005bf3f0: mov edi, ebp */ r_edi = r_ebp;
    /* 005bf3f2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005bf3f4:; BB(0x005bf3f4);
    /* 005bf3f4: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 005bf3f8: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf3fb: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf401: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bf406u); f_0082dcbc();
    /* 005bf406: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bf40c: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 005bf410: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 005bf414: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005bf418: fstp dword ptr [ebx + esi*4 + 0x138] */ W_F32((u32)(r_ebx+r_esi*4+0x138u), ST(0)); FPOP();
    /* 005bf41f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf422: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf425: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf427: jl 0x5bf430 */ if ((fS!=fO)) goto L_005bf430;
L_005bf429:; BB(0x005bf429);
    /* 005bf429: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf42b: mov edi, 1 */ r_edi = 0x1u;
L_005bf430:; BB(0x005bf430);
    /* 005bf430: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005bf434: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
L_005bf438:; BB(0x005bf438);
    /* 005bf438: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bf43a: jl 0x5bf331 */ if ((fS!=fO)) goto L_005bf331;
L_005bf440:; BB(0x005bf440);
    /* 005bf440: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf442: je 0x5bf3f4 */ if (fZ) goto L_005bf3f4;
L_005bf444:; BB(0x005bf444);
    /* 005bf444: mov dword ptr [ebx + esi*4 + 0x138], edx */ W32((u32)(r_ebx+r_esi*4+0x138u), r_edx);
    /* 005bf44b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf44e: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf451: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf453: jl 0x5bf438 */ if ((fS!=fO)) goto L_005bf438;
L_005bf455:; BB(0x005bf455);
    /* 005bf455: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf457: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bf459: jmp 0x5bf438 */ goto L_005bf438;
L_005bf45b:; BB(0x005bf45b);
    /* 005bf45b: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bf461: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf463: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf465: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf467: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf469: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bf46f:; BB(0x005bf46f);
    /* 005bf46f: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bf471: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bf474: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bf477: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bf47a: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf47d: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf47f: ja 0x5bf46f */ if ((!fC&&!fZ)) goto L_005bf46f;
L_005bf481:; BB(0x005bf481);
    /* 005bf481: mov eax, dword ptr [ebx + 0x10c] */ r_eax = R32((u32)(r_ebx+0x10cu));
    /* 005bf487: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf489: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005bf48b: jbe 0x5bf331 */ if ((fC||fZ)) goto L_005bf331;
L_005bf491:; BB(0x005bf491);
    /* 005bf491: mov ecx, ebx */ r_ecx = r_ebx;
L_005bf493:; BB(0x005bf493);
    /* 005bf493: fld dword ptr [ecx + edx*8 + 0x118] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0x118u)));
    /* 005bf49a: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bf4a0: movzx ebx, byte ptr [ecx + edx*2 + 0x132] */ r_ebx = (u32)R8((u32)(r_ecx+r_edx*2+0x132u));
    /* 005bf4a8: movzx eax, byte ptr [ecx + edx*2 + 0x133] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0x133u));
    /* 005bf4b0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bf4b4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005bf4b8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005bf4bc: fdiv dword ptr [0x92b830] */ ST(0) = ST(0) / R_F32((u32)(0x92b830u));
    /* 005bf4c2: fmul dword ptr [0x92b834] */ ST(0) = ST(0) * R_F32((u32)(0x92b834u));
    /* 005bf4c8: fdiv dword ptr [0x92b82c] */ ST(0) = ST(0) / R_F32((u32)(0x92b82cu));
    /* 005bf4ce: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005bf4d2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bf4d6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bf4db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bf4e0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bf4e4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bf4e8: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bf4ec: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bf4f0: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005bf4f4: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005bf4f7: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf4fd: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 005bf501: lea esi, [ecx + 0x338] */ r_esi = (u32)(r_ecx+0x338u);
    /* 005bf507: lea ebp, [ecx + 0x13c] */ r_ebp = (u32)(r_ecx+0x13cu);
L_005bf50d:; BB(0x005bf50d);
    /* 005bf50d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf50f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bf514u); f_0082dcbc();
    /* 005bf514: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bf51a: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005bf51e: fadd dword ptr [esi - 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffffcu));
    /* 005bf521: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 005bf524: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf526: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf529: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf52b: jbe 0x5bf50d */ if ((fC||fZ)) goto L_005bf50d;
L_005bf52d:; BB(0x005bf52d);
    /* 005bf52d: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005bf531: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 005bf535: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf538: cmp edx, dword ptr [ecx + 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bf53e: jb 0x5bf493 */ if (fC) goto L_005bf493;
L_005bf544:; BB(0x005bf544);
    /* 005bf544: jmp 0x5bf331 */ goto L_005bf331;
L_005bf549:; BB(0x005bf549);
    /* 005bf549: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf54a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf54b: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5bf550u); f_005bcc88();
    /* 005bf550: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf553: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bf556: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bf557: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf558: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bf559: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf55a: ret  */ FN_RET(0x005beb48); r_esp += 4; return;
L_005bf55b:; BB(0x005bf55b);
    /* 005bf55b: lea eax, [ebx + 0x794] */ r_eax = (u32)(r_ebx+0x794u);
    /* 005bf561: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf562: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf564: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bf569u); f_005bf7dc();
    /* 005bf569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf56b: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bf571:; BB(0x005bf571);
    /* 005bf571: fld dword ptr [0x92b828] */ FPUSH(R_F32((u32)(0x92b828u)));
    /* 005bf577: fld dword ptr [ebx + 0x110] */ FPUSH(R_F32((u32)(r_ebx+0x110u)));
    /* 005bf57d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005bf57f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bf581: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bf582: jbe 0x5bf588 */ if ((fC||fZ)) goto L_005bf588;
L_005bf584:; BB(0x005bf584);
    /* 005bf584: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bf586: jmp 0x5bf59d */ goto L_005bf59d;
L_005bf588:; BB(0x005bf588);
    /* 005bf588: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005bf58a: fld dword ptr [0x92b824] */ FPUSH(R_F32((u32)(0x92b824u)));
    /* 005bf590: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005bf592: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bf594: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bf595: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005bf597: ja 0x5bf59b */ if ((!fC&&!fZ)) goto L_005bf59b;
L_005bf599:; BB(0x005bf599);
    /* 005bf599: fst st(1) */ ST(1) = ST(0);
L_005bf59b:; BB(0x005bf59b);
    /* 005bf59b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005bf59d:; BB(0x005bf59d);
    /* 005bf59d: fstp dword ptr [ebx + 0x110] */ W_F32((u32)(r_ebx+0x110u), ST(0)); FPOP();
    /* 005bf5a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf5a5: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bf5aau); f_005bf8b0();
    /* 005bf5aa: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005bf5b0: lea ebp, [ebx + 0xf8] */ r_ebp = (u32)(r_ebx+0xf8u);
    /* 005bf5b6: lea edx, [ebx + 0x138] */ r_edx = (u32)(r_ebx+0x138u);
    /* 005bf5bc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf5be: jne 0x5bf79f */ if (!fZ) goto L_005bf79f;
L_005bf5c4:; BB(0x005bf5c4);
    /* 005bf5c4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf5c6: jne 0x5bf6b1 */ if (!fZ) goto L_005bf6b1;
L_005bf5cc:; BB(0x005bf5cc);
    /* 005bf5cc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf5ce: je 0x5bf331 */ if (fZ) goto L_005bf331;
L_005bf5d4:; BB(0x005bf5d4);
    /* 005bf5d4: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bf5da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf5dc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf5de: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf5e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf5e2: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bf5e8:; BB(0x005bf5e8);
    /* 005bf5e8: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bf5ea: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bf5ed: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bf5f0: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bf5f3: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf5f6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf5f8: ja 0x5bf5e8 */ if ((!fC&&!fZ)) goto L_005bf5e8;
L_005bf5fa:; BB(0x005bf5fa);
    /* 005bf5fa: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005bf5ff: fld dword ptr [ebx + 0x120] */ FPUSH(R_F32((u32)(r_ebx+0x120u)));
    /* 005bf605: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bf60b: fld dword ptr [ebx + 0x118] */ FPUSH(R_F32((u32)(r_ebx+0x118u)));
    /* 005bf611: mov ebp, dword ptr [ebx + 0x118] */ r_ebp = R32((u32)(r_ebx+0x118u));
    /* 005bf617: movzx ecx, byte ptr [ebx + 0x133] */ r_ecx = (u32)R8((u32)(r_ebx+0x133u));
    /* 005bf61e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bf622: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005bf626: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 005bf62a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf62c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bf62c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bf62c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bf62e: movzx edx, byte ptr [ebx + 0x132] */ r_edx = (u32)R8((u32)(r_ebx+0x132u));
    /* 005bf635: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005bf639: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005bf63d: mov edi, 0x7f */ r_edi = 0x7fu;
    /* 005bf642: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf644: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 005bf648: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005bf64a:; BB(0x005bf64a);
    /* 005bf64a: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 005bf64e: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bf651: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf657: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bf65cu); f_0082dcbc();
    /* 005bf65c: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bf662: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 005bf666: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 005bf66a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005bf66e: fstp dword ptr [ebx + edi*4 + 0x138] */ W_F32((u32)(r_ebx+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005bf675: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf678: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf67b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf67d: jl 0x5bf686 */ if ((fS!=fO)) goto L_005bf686;
L_005bf67f:; BB(0x005bf67f);
    /* 005bf67f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf681: mov ebp, 1 */ r_ebp = 0x1u;
L_005bf686:; BB(0x005bf686);
    /* 005bf686: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005bf68a: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
L_005bf68e:; BB(0x005bf68e);
    /* 005bf68e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bf690: jl 0x5bf331 */ if ((fS!=fO)) goto L_005bf331;
L_005bf696:; BB(0x005bf696);
    /* 005bf696: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf698: je 0x5bf64a */ if (fZ) goto L_005bf64a;
L_005bf69a:; BB(0x005bf69a);
    /* 005bf69a: mov dword ptr [ebx + edi*4 + 0x138], edx */ W32((u32)(r_ebx+r_edi*4+0x138u), r_edx);
    /* 005bf6a1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf6a4: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf6a7: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf6a9: jl 0x5bf68e */ if ((fS!=fO)) goto L_005bf68e;
L_005bf6ab:; BB(0x005bf6ab);
    /* 005bf6ab: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf6ad: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf6af: jmp 0x5bf68e */ goto L_005bf68e;
L_005bf6b1:; BB(0x005bf6b1);
    /* 005bf6b1: lea edi, [ebx + 0x138] */ r_edi = (u32)(r_ebx+0x138u);
    /* 005bf6b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf6b9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005bf6bb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bf6bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf6bf: lea eax, [ebx + 0x538] */ r_eax = (u32)(r_ebx+0x538u);
L_005bf6c5:; BB(0x005bf6c5);
    /* 005bf6c5: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005bf6c7: mov dword ptr [edi + 4], ebp */ W32((u32)(r_edi+0x4u), r_ebp);
    /* 005bf6ca: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 005bf6cd: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 005bf6d0: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bf6d3: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf6d5: ja 0x5bf6c5 */ if ((!fC&&!fZ)) goto L_005bf6c5;
L_005bf6d7:; BB(0x005bf6d7);
    /* 005bf6d7: mov eax, dword ptr [ebx + 0x10c] */ r_eax = R32((u32)(r_ebx+0x10cu));
    /* 005bf6dd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bf6df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005bf6e1: jbe 0x5bf331 */ if ((fC||fZ)) goto L_005bf331;
L_005bf6e7:; BB(0x005bf6e7);
    /* 005bf6e7: mov ecx, ebx */ r_ecx = r_ebx;
L_005bf6e9:; BB(0x005bf6e9);
    /* 005bf6e9: fld dword ptr [ecx + edx*8 + 0x118] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0x118u)));
    /* 005bf6f0: fmul dword ptr [0x92b83c] */ ST(0) = ST(0) * R_F32((u32)(0x92b83cu));
    /* 005bf6f6: movzx ebx, byte ptr [ecx + edx*2 + 0x132] */ r_ebx = (u32)R8((u32)(r_ecx+r_edx*2+0x132u));
    /* 005bf6fe: movzx eax, byte ptr [ecx + edx*2 + 0x133] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0x133u));
    /* 005bf706: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bf70a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005bf70e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005bf712: fdiv dword ptr [0x92b830] */ ST(0) = ST(0) / R_F32((u32)(0x92b830u));
    /* 005bf718: fmul dword ptr [0x92b834] */ ST(0) = ST(0) * R_F32((u32)(0x92b834u));
    /* 005bf71e: fdiv dword ptr [0x92b82c] */ ST(0) = ST(0) / R_F32((u32)(0x92b82cu));
    /* 005bf724: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005bf728: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bf72c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bf731: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bf736: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bf73a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bf73e: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bf742: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bf746: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005bf74a: shl ebx, 9 */ { u32 c = (9u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005bf74d: add ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf753: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 005bf757: lea esi, [ecx + 0x338] */ r_esi = (u32)(r_ecx+0x338u);
    /* 005bf75d: lea ebp, [ecx + 0x13c] */ r_ebp = (u32)(r_ecx+0x13cu);
L_005bf763:; BB(0x005bf763);
    /* 005bf763: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bf765: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bf76au); f_0082dcbc();
    /* 005bf76a: fadd dword ptr [0x92b838] */ ST(0) = ST(0) + R_F32((u32)(0x92b838u));
    /* 005bf770: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005bf774: fadd dword ptr [esi - 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xfffffffcu));
    /* 005bf777: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 005bf77a: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bf77c: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bf77f: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bf781: jbe 0x5bf763 */ if ((fC||fZ)) goto L_005bf763;
L_005bf783:; BB(0x005bf783);
    /* 005bf783: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005bf787: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 005bf78b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf78e: cmp edx, dword ptr [ecx + 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bf794: jb 0x5bf6e9 */ if (fC) goto L_005bf6e9;
L_005bf79a:; BB(0x005bf79a);
    /* 005bf79a: jmp 0x5bf331 */ goto L_005bf331;
L_005bf79f:; BB(0x005bf79f);
    /* 005bf79f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf7a1: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5bf7a6u); f_005bcc88();
    /* 005bf7a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf7a9: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bf7ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bf7ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf7ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bf7af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf7b0: ret  */ FN_RET(0x005beb48); r_esp += 4; return;
L_005bf7b1:; BB(0x005bf7b1);
    /* 005bf7b1: mov eax, dword ptr [ebx + 0x538] */ r_eax = R32((u32)(r_ebx+0x538u));
    /* 005bf7b7: mov dword ptr [ebx + 0x788], 0 */ W32((u32)(r_ebx+0x788u), 0x0u);
    /* 005bf7c1: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bf7c4: mov dword ptr [ebx + 0x538], eax */ W32((u32)(r_ebx+0x538u), r_eax);
    /* 005bf7ca: add dword ptr [ebx + 0x53c], -1 */ { u32 ad = (u32)(r_ebx+0x53cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bf7d1: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bf7d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bf7d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf7d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bf7d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf7d8: ret  */ FN_RET(0x005beb48); r_esp += 4; return;
}

