#include "protos.h"

void f_00689020(void) /* sub_689020 */
{
    FN_ENTER(0x00689020);
    /* 00689020: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00689021: mov esi, ecx */ r_esi = r_ecx;
    /* 00689023: mov ecx, esi */ r_ecx = r_esi;
    /* 00689025: call 0x689174 */ r_esp -= 4; W32(r_esp, 0x68902au); f_00689174();
    /* 0068902a: mov ecx, esi */ r_ecx = r_esi;
    /* 0068902c: call 0x689440 */ r_esp -= 4; W32(r_esp, 0x689031u); f_00689440();
    /* 00689031: mov ecx, esi */ r_ecx = r_esi;
    /* 00689033: call 0x689714 */ r_esp -= 4; W32(r_esp, 0x689038u); f_00689714();
    /* 00689038: mov ecx, esi */ r_ecx = r_esi;
    /* 0068903a: call 0x689790 */ r_esp -= 4; W32(r_esp, 0x68903fu); f_00689790();
    /* 0068903f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689041: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00689048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689049: mov ecx, esi */ r_ecx = r_esi;
    /* 0068904b: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x689050u); f_00698a08();
    /* 00689050: mov ecx, esi */ r_ecx = r_esi;
    /* 00689052: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x689057u); f_007aa094();
    /* 00689057: mov ecx, esi */ r_ecx = r_esi;
    /* 00689059: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x68905eu); f_0077a1f4();
    /* 0068905e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068905f: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00689065: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0068906b: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0068906e: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00689074: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00689077: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0068907a: lea ecx, [esi + 0x920] */ r_ecx = (u32)(r_esi+0x920u);
    /* 00689080: call 0x6981d0 */ r_esp -= 4; W32(r_esp, 0x689085u); f_006981d0();
    /* 00689085: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00689088: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068908d: je 0x68909b */ if (fZ) goto L_0068909b;
L_0068908f:; BB(0x0068908f);
    /* 0068908f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00689090: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x689095u); f_007b999c();
    /* 00689095: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689096: jmp 0x68914a */ goto L_0068914a;
L_0068909b:; BB(0x0068909b);
    /* 0068909b: mov eax, dword ptr [esi + 0x8fc] */ r_eax = R32((u32)(r_esi+0x8fcu));
    /* 006890a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890a3: jne 0x6890e8 */ if (!fZ) goto L_006890e8;
L_006890a5:; BB(0x006890a5);
    /* 006890a5: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 006890ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890af: je 0x68915a */ if (fZ) goto L_0068915a;
L_006890b5:; BB(0x006890b5);
    /* 006890b5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890b8: je 0x6890df */ if (fZ) goto L_006890df;
L_006890ba:; BB(0x006890ba);
    /* 006890ba: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890bd: je 0x6890df */ if (fZ) goto L_006890df;
L_006890bf:; BB(0x006890bf);
    /* 006890bf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890c2: jne 0x68914a */ if (!fZ) goto L_0068914a;
L_006890c8:; BB(0x006890c8);
    /* 006890c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006890c9: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6890ceu); f_007b999c();
    /* 006890ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006890cf: mov ecx, esi */ r_ecx = r_esi;
    /* 006890d1: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x6890d6u); f_007b798c();
    /* 006890d6: mov ecx, esi */ r_ecx = r_esi;
    /* 006890d8: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x6890ddu); f_007b7e9c();
    /* 006890dd: jmp 0x68914a */ goto L_0068914a;
L_006890df:; BB(0x006890df);
    /* 006890df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006890e0: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6890e5u); f_007b999c();
    /* 006890e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006890e6: jmp 0x68914a */ goto L_0068914a;
L_006890e8:; BB(0x006890e8);
    /* 006890e8: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 006890ef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890f2: je 0x689135 */ if (fZ) goto L_00689135;
L_006890f4:; BB(0x006890f4);
    /* 006890f4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890f7: je 0x689135 */ if (fZ) goto L_00689135;
L_006890f9:; BB(0x006890f9);
    /* 006890f9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890fc: jne 0x689127 */ if (!fZ) goto L_00689127;
L_006890fe:; BB(0x006890fe);
    /* 006890fe: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 00689104: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689106: je 0x68910f */ if (fZ) goto L_0068910f;
L_00689108:; BB(0x00689108);
    /* 00689108: mov eax, 1 */ r_eax = 0x1u;
    /* 0068910d: jmp 0x689111 */ goto L_00689111;
L_0068910f:; BB(0x0068910f);
    /* 0068910f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00689111:; BB(0x00689111);
    /* 00689111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689113: je 0x68911e */ if (fZ) goto L_0068911e;
L_00689115:; BB(0x00689115);
    /* 00689115: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00689116: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x68911bu); f_007b999c();
    /* 0068911b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068911c: jmp 0x68914a */ goto L_0068914a;
L_0068911e:; BB(0x0068911e);
    /* 0068911e: mov ecx, esi */ r_ecx = r_esi;
    /* 00689120: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x689125u); f_007b6894();
    /* 00689125: jmp 0x68914a */ goto L_0068914a;
L_00689127:; BB(0x00689127);
    /* 00689127: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068912a: jne 0x68914a */ if (!fZ) goto L_0068914a;
L_0068912c:; BB(0x0068912c);
    /* 0068912c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068912d: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x689132u); f_007b999c();
    /* 00689132: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689133: jmp 0x68914a */ goto L_0068914a;
L_00689135:; BB(0x00689135);
    /* 00689135: mov ecx, esi */ r_ecx = r_esi;
    /* 00689137: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x68913cu); f_007b6894();
    /* 0068913c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068913e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x689143u); f_007b798c();
    /* 00689143: mov ecx, esi */ r_ecx = r_esi;
    /* 00689145: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x68914au); f_007b7e9c();
L_0068914a:; BB(0x0068914a);
    /* 0068914a: mov ecx, esi */ r_ecx = r_esi;
    /* 0068914c: call 0x689a74 */ r_esp -= 4; W32(r_esp, 0x689151u); f_00689a74();
    /* 00689151: mov ecx, esi */ r_ecx = r_esi;
    /* 00689153: call 0x6952d4 */ r_esp -= 4; W32(r_esp, 0x689158u); f_006952d4();
    /* 00689158: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689159: ret  */ FN_RET(0x00689020); r_esp += 4; return;
L_0068915a:; BB(0x0068915a);
    /* 0068915a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068915b: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x689160u); f_007b999c();
    /* 00689160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689161: mov ecx, esi */ r_ecx = r_esi;
    /* 00689163: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x689168u); f_007b798c();
    /* 00689168: mov ecx, esi */ r_ecx = r_esi;
    /* 0068916a: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x68916fu); f_007b7e9c();
    /* 0068916f: jmp 0x68914a */ goto L_0068914a;
}

void f_006890c2(void)
{
    FN_ENTER(0x006890c2);
    /* 006890c2: jne 0x68914a */ if (!fZ) goto L_0068914a;
L_006890c8:; BB(0x006890c8);
    /* 006890c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006890c9: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x6890ceu); f_007b999c();
    /* 006890ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006890cf: mov ecx, esi */ r_ecx = r_esi;
    /* 006890d1: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x6890d6u); f_007b798c();
    /* 006890d6: mov ecx, esi */ r_ecx = r_esi;
    /* 006890d8: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x6890ddu); f_007b7e9c();
    /* 006890dd: jmp 0x68914a */ goto L_0068914a;
L_0068914a:; BB(0x0068914a);
    /* 0068914a: mov ecx, esi */ r_ecx = r_esi;
    /* 0068914c: call 0x689a74 */ r_esp -= 4; W32(r_esp, 0x689151u); f_00689a74();
    /* 00689151: mov ecx, esi */ r_ecx = r_esi;
    /* 00689153: call 0x6952d4 */ r_esp -= 4; W32(r_esp, 0x689158u); f_006952d4();
    /* 00689158: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689159: ret  */ FN_RET(0x006890c2); r_esp += 4; return;
}

