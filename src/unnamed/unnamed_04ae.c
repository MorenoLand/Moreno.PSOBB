#include "protos.h"

void f_004ae024(void) /* sub_4AE024 */
{
    FN_ENTER(0x004ae024);
    /* 004ae024: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ae025: mov edi, ecx */ r_edi = r_ecx;
    /* 004ae027: mov eax, 5 */ r_eax = 0x5u;
    /* 004ae02c: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 004ae033: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 004ae039: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ae03c: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ae042: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 004ae045: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 004ae04c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae04e: je 0x4ae0f8 */ if (fZ) goto L_004ae0f8;
L_004ae054:; BB(0x004ae054);
    /* 004ae054: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ae057: je 0x4ae097 */ if (fZ) goto L_004ae097;
L_004ae059:; BB(0x004ae059);
    /* 004ae059: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae05c: je 0x4ae099 */ if (fZ) goto L_004ae099;
L_004ae05e:; BB(0x004ae05e);
    /* 004ae05e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ae061: je 0x4ae08b */ if (fZ) goto L_004ae08b;
L_004ae063:; BB(0x004ae063);
    /* 004ae063: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ae066: jne 0x4ae097 */ if (!fZ) goto L_004ae097;
L_004ae068:; BB(0x004ae068);
    /* 004ae068: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004ae06b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ae06d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae06e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae06f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ae070: push 0x3f5 */ { u32 v = 0x3f5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae075: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ae07au); f_00814298();
    /* 004ae07a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae07d: mov eax, 1 */ r_eax = 0x1u;
    /* 004ae082: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004ae089: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ae08a: ret  */ FN_RET(0x004ae024); r_esp += 4; return;
L_004ae08b:; BB(0x004ae08b);
    /* 004ae08b: mov eax, 4 */ r_eax = 0x4u;
    /* 004ae090: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_004ae097:; BB(0x004ae097);
    /* 004ae097: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ae098: ret  */ FN_RET(0x004ae024); r_esp += 4; return;
L_004ae099:; BB(0x004ae099);
    /* 004ae099: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ae09b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004ae0a2: mov dword ptr [edi + 0x3b0], eax */ W32((u32)(r_edi+0x3b0u), r_eax);
    /* 004ae0a8: mov dword ptr [edi + 0x3b4], eax */ W32((u32)(r_edi+0x3b4u), r_eax);
    /* 004ae0ae: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 004ae0b4: mov dword ptr [edi + 0x3bc], eax */ W32((u32)(r_edi+0x3bcu), r_eax);
    /* 004ae0ba: mov dword ptr [edi + 0x3c0], eax */ W32((u32)(r_edi+0x3c0u), r_eax);
    /* 004ae0c0: mov dword ptr [edi + 0x3c4], eax */ W32((u32)(r_edi+0x3c4u), r_eax);
    /* 004ae0c6: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 004ae0cc: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 004ae0d2: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 004ae0d8: mov ecx, edi */ r_ecx = r_edi;
    /* 004ae0da: call 0x4ae724 */ r_esp -= 4; W32(r_esp, 0x4ae0dfu); f_004ae724();
    /* 004ae0df: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ae0e4: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004ae0e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae0e8: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4ae0edu); f_00509590();
    /* 004ae0ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae0f0: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 004ae0f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ae0f7: ret  */ FN_RET(0x004ae024); r_esp += 4; return;
L_004ae0f8:; BB(0x004ae0f8);
    /* 004ae0f8: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 004ae0fe: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ae101: add edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae104: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 004ae10a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ae10b: ret  */ FN_RET(0x004ae024); r_esp += 4; return;
}

