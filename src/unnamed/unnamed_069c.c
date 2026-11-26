#include "protos.h"

void f_0069c018(void) /* sub_69C018 */
{
    FN_ENTER(0x0069c018);
    /* 0069c018: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c019: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069c01c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069c01e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c020: je 0x69c033 */ if (fZ) goto L_0069c033;
L_0069c022:; BB(0x0069c022);
    /* 0069c022: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069c029: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c02c: jne 0x69c033 */ if (!fZ) goto L_0069c033;
L_0069c02e:; BB(0x0069c02e);
    /* 0069c02e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c031: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c032: ret  */ FN_RET(0x0069c018); r_esp += 4; return;
L_0069c033:; BB(0x0069c033);
    /* 0069c033: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0069c037: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069c03d: mov byte ptr [esp], 0xab */ W8((u32)(r_esp), 0xabu);
    /* 0069c041: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c043: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069c048: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069c04d: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069c052: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0069c057: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c059: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c05fu); call_ind(t); }
    /* 0069c05f: movsx edx, word ptr [ebx + 0x3cc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x3ccu));
    /* 0069c066: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c068: jne 0x69c079 */ if (!fZ) goto L_0069c079;
L_0069c06a:; BB(0x0069c06a);
    /* 0069c06a: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069c06f: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c074: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
L_0069c079:; BB(0x0069c079);
    /* 0069c079: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c07e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069c084: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x69c089u); f_007be19c();
    /* 0069c089: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c08c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c08e: je 0x69c09f */ if (fZ) goto L_0069c09f;
L_0069c090:; BB(0x0069c090);
    /* 0069c090: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069c095: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c09a: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
L_0069c09f:; BB(0x0069c09f);
    /* 0069c09f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069c0a2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69c0a7u); f_008003e0();
    /* 0069c0a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c0aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c0ab: ret  */ FN_RET(0x0069c018); r_esp += 4; return;
}

void f_0069c0ac(void) /* sub_69C0AC */
{
    FN_ENTER(0x0069c0ac);
    /* 0069c0ac: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0069c0b2: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c0b7: je 0x69c0c5 */ if (fZ) goto L_0069c0c5;
L_0069c0b9:; BB(0x0069c0b9);
    /* 0069c0b9: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c0be: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
L_0069c0c5:; BB(0x0069c0c5);
    /* 0069c0c5: ret  */ FN_RET(0x0069c0ac); r_esp += 4; return;
}