void f_00689174(void) /* sub_689174 */
{
    FN_ENTER(0x00689174);
    /* 00689174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689175: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00689176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00689177: mov edi, ecx */ r_edi = r_ecx;
    /* 00689179: mov esi, dword ptr [edi + 0x33c] */ r_esi = R32((u32)(r_edi+0x33cu));
    /* 0068917f: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 00689186: and esi, 0xffffffef */ {  u32 a = r_esi; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00689189: mov dword ptr [edi + 0x33c], esi */ W32((u32)(r_edi+0x33cu), r_esi);
    /* 0068918f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689192: je 0x689269 */ if (fZ) goto L_00689269;
L_00689198:; BB(0x00689198);
    /* 00689198: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068919b: je 0x6891ec */ if (fZ) goto L_006891ec;
L_0068919d:; BB(0x0068919d);
    /* 0068919d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006891a0: je 0x6891ab */ if (fZ) goto L_006891ab;
L_006891a2:; BB(0x006891a2);
    /* 006891a2: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006891a5: jne 0x689265 */ if (!fZ) goto L_00689265;
L_006891ab:; BB(0x006891ab);
    /* 006891ab: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006891ad: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 006891b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006891b5: mov ecx, edi */ r_ecx = r_edi;
    /* 006891b7: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x6891bcu); f_00698a08();
    /* 006891bc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006891c2: test al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006891c4: je 0x6891cd */ if (fZ) goto L_006891cd;
L_006891c6:; BB(0x006891c6);
    /* 006891c6: mov eax, 1 */ r_eax = 0x1u;
    /* 006891cb: jmp 0x6891cf */ goto L_006891cf;
L_006891cd:; BB(0x006891cd);
    /* 006891cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006891cf:; BB(0x006891cf);
    /* 006891cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006891d1: jne 0x689265 */ if (!fZ) goto L_00689265;
L_006891d7:; BB(0x006891d7);
    /* 006891d7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006891d9: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 006891e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006891e1: mov ecx, edi */ r_ecx = r_edi;
    /* 006891e3: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x6891e8u); f_00698a08();
    /* 006891e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006891e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006891ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006891eb: ret  */ FN_RET(0x00689174); r_esp += 4; return;
L_006891ec:; BB(0x006891ec);
    /* 006891ec: mov ecx, edi */ r_ecx = r_edi;
    /* 006891ee: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x6891f3u); f_006877b0();
    /* 006891f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006891f5: jne 0x68921b */ if (!fZ) goto L_0068921b;
L_006891f7:; BB(0x006891f7);
    /* 006891f7: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006891fd: je 0x689206 */ if (fZ) goto L_00689206;
L_006891ff:; BB(0x006891ff);
    /* 006891ff: mov eax, 1 */ r_eax = 0x1u;
    /* 00689204: jmp 0x689208 */ goto L_00689208;
L_00689206:; BB(0x00689206);
    /* 00689206: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00689208:; BB(0x00689208);
    /* 00689208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068920a: jne 0x68921b */ if (!fZ) goto L_0068921b;
L_0068920c:; BB(0x0068920c);
    /* 0068920c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068920e: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00689210: mov ecx, edi */ r_ecx = r_edi;
    /* 00689212: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x689217u); f_00698a08();
    /* 00689217: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689218: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689219: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068921a: ret  */ FN_RET(0x00689174); r_esp += 4; return;
L_0068921b:; BB(0x0068921b);
    /* 0068921b: mov eax, dword ptr [edi + 0x710] */ r_eax = R32((u32)(r_edi+0x710u));
    /* 00689221: lea ebx, [edi + 0x70c] */ r_ebx = (u32)(r_edi+0x70cu);
    /* 00689227: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068922a: jne 0x689254 */ if (!fZ) goto L_00689254;
L_0068922c:; BB(0x0068922c);
    /* 0068922c: mov ecx, edi */ r_ecx = r_edi;
    /* 0068922e: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x689233u); f_00689b44();
    /* 00689233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689235: je 0x689254 */ if (fZ) goto L_00689254;
L_00689237:; BB(0x00689237);
    /* 00689237: mov eax, dword ptr [edi + 0x328] */ r_eax = R32((u32)(r_edi+0x328u));
    /* 0068923d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068923f: je 0x689254 */ if (fZ) goto L_00689254;
L_00689241:; BB(0x00689241);
    /* 00689241: or esi, 0x400000 */ {  u32 a = r_esi; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00689247: mov dword ptr [edi + 0x33c], esi */ W32((u32)(r_edi+0x33cu), r_esi);
    /* 0068924d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068924f: call 0x698678 */ r_esp -= 4; W32(r_esp, 0x689254u); f_00698678();
L_00689254:; BB(0x00689254);
    /* 00689254: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00689256: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0068925d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068925e: mov ecx, edi */ r_ecx = r_edi;
    /* 00689260: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x689265u); f_00698a08();
L_00689265:; BB(0x00689265);
    /* 00689265: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689266: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689267: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00689268: ret  */ FN_RET(0x00689174); r_esp += 4; return;
L_00689269:; BB(0x00689269);
    /* 00689269: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x68926eu); f_007a61a4();
    /* 0068926e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689271: je 0x68927c */ if (fZ) goto L_0068927c;
L_00689273:; BB(0x00689273);
    /* 00689273: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 00689278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068927a: jne 0x6892d3 */ if (!fZ) goto L_006892d3;
L_0068927c:; BB(0x0068927c);
    /* 0068927c: mov ecx, edi */ r_ecx = r_edi;
    /* 0068927e: call 0x6892e8 */ r_esp -= 4; W32(r_esp, 0x689283u); f_006892e8();
    /* 00689283: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00689285: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0068928c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068928d: mov ecx, edi */ r_ecx = r_edi;
    /* 0068928f: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x689294u); f_00698a08();
    /* 00689294: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0068929a: test al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068929c: je 0x6892a5 */ if (fZ) goto L_006892a5;
L_0068929e:; BB(0x0068929e);
    /* 0068929e: mov eax, 1 */ r_eax = 0x1u;
    /* 006892a3: jmp 0x6892a7 */ goto L_006892a7;
L_006892a5:; BB(0x006892a5);
    /* 006892a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006892a7:; BB(0x006892a7);
    /* 006892a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006892a9: jne 0x689265 */ if (!fZ) goto L_00689265;
L_006892ab:; BB(0x006892ab);
    /* 006892ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006892ad: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 006892b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006892b5: mov ecx, edi */ r_ecx = r_edi;
    /* 006892b7: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x6892bcu); f_00698a08();
    /* 006892bc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006892c2: test al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006892c4: je 0x6892cd */ if (fZ) goto L_006892cd;
L_006892c6:; BB(0x006892c6);
    /* 006892c6: mov eax, 1 */ r_eax = 0x1u;
    /* 006892cb: jmp 0x6892cf */ goto L_006892cf;
L_006892cd:; BB(0x006892cd);
    /* 006892cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006892cf:; BB(0x006892cf);
    /* 006892cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006892d1: jne 0x689265 */ if (!fZ) goto L_00689265;
L_006892d3:; BB(0x006892d3);
    /* 006892d3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006892d5: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 006892dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006892dd: mov ecx, edi */ r_ecx = r_edi;
    /* 006892df: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x6892e4u); f_00698a08();
    /* 006892e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006892e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006892e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006892e7: ret  */ FN_RET(0x00689174); r_esp += 4; return;
}

void f_006891b8(void)
{
    FN_ENTER(0x006891b8);
    /* 006891b8: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006891b9: clc  */ fC = 0;
    /* 006891ba: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006891bc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006891c2: test al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006891c4: je 0x6891cd */ if (fZ) goto L_006891cd;
L_006891c6:; BB(0x006891c6);
    /* 006891c6: mov eax, 1 */ r_eax = 0x1u;
    /* 006891cb: jmp 0x6891cf */ goto L_006891cf;
L_006891cd:; BB(0x006891cd);
    /* 006891cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006891cf:; BB(0x006891cf);
    /* 006891cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006891d1: jne 0x689265 */ if (!fZ) goto L_00689265;
L_006891d7:; BB(0x006891d7);
    /* 006891d7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006891d9: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 006891e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006891e1: mov ecx, edi */ r_ecx = r_edi;
    /* 006891e3: call 0x698a08 */ r_esp -= 4; W32(r_esp, 0x6891e8u); f_00698a08();
    /* 006891e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006891e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006891ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006891eb: ret  */ FN_RET(0x006891b8); r_esp += 4; return;
L_00689265:; BB(0x00689265);
    /* 00689265: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689266: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689267: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00689268: ret  */ FN_RET(0x006891b8); r_esp += 4; return;
}

void f_006892e8(void) /* sub_6892E8 */
{
    FN_ENTER(0x006892e8);
    /* 006892e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006892e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006892ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006892eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006892ec: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006892ee: mov edi, dword ptr [ebp + 0x45c] */ r_edi = R32((u32)(r_ebp+0x45cu));
    /* 006892f4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006892f6: je 0x6893e9 */ if (fZ) goto L_006893e9;
L_006892fc:; BB(0x006892fc);
    /* 006892fc: movzx eax, word ptr [edi + 0x108c] */ r_eax = (u32)R16((u32)(r_edi+0x108cu));
    /* 00689303: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689308: mov esi, 0 */ r_esi = 0x0u;
    /* 0068930d: je 0x6893b9 */ if (fZ) goto L_006893b9;
L_00689313:; BB(0x00689313);
    /* 00689313: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689314: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x689319u); f_007b4d18();
    /* 00689319: mov ebx, eax */ r_ebx = r_eax;
    /* 0068931b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068931e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689320: je 0x6893b9 */ if (fZ) goto L_006893b9;
L_00689326:; BB(0x00689326);
    /* 00689326: mov esi, dword ptr [ebx + 0x98] */ r_esi = R32((u32)(r_ebx+0x98u));
    /* 0068932c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068932e: je 0x6893b9 */ if (fZ) goto L_006893b9;
L_00689334:; BB(0x00689334);
    /* 00689334: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689337: jne 0x6893c9 */ if (!fZ) goto L_006893c9;
L_0068933d:; BB(0x0068933d);
    /* 0068933d: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 00689343: test edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689349: je 0x68934f */ if (fZ) goto L_0068934f;
L_0068934b:; BB(0x0068934b);
    /* 0068934b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068934d: jmp 0x6893b9 */ goto L_006893b9;
L_0068934f:; BB(0x0068934f);
    /* 0068934f: movzx edx, word ptr [edi + 0x108c] */ r_edx = (u32)R16((u32)(r_edi+0x108cu));
    /* 00689356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689357: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68935cu); f_007b4d18();
    /* 0068935c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068935d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068935e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689360: call 0x687c70 */ r_esp -= 4; W32(r_esp, 0x689365u); f_00687c70();
    /* 00689365: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689367: je 0x689385 */ if (fZ) goto L_00689385;
L_00689369:; BB(0x00689369);
    /* 00689369: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068936b: call 0x689428 */ r_esp -= 4; W32(r_esp, 0x689370u); f_00689428();
    /* 00689370: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689372: je 0x6893c9 */ if (fZ) goto L_006893c9;
L_00689374:; BB(0x00689374);
    /* 00689374: mov eax, dword ptr [ebp + 0x350] */ r_eax = R32((u32)(r_ebp+0x350u));
    /* 0068937a: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068937d: mov dword ptr [ebp + 0x350], eax */ W32((u32)(r_ebp+0x350u), r_eax);
    /* 00689383: jmp 0x6893c9 */ goto L_006893c9;
L_00689385:; BB(0x00689385);
    /* 00689385: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00689387: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689389: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x68938eu); f_00689410();
    /* 0068938e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689390: jne 0x6893b9 */ if (!fZ) goto L_006893b9;
L_00689392:; BB(0x00689392);
    /* 00689392: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689398: lea ecx, [ebp + 0x628] */ r_ecx = (u32)(r_ebp+0x628u);
    /* 0068939e: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6893a3u); f_006a7c24();
    /* 006893a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006893a5: je 0x6893b9 */ if (fZ) goto L_006893b9;
L_006893a7:; BB(0x006893a7);
    /* 006893a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006893a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006893ab: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006893ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006893af: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 006893b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6893b6u); f_00814298();
    /* 006893b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006893b9:; BB(0x006893b9);
    /* 006893b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006893bb: call 0x689428 */ r_esp -= 4; W32(r_esp, 0x6893c0u); f_00689428();
    /* 006893c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006893c2: je 0x6893c9 */ if (fZ) goto L_006893c9;
L_006893c4:; BB(0x006893c4);
    /* 006893c4: mov esi, 2 */ r_esi = 0x2u;
L_006893c9:; BB(0x006893c9);
    /* 006893c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006893cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006893cd: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x6893d2u); f_006893f0();
    /* 006893d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006893d4: mov ebx, esi */ r_ebx = r_esi;
    /* 006893d6: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006893dc: mov byte ptr [eax + 5], bl */ W8((u32)(r_eax+0x5u), (u8)r_ebx);
    /* 006893df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006893e1: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x6893e6u); f_006893f0();
    /* 006893e6: mov byte ptr [eax + 0x3d], bl */ W8((u32)(r_eax+0x3du), (u8)r_ebx);
L_006893e9:; BB(0x006893e9);
    /* 006893e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006893ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006893eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006893ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006893ed: ret  */ FN_RET(0x006892e8); r_esp += 4; return;
}

void f_006893f0(void) /* sub_6893F0 */
{
    FN_ENTER(0x006893f0);
    /* 006893f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006893f4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006893f7: je 0x689404 */ if (fZ) goto L_00689404;
L_006893f9:; BB(0x006893f9);
    /* 006893f9: add ecx, 0x538 */ {  u32 a = r_ecx; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006893ff: mov eax, ecx */ r_eax = r_ecx;
    /* 00689401: ret 4 */ FN_RET(0x006893f0); r_esp += 8; return;
L_00689404:; BB(0x00689404);
    /* 00689404: add ecx, 0x5ac */ {  u32 a = r_ecx; u32 b = 0x5acu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068940a: mov eax, ecx */ r_eax = r_ecx;
    /* 0068940c: ret 4 */ FN_RET(0x006893f0); r_esp += 8; return;
}

void f_00689410(void) /* sub_689410 */
{
    FN_ENTER(0x00689410);
    /* 00689410: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00689416: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068941b: je 0x689423 */ if (fZ) goto L_00689423;
L_0068941d:; BB(0x0068941d);
    /* 0068941d: mov eax, 1 */ r_eax = 0x1u;
    /* 00689422: ret  */ FN_RET(0x00689410); r_esp += 4; return;
L_00689423:; BB(0x00689423);
    /* 00689423: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689425: ret  */ FN_RET(0x00689410); r_esp += 4; return;
}

void f_00689428(void) /* sub_689428 */
{
    FN_ENTER(0x00689428);
    /* 00689428: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0068942e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689433: je 0x68943b */ if (fZ) goto L_0068943b;
L_00689435:; BB(0x00689435);
    /* 00689435: mov eax, 1 */ r_eax = 0x1u;
    /* 0068943a: ret  */ FN_RET(0x00689428); r_esp += 4; return;
L_0068943b:; BB(0x0068943b);
    /* 0068943b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068943d: ret  */ FN_RET(0x00689428); r_esp += 4; return;
}

void f_00689440(void) /* sub_689440 */
{
    FN_ENTER(0x00689440);
    /* 00689440: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00689441: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00689443: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0068944a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068944d: jne 0x6894d2 */ if (!fZ) goto L_006894d2;
L_00689453:; BB(0x00689453);
    /* 00689453: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689455: call 0x6894d4 */ r_esp -= 4; W32(r_esp, 0x68945au); f_006894d4();
    /* 0068945a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068945c: call 0x689620 */ r_esp -= 4; W32(r_esp, 0x689461u); f_00689620();
    /* 00689461: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689463: call 0x689648 */ r_esp -= 4; W32(r_esp, 0x689468u); f_00689648();
    /* 00689468: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 0068946e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689470: je 0x689479 */ if (fZ) goto L_00689479;
L_00689472:; BB(0x00689472);
    /* 00689472: mov eax, 1 */ r_eax = 0x1u;
    /* 00689477: jmp 0x68947b */ goto L_0068947b;
L_00689479:; BB(0x00689479);
    /* 00689479: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068947b:; BB(0x0068947b);
    /* 0068947b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068947d: je 0x6894a2 */ if (fZ) goto L_006894a2;
L_0068947f:; BB(0x0068947f);
    /* 0068947f: movsx eax, word ptr [ebx + 0x808] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x808u));
    /* 00689486: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00689488: jl 0x6894a2 */ if ((fS!=fO)) goto L_006894a2;
L_0068948a:; BB(0x0068948a);
    /* 0068948a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068948d: mov word ptr [ebx + 0x808], ax */ W16((u32)(r_ebx+0x808u), (u16)r_eax);
    /* 00689494: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00689497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00689499: jge 0x6894a2 */ if ((fS==fO)) goto L_006894a2;
L_0068949b:; BB(0x0068949b);
    /* 0068949b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068949d: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6894a2u); f_00685514();
L_006894a2:; BB(0x006894a2);
    /* 006894a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006894a3: lea ecx, [ebx + 0x714] */ r_ecx = (u32)(r_ebx+0x714u);
    /* 006894a9: call 0x69821c */ r_esp -= 4; W32(r_esp, 0x6894aeu); f_0069821c();
    /* 006894ae: mov eax, dword ptr [ebx + 0x68c] */ r_eax = R32((u32)(r_ebx+0x68cu));
    /* 006894b4: lea edx, [ebx + 0x688] */ r_edx = (u32)(r_ebx+0x688u);
    /* 006894ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006894bc: je 0x6894c5 */ if (fZ) goto L_006894c5;
L_006894be:; BB(0x006894be);
    /* 006894be: mov eax, 1 */ r_eax = 0x1u;
    /* 006894c3: jmp 0x6894c7 */ goto L_006894c7;
L_006894c5:; BB(0x006894c5);
    /* 006894c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006894c7:; BB(0x006894c7);
    /* 006894c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006894c9: je 0x6894d2 */ if (fZ) goto L_006894d2;
L_006894cb:; BB(0x006894cb);
    /* 006894cb: mov ecx, edx */ r_ecx = r_edx;
    /* 006894cd: call 0x697714 */ r_esp -= 4; W32(r_esp, 0x6894d2u); f_00697714();
L_006894d2:; BB(0x006894d2);
    /* 006894d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006894d3: ret  */ FN_RET(0x00689440); r_esp += 4; return;
}

void f_006894d4(void) /* sub_6894D4 */
{
    FN_ENTER(0x006894d4);
    /* 006894d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006894d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006894d6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006894d9: mov edi, ecx */ r_edi = r_ecx;
    /* 006894db: mov ebp, dword ptr [edi + 0x3d8] */ r_ebp = R32((u32)(r_edi+0x3d8u));
    /* 006894e1: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006894e4: xor ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006894e6: and ebp, 0x3f */ {  u32 a = r_ebp; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 006894e9: je 0x6895cd */ if (fZ) goto L_006895cd;
L_006894ef:; BB(0x006894ef);
    /* 006894ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006894f1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006894f5: test ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006894fb: je 0x689542 */ if (fZ) goto L_00689542;
L_006894fd:; BB(0x006894fd);
    /* 006894fd: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689500: je 0x68952e */ if (fZ) goto L_0068952e;
L_00689502:; BB(0x00689502);
    /* 00689502: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689505: je 0x68950e */ if (fZ) goto L_0068950e;
L_00689507:; BB(0x00689507);
    /* 00689507: mov dword ptr [esp], 0xf */ W32((u32)(r_esp), 0xfu);
L_0068950e:; BB(0x0068950e);
    /* 0068950e: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689511: je 0x68951a */ if (fZ) goto L_0068951a;
L_00689513:; BB(0x00689513);
    /* 00689513: mov dword ptr [esp], 0x10 */ W32((u32)(r_esp), 0x10u);
L_0068951a:; BB(0x0068951a);
    /* 0068951a: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068951e: mov ecx, edi */ r_ecx = r_edi;
    /* 00689520: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00689522: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689526: call dword ptr [eax + 0x140] */ { u32 t = R32((u32)(r_eax+0x140u)); r_esp -= 4; W32(r_esp, 0x68952cu); call_ind(t); }
    /* 0068952c: jmp 0x689542 */ goto L_00689542;
L_0068952e:; BB(0x0068952e);
    /* 0068952e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00689535: mov ecx, edi */ r_ecx = r_edi;
    /* 00689537: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068953b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068953d: call 0x6895d4 */ r_esp -= 4; W32(r_esp, 0x689542u); f_006895d4();
L_00689542:; BB(0x00689542);
    /* 00689542: test ebp, 0x3c */ {  u32 a = r_ebp; u32 b = 0x3cu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689548: je 0x6895a5 */ if (fZ) goto L_006895a5;
L_0068954a:; BB(0x0068954a);
    /* 0068954a: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0068954d: test al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068954f: je 0x689591 */ if (fZ) goto L_00689591;
L_00689551:; BB(0x00689551);
    /* 00689551: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689553: je 0x68955c */ if (fZ) goto L_0068955c;
L_00689555:; BB(0x00689555);
    /* 00689555: mov dword ptr [esp], 0x11 */ W32((u32)(r_esp), 0x11u);
L_0068955c:; BB(0x0068955c);
    /* 0068955c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068955e: je 0x689567 */ if (fZ) goto L_00689567;
L_00689560:; BB(0x00689560);
    /* 00689560: mov dword ptr [esp], 0x12 */ W32((u32)(r_esp), 0x12u);
L_00689567:; BB(0x00689567);
    /* 00689567: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689569: je 0x689572 */ if (fZ) goto L_00689572;
L_0068956b:; BB(0x0068956b);
    /* 0068956b: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
L_00689572:; BB(0x00689572);
    /* 00689572: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689574: je 0x68957d */ if (fZ) goto L_0068957d;
L_00689576:; BB(0x00689576);
    /* 00689576: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
L_0068957d:; BB(0x0068957d);
    /* 0068957d: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689581: mov ecx, edi */ r_ecx = r_edi;
    /* 00689583: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00689585: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689589: call dword ptr [eax + 0x140] */ { u32 t = R32((u32)(r_eax+0x140u)); r_esp -= 4; W32(r_esp, 0x68958fu); call_ind(t); }
    /* 0068958f: jmp 0x6895a5 */ goto L_006895a5;
L_00689591:; BB(0x00689591);
    /* 00689591: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00689598: mov ecx, edi */ r_ecx = r_edi;
    /* 0068959a: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068959e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006895a0: call 0x6895d4 */ r_esp -= 4; W32(r_esp, 0x6895a5u); f_006895d4();
L_006895a5:; BB(0x006895a5);
    /* 006895a5: test ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006895ab: je 0x6895c4 */ if (fZ) goto L_006895c4;
L_006895ad:; BB(0x006895ad);
    /* 006895ad: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006895af: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 006895b6: mov ecx, edi */ r_ecx = r_edi;
    /* 006895b8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006895bc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006895be: call dword ptr [eax + 0x140] */ { u32 t = R32((u32)(r_eax+0x140u)); r_esp -= 4; W32(r_esp, 0x6895c4u); call_ind(t); }
L_006895c4:; BB(0x006895c4);
    /* 006895c4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006895c7: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
L_006895cd:; BB(0x006895cd);
    /* 006895cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006895d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006895d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006895d2: ret  */ FN_RET(0x006894d4); r_esp += 4; return;
}

void f_006895d4(void) /* sub_6895D4 */
{
    FN_ENTER(0x006895d4);
    /* 006895d4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006895d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006895d9: je 0x6895ed */ if (fZ) goto L_006895ed;
L_006895db:; BB(0x006895db);
    /* 006895db: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006895e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006895e5: jne 0x6895ed */ if (!fZ) goto L_006895ed;
L_006895e7:; BB(0x006895e7);
    /* 006895e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006895ea: ret 8 */ FN_RET(0x006895d4); r_esp += 12; return;
L_006895ed:; BB(0x006895ed);
    /* 006895ed: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006895f1: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006895f5: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006895f9: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006895fe: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00689602: mov byte ptr [esp], 0xd */ W8((u32)(r_esp), 0xdu);
    /* 00689606: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068960b: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068960f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00689612: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x689617u); f_008003e0();
    /* 00689617: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068961a: ret 8 */ FN_RET(0x006895d4); r_esp += 12; return;
}

void f_00689620(void) /* sub_689620 */
{
    FN_ENTER(0x00689620);
    /* 00689620: mov eax, dword ptr [ecx + 0xdf4] */ r_eax = R32((u32)(r_ecx+0xdf4u));
    /* 00689626: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00689629: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068962b: jg 0x689645 */ if ((!fZ&&fS==fO)) goto L_00689645;
L_0068962d:; BB(0x0068962d);
    /* 0068962d: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00689633: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689635: je 0x689645 */ if (fZ) goto L_00689645;
L_00689637:; BB(0x00689637);
    /* 00689637: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068963a: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00689640: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x689645u); f_00685514();
L_00689645:; BB(0x00689645);
    /* 00689645: ret  */ FN_RET(0x00689620); r_esp += 4; return;
}

void f_00689648(void) /* sub_689648 */
{
    FN_ENTER(0x00689648);
    /* 00689648: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689649: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068964a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068964b: mov edi, ecx */ r_edi = r_ecx;
    /* 0068964d: call 0x69b6a8 */ r_esp -= 4; W32(r_esp, 0x689652u); f_0069b6a8();
    /* 00689652: mov esi, eax */ r_esi = r_eax;
    /* 00689654: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 00689657: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068965d: je 0x68968c */ if (fZ) goto L_0068968c;
L_0068965f:; BB(0x0068965f);
    /* 0068965f: movzx ebx, word ptr [edi + 0x1c] */ r_ebx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00689663: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689665: je 0x68968c */ if (fZ) goto L_0068968c;
L_00689667:; BB(0x00689667);
    /* 00689667: add dword ptr [edi + 0x530], -1 */ { u32 ad = (u32)(r_edi+0x530u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0068966e: lea ebx, [edi + 0x4e4] */ r_ebx = (u32)(r_edi+0x4e4u);
    /* 00689674: mov ecx, edi */ r_ecx = r_edi;
    /* 00689676: call 0x6896a0 */ r_esp -= 4; W32(r_esp, 0x68967bu); f_006896a0();
    /* 0068967b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068967d: je 0x689699 */ if (fZ) goto L_00689699;
L_0068967f:; BB(0x0068967f);
    /* 0068967f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00689680: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689681: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689683: call 0x6a80b4 */ r_esp -= 4; W32(r_esp, 0x689688u); f_006a80b4();
    /* 00689688: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068968a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068968b: ret  */ FN_RET(0x00689648); r_esp += 4; return;
L_0068968c:; BB(0x0068968c);
    /* 0068968c: add edi, 0x4e4 */ {  u32 a = r_edi; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00689692: mov ecx, edi */ r_ecx = r_edi;
    /* 00689694: call 0x6a820c */ r_esp -= 4; W32(r_esp, 0x689699u); f_006a820c();
L_00689699:; BB(0x00689699);
    /* 00689699: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068969a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068969b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068969c: ret  */ FN_RET(0x00689648); r_esp += 4; return;
}

void f_006896a0(void) /* sub_6896A0 */
{
    FN_ENTER(0x006896a0);
    /* 006896a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006896a1: mov esi, ecx */ r_esi = r_ecx;
    /* 006896a3: lea ecx, [esi + 0x628] */ r_ecx = (u32)(r_esi+0x628u);
    /* 006896a9: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 006896af: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6896b4u); f_006a7c24();
    /* 006896b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006896b6: jne 0x6896d7 */ if (!fZ) goto L_006896d7;
L_006896b8:; BB(0x006896b8);
    /* 006896b8: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x6896bdu); f_00791b48();
    /* 006896bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006896bf: je 0x6896d3 */ if (fZ) goto L_006896d3;
L_006896c1:; BB(0x006896c1);
    /* 006896c1: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x6896c6u); f_00791b48();
    /* 006896c6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006896c8: mov ecx, eax */ r_ecx = r_eax;
    /* 006896ca: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x6896cfu); f_0078fd68();
    /* 006896cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006896d1: jne 0x6896d7 */ if (!fZ) goto L_006896d7;
L_006896d3:; BB(0x006896d3);
    /* 006896d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006896d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006896d6: ret  */ FN_RET(0x006896a0); r_esp += 4; return;
L_006896d7:; BB(0x006896d7);
    /* 006896d7: mov ecx, esi */ r_ecx = r_esi;
    /* 006896d9: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6896deu); f_00689410();
    /* 006896de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006896e0: je 0x6896e6 */ if (fZ) goto L_006896e6;
L_006896e2:; BB(0x006896e2);
    /* 006896e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006896e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006896e5: ret  */ FN_RET(0x006896a0); r_esp += 4; return;
L_006896e6:; BB(0x006896e6);
    /* 006896e6: mov eax, dword ptr [esi + 0x328] */ r_eax = R32((u32)(r_esi+0x328u));
    /* 006896ec: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006896f1: je 0x6896f7 */ if (fZ) goto L_006896f7;
L_006896f3:; BB(0x006896f3);
    /* 006896f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006896f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006896f6: ret  */ FN_RET(0x006896a0); r_esp += 4; return;
L_006896f7:; BB(0x006896f7);
    /* 006896f7: add esi, 0x4e4 */ {  u32 a = r_esi; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006896fd: mov ecx, esi */ r_ecx = r_esi;
    /* 006896ff: call 0x6a8220 */ r_esp -= 4; W32(r_esp, 0x689704u); f_006a8220();
    /* 00689704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689706: jne 0x68970c */ if (!fZ) goto L_0068970c;
L_00689708:; BB(0x00689708);
    /* 00689708: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068970a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068970b: ret  */ FN_RET(0x006896a0); r_esp += 4; return;
L_0068970c:; BB(0x0068970c);
    /* 0068970c: mov eax, 1 */ r_eax = 0x1u;
    /* 00689711: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689712: ret  */ FN_RET(0x006896a0); r_esp += 4; return;
}

void f_00689714(void) /* sub_689714 */
{
    FN_ENTER(0x00689714);
    /* 00689714: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00689715: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00689718: fcom dword ptr [ecx + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x44u))); 
    /* 0068971b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068971d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068971e: je 0x689780 */ if (fZ) goto L_00689780;
L_00689720:; BB(0x00689720);
    /* 00689720: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00689722: mov eax, dword ptr [ecx + 0x784] */ r_eax = R32((u32)(r_ecx+0x784u));
    /* 00689728: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068972b: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068972e: jl 0x68973e */ if ((fS!=fO)) goto L_0068973e;
L_00689730:; BB(0x00689730);
    /* 00689730: mov dword ptr [ecx + 0x784], 0 */ W32((u32)(r_ecx+0x784u), 0x0u);
    /* 0068973a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068973c: jmp 0x689744 */ goto L_00689744;
L_0068973e:; BB(0x0068973e);
    /* 0068973e: mov dword ptr [ecx + 0x784], eax */ W32((u32)(r_ecx+0x784u), r_eax);
L_00689744:; BB(0x00689744);
    /* 00689744: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00689747: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0068974a: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0068974d: mov dword ptr [ecx + eax*8 + 0x788], edx */ W32((u32)(r_ecx+r_eax*8+0x788u), r_edx);
    /* 00689754: mov dword ptr [ecx + eax*8 + 0x78c], ebx */ W32((u32)(r_ecx+r_eax*8+0x78cu), r_ebx);
    /* 0068975b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0068975e: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00689761: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
L_00689764:; BB(0x00689764);
    /* 00689764: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 00689767: mov edx, dword ptr [ecx + 0x36c] */ r_edx = R32((u32)(r_ecx+0x36cu));
    /* 0068976d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0068976f: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 00689772: fstp dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0)); FPOP();
    /* 00689775: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 00689778: mov dword ptr [ecx + 0x374], edx */ W32((u32)(r_ecx+0x374u), r_edx);
    /* 0068977e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068977f: ret  */ FN_RET(0x00689714); r_esp += 4; return;
L_00689780:; BB(0x00689780);
    /* 00689780: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 00689783: fcom dword ptr [ecx + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x4cu))); 
    /* 00689786: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00689788: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00689789: je 0x689764 */ if (fZ) goto L_00689764;
L_0068978b:; BB(0x0068978b);
    /* 0068978b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068978d: jmp 0x689720 */ goto L_00689720;
}

void f_00689790(void) /* sub_689790 */
{
    FN_ENTER(0x00689790);
    /* 00689790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689791: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00689793: lea ecx, [ebp + 0x70c] */ r_ecx = (u32)(r_ebp+0x70cu);
    /* 00689799: call 0x698374 */ r_esp -= 4; W32(r_esp, 0x68979eu); f_00698374();
    /* 0068979e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006897a0: call 0x6898cc */ r_esp -= 4; W32(r_esp, 0x6897a5u); f_006898cc();
    /* 006897a5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006897a7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006897aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006897ac: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x6897afu); call_ind(t); }
    /* 006897af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006897b1: jne 0x6897bb */ if (!fZ) goto L_006897bb;
L_006897b3:; BB(0x006897b3);
    /* 006897b3: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 006897b9: jmp 0x6897f0 */ goto L_006897f0;
L_006897bb:; BB(0x006897bb);
    /* 006897bb: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 006897c1: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006897c7: je 0x6897d0 */ if (fZ) goto L_006897d0;
L_006897c9:; BB(0x006897c9);
    /* 006897c9: mov eax, 1 */ r_eax = 0x1u;
    /* 006897ce: jmp 0x6897d2 */ goto L_006897d2;
L_006897d0:; BB(0x006897d0);
    /* 006897d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006897d2:; BB(0x006897d2);
    /* 006897d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006897d4: jne 0x6897f0 */ if (!fZ) goto L_006897f0;
L_006897d6:; BB(0x006897d6);
    /* 006897d6: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6897dbu); f_00807ac0();
    /* 006897db: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006897df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006897e0: call 0x807bd4 */ r_esp -= 4; W32(r_esp, 0x6897e5u); f_00807bd4();
    /* 006897e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006897e6: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 006897ec: mov word ptr [ebp + 0x28], ax */ W16((u32)(r_ebp+0x28u), (u16)r_eax);
L_006897f0:; BB(0x006897f0);
    /* 006897f0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006897f3: and edx, 0xfdffffff */ {  u32 a = r_edx; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006897f9: mov dword ptr [ebp + 0x33c], edx */ W32((u32)(r_ebp+0x33cu), r_edx);
    /* 006897ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689801: call dword ptr [eax + 0xb4] */ { u32 t = R32((u32)(r_eax+0xb4u)); r_esp -= 4; W32(r_esp, 0x689807u); call_ind(t); }
    /* 00689807: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068980a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068980c: call dword ptr [eax + 0x94] */ { u32 t = R32((u32)(r_eax+0x94u)); r_esp -= 4; W32(r_esp, 0x689812u); call_ind(t); }
    /* 00689812: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00689815: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689817: call dword ptr [eax + 0x98] */ { u32 t = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, 0x68981du); call_ind(t); }
    /* 0068981d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00689820: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689822: call dword ptr [eax + 0x9c] */ { u32 t = R32((u32)(r_eax+0x9cu)); r_esp -= 4; W32(r_esp, 0x689828u); call_ind(t); }
    /* 00689828: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068982b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068982d: call dword ptr [eax + 0xa0] */ { u32 t = R32((u32)(r_eax+0xa0u)); r_esp -= 4; W32(r_esp, 0x689833u); call_ind(t); }
    /* 00689833: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00689836: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689838: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x68983eu); call_ind(t); }
    /* 0068983e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00689841: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689843: call dword ptr [eax + 0xa8] */ { u32 t = R32((u32)(r_eax+0xa8u)); r_esp -= 4; W32(r_esp, 0x689849u); call_ind(t); }
    /* 00689849: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0068984c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068984e: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x689854u); call_ind(t); }
    /* 00689854: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00689857: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689859: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x68985fu); call_ind(t); }
    /* 0068985f: mov eax, dword ptr [ebp + 0x720] */ r_eax = R32((u32)(r_ebp+0x720u));
    /* 00689865: lea ecx, [ebp + 0x71c] */ r_ecx = (u32)(r_ebp+0x71cu);
    /* 0068986b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068986d: jle 0x6898be */ if ((fZ||fS!=fO)) goto L_006898be;
L_0068986f:; BB(0x0068986f);
    /* 0068986f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689871: call 0x6981f8 */ r_esp -= 4; W32(r_esp, 0x689876u); f_006981f8();
    /* 00689876: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00689879: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0068987f:; BB(0x0068987f);
    /* 0068987f: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00689886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00689888: jle 0x6898b3 */ if ((fZ||fS!=fO)) goto L_006898b3;
L_0068988a:; BB(0x0068988a);
    /* 0068988a: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
L_0068988d:; BB(0x0068988d);
    /* 0068988d: mov eax, dword ptr [ebp + 0x370] */ r_eax = R32((u32)(r_ebp+0x370u));
    /* 00689893: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00689896: je 0x6898a5 */ if (fZ) goto L_006898a5;
L_00689898:; BB(0x00689898);
    /* 00689898: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068989b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068989d: jl 0x6898a7 */ if ((fS!=fO)) goto L_006898a7;
L_0068989f:; BB(0x0068989f);
    /* 0068989f: mov dword ptr [ebp + 0x370], eax */ W32((u32)(r_ebp+0x370u), r_eax);
L_006898a5:; BB(0x006898a5);
    /* 006898a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006898a6: ret  */ FN_RET(0x00689790); r_esp += 4; return;
L_006898a7:; BB(0x006898a7);
    /* 006898a7: mov dword ptr [ebp + 0x370], 0xffffffff */ W32((u32)(r_ebp+0x370u), 0xffffffffu);
    /* 006898b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006898b2: ret  */ FN_RET(0x00689790); r_esp += 4; return;
L_006898b3:; BB(0x006898b3);
    /* 006898b3: or edx, 0xa00 */ {  u32 a = r_edx; u32 b = 0xa00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006898b9: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 006898bc: jmp 0x68988d */ goto L_0068988d;
L_006898be:; BB(0x006898be);
    /* 006898be: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006898c1: and edx, 0xfbfffeff */ {  u32 a = r_edx; u32 b = 0xfbfffeffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006898c7: jmp 0x68987f */ goto L_0068987f;
}

void f_006898ca(void)
{
    FN_ENTER(0x006898ca);
    /* 006898ca: nop  */ ;
    /* 006898cb: nop  */ ;
    /* 006898cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006898cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006898ce: mov esi, ecx */ r_esi = r_ecx;
    /* 006898d0: mov eax, dword ptr [esi + 0x45c] */ r_eax = R32((u32)(r_esi+0x45cu));
    /* 006898d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006898d8: je 0x689974 */ if (fZ) goto L_00689974;
L_006898de:; BB(0x006898de);
    /* 006898de: movzx edx, word ptr [eax + 0x10a4] */ r_edx = (u32)R16((u32)(r_eax+0x10a4u));
    /* 006898e5: fld dword ptr [eax + 0x10a8] */ FPUSH(R_F32((u32)(r_eax+0x10a8u)));
    /* 006898eb: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006898ee: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006898f1: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006898f6: jne 0x689940 */ if (!fZ) goto L_00689940;
L_006898f8:; BB(0x006898f8);
    /* 006898f8: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006898fe: je 0x689974 */ if (fZ) goto L_00689974;
L_00689900:; BB(0x00689900);
    /* 00689900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689901: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x689906u); f_007b4d18();
    /* 00689906: mov edx, eax */ r_edx = r_eax;
    /* 00689908: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068990b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068990d: je 0x689974 */ if (fZ) goto L_00689974;
L_0068990f:; BB(0x0068990f);
    /* 0068990f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00689912: fcomp dword ptr [0x93c798] */ fx_compare(ST(0), R_F32((u32)(0x93c798u))); FPOP();
    /* 00689918: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068991a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068991b: jae 0x689974 */ if (!fC) goto L_00689974;
L_0068991d:; BB(0x0068991d);
    /* 0068991d: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00689920: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689921: mov ecx, esi */ r_ecx = r_esi;
    /* 00689923: call 0x689998 */ r_esp -= 4; W32(r_esp, 0x689928u); f_00689998();
    /* 00689928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068992a: je 0x689974 */ if (fZ) goto L_00689974;
L_0068992c:; BB(0x0068992c);
    /* 0068992c: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0068992f: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689935: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00689938: mov eax, 1 */ r_eax = 0x1u;
    /* 0068993d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068993e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068993f: ret  */ FN_RET(0x006898ca); r_esp += 4; return;
L_00689940:; BB(0x00689940);
    /* 00689940: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689946: je 0x68998a */ if (fZ) goto L_0068998a;
L_00689948:; BB(0x00689948);
    /* 00689948: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689949: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68994eu); f_007b4d18();
    /* 0068994e: mov edx, eax */ r_edx = r_eax;
    /* 00689950: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689953: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689955: je 0x689974 */ if (fZ) goto L_00689974;
L_00689957:; BB(0x00689957);
    /* 00689957: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0068995a: fcomp dword ptr [0x93c79c] */ fx_compare(ST(0), R_F32((u32)(0x93c79cu))); FPOP();
    /* 00689960: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00689962: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00689963: ja 0x689979 */ if ((!fC&&!fZ)) goto L_00689979;
L_00689965:; BB(0x00689965);
    /* 00689965: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00689968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689969: mov ecx, esi */ r_ecx = r_esi;
    /* 0068996b: call 0x689998 */ r_esp -= 4; W32(r_esp, 0x689970u); f_00689998();
    /* 00689970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689972: je 0x689979 */ if (fZ) goto L_00689979;
L_00689974:; BB(0x00689974);
    /* 00689974: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689976: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689977: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689978: ret  */ FN_RET(0x006898ca); r_esp += 4; return;
L_00689979:; BB(0x00689979);
    /* 00689979: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0068997c: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00689982: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00689985: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689987: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689988: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689989: ret  */ FN_RET(0x006898ca); r_esp += 4; return;
L_0068998a:; BB(0x0068998a);
    /* 0068998a: and eax, 0xffefffff */ {  u32 a = r_eax; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068998f: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00689992: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689994: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689995: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689996: ret  */ FN_RET(0x006898ca); r_esp += 4; return;
}

void f_006898cc(void) /* sub_6898CC */
{
    FN_ENTER(0x006898cc);
    /* 006898cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006898cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006898ce: mov esi, ecx */ r_esi = r_ecx;
    /* 006898d0: mov eax, dword ptr [esi + 0x45c] */ r_eax = R32((u32)(r_esi+0x45cu));
    /* 006898d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006898d8: je 0x689974 */ if (fZ) goto L_00689974;
L_006898de:; BB(0x006898de);
    /* 006898de: movzx edx, word ptr [eax + 0x10a4] */ r_edx = (u32)R16((u32)(r_eax+0x10a4u));
    /* 006898e5: fld dword ptr [eax + 0x10a8] */ FPUSH(R_F32((u32)(r_eax+0x10a8u)));
    /* 006898eb: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006898ee: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006898f1: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006898f6: jne 0x689940 */ if (!fZ) goto L_00689940;
L_006898f8:; BB(0x006898f8);
    /* 006898f8: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006898fe: je 0x689974 */ if (fZ) goto L_00689974;
L_00689900:; BB(0x00689900);
    /* 00689900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689901: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x689906u); f_007b4d18();
    /* 00689906: mov edx, eax */ r_edx = r_eax;
    /* 00689908: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068990b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068990d: je 0x689974 */ if (fZ) goto L_00689974;
L_0068990f:; BB(0x0068990f);
    /* 0068990f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00689912: fcomp dword ptr [0x93c798] */ fx_compare(ST(0), R_F32((u32)(0x93c798u))); FPOP();
    /* 00689918: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068991a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068991b: jae 0x689974 */ if (!fC) goto L_00689974;
L_0068991d:; BB(0x0068991d);
    /* 0068991d: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00689920: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689921: mov ecx, esi */ r_ecx = r_esi;
    /* 00689923: call 0x689998 */ r_esp -= 4; W32(r_esp, 0x689928u); f_00689998();
    /* 00689928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068992a: je 0x689974 */ if (fZ) goto L_00689974;
L_0068992c:; BB(0x0068992c);
    /* 0068992c: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0068992f: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689935: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00689938: mov eax, 1 */ r_eax = 0x1u;
    /* 0068993d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068993e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068993f: ret  */ FN_RET(0x006898cc); r_esp += 4; return;
L_00689940:; BB(0x00689940);
    /* 00689940: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689946: je 0x68998a */ if (fZ) goto L_0068998a;
L_00689948:; BB(0x00689948);
    /* 00689948: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689949: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x68994eu); f_007b4d18();
    /* 0068994e: mov edx, eax */ r_edx = r_eax;
    /* 00689950: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689953: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689955: je 0x689974 */ if (fZ) goto L_00689974;
L_00689957:; BB(0x00689957);
    /* 00689957: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0068995a: fcomp dword ptr [0x93c79c] */ fx_compare(ST(0), R_F32((u32)(0x93c79cu))); FPOP();
    /* 00689960: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00689962: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00689963: ja 0x689979 */ if ((!fC&&!fZ)) goto L_00689979;
L_00689965:; BB(0x00689965);
    /* 00689965: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00689968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689969: mov ecx, esi */ r_ecx = r_esi;
    /* 0068996b: call 0x689998 */ r_esp -= 4; W32(r_esp, 0x689970u); f_00689998();
    /* 00689970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689972: je 0x689979 */ if (fZ) goto L_00689979;
L_00689974:; BB(0x00689974);
    /* 00689974: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689976: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689977: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689978: ret  */ FN_RET(0x006898cc); r_esp += 4; return;
L_00689979:; BB(0x00689979);
    /* 00689979: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0068997c: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00689982: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00689985: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689987: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689988: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689989: ret  */ FN_RET(0x006898cc); r_esp += 4; return;
L_0068998a:; BB(0x0068998a);
    /* 0068998a: and eax, 0xffefffff */ {  u32 a = r_eax; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068998f: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00689992: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689994: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689995: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689996: ret  */ FN_RET(0x006898cc); r_esp += 4; return;
}

void f_00689998(void) /* sub_689998 */
{
    FN_ENTER(0x00689998);
    /* 00689998: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689999: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068999c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068999e: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 006899a1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006899a9: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006899b1: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 006899b9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6899beu); f_0082dcbc();
    /* 006899be: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 006899c1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006899c5: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006899cd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6899d2u); f_0082ddd8();
    /* 006899d2: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 006899d5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006899d9: add ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006899df: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6899e4u); f_0082dcbc();
    /* 006899e4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006899e7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006899ea: fmul dword ptr [0x93c790] */ ST(0) = ST(0) * R_F32((u32)(0x93c790u));
    /* 006899f0: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 006899f3: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 006899f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006899f9: add ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006899ff: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x689a04u); f_0082ddd8();
    /* 00689a04: fmul dword ptr [0x93c790] */ ST(0) = ST(0) * R_F32((u32)(0x93c790u));
    /* 00689a0a: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 00689a0d: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00689a11: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00689a13: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 00689a16: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00689a1a: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00689a1e: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00689a26: fsubr dword ptr [edx + 8] */ ST(0) = R_F32((u32)(r_edx+0x8u)) - ST(0);
    /* 00689a29: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00689a2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689a2e: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x689a33u); f_00782868();
    /* 00689a33: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00689a35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689a38: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00689a3c: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00689a40: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x689a45u); f_0082f9e0();
    /* 00689a45: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00689a48: mov ecx, 0x1555 */ r_ecx = 0x1555u;
    /* 00689a4d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x689a52u); f_0082ddd8();
    /* 00689a52: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00689a55: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00689a57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00689a59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00689a5a: jae 0x689a65 */ if (!fC) goto L_00689a65;
L_00689a5c:; BB(0x00689a5c);
    /* 00689a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00689a5e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689a61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689a62: ret 4 */ FN_RET(0x00689998); r_esp += 8; return;
L_00689a65:; BB(0x00689a65);
    /* 00689a65: mov eax, 1 */ r_eax = 0x1u;
    /* 00689a6a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689a6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689a6e: ret 4 */ FN_RET(0x00689998); r_esp += 8; return;
}

void f_00689a74(void) /* sub_689A74 */
{
    FN_ENTER(0x00689a74);
    /* 00689a74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689a75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00689a76: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00689a78: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x689a7du); f_00687c48();
    /* 00689a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689a7f: je 0x689aaf */ if (fZ) goto L_00689aaf;
L_00689a81:; BB(0x00689a81);
    /* 00689a81: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00689a85: call 0x6afcc8 */ r_esp -= 4; W32(r_esp, 0x689a8au); f_006afcc8();
    /* 00689a8a: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00689a8d: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689a8f: je 0x689af2 */ if (fZ) goto L_00689af2;
L_00689a91:; BB(0x00689a91);
    /* 00689a91: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689a94: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00689a97: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689a99: je 0x689af2 */ if (fZ) goto L_00689af2;
L_00689a9b:; BB(0x00689a9b);
    /* 00689a9b: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689a9e: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00689aa1: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689aa3: je 0x689af2 */ if (fZ) goto L_00689af2;
L_00689aa5:; BB(0x00689aa5);
    /* 00689aa5: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689aa8: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00689aab: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689aad: je 0x689af2 */ if (fZ) goto L_00689af2;
L_00689aaf:; BB(0x00689aaf);
    /* 00689aaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689ab1: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x689ab6u); f_00689b44();
    /* 00689ab6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689ab8: jne 0x689aef */ if (!fZ) goto L_00689aef;
L_00689aba:; BB(0x00689aba);
    /* 00689aba: mov eax, dword ptr [ebp + 0x328] */ r_eax = R32((u32)(r_ebp+0x328u));
    /* 00689ac0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689ac2: je 0x689aef */ if (fZ) goto L_00689aef;
L_00689ac4:; BB(0x00689ac4);
    /* 00689ac4: mov eax, dword ptr [ebp + 0x36c] */ r_eax = R32((u32)(r_ebp+0x36cu));
    /* 00689aca: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689acc: je 0x689ad5 */ if (fZ) goto L_00689ad5;
L_00689ace:; BB(0x00689ace);
    /* 00689ace: mov eax, 1 */ r_eax = 0x1u;
    /* 00689ad3: jmp 0x689ad7 */ goto L_00689ad7;
L_00689ad5:; BB(0x00689ad5);
    /* 00689ad5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00689ad7:; BB(0x00689ad7);
    /* 00689ad7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689ad9: je 0x689aef */ if (fZ) goto L_00689aef;
L_00689adb:; BB(0x00689adb);
    /* 00689adb: lea eax, [ebp + 0x3b4] */ r_eax = (u32)(r_ebp+0x3b4u);
    /* 00689ae1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689ae2: add ebp, 0x394 */ {  u32 a = r_ebp; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00689ae8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689aea: call 0x6a36bc */ r_esp -= 4; W32(r_esp, 0x689aefu); f_006a36bc();
L_00689aef:; BB(0x00689aef);
    /* 00689aef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689af0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689af1: ret  */ FN_RET(0x00689a74); r_esp += 4; return;
L_00689af2:; BB(0x00689af2);
    /* 00689af2: movsx eax, word ptr [eax + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 00689af6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689af8: jne 0x689aaf */ if (!fZ) goto L_00689aaf;
L_00689afa:; BB(0x00689afa);
    /* 00689afa: call 0x6afc7c */ r_esp -= 4; W32(r_esp, 0x689affu); f_006afc7c();
    /* 00689aff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b01: je 0x689aaf */ if (fZ) goto L_00689aaf;
L_00689b03:; BB(0x00689b03);
    /* 00689b03: mov eax, dword ptr [ebp + 0x328] */ r_eax = R32((u32)(r_ebp+0x328u));
    /* 00689b09: test eax, 0x408000 */ {  u32 a = r_eax; u32 b = 0x408000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b0e: jne 0x689aaf */ if (!fZ) goto L_00689aaf;
L_00689b10:; BB(0x00689b10);
    /* 00689b10: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689b12: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x689b17u); f_00689b44();
    /* 00689b17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b19: jne 0x689aaf */ if (!fZ) goto L_00689aaf;
L_00689b1b:; BB(0x00689b1b);
    /* 00689b1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689b1d: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x689b22u); f_00688e9c();
    /* 00689b22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b24: jne 0x689aaf */ if (!fZ) goto L_00689aaf;
L_00689b26:; BB(0x00689b26);
    /* 00689b26: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 00689b2b: movzx eax, word ptr [ebp + 0x390] */ r_eax = (u32)R16((u32)(r_ebp+0x390u));
    /* 00689b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689b33: lea ecx, [ebp + 0x394] */ r_ecx = (u32)(r_ebp+0x394u);
    /* 00689b39: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x689b3eu); f_006a350c();
    /* 00689b3e: jmp 0x689aaf */ goto L_00689aaf;
}

void f_00689b44(void) /* sub_689B44 */
{
    FN_ENTER(0x00689b44);
    /* 00689b44: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00689b47: and eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00689b4c: ret  */ FN_RET(0x00689b44); r_esp += 4; return;
}

void f_00689b50(void) /* sub_689B50 */
{
    FN_ENTER(0x00689b50);
    /* 00689b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689b51: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00689b53: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x689b58u); f_00807ac0();
    /* 00689b58: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b5b: jne 0x689b64 */ if (!fZ) goto L_00689b64;
L_00689b5d:; BB(0x00689b5d);
    /* 00689b5d: mov eax, 0x461c4000 */ r_eax = 0x461c4000u;
    /* 00689b62: jmp 0x689b69 */ goto L_00689b69;
L_00689b64:; BB(0x00689b64);
    /* 00689b64: mov eax, 0x43c80000 */ r_eax = 0x43c80000u;
L_00689b69:; BB(0x00689b69);
    /* 00689b69: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00689b6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689b6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689b71: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00689b76: call 0x7ba638 */ r_esp -= 4; W32(r_esp, 0x689b7bu); f_007ba638();
    /* 00689b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689b7c: ret 8 */ FN_RET(0x00689b50); r_esp += 12; return;
}

void f_00689b80(void) /* sub_689B80 */
{
    FN_ENTER(0x00689b80);
    /* 00689b80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689b81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00689b82: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689b85: mov edi, ecx */ r_edi = r_ecx;
    /* 00689b87: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00689b8a: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b8f: jne 0x689cf3 */ if (!fZ) goto L_00689cf3;
L_00689b95:; BB(0x00689b95);
    /* 00689b95: mov eax, dword ptr [edi + 0xdf0] */ r_eax = R32((u32)(r_edi+0xdf0u));
    /* 00689b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b9d: jne 0x689cf3 */ if (!fZ) goto L_00689cf3;
L_00689ba3:; BB(0x00689ba3);
    /* 00689ba3: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 00689ba9: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00689bac: je 0x689bb5 */ if (fZ) goto L_00689bb5;
L_00689bae:; BB(0x00689bae);
    /* 00689bae: mov eax, 1 */ r_eax = 0x1u;
    /* 00689bb3: jmp 0x689bb7 */ goto L_00689bb7;
L_00689bb5:; BB(0x00689bb5);
    /* 00689bb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00689bb7:; BB(0x00689bb7);
    /* 00689bb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689bb9: je 0x689bdf */ if (fZ) goto L_00689bdf;
L_00689bbb:; BB(0x00689bbb);
    /* 00689bbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689bbd: je 0x689bc6 */ if (fZ) goto L_00689bc6;
L_00689bbf:; BB(0x00689bbf);
    /* 00689bbf: mov eax, 1 */ r_eax = 0x1u;
    /* 00689bc4: jmp 0x689bc8 */ goto L_00689bc8;
L_00689bc6:; BB(0x00689bc6);
    /* 00689bc6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00689bc8:; BB(0x00689bc8);
    /* 00689bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689bca: je 0x689cf3 */ if (fZ) goto L_00689cf3;
L_00689bd0:; BB(0x00689bd0);
    /* 00689bd0: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 00689bd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689bd9: jne 0x689cf3 */ if (!fZ) goto L_00689cf3;
L_00689bdf:; BB(0x00689bdf);
    /* 00689bdf: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00689be4: mov ecx, edi */ r_ecx = r_edi;
    /* 00689be6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00689be8: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00689bed: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x689bf0u); call_ind(t); }
    /* 00689bf0: mov ebx, eax */ r_ebx = r_eax;
    /* 00689bf2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689bf4: je 0x689cb0 */ if (fZ) goto L_00689cb0;
L_00689bfa:; BB(0x00689bfa);
    /* 00689bfa: mov edx, dword ptr [0xaca300] */ r_edx = R32((u32)(0xaca300u));
    /* 00689c00: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689c03: je 0x689c42 */ if (fZ) goto L_00689c42;
L_00689c05:; BB(0x00689c05);
    /* 00689c05: call 0x505b00 */ r_esp -= 4; W32(r_esp, 0x689c0au); f_00505b00();
    /* 00689c0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689c0c: je 0x689c42 */ if (fZ) goto L_00689c42;
L_00689c0e:; BB(0x00689c0e);
    /* 00689c0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689c10: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00689c14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689c15: call 0x505a9c */ r_esp -= 4; W32(r_esp, 0x689c1au); f_00505a9c();
    /* 00689c1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689c1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689c1f: je 0x689c3c */ if (fZ) goto L_00689c3c;
L_00689c21:; BB(0x00689c21);
    /* 00689c21: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689c22: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00689c26: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00689c2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00689c2d: mov ecx, edi */ r_ecx = r_edi;
    /* 00689c2f: call 0x689d2c */ r_esp -= 4; W32(r_esp, 0x689c34u); f_00689d2c();
    /* 00689c34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689c36: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x689c3bu); f_00505bf8();
    /* 00689c3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00689c3c:; BB(0x00689c3c);
    /* 00689c3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689c3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689c40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00689c41: ret  */ FN_RET(0x00689b80); r_esp += 4; return;
L_00689c42:; BB(0x00689c42);
    /* 00689c42: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00689c45: and edx, 0xf7ffffff */ {  u32 a = r_edx; u32 b = 0xf7ffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00689c4b: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00689c4e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x689c53u); f_0082dab0();
    /* 00689c53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689c54: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x689c59u); f_00794548();
    /* 00689c59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689c5a: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00689c5e: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689c64: jne 0x689c8a */ if (!fZ) goto L_00689c8a;
L_00689c66:; BB(0x00689c66);
    /* 00689c66: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00689c6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00689c6d: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00689c70: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00689c76: mov ecx, edi */ r_ecx = r_edi;
    /* 00689c78: call 0x689dec */ r_esp -= 4; W32(r_esp, 0x689c7du); f_00689dec();
    /* 00689c7d: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00689c82: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00689c85: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_00689c8a:; BB(0x00689c8a);
    /* 00689c8a: lea ebx, [edi + 0x6e0] */ r_ebx = (u32)(r_edi+0x6e0u);
    /* 00689c90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689c92: call 0x69830c */ r_esp -= 4; W32(r_esp, 0x689c97u); f_0069830c();
    /* 00689c97: mov ecx, edi */ r_ecx = r_edi;
    /* 00689c99: call 0x68a1e4 */ r_esp -= 4; W32(r_esp, 0x689c9eu); f_0068a1e4();
    /* 00689c9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689ca0: call 0x698348 */ r_esp -= 4; W32(r_esp, 0x689ca5u); f_00698348();
    /* 00689ca5: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x689caau); f_00794750();
    /* 00689caa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689cad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689cae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00689caf: ret  */ FN_RET(0x00689b80); r_esp += 4; return;
L_00689cb0:; BB(0x00689cb0);
    /* 00689cb0: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00689cb3: or eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00689cb8: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00689cbb: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x689cc0u); f_0082fa9c();
    /* 00689cc0: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689cc6: mov ecx, edi */ r_ecx = r_edi;
    /* 00689cc8: call 0x68a1a8 */ r_esp -= 4; W32(r_esp, 0x689ccdu); f_0068a1a8();
    /* 00689ccd: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x689cd2u); f_0082faac();
    /* 00689cd2: lea ebx, [edi + 0x6e0] */ r_ebx = (u32)(r_edi+0x6e0u);
    /* 00689cd8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689cda: call 0x69830c */ r_esp -= 4; W32(r_esp, 0x689cdfu); f_0069830c();
    /* 00689cdf: mov ecx, edi */ r_ecx = r_edi;
    /* 00689ce1: call 0x68a1e4 */ r_esp -= 4; W32(r_esp, 0x689ce6u); f_0068a1e4();
    /* 00689ce6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689ce8: call 0x698348 */ r_esp -= 4; W32(r_esp, 0x689cedu); f_00698348();
    /* 00689ced: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689cf0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689cf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00689cf2: ret  */ FN_RET(0x00689b80); r_esp += 4; return;
L_00689cf3:; BB(0x00689cf3);
    /* 00689cf3: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x689cf8u); f_0082fa9c();
    /* 00689cf8: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689cfe: mov ecx, edi */ r_ecx = r_edi;
    /* 00689d00: call 0x68a1a8 */ r_esp -= 4; W32(r_esp, 0x689d05u); f_0068a1a8();
    /* 00689d05: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x689d0au); f_0082faac();
    /* 00689d0a: lea ebx, [edi + 0x6e0] */ r_ebx = (u32)(r_edi+0x6e0u);
    /* 00689d10: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689d12: call 0x69830c */ r_esp -= 4; W32(r_esp, 0x689d17u); f_0069830c();
    /* 00689d17: mov ecx, edi */ r_ecx = r_edi;
    /* 00689d19: call 0x68a1e4 */ r_esp -= 4; W32(r_esp, 0x689d1eu); f_0068a1e4();
    /* 00689d1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00689d20: call 0x698348 */ r_esp -= 4; W32(r_esp, 0x689d25u); f_00698348();
    /* 00689d25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689d28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00689d29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00689d2a: ret  */ FN_RET(0x00689b80); r_esp += 4; return;
}

void f_00689d2c(void) /* sub_689D2C */
{
    FN_ENTER(0x00689d2c);
    /* 00689d2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00689d2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689d2e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689d31: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00689d33: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00689d36: and eax, 0xf7ffffff */ {  u32 a = r_eax; u32 b = 0xf7ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00689d3b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00689d3e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x689d43u); f_0082dab0();
    /* 00689d43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689d44: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x689d49u); f_00794548();
    /* 00689d49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689d4a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689d4c: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x689d51u); f_00688e9c();
    /* 00689d51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689d53: je 0x689d70 */ if (fZ) goto L_00689d70;
L_00689d55:; BB(0x00689d55);
    /* 00689d55: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00689d5c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689d5f: jne 0x689d70 */ if (!fZ) goto L_00689d70;
L_00689d61:; BB(0x00689d61);
    /* 00689d61: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689d67: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689d69: call 0x68a1a8 */ r_esp -= 4; W32(r_esp, 0x689d6eu); f_0068a1a8();
    /* 00689d6e: jmp 0x689dc2 */ goto L_00689dc2;
L_00689d70:; BB(0x00689d70);
    /* 00689d70: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00689d74: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689d79: jne 0x689dc2 */ if (!fZ) goto L_00689dc2;
L_00689d7b:; BB(0x00689d7b);
    /* 00689d7b: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00689d81: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00689d85: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00689d88: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00689d8c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00689d91: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00689d95: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00689d99: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00689d9d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00689da0: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00689da3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00689da7: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00689dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689dae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689db0: call 0x689dec */ r_esp -= 4; W32(r_esp, 0x689db5u); f_00689dec();
    /* 00689db5: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00689dba: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00689dbd: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_00689dc2:; BB(0x00689dc2);
    /* 00689dc2: lea esi, [ebp + 0x6e0] */ r_esi = (u32)(r_ebp+0x6e0u);
    /* 00689dc8: mov ecx, esi */ r_ecx = r_esi;
    /* 00689dca: call 0x69830c */ r_esp -= 4; W32(r_esp, 0x689dcfu); f_0069830c();
    /* 00689dcf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689dd1: call 0x68a1e4 */ r_esp -= 4; W32(r_esp, 0x689dd6u); f_0068a1e4();
    /* 00689dd6: mov ecx, esi */ r_ecx = r_esi;
    /* 00689dd8: call 0x698348 */ r_esp -= 4; W32(r_esp, 0x689dddu); f_00698348();
    /* 00689ddd: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x689de2u); f_00794750();
    /* 00689de2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689de5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00689de7: ret 4 */ FN_RET(0x00689d2c); r_esp += 8; return;
}

void f_00689dec(void) /* sub_689DEC */
{
    FN_ENTER(0x00689dec);
    /* 00689dec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689ded: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689dee: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689df1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00689df3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x689df8u); f_0082d7b0();
    /* 00689df8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00689dfb: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00689dfe: mov edi, dword ptr [ebp + 0x3c] */ r_edi = R32((u32)(r_ebp+0x3cu));
    /* 00689e01: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00689e04: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00689e07: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00689e0b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00689e0f: fadd dword ptr [ebp + 0x6d4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x6d4u));
    /* 00689e15: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00689e19: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00689e1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689e1f: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x689e24u); f_008316b4();
    /* 00689e24: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00689e27: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689e29: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x689e2eu); f_0082d8bc();
    /* 00689e2e: mov eax, dword ptr [ebp + 0x68c] */ r_eax = R32((u32)(r_ebp+0x68cu));
    /* 00689e34: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689e36: je 0x689e3f */ if (fZ) goto L_00689e3f;
L_00689e38:; BB(0x00689e38);
    /* 00689e38: mov eax, 1 */ r_eax = 0x1u;
    /* 00689e3d: jmp 0x689e41 */ goto L_00689e41;
L_00689e3f:; BB(0x00689e3f);
    /* 00689e3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00689e41:; BB(0x00689e41);
    /* 00689e41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689e43: je 0x689e5e */ if (fZ) goto L_00689e5e;
L_00689e45:; BB(0x00689e45);
    /* 00689e45: push dword ptr [ebp + 0x69c] */ { u32 v = R32((u32)(r_ebp+0x69cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00689e4b: push dword ptr [ebp + 0x698] */ { u32 v = R32((u32)(r_ebp+0x698u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689e51: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689e53: push dword ptr [ebp + 0x694] */ { u32 v = R32((u32)(r_ebp+0x694u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689e59: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x689e5eu); f_0082fa0c();
L_00689e5e:; BB(0x00689e5e);
    /* 00689e5e: lea edi, [ebp + 0x6e0] */ r_edi = (u32)(r_ebp+0x6e0u);
    /* 00689e64: mov ecx, edi */ r_ecx = r_edi;
    /* 00689e66: call 0x69830c */ r_esp -= 4; W32(r_esp, 0x689e6bu); f_0069830c();
    /* 00689e6b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00689e6d: call 0x82d6f0 */ r_esp -= 4; W32(r_esp, 0x689e72u); f_0082d6f0();
    /* 00689e72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689e73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689e75: call 0x68a1e4 */ r_esp -= 4; W32(r_esp, 0x689e7au); f_0068a1e4();
    /* 00689e7a: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00689e7e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689e83: jne 0x68a05e */ if (!fZ) goto L_0068a05e;
L_00689e89:; BB(0x00689e89);
    /* 00689e89: lea ecx, [ebp + 0xde8] */ r_ecx = (u32)(r_ebp+0xde8u);
    /* 00689e8f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x689e94u); f_00829cc8();
    /* 00689e94: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x689e99u); f_0082fa9c();
    /* 00689e99: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00689e9d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689ea0: je 0x68a041 */ if (fZ) goto L_0068a041;
L_00689ea6:; BB(0x00689ea6);
    /* 00689ea6: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00689eac: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00689eb1: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 00689eb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689eb9: call 0x7aa8c8 */ r_esp -= 4; W32(r_esp, 0x689ebeu); f_007aa8c8();
L_00689ebe:; BB(0x00689ebe);
    /* 00689ebe: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x689ec3u); f_0082faac();
    /* 00689ec3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689ec5: call 0x68a088 */ r_esp -= 4; W32(r_esp, 0x689ecau); f_0068a088();
    /* 00689eca: mov ecx, edi */ r_ecx = r_edi;
    /* 00689ecc: call 0x698348 */ r_esp -= 4; W32(r_esp, 0x689ed1u); f_00698348();
    /* 00689ed1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x689ed6u); f_0082da80();
    /* 00689ed6: mov eax, dword ptr [ebp + 0x68c] */ r_eax = R32((u32)(r_ebp+0x68cu));
    /* 00689edc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689ede: je 0x689ee7 */ if (fZ) goto L_00689ee7;
L_00689ee0:; BB(0x00689ee0);
    /* 00689ee0: mov eax, 1 */ r_eax = 0x1u;
    /* 00689ee5: jmp 0x689ee9 */ goto L_00689ee9;
L_00689ee7:; BB(0x00689ee7);
    /* 00689ee7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00689ee9:; BB(0x00689ee9);
    /* 00689ee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689eeb: je 0x689faa */ if (fZ) goto L_00689faa;
L_00689ef1:; BB(0x00689ef1);
    /* 00689ef1: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00689ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689ef6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689ef8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00689efb: lea edi, [ebp + 0x694] */ r_edi = (u32)(r_ebp+0x694u);
    /* 00689f01: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689f03: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x689f09u); call_ind(t); }
    /* 00689f09: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x689f0eu); f_0082d7b0();
    /* 00689f0e: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00689f12: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00689f16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689f17: lea ecx, [ebp + 0x250] */ r_ecx = (u32)(r_ebp+0x250u);
    /* 00689f1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689f1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689f1f: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x689f24u); f_007a8d98();
    /* 00689f24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689f27: fld dword ptr [0x93c76c] */ FPUSH(R_F32((u32)(0x93c76cu)));
    /* 00689f2d: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00689f30: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689f33: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00689f37: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00689f3b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00689f3f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00689f42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f44: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00689f48: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x689f4du); f_00830b74();
    /* 00689f4d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00689f51: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f53: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x689f58u); f_00830c04();
    /* 00689f58: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00689f5c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f5e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x689f63u); f_0082e9e4();
    /* 00689f63: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00689f66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f68: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x689f6du); f_0082d8bc();
    /* 00689f6d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f6f: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 00689f74: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x689f79u); f_0082e9e4();
    /* 00689f79: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689f7b: je 0x689f95 */ if (fZ) goto L_00689f95;
L_00689f7d:; BB(0x00689f7d);
    /* 00689f7d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00689f82: push dword ptr [ebp + 0x69c] */ { u32 v = R32((u32)(r_ebp+0x69cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00689f88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f8a: push dword ptr [ebp + 0x694] */ { u32 v = R32((u32)(r_ebp+0x694u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689f90: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x689f95u); f_0082fa0c();
L_00689f95:; BB(0x00689f95);
    /* 00689f95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00689f97: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x689f9cu); f_0052d46c();
    /* 00689f9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689f9d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x689fa2u); f_0082da80();
    /* 00689fa2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689fa5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689fa6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00689fa7: ret 4 */ FN_RET(0x00689dec); r_esp += 8; return;
L_00689faa:; BB(0x00689faa);
    /* 00689faa: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00689fae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689faf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689fb1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00689fb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689fb6: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x689fbcu); call_ind(t); }
    /* 00689fbc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x689fc1u); f_0082d7b0();
    /* 00689fc1: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00689fc5: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00689fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689fca: lea edi, [ebp + 0x250] */ r_edi = (u32)(r_ebp+0x250u);
    /* 00689fd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689fd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689fd2: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x689fd7u); f_007a8d98();
    /* 00689fd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689fda: fld dword ptr [0x93c76c] */ FPUSH(R_F32((u32)(0x93c76cu)));
    /* 00689fe0: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00689fe3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689fe6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00689fea: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00689fee: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00689ff2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00689ff5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689ff7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00689ffb: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x68a000u); f_00830b74();
    /* 0068a000: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0068a004: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a006: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x68a00bu); f_00830c04();
    /* 0068a00b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0068a00f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a011: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x68a016u); f_0082e9e4();
    /* 0068a016: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0068a019: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a01b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x68a020u); f_0082d8bc();
    /* 0068a020: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a022: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 0068a027: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x68a02cu); f_0082e9e4();
    /* 0068a02c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a02e: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x68a033u); f_0052d46c();
    /* 0068a033: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a034: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x68a039u); f_0082da80();
    /* 0068a039: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a03c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a03d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a03e: ret 4 */ FN_RET(0x00689dec); r_esp += 8; return;
L_0068a041:; BB(0x0068a041);
    /* 0068a041: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0068a047: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068a04c: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0068a052: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a054: call 0x7aa984 */ r_esp -= 4; W32(r_esp, 0x68a059u); f_007aa984();
    /* 0068a059: jmp 0x689ebe */ goto L_00689ebe;
L_0068a05e:; BB(0x0068a05e);
    /* 0068a05e: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0068a063: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a068: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a06a: or eax, 0x810 */ {  u32 a = r_eax; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068a06f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0068a074: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x68a079u); f_0082d6fc();
    /* 0068a079: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a07c: call 0x7a950c */ r_esp -= 4; W32(r_esp, 0x68a081u); f_007a950c();
    /* 0068a081: jmp 0x689e89 */ goto L_00689e89;
}

void f_00689ea0(void)
{
    FN_ENTER(0x00689ea0);
    /* 00689ea0: je 0x68a041 */ if (fZ) goto L_0068a041;
L_00689ea6:; BB(0x00689ea6);
    /* 00689ea6: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00689eac: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00689eb1: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 00689eb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689eb9: call 0x7aa8c8 */ r_esp -= 4; W32(r_esp, 0x689ebeu); f_007aa8c8();
L_00689ebe:; BB(0x00689ebe);
    /* 00689ebe: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x689ec3u); f_0082faac();
    /* 00689ec3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689ec5: call 0x68a088 */ r_esp -= 4; W32(r_esp, 0x689ecau); f_0068a088();
    /* 00689eca: mov ecx, edi */ r_ecx = r_edi;
    /* 00689ecc: call 0x698348 */ r_esp -= 4; W32(r_esp, 0x689ed1u); f_00698348();
    /* 00689ed1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x689ed6u); f_0082da80();
    /* 00689ed6: mov eax, dword ptr [ebp + 0x68c] */ r_eax = R32((u32)(r_ebp+0x68cu));
    /* 00689edc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00689ede: je 0x689ee7 */ if (fZ) goto L_00689ee7;
L_00689ee0:; BB(0x00689ee0);
    /* 00689ee0: mov eax, 1 */ r_eax = 0x1u;
    /* 00689ee5: jmp 0x689ee9 */ goto L_00689ee9;
L_00689ee7:; BB(0x00689ee7);
    /* 00689ee7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00689ee9:; BB(0x00689ee9);
    /* 00689ee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689eeb: je 0x689faa */ if (fZ) goto L_00689faa;
L_00689ef1:; BB(0x00689ef1);
    /* 00689ef1: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00689ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689ef6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689ef8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00689efb: lea edi, [ebp + 0x694] */ r_edi = (u32)(r_ebp+0x694u);
    /* 00689f01: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689f03: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x689f09u); call_ind(t); }
    /* 00689f09: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x689f0eu); f_0082d7b0();
    /* 00689f0e: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 00689f12: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 00689f16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689f17: lea ecx, [ebp + 0x250] */ r_ecx = (u32)(r_ebp+0x250u);
    /* 00689f1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689f1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689f1f: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x689f24u); f_007a8d98();
    /* 00689f24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689f27: fld dword ptr [0x93c76c] */ FPUSH(R_F32((u32)(0x93c76cu)));
    /* 00689f2d: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00689f30: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689f33: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00689f37: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00689f3b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00689f3f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00689f42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f44: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00689f48: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x689f4du); f_00830b74();
    /* 00689f4d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00689f51: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f53: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x689f58u); f_00830c04();
    /* 00689f58: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00689f5c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f5e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x689f63u); f_0082e9e4();
    /* 00689f63: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00689f66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f68: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x689f6du); f_0082d8bc();
    /* 00689f6d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f6f: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 00689f74: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x689f79u); f_0082e9e4();
    /* 00689f79: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689f7b: je 0x689f95 */ if (fZ) goto L_00689f95;
L_00689f7d:; BB(0x00689f7d);
    /* 00689f7d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00689f82: push dword ptr [ebp + 0x69c] */ { u32 v = R32((u32)(r_ebp+0x69cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00689f88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689f8a: push dword ptr [ebp + 0x694] */ { u32 v = R32((u32)(r_ebp+0x694u)); r_esp -= 4; W32(r_esp, v); }
    /* 00689f90: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x689f95u); f_0082fa0c();
L_00689f95:; BB(0x00689f95);
    /* 00689f95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00689f97: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x689f9cu); f_0052d46c();
    /* 00689f9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689f9d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x689fa2u); f_0082da80();
    /* 00689fa2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00689fa5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689fa6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00689fa7: ret 4 */ FN_RET(0x00689ea0); r_esp += 8; return;
L_00689faa:; BB(0x00689faa);
    /* 00689faa: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00689fae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689faf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689fb1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00689fb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00689fb6: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x689fbcu); call_ind(t); }
    /* 00689fbc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x689fc1u); f_0082d7b0();
    /* 00689fc1: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00689fc5: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00689fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689fca: lea edi, [ebp + 0x250] */ r_edi = (u32)(r_ebp+0x250u);
    /* 00689fd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689fd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00689fd2: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x689fd7u); f_007a8d98();
    /* 00689fd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689fda: fld dword ptr [0x93c76c] */ FPUSH(R_F32((u32)(0x93c76cu)));
    /* 00689fe0: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00689fe3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689fe6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00689fea: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00689fee: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00689ff2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00689ff5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689ff7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00689ffb: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x68a000u); f_00830b74();
    /* 0068a000: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0068a004: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a006: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x68a00bu); f_00830c04();
    /* 0068a00b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0068a00f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a011: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x68a016u); f_0082e9e4();
    /* 0068a016: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0068a019: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a01b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x68a020u); f_0082d8bc();
    /* 0068a020: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a022: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 0068a027: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x68a02cu); f_0082e9e4();
    /* 0068a02c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a02e: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x68a033u); f_0052d46c();
    /* 0068a033: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068a034: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x68a039u); f_0082da80();
    /* 0068a039: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068a03c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a03d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068a03e: ret 4 */ FN_RET(0x00689ea0); r_esp += 8; return;
L_0068a041:; BB(0x0068a041);
    /* 0068a041: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0068a047: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068a04c: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0068a052: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068a054: call 0x7aa984 */ r_esp -= 4; W32(r_esp, 0x68a059u); f_007aa984();
    /* 0068a059: jmp 0x689ebe */ goto L_00689ebe;
}