void f_004ae10c(void) /* sub_4AE10C */
{
    FN_ENTER(0x004ae10c);
    /* 004ae10c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae10d: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ae110: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ae112: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ae114: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae119: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4ae11eu); f_007aaa30();
    /* 004ae11e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae120: je 0x4ae13e */ if (fZ) goto L_004ae13e;
L_004ae122:; BB(0x004ae122);
    /* 004ae122: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ae124: call 0x4adfe8 */ r_esp -= 4; W32(r_esp, 0x4ae129u); f_004adfe8();
    /* 004ae129: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004ae12c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ae12e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae130: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ae131: push 0x3f4 */ { u32 v = 0x3f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae136: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ae13bu); f_00814298();
    /* 004ae13b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ae13e:; BB(0x004ae13e);
    /* 004ae13e: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x4ae143u); f_007b8cec();
    /* 004ae143: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004ae146: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 004ae14e: lea eax, [ebp + 0x37c] */ r_eax = (u32)(r_ebp+0x37cu);
    /* 004ae154: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ae157: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004ae15a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004ae15e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004ae162: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004ae165: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ae169: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 004ae16c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ae170: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ae173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae174: call 0x7b9788 */ r_esp -= 4; W32(r_esp, 0x4ae179u); f_007b9788();
    /* 004ae179: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ae17a: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae17f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ae181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae183: je 0x4ae309 */ if (fZ) goto L_004ae309;
L_004ae189:; BB(0x004ae189);
    /* 004ae189: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 004ae18d: mov ebx, edx */ r_ebx = r_edx;
    /* 004ae18f: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 004ae193: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
L_004ae197:; BB(0x004ae197);
    /* 004ae197: mov edi, dword ptr [ebp + 0x3ac] */ r_edi = R32((u32)(r_ebp+0x3acu));
    /* 004ae19d: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ae1a0: jae 0x4ae2f2 */ if (!fC) goto L_004ae2f2;
L_004ae1a6:; BB(0x004ae1a6);
    /* 004ae1a6: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004ae1a9: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004ae1ac: lea ecx, [ecx + ecx + 0xaad660] */ r_ecx = (u32)(r_ecx+r_ecx+0xaad660u);
    /* 004ae1b3: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 004ae1b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ae1b9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae1bb: je 0x4ae1e0 */ if (fZ) goto L_004ae1e0;
L_004ae1bd:; BB(0x004ae1bd);
    /* 004ae1bd: mov edx, dword ptr [esi*4 + 0xaad660] */ r_edx = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae1c4: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
L_004ae1c8:; BB(0x004ae1c8);
    /* 004ae1c8: cmp edx, dword ptr [ebp + ecx*8 + 0x3b0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*8+0x3b0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae1cf: je 0x4ae379 */ if (fZ) goto L_004ae379;
L_004ae1d5:; BB(0x004ae1d5);
    /* 004ae1d5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ae1d8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae1da: jne 0x4ae1c8 */ if (!fZ) goto L_004ae1c8;
L_004ae1dc:; BB(0x004ae1dc);
    /* 004ae1dc: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_004ae1e0:; BB(0x004ae1e0);
    /* 004ae1e0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae1e2: jne 0x4ae2f2 */ if (!fZ) goto L_004ae2f2;
L_004ae1e8:; BB(0x004ae1e8);
    /* 004ae1e8: mov edx, dword ptr [esi*4 + 0xaad660] */ r_edx = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae1ef: movzx ecx, word ptr [edx + 0x96] */ r_ecx = (u32)R16((u32)(r_edx+0x96u));
    /* 004ae1f6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae1f9: jne 0x4ae2f2 */ if (!fZ) goto L_004ae2f2;
L_004ae1ff:; BB(0x004ae1ff);
    /* 004ae1ff: mov dword ptr [ebp + edi*8 + 0x3b0], edx */ W32((u32)(r_ebp+r_edi*8+0x3b0u), r_edx);
    /* 004ae206: mov eax, dword ptr [esi*4 + 0xaad664] */ r_eax = R32((u32)(r_esi*4+0xaad664u));
    /* 004ae20d: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 004ae211: mov ecx, dword ptr [ebp + 0x3ac] */ r_ecx = R32((u32)(r_ebp+0x3acu));
    /* 004ae217: mov dword ptr [ebp + ecx*8 + 0x3b4], eax */ W32((u32)(r_ebp+r_ecx*8+0x3b4u), r_eax);
    /* 004ae21e: add dword ptr [ebp + 0x3ac], 1 */ { u32 ad = (u32)(r_ebp+0x3acu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ae225: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae227: je 0x4ae2ed */ if (fZ) goto L_004ae2ed;
L_004ae22d:; BB(0x004ae22d);
    /* 004ae22d: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae234: fld dword ptr [ebp + 0x35c] */ FPUSH(R_F32((u32)(r_ebp+0x35cu)));
    /* 004ae23a: fcomp dword ptr [0x904838] */ fx_compare(ST(0), R_F32((u32)(0x904838u))); FPOP();
    /* 004ae240: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ae242: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 004ae246: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ae247: jne 0x4ae27a */ if (!fZ) goto L_004ae27a;
L_004ae249:; BB(0x004ae249);
    /* 004ae249: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae24e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae24f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004ae251: mov ecx, edi */ r_ecx = r_edi;
    /* 004ae253: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x4ae256u); call_ind(t); }
    /* 004ae256: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae258: jne 0x4ae264 */ if (!fZ) goto L_004ae264;
L_004ae25a:; BB(0x004ae25a);
    /* 004ae25a: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae25f: jmp 0x4ae2f2 */ goto L_004ae2f2;
L_004ae264:; BB(0x004ae264);
    /* 004ae264: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae269: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae26a: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 004ae26c: mov ecx, edi */ r_ecx = r_edi;
    /* 004ae26e: call dword ptr [esi + 0x5c] */ { u32 t = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, 0x4ae271u); call_ind(t); }
    /* 004ae271: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ae273: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae278: jmp 0x4ae2f2 */ goto L_004ae2f2;
L_004ae27a:; BB(0x004ae27a);
    /* 004ae27a: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 004ae281: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae284: jne 0x4ae28d */ if (!fZ) goto L_004ae28d;
L_004ae286:; BB(0x004ae286);
    /* 004ae286: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae28b: jmp 0x4ae2f2 */ goto L_004ae2f2;
L_004ae28d:; BB(0x004ae28d);
    /* 004ae28d: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004ae292: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae295: je 0x4ae324 */ if (fZ) goto L_004ae324;
L_004ae29b:; BB(0x004ae29b);
    /* 004ae29b: mov dword ptr [esp + 0x18], 0x12 */ W32((u32)(r_esp+0x18u), 0x12u);
L_004ae2a3:; BB(0x004ae2a3);
    /* 004ae2a3: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 004ae2a7: mov eax, dword ptr [esi*4 + 0xaad664] */ r_eax = R32((u32)(r_esi*4+0xaad664u));
    /* 004ae2ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ae2b0: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004ae2b3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae2b5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ae2b7: mov dword ptr [esp + 0x1c], 0x42c80000 */ W32((u32)(r_esp+0x1cu), 0x42c80000u);
    /* 004ae2bf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae2c1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae2c3: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ae2c5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae2c7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae2c9: add esi, dword ptr [edi + 0xa4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae2cf: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 004ae2d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ae2d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ae2d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ae2d7: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae2dc: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ae2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae2e1: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4ae2e4u); call_ind(t); }
    /* 004ae2e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ae2e6: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae2eb: jmp 0x4ae2f2 */ goto L_004ae2f2;
L_004ae2ed:; BB(0x004ae2ed);
    /* 004ae2ed: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
L_004ae2f2:; BB(0x004ae2f2);
    /* 004ae2f2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ae2f5: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae2f7: jne 0x4ae197 */ if (!fZ) goto L_004ae197;
L_004ae2fd:; BB(0x004ae2fd);
    /* 004ae2fd: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 004ae301: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004ae305: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
L_004ae309:; BB(0x004ae309);
    /* 004ae309: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x4ae30eu); f_007b8cec();
    /* 004ae30e: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004ae314: fcomp dword ptr [0x904838] */ fx_compare(ST(0), R_F32((u32)(0x904838u))); FPOP();
    /* 004ae31a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ae31c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ae31d: je 0x4ae36a */ if (fZ) goto L_004ae36a;
L_004ae31f:; BB(0x004ae31f);
    /* 004ae31f: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae322: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ae323: ret  */ FN_RET(0x004ae10c); r_esp += 4; return;
L_004ae324:; BB(0x004ae324);
    /* 004ae324: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ae329u); f_008587a5();
    /* 004ae329: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ae32d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ae331: fdiv dword ptr [0x904830] */ ST(0) = ST(0) / R_F32((u32)(0x904830u));
    /* 004ae337: fcomp dword ptr [0x90482c] */ fx_compare(ST(0), R_F32((u32)(0x90482cu))); FPOP();
    /* 004ae33d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ae33f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ae340: ja 0x4ae356 */ if ((!fC&&!fZ)) goto L_004ae356;
L_004ae342:; BB(0x004ae342);
    /* 004ae342: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae349: mov dword ptr [esp + 0x18], 0x10 */ W32((u32)(r_esp+0x18u), 0x10u);
    /* 004ae351: jmp 0x4ae2a3 */ goto L_004ae2a3;
L_004ae356:; BB(0x004ae356);
    /* 004ae356: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae35d: mov dword ptr [esp + 0x18], 0x10 */ W32((u32)(r_esp+0x18u), 0x10u);
    /* 004ae365: jmp 0x4ae2a3 */ goto L_004ae2a3;
L_004ae36a:; BB(0x004ae36a);
    /* 004ae36a: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004ae36e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ae373: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004ae377: jmp 0x4ae31f */ goto L_004ae31f;
L_004ae379:; BB(0x004ae379);
    /* 004ae379: mov ebx, dword ptr [ebp + ecx*8 + 0x3b4] */ r_ebx = R32((u32)(r_ebp+r_ecx*8+0x3b4u));
    /* 004ae380: cmp ebx, dword ptr [esi*4 + 0xaad664] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi*4+0xaad664u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae387: jne 0x4ae1d5 */ if (!fZ) goto L_004ae1d5;
L_004ae38d:; BB(0x004ae38d);
    /* 004ae38d: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 004ae391: jmp 0x4ae1e0 */ goto L_004ae1e0;
}

void f_004ae398(void) /* sub_4AE398 */
{
    FN_ENTER(0x004ae398);
    /* 004ae398: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae399: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ae39c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ae39e: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 004ae3a4: fld dword ptr [0x904824] */ FPUSH(R_F32((u32)(0x904824u)));
    /* 004ae3aa: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 004ae3ac: fmul dword ptr [0x904820] */ ST(0) = ST(0) * R_F32((u32)(0x904820u));
    /* 004ae3b2: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 004ae3b8: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x4ae3bdu); f_007b8cec();
    /* 004ae3bd: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004ae3c0: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 004ae3c8: lea eax, [ebp + 0x37c] */ r_eax = (u32)(r_ebp+0x37cu);
    /* 004ae3ce: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ae3d1: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004ae3d4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004ae3d8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004ae3dc: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004ae3df: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ae3e3: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 004ae3e6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ae3ea: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ae3ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae3ee: call 0x7b9788 */ r_esp -= 4; W32(r_esp, 0x4ae3f3u); f_007b9788();
    /* 004ae3f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ae3f4: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae3f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ae3fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae3fd: je 0x4ae583 */ if (fZ) goto L_004ae583;
L_004ae403:; BB(0x004ae403);
    /* 004ae403: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 004ae407: mov ebx, edx */ r_ebx = r_edx;
    /* 004ae409: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 004ae40d: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
L_004ae411:; BB(0x004ae411);
    /* 004ae411: mov edi, dword ptr [ebp + 0x3ac] */ r_edi = R32((u32)(r_ebp+0x3acu));
    /* 004ae417: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ae41a: jae 0x4ae56c */ if (!fC) goto L_004ae56c;
L_004ae420:; BB(0x004ae420);
    /* 004ae420: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004ae423: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004ae426: lea ecx, [ecx + ecx + 0xaad660] */ r_ecx = (u32)(r_ecx+r_ecx+0xaad660u);
    /* 004ae42d: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 004ae431: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ae433: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae435: je 0x4ae45a */ if (fZ) goto L_004ae45a;
L_004ae437:; BB(0x004ae437);
    /* 004ae437: mov edx, dword ptr [esi*4 + 0xaad660] */ r_edx = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae43e: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
L_004ae442:; BB(0x004ae442);
    /* 004ae442: cmp edx, dword ptr [ebp + ecx*8 + 0x3b0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*8+0x3b0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae449: je 0x4ae704 */ if (fZ) goto L_004ae704;
L_004ae44f:; BB(0x004ae44f);
    /* 004ae44f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ae452: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae454: jne 0x4ae442 */ if (!fZ) goto L_004ae442;
L_004ae456:; BB(0x004ae456);
    /* 004ae456: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_004ae45a:; BB(0x004ae45a);
    /* 004ae45a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae45c: jne 0x4ae56c */ if (!fZ) goto L_004ae56c;
L_004ae462:; BB(0x004ae462);
    /* 004ae462: mov edx, dword ptr [esi*4 + 0xaad660] */ r_edx = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae469: movzx ecx, word ptr [edx + 0x96] */ r_ecx = (u32)R16((u32)(r_edx+0x96u));
    /* 004ae470: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae473: jne 0x4ae56c */ if (!fZ) goto L_004ae56c;
L_004ae479:; BB(0x004ae479);
    /* 004ae479: mov dword ptr [ebp + edi*8 + 0x3b0], edx */ W32((u32)(r_ebp+r_edi*8+0x3b0u), r_edx);
    /* 004ae480: mov eax, dword ptr [esi*4 + 0xaad664] */ r_eax = R32((u32)(r_esi*4+0xaad664u));
    /* 004ae487: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 004ae48b: mov ecx, dword ptr [ebp + 0x3ac] */ r_ecx = R32((u32)(r_ebp+0x3acu));
    /* 004ae491: mov dword ptr [ebp + ecx*8 + 0x3b4], eax */ W32((u32)(r_ebp+r_ecx*8+0x3b4u), r_eax);
    /* 004ae498: add dword ptr [ebp + 0x3ac], 1 */ { u32 ad = (u32)(r_ebp+0x3acu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ae49f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae4a1: je 0x4ae567 */ if (fZ) goto L_004ae567;
L_004ae4a7:; BB(0x004ae4a7);
    /* 004ae4a7: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae4ae: fld dword ptr [ebp + 0x35c] */ FPUSH(R_F32((u32)(r_ebp+0x35cu)));
    /* 004ae4b4: fcomp dword ptr [0x90481c] */ fx_compare(ST(0), R_F32((u32)(0x90481cu))); FPOP();
    /* 004ae4ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ae4bc: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 004ae4c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ae4c1: jne 0x4ae4f4 */ if (!fZ) goto L_004ae4f4;
L_004ae4c3:; BB(0x004ae4c3);
    /* 004ae4c3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae4c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae4c9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004ae4cb: mov ecx, edi */ r_ecx = r_edi;
    /* 004ae4cd: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x4ae4d0u); call_ind(t); }
    /* 004ae4d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae4d2: jne 0x4ae4de */ if (!fZ) goto L_004ae4de;
L_004ae4d4:; BB(0x004ae4d4);
    /* 004ae4d4: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae4d9: jmp 0x4ae56c */ goto L_004ae56c;
L_004ae4de:; BB(0x004ae4de);
    /* 004ae4de: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae4e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae4e4: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 004ae4e6: mov ecx, edi */ r_ecx = r_edi;
    /* 004ae4e8: call dword ptr [esi + 0x5c] */ { u32 t = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, 0x4ae4ebu); call_ind(t); }
    /* 004ae4eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ae4ed: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae4f2: jmp 0x4ae56c */ goto L_004ae56c;
L_004ae4f4:; BB(0x004ae4f4);
    /* 004ae4f4: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 004ae4fb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae4fe: jne 0x4ae507 */ if (!fZ) goto L_004ae507;
L_004ae500:; BB(0x004ae500);
    /* 004ae500: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae505: jmp 0x4ae56c */ goto L_004ae56c;
L_004ae507:; BB(0x004ae507);
    /* 004ae507: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004ae50c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae50f: je 0x4ae645 */ if (fZ) goto L_004ae645;
L_004ae515:; BB(0x004ae515);
    /* 004ae515: mov dword ptr [esp + 0x18], 0x12 */ W32((u32)(r_esp+0x18u), 0x12u);
L_004ae51d:; BB(0x004ae51d);
    /* 004ae51d: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 004ae521: mov eax, dword ptr [esi*4 + 0xaad664] */ r_eax = R32((u32)(r_esi*4+0xaad664u));
    /* 004ae528: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004ae52a: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004ae52d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae52f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ae531: mov dword ptr [esp + 0x1c], 0x42c80000 */ W32((u32)(r_esp+0x1cu), 0x42c80000u);
    /* 004ae539: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae53b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae53d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ae53f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae541: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae543: add esi, dword ptr [edi + 0xa4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ae549: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 004ae54e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ae54f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ae550: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ae551: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae556: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ae55a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae55b: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4ae55eu); call_ind(t); }
    /* 004ae55e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ae560: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae565: jmp 0x4ae56c */ goto L_004ae56c;
L_004ae567:; BB(0x004ae567);
    /* 004ae567: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
L_004ae56c:; BB(0x004ae56c);
    /* 004ae56c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ae56f: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae571: jne 0x4ae411 */ if (!fZ) goto L_004ae411;
L_004ae577:; BB(0x004ae577);
    /* 004ae577: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 004ae57b: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004ae57f: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
L_004ae583:; BB(0x004ae583);
    /* 004ae583: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x4ae588u); f_007b8cec();
    /* 004ae588: mov ecx, dword ptr [ebp + 0x3d4] */ r_ecx = R32((u32)(r_ebp+0x3d4u));
    /* 004ae58e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae590: je 0x4ae59b */ if (fZ) goto L_004ae59b;
L_004ae592:; BB(0x004ae592);
    /* 004ae592: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 004ae595: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae596: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ae59bu); f_00508db8();
L_004ae59b:; BB(0x004ae59b);
    /* 004ae59b: lea eax, [ebp + 0x30c] */ r_eax = (u32)(r_ebp+0x30cu);
    /* 004ae5a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae5a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ae5a4: call 0x4add2c */ r_esp -= 4; W32(r_esp, 0x4ae5a9u); f_004add2c();
    /* 004ae5a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae5ab: jne 0x4ae62a */ if (!fZ) goto L_004ae62a;
L_004ae5ad:; BB(0x004ae5ad);
    /* 004ae5ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ae5af: call 0x4ae724 */ r_esp -= 4; W32(r_esp, 0x4ae5b4u); f_004ae724();
    /* 004ae5b4: mov eax, 3 */ r_eax = 0x3u;
    /* 004ae5b9: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 004ae5c0: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 004ae5c6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ae5c9: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ae5cf: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 004ae5d2: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004ae5d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae5db: je 0x4ae6ed */ if (fZ) goto L_004ae6ed;
L_004ae5e1:; BB(0x004ae5e1);
    /* 004ae5e1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae5e4: je 0x4ae640 */ if (fZ) goto L_004ae640;
L_004ae5e6:; BB(0x004ae5e6);
    /* 004ae5e6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae5e9: je 0x4ae68b */ if (fZ) goto L_004ae68b;
L_004ae5ef:; BB(0x004ae5ef);
    /* 004ae5ef: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae5f2: je 0x4ae61c */ if (fZ) goto L_004ae61c;
L_004ae5f4:; BB(0x004ae5f4);
    /* 004ae5f4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae5f7: jne 0x4ae640 */ if (!fZ) goto L_004ae640;
L_004ae5f9:; BB(0x004ae5f9);
    /* 004ae5f9: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004ae5fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ae5fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae5ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae600: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ae601: push 0x3f5 */ { u32 v = 0x3f5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae606: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ae60bu); f_00814298();
    /* 004ae60b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ae60e: mov eax, 1 */ r_eax = 0x1u;
    /* 004ae613: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004ae61a: jmp 0x4ae640 */ goto L_004ae640;
L_004ae61c:; BB(0x004ae61c);
    /* 004ae61c: mov eax, 4 */ r_eax = 0x4u;
    /* 004ae621: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004ae628: jmp 0x4ae640 */ goto L_004ae640;
L_004ae62a:; BB(0x004ae62a);
    /* 004ae62a: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004ae62d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ae62f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae631: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ae632: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae633: push 0x3f3 */ { u32 v = 0x3f3u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae638: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4ae63du); f_008144b0();
    /* 004ae63d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ae640:; BB(0x004ae640);
    /* 004ae640: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae643: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ae644: ret  */ FN_RET(0x004ae398); r_esp += 4; return;
L_004ae645:; BB(0x004ae645);
    /* 004ae645: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ae64au); f_008587a5();
    /* 004ae64a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004ae64e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004ae652: fdiv dword ptr [0x904818] */ ST(0) = ST(0) / R_F32((u32)(0x904818u));
    /* 004ae658: fcomp dword ptr [0x904814] */ fx_compare(ST(0), R_F32((u32)(0x904814u))); FPOP();
    /* 004ae65e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ae660: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ae661: ja 0x4ae677 */ if ((!fC&&!fZ)) goto L_004ae677;
L_004ae663:; BB(0x004ae663);
    /* 004ae663: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae66a: mov dword ptr [esp + 0x18], 0x10 */ W32((u32)(r_esp+0x18u), 0x10u);
    /* 004ae672: jmp 0x4ae51d */ goto L_004ae51d;
L_004ae677:; BB(0x004ae677);
    /* 004ae677: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae67e: mov dword ptr [esp + 0x18], 0x10 */ W32((u32)(r_esp+0x18u), 0x10u);
    /* 004ae686: jmp 0x4ae51d */ goto L_004ae51d;
L_004ae68b:; BB(0x004ae68b);
    /* 004ae68b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ae68d: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004ae694: mov dword ptr [ebp + 0x3b0], eax */ W32((u32)(r_ebp+0x3b0u), r_eax);
    /* 004ae69a: mov dword ptr [ebp + 0x3b4], eax */ W32((u32)(r_ebp+0x3b4u), r_eax);
    /* 004ae6a0: mov dword ptr [ebp + 0x3b8], eax */ W32((u32)(r_ebp+0x3b8u), r_eax);
    /* 004ae6a6: mov dword ptr [ebp + 0x3bc], eax */ W32((u32)(r_ebp+0x3bcu), r_eax);
    /* 004ae6ac: mov dword ptr [ebp + 0x3c0], eax */ W32((u32)(r_ebp+0x3c0u), r_eax);
    /* 004ae6b2: mov dword ptr [ebp + 0x3c4], eax */ W32((u32)(r_ebp+0x3c4u), r_eax);
    /* 004ae6b8: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004ae6be: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 004ae6c4: mov dword ptr [ebp + 0x3ac], eax */ W32((u32)(r_ebp+0x3acu), r_eax);
    /* 004ae6ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ae6cc: call 0x4ae724 */ r_esp -= 4; W32(r_esp, 0x4ae6d1u); f_004ae724();
    /* 004ae6d1: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ae6d6: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 004ae6d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae6da: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4ae6dfu); f_00509590();
    /* 004ae6df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ae6e2: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 004ae6e8: jmp 0x4ae640 */ goto L_004ae640;
L_004ae6ed:; BB(0x004ae6ed);
    /* 004ae6ed: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 004ae6f3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ae6f6: add edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ae6f9: mov dword ptr [ebp + 0x3d0], edx */ W32((u32)(r_ebp+0x3d0u), r_edx);
    /* 004ae6ff: jmp 0x4ae640 */ goto L_004ae640;
L_004ae704:; BB(0x004ae704);
    /* 004ae704: mov ebx, dword ptr [ebp + ecx*8 + 0x3b4] */ r_ebx = R32((u32)(r_ebp+r_ecx*8+0x3b4u));
    /* 004ae70b: cmp ebx, dword ptr [esi*4 + 0xaad664] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi*4+0xaad664u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae712: jne 0x4ae44f */ if (!fZ) goto L_004ae44f;
L_004ae718:; BB(0x004ae718);
    /* 004ae718: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 004ae71c: jmp 0x4ae45a */ goto L_004ae45a;
}

void f_004ae724(void) /* sub_4AE724 */
{
    FN_ENTER(0x004ae724);
    /* 004ae724: mov edx, dword ptr [ecx + 0x3d4] */ r_edx = R32((u32)(r_ecx+0x3d4u));
    /* 004ae72a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ae72c: je 0x4ae745 */ if (fZ) goto L_004ae745;
L_004ae72e:; BB(0x004ae72e);
    /* 004ae72e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ae732: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ae737: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ae73b: mov dword ptr [ecx + 0x3d4], 0 */ W32((u32)(r_ecx+0x3d4u), 0x0u);
L_004ae745:; BB(0x004ae745);
    /* 004ae745: ret  */ FN_RET(0x004ae724); r_esp += 4; return;
}

void f_004ae748(void) /* sub_4AE748 */
{
    FN_ENTER(0x004ae748);
    /* 004ae748: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ae749: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae74a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ae74d: mov edi, ecx */ r_edi = r_ecx;
    /* 004ae74f: lea ebp, [edi + 0x30c] */ r_ebp = (u32)(r_edi+0x30cu);
    /* 004ae755: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae756: mov ecx, edi */ r_ecx = r_edi;
    /* 004ae758: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae75d: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4ae762u); f_007714cc();
    /* 004ae762: fld dword ptr [0x904808] */ FPUSH(R_F32((u32)(0x904808u)));
    /* 004ae768: mov edx, dword ptr [edi + 0x3a8] */ r_edx = R32((u32)(r_edi+0x3a8u));
    /* 004ae76e: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 004ae770: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004ae774: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004ae777: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae77c: je 0x4ae8dc */ if (fZ) goto L_004ae8dc;
L_004ae782:; BB(0x004ae782);
    /* 004ae782: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ae784: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4ae789u); f_0082df08();
    /* 004ae789: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ae78b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004ae78f: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 004ae795: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ae797: fld dword ptr [edi + 0x310] */ FPUSH(R_F32((u32)(r_edi+0x310u)));
    /* 004ae79d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004ae79f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ae7a1: fst dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0));
    /* 004ae7a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ae7a9: fstp dword ptr [edi + 0x310] */ W_F32((u32)(r_edi+0x310u), ST(0)); FPOP();
    /* 004ae7af: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 004ae7b5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004ae7b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ae7b9: fst dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0));
L_004ae7bf:; BB(0x004ae7bf);
    /* 004ae7bf: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004ae7c1: fmul qword ptr [0x9047c0] */ ST(0) = ST(0) * R_F64((u32)(0x9047c0u));
    /* 004ae7c7: fdiv qword ptr [0x9047b8] */ ST(0) = ST(0) / R_F64((u32)(0x9047b8u));
    /* 004ae7cd: mov ebp, dword ptr [edi + 0xa4] */ r_ebp = R32((u32)(r_edi+0xa4u));
    /* 004ae7d3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004ae7d6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004ae7da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ae7df: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ae7e3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004ae7e7: fistp dword ptr [edi + 0x60] */ W32((u32)(r_edi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ae7ea: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004ae7ed: mov eax, 2 */ r_eax = 0x2u;
    /* 004ae7f2: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 004ae7f9: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004ae7fc: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ae802: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 004ae805: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 004ae80c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae80e: je 0x4ae8c4 */ if (fZ) goto L_004ae8c4;
L_004ae814:; BB(0x004ae814);
    /* 004ae814: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae817: je 0x4ae85b */ if (fZ) goto L_004ae85b;
L_004ae819:; BB(0x004ae819);
    /* 004ae819: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae81c: je 0x4ae861 */ if (fZ) goto L_004ae861;
L_004ae81e:; BB(0x004ae81e);
    /* 004ae81e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae821: je 0x4ae84f */ if (fZ) goto L_004ae84f;
L_004ae823:; BB(0x004ae823);
    /* 004ae823: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae826: jne 0x4ae85b */ if (!fZ) goto L_004ae85b;
L_004ae828:; BB(0x004ae828);
    /* 004ae828: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004ae82b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ae82d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae82e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae82f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ae830: push 0x3f5 */ { u32 v = 0x3f5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ae835: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ae83au); f_00814298();
    /* 004ae83a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ae83d: mov eax, 1 */ r_eax = 0x1u;
    /* 004ae842: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004ae849: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae84c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ae84d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ae84e: ret  */ FN_RET(0x004ae748); r_esp += 4; return;
L_004ae84f:; BB(0x004ae84f);
    /* 004ae84f: mov eax, 4 */ r_eax = 0x4u;
    /* 004ae854: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_004ae85b:; BB(0x004ae85b);
    /* 004ae85b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae85e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ae85f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ae860: ret  */ FN_RET(0x004ae748); r_esp += 4; return;
L_004ae861:; BB(0x004ae861);
    /* 004ae861: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ae863: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004ae86a: mov dword ptr [edi + 0x3b0], eax */ W32((u32)(r_edi+0x3b0u), r_eax);
    /* 004ae870: mov dword ptr [edi + 0x3b4], eax */ W32((u32)(r_edi+0x3b4u), r_eax);
    /* 004ae876: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 004ae87c: mov dword ptr [edi + 0x3bc], eax */ W32((u32)(r_edi+0x3bcu), r_eax);
    /* 004ae882: mov dword ptr [edi + 0x3c0], eax */ W32((u32)(r_edi+0x3c0u), r_eax);
    /* 004ae888: mov dword ptr [edi + 0x3c4], eax */ W32((u32)(r_edi+0x3c4u), r_eax);
    /* 004ae88e: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 004ae894: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 004ae89a: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 004ae8a0: mov ecx, edi */ r_ecx = r_edi;
    /* 004ae8a2: call 0x4ae724 */ r_esp -= 4; W32(r_esp, 0x4ae8a7u); f_004ae724();
    /* 004ae8a7: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ae8ac: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004ae8af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae8b0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4ae8b5u); f_00509590();
    /* 004ae8b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ae8b8: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 004ae8be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae8c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ae8c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ae8c3: ret  */ FN_RET(0x004ae748); r_esp += 4; return;
L_004ae8c4:; BB(0x004ae8c4);
    /* 004ae8c4: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 004ae8ca: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ae8cd: add edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ae8d0: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 004ae8d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae8d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ae8da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ae8db: ret  */ FN_RET(0x004ae748); r_esp += 4; return;
L_004ae8dc:; BB(0x004ae8dc);
    /* 004ae8dc: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 004ae8df: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ae8e4u); f_0082dcbc();
    /* 004ae8e4: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 004ae8e8: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 004ae8eb: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 004ae8f1: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 004ae8fb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4ae900u); f_0082ddd8();
    /* 004ae900: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 004ae904: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 004ae90a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ae90c: fst dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0));
    /* 004ae912: jmp 0x4ae7bf */ goto L_004ae7bf;
}

void f_004ae918(void) /* sub_4AE918 */
{
    FN_ENTER(0x004ae918);
    /* 004ae918: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ae919: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ae91c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ae91e: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 004ae924: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ae927: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 004ae92d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ae92f: jl 0x4aebff */ if ((fS!=fO)) goto L_004aebff;
L_004ae935:; BB(0x004ae935);
    /* 004ae935: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
L_004ae93c:; BB(0x004ae93c);
    /* 004ae93c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae93f: je 0x4aeb8e */ if (fZ) goto L_004aeb8e;
L_004ae945:; BB(0x004ae945);
    /* 004ae945: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 004ae94b: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ae94e: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae954: je 0x4aeb26 */ if (fZ) goto L_004aeb26;
L_004ae95a:; BB(0x004ae95a);
    /* 004ae95a: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x4ae95fu); f_007b8cec();
    /* 004ae95f: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004ae962: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 004ae96a: lea eax, [ebp + 0x37c] */ r_eax = (u32)(r_ebp+0x37cu);
    /* 004ae970: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ae973: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004ae976: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004ae97a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004ae97e: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004ae981: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ae985: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 004ae988: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ae98c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ae98f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae990: call 0x7b9788 */ r_esp -= 4; W32(r_esp, 0x4ae995u); f_007b9788();
    /* 004ae995: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ae996: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004ae99b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ae99d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae99f: je 0x4aeb21 */ if (fZ) goto L_004aeb21;
L_004ae9a5:; BB(0x004ae9a5);
    /* 004ae9a5: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 004ae9a9: mov ebx, edx */ r_ebx = r_edx;
    /* 004ae9ab: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 004ae9af: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
L_004ae9b3:; BB(0x004ae9b3);
    /* 004ae9b3: mov edi, dword ptr [ebp + 0x3ac] */ r_edi = R32((u32)(r_ebp+0x3acu));
    /* 004ae9b9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004ae9bc: jae 0x4aeb0a */ if (!fC) goto L_004aeb0a;
L_004ae9c2:; BB(0x004ae9c2);
    /* 004ae9c2: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004ae9c5: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004ae9c8: lea ecx, [ecx + ecx + 0xaad660] */ r_ecx = (u32)(r_ecx+r_ecx+0xaad660u);
    /* 004ae9cf: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 004ae9d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ae9d5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae9d7: je 0x4ae9fc */ if (fZ) goto L_004ae9fc;
L_004ae9d9:; BB(0x004ae9d9);
    /* 004ae9d9: mov edx, dword ptr [esi*4 + 0xaad660] */ r_edx = R32((u32)(r_esi*4+0xaad660u));
    /* 004ae9e0: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
L_004ae9e4:; BB(0x004ae9e4);
    /* 004ae9e4: cmp edx, dword ptr [ebp + ecx*8 + 0x3b0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*8+0x3b0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae9eb: je 0x4aeb71 */ if (fZ) goto L_004aeb71;
L_004ae9f1:; BB(0x004ae9f1);
    /* 004ae9f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ae9f4: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae9f6: jne 0x4ae9e4 */ if (!fZ) goto L_004ae9e4;
L_004ae9f8:; BB(0x004ae9f8);
    /* 004ae9f8: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
L_004ae9fc:; BB(0x004ae9fc);
    /* 004ae9fc: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ae9fe: jne 0x4aeb0a */ if (!fZ) goto L_004aeb0a;
L_004aea04:; BB(0x004aea04);
    /* 004aea04: mov edx, dword ptr [esi*4 + 0xaad660] */ r_edx = R32((u32)(r_esi*4+0xaad660u));
    /* 004aea0b: movzx ecx, word ptr [edx + 0x96] */ r_ecx = (u32)R16((u32)(r_edx+0x96u));
    /* 004aea12: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aea15: jne 0x4aeb0a */ if (!fZ) goto L_004aeb0a;
L_004aea1b:; BB(0x004aea1b);
    /* 004aea1b: mov dword ptr [ebp + edi*8 + 0x3b0], edx */ W32((u32)(r_ebp+r_edi*8+0x3b0u), r_edx);
    /* 004aea22: mov eax, dword ptr [esi*4 + 0xaad664] */ r_eax = R32((u32)(r_esi*4+0xaad664u));
    /* 004aea29: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 004aea2d: mov ecx, dword ptr [ebp + 0x3ac] */ r_ecx = R32((u32)(r_ebp+0x3acu));
    /* 004aea33: mov dword ptr [ebp + ecx*8 + 0x3b4], eax */ W32((u32)(r_ebp+r_ecx*8+0x3b4u), r_eax);
    /* 004aea3a: add dword ptr [ebp + 0x3ac], 1 */ { u32 ad = (u32)(r_ebp+0x3acu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004aea41: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aea43: je 0x4aeb05 */ if (fZ) goto L_004aeb05;
L_004aea49:; BB(0x004aea49);
    /* 004aea49: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004aea50: fld dword ptr [ebp + 0x35c] */ FPUSH(R_F32((u32)(r_ebp+0x35cu)));
    /* 004aea56: fcomp dword ptr [0x9047fc] */ fx_compare(ST(0), R_F32((u32)(0x9047fcu))); FPOP();
    /* 004aea5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aea5e: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 004aea62: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aea63: jne 0x4aea96 */ if (!fZ) goto L_004aea96;
L_004aea65:; BB(0x004aea65);
    /* 004aea65: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aea6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aea6b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004aea6d: mov ecx, edi */ r_ecx = r_edi;
    /* 004aea6f: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x4aea72u); call_ind(t); }
    /* 004aea72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aea74: jne 0x4aea80 */ if (!fZ) goto L_004aea80;
L_004aea76:; BB(0x004aea76);
    /* 004aea76: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004aea7b: jmp 0x4aeb0a */ goto L_004aeb0a;
L_004aea80:; BB(0x004aea80);
    /* 004aea80: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aea85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aea86: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 004aea88: mov ecx, edi */ r_ecx = r_edi;
    /* 004aea8a: call dword ptr [esi + 0x5c] */ { u32 t = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, 0x4aea8du); call_ind(t); }
    /* 004aea8d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aea8f: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004aea94: jmp 0x4aeb0a */ goto L_004aeb0a;
L_004aea96:; BB(0x004aea96);
    /* 004aea96: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 004aea9d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aeaa0: jne 0x4aeaa9 */ if (!fZ) goto L_004aeaa9;
L_004aeaa2:; BB(0x004aeaa2);
    /* 004aeaa2: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004aeaa7: jmp 0x4aeb0a */ goto L_004aeb0a;
L_004aeaa9:; BB(0x004aeaa9);
    /* 004aeaa9: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004aeaae: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aeab1: je 0x4aeb2b */ if (fZ) goto L_004aeb2b;
L_004aeab3:; BB(0x004aeab3);
    /* 004aeab3: mov dword ptr [esp + 0x18], 0x12 */ W32((u32)(r_esp+0x18u), 0x12u);
L_004aeabb:; BB(0x004aeabb);
    /* 004aeabb: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 004aeabf: mov eax, dword ptr [esi*4 + 0xaad664] */ r_eax = R32((u32)(r_esi*4+0xaad664u));
    /* 004aeac6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004aeac8: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004aeacb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aeacd: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004aeacf: mov dword ptr [esp + 0x1c], 0x42c80000 */ W32((u32)(r_esp+0x1cu), 0x42c80000u);
    /* 004aead7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aead9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aeadb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004aeadd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aeadf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aeae1: add esi, dword ptr [edi + 0xa4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004aeae7: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 004aeaec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aeaed: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004aeaee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004aeaef: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aeaf4: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aeaf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aeaf9: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4aeafcu); call_ind(t); }
    /* 004aeafc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004aeafe: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
    /* 004aeb03: jmp 0x4aeb0a */ goto L_004aeb0a;
L_004aeb05:; BB(0x004aeb05);
    /* 004aeb05: mov eax, dword ptr [0xaae15c] */ r_eax = R32((u32)(0xaae15cu));
L_004aeb0a:; BB(0x004aeb0a);
    /* 004aeb0a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004aeb0d: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aeb0f: jne 0x4ae9b3 */ if (!fZ) goto L_004ae9b3;
L_004aeb15:; BB(0x004aeb15);
    /* 004aeb15: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 004aeb19: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 004aeb1d: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
L_004aeb21:; BB(0x004aeb21);
    /* 004aeb21: call 0x7b8cec */ r_esp -= 4; W32(r_esp, 0x4aeb26u); f_007b8cec();
L_004aeb26:; BB(0x004aeb26);
    /* 004aeb26: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004aeb29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aeb2a: ret  */ FN_RET(0x004ae918); r_esp += 4; return;
L_004aeb2b:; BB(0x004aeb2b);
    /* 004aeb2b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4aeb30u); f_008587a5();
    /* 004aeb30: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004aeb34: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004aeb38: fdiv dword ptr [0x9047f4] */ ST(0) = ST(0) / R_F32((u32)(0x9047f4u));
    /* 004aeb3e: fcomp dword ptr [0x9047f0] */ fx_compare(ST(0), R_F32((u32)(0x9047f0u))); FPOP();
    /* 004aeb44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aeb46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aeb47: ja 0x4aeb5d */ if ((!fC&&!fZ)) goto L_004aeb5d;
L_004aeb49:; BB(0x004aeb49);
    /* 004aeb49: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004aeb50: mov dword ptr [esp + 0x18], 0x10 */ W32((u32)(r_esp+0x18u), 0x10u);
    /* 004aeb58: jmp 0x4aeabb */ goto L_004aeabb;
L_004aeb5d:; BB(0x004aeb5d);
    /* 004aeb5d: mov edi, dword ptr [esi*4 + 0xaad660] */ r_edi = R32((u32)(r_esi*4+0xaad660u));
    /* 004aeb64: mov dword ptr [esp + 0x18], 0x10 */ W32((u32)(r_esp+0x18u), 0x10u);
    /* 004aeb6c: jmp 0x4aeabb */ goto L_004aeabb;
L_004aeb71:; BB(0x004aeb71);
    /* 004aeb71: mov ebx, dword ptr [ebp + ecx*8 + 0x3b4] */ r_ebx = R32((u32)(r_ebp+r_ecx*8+0x3b4u));
    /* 004aeb78: cmp ebx, dword ptr [esi*4 + 0xaad664] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi*4+0xaad664u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aeb7f: jne 0x4ae9f1 */ if (!fZ) goto L_004ae9f1;
L_004aeb85:; BB(0x004aeb85);
    /* 004aeb85: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 004aeb89: jmp 0x4ae9fc */ goto L_004ae9fc;
L_004aeb8e:; BB(0x004aeb8e);
    /* 004aeb8e: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aeb93: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004aeb95: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4aeb9au); f_007aaa30();
    /* 004aeb9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aeb9c: je 0x4ae945 */ if (fZ) goto L_004ae945;
L_004aeba2:; BB(0x004aeba2);
    /* 004aeba2: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 004aeba8: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004aebab: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aebb0: je 0x4aebba */ if (fZ) goto L_004aebba;
L_004aebb2:; BB(0x004aebb2);
    /* 004aebb2: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004aebb7: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_004aebba:; BB(0x004aebba);
    /* 004aebba: fld dword ptr [ebp + 0x35c] */ FPUSH(R_F32((u32)(r_ebp+0x35cu)));
    /* 004aebc0: fcomp dword ptr [0x9047fc] */ fx_compare(ST(0), R_F32((u32)(0x9047fcu))); FPOP();
    /* 004aebc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aebc8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aebc9: jne 0x4aebe5 */ if (!fZ) goto L_004aebe5;
L_004aebcb:; BB(0x004aebcb);
    /* 004aebcb: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004aebce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004aebd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aebd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aebd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aebd3: push 0x3f1 */ { u32 v = 0x3f1u; r_esp -= 4; W32(r_esp, v); }
    /* 004aebd8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4aebddu); f_00814298();
    /* 004aebdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aebe0: jmp 0x4ae945 */ goto L_004ae945;
L_004aebe5:; BB(0x004aebe5);
    /* 004aebe5: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004aebe8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004aebea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aebeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aebec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aebed: push 0x3f2 */ { u32 v = 0x3f2u; r_esp -= 4; W32(r_esp, v); }
    /* 004aebf2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4aebf7u); f_00814298();
    /* 004aebf7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aebfa: jmp 0x4ae945 */ goto L_004ae945;
L_004aebff:; BB(0x004aebff);
    /* 004aebff: mov eax, 1 */ r_eax = 0x1u;
    /* 004aec04: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 004aec0b: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 004aec11: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004aec14: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004aec1a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 004aec1d: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004aec24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aec26: je 0x4aed06 */ if (fZ) goto L_004aed06;
L_004aec2c:; BB(0x004aec2c);
    /* 004aec2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aec2f: je 0x4aecfa */ if (fZ) goto L_004aecfa;
L_004aec35:; BB(0x004aec35);
    /* 004aec35: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aec38: je 0x4aec91 */ if (fZ) goto L_004aec91;
L_004aec3a:; BB(0x004aec3a);
    /* 004aec3a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aec3d: je 0x4aec7b */ if (fZ) goto L_004aec7b;
L_004aec3f:; BB(0x004aec3f);
    /* 004aec3f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aec42: je 0x4aec50 */ if (fZ) goto L_004aec50;
L_004aec44:; BB(0x004aec44);
    /* 004aec44: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004aec4b: jmp 0x4ae93c */ goto L_004ae93c;
L_004aec50:; BB(0x004aec50);
    /* 004aec50: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004aec53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004aec55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aec56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aec57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aec58: push 0x3f5 */ { u32 v = 0x3f5u; r_esp -= 4; W32(r_esp, v); }
    /* 004aec5d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4aec62u); f_00814298();
    /* 004aec62: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aec65: mov edx, 1 */ r_edx = 0x1u;
    /* 004aec6a: mov eax, 1 */ r_eax = 0x1u;
    /* 004aec6f: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004aec76: jmp 0x4ae93c */ goto L_004ae93c;
L_004aec7b:; BB(0x004aec7b);
    /* 004aec7b: mov edx, 4 */ r_edx = 0x4u;
    /* 004aec80: mov eax, 4 */ r_eax = 0x4u;
    /* 004aec85: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004aec8c: jmp 0x4ae93c */ goto L_004ae93c;
L_004aec91:; BB(0x004aec91);
    /* 004aec91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004aec93: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004aec9a: mov dword ptr [ebp + 0x3b0], eax */ W32((u32)(r_ebp+0x3b0u), r_eax);
    /* 004aeca0: mov dword ptr [ebp + 0x3b4], eax */ W32((u32)(r_ebp+0x3b4u), r_eax);
    /* 004aeca6: mov dword ptr [ebp + 0x3b8], eax */ W32((u32)(r_ebp+0x3b8u), r_eax);
    /* 004aecac: mov dword ptr [ebp + 0x3bc], eax */ W32((u32)(r_ebp+0x3bcu), r_eax);
    /* 004aecb2: mov dword ptr [ebp + 0x3c0], eax */ W32((u32)(r_ebp+0x3c0u), r_eax);
    /* 004aecb8: mov dword ptr [ebp + 0x3c4], eax */ W32((u32)(r_ebp+0x3c4u), r_eax);
    /* 004aecbe: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004aecc4: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 004aecca: mov dword ptr [ebp + 0x3ac], eax */ W32((u32)(r_ebp+0x3acu), r_eax);
    /* 004aecd0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004aecd2: call 0x4ae724 */ r_esp -= 4; W32(r_esp, 0x4aecd7u); f_004ae724();
    /* 004aecd7: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 004aecdc: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 004aecdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aece0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4aece5u); f_00509590();
    /* 004aece5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aece8: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004aecef: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 004aecf5: jmp 0x4ae93c */ goto L_004ae93c;
L_004aecfa:; BB(0x004aecfa);
    /* 004aecfa: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004aed01: jmp 0x4ae93c */ goto L_004ae93c;
L_004aed06:; BB(0x004aed06);
    /* 004aed06: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 004aed0c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004aed0f: add edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004aed12: mov dword ptr [ebp + 0x3d0], edx */ W32((u32)(r_ebp+0x3d0u), r_edx);
    /* 004aed18: movsx edx, word ptr [ebp + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004aed1f: jmp 0x4ae93c */ goto L_004ae93c;
}

void f_004aed24(void) /* sub_4AED24 */
{
    FN_ENTER(0x004aed24);
    /* 004aed24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004aed25: mov esi, ecx */ r_esi = r_ecx;
    /* 004aed27: mov ecx, esi */ r_ecx = r_esi;
    /* 004aed29: call 0x4aed78 */ r_esp -= 4; W32(r_esp, 0x4aed2eu); f_004aed78();
    /* 004aed2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aed30: je 0x4aed76 */ if (fZ) goto L_004aed76;
L_004aed32:; BB(0x004aed32);
    /* 004aed32: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aed35: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x4aed3au); f_0081a9b8();
    /* 004aed3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aed3b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4aed40u); f_0082fa9c();
    /* 004aed40: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4aed45u); f_0082d7b0();
    /* 004aed45: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 004aed48: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4aed4du); f_0082d838();
    /* 004aed4d: push dword ptr [esi + 0x64] */ { u32 v = R32((u32)(r_esi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aed50: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004aed53: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 004aed56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004aed58: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x4aed5du); f_0083a314();
    /* 004aed5d: lea ecx, [esi + 0x68] */ r_ecx = (u32)(r_esi+0x68u);
    /* 004aed60: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4aed65u); f_00831290();
    /* 004aed65: mov ecx, esi */ r_ecx = r_esi;
    /* 004aed67: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4aed6cu); f_007aa668();
    /* 004aed6c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4aed71u); f_0082da80();
    /* 004aed71: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4aed76u); f_0082faac();
L_004aed76:; BB(0x004aed76);
    /* 004aed76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004aed77: ret  */ FN_RET(0x004aed24); r_esp += 4; return;
}

void f_004aed78(void) /* sub_4AED78 */
{
    FN_ENTER(0x004aed78);
    /* 004aed78: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 004aed7d: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004aed7f: je 0x4aeda0 */ if (fZ) goto L_004aeda0;
L_004aed81:; BB(0x004aed81);
    /* 004aed81: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004aed84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004aed85: push 0x9047d8 */ { u32 v = 0x9047d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004aed8a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x4aed8fu); f_007a9180();
    /* 004aed8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 004aed92: fcomp dword ptr [0x9047d4] */ fx_compare(ST(0), R_F32((u32)(0x9047d4u))); FPOP();
    /* 004aed98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004aed9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004aed9b: jbe 0x4aedb3 */ if ((fC||fZ)) goto L_004aedb3;
L_004aed9d:; BB(0x004aed9d);
    /* 004aed9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aed9f: ret  */ FN_RET(0x004aed78); r_esp += 4; return;
L_004aeda0:; BB(0x004aeda0);
    /* 004aeda0: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aeda5: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004aedaa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004aedac: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x4aedafu); call_ind(t); }
    /* 004aedaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aedb1: je 0x4aed9d */ if (fZ) goto L_004aed9d;
L_004aedb3:; BB(0x004aedb3);
    /* 004aedb3: mov eax, 1 */ r_eax = 0x1u;
    /* 004aedb8: ret  */ FN_RET(0x004aed78); r_esp += 4; return;
}

void f_004aedbc(void) /* sub_4AEDBC */
{
    FN_ENTER(0x004aedbc);
    /* 004aedbc: mov dword ptr [0xa4775c], 0x3f800000 */ W32((u32)(0xa4775cu), 0x3f800000u);
    /* 004aedc6: mov dword ptr [0xa47760], 0x41000000 */ W32((u32)(0xa47760u), 0x41000000u);
    /* 004aedd0: mov dword ptr [0xa47764], 0x3fc00000 */ W32((u32)(0xa47764u), 0x3fc00000u);
    /* 004aedda: ret  */ FN_RET(0x004aedbc); r_esp += 4; return;
}

void f_004aeddc(void) /* sub_4AEDDC */
{
    FN_ENTER(0x004aeddc);
    /* 004aeddc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aeddd: mov ebp, esp */ r_ebp = r_esp;
    /* 004aeddf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004aede1: push 0x8d0b54 */ { u32 v = 0x8d0b54u; r_esp -= 4; W32(r_esp, v); }
    /* 004aede6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004aedec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aeded: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004aedf4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aedf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004aedfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004aedfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004aee00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004aee03: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004aee08: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004aee0f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4aee14u); f_008581c5();
    /* 004aee14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aee15: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004aee18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aee1a: je 0x4aee5b */ if (fZ) goto L_004aee5b;
L_004aee1c:; BB(0x004aee1c);
    /* 004aee1c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004aee23: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004aee2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aee2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004aee2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aee30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aee31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aee32: push 0x9ab9a8 */ { u32 v = 0x9ab9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004aee37: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004aee39: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4aee3eu); f_005b7a84();
    /* 004aee3e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004aee41: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004aee48:; BB(0x004aee48);
    /* 004aee48: mov dword ptr [0xa47758], eax */ W32((u32)(0xa47758u), r_eax);
    /* 004aee4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004aee50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004aee57: mov esp, ebp */ r_esp = r_ebp;
    /* 004aee59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004aee5a: ret  */ FN_RET(0x004aeddc); r_esp += 4; return;
L_004aee5b:; BB(0x004aee5b);
    /* 004aee5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004aee5d: jmp 0x4aee48 */ goto L_004aee48;
}

void f_004aee60(void) /* sub_4AEE60 */
{
    FN_ENTER(0x004aee60);
    /* 004aee60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aee61: mov ebp, esp */ r_ebp = r_esp;
    /* 004aee63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004aee65: push 0x8d0bee */ { u32 v = 0x8d0beeu; r_esp -= 4; W32(r_esp, v); }
    /* 004aee6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004aee70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aee71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004aee78: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004aee7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004aee7e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004aee81: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004aee84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004aee87: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004aee8a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004aee8d: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004aee94: mov eax, ecx */ r_eax = r_ecx;
    /* 004aee96: mov edx, dword ptr [eax + 0x78c] */ r_edx = R32((u32)(r_eax+0x78cu));
    /* 004aee9c: mov dword ptr [eax], 0xafab60 */ W32((u32)(r_eax), 0xafab60u);
    /* 004aeea2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aeea4: je 0x4aeebf */ if (fZ) goto L_004aeebf;
L_004aeea6:; BB(0x004aeea6);
    /* 004aeea6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aeeaa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aeeaf: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aeeb3: mov edx, ecx */ r_edx = r_ecx;
    /* 004aeeb5: mov dword ptr [edx + 0x78c], 0 */ W32((u32)(r_edx+0x78cu), 0x0u);
L_004aeebf:; BB(0x004aeebf);
    /* 004aeebf: mov eax, ecx */ r_eax = r_ecx;
    /* 004aeec1: mov edx, dword ptr [eax + 0x790] */ r_edx = R32((u32)(r_eax+0x790u));
    /* 004aeec7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aeec9: je 0x4aeee4 */ if (fZ) goto L_004aeee4;
L_004aeecb:; BB(0x004aeecb);
    /* 004aeecb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aeecf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aeed4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aeed8: mov edx, ecx */ r_edx = r_ecx;
    /* 004aeeda: mov dword ptr [edx + 0x790], 0 */ W32((u32)(r_edx+0x790u), 0x0u);
L_004aeee4:; BB(0x004aeee4);
    /* 004aeee4: mov eax, ecx */ r_eax = r_ecx;
    /* 004aeee6: mov edx, dword ptr [eax + 0x794] */ r_edx = R32((u32)(r_eax+0x794u));
    /* 004aeeec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aeeee: je 0x4aef09 */ if (fZ) goto L_004aef09;
L_004aeef0:; BB(0x004aeef0);
    /* 004aeef0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aeef4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aeef9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aeefd: mov edx, ecx */ r_edx = r_ecx;
    /* 004aeeff: mov dword ptr [edx + 0x794], 0 */ W32((u32)(r_edx+0x794u), 0x0u);
L_004aef09:; BB(0x004aef09);
    /* 004aef09: mov eax, ecx */ r_eax = r_ecx;
    /* 004aef0b: mov edx, dword ptr [eax + 0x798] */ r_edx = R32((u32)(r_eax+0x798u));
    /* 004aef11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aef13: je 0x4aef2e */ if (fZ) goto L_004aef2e;
L_004aef15:; BB(0x004aef15);
    /* 004aef15: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aef19: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aef1e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aef22: mov edx, ecx */ r_edx = r_ecx;
    /* 004aef24: mov dword ptr [edx + 0x798], 0 */ W32((u32)(r_edx+0x798u), 0x0u);
L_004aef2e:; BB(0x004aef2e);
    /* 004aef2e: mov eax, ecx */ r_eax = r_ecx;
    /* 004aef30: mov edx, dword ptr [eax + 0x79c] */ r_edx = R32((u32)(r_eax+0x79cu));
    /* 004aef36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aef38: je 0x4aef53 */ if (fZ) goto L_004aef53;
L_004aef3a:; BB(0x004aef3a);
    /* 004aef3a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aef3e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aef43: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aef47: mov edx, ecx */ r_edx = r_ecx;
    /* 004aef49: mov dword ptr [edx + 0x79c], 0 */ W32((u32)(r_edx+0x79cu), 0x0u);
L_004aef53:; BB(0x004aef53);
    /* 004aef53: mov eax, ecx */ r_eax = r_ecx;
    /* 004aef55: mov edx, dword ptr [eax + 0x7a0] */ r_edx = R32((u32)(r_eax+0x7a0u));
    /* 004aef5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aef5d: je 0x4aef78 */ if (fZ) goto L_004aef78;
L_004aef5f:; BB(0x004aef5f);
    /* 004aef5f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aef63: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aef68: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aef6c: mov edx, ecx */ r_edx = r_ecx;
    /* 004aef6e: mov dword ptr [edx + 0x7a0], 0 */ W32((u32)(r_edx+0x7a0u), 0x0u);
L_004aef78:; BB(0x004aef78);
    /* 004aef78: mov eax, ecx */ r_eax = r_ecx;
    /* 004aef7a: mov edx, dword ptr [eax + 0x7a4] */ r_edx = R32((u32)(r_eax+0x7a4u));
    /* 004aef80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aef82: je 0x4aef9d */ if (fZ) goto L_004aef9d;
L_004aef84:; BB(0x004aef84);
    /* 004aef84: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aef88: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aef8d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aef91: mov edx, ecx */ r_edx = r_ecx;
    /* 004aef93: mov dword ptr [edx + 0x7a4], 0 */ W32((u32)(r_edx+0x7a4u), 0x0u);
L_004aef9d:; BB(0x004aef9d);
    /* 004aef9d: mov eax, ecx */ r_eax = r_ecx;
    /* 004aef9f: push dword ptr [eax + 0x6dc] */ { u32 v = R32((u32)(r_eax+0x6dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004aefa5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4aefaau); f_00857e98();
    /* 004aefaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004aefab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004aefae: mov edx, dword ptr [eax + 0x724] */ r_edx = R32((u32)(r_eax+0x724u));
    /* 004aefb4: mov dword ptr [eax + 0x6dc], 0 */ W32((u32)(r_eax+0x6dcu), 0x0u);
    /* 004aefbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aefc0: je 0x4aefdc */ if (fZ) goto L_004aefdc;
L_004aefc2:; BB(0x004aefc2);
    /* 004aefc2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aefc6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aefcb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aefcf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aefd2: mov dword ptr [edx + 0x724], 0 */ W32((u32)(r_edx+0x724u), 0x0u);
L_004aefdc:; BB(0x004aefdc);
    /* 004aefdc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004aefdf: mov edx, dword ptr [eax + 0x728] */ r_edx = R32((u32)(r_eax+0x728u));
    /* 004aefe5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004aefe7: je 0x4af003 */ if (fZ) goto L_004af003;
L_004aefe9:; BB(0x004aefe9);
    /* 004aefe9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004aefed: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004aeff2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004aeff6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004aeff9: mov dword ptr [edx + 0x728], 0 */ W32((u32)(r_edx+0x728u), 0x0u);
L_004af003:; BB(0x004af003);
    /* 004af003: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004af006: mov ecx, dword ptr [eax + 0x720] */ r_ecx = R32((u32)(r_eax+0x720u));
    /* 004af00c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af00e: je 0x4af026 */ if (fZ) goto L_004af026;
L_004af010:; BB(0x004af010);
    /* 004af010: je 0x4af019 */ if (fZ) goto L_004af019;
L_004af012:; BB(0x004af012);
    /* 004af012: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004af014: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4af019u); f_00418aa8();
L_004af019:; BB(0x004af019);
    /* 004af019: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004af01c: mov dword ptr [eax + 0x720], 0 */ W32((u32)(r_eax+0x720u), 0x0u);
L_004af026:; BB(0x004af026);
    /* 004af026: mov edx, dword ptr [eax + 0x710] */ r_edx = R32((u32)(r_eax+0x710u));
    /* 004af02c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af02e: je 0x4af04a */ if (fZ) goto L_004af04a;
L_004af030:; BB(0x004af030);
    /* 004af030: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004af034: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004af039: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004af03d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004af040: mov dword ptr [edx + 0x710], 0 */ W32((u32)(r_edx+0x710u), 0x0u);
L_004af04a:; BB(0x004af04a);
    /* 004af04a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004af04d: mov ebx, dword ptr [edx + 0x6f0] */ r_ebx = R32((u32)(r_edx+0x6f0u));
    /* 004af053: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004af057: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004af05d: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 004af061: mov edi, dword ptr [edx + 0x6ec] */ r_edi = R32((u32)(r_edx+0x6ecu));
    /* 004af067: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004af069: mov dword ptr [edx + 0x6f0], eax */ W32((u32)(r_edx+0x6f0u), r_eax);
    /* 004af06f: movzx esi, word ptr [edi + 8] */ r_esi = (u32)R16((u32)(r_edi+0x8u));
    /* 004af073: or esi, 0xffff0001 */ {  u32 a = r_esi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 004af079: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 004af07d: mov ebx, dword ptr [edx + 0x6e8] */ r_ebx = R32((u32)(r_edx+0x6e8u));
    /* 004af083: mov dword ptr [edx + 0x6ec], eax */ W32((u32)(r_edx+0x6ecu), r_eax);
    /* 004af089: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004af08d: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004af093: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 004af097: mov ebx, dword ptr [edx + 0x6e4] */ r_ebx = R32((u32)(r_edx+0x6e4u));
    /* 004af09d: mov dword ptr [edx + 0x6e8], eax */ W32((u32)(r_edx+0x6e8u), r_eax);
    /* 004af0a3: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 004af0a7: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004af0ad: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 004af0b1: push dword ptr [edx + 0x6e0] */ { u32 v = R32((u32)(r_edx+0x6e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004af0b7: mov dword ptr [edx + 0x6e4], eax */ W32((u32)(r_edx+0x6e4u), r_eax);
    /* 004af0bd: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4af0c2u); f_00857e98();
    /* 004af0c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004af0c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004af0c6: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x4af0cbu); f_007b9de0();
    /* 004af0cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004af0ce: cmp eax, dword ptr [0xa47ad0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa47ad0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004af0d4: jne 0x4af0e0 */ if (!fZ) goto L_004af0e0;
L_004af0d6:; BB(0x004af0d6);
    /* 004af0d6: mov dword ptr [0xa47ad0], 0 */ W32((u32)(0xa47ad0u), 0x0u);
L_004af0e0:; BB(0x004af0e0);
    /* 004af0e0: mov ecx, eax */ r_ecx = r_eax;
    /* 004af0e2: call 0x4b60a0 */ r_esp -= 4; W32(r_esp, 0x4af0e7u); f_004b60a0();
    /* 004af0e7: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004af0ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004af0f1: lea ecx, [eax + 0x698] */ r_ecx = (u32)(r_eax+0x698u);
    /* 004af0f7: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4af0fcu); f_008171e8();
    /* 004af0fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004af103: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004af106: lea ecx, [eax + 0x678] */ r_ecx = (u32)(r_eax+0x678u);
    /* 004af10c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4af111u); f_0061cdb0();
    /* 004af111: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004af118: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004af11b: lea ecx, [eax + 0x658] */ r_ecx = (u32)(r_eax+0x658u);
    /* 004af121: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4af126u); f_0061cdb0();
    /* 004af126: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004af12d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004af130: lea ecx, [eax + 0x638] */ r_ecx = (u32)(r_eax+0x638u);
    /* 004af136: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4af13bu); f_0061cdb0();
    /* 004af13b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004af13e: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4af143u); f_0051f4fc();
    /* 004af143: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004af146: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004af148: jne 0x4af163 */ if (!fZ) goto L_004af163;
L_004af14a:; BB(0x004af14a);
    /* 004af14a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004af14d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004af150: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004af153: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004af156: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004af15d: mov esp, ebp */ r_esp = r_ebp;
    /* 004af15f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004af160: ret 4 */ FN_RET(0x004aee60); r_esp += 8; return;
L_004af163:; BB(0x004af163);
    /* 004af163: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004af166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004af167: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4af16cu); f_005c2f74();
    /* 004af16c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004af16d: jmp 0x4af14a */ goto L_004af14a;
}