void f_0069c0c8(void) /* sub_69C0C8 */
{
    FN_ENTER(0x0069c0c8);
    /* 0069c0c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0cb: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069c0ce: mov esi, ecx */ r_esi = r_ecx;
    /* 0069c0d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c0d2: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x69c0d7u); f_00689410();
    /* 0069c0d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c0d9: jne 0x69c21b */ if (!fZ) goto L_0069c21b;
L_0069c0df:; BB(0x0069c0df);
    /* 0069c0df: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0069c0e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c0e8: je 0x69c213 */ if (fZ) goto L_0069c213;
L_0069c0ee:; BB(0x0069c0ee);
    /* 0069c0ee: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0069c0f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0f3: lea ebp, [esi + 0x628] */ r_ebp = (u32)(r_esi+0x628u);
    /* 0069c0f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069c0fb: call 0x6a7cc4 */ r_esp -= 4; W32(r_esp, 0x69c100u); f_006a7cc4();
    /* 0069c100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c101: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069c103: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x69c108u); f_006a7c24();
    /* 0069c108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c10a: jne 0x69c17e */ if (!fZ) goto L_0069c17e;
L_0069c10c:; BB(0x0069c10c);
    /* 0069c10c: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069c112: and eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069c117: jne 0x69c15c */ if (!fZ) goto L_0069c15c;
L_0069c119:; BB(0x0069c119);
    /* 0069c119: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x69c11eu); f_007c00d0();
    /* 0069c11e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c120: jne 0x69c12f */ if (!fZ) goto L_0069c12f;
L_0069c122:; BB(0x0069c122);
    /* 0069c122: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069c128: and eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069c12d: jmp 0x69c15c */ goto L_0069c15c;
L_0069c12f:; BB(0x0069c12f);
    /* 0069c12f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c131: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x69c136u); f_007bfff8();
    /* 0069c136: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069c137: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c139: jne 0x69c148 */ if (!fZ) goto L_0069c148;
L_0069c13b:; BB(0x0069c13b);
    /* 0069c13b: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069c141: and eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069c146: jmp 0x69c15c */ goto L_0069c15c;
L_0069c148:; BB(0x0069c148);
    /* 0069c148: call 0x70a604 */ r_esp -= 4; W32(r_esp, 0x69c14du); f_0070a604();
    /* 0069c14d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c14f: jne 0x69c17e */ if (!fZ) goto L_0069c17e;
L_0069c151:; BB(0x0069c151);
    /* 0069c151: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069c157: and eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0069c15c:; BB(0x0069c15c);
    /* 0069c15c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c15e: je 0x69c1b3 */ if (fZ) goto L_0069c1b3;
L_0069c160:; BB(0x0069c160);
    /* 0069c160: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x69c165u); f_007c00d0();
    /* 0069c165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c167: je 0x69c1a8 */ if (fZ) goto L_0069c1a8;
L_0069c169:; BB(0x0069c169);
    /* 0069c169: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c16b: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x69c170u); f_007bfff8();
    /* 0069c170: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069c171: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c173: je 0x69c19b */ if (fZ) goto L_0069c19b;
L_0069c175:; BB(0x0069c175);
    /* 0069c175: call 0x70a604 */ r_esp -= 4; W32(r_esp, 0x69c17au); f_0070a604();
    /* 0069c17a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c17c: je 0x69c18e */ if (fZ) goto L_0069c18e;
L_0069c17e:; BB(0x0069c17e);
    /* 0069c17e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c180: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c182: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69c187u); f_006a1ac0();
    /* 0069c187: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c18a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c18b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c18c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c18d: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c18e:; BB(0x0069c18e);
    /* 0069c18e: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069c194: and eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069c199: jmp 0x69c1b3 */ goto L_0069c1b3;
L_0069c19b:; BB(0x0069c19b);
    /* 0069c19b: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069c1a1: and eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069c1a6: jmp 0x69c1b3 */ goto L_0069c1b3;
L_0069c1a8:; BB(0x0069c1a8);
    /* 0069c1a8: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069c1ae: and eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0069c1b3:; BB(0x0069c1b3);
    /* 0069c1b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c1b5: jne 0x69c1de */ if (!fZ) goto L_0069c1de;
L_0069c1b7:; BB(0x0069c1b7);
    /* 0069c1b7: call 0x77cec0 */ r_esp -= 4; W32(r_esp, 0x69c1bcu); f_0077cec0();
    /* 0069c1bc: mov edi, eax */ r_edi = r_eax;
    /* 0069c1be: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 0069c1c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069c1c6: call dword ptr [edx + 0x108] */ { u32 t = R32((u32)(r_edx+0x108u)); r_esp -= 4; W32(r_esp, 0x69c1ccu); call_ind(t); }
    /* 0069c1cc: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 0069c1cf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c1d1: je 0x69c1fe */ if (fZ) goto L_0069c1fe;
L_0069c1d3:; BB(0x0069c1d3);
    /* 0069c1d3: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069c1d9: and eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0069c1de:; BB(0x0069c1de);
    /* 0069c1de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c1e0: je 0x69c221 */ if (fZ) goto L_0069c221;
L_0069c1e2:; BB(0x0069c1e2);
    /* 0069c1e2: call 0x77cec0 */ r_esp -= 4; W32(r_esp, 0x69c1e7u); f_0077cec0();
    /* 0069c1e7: mov edi, eax */ r_edi = r_eax;
    /* 0069c1e9: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 0069c1ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069c1f1: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c1f7u); call_ind(t); }
    /* 0069c1f7: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 0069c1fa: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c1fc: jne 0x69c221 */ if (!fZ) goto L_0069c221;
L_0069c1fe:; BB(0x0069c1fe);
    /* 0069c1fe: call 0x77ce20 */ r_esp -= 4; W32(r_esp, 0x69c203u); f_0077ce20();
    /* 0069c203: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c205: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c207: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69c20cu); f_006a1ac0();
L_0069c20c:; BB(0x0069c20c);
    /* 0069c20c: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c20f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c210: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c211: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c212: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c213:; BB(0x0069c213);
    /* 0069c213: lea ebp, [esi + 0x628] */ r_ebp = (u32)(r_esi+0x628u);
    /* 0069c219: jmp 0x69c221 */ goto L_0069c221;
L_0069c21b:; BB(0x0069c21b);
    /* 0069c21b: lea ebp, [esi + 0x628] */ r_ebp = (u32)(r_esi+0x628u);
L_0069c221:; BB(0x0069c221);
    /* 0069c221: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069c223: call 0x6a7cac */ r_esp -= 4; W32(r_esp, 0x69c228u); f_006a7cac();
    /* 0069c228: mov edi, eax */ r_edi = r_eax;
    /* 0069c22a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069c22c: call 0x6a7c8c */ r_esp -= 4; W32(r_esp, 0x69c231u); f_006a7c8c();
    /* 0069c231: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0069c235: movsx edx, word ptr [esi + 0x360] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x360u));
    /* 0069c23c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c23e: jg 0x69c3ff */ if ((!fZ&&fS==fO)) goto L_0069c3ff;
L_0069c244:; BB(0x0069c244);
    /* 0069c244: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c246: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x69c24bu); f_00689410();
    /* 0069c24b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c24d: jne 0x69c2a8 */ if (!fZ) goto L_0069c2a8;
L_0069c24f:; BB(0x0069c24f);
    /* 0069c24f: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069c255: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069c257: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x69c25cu); f_006a7c24();
    /* 0069c25c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c25e: je 0x69c2a8 */ if (fZ) goto L_0069c2a8;
L_0069c260:; BB(0x0069c260);
    /* 0069c260: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c262: je 0x69c277 */ if (fZ) goto L_0069c277;
L_0069c264:; BB(0x0069c264);
    /* 0069c264: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0069c26b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c26e: jne 0x69c277 */ if (!fZ) goto L_0069c277;
L_0069c270:; BB(0x0069c270);
    /* 0069c270: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c273: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c274: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c275: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c276: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c277:; BB(0x0069c277);
    /* 0069c277: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 0069c27b: mov byte ptr [esp], 0xb0 */ W8((u32)(r_esp), 0xb0u);
    /* 0069c27f: mov edx, 8 */ r_edx = 0x8u;
    /* 0069c284: mov word ptr [esi + 0x360], dx */ W16((u32)(r_esi+0x360u), (u16)r_edx);
    /* 0069c28b: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069c290: mov word ptr [esp + 2], bp */ W16((u32)(r_esp+0x2u), (u16)r_ebp);
    /* 0069c295: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0069c299: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069c29c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69c2a1u); f_008003e0();
    /* 0069c2a1: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c2a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c2a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c2a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c2a7: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c2a8:; BB(0x0069c2a8);
    /* 0069c2a8: movsx edx, word ptr [esi + 0x35e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x35eu));
    /* 0069c2af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c2b1: jg 0x69c3e7 */ if ((!fZ&&fS==fO)) goto L_0069c3e7;
L_0069c2b7:; BB(0x0069c2b7);
    /* 0069c2b7: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0069c2bb: fcomp dword ptr [0x93da84] */ fx_compare(ST(0), R_F32((u32)(0x93da84u))); FPOP();
    /* 0069c2c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069c2c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069c2c4: jb 0x69c310 */ if (fC) goto L_0069c310;
L_0069c2c6:; BB(0x0069c2c6);
    /* 0069c2c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c2c8: je 0x69c2dd */ if (fZ) goto L_0069c2dd;
L_0069c2ca:; BB(0x0069c2ca);
    /* 0069c2ca: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0069c2d1: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c2d4: jne 0x69c2dd */ if (!fZ) goto L_0069c2dd;
L_0069c2d6:; BB(0x0069c2d6);
    /* 0069c2d6: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c2d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c2da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c2db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c2dc: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c2dd:; BB(0x0069c2dd);
    /* 0069c2dd: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 0069c2e1: mov byte ptr [esp + 0x10], 0xaf */ W8((u32)(r_esp+0x10u), 0xafu);
    /* 0069c2e6: mov edx, 8 */ r_edx = 0x8u;
    /* 0069c2eb: mov word ptr [esi + 0x35e], dx */ W16((u32)(r_esi+0x35eu), (u16)r_edx);
    /* 0069c2f2: mov byte ptr [esp + 0x11], 2 */ W8((u32)(r_esp+0x11u), 0x2u);
    /* 0069c2f7: mov word ptr [esp + 0x12], bp */ W16((u32)(r_esp+0x12u), (u16)r_ebp);
    /* 0069c2fc: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0069c300: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0069c304: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69c309u); f_008003e0();
    /* 0069c309: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c30c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c30d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c30e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c30f: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c310:; BB(0x0069c310);
    /* 0069c310: movsx ecx, word ptr [0xa94330] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa94330u));
    /* 0069c317: movsx edi, word ptr [0xa9432c] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa9432cu));
    /* 0069c31e: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0069c322: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0069c326: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0069c32a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0069c32e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069c330: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069c333: mov ebp, dword ptr [0xa48a54] */ r_ebp = R32((u32)(0xa48a54u));
    /* 0069c339: fld dword ptr [0x93da6c] */ FPUSH(R_F32((u32)(0x93da6cu)));
    /* 0069c33f: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069c342: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069c344: fmul qword ptr [0x93d958] */ ST(0) = ST(0) * R_F64((u32)(0x93d958u));
    /* 0069c34a: fdiv qword ptr [0x93d950] */ ST(0) = ST(0) / R_F64((u32)(0x93d950u));
    /* 0069c350: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0069c354: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0069c359: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c35e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0069c362: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0069c366: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069c36a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0069c36e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0069c372: add edx, dword ptr [ebp + 0x94] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x94u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c378: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0069c37c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0069c380: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0069c384: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0069c388: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0069c38a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0069c38c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069c38e: fcomp dword ptr [0x93da84] */ fx_compare(ST(0), R_F32((u32)(0x93da84u))); FPOP();
    /* 0069c394: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069c396: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069c397: jb 0x69c20c */ if (fC) goto L_0069c20c;
L_0069c39d:; BB(0x0069c39d);
    /* 0069c39d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c39f: je 0x69c3b4 */ if (fZ) goto L_0069c3b4;
L_0069c3a1:; BB(0x0069c3a1);
    /* 0069c3a1: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0069c3a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c3ab: jne 0x69c3b4 */ if (!fZ) goto L_0069c3b4;
L_0069c3ad:; BB(0x0069c3ad);
    /* 0069c3ad: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c3b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c3b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c3b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c3b3: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c3b4:; BB(0x0069c3b4);
    /* 0069c3b4: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 0069c3b8: mov byte ptr [esp + 8], 0xaf */ W8((u32)(r_esp+0x8u), 0xafu);
    /* 0069c3bd: mov eax, 8 */ r_eax = 0x8u;
    /* 0069c3c2: mov word ptr [esi + 0x35e], ax */ W16((u32)(r_esi+0x35eu), (u16)r_eax);
    /* 0069c3c9: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 0069c3ce: mov word ptr [esp + 0xa], bp */ W16((u32)(r_esp+0xau), (u16)r_ebp);
    /* 0069c3d3: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0069c3d7: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0069c3db: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69c3e0u); f_008003e0();
    /* 0069c3e0: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c3e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c3e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c3e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c3e6: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c3e7:; BB(0x0069c3e7);
    /* 0069c3e7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c3ea: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0069c3ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c3ef: jl 0x69c417 */ if ((fS!=fO)) goto L_0069c417;
L_0069c3f1:; BB(0x0069c3f1);
    /* 0069c3f1: mov word ptr [esi + 0x35e], dx */ W16((u32)(r_esi+0x35eu), (u16)r_edx);
    /* 0069c3f8: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c3fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c3fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c3fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c3fe: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c3ff:; BB(0x0069c3ff);
    /* 0069c3ff: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c402: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0069c405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c407: jl 0x69c427 */ if ((fS!=fO)) goto L_0069c427;
L_0069c409:; BB(0x0069c409);
    /* 0069c409: mov word ptr [esi + 0x360], dx */ W16((u32)(r_esi+0x360u), (u16)r_edx);
    /* 0069c410: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c414: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c415: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c416: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c417:; BB(0x0069c417);
    /* 0069c417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c419: mov word ptr [esi + 0x35e], ax */ W16((u32)(r_esi+0x35eu), (u16)r_eax);
    /* 0069c420: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c423: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c424: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c425: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c426: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
L_0069c427:; BB(0x0069c427);
    /* 0069c427: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c429: mov word ptr [esi + 0x360], ax */ W16((u32)(r_esi+0x360u), (u16)r_eax);
    /* 0069c430: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c433: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c434: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c435: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c436: ret  */ FN_RET(0x0069c0c8); r_esp += 4; return;
}

void f_0069c438(void) /* sub_69C438 */
{
    FN_ENTER(0x0069c438);
    /* 0069c438: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c439: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c43a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069c43d: mov esi, ecx */ r_esi = r_ecx;
    /* 0069c43f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0069c443: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c444: push dword ptr [esi + 0x364] */ { u32 v = R32((u32)(r_esi+0x364u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069c44a: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c44c: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069c44f: call 0x69c4ac */ r_esp -= 4; W32(r_esp, 0x69c454u); f_0069c4ac();
    /* 0069c454: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0069c457: lea ebp, [esi + 0x30c] */ r_ebp = (u32)(r_esi+0x30cu);
    /* 0069c45d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c45e: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x69c463u); f_00782868();
    /* 0069c463: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069c464: fld dword ptr [0x93da68] */ FPUSH(R_F32((u32)(0x93da68u)));
    /* 0069c46a: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0069c46c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0069c46e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069c470: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069c471: jbe 0x69c47e */ if ((fC||fZ)) goto L_0069c47e;
L_0069c473:; BB(0x0069c473);
    /* 0069c473: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069c475: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c477: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69c47cu); f_0077774c();
    /* 0069c47c: jmp 0x69c491 */ goto L_0069c491;
L_0069c47e:; BB(0x0069c47e);
    /* 0069c47e: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0069c481: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0069c485: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0069c488: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0069c48c: call 0x7a9128 */ r_esp -= 4; W32(r_esp, 0x69c491u); f_007a9128();
L_0069c491:; BB(0x0069c491);
    /* 0069c491: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c493: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69c498u); f_00693844();
    /* 0069c498: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c49a: jne 0x69c4a3 */ if (!fZ) goto L_0069c4a3;
L_0069c49c:; BB(0x0069c49c);
    /* 0069c49c: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c49e: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x69c4a3u); f_00777724();
L_0069c4a3:; BB(0x0069c4a3);
    /* 0069c4a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c4a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c4a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c4a8: ret  */ FN_RET(0x0069c438); r_esp += 4; return;
}

void f_0069c4ac(void) /* sub_69C4AC */
{
    FN_ENTER(0x0069c4ac);
    /* 0069c4ac: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 0069c4b1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0069c4b5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c4b7: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c4ba: cmp ecx, 0xffffd000 */ {  u32 a = r_ecx; u32 b = 0xffffd000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c4c0: jle 0x69c4d6 */ if ((fZ||fS!=fO)) goto L_0069c4d6;
L_0069c4c2:; BB(0x0069c4c2);
    /* 0069c4c2: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c4c8: jge 0x69c4d6 */ if ((fS==fO)) goto L_0069c4d6;
L_0069c4ca:; BB(0x0069c4ca);
    /* 0069c4ca: mov eax, ecx */ r_eax = r_ecx;
    /* 0069c4cc: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069c4cf: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069c4d2: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c4d4: jmp 0x69c4db */ goto L_0069c4db;
L_0069c4d6:; BB(0x0069c4d6);
    /* 0069c4d6: mov eax, ecx */ r_eax = r_ecx;
    /* 0069c4d8: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_0069c4db:; BB(0x0069c4db);
    /* 0069c4db: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0069c4df: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0069c4e1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c4e3: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0069c4e6: ret 0xc */ FN_RET(0x0069c4ac); r_esp += 16; return;
}

void f_0069c4ec(void) /* sub_69C4EC */
{
    FN_ENTER(0x0069c4ec);
    /* 0069c4ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c4ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c4ee: mov edi, ecx */ r_edi = r_ecx;
    /* 0069c4f0: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069c4f7: mov dword ptr [edi + 0x348], 0x18 */ W32((u32)(r_edi+0x348u), 0x18u);
    /* 0069c501: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069c504: ja 0x69c62f */ if ((!fC&&!fZ)) goto L_0069c62f;
L_0069c50a:; BB(0x0069c50a);
    /* 0069c50a: mov eax, dword ptr [eax*4 + 0x93cba0] */ r_eax = R32((u32)(r_eax*4+0x93cba0u));
    /* 0069c511: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c4ec); r_esp += 4; return;
}

void f_0069c513(void)
{
    FN_ENTER(0x0069c513);
    /* 0069c513: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c515: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c517: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69c51cu); f_0069bdf0();
    /* 0069c51c: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c513); r_esp += 4; return;
}

void f_0069c521(void)
{
    FN_ENTER(0x0069c521);
    /* 0069c521: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c523: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c525: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69c52au); f_0069c6c0();
    /* 0069c52a: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c521); r_esp += 4; return;
}

void f_0069c52f(void)
{
    FN_ENTER(0x0069c52f);
    /* 0069c52f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c531: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c533: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69c538u); f_0069c988();
    /* 0069c538: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c52f); r_esp += 4; return;
}

void f_0069c53d(void)
{
    FN_ENTER(0x0069c53d);
    /* 0069c53d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c53f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c541: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69c546u); f_0069cd20();
    /* 0069c546: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c53d); r_esp += 4; return;
}

void f_0069c54b(void)
{
    FN_ENTER(0x0069c54b);
    /* 0069c54b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c54d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c54f: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69c554u); f_0069d1e4();
    /* 0069c554: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c54b); r_esp += 4; return;
}

void f_0069c559(void)
{
    FN_ENTER(0x0069c559);
    /* 0069c559: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c55b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c55d: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69c562u); f_0069d43c();
    /* 0069c562: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c559); r_esp += 4; return;
}

void f_0069c567(void)
{
    FN_ENTER(0x0069c567);
    /* 0069c567: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c569: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c56b: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69c570u); f_0069d8f4();
    /* 0069c570: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c567); r_esp += 4; return;
}

void f_0069c575(void)
{
    FN_ENTER(0x0069c575);
    /* 0069c575: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c577: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c579: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69c57eu); f_0069dd60();
    /* 0069c57e: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c575); r_esp += 4; return;
}

void f_0069c583(void)
{
    FN_ENTER(0x0069c583);
    /* 0069c583: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c585: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c587: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69c58cu); f_0069e15c();
    /* 0069c58c: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c583); r_esp += 4; return;
}

void f_0069c591(void)
{
    FN_ENTER(0x0069c591);
    /* 0069c591: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c593: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c595: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69c59au); f_0069e718();
    /* 0069c59a: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c591); r_esp += 4; return;
}

void f_0069c59f(void)
{
    FN_ENTER(0x0069c59f);
    /* 0069c59f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5a1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5a3: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69c5a8u); f_0069ebc8();
    /* 0069c5a8: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c59f); r_esp += 4; return;
}

void f_0069c5ad(void)
{
    FN_ENTER(0x0069c5ad);
    /* 0069c5ad: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5af: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5b1: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69c5b6u); f_0069ef04();
    /* 0069c5b6: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c5ad); r_esp += 4; return;
}

void f_0069c5b8(void)
{
    FN_ENTER(0x0069c5b8);
    /* 0069c5b8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5ba: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5bc: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69c5c1u); f_0069f148();
    /* 0069c5c1: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c5b8); r_esp += 4; return;
}

void f_0069c5c3(void)
{
    FN_ENTER(0x0069c5c3);
    /* 0069c5c3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5c5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5c7: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69c5ccu); f_0069f384();
    /* 0069c5cc: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c5c3); r_esp += 4; return;
}

void f_0069c5ce(void)
{
    FN_ENTER(0x0069c5ce);
    /* 0069c5ce: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5d0: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5d2: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69c5d7u); f_0069f648();
    /* 0069c5d7: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c5ce); r_esp += 4; return;
}

void f_0069c5d9(void)
{
    FN_ENTER(0x0069c5d9);
    /* 0069c5d9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5db: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5dd: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69c5e2u); f_0069fe2c();
    /* 0069c5e2: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c5d9); r_esp += 4; return;
}

void f_0069c5e4(void)
{
    FN_ENTER(0x0069c5e4);
    /* 0069c5e4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5e6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5e8: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69c5edu); f_006a0624();
    /* 0069c5ed: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c5e4); r_esp += 4; return;
}

void f_0069c5ef(void)
{
    FN_ENTER(0x0069c5ef);
    /* 0069c5ef: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5f1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5f3: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69c5f8u); f_006a0994();
    /* 0069c5f8: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c5ef); r_esp += 4; return;
}

void f_0069c5fa(void)
{
    FN_ENTER(0x0069c5fa);
    /* 0069c5fa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5fc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c5fe: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69c603u); f_006a0eb8();
    /* 0069c603: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c5fa); r_esp += 4; return;
}

void f_0069c605(void)
{
    FN_ENTER(0x0069c605);
    /* 0069c605: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c607: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c609: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69c60eu); f_006a139c();
    /* 0069c60e: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c605); r_esp += 4; return;
}

void f_0069c610(void)
{
    FN_ENTER(0x0069c610);
    /* 0069c610: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c612: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c614: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69c619u); f_006a1a60();
    /* 0069c619: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c610); r_esp += 4; return;
}

void f_0069c61b(void)
{
    FN_ENTER(0x0069c61b);
    /* 0069c61b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c61d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c61f: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69c624u); f_0069b93c();
    /* 0069c624: jmp 0x69c62f */ goto L_0069c62f;
L_0069c62f:; BB(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c61b); r_esp += 4; return;
}

void f_0069c626(void)
{
    FN_ENTER(0x0069c626);
    /* 0069c626: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c628: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c62a: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69c62fu); f_006a1ac0();
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c626); r_esp += 4; return;
}

void f_0069c62f(void)
{
    FN_ENTER(0x0069c62f);
    /* 0069c62f: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c635: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c63a: je 0x69c64f */ if (fZ) goto L_0069c64f;
L_0069c63c:; BB(0x0069c63c);
    /* 0069c63c: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c642: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c644: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x69c64au); call_ind(t); }
    /* 0069c64a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069c64d: jmp 0x69c660 */ goto L_0069c660;
L_0069c64f:; BB(0x0069c64f);
    /* 0069c64f: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069c655: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069c657: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x69c65du); call_ind(t); }
    /* 0069c65d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
L_0069c660:; BB(0x0069c660);
    /* 0069c660: lea esi, [edi + 0x358] */ r_esi = (u32)(r_edi+0x358u);
    /* 0069c666: mov word ptr [edi + 0x358], ax */ W16((u32)(r_edi+0x358u), (u16)r_eax);
    /* 0069c66d: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c673: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c678: je 0x69c687 */ if (fZ) goto L_0069c687;
L_0069c67a:; BB(0x0069c67a);
    /* 0069c67a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c67c: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c681u); f_00691b30();
    /* 0069c681: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
L_0069c687:; BB(0x0069c687);
    /* 0069c687: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c68c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069c68f: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069c695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c697: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069c69e: mov dword ptr [edi + 0x364], edx */ W32((u32)(r_edi+0x364u), r_edx);
    /* 0069c6a4: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c6a6: call 0x6a8918 */ r_esp -= 4; W32(r_esp, 0x69c6abu); f_006a8918();
    /* 0069c6ab: movsx eax, word ptr [edi + 0x358] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x358u));
    /* 0069c6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c6b7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c6bcu); f_00694390();
    /* 0069c6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c6bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c6be: ret  */ FN_RET(0x0069c62f); r_esp += 4; return;
}

void f_0069c6c0(void) /* sub_69C6C0 */
{
    FN_ENTER(0x0069c6c0);
    /* 0069c6c0: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069c6c5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069c6c8: ja 0x69c738 */ if ((!fC&&!fZ)) goto L_0069c738;
L_0069c6ca:; BB(0x0069c6ca);
    /* 0069c6ca: mov eax, dword ptr [eax*4 + 0x93cc04] */ r_eax = R32((u32)(r_eax*4+0x93cc04u));
    /* 0069c6d1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069c738:; BB(0x0069c738);
    /* 0069c738: ret 4 */ FN_RET(0x0069c6c0); r_esp += 8; return;
}

void f_0069c6d3(void)
{
    FN_ENTER(0x0069c6d3);
    /* 0069c6d3: call 0x69c73c */ r_esp -= 4; W32(r_esp, 0x69c6d8u); f_0069c73c();
    /* 0069c6d8: jmp 0x69c738 */ goto L_0069c738;
L_0069c738:; BB(0x0069c738);
    /* 0069c738: ret 4 */ FN_RET(0x0069c6d3); r_esp += 8; return;
}

void f_0069c6da(void)
{
    FN_ENTER(0x0069c6da);
    /* 0069c6da: call 0x6a2898 */ r_esp -= 4; W32(r_esp, 0x69c6dfu); f_006a2898();
    /* 0069c6df: jmp 0x69c738 */ goto L_0069c738;
L_0069c738:; BB(0x0069c738);
    /* 0069c738: ret 4 */ FN_RET(0x0069c6da); r_esp += 8; return;
}

void f_0069c6e1(void)
{
    FN_ENTER(0x0069c6e1);
    /* 0069c6e1: call 0x69c74c */ r_esp -= 4; W32(r_esp, 0x69c6e6u); f_0069c74c();
    /* 0069c6e6: jmp 0x69c738 */ goto L_0069c738;
L_0069c738:; BB(0x0069c738);
    /* 0069c738: ret 4 */ FN_RET(0x0069c6e1); r_esp += 8; return;
}

void f_0069c6e8(void)
{
    FN_ENTER(0x0069c6e8);
    /* 0069c6e8: call 0x69c7bc */ r_esp -= 4; W32(r_esp, 0x69c6edu); f_0069c7bc();
    /* 0069c6ed: jmp 0x69c738 */ goto L_0069c738;
L_0069c738:; BB(0x0069c738);
    /* 0069c738: ret 4 */ FN_RET(0x0069c6e8); r_esp += 8; return;
}

void f_0069c6ef(void)
{
    FN_ENTER(0x0069c6ef);
    /* 0069c6ef: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069c6f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c6f7: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069c6fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c6ff: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069c705: je 0x69c738 */ if (fZ) goto L_0069c738;
L_0069c707:; BB(0x0069c707);
    /* 0069c707: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069c70d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069c70f: je 0x69c718 */ if (fZ) goto L_0069c718;
L_0069c711:; BB(0x0069c711);
    /* 0069c711: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c716: jmp 0x69c71a */ goto L_0069c71a;
L_0069c718:; BB(0x0069c718);
    /* 0069c718: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069c71a:; BB(0x0069c71a);
    /* 0069c71a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c71c: jne 0x69c738 */ if (!fZ) goto L_0069c738;
L_0069c71e:; BB(0x0069c71e);
    /* 0069c71e: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069c723: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c728: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69c72du); f_0070a60c();
    /* 0069c72d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c730: ret 4 */ FN_RET(0x0069c6ef); r_esp += 8; return;
L_0069c738:; BB(0x0069c738);
    /* 0069c738: ret 4 */ FN_RET(0x0069c6ef); r_esp += 8; return;
}

void f_0069c733(void)
{
    FN_ENTER(0x0069c733);
    /* 0069c733: call 0x69c7dc */ r_esp -= 4; W32(r_esp, 0x69c738u); f_0069c7dc();
    /* 0069c738: ret 4 */ FN_RET(0x0069c733); r_esp += 8; return;
}

void f_0069c738(void)
{
    FN_ENTER(0x0069c738);
    /* 0069c738: ret 4 */ FN_RET(0x0069c738); r_esp += 8; return;
}

void f_0069c73c(void) /* sub_69C73C */
{
    FN_ENTER(0x0069c73c);
    /* 0069c73c: call 0x68a320 */ r_esp -= 4; W32(r_esp, 0x69c741u); f_0068a320();
    /* 0069c741: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c743: je 0x69c74a */ if (fZ) goto L_0069c74a;
L_0069c745:; BB(0x0069c745);
    /* 0069c745: call 0x77d578 */ r_esp -= 4; W32(r_esp, 0x69c74au); f_0077d578();
L_0069c74a:; BB(0x0069c74a);
    /* 0069c74a: ret  */ FN_RET(0x0069c73c); r_esp += 4; return;
}

void f_0069c74c(void) /* sub_69C74C */
{
    FN_ENTER(0x0069c74c);
    /* 0069c74c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069c74f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c751: je 0x69c763 */ if (fZ) goto L_0069c763;
L_0069c753:; BB(0x0069c753);
    /* 0069c753: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069c75a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c75d: jne 0x69c763 */ if (!fZ) goto L_0069c763;
L_0069c75f:; BB(0x0069c75f);
    /* 0069c75f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c762: ret  */ FN_RET(0x0069c74c); r_esp += 4; return;
L_0069c763:; BB(0x0069c763);
    /* 0069c763: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069c767: movzx ecx, word ptr [ecx + 0x3cc] */ r_ecx = (u32)R16((u32)(r_ecx+0x3ccu));
    /* 0069c76e: mov byte ptr [esp], 0x58 */ W8((u32)(r_esp), 0x58u);
    /* 0069c772: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c774: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069c779: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069c77e: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0069c783: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 0069c788: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c78d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069c793: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x69c798u); f_007be19c();
    /* 0069c798: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c79b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c79d: je 0x69c7ae */ if (fZ) goto L_0069c7ae;
L_0069c79f:; BB(0x0069c79f);
    /* 0069c79f: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069c7a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069c7a9: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
L_0069c7ae:; BB(0x0069c7ae);
    /* 0069c7ae: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069c7b1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69c7b6u); f_008003e0();
    /* 0069c7b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c7b9: ret  */ FN_RET(0x0069c74c); r_esp += 4; return;
}

void f_0069c7bc(void) /* sub_69C7BC */
{
    FN_ENTER(0x0069c7bc);
    /* 0069c7bc: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069c7c2: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c7c7: je 0x69c7ca */ if (fZ) goto L_0069c7ca;
L_0069c7c9:; BB(0x0069c7c9);
    /* 0069c7c9: ret  */ FN_RET(0x0069c7bc); r_esp += 4; return;
L_0069c7ca:; BB(0x0069c7ca);
    /* 0069c7ca: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0069c7d0: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c7d2: je 0x69c7d9 */ if (fZ) goto L_0069c7d9;
L_0069c7d4:; BB(0x0069c7d4);
    /* 0069c7d4: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69c7d9u); f_0069d554();
L_0069c7d9:; BB(0x0069c7d9);
    /* 0069c7d9: ret  */ FN_RET(0x0069c7bc); r_esp += 4; return;
}

void f_0069c7dc(void) /* sub_69C7DC */
{
    FN_ENTER(0x0069c7dc);
    /* 0069c7dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c7dd: mov edi, ecx */ r_edi = r_ecx;
    /* 0069c7df: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069c7e6: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069c7e9: mov dword ptr [edi + 0x348], 0x17 */ W32((u32)(r_edi+0x348u), 0x17u);
    /* 0069c7f3: ja 0x69c91e */ if ((!fC&&!fZ)) goto L_0069c91e;
L_0069c7f9:; BB(0x0069c7f9);
    /* 0069c7f9: mov eax, dword ptr [eax*4 + 0x93cc40] */ r_eax = R32((u32)(r_eax*4+0x93cc40u));
    /* 0069c800: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c7dc); r_esp += 4; return;
}

void f_0069c802(void)
{
    FN_ENTER(0x0069c802);
    /* 0069c802: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c804: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c806: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69c80bu); f_0069bdf0();
    /* 0069c80b: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c802); r_esp += 4; return;
}

void f_0069c810(void)
{
    FN_ENTER(0x0069c810);
    /* 0069c810: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c812: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c814: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69c819u); f_0069c6c0();
    /* 0069c819: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c810); r_esp += 4; return;
}

void f_0069c81e(void)
{
    FN_ENTER(0x0069c81e);
    /* 0069c81e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c820: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c822: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69c827u); f_0069c988();
    /* 0069c827: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c81e); r_esp += 4; return;
}

void f_0069c82c(void)
{
    FN_ENTER(0x0069c82c);
    /* 0069c82c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c82e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c830: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69c835u); f_0069cd20();
    /* 0069c835: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c82c); r_esp += 4; return;
}

void f_0069c83a(void)
{
    FN_ENTER(0x0069c83a);
    /* 0069c83a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c83c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c83e: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69c843u); f_0069d1e4();
    /* 0069c843: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c83a); r_esp += 4; return;
}

void f_0069c848(void)
{
    FN_ENTER(0x0069c848);
    /* 0069c848: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c84a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c84c: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69c851u); f_0069d43c();
    /* 0069c851: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c848); r_esp += 4; return;
}

void f_0069c856(void)
{
    FN_ENTER(0x0069c856);
    /* 0069c856: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c858: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c85a: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69c85fu); f_0069d8f4();
    /* 0069c85f: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c856); r_esp += 4; return;
}

void f_0069c864(void)
{
    FN_ENTER(0x0069c864);
    /* 0069c864: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c866: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c868: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69c86du); f_0069dd60();
    /* 0069c86d: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c864); r_esp += 4; return;
}

void f_0069c872(void)
{
    FN_ENTER(0x0069c872);
    /* 0069c872: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c874: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c876: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69c87bu); f_0069e15c();
    /* 0069c87b: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c872); r_esp += 4; return;
}

void f_0069c880(void)
{
    FN_ENTER(0x0069c880);
    /* 0069c880: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c882: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c884: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69c889u); f_0069e718();
    /* 0069c889: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c880); r_esp += 4; return;
}

void f_0069c88e(void)
{
    FN_ENTER(0x0069c88e);
    /* 0069c88e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c890: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c892: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69c897u); f_0069ebc8();
    /* 0069c897: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c88e); r_esp += 4; return;
}

void f_0069c89c(void)
{
    FN_ENTER(0x0069c89c);
    /* 0069c89c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c89e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8a0: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69c8a5u); f_0069ef04();
    /* 0069c8a5: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c89c); r_esp += 4; return;
}

void f_0069c8a7(void)
{
    FN_ENTER(0x0069c8a7);
    /* 0069c8a7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8a9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8ab: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69c8b0u); f_0069f148();
    /* 0069c8b0: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8a7); r_esp += 4; return;
}

void f_0069c8b2(void)
{
    FN_ENTER(0x0069c8b2);
    /* 0069c8b2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8b4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8b6: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69c8bbu); f_0069f384();
    /* 0069c8bb: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8b2); r_esp += 4; return;
}

void f_0069c8bd(void)
{
    FN_ENTER(0x0069c8bd);
    /* 0069c8bd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8c1: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69c8c6u); f_0069f648();
    /* 0069c8c6: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8bd); r_esp += 4; return;
}

void f_0069c8c8(void)
{
    FN_ENTER(0x0069c8c8);
    /* 0069c8c8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8ca: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8cc: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69c8d1u); f_0069fe2c();
    /* 0069c8d1: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8c8); r_esp += 4; return;
}

void f_0069c8d3(void)
{
    FN_ENTER(0x0069c8d3);
    /* 0069c8d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8d7: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69c8dcu); f_006a0624();
    /* 0069c8dc: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8d3); r_esp += 4; return;
}

void f_0069c8de(void)
{
    FN_ENTER(0x0069c8de);
    /* 0069c8de: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8e0: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8e2: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69c8e7u); f_006a0994();
    /* 0069c8e7: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8de); r_esp += 4; return;
}

void f_0069c8e9(void)
{
    FN_ENTER(0x0069c8e9);
    /* 0069c8e9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8eb: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8ed: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69c8f2u); f_006a0eb8();
    /* 0069c8f2: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8e9); r_esp += 4; return;
}

void f_0069c8f4(void)
{
    FN_ENTER(0x0069c8f4);
    /* 0069c8f4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8f6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c8f8: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69c8fdu); f_006a139c();
    /* 0069c8fd: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8f4); r_esp += 4; return;
}

void f_0069c8ff(void)
{
    FN_ENTER(0x0069c8ff);
    /* 0069c8ff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c901: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c903: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69c908u); f_006a1a60();
    /* 0069c908: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c8ff); r_esp += 4; return;
}

void f_0069c90a(void)
{
    FN_ENTER(0x0069c90a);
    /* 0069c90a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c90c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c90e: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69c913u); f_0069b93c();
    /* 0069c913: jmp 0x69c91e */ goto L_0069c91e;
L_0069c91e:; BB(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c90a); r_esp += 4; return;
}

void f_0069c915(void)
{
    FN_ENTER(0x0069c915);
    /* 0069c915: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c917: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c919: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69c91eu); f_006a1ac0();
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c915); r_esp += 4; return;
}

void f_0069c91e(void)
{
    FN_ENTER(0x0069c91e);
    /* 0069c91e: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c924: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c929: je 0x69c932 */ if (fZ) goto L_0069c932;
L_0069c92b:; BB(0x0069c92b);
    /* 0069c92b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c92d: call 0x691b30 */ r_esp -= 4; W32(r_esp, 0x69c932u); f_00691b30();
L_0069c932:; BB(0x0069c932);
    /* 0069c932: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069c939: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c93c: jne 0x69c94a */ if (!fZ) goto L_0069c94a;
L_0069c93e:; BB(0x0069c93e);
    /* 0069c93e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069c943: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069c94a:; BB(0x0069c94a);
    /* 0069c94a: movsx eax, word ptr [edi + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3ccu));
    /* 0069c951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c952: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c954: mov ecx, edi */ r_ecx = r_edi;
    /* 0069c956: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69c95bu); f_00694390();
    /* 0069c95b: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069c961: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c966: je 0x69c983 */ if (fZ) goto L_0069c983;
L_0069c968:; BB(0x0069c968);
    /* 0069c968: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069c96e: mov edx, dword ptr [edi + 0x3d0] */ r_edx = R32((u32)(r_edi+0x3d0u));
    /* 0069c974: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c977: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069c97d: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
L_0069c983:; BB(0x0069c983);
    /* 0069c983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c984: ret  */ FN_RET(0x0069c91e); r_esp += 4; return;
}

void f_0069c988(void) /* sub_69C988 */
{
    FN_ENTER(0x0069c988);
    /* 0069c988: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069c98d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069c990: ja 0x69ca07 */ if ((!fC&&!fZ)) goto L_0069ca07;
L_0069c992:; BB(0x0069c992);
    /* 0069c992: mov eax, dword ptr [eax*4 + 0x93cca4] */ r_eax = R32((u32)(r_eax*4+0x93cca4u));
    /* 0069c999: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069ca07:; BB(0x0069ca07);
    /* 0069ca07: ret 4 */ FN_RET(0x0069c988); r_esp += 8; return;
}

void f_0069c99b(void)
{
    FN_ENTER(0x0069c99b);
    /* 0069c99b: call 0x69ca0c */ r_esp -= 4; W32(r_esp, 0x69c9a0u); f_0069ca0c();
    /* 0069c9a0: jmp 0x69ca07 */ goto L_0069ca07;
L_0069ca07:; BB(0x0069ca07);
    /* 0069ca07: ret 4 */ FN_RET(0x0069c99b); r_esp += 8; return;
}

void f_0069c9a2(void)
{
    FN_ENTER(0x0069c9a2);
    /* 0069c9a2: call 0x6a28e0 */ r_esp -= 4; W32(r_esp, 0x69c9a7u); f_006a28e0();
    /* 0069c9a7: jmp 0x69ca07 */ goto L_0069ca07;
L_0069ca07:; BB(0x0069ca07);
    /* 0069ca07: ret 4 */ FN_RET(0x0069c9a2); r_esp += 8; return;
}

void f_0069c9a9(void)
{
    FN_ENTER(0x0069c9a9);
    /* 0069c9a9: call 0x69cbfc */ r_esp -= 4; W32(r_esp, 0x69c9aeu); f_0069cbfc();
    /* 0069c9ae: jmp 0x69ca07 */ goto L_0069ca07;
L_0069ca07:; BB(0x0069ca07);
    /* 0069ca07: ret 4 */ FN_RET(0x0069c9a9); r_esp += 8; return;
}

void f_0069c9b0(void)
{
    FN_ENTER(0x0069c9b0);
    /* 0069c9b0: call 0x69cc2c */ r_esp -= 4; W32(r_esp, 0x69c9b5u); f_0069cc2c();
    /* 0069c9b5: jmp 0x69ca07 */ goto L_0069ca07;
L_0069ca07:; BB(0x0069ca07);
    /* 0069ca07: ret 4 */ FN_RET(0x0069c9b0); r_esp += 8; return;
}

void f_0069c9b7(void)
{
    FN_ENTER(0x0069c9b7);
    /* 0069c9b7: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069c9bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c9bf: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069c9c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c9c7: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069c9cd: je 0x69ca07 */ if (fZ) goto L_0069ca07;
L_0069c9cf:; BB(0x0069c9cf);
    /* 0069c9cf: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069c9d5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069c9d7: je 0x69c9e0 */ if (fZ) goto L_0069c9e0;
L_0069c9d9:; BB(0x0069c9d9);
    /* 0069c9d9: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c9de: jmp 0x69c9e2 */ goto L_0069c9e2;
L_0069c9e0:; BB(0x0069c9e0);
    /* 0069c9e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069c9e2:; BB(0x0069c9e2);
    /* 0069c9e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069c9e4: jne 0x69ca07 */ if (!fZ) goto L_0069ca07;
L_0069c9e6:; BB(0x0069c9e6);
    /* 0069c9e6: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069c9eb: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c9f0: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69c9f5u); f_0070a60c();
    /* 0069c9f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c9f8: ret 4 */ FN_RET(0x0069c9b7); r_esp += 8; return;
L_0069ca07:; BB(0x0069ca07);
    /* 0069ca07: ret 4 */ FN_RET(0x0069c9b7); r_esp += 8; return;
}

void f_0069c9fb(void)
{
    FN_ENTER(0x0069c9fb);
    /* 0069c9fb: call 0x692804 */ r_esp -= 4; W32(r_esp, 0x69ca00u); f_00692804();
    /* 0069ca00: jmp 0x69ca07 */ goto L_0069ca07;
L_0069ca07:; BB(0x0069ca07);
    /* 0069ca07: ret 4 */ FN_RET(0x0069c9fb); r_esp += 8; return;
}

void f_0069ca02(void)
{
    FN_ENTER(0x0069ca02);
    /* 0069ca02: call 0x69cc8c */ r_esp -= 4; W32(r_esp, 0x69ca07u); f_0069cc8c();
    /* 0069ca07: ret 4 */ FN_RET(0x0069ca02); r_esp += 8; return;
}

void f_0069ca07(void)
{
    FN_ENTER(0x0069ca07);
    /* 0069ca07: ret 4 */ FN_RET(0x0069ca07); r_esp += 8; return;
}

void f_0069ca0c(void) /* sub_69CA0C */
{
    FN_ENTER(0x0069ca0c);
    /* 0069ca0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ca0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ca0e: mov esi, ecx */ r_esi = r_ecx;
    /* 0069ca10: mov ecx, esi */ r_ecx = r_esi;
    /* 0069ca12: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x69ca17u); f_006877b0();
    /* 0069ca17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ca19: jne 0x69ca76 */ if (!fZ) goto L_0069ca76;
L_0069ca1b:; BB(0x0069ca1b);
    /* 0069ca1b: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0069ca22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ca24: jne 0x69ca73 */ if (!fZ) goto L_0069ca73;
L_0069ca26:; BB(0x0069ca26);
    /* 0069ca26: fld dword ptr [esi + 0x6fc] */ FPUSH(R_F32((u32)(r_esi+0x6fcu)));
    /* 0069ca2c: fsub dword ptr [0x93da60] */ ST(0) = ST(0) - R_F32((u32)(0x93da60u));
    /* 0069ca32: fcom dword ptr [0x93da5c] */ fx_compare(ST(0), R_F32((u32)(0x93da5cu))); 
    /* 0069ca38: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069ca3a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069ca3d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069ca3e: jae 0x69ca6a */ if (!fC) goto L_0069ca6a;
L_0069ca40:; BB(0x0069ca40);
    /* 0069ca40: fld dword ptr [0x93da64] */ FPUSH(R_F32((u32)(0x93da64u)));
    /* 0069ca46: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069ca49: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069ca4c: mov ecx, esi */ r_ecx = r_esi;
    /* 0069ca4e: mov edx, 1 */ r_edx = 0x1u;
    /* 0069ca53: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069ca58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ca59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ca5b: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 0069ca62: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069ca65: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69ca6au); f_007b52ec();
L_0069ca6a:; BB(0x0069ca6a);
    /* 0069ca6a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0069ca6d: fstp dword ptr [esi + 0x6fc] */ W_F32((u32)(r_esi+0x6fcu), ST(0)); FPOP();
L_0069ca73:; BB(0x0069ca73);
    /* 0069ca73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069ca74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ca75: ret  */ FN_RET(0x0069ca0c); r_esp += 4; return;
L_0069ca76:; BB(0x0069ca76);
    /* 0069ca76: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069ca7c: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ca7f: mov dword ptr [esi + 0x33c], eax */ W32((u32)(r_esi+0x33cu), r_eax);
    /* 0069ca85: mov ecx, esi */ r_ecx = r_esi;
    /* 0069ca87: call 0x69cab0 */ r_esp -= 4; W32(r_esp, 0x69ca8cu); f_0069cab0();
    /* 0069ca8c: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069ca92: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069ca97: mov dword ptr [esi + 0x33c], eax */ W32((u32)(r_esi+0x33cu), r_eax);
    /* 0069ca9d: add esi, 0x70c */ {  u32 a = r_esi; u32 b = 0x70cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069caa3: mov ecx, esi */ r_ecx = r_esi;
    /* 0069caa5: call 0x698678 */ r_esp -= 4; W32(r_esp, 0x69caaau); f_00698678();
    /* 0069caaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069caab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069caac: ret  */ FN_RET(0x0069ca0c); r_esp += 4; return;
}

void f_0069cab0(void) /* sub_69CAB0 */
{
    FN_ENTER(0x0069cab0);
    /* 0069cab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cab1: mov edi, ecx */ r_edi = r_ecx;
    /* 0069cab3: mov ecx, edi */ r_ecx = r_edi;
    /* 0069cab5: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x69cabau); f_006877b0();
    /* 0069caba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069cabc: je 0x69cb22 */ if (fZ) goto L_0069cb22;
L_0069cabe:; BB(0x0069cabe);
    /* 0069cabe: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069cac4: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0069cac7: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069caca: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069cad0: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cad6: jne 0x69cae3 */ if (!fZ) goto L_0069cae3;
L_0069cad8:; BB(0x0069cad8);
    /* 0069cad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cada: mov ecx, edi */ r_ecx = r_edi;
    /* 0069cadc: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69cae1u); f_006a1ac0();
    /* 0069cae1: jmp 0x69cb22 */ goto L_0069cb22;
L_0069cae3:; BB(0x0069cae3);
    /* 0069cae3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cae5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069cae7: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69caecu); f_0069e15c();
    /* 0069caec: mov eax, dword ptr [edi + 0x92c] */ r_eax = R32((u32)(r_edi+0x92cu));
    /* 0069caf2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069caf4: je 0x69cb0a */ if (fZ) goto L_0069cb0a;
L_0069caf6:; BB(0x0069caf6);
    /* 0069caf6: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069cafc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069cafe: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x69cb01u); call_ind(t); }
    /* 0069cb01: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069cb08: jmp 0x69cb11 */ goto L_0069cb11;
L_0069cb0a:; BB(0x0069cb0a);
    /* 0069cb0a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069cb0c: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69cb11u); f_0069cb24();
L_0069cb11:; BB(0x0069cb11);
    /* 0069cb11: mov dword ptr [edi + 0x6dc], 0x3f800000 */ W32((u32)(r_edi+0x6dcu), 0x3f800000u);
    /* 0069cb1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb1c: call 0x697988 */ r_esp -= 4; W32(r_esp, 0x69cb21u); f_00697988();
    /* 0069cb21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0069cb22:; BB(0x0069cb22);
    /* 0069cb22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cb23: ret  */ FN_RET(0x0069cab0); r_esp += 4; return;
}

void f_0069cb24(void) /* sub_69CB24 */
{
    FN_ENTER(0x0069cb24);
    /* 0069cb24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb25: mov ebp, esp */ r_ebp = r_esp;
    /* 0069cb27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb29: push 0x8eb694 */ { u32 v = 0x8eb694u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0069cb34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0069cb3c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069cb3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0069cb42: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0069cb45: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0069cb48: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0069cb4b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0069cb4e: call 0x69ad54 */ r_esp -= 4; W32(r_esp, 0x69cb53u); f_0069ad54();
    /* 0069cb53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069cb56: mov dword ptr [eax + 0x6d4], 0 */ W32((u32)(r_eax+0x6d4u), 0x0u);
    /* 0069cb60: lea ecx, [eax + 0x6d4] */ r_ecx = (u32)(r_eax+0x6d4u);
    /* 0069cb66: mov dword ptr [eax + 0x6d8], 0 */ W32((u32)(r_eax+0x6d8u), 0x0u);
    /* 0069cb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb71: mov dword ptr [eax + 0x6dc], 0 */ W32((u32)(r_eax+0x6dcu), 0x0u);
    /* 0069cb7b: call 0x698530 */ r_esp -= 4; W32(r_esp, 0x69cb80u); f_00698530();
    /* 0069cb80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069cb83: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0069cb8a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069cb8d: jne 0x69cbe6 */ if (!fZ) goto L_0069cbe6;
L_0069cb8f:; BB(0x0069cb8f);
    /* 0069cb8f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0069cb96: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb98: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69cb9du); f_005caba4();
    /* 0069cb9d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0069cba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cba3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0069cba6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cba8: je 0x69cbf4 */ if (fZ) goto L_0069cbf4;
L_0069cbaa:; BB(0x0069cbaa);
    /* 0069cbaa: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0069cbb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069cbb8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069cbbb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069cbbe: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0069cbc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbc3: push 0x6920ac */ { u32 v = 0x6920acu; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbc8: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069cbce: call 0x788a28 */ r_esp -= 4; W32(r_esp, 0x69cbd3u); f_00788a28();
    /* 0069cbd3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0069cbda:; BB(0x0069cbda);
    /* 0069cbda: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069cbdd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069cbe0: mov dword ptr [edx + 0x620], eax */ W32((u32)(r_edx+0x620u), r_eax);
L_0069cbe6:; BB(0x0069cbe6);
    /* 0069cbe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069cbe9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069cbf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0069cbf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cbf3: ret  */ FN_RET(0x0069cb24); r_esp += 4; return;
L_0069cbf4:; BB(0x0069cbf4);
    /* 0069cbf4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069cbf6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0069cbf9: jmp 0x69cbda */ goto L_0069cbda;
}

void f_0069cbfc(void) /* sub_69CBFC */
{
    FN_ENTER(0x0069cbfc);
    /* 0069cbfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cbff: je 0x69cc0f */ if (fZ) goto L_0069cc0f;
L_0069cc01:; BB(0x0069cc01);
    /* 0069cc01: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069cc08: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069cc0b: jne 0x69cc0f */ if (!fZ) goto L_0069cc0f;
L_0069cc0d:; BB(0x0069cc0d);
    /* 0069cc0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069cc0e: ret  */ FN_RET(0x0069cbfc); r_esp += 4; return;
L_0069cc0f:; BB(0x0069cc0f);
    /* 0069cc0f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069cc13: mov byte ptr [esp], 0x57 */ W8((u32)(r_esp), 0x57u);
    /* 0069cc17: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069cc1c: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069cc21: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069cc24: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69cc29u); f_008003e0();
    /* 0069cc29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069cc2a: ret  */ FN_RET(0x0069cbfc); r_esp += 4; return;
}

void f_0069cc2c(void) /* sub_69CC2C */
{
    FN_ENTER(0x0069cc2c);
    /* 0069cc2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc2d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069cc2f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069cc31: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x69cc36u); f_006877b0();
    /* 0069cc36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cc38: jne 0x69cc78 */ if (!fZ) goto L_0069cc78;
L_0069cc3a:; BB(0x0069cc3a);
    /* 0069cc3a: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0069cc41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069cc43: jne 0x69cc76 */ if (!fZ) goto L_0069cc76;
L_0069cc45:; BB(0x0069cc45);
    /* 0069cc45: fld dword ptr [ebp + 0x6fc] */ FPUSH(R_F32((u32)(r_ebp+0x6fcu)));
    /* 0069cc4b: fsub dword ptr [0x93da60] */ ST(0) = ST(0) - R_F32((u32)(0x93da60u));
    /* 0069cc51: fcom dword ptr [0x93da5c] */ fx_compare(ST(0), R_F32((u32)(0x93da5cu))); 
    /* 0069cc57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069cc59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069cc5a: jae 0x69cc70 */ if (!fC) goto L_0069cc70;
L_0069cc5c:; BB(0x0069cc5c);
    /* 0069cc5c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069cc5e: fld dword ptr [0x93da50] */ FPUSH(R_F32((u32)(0x93da50u)));
    /* 0069cc64: mov eax, 1 */ r_eax = 0x1u;
    /* 0069cc69: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
L_0069cc70:; BB(0x0069cc70);
    /* 0069cc70: fstp dword ptr [ebp + 0x6fc] */ W_F32((u32)(r_ebp+0x6fcu), ST(0)); FPOP();
L_0069cc76:; BB(0x0069cc76);
    /* 0069cc76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cc77: ret  */ FN_RET(0x0069cc2c); r_esp += 4; return;
L_0069cc78:; BB(0x0069cc78);
    /* 0069cc78: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 0069cc7e: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069cc81: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
    /* 0069cc87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cc88: ret  */ FN_RET(0x0069cc2c); r_esp += 4; return;
}

void f_0069cc8c(void) /* sub_69CC8C */
{
    FN_ENTER(0x0069cc8c);
    /* 0069cc8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069cc8f: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0069cc95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069cc97: mov dword ptr [ebp + 0x810], 0 */ W32((u32)(r_ebp+0x810u), 0x0u);
    /* 0069cca1: mov word ptr [ebp + 0x808], ax */ W16((u32)(r_ebp+0x808u), (u16)r_eax);
    /* 0069cca8: mov word ptr [ebp + 0x80a], ax */ W16((u32)(r_ebp+0x80au), (u16)r_eax);
    /* 0069ccaf: mov dword ptr [ebp + 0x720], eax */ W32((u32)(r_ebp+0x720u), r_eax);
    /* 0069ccb5: mov dword ptr [ebp + 0x818], 0 */ W32((u32)(r_ebp+0x818u), 0x0u);
    /* 0069ccbf: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069ccc2: mov dword ptr [ebp + 0x33c], edx */ W32((u32)(r_ebp+0x33cu), r_edx);
    /* 0069ccc8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ccca: mov dword ptr [ebp + 0x814], 0 */ W32((u32)(r_ebp+0x814u), 0x0u);
    /* 0069ccd4: mov dword ptr [ebp + 0x6d4], 0 */ W32((u32)(r_ebp+0x6d4u), 0x0u);
    /* 0069ccde: mov dword ptr [ebp + 0x6d8], 0 */ W32((u32)(r_ebp+0x6d8u), 0x0u);
    /* 0069cce8: mov dword ptr [ebp + 0x6dc], 0 */ W32((u32)(r_ebp+0x6dcu), 0x0u);
    /* 0069ccf2: call 0x692804 */ r_esp -= 4; W32(r_esp, 0x69ccf7u); f_00692804();
    /* 0069ccf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ccf9: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ccfb: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 0069cd01: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069cd03: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069cd08: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
    /* 0069cd0e: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 0069cd15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069cd17: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69cd1cu); f_00694390();
    /* 0069cd1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cd1d: ret  */ FN_RET(0x0069cc8c); r_esp += 4; return;
}

void f_0069cd20(void) /* sub_69CD20 */
{
    FN_ENTER(0x0069cd20);
    /* 0069cd20: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069cd25: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069cd28: ja 0x69cd98 */ if ((!fC&&!fZ)) goto L_0069cd98;
L_0069cd2a:; BB(0x0069cd2a);
    /* 0069cd2a: mov eax, dword ptr [eax*4 + 0x93ccc8] */ r_eax = R32((u32)(r_eax*4+0x93ccc8u));
    /* 0069cd31: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069cd98:; BB(0x0069cd98);
    /* 0069cd98: ret 4 */ FN_RET(0x0069cd20); r_esp += 8; return;
}

void f_0069cd33(void)
{
    FN_ENTER(0x0069cd33);
    /* 0069cd33: call 0x6a2918 */ r_esp -= 4; W32(r_esp, 0x69cd38u); f_006a2918();
    /* 0069cd38: jmp 0x69cd98 */ goto L_0069cd98;
L_0069cd98:; BB(0x0069cd98);
    /* 0069cd98: ret 4 */ FN_RET(0x0069cd33); r_esp += 8; return;
}

void f_0069cd3a(void)
{
    FN_ENTER(0x0069cd3a);
    /* 0069cd3a: call 0x69cd9c */ r_esp -= 4; W32(r_esp, 0x69cd3fu); f_0069cd9c();
    /* 0069cd3f: jmp 0x69cd98 */ goto L_0069cd98;
L_0069cd98:; BB(0x0069cd98);
    /* 0069cd98: ret 4 */ FN_RET(0x0069cd3a); r_esp += 8; return;
}

void f_0069cd41(void)
{
    FN_ENTER(0x0069cd41);
    /* 0069cd41: call 0x69cdf0 */ r_esp -= 4; W32(r_esp, 0x69cd46u); f_0069cdf0();
    /* 0069cd46: jmp 0x69cd98 */ goto L_0069cd98;
L_0069cd98:; BB(0x0069cd98);
    /* 0069cd98: ret 4 */ FN_RET(0x0069cd41); r_esp += 8; return;
}

void f_0069cd48(void)
{
    FN_ENTER(0x0069cd48);
    /* 0069cd48: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069cd4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069cd50: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069cd56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069cd58: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069cd5e: je 0x69cd98 */ if (fZ) goto L_0069cd98;
L_0069cd60:; BB(0x0069cd60);
    /* 0069cd60: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069cd66: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069cd68: je 0x69cd71 */ if (fZ) goto L_0069cd71;
L_0069cd6a:; BB(0x0069cd6a);
    /* 0069cd6a: mov eax, 1 */ r_eax = 0x1u;
    /* 0069cd6f: jmp 0x69cd73 */ goto L_0069cd73;
L_0069cd71:; BB(0x0069cd71);
    /* 0069cd71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069cd73:; BB(0x0069cd73);
    /* 0069cd73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069cd75: jne 0x69cd98 */ if (!fZ) goto L_0069cd98;
L_0069cd77:; BB(0x0069cd77);
    /* 0069cd77: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd7c: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd81: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69cd86u); f_0070a60c();
    /* 0069cd86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069cd89: ret 4 */ FN_RET(0x0069cd48); r_esp += 8; return;
L_0069cd98:; BB(0x0069cd98);
    /* 0069cd98: ret 4 */ FN_RET(0x0069cd48); r_esp += 8; return;
}

void f_0069cd8c(void)
{
    FN_ENTER(0x0069cd8c);
    /* 0069cd8c: call 0x69ce04 */ r_esp -= 4; W32(r_esp, 0x69cd91u); f_0069ce04();
    /* 0069cd91: jmp 0x69cd98 */ goto L_0069cd98;
L_0069cd98:; BB(0x0069cd98);
    /* 0069cd98: ret 4 */ FN_RET(0x0069cd8c); r_esp += 8; return;
}

void f_0069cd93(void)
{
    FN_ENTER(0x0069cd93);
    /* 0069cd93: call 0x69cfbc */ r_esp -= 4; W32(r_esp, 0x69cd98u); f_0069cfbc();
    /* 0069cd98: ret 4 */ FN_RET(0x0069cd93); r_esp += 8; return;
}

void f_0069cd98(void)
{
    FN_ENTER(0x0069cd98);
    /* 0069cd98: ret 4 */ FN_RET(0x0069cd98); r_esp += 8; return;
}

void f_0069cd9c(void) /* sub_69CD9C */
{
    FN_ENTER(0x0069cd9c);
    /* 0069cd9c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069cd9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cda1: je 0x69cdb3 */ if (fZ) goto L_0069cdb3;
L_0069cda3:; BB(0x0069cda3);
    /* 0069cda3: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069cdaa: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cdad: jne 0x69cdb3 */ if (!fZ) goto L_0069cdb3;
L_0069cdaf:; BB(0x0069cdaf);
    /* 0069cdaf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069cdb2: ret  */ FN_RET(0x0069cd9c); r_esp += 4; return;
L_0069cdb3:; BB(0x0069cdb3);
    /* 0069cdb3: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069cdb7: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0069cdba: mov byte ptr [esp], 0x56 */ W8((u32)(r_esp), 0x56u);
    /* 0069cdbe: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0069cdc3: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069cdc8: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0069cdcb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069cdcf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069cdd3: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0069cdd6: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0069cdd9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069cddd: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0069cde1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069cde4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69cde9u); f_008003e0();
    /* 0069cde9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069cdec: ret  */ FN_RET(0x0069cd9c); r_esp += 4; return;
}

void f_0069cdf0(void) /* sub_69CDF0 */
{
    FN_ENTER(0x0069cdf0);
    /* 0069cdf0: movsx eax, word ptr [ecx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x330u));
    /* 0069cdf7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069cdfa: je 0x69cdfd */ if (fZ) goto L_0069cdfd;
L_0069cdfc:; BB(0x0069cdfc);
    /* 0069cdfc: ret  */ FN_RET(0x0069cdf0); r_esp += 4; return;
L_0069cdfd:; BB(0x0069cdfd);
    /* 0069cdfd: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69ce02u); f_0069d554();
    /* 0069ce02: ret  */ FN_RET(0x0069cdf0); r_esp += 4; return;
}

void f_0069ce04(void) /* sub_69CE04 */
{
    FN_ENTER(0x0069ce04);
    /* 0069ce04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069ce05: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069ce08: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069ce0a: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0069ce11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ce13: je 0x69cedf */ if (fZ) goto L_0069cedf;
L_0069ce19:; BB(0x0069ce19);
    /* 0069ce19: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ce1c: je 0x69ceba */ if (fZ) goto L_0069ceba;
L_0069ce22:; BB(0x0069ce22);
    /* 0069ce22: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ce25: je 0x69ce74 */ if (fZ) goto L_0069ce74;
L_0069ce27:; BB(0x0069ce27);
    /* 0069ce27: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ce2a: jne 0x69ce87 */ if (!fZ) goto L_0069ce87;
L_0069ce2c:; BB(0x0069ce2c);
    /* 0069ce2c: fld dword ptr [0x93da60] */ FPUSH(R_F32((u32)(0x93da60u)));
    /* 0069ce32: fadd dword ptr [ebp + 0x6fc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x6fcu));
    /* 0069ce38: fcom dword ptr [0x93da38] */ fx_compare(ST(0), R_F32((u32)(0x93da38u))); 
    /* 0069ce3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069ce40: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0069ce46: and edx, 0xffffbfff */ {  u32 a = r_edx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069ce4c: mov dword ptr [ebp + 0x33c], edx */ W32((u32)(r_ebp+0x33cu), r_edx);
    /* 0069ce52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069ce53: jb 0x69ce69 */ if (fC) goto L_0069ce69;
L_0069ce55:; BB(0x0069ce55);
    /* 0069ce55: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069ce57: fld dword ptr [0x93da44] */ FPUSH(R_F32((u32)(0x93da44u)));
    /* 0069ce5d: mov eax, 4 */ r_eax = 0x4u;
    /* 0069ce62: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
L_0069ce69:; BB(0x0069ce69);
    /* 0069ce69: fstp dword ptr [ebp + 0x6fc] */ W_F32((u32)(r_ebp+0x6fcu), ST(0)); FPOP();
    /* 0069ce6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ce72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ce73: ret  */ FN_RET(0x0069ce04); r_esp += 4; return;
L_0069ce74:; BB(0x0069ce74);
    /* 0069ce74: mov eax, dword ptr [ebp + 0x730] */ r_eax = R32((u32)(r_ebp+0x730u));
    /* 0069ce7a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069ce7d: mov dword ptr [ebp + 0x730], eax */ W32((u32)(r_ebp+0x730u), r_eax);
    /* 0069ce83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ce85: jle 0x69ce8c */ if ((fZ||fS!=fO)) goto L_0069ce8c;
L_0069ce87:; BB(0x0069ce87);
    /* 0069ce87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ce8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ce8b: ret  */ FN_RET(0x0069ce04); r_esp += 4; return;
L_0069ce8c:; BB(0x0069ce8c);
    /* 0069ce8c: mov eax, 3 */ r_eax = 0x3u;
    /* 0069ce91: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0069ce98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ce9a: call 0x693240 */ r_esp -= 4; W32(r_esp, 0x69ce9fu); f_00693240();
    /* 0069ce9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069cea1: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x69cea6u); f_006877b0();
    /* 0069cea6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cea8: je 0x69ce87 */ if (fZ) goto L_0069ce87;
L_0069ceaa:; BB(0x0069ceaa);
    /* 0069ceaa: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069ceae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ceaf: call 0x5cbb04 */ r_esp -= 4; W32(r_esp, 0x69ceb4u); f_005cbb04();
    /* 0069ceb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069ceb5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ceb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ceb9: ret  */ FN_RET(0x0069ce04); r_esp += 4; return;
L_0069ceba:; BB(0x0069ceba);
    /* 0069ceba: mov eax, dword ptr [ebp + 0xdf0] */ r_eax = R32((u32)(r_ebp+0xdf0u));
    /* 0069cec0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cec2: jne 0x69ce87 */ if (!fZ) goto L_0069ce87;
L_0069cec4:; BB(0x0069cec4);
    /* 0069cec4: mov dword ptr [ebp + 0x730], 4 */ W32((u32)(r_ebp+0x730u), 0x4u);
    /* 0069cece: mov eax, 2 */ r_eax = 0x2u;
    /* 0069ced3: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0069ceda: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069cedd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cede: ret  */ FN_RET(0x0069ce04); r_esp += 4; return;
L_0069cedf:; BB(0x0069cedf);
    /* 0069cedf: fld dword ptr [ebp + 0x6fc] */ FPUSH(R_F32((u32)(r_ebp+0x6fcu)));
    /* 0069cee5: fsub dword ptr [0x93da60] */ ST(0) = ST(0) - R_F32((u32)(0x93da60u));
    /* 0069ceeb: fcom dword ptr [0x93da5c] */ fx_compare(ST(0), R_F32((u32)(0x93da5cu))); 
    /* 0069cef1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069cef3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069cef6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069cef7: jae 0x69cfab */ if (!fC) goto L_0069cfab;
L_0069cefd:; BB(0x0069cefd);
    /* 0069cefd: fld dword ptr [0x93da40] */ FPUSH(R_F32((u32)(0x93da40u)));
    /* 0069cf03: mov edx, dword ptr [ebp + 0x734] */ r_edx = R32((u32)(r_ebp+0x734u));
    /* 0069cf09: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069cf0c: mov eax, 3 */ r_eax = 0x3u;
    /* 0069cf11: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0069cf18: mov eax, dword ptr [ebp + 0x738] */ r_eax = R32((u32)(r_ebp+0x738u));
    /* 0069cf1e: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0069cf21: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0069cf24: mov eax, dword ptr [ebp + 0x73c] */ r_eax = R32((u32)(r_ebp+0x73cu));
    /* 0069cf2a: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 0069cf2d: mov eax, dword ptr [ebp + 0x740] */ r_eax = R32((u32)(r_ebp+0x740u));
    /* 0069cf33: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0069cf36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069cf38: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69cf3du); f_0069357c();
    /* 0069cf3d: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 0069cf43: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0069cf46: or eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069cf4b: mov dword ptr [ebp + 0x33c], eax */ W32((u32)(r_ebp+0x33cu), r_eax);
    /* 0069cf51: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069cf53: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x69cf56u); call_ind(t); }
    /* 0069cf56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069cf58: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x69cf5du); f_006877b0();
    /* 0069cf5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cf5f: je 0x69cf6a */ if (fZ) goto L_0069cf6a;
L_0069cf61:; BB(0x0069cf61);
    /* 0069cf61: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069cf65: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69cf6au); f_006904cc();
L_0069cf6a:; BB(0x0069cf6a);
    /* 0069cf6a: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0069cf71: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cf74: jne 0x69cfab */ if (!fZ) goto L_0069cfab;
L_0069cf76:; BB(0x0069cf76);
    /* 0069cf76: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0069cf7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf7b: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0069cf7e: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0069cf81: add ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069cf87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf88: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf8e: call 0x7a90f0 */ r_esp -= 4; W32(r_esp, 0x69cf93u); f_007a90f0();
    /* 0069cf93: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0069cf97: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069cf9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf9b: call 0x7b429c */ r_esp -= 4; W32(r_esp, 0x69cfa0u); f_007b429c();
    /* 0069cfa0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cfa2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069cfa3: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x69cfa8u); f_004d2fb4();
    /* 0069cfa8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069cfab:; BB(0x0069cfab);
    /* 0069cfab: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0069cfae: fstp dword ptr [ebp + 0x6fc] */ W_F32((u32)(r_ebp+0x6fcu), ST(0)); FPOP();
    /* 0069cfb4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069cfb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cfb8: ret  */ FN_RET(0x0069ce04); r_esp += 4; return;
}

void f_0069cfbc(void) /* sub_69CFBC */
{
    FN_ENTER(0x0069cfbc);
    /* 0069cfbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cfbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069cfbf: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0069cfc6: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069cfc9: mov dword ptr [ebx + 0x348], 0x15 */ W32((u32)(r_ebx+0x348u), 0x15u);
    /* 0069cfd3: ja 0x69d0fe */ if ((!fC&&!fZ)) goto L_0069d0fe;
L_0069cfd9:; BB(0x0069cfd9);
    /* 0069cfd9: mov eax, dword ptr [eax*4 + 0x93cd00] */ r_eax = R32((u32)(r_eax*4+0x93cd00u));
    /* 0069cfe0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069cfbc); r_esp += 4; return;
}

void f_0069cfe2(void)
{
    FN_ENTER(0x0069cfe2);
    /* 0069cfe2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cfe4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069cfe6: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69cfebu); f_0069bdf0();
    /* 0069cfeb: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069cfe2); r_esp += 4; return;
}

void f_0069cff0(void)
{
    FN_ENTER(0x0069cff0);
    /* 0069cff0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cff2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069cff4: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69cff9u); f_0069c6c0();
    /* 0069cff9: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069cff0); r_esp += 4; return;
}

void f_0069cffe(void)
{
    FN_ENTER(0x0069cffe);
    /* 0069cffe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d000: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d002: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69d007u); f_0069c988();
    /* 0069d007: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069cffe); r_esp += 4; return;
}

