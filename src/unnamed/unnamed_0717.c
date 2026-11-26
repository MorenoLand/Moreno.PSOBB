#include "protos.h"

void f_00717118(void) /* sub_717118 */
{
    FN_ENTER(0x00717118);
    /* 00717118: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00717119: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071711a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071711b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071711c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071711f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00717121: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00717124: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00717126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717128: je 0x717510 */ if (fZ) goto L_00717510;
L_0071712e:; BB(0x0071712e);
    /* 0071712e: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00717133: call 0x716ba4 */ r_esp -= 4; W32(r_esp, 0x717138u); f_00716ba4();
    /* 00717138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071713a: jne 0x717518 */ if (!fZ) goto L_00717518;
L_00717140:; BB(0x00717140);
    /* 00717140: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00717145: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x71714au); f_00716bd8();
    /* 0071714a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071714c: jne 0x717518 */ if (!fZ) goto L_00717518;
L_00717152:; BB(0x00717152);
    /* 00717152: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00717158: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71715du); f_0068d5a8();
    /* 0071715d: mov edi, eax */ r_edi = r_eax;
    /* 0071715f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00717162: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717164: je 0x717510 */ if (fZ) goto L_00717510;
L_0071716a:; BB(0x0071716a);
    /* 0071716a: mov esi, dword ptr [0xa9c4f4] */ r_esi = R32((u32)(0xa9c4f4u));
    /* 00717170: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717176: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071717a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071717c: je 0x71762f */ if (fZ) goto L_0071762f;
L_00717182:; BB(0x00717182);
    /* 00717182: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717184: jl 0x717628 */ if ((fS!=fO)) goto L_00717628;
L_0071718a:; BB(0x0071718a);
    /* 0071718a: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071718d: jl 0x717193 */ if ((fS!=fO)) goto L_00717193;
L_0071718f:; BB(0x0071718f);
    /* 0071718f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717191: jmp 0x717197 */ goto L_00717197;
L_00717193:; BB(0x00717193);
    /* 00717193: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_00717197:; BB(0x00717197);
    /* 00717197: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717199: je 0x717243 */ if (fZ) goto L_00717243;
L_0071719f:; BB(0x0071719f);
    /* 0071719f: call 0x716078 */ r_esp -= 4; W32(r_esp, 0x7171a4u); f_00716078();
    /* 007171a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007171a6: je 0x717243 */ if (fZ) goto L_00717243;
L_007171ac:; BB(0x007171ac);
    /* 007171ac: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007171b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007171b2: je 0x717621 */ if (fZ) goto L_00717621;
L_007171b8:; BB(0x007171b8);
    /* 007171b8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007171ba: jl 0x71761a */ if ((fS!=fO)) goto L_0071761a;
L_007171c0:; BB(0x007171c0);
    /* 007171c0: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007171c3: jl 0x7171c9 */ if ((fS!=fO)) goto L_007171c9;
L_007171c5:; BB(0x007171c5);
    /* 007171c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007171c7: jmp 0x7171cd */ goto L_007171cd;
L_007171c9:; BB(0x007171c9);
    /* 007171c9: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_007171cd:; BB(0x007171cd);
    /* 007171cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007171cf: je 0x7171da */ if (fZ) goto L_007171da;
L_007171d1:; BB(0x007171d1);
    /* 007171d1: call 0x71608c */ r_esp -= 4; W32(r_esp, 0x7171d6u); f_0071608c();
    /* 007171d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007171d8: jne 0x717243 */ if (!fZ) goto L_00717243;
L_007171da:; BB(0x007171da);
    /* 007171da: mov eax, esi */ r_eax = r_esi;
    /* 007171dc: call 0x716c0c */ r_esp -= 4; W32(r_esp, 0x7171e1u); f_00716c0c();
    /* 007171e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007171e3: jne 0x717243 */ if (!fZ) goto L_00717243;
L_007171e5:; BB(0x007171e5);
    /* 007171e5: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007171eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007171ed: je 0x7171f8 */ if (fZ) goto L_007171f8;
L_007171ef:; BB(0x007171ef);
    /* 007171ef: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 007171f3: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007171f6: jne 0x717243 */ if (!fZ) goto L_00717243;
L_007171f8:; BB(0x007171f8);
    /* 007171f8: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 007171fb: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 007171fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717200: je 0x717209 */ if (fZ) goto L_00717209;
L_00717202:; BB(0x00717202);
    /* 00717202: mov edx, 1 */ r_edx = 0x1u;
    /* 00717207: jmp 0x71720b */ goto L_0071720b;
L_00717209:; BB(0x00717209);
    /* 00717209: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0071720b:; BB(0x0071720b);
    /* 0071720b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071720d: jne 0x717243 */ if (!fZ) goto L_00717243;
L_0071720f:; BB(0x0071720f);
    /* 0071720f: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 00717212: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717214: je 0x71721d */ if (fZ) goto L_0071721d;
L_00717216:; BB(0x00717216);
    /* 00717216: mov edx, 1 */ r_edx = 0x1u;
    /* 0071721b: jmp 0x71721f */ goto L_0071721f;
L_0071721d:; BB(0x0071721d);
    /* 0071721d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0071721f:; BB(0x0071721f);
    /* 0071721f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717221: jne 0x717243 */ if (!fZ) goto L_00717243;
L_00717223:; BB(0x00717223);
    /* 00717223: movzx esi, word ptr [0xa98474] */ r_esi = (u32)R16((u32)(0xa98474u));
    /* 0071722a: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717230: je 0x717239 */ if (fZ) goto L_00717239;
L_00717232:; BB(0x00717232);
    /* 00717232: mov edx, 1 */ r_edx = 0x1u;
    /* 00717237: jmp 0x71723b */ goto L_0071723b;
L_00717239:; BB(0x00717239);
    /* 00717239: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0071723b:; BB(0x0071723b);
    /* 0071723b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071723d: je 0x7175bb */ if (fZ) goto L_007175bb;
L_00717243:; BB(0x00717243);
    /* 00717243: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00717246: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0071724c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071724f: jne 0x717258 */ if (!fZ) goto L_00717258;
L_00717251:; BB(0x00717251);
    /* 00717251: mov eax, 1 */ r_eax = 0x1u;
    /* 00717256: jmp 0x71725a */ goto L_0071725a;
L_00717258:; BB(0x00717258);
    /* 00717258: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0071725a:; BB(0x0071725a);
    /* 0071725a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071725c: je 0x717265 */ if (fZ) goto L_00717265;
L_0071725e:; BB(0x0071725e);
    /* 0071725e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00717260: call 0x7176c0 */ r_esp -= 4; W32(r_esp, 0x717265u); f_007176c0();
L_00717265:; BB(0x00717265);
    /* 00717265: mov ebp, 1 */ r_ebp = 0x1u;
L_0071726a:; BB(0x0071726a);
    /* 0071726a: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x71726fu); f_00791b48();
    /* 0071726f: mov edi, eax */ r_edi = r_eax;
    /* 00717271: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717273: je 0x717510 */ if (fZ) goto L_00717510;
L_00717279:; BB(0x00717279);
    /* 00717279: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x71727eu); f_007c00dc();
    /* 0071727e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717280: jne 0x71728b */ if (!fZ) goto L_0071728b;
L_00717282:; BB(0x00717282);
    /* 00717282: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x717287u); f_007c00d0();
    /* 00717287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717289: je 0x717293 */ if (fZ) goto L_00717293;
L_0071728b:; BB(0x0071728b);
    /* 0071728b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071728e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071728f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00717290: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717291: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00717292: ret  */ FN_RET(0x00717118); r_esp += 4; return;
L_00717293:; BB(0x00717293);
    /* 00717293: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00717298: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071729e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7172a3u); f_007be19c();
    /* 007172a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007172a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007172a8: je 0x7172bb */ if (fZ) goto L_007172bb;
L_007172aa:; BB(0x007172aa);
    /* 007172aa: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7172afu); f_007c00c4();
    /* 007172af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007172b1: jne 0x7172cc */ if (!fZ) goto L_007172cc;
L_007172b3:; BB(0x007172b3);
    /* 007172b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007172b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007172b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007172b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007172b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007172ba: ret  */ FN_RET(0x00717118); r_esp += 4; return;
L_007172bb:; BB(0x007172bb);
    /* 007172bb: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x7172c0u); f_007c00c4();
    /* 007172c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007172c2: je 0x7172cc */ if (fZ) goto L_007172cc;
L_007172c4:; BB(0x007172c4);
    /* 007172c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007172c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007172c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007172c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007172ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007172cb: ret  */ FN_RET(0x00717118); r_esp += 4; return;
L_007172cc:; BB(0x007172cc);
    /* 007172cc: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007172ce: mov ecx, edi */ r_ecx = r_edi;
    /* 007172d0: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x7172d5u); f_0078fd68();
    /* 007172d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007172d7: jne 0x7172ee */ if (!fZ) goto L_007172ee;
L_007172d9:; BB(0x007172d9);
    /* 007172d9: mov esi, dword ptr [0xa9c4f4] */ r_esi = R32((u32)(0xa9c4f4u));
    /* 007172df: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007172e5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007172e9: jmp 0x7173d6 */ goto L_007173d6;
L_007172ee:; BB(0x007172ee);
    /* 007172ee: mov esi, dword ptr [0xa9c4f4] */ r_esi = R32((u32)(0xa9c4f4u));
    /* 007172f4: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007172fa: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007172fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717300: je 0x7175b4 */ if (fZ) goto L_007175b4;
L_00717306:; BB(0x00717306);
    /* 00717306: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717308: jl 0x7175ad */ if ((fS!=fO)) goto L_007175ad;
L_0071730e:; BB(0x0071730e);
    /* 0071730e: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717311: jl 0x717317 */ if ((fS!=fO)) goto L_00717317;
L_00717313:; BB(0x00717313);
    /* 00717313: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717315: jmp 0x71731b */ goto L_0071731b;
L_00717317:; BB(0x00717317);
    /* 00717317: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_0071731b:; BB(0x0071731b);
    /* 0071731b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071731d: je 0x717334 */ if (fZ) goto L_00717334;
L_0071731f:; BB(0x0071731f);
    /* 0071731f: call 0x7161a8 */ r_esp -= 4; W32(r_esp, 0x717324u); f_007161a8();
    /* 00717324: mov esi, dword ptr [0xa9c4f4] */ r_esi = R32((u32)(0xa9c4f4u));
    /* 0071732a: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717330: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00717334:; BB(0x00717334);
    /* 00717334: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717336: je 0x7175a6 */ if (fZ) goto L_007175a6;
L_0071733c:; BB(0x0071733c);
    /* 0071733c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071733e: jl 0x71759f */ if ((fS!=fO)) goto L_0071759f;
L_00717344:; BB(0x00717344);
    /* 00717344: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717347: jl 0x71734d */ if ((fS!=fO)) goto L_0071734d;
L_00717349:; BB(0x00717349);
    /* 00717349: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071734b: jmp 0x717351 */ goto L_00717351;
L_0071734d:; BB(0x0071734d);
    /* 0071734d: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_00717351:; BB(0x00717351);
    /* 00717351: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717353: je 0x71739a */ if (fZ) goto L_0071739a;
L_00717355:; BB(0x00717355);
    /* 00717355: call 0x716078 */ r_esp -= 4; W32(r_esp, 0x71735au); f_00716078();
    /* 0071735a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071735c: je 0x71739a */ if (fZ) goto L_0071739a;
L_0071735e:; BB(0x0071735e);
    /* 0071735e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00717362: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717364: je 0x71753c */ if (fZ) goto L_0071753c;
L_0071736a:; BB(0x0071736a);
    /* 0071736a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071736c: jl 0x717535 */ if ((fS!=fO)) goto L_00717535;
L_00717372:; BB(0x00717372);
    /* 00717372: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717375: jl 0x71737b */ if ((fS!=fO)) goto L_0071737b;
L_00717377:; BB(0x00717377);
    /* 00717377: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717379: jmp 0x71737f */ goto L_0071737f;
L_0071737b:; BB(0x0071737b);
    /* 0071737b: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_0071737f:; BB(0x0071737f);
    /* 0071737f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717381: je 0x7173d6 */ if (fZ) goto L_007173d6;
L_00717383:; BB(0x00717383);
    /* 00717383: call 0x716198 */ r_esp -= 4; W32(r_esp, 0x717388u); f_00716198();
    /* 00717388: mov esi, dword ptr [0xa9c4f4] */ r_esi = R32((u32)(0xa9c4f4u));
    /* 0071738e: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717394: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00717398: jmp 0x7173d6 */ goto L_007173d6;
L_0071739a:; BB(0x0071739a);
    /* 0071739a: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0071739e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007173a0: je 0x717598 */ if (fZ) goto L_00717598;
L_007173a6:; BB(0x007173a6);
    /* 007173a6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007173a8: jl 0x717591 */ if ((fS!=fO)) goto L_00717591;
L_007173ae:; BB(0x007173ae);
    /* 007173ae: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007173b1: jl 0x7173b7 */ if ((fS!=fO)) goto L_007173b7;
L_007173b3:; BB(0x007173b3);
    /* 007173b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007173b5: jmp 0x7173bb */ goto L_007173bb;
L_007173b7:; BB(0x007173b7);
    /* 007173b7: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_007173bb:; BB(0x007173bb);
    /* 007173bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007173bd: je 0x7173d4 */ if (fZ) goto L_007173d4;
L_007173bf:; BB(0x007173bf);
    /* 007173bf: call 0x716188 */ r_esp -= 4; W32(r_esp, 0x7173c4u); f_00716188();
    /* 007173c4: mov esi, dword ptr [0xa9c4f4] */ r_esi = R32((u32)(0xa9c4f4u));
    /* 007173ca: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007173d0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_007173d4:; BB(0x007173d4);
    /* 007173d4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_007173d6:; BB(0x007173d6);
    /* 007173d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007173d8: je 0x71758a */ if (fZ) goto L_0071758a;
L_007173de:; BB(0x007173de);
    /* 007173de: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007173e0: jl 0x717583 */ if ((fS!=fO)) goto L_00717583;
L_007173e6:; BB(0x007173e6);
    /* 007173e6: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007173e9: jl 0x7173ef */ if ((fS!=fO)) goto L_007173ef;
L_007173eb:; BB(0x007173eb);
    /* 007173eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007173ed: jmp 0x7173f3 */ goto L_007173f3;
L_007173ef:; BB(0x007173ef);
    /* 007173ef: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_007173f3:; BB(0x007173f3);
    /* 007173f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007173f5: je 0x7174e3 */ if (fZ) goto L_007174e3;
L_007173fb:; BB(0x007173fb);
    /* 007173fb: call 0x716078 */ r_esp -= 4; W32(r_esp, 0x717400u); f_00716078();
    /* 00717400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717402: je 0x7174e3 */ if (fZ) goto L_007174e3;
L_00717408:; BB(0x00717408);
    /* 00717408: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0071740a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071740c: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x717411u); f_0078fd68();
    /* 00717411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717413: je 0x7174e3 */ if (fZ) goto L_007174e3;
L_00717419:; BB(0x00717419);
    /* 00717419: mov edi, dword ptr [0xa9c4f4] */ r_edi = R32((u32)(0xa9c4f4u));
    /* 0071741f: mov esi, dword ptr [0xa98478] */ r_esi = R32((u32)(0xa98478u));
    /* 00717425: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717427: je 0x71757c */ if (fZ) goto L_0071757c;
L_0071742d:; BB(0x0071742d);
    /* 0071742d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071742f: jl 0x717575 */ if ((fS!=fO)) goto L_00717575;
L_00717435:; BB(0x00717435);
    /* 00717435: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717438: jl 0x71743e */ if ((fS!=fO)) goto L_0071743e;
L_0071743a:; BB(0x0071743a);
    /* 0071743a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071743c: jmp 0x717442 */ goto L_00717442;
L_0071743e:; BB(0x0071743e);
    /* 0071743e: mov ecx, dword ptr [esi + edi*4 + 0x54] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x54u));
L_00717442:; BB(0x00717442);
    /* 00717442: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717444: je 0x717457 */ if (fZ) goto L_00717457;
L_00717446:; BB(0x00717446);
    /* 00717446: call 0x7161a8 */ r_esp -= 4; W32(r_esp, 0x71744bu); f_007161a8();
    /* 0071744b: mov edi, dword ptr [0xa9c4f4] */ r_edi = R32((u32)(0xa9c4f4u));
    /* 00717451: mov esi, dword ptr [0xa98478] */ r_esi = R32((u32)(0xa98478u));
L_00717457:; BB(0x00717457);
    /* 00717457: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717459: je 0x71756e */ if (fZ) goto L_0071756e;
L_0071745f:; BB(0x0071745f);
    /* 0071745f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717461: jl 0x717567 */ if ((fS!=fO)) goto L_00717567;
L_00717467:; BB(0x00717467);
    /* 00717467: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071746a: jl 0x717470 */ if ((fS!=fO)) goto L_00717470;
L_0071746c:; BB(0x0071746c);
    /* 0071746c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071746e: jmp 0x717474 */ goto L_00717474;
L_00717470:; BB(0x00717470);
    /* 00717470: mov ecx, dword ptr [esi + edi*4 + 0x54] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x54u));
L_00717474:; BB(0x00717474);
    /* 00717474: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717476: je 0x7174b3 */ if (fZ) goto L_007174b3;
L_00717478:; BB(0x00717478);
    /* 00717478: call 0x716064 */ r_esp -= 4; W32(r_esp, 0x71747du); f_00716064();
    /* 0071747d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071747f: je 0x7174b3 */ if (fZ) goto L_007174b3;
L_00717481:; BB(0x00717481);
    /* 00717481: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717483: je 0x71754a */ if (fZ) goto L_0071754a;
L_00717489:; BB(0x00717489);
    /* 00717489: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071748b: jl 0x717543 */ if ((fS!=fO)) goto L_00717543;
L_00717491:; BB(0x00717491);
    /* 00717491: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717494: jl 0x71749a */ if ((fS!=fO)) goto L_0071749a;
L_00717496:; BB(0x00717496);
    /* 00717496: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717498: jmp 0x71749e */ goto L_0071749e;
L_0071749a:; BB(0x0071749a);
    /* 0071749a: mov ecx, dword ptr [esi + edi*4 + 0x54] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x54u));
L_0071749e:; BB(0x0071749e);
    /* 0071749e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174a0: je 0x7174a7 */ if (fZ) goto L_007174a7;
L_007174a2:; BB(0x007174a2);
    /* 007174a2: call 0x716178 */ r_esp -= 4; W32(r_esp, 0x7174a7u); f_00716178();
L_007174a7:; BB(0x007174a7);
    /* 007174a7: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 007174aa: mov byte ptr [eax + 0xb4], 0 */ W8((u32)(r_eax+0xb4u), 0x0u);
    /* 007174b1: jmp 0x7174e3 */ goto L_007174e3;
L_007174b3:; BB(0x007174b3);
    /* 007174b3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174b5: je 0x717560 */ if (fZ) goto L_00717560;
L_007174bb:; BB(0x007174bb);
    /* 007174bb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007174bd: jl 0x717559 */ if ((fS!=fO)) goto L_00717559;
L_007174c3:; BB(0x007174c3);
    /* 007174c3: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007174c6: jl 0x7174cc */ if ((fS!=fO)) goto L_007174cc;
L_007174c8:; BB(0x007174c8);
    /* 007174c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007174ca: jmp 0x7174d0 */ goto L_007174d0;
L_007174cc:; BB(0x007174cc);
    /* 007174cc: mov ecx, dword ptr [esi + edi*4 + 0x54] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x54u));
L_007174d0:; BB(0x007174d0);
    /* 007174d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174d2: je 0x7174d9 */ if (fZ) goto L_007174d9;
L_007174d4:; BB(0x007174d4);
    /* 007174d4: call 0x716168 */ r_esp -= 4; W32(r_esp, 0x7174d9u); f_00716168();
L_007174d9:; BB(0x007174d9);
    /* 007174d9: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 007174dc: mov byte ptr [eax + 0xb4], 1 */ W8((u32)(r_eax+0xb4u), 0x1u);
L_007174e3:; BB(0x007174e3);
    /* 007174e3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174e5: je 0x717510 */ if (fZ) goto L_00717510;
L_007174e7:; BB(0x007174e7);
    /* 007174e7: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007174ed: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007174f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174f4: je 0x717555 */ if (fZ) goto L_00717555;
L_007174f6:; BB(0x007174f6);
    /* 007174f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007174f8: jl 0x717551 */ if ((fS!=fO)) goto L_00717551;
L_007174fa:; BB(0x007174fa);
    /* 007174fa: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007174fd: jl 0x717503 */ if ((fS!=fO)) goto L_00717503;
L_007174ff:; BB(0x007174ff);
    /* 007174ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717501: jmp 0x717507 */ goto L_00717507;
L_00717503:; BB(0x00717503);
    /* 00717503: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00717507:; BB(0x00717507);
    /* 00717507: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717509: je 0x717510 */ if (fZ) goto L_00717510;
L_0071750b:; BB(0x0071750b);
    /* 0071750b: call 0x716178 */ r_esp -= 4; W32(r_esp, 0x717510u); f_00716178();
L_00717510:; BB(0x00717510);
    /* 00717510: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00717513: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00717514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00717515: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717516: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00717517: ret  */ FN_RET(0x00717118); r_esp += 4; return;
L_00717518:; BB(0x00717518);
    /* 00717518: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 0071751b: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00717521: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717524: je 0x71752d */ if (fZ) goto L_0071752d;
L_00717526:; BB(0x00717526);
    /* 00717526: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00717528: call 0x717704 */ r_esp -= 4; W32(r_esp, 0x71752du); f_00717704();
L_0071752d:; BB(0x0071752d);
    /* 0071752d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00717530: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00717531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00717532: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717533: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00717534: ret  */ FN_RET(0x00717118); r_esp += 4; return;
L_00717535:; BB(0x00717535);
    /* 00717535: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717537: jmp 0x71737f */ goto L_0071737f;
L_0071753c:; BB(0x0071753c);
    /* 0071753c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071753e: jmp 0x71737f */ goto L_0071737f;
L_00717543:; BB(0x00717543);
    /* 00717543: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717545: jmp 0x71749e */ goto L_0071749e;
L_0071754a:; BB(0x0071754a);
    /* 0071754a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071754c: jmp 0x71749e */ goto L_0071749e;
L_00717551:; BB(0x00717551);
    /* 00717551: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717553: jmp 0x717507 */ goto L_00717507;
L_00717555:; BB(0x00717555);
    /* 00717555: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717557: jmp 0x717507 */ goto L_00717507;
L_00717559:; BB(0x00717559);
    /* 00717559: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071755b: jmp 0x7174d0 */ goto L_007174d0;
L_00717560:; BB(0x00717560);
    /* 00717560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717562: jmp 0x7174d0 */ goto L_007174d0;
L_00717567:; BB(0x00717567);
    /* 00717567: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717569: jmp 0x717474 */ goto L_00717474;
L_0071756e:; BB(0x0071756e);
    /* 0071756e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717570: jmp 0x717474 */ goto L_00717474;
L_00717575:; BB(0x00717575);
    /* 00717575: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717577: jmp 0x717442 */ goto L_00717442;
L_0071757c:; BB(0x0071757c);
    /* 0071757c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071757e: jmp 0x717442 */ goto L_00717442;
L_00717583:; BB(0x00717583);
    /* 00717583: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717585: jmp 0x7173f3 */ goto L_007173f3;
L_0071758a:; BB(0x0071758a);
    /* 0071758a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071758c: jmp 0x7173f3 */ goto L_007173f3;
L_00717591:; BB(0x00717591);
    /* 00717591: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717593: jmp 0x7173bb */ goto L_007173bb;
L_00717598:; BB(0x00717598);
    /* 00717598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071759a: jmp 0x7173bb */ goto L_007173bb;
L_0071759f:; BB(0x0071759f);
    /* 0071759f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007175a1: jmp 0x717351 */ goto L_00717351;
L_007175a6:; BB(0x007175a6);
    /* 007175a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007175a8: jmp 0x717351 */ goto L_00717351;
L_007175ad:; BB(0x007175ad);
    /* 007175ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007175af: jmp 0x71731b */ goto L_0071731b;
L_007175b4:; BB(0x007175b4);
    /* 007175b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007175b6: jmp 0x71731b */ goto L_0071731b;
L_007175bb:; BB(0x007175bb);
    /* 007175bb: test esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007175c1: je 0x7175ca */ if (fZ) goto L_007175ca;
L_007175c3:; BB(0x007175c3);
    /* 007175c3: mov edx, 1 */ r_edx = 0x1u;
    /* 007175c8: jmp 0x7175cc */ goto L_007175cc;
L_007175ca:; BB(0x007175ca);
    /* 007175ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007175cc:; BB(0x007175cc);
    /* 007175cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007175ce: jne 0x717243 */ if (!fZ) goto L_00717243;
L_007175d4:; BB(0x007175d4);
    /* 007175d4: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 007175da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007175dc: je 0x7175e5 */ if (fZ) goto L_007175e5;
L_007175de:; BB(0x007175de);
    /* 007175de: mov eax, 1 */ r_eax = 0x1u;
    /* 007175e3: jmp 0x7175e7 */ goto L_007175e7;
L_007175e5:; BB(0x007175e5);
    /* 007175e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007175e7:; BB(0x007175e7);
    /* 007175e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007175e9: jne 0x717243 */ if (!fZ) goto L_00717243;
L_007175ef:; BB(0x007175ef);
    /* 007175ef: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 007175f2: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 007175f8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007175fb: jne 0x717604 */ if (!fZ) goto L_00717604;
L_007175fd:; BB(0x007175fd);
    /* 007175fd: mov eax, 1 */ r_eax = 0x1u;
    /* 00717602: jmp 0x717606 */ goto L_00717606;
L_00717604:; BB(0x00717604);
    /* 00717604: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00717606:; BB(0x00717606);
    /* 00717606: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717608: je 0x71726a */ if (fZ) goto L_0071726a;
L_0071760e:; BB(0x0071760e);
    /* 0071760e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00717610: call 0x717638 */ r_esp -= 4; W32(r_esp, 0x717615u); f_00717638();
    /* 00717615: jmp 0x71726a */ goto L_0071726a;
L_0071761a:; BB(0x0071761a);
    /* 0071761a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071761c: jmp 0x7171cd */ goto L_007171cd;
L_00717621:; BB(0x00717621);
    /* 00717621: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717623: jmp 0x7171cd */ goto L_007171cd;
L_00717628:; BB(0x00717628);
    /* 00717628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071762a: jmp 0x717197 */ goto L_00717197;
L_0071762f:; BB(0x0071762f);
    /* 0071762f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717631: jmp 0x717197 */ goto L_00717197;
}

void f_00717372(void)
{
    FN_ENTER(0x00717372);
    /* 00717372: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717375: jl 0x71737b */ if ((fS!=fO)) goto L_0071737b;
L_00717377:; BB(0x00717377);
    /* 00717377: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717379: jmp 0x71737f */ goto L_0071737f;
L_0071737b:; BB(0x0071737b);
    /* 0071737b: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_0071737f:; BB(0x0071737f);
    /* 0071737f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717381: je 0x7173d6 */ if (fZ) goto L_007173d6;
L_00717383:; BB(0x00717383);
    /* 00717383: call 0x716198 */ r_esp -= 4; W32(r_esp, 0x717388u); f_00716198();
    /* 00717388: mov esi, dword ptr [0xa9c4f4] */ r_esi = R32((u32)(0xa9c4f4u));
    /* 0071738e: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717394: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00717398: jmp 0x7173d6 */ goto L_007173d6;
L_007173d6:; BB(0x007173d6);
    /* 007173d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007173d8: je 0x71758a */ if (fZ) goto L_0071758a;
L_007173de:; BB(0x007173de);
    /* 007173de: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007173e0: jl 0x717583 */ if ((fS!=fO)) goto L_00717583;
L_007173e6:; BB(0x007173e6);
    /* 007173e6: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007173e9: jl 0x7173ef */ if ((fS!=fO)) goto L_007173ef;
L_007173eb:; BB(0x007173eb);
    /* 007173eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007173ed: jmp 0x7173f3 */ goto L_007173f3;
L_007173ef:; BB(0x007173ef);
    /* 007173ef: mov ecx, dword ptr [edx + esi*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x54u));
L_007173f3:; BB(0x007173f3);
    /* 007173f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007173f5: je 0x7174e3 */ if (fZ) goto L_007174e3;
L_007173fb:; BB(0x007173fb);
    /* 007173fb: call 0x716078 */ r_esp -= 4; W32(r_esp, 0x717400u); f_00716078();
    /* 00717400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717402: je 0x7174e3 */ if (fZ) goto L_007174e3;
L_00717408:; BB(0x00717408);
    /* 00717408: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0071740a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071740c: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x717411u); f_0078fd68();
    /* 00717411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717413: je 0x7174e3 */ if (fZ) goto L_007174e3;
L_00717419:; BB(0x00717419);
    /* 00717419: mov edi, dword ptr [0xa9c4f4] */ r_edi = R32((u32)(0xa9c4f4u));
    /* 0071741f: mov esi, dword ptr [0xa98478] */ r_esi = R32((u32)(0xa98478u));
    /* 00717425: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717427: je 0x71757c */ if (fZ) goto L_0071757c;
L_0071742d:; BB(0x0071742d);
    /* 0071742d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071742f: jl 0x717575 */ if ((fS!=fO)) goto L_00717575;
L_00717435:; BB(0x00717435);
    /* 00717435: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717438: jl 0x71743e */ if ((fS!=fO)) goto L_0071743e;
L_0071743a:; BB(0x0071743a);
    /* 0071743a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071743c: jmp 0x717442 */ goto L_00717442;
L_0071743e:; BB(0x0071743e);
    /* 0071743e: mov ecx, dword ptr [esi + edi*4 + 0x54] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x54u));
L_00717442:; BB(0x00717442);
    /* 00717442: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717444: je 0x717457 */ if (fZ) goto L_00717457;
L_00717446:; BB(0x00717446);
    /* 00717446: call 0x7161a8 */ r_esp -= 4; W32(r_esp, 0x71744bu); f_007161a8();
    /* 0071744b: mov edi, dword ptr [0xa9c4f4] */ r_edi = R32((u32)(0xa9c4f4u));
    /* 00717451: mov esi, dword ptr [0xa98478] */ r_esi = R32((u32)(0xa98478u));
L_00717457:; BB(0x00717457);
    /* 00717457: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717459: je 0x71756e */ if (fZ) goto L_0071756e;
L_0071745f:; BB(0x0071745f);
    /* 0071745f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717461: jl 0x717567 */ if ((fS!=fO)) goto L_00717567;
L_00717467:; BB(0x00717467);
    /* 00717467: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071746a: jl 0x717470 */ if ((fS!=fO)) goto L_00717470;
L_0071746c:; BB(0x0071746c);
    /* 0071746c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071746e: jmp 0x717474 */ goto L_00717474;
L_00717470:; BB(0x00717470);
    /* 00717470: mov ecx, dword ptr [esi + edi*4 + 0x54] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x54u));
L_00717474:; BB(0x00717474);
    /* 00717474: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717476: je 0x7174b3 */ if (fZ) goto L_007174b3;
L_00717478:; BB(0x00717478);
    /* 00717478: call 0x716064 */ r_esp -= 4; W32(r_esp, 0x71747du); f_00716064();
    /* 0071747d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071747f: je 0x7174b3 */ if (fZ) goto L_007174b3;
L_00717481:; BB(0x00717481);
    /* 00717481: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717483: je 0x71754a */ if (fZ) goto L_0071754a;
L_00717489:; BB(0x00717489);
    /* 00717489: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071748b: jl 0x717543 */ if ((fS!=fO)) goto L_00717543;
L_00717491:; BB(0x00717491);
    /* 00717491: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717494: jl 0x71749a */ if ((fS!=fO)) goto L_0071749a;
L_00717496:; BB(0x00717496);
    /* 00717496: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717498: jmp 0x71749e */ goto L_0071749e;
L_0071749a:; BB(0x0071749a);
    /* 0071749a: mov ecx, dword ptr [esi + edi*4 + 0x54] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x54u));
L_0071749e:; BB(0x0071749e);
    /* 0071749e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174a0: je 0x7174a7 */ if (fZ) goto L_007174a7;
L_007174a2:; BB(0x007174a2);
    /* 007174a2: call 0x716178 */ r_esp -= 4; W32(r_esp, 0x7174a7u); f_00716178();
L_007174a7:; BB(0x007174a7);
    /* 007174a7: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 007174aa: mov byte ptr [eax + 0xb4], 0 */ W8((u32)(r_eax+0xb4u), 0x0u);
    /* 007174b1: jmp 0x7174e3 */ goto L_007174e3;
L_007174b3:; BB(0x007174b3);
    /* 007174b3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174b5: je 0x717560 */ if (fZ) goto L_00717560;
L_007174bb:; BB(0x007174bb);
    /* 007174bb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007174bd: jl 0x717559 */ if ((fS!=fO)) goto L_00717559;
L_007174c3:; BB(0x007174c3);
    /* 007174c3: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007174c6: jl 0x7174cc */ if ((fS!=fO)) goto L_007174cc;
L_007174c8:; BB(0x007174c8);
    /* 007174c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007174ca: jmp 0x7174d0 */ goto L_007174d0;
L_007174cc:; BB(0x007174cc);
    /* 007174cc: mov ecx, dword ptr [esi + edi*4 + 0x54] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x54u));
L_007174d0:; BB(0x007174d0);
    /* 007174d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174d2: je 0x7174d9 */ if (fZ) goto L_007174d9;
L_007174d4:; BB(0x007174d4);
    /* 007174d4: call 0x716168 */ r_esp -= 4; W32(r_esp, 0x7174d9u); f_00716168();
L_007174d9:; BB(0x007174d9);
    /* 007174d9: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 007174dc: mov byte ptr [eax + 0xb4], 1 */ W8((u32)(r_eax+0xb4u), 0x1u);
L_007174e3:; BB(0x007174e3);
    /* 007174e3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174e5: je 0x717510 */ if (fZ) goto L_00717510;
L_007174e7:; BB(0x007174e7);
    /* 007174e7: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007174ed: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007174f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007174f4: je 0x717555 */ if (fZ) goto L_00717555;
L_007174f6:; BB(0x007174f6);
    /* 007174f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007174f8: jl 0x717551 */ if ((fS!=fO)) goto L_00717551;
L_007174fa:; BB(0x007174fa);
    /* 007174fa: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007174fd: jl 0x717503 */ if ((fS!=fO)) goto L_00717503;
L_007174ff:; BB(0x007174ff);
    /* 007174ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717501: jmp 0x717507 */ goto L_00717507;
L_00717503:; BB(0x00717503);
    /* 00717503: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00717507:; BB(0x00717507);
    /* 00717507: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717509: je 0x717510 */ if (fZ) goto L_00717510;
L_0071750b:; BB(0x0071750b);
    /* 0071750b: call 0x716178 */ r_esp -= 4; W32(r_esp, 0x717510u); f_00716178();
L_00717510:; BB(0x00717510);
    /* 00717510: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00717513: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00717514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00717515: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717516: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00717517: ret  */ FN_RET(0x00717372); r_esp += 4; return;
L_00717543:; BB(0x00717543);
    /* 00717543: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717545: jmp 0x71749e */ goto L_0071749e;
L_0071754a:; BB(0x0071754a);
    /* 0071754a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071754c: jmp 0x71749e */ goto L_0071749e;
L_00717551:; BB(0x00717551);
    /* 00717551: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717553: jmp 0x717507 */ goto L_00717507;
L_00717555:; BB(0x00717555);
    /* 00717555: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717557: jmp 0x717507 */ goto L_00717507;
L_00717559:; BB(0x00717559);
    /* 00717559: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071755b: jmp 0x7174d0 */ goto L_007174d0;
L_00717560:; BB(0x00717560);
    /* 00717560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717562: jmp 0x7174d0 */ goto L_007174d0;
L_00717567:; BB(0x00717567);
    /* 00717567: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717569: jmp 0x717474 */ goto L_00717474;
L_0071756e:; BB(0x0071756e);
    /* 0071756e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717570: jmp 0x717474 */ goto L_00717474;
L_00717575:; BB(0x00717575);
    /* 00717575: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717577: jmp 0x717442 */ goto L_00717442;
L_0071757c:; BB(0x0071757c);
    /* 0071757c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071757e: jmp 0x717442 */ goto L_00717442;
L_00717583:; BB(0x00717583);
    /* 00717583: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717585: jmp 0x7173f3 */ goto L_007173f3;
L_0071758a:; BB(0x0071758a);
    /* 0071758a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071758c: jmp 0x7173f3 */ goto L_007173f3;
}

void f_00717638(void) /* sub_717638 */
{
    FN_ENTER(0x00717638);
    /* 00717638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00717639: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071763b: mov ecx, dword ptr [ebp + 0x48] */ r_ecx = R32((u32)(r_ebp+0x48u));
    /* 0071763e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717640: je 0x7176ad */ if (fZ) goto L_007176ad;
L_00717642:; BB(0x00717642);
    /* 00717642: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 0071764c: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x717651u); f_00712714();
    /* 00717651: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 00717657: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 0071765a: mov byte ptr [eax + 0xb4], 1 */ W8((u32)(r_eax+0xb4u), 0x1u);
    /* 00717661: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717668: je 0x7176bb */ if (fZ) goto L_007176bb;
L_0071766a:; BB(0x0071766a);
    /* 0071766a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071766c: jl 0x7176b7 */ if ((fS!=fO)) goto L_007176b7;
L_0071766e:; BB(0x0071766e);
    /* 0071766e: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717671: jl 0x717677 */ if ((fS!=fO)) goto L_00717677;
L_00717673:; BB(0x00717673);
    /* 00717673: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717675: jmp 0x71767b */ goto L_0071767b;
L_00717677:; BB(0x00717677);
    /* 00717677: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_0071767b:; BB(0x0071767b);
    /* 0071767b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071767d: je 0x71768f */ if (fZ) goto L_0071768f;
L_0071767f:; BB(0x0071767f);
    /* 0071767f: call 0x716168 */ r_esp -= 4; W32(r_esp, 0x717684u); f_00716168();
    /* 00717684: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0071768a: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
L_0071768f:; BB(0x0071768f);
    /* 0071768f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717691: je 0x7176b3 */ if (fZ) goto L_007176b3;
L_00717693:; BB(0x00717693);
    /* 00717693: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717695: jl 0x7176af */ if ((fS!=fO)) goto L_007176af;
L_00717697:; BB(0x00717697);
    /* 00717697: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071769a: jl 0x7176a0 */ if ((fS!=fO)) goto L_007176a0;
L_0071769c:; BB(0x0071769c);
    /* 0071769c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071769e: jmp 0x7176a4 */ goto L_007176a4;
L_007176a0:; BB(0x007176a0);
    /* 007176a0: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_007176a4:; BB(0x007176a4);
    /* 007176a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007176a6: je 0x7176ad */ if (fZ) goto L_007176ad;
L_007176a8:; BB(0x007176a8);
    /* 007176a8: call 0x71b4c4 */ r_esp -= 4; W32(r_esp, 0x7176adu); f_0071b4c4();
L_007176ad:; BB(0x007176ad);
    /* 007176ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007176ae: ret  */ FN_RET(0x00717638); r_esp += 4; return;
L_007176af:; BB(0x007176af);
    /* 007176af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007176b1: jmp 0x7176a4 */ goto L_007176a4;
L_007176b3:; BB(0x007176b3);
    /* 007176b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007176b5: jmp 0x7176a4 */ goto L_007176a4;
L_007176b7:; BB(0x007176b7);
    /* 007176b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007176b9: jmp 0x71767b */ goto L_0071767b;
L_007176bb:; BB(0x007176bb);
    /* 007176bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007176bd: jmp 0x71767b */ goto L_0071767b;
}

void f_007176c0(void) /* sub_7176C0 */
{
    FN_ENTER(0x007176c0);
    /* 007176c0: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 007176c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007176c5: je 0x7176fa */ if (fZ) goto L_007176fa;
L_007176c7:; BB(0x007176c7);
    /* 007176c7: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007176cd: mov dword ptr [eax + 0xa4], 2 */ W32((u32)(r_eax+0xa4u), 0x2u);
    /* 007176d7: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007176dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007176de: je 0x7176ff */ if (fZ) goto L_007176ff;
L_007176e0:; BB(0x007176e0);
    /* 007176e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007176e2: jl 0x7176fb */ if ((fS!=fO)) goto L_007176fb;
L_007176e4:; BB(0x007176e4);
    /* 007176e4: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007176e7: jl 0x7176ed */ if ((fS!=fO)) goto L_007176ed;
L_007176e9:; BB(0x007176e9);
    /* 007176e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007176eb: jmp 0x7176f1 */ goto L_007176f1;
L_007176ed:; BB(0x007176ed);
    /* 007176ed: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_007176f1:; BB(0x007176f1);
    /* 007176f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007176f3: je 0x7176fa */ if (fZ) goto L_007176fa;
L_007176f5:; BB(0x007176f5);
    /* 007176f5: call 0x71b500 */ r_esp -= 4; W32(r_esp, 0x7176fau); f_0071b500();
L_007176fa:; BB(0x007176fa);
    /* 007176fa: ret  */ FN_RET(0x007176c0); r_esp += 4; return;
L_007176fb:; BB(0x007176fb);
    /* 007176fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007176fd: jmp 0x7176f1 */ goto L_007176f1;
L_007176ff:; BB(0x007176ff);
    /* 007176ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717701: jmp 0x7176f1 */ goto L_007176f1;
}

void f_007176e0(void)
{
    FN_ENTER(0x007176e0);
    /* 007176e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007176e2: jl 0x7176fb */ if ((fS!=fO)) goto L_007176fb;
L_007176e4:; BB(0x007176e4);
    /* 007176e4: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007176e7: jl 0x7176ed */ if ((fS!=fO)) goto L_007176ed;
L_007176e9:; BB(0x007176e9);
    /* 007176e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007176eb: jmp 0x7176f1 */ goto L_007176f1;
L_007176ed:; BB(0x007176ed);
    /* 007176ed: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_007176f1:; BB(0x007176f1);
    /* 007176f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007176f3: je 0x7176fa */ if (fZ) goto L_007176fa;
L_007176f5:; BB(0x007176f5);
    /* 007176f5: call 0x71b500 */ r_esp -= 4; W32(r_esp, 0x7176fau); f_0071b500();
L_007176fa:; BB(0x007176fa);
    /* 007176fa: ret  */ FN_RET(0x007176e0); r_esp += 4; return;
L_007176fb:; BB(0x007176fb);
    /* 007176fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007176fd: jmp 0x7176f1 */ goto L_007176f1;
}

void f_00717704(void) /* sub_717704 */
{
    FN_ENTER(0x00717704);
    /* 00717704: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00717707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717709: je 0x717748 */ if (fZ) goto L_00717748;
L_0071770b:; BB(0x0071770b);
    /* 0071770b: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 00717711: mov dword ptr [eax + 0xa4], 3 */ W32((u32)(r_eax+0xa4u), 0x3u);
    /* 0071771b: mov dword ptr [eax + 0xa8], 0 */ W32((u32)(r_eax+0xa8u), 0x0u);
    /* 00717725: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071772a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071772c: je 0x71774d */ if (fZ) goto L_0071774d;
L_0071772e:; BB(0x0071772e);
    /* 0071772e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717730: jl 0x717749 */ if ((fS!=fO)) goto L_00717749;
L_00717732:; BB(0x00717732);
    /* 00717732: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717735: jl 0x71773b */ if ((fS!=fO)) goto L_0071773b;
L_00717737:; BB(0x00717737);
    /* 00717737: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717739: jmp 0x71773f */ goto L_0071773f;
L_0071773b:; BB(0x0071773b);
    /* 0071773b: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_0071773f:; BB(0x0071773f);
    /* 0071773f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717741: je 0x717748 */ if (fZ) goto L_00717748;
L_00717743:; BB(0x00717743);
    /* 00717743: call 0x71b500 */ r_esp -= 4; W32(r_esp, 0x717748u); f_0071b500();
L_00717748:; BB(0x00717748);
    /* 00717748: ret  */ FN_RET(0x00717704); r_esp += 4; return;
L_00717749:; BB(0x00717749);
    /* 00717749: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071774b: jmp 0x71773f */ goto L_0071773f;
L_0071774d:; BB(0x0071774d);
    /* 0071774d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071774f: jmp 0x71773f */ goto L_0071773f;
}

void f_00717754(void) /* sub_717754 */
{
    FN_ENTER(0x00717754);
    /* 00717754: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00717755: mov ebp, esp */ r_ebp = r_esp;
    /* 00717757: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00717759: push 0x8f092e */ { u32 v = 0x8f092eu; r_esp -= 4; W32(r_esp, v); }
    /* 0071775e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00717764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00717765: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071776c: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071776f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00717772: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00717775: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00717778: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0071777b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0071777e: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00717783: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00717784: call 0x716ba4 */ r_esp -= 4; W32(r_esp, 0x717789u); f_00716ba4();
    /* 00717789: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071778a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071778c: jne 0x7177bd */ if (!fZ) goto L_007177bd;
L_0071778e:; BB(0x0071778e);
    /* 0071778e: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00717793: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00717794: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x717799u); f_00716bd8();
    /* 00717799: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071779a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071779c: jne 0x7177bd */ if (!fZ) goto L_007177bd;
L_0071779e:; BB(0x0071779e);
    /* 0071779e: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 007177a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007177a5: je 0x7177af */ if (fZ) goto L_007177af;
L_007177a7:; BB(0x007177a7);
    /* 007177a7: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 007177ab: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007177ad: jne 0x7177bd */ if (!fZ) goto L_007177bd;
L_007177af:; BB(0x007177af);
    /* 007177af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007177b2: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 007177b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007177b7: je 0x71788a */ if (fZ) goto L_0071788a;
L_007177bd:; BB(0x007177bd);
    /* 007177bd: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 007177c4: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007177c6: je 0x717873 */ if (fZ) goto L_00717873;
L_007177cc:; BB(0x007177cc);
    /* 007177cc: mov byte ptr [ebp - 0x80], 0xc2 */ W8((u32)(r_ebp+0xffffff80u), 0xc2u);
    /* 007177d0: mov eax, 0xa9c8c0 */ r_eax = 0xa9c8c0u;
    /* 007177d5: mov byte ptr [ebp - 0x7f], 0x17 */ W8((u32)(r_ebp+0xffffff81u), 0x17u);
    /* 007177d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007177db: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007177de: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 007177e1: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 007177e4: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 007177e7: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 007177ea: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007177ed: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 007177f0: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 007177f3: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 007177f6: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 007177f9: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 007177fc: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007177ff: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00717802: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00717805: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00717808: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0071780b: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0071780e: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00717811: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00717814: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00717817: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0071781a: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0071781d: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00717820: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00717823: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00717826: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00717829: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0071782c: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0071782f: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00717832: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00717835: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00717838: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0071783b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0071783e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00717841: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00717844: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00717847: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0071784a: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0071784d: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00717850: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00717853: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 00717856: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00717859: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0071785c: push dword ptr [ebp - 0x7c] */ { u32 v = R32((u32)(r_ebp+0xffffff84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071785f: mov dword ptr [ebp - 0x78], 4 */ W32((u32)(r_ebp+0xffffff88u), 0x4u);
    /* 00717866: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 00717869: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x71786eu); f_00800464();
    /* 0071786e: call 0x7162e4 */ r_esp -= 4; W32(r_esp, 0x717873u); f_007162e4();
L_00717873:; BB(0x00717873);
    /* 00717873: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00717876: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00717879: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0071787c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071787f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00717886: mov esp, ebp */ r_esp = r_ebp;
    /* 00717888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00717889: ret  */ FN_RET(0x00717754); r_esp += 4; return;
L_0071788a:; BB(0x0071788a);
    /* 0071788a: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0071788d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071788f: je 0x71789e */ if (fZ) goto L_0071789e;
L_00717891:; BB(0x00717891);
    /* 00717891: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x717896u); f_00714090();
    /* 00717896: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717898: jne 0x7177bd */ if (!fZ) goto L_007177bd;
L_0071789e:; BB(0x0071789e);
    /* 0071789e: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 007178a5: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007178a7: je 0x717873 */ if (fZ) goto L_00717873;
L_007178a9:; BB(0x007178a9);
    /* 007178a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007178ac: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 007178af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007178b1: jne 0x717873 */ if (!fZ) goto L_00717873;
L_007178b3:; BB(0x007178b3);
    /* 007178b3: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 007178bd: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007178bf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7178c4u); f_005caba4();
    /* 007178c4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007178c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007178ca: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 007178d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007178d2: je 0x717918 */ if (fZ) goto L_00717918;
L_007178d4:; BB(0x007178d4);
    /* 007178d4: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 007178de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007178e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007178e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007178eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007178ec: call 0x722310 */ r_esp -= 4; W32(r_esp, 0x7178f1u); f_00722310();
    /* 007178f1: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_007178fb:; BB(0x007178fb);
    /* 007178fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007178fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00717901: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00717904: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071790b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071790d: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x717912u); f_00791748();
    /* 00717912: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00717913: jmp 0x717873 */ goto L_00717873;
L_00717918:; BB(0x00717918);
    /* 00717918: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071791a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071791d: jmp 0x7178fb */ goto L_007178fb;
}

void f_00717920(void) /* sub_717920 */
{
    FN_ENTER(0x00717920);
    /* 00717920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00717921: mov ebp, esp */ r_ebp = r_esp;
    /* 00717923: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00717925: push 0x8f095a */ { u32 v = 0x8f095au; r_esp -= 4; W32(r_esp, v); }
    /* 0071792a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00717930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00717931: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00717938: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071793b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071793e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00717941: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00717944: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00717947: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0071794a: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0071794f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00717950: call 0x716ba4 */ r_esp -= 4; W32(r_esp, 0x717955u); f_00716ba4();
    /* 00717955: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00717956: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717958: jne 0x717989 */ if (!fZ) goto L_00717989;
L_0071795a:; BB(0x0071795a);
    /* 0071795a: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0071795f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00717960: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x717965u); f_00716bd8();
    /* 00717965: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00717966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717968: jne 0x717989 */ if (!fZ) goto L_00717989;
L_0071796a:; BB(0x0071796a);
    /* 0071796a: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 0071796f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717971: je 0x71797b */ if (fZ) goto L_0071797b;
L_00717973:; BB(0x00717973);
    /* 00717973: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00717977: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00717979: jne 0x717989 */ if (!fZ) goto L_00717989;
L_0071797b:; BB(0x0071797b);
    /* 0071797b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071797e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00717981: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717983: je 0x717a56 */ if (fZ) goto L_00717a56;
L_00717989:; BB(0x00717989);
    /* 00717989: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00717990: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717992: je 0x717a3f */ if (fZ) goto L_00717a3f;
L_00717998:; BB(0x00717998);
    /* 00717998: mov byte ptr [ebp - 0x80], 0xce */ W8((u32)(r_ebp+0xffffff80u), 0xceu);
    /* 0071799c: mov eax, 0xa9c940 */ r_eax = 0xa9c940u;
    /* 007179a1: mov byte ptr [ebp - 0x7f], 0x17 */ W8((u32)(r_ebp+0xffffff81u), 0x17u);
    /* 007179a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007179a7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007179aa: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 007179ad: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 007179b0: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 007179b3: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 007179b6: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007179b9: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 007179bc: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 007179bf: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 007179c2: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 007179c5: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 007179c8: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007179cb: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 007179ce: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007179d1: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 007179d4: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007179d7: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 007179da: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007179dd: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 007179e0: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007179e3: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 007179e6: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 007179e9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 007179ec: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007179ef: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 007179f2: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 007179f5: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 007179f8: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007179fb: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 007179fe: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00717a01: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00717a04: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00717a07: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00717a0a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00717a0d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00717a10: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00717a13: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00717a16: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00717a19: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00717a1c: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00717a1f: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 00717a22: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00717a25: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00717a28: push dword ptr [ebp - 0x7c] */ { u32 v = R32((u32)(r_ebp+0xffffff84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00717a2b: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 00717a32: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 00717a35: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x717a3au); f_00800464();
    /* 00717a3a: call 0x71631c */ r_esp -= 4; W32(r_esp, 0x717a3fu); f_0071631c();
L_00717a3f:; BB(0x00717a3f);
    /* 00717a3f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00717a42: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00717a45: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00717a48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00717a4b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00717a52: mov esp, ebp */ r_esp = r_ebp;
    /* 00717a54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00717a55: ret  */ FN_RET(0x00717920); r_esp += 4; return;
L_00717a56:; BB(0x00717a56);
    /* 00717a56: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00717a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717a5b: je 0x717a6a */ if (fZ) goto L_00717a6a;
L_00717a5d:; BB(0x00717a5d);
    /* 00717a5d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x717a62u); f_00714090();
    /* 00717a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717a64: jne 0x717989 */ if (!fZ) goto L_00717989;
L_00717a6a:; BB(0x00717a6a);
    /* 00717a6a: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00717a71: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717a73: je 0x717a3f */ if (fZ) goto L_00717a3f;
L_00717a75:; BB(0x00717a75);
    /* 00717a75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00717a78: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00717a7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717a7d: jne 0x717a3f */ if (!fZ) goto L_00717a3f;
L_00717a7f:; BB(0x00717a7f);
    /* 00717a7f: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00717a89: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00717a8b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x717a90u); f_005caba4();
    /* 00717a90: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00717a93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00717a96: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00717a9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717a9e: je 0x717ae4 */ if (fZ) goto L_00717ae4;
L_00717aa0:; BB(0x00717aa0);
    /* 00717aa0: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 00717aaa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00717ab1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00717ab4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00717ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00717ab8: call 0x724430 */ r_esp -= 4; W32(r_esp, 0x717abdu); f_00724430();
    /* 00717abd: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00717ac7:; BB(0x00717ac7);
    /* 00717ac7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00717aca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00717acd: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 00717ad0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00717ad7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00717ad9: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x717adeu); f_00791748();
    /* 00717ade: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00717adf: jmp 0x717a3f */ goto L_00717a3f;
L_00717ae4:; BB(0x00717ae4);
    /* 00717ae4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00717ae6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00717ae9: jmp 0x717ac7 */ goto L_00717ac7;
}

void f_00717aec(void) /* sub_717AEC */
{
    FN_ENTER(0x00717aec);
    /* 00717aec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00717aed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00717aee: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00717af1: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717af6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717af8: je 0x717c69 */ if (fZ) goto L_00717c69;
L_00717afe:; BB(0x00717afe);
    /* 00717afe: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00717b02: movzx ebx, byte ptr [edx + 0x85] */ r_ebx = (u32)R8((u32)(r_edx+0x85u));
    /* 00717b09: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00717b0c: je 0x717b27 */ if (fZ) goto L_00717b27;
L_00717b0e:; BB(0x00717b0e);
    /* 00717b0e: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00717b12: or edx, 0xffff0200 */ {  u32 a = r_edx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00717b18: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 00717b1c: mov eax, 3 */ r_eax = 0x3u;
    /* 00717b21: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00717b24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00717b25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717b26: ret  */ FN_RET(0x00717aec); r_esp += 4; return;
L_00717b27:; BB(0x00717b27);
    /* 00717b27: fld dword ptr [0x96fe48] */ FPUSH(R_F32((u32)(0x96fe48u)));
    /* 00717b2d: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00717b31: fld dword ptr [edx + 0x48] */ FPUSH(R_F32((u32)(r_edx+0x48u)));
    /* 00717b34: fld dword ptr [edx + 0x4c] */ FPUSH(R_F32((u32)(r_edx+0x4cu)));
    /* 00717b37: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00717b39: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00717b3b: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 00717b3e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00717b40: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00717b42: fadd dword ptr [edx + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x44u));
    /* 00717b45: fld dword ptr [0x96fe44] */ FPUSH(R_F32((u32)(0x96fe44u)));
    /* 00717b4b: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00717b4f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00717b53: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00717b57: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00717b5b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00717b5f: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00717b62: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 00717b67: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00717b6c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00717b6e: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00717b72: mov esi, ecx */ r_esi = r_ecx;
    /* 00717b74: mov ecx, eax */ r_ecx = r_eax;
L_00717b76:; BB(0x00717b76);
    /* 00717b76: test esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717b78: jne 0x717c16 */ if (!fZ) goto L_00717c16;
L_00717b7e:; BB(0x00717b7e);
    /* 00717b7e: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00717b82: movsx ebp, word ptr [ebp + 0x20] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00717b86: movsx edi, bl */ r_edi = (u32)(i32)(i8)(u8)r_ebx;
    /* 00717b89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717b8b: je 0x717c62 */ if (fZ) goto L_00717c62;
L_00717b91:; BB(0x00717b91);
    /* 00717b91: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717b93: jl 0x717c5b */ if ((fS!=fO)) goto L_00717c5b;
L_00717b99:; BB(0x00717b99);
    /* 00717b99: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717b9c: jl 0x717ba2 */ if ((fS!=fO)) goto L_00717ba2;
L_00717b9e:; BB(0x00717b9e);
    /* 00717b9e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00717ba0: jmp 0x717ba6 */ goto L_00717ba6;
L_00717ba2:; BB(0x00717ba2);
    /* 00717ba2: mov ebp, dword ptr [ecx + ebp*4 + 0x54] */ r_ebp = R32((u32)(r_ecx+r_ebp*4+0x54u));
L_00717ba6:; BB(0x00717ba6);
    /* 00717ba6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717ba8: je 0x717c57 */ if (fZ) goto L_00717c57;
L_00717bae:; BB(0x00717bae);
    /* 00717bae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00717bb0: call 0x71b478 */ r_esp -= 4; W32(r_esp, 0x717bb5u); f_0071b478();
    /* 00717bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717bb7: je 0x717bc0 */ if (fZ) goto L_00717bc0;
L_00717bb9:; BB(0x00717bb9);
    /* 00717bb9: mov eax, 0x4f */ r_eax = 0x4fu;
    /* 00717bbe: jmp 0x717bd7 */ goto L_00717bd7;
L_00717bc0:; BB(0x00717bc0);
    /* 00717bc0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00717bc2: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x717bc7u); f_0071b354();
    /* 00717bc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717bc9: je 0x717bd2 */ if (fZ) goto L_00717bd2;
L_00717bcb:; BB(0x00717bcb);
    /* 00717bcb: mov eax, 0x4a */ r_eax = 0x4au;
    /* 00717bd0: jmp 0x717bd7 */ goto L_00717bd7;
L_00717bd2:; BB(0x00717bd2);
    /* 00717bd2: mov eax, 0x45 */ r_eax = 0x45u;
L_00717bd7:; BB(0x00717bd7);
    /* 00717bd7: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00717bd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00717bda: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x717bdfu); f_0073ec50();
    /* 00717bdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00717be0: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00717be6: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
L_00717bea:; BB(0x00717bea);
    /* 00717bea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717bec: je 0x717c16 */ if (fZ) goto L_00717c16;
L_00717bee:; BB(0x00717bee);
    /* 00717bee: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00717bf2: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00717bf4: fsubr dword ptr [esp + 0xc] */ ST(0) = R_F32((u32)(r_esp+0xcu)) - ST(0);
    /* 00717bf8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00717bfa: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00717bfd: fsubr dword ptr [esp + 8] */ ST(0) = R_F32((u32)(r_esp+0x8u)) - ST(0);
    /* 00717c01: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00717c03: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00717c05: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00717c07: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00717c09: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00717c0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00717c0c: jbe 0x717c71 */ if ((fC||fZ)) goto L_00717c71;
L_00717c0e:; BB(0x00717c0e);
    /* 00717c0e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00717c12: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_00717c16:; BB(0x00717c16);
    /* 00717c16: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00717c19: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00717c1b: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717c1e: jl 0x717b76 */ if ((fS!=fO)) goto L_00717b76;
L_00717c24:; BB(0x00717c24);
    /* 00717c24: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00717c28: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00717c2c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00717c2f: mov eax, ecx */ r_eax = r_ecx;
    /* 00717c31: mov ecx, esi */ r_ecx = r_esi;
    /* 00717c33: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00717c36: jne 0x717c42 */ if (!fZ) goto L_00717c42;
L_00717c38:; BB(0x00717c38);
    /* 00717c38: mov esi, 3 */ r_esi = 0x3u;
    /* 00717c3d: mov ecx, 3 */ r_ecx = 0x3u;
L_00717c42:; BB(0x00717c42);
    /* 00717c42: mov ebx, 0x40 */ r_ebx = 0x40u;
    /* 00717c47: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00717c49: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00717c4b: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 00717c4f: mov eax, esi */ r_eax = r_esi;
    /* 00717c51: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00717c54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00717c55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717c56: ret  */ FN_RET(0x00717aec); r_esp += 4; return;
L_00717c57:; BB(0x00717c57);
    /* 00717c57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00717c59: jmp 0x717bea */ goto L_00717bea;
L_00717c5b:; BB(0x00717c5b);
    /* 00717c5b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00717c5d: jmp 0x717ba6 */ goto L_00717ba6;
L_00717c62:; BB(0x00717c62);
    /* 00717c62: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00717c64: jmp 0x717ba6 */ goto L_00717ba6;
L_00717c69:; BB(0x00717c69);
    /* 00717c69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00717c6b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00717c6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00717c6f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717c70: ret  */ FN_RET(0x00717aec); r_esp += 4; return;
L_00717c71:; BB(0x00717c71);
    /* 00717c71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00717c73: jmp 0x717c16 */ goto L_00717c16;
}

void f_00717c78(void) /* sub_717C78 */
{
    FN_ENTER(0x00717c78);
    /* 00717c78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00717c79: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00717c7d: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717c82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717c84: je 0x717c92 */ if (fZ) goto L_00717c92;
L_00717c86:; BB(0x00717c86);
    /* 00717c86: movsx ecx, byte ptr [edx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00717c89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717c8b: jl 0x717c92 */ if ((fS!=fO)) goto L_00717c92;
L_00717c8d:; BB(0x00717c8d);
    /* 00717c8d: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00717c90: jl 0x717c94 */ if ((fS!=fO)) goto L_00717c94;
L_00717c92:; BB(0x00717c92);
    /* 00717c92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717c93: ret  */ FN_RET(0x00717c78); r_esp += 4; return;
L_00717c94:; BB(0x00717c94);
    /* 00717c94: mov esi, 0x40 */ r_esi = 0x40u;
    /* 00717c99: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00717c9b: not esi */ r_esi = ~r_esi;
    /* 00717c9d: and word ptr [eax + 0x1c], si */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R16(ad); u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717ca1: mov byte ptr [edx], 0xff */ W8((u32)(r_edx), 0xffu);
    /* 00717ca4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00717ca5: ret  */ FN_RET(0x00717c78); r_esp += 4; return;
}

void f_00717ca8(void) /* sub_717CA8 */
{
    FN_ENTER(0x00717ca8);
    /* 00717ca8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00717ca9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00717cad: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717cb4: je 0x717d08 */ if (fZ) goto L_00717d08;
L_00717cb6:; BB(0x00717cb6);
    /* 00717cb6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717cb8: jl 0x717d04 */ if ((fS!=fO)) goto L_00717d04;
L_00717cba:; BB(0x00717cba);
    /* 00717cba: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717cbd: jl 0x717cc3 */ if ((fS!=fO)) goto L_00717cc3;
L_00717cbf:; BB(0x00717cbf);
    /* 00717cbf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00717cc1: jmp 0x717cc7 */ goto L_00717cc7;
L_00717cc3:; BB(0x00717cc3);
    /* 00717cc3: mov ebp, dword ptr [eax + edx*4 + 0x54] */ r_ebp = R32((u32)(r_eax+r_edx*4+0x54u));
L_00717cc7:; BB(0x00717cc7);
    /* 00717cc7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717cc9: je 0x717d0c */ if (fZ) goto L_00717d0c;
L_00717ccb:; BB(0x00717ccb);
    /* 00717ccb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00717ccd: call 0x71b478 */ r_esp -= 4; W32(r_esp, 0x717cd2u); f_0071b478();
    /* 00717cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717cd4: je 0x717cdd */ if (fZ) goto L_00717cdd;
L_00717cd6:; BB(0x00717cd6);
    /* 00717cd6: mov edx, 0x4f */ r_edx = 0x4fu;
    /* 00717cdb: jmp 0x717cf4 */ goto L_00717cf4;
L_00717cdd:; BB(0x00717cdd);
    /* 00717cdd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00717cdf: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x717ce4u); f_0071b354();
    /* 00717ce4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717ce6: je 0x717cef */ if (fZ) goto L_00717cef;
L_00717ce8:; BB(0x00717ce8);
    /* 00717ce8: mov edx, 0x4a */ r_edx = 0x4au;
    /* 00717ced: jmp 0x717cf4 */ goto L_00717cf4;
L_00717cef:; BB(0x00717cef);
    /* 00717cef: mov edx, 0x45 */ r_edx = 0x45u;
L_00717cf4:; BB(0x00717cf4);
    /* 00717cf4: movsx eax, byte ptr [esp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x8u));
    /* 00717cf9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00717cfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00717cfc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x717d01u); f_0073ec50();
    /* 00717d01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00717d02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00717d03: ret  */ FN_RET(0x00717ca8); r_esp += 4; return;
L_00717d04:; BB(0x00717d04);
    /* 00717d04: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00717d06: jmp 0x717cc7 */ goto L_00717cc7;
L_00717d08:; BB(0x00717d08);
    /* 00717d08: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00717d0a: jmp 0x717cc7 */ goto L_00717cc7;
L_00717d0c:; BB(0x00717d0c);
    /* 00717d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00717d0f: ret  */ FN_RET(0x00717ca8); r_esp += 4; return;
}

void f_00717d10(void) /* sub_717D10 */
{
    FN_ENTER(0x00717d10);
    /* 00717d10: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00717d17: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00717d1d: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00717d22: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 00717d28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d2a: je 0x717d47 */ if (fZ) goto L_00717d47;
L_00717d2c:; BB(0x00717d2c);
    /* 00717d2c: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00717d2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d31: je 0x717d47 */ if (fZ) goto L_00717d47;
L_00717d33:; BB(0x00717d33);
    /* 00717d33: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00717d37: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d3c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00717d40: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_00717d47:; BB(0x00717d47);
    /* 00717d47: ret  */ FN_RET(0x00717d10); r_esp += 4; return;
}

void f_00717d48(void) /* sub_717D48 */
{
    FN_ENTER(0x00717d48);
    /* 00717d48: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717d4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d4f: je 0x717d66 */ if (fZ) goto L_00717d66;
L_00717d51:; BB(0x00717d51);
    /* 00717d51: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00717d54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d56: je 0x717d66 */ if (fZ) goto L_00717d66;
L_00717d58:; BB(0x00717d58);
    /* 00717d58: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 00717d5c: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d61: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 00717d65: ret  */ FN_RET(0x00717d48); r_esp += 4; return;
L_00717d66:; BB(0x00717d66);
    /* 00717d66: ret  */ FN_RET(0x00717d48); r_esp += 4; return;
}

void f_00717d68(void) /* sub_717D68 */
{
    FN_ENTER(0x00717d68);
    /* 00717d68: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717d6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d6f: je 0x717d86 */ if (fZ) goto L_00717d86;
L_00717d71:; BB(0x00717d71);
    /* 00717d71: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00717d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d76: je 0x717d86 */ if (fZ) goto L_00717d86;
L_00717d78:; BB(0x00717d78);
    /* 00717d78: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 00717d7c: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717d81: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 00717d85: ret  */ FN_RET(0x00717d68); r_esp += 4; return;
L_00717d86:; BB(0x00717d86);
    /* 00717d86: ret  */ FN_RET(0x00717d68); r_esp += 4; return;
}

void f_00717d88(void) /* sub_717D88 */
{
    FN_ENTER(0x00717d88);
    /* 00717d88: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717d8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717d8f: je 0x717d9e */ if (fZ) goto L_00717d9e;
L_00717d91:; BB(0x00717d91);
    /* 00717d91: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00717d94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717d96: je 0x717d9e */ if (fZ) goto L_00717d9e;
L_00717d98:; BB(0x00717d98);
    /* 00717d98: call 0x7140e8 */ r_esp -= 4; W32(r_esp, 0x717d9du); f_007140e8();
    /* 00717d9d: ret  */ FN_RET(0x00717d88); r_esp += 4; return;
L_00717d9e:; BB(0x00717d9e);
    /* 00717d9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717da0: ret  */ FN_RET(0x00717d88); r_esp += 4; return;
}

void f_00717da4(void) /* sub_717DA4 */
{
    FN_ENTER(0x00717da4);
    /* 00717da4: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00717dab: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00717db1: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00717db6: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 00717dbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717dbe: je 0x717de3 */ if (fZ) goto L_00717de3;
L_00717dc0:; BB(0x00717dc0);
    /* 00717dc0: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00717dc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717dc5: je 0x717ddb */ if (fZ) goto L_00717ddb;
L_00717dc7:; BB(0x00717dc7);
    /* 00717dc7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00717dcb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00717dd0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00717dd4: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_00717ddb:; BB(0x00717ddb);
    /* 00717ddb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00717ddd: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x717de2u); f_00791748();
    /* 00717de2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00717de3:; BB(0x00717de3);
    /* 00717de3: ret  */ FN_RET(0x00717da4); r_esp += 4; return;
}

void f_00717de4(void) /* sub_717DE4 */
{
    FN_ENTER(0x00717de4);
    /* 00717de4: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717de9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717deb: je 0x717df4 */ if (fZ) goto L_00717df4;
L_00717ded:; BB(0x00717ded);
    /* 00717ded: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00717df0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717df2: je 0x717df5 */ if (fZ) goto L_00717df5;
L_00717df4:; BB(0x00717df4);
    /* 00717df4: ret  */ FN_RET(0x00717de4); r_esp += 4; return;
L_00717df5:; BB(0x00717df5);
    /* 00717df5: call 0x760ef4 */ r_esp -= 4; W32(r_esp, 0x717dfau); f_00760ef4();
    /* 00717dfa: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717e00: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00717e03: ret  */ FN_RET(0x00717de4); r_esp += 4; return;
}

void f_00717e04(void) /* sub_717E04 */
{
    FN_ENTER(0x00717e04);
    /* 00717e04: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717e09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e0b: je 0x717e26 */ if (fZ) goto L_00717e26;
L_00717e0d:; BB(0x00717e0d);
    /* 00717e0d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00717e10: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e12: je 0x717e26 */ if (fZ) goto L_00717e26;
L_00717e14:; BB(0x00717e14);
    /* 00717e14: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x717e19u); f_007127b0();
    /* 00717e19: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717e1e: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00717e25: ret  */ FN_RET(0x00717e04); r_esp += 4; return;
L_00717e26:; BB(0x00717e26);
    /* 00717e26: ret  */ FN_RET(0x00717e04); r_esp += 4; return;
}

void f_00717e28(void) /* sub_717E28 */
{
    FN_ENTER(0x00717e28);
    /* 00717e28: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717e2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e2f: je 0x717e41 */ if (fZ) goto L_00717e41;
L_00717e31:; BB(0x00717e31);
    /* 00717e31: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00717e34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e36: je 0x717e41 */ if (fZ) goto L_00717e41;
L_00717e38:; BB(0x00717e38);
    /* 00717e38: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00717e3c: call 0x761250 */ r_esp -= 4; W32(r_esp, 0x717e41u); f_00761250();
L_00717e41:; BB(0x00717e41);
    /* 00717e41: ret  */ FN_RET(0x00717e28); r_esp += 4; return;
}

void f_00717e44(void) /* sub_717E44 */
{
    FN_ENTER(0x00717e44);
    /* 00717e44: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717e49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e4b: je 0x717e54 */ if (fZ) goto L_00717e54;
L_00717e4d:; BB(0x00717e4d);
    /* 00717e4d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00717e50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e52: je 0x717e55 */ if (fZ) goto L_00717e55;
L_00717e54:; BB(0x00717e54);
    /* 00717e54: ret  */ FN_RET(0x00717e44); r_esp += 4; return;
L_00717e55:; BB(0x00717e55);
    /* 00717e55: call 0x761084 */ r_esp -= 4; W32(r_esp, 0x717e5au); f_00761084();
    /* 00717e5a: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717e60: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00717e63: ret  */ FN_RET(0x00717e44); r_esp += 4; return;
}

void f_00717e64(void) /* sub_717E64 */
{
    FN_ENTER(0x00717e64);
    /* 00717e64: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717e69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e6b: je 0x717e74 */ if (fZ) goto L_00717e74;
L_00717e6d:; BB(0x00717e6d);
    /* 00717e6d: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 00717e70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e72: je 0x717e75 */ if (fZ) goto L_00717e75;
L_00717e74:; BB(0x00717e74);
    /* 00717e74: ret  */ FN_RET(0x00717e64); r_esp += 4; return;
L_00717e75:; BB(0x00717e75);
    /* 00717e75: call 0x7109d0 */ r_esp -= 4; W32(r_esp, 0x717e7au); f_007109d0();
    /* 00717e7a: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717e80: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00717e83: ret  */ FN_RET(0x00717e64); r_esp += 4; return;
}

void f_00717e84(void) /* sub_717E84 */
{
    FN_ENTER(0x00717e84);
    /* 00717e84: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e8b: je 0x717ea6 */ if (fZ) goto L_00717ea6;
L_00717e8d:; BB(0x00717e8d);
    /* 00717e8d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00717e90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717e92: je 0x717ea6 */ if (fZ) goto L_00717ea6;
L_00717e94:; BB(0x00717e94);
    /* 00717e94: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x717e99u); f_007127b0();
    /* 00717e99: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717e9e: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00717ea5: ret  */ FN_RET(0x00717e84); r_esp += 4; return;
L_00717ea6:; BB(0x00717ea6);
    /* 00717ea6: ret  */ FN_RET(0x00717e84); r_esp += 4; return;
}

void f_00717ea8(void) /* sub_717EA8 */
{
    FN_ENTER(0x00717ea8);
    /* 00717ea8: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717ead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717eaf: je 0x717eb8 */ if (fZ) goto L_00717eb8;
L_00717eb1:; BB(0x00717eb1);
    /* 00717eb1: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 00717eb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717eb6: je 0x717eb9 */ if (fZ) goto L_00717eb9;
L_00717eb8:; BB(0x00717eb8);
    /* 00717eb8: ret  */ FN_RET(0x00717ea8); r_esp += 4; return;
L_00717eb9:; BB(0x00717eb9);
    /* 00717eb9: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 00717ebe: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x717ec3u); f_0079317c();
    /* 00717ec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00717ec4: call 0x710b3c */ r_esp -= 4; W32(r_esp, 0x717ec9u); f_00710b3c();
    /* 00717ec9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00717ecc: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717ed2: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00717ed5: ret  */ FN_RET(0x00717ea8); r_esp += 4; return;
}

void f_00717ed8(void) /* sub_717ED8 */
{
    FN_ENTER(0x00717ed8);
    /* 00717ed8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00717edc: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717ee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717ee3: je 0x717f04 */ if (fZ) goto L_00717f04;
L_00717ee5:; BB(0x00717ee5);
    /* 00717ee5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717ee7: jl 0x717f00 */ if ((fS!=fO)) goto L_00717f00;
L_00717ee9:; BB(0x00717ee9);
    /* 00717ee9: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717eec: jl 0x717ef2 */ if ((fS!=fO)) goto L_00717ef2;
L_00717eee:; BB(0x00717eee);
    /* 00717eee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717ef0: jmp 0x717ef6 */ goto L_00717ef6;
L_00717ef2:; BB(0x00717ef2);
    /* 00717ef2: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00717ef6:; BB(0x00717ef6);
    /* 00717ef6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717ef8: je 0x717eff */ if (fZ) goto L_00717eff;
L_00717efa:; BB(0x00717efa);
    /* 00717efa: call 0x7160b4 */ r_esp -= 4; W32(r_esp, 0x717effu); f_007160b4();
L_00717eff:; BB(0x00717eff);
    /* 00717eff: ret  */ FN_RET(0x00717ed8); r_esp += 4; return;
L_00717f00:; BB(0x00717f00);
    /* 00717f00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f02: jmp 0x717ef6 */ goto L_00717ef6;
L_00717f04:; BB(0x00717f04);
    /* 00717f04: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f06: jmp 0x717ef6 */ goto L_00717ef6;
}

void f_00717f08(void) /* sub_717F08 */
{
    FN_ENTER(0x00717f08);
    /* 00717f08: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00717f0c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717f11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717f13: je 0x717f34 */ if (fZ) goto L_00717f34;
L_00717f15:; BB(0x00717f15);
    /* 00717f15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717f17: jl 0x717f30 */ if ((fS!=fO)) goto L_00717f30;
L_00717f19:; BB(0x00717f19);
    /* 00717f19: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717f1c: jl 0x717f22 */ if ((fS!=fO)) goto L_00717f22;
L_00717f1e:; BB(0x00717f1e);
    /* 00717f1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f20: jmp 0x717f26 */ goto L_00717f26;
L_00717f22:; BB(0x00717f22);
    /* 00717f22: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00717f26:; BB(0x00717f26);
    /* 00717f26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717f28: je 0x717f2f */ if (fZ) goto L_00717f2f;
L_00717f2a:; BB(0x00717f2a);
    /* 00717f2a: call 0x7160a0 */ r_esp -= 4; W32(r_esp, 0x717f2fu); f_007160a0();
L_00717f2f:; BB(0x00717f2f);
    /* 00717f2f: ret  */ FN_RET(0x00717f08); r_esp += 4; return;
L_00717f30:; BB(0x00717f30);
    /* 00717f30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f32: jmp 0x717f26 */ goto L_00717f26;
L_00717f34:; BB(0x00717f34);
    /* 00717f34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f36: jmp 0x717f26 */ goto L_00717f26;
}

void f_00717f38(void) /* sub_717F38 */
{
    FN_ENTER(0x00717f38);
    /* 00717f38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00717f39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00717f3b: mov ebx, eax */ r_ebx = r_eax;
L_00717f3d:; BB(0x00717f3d);
    /* 00717f3d: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717f43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717f45: je 0x717f6f */ if (fZ) goto L_00717f6f;
L_00717f47:; BB(0x00717f47);
    /* 00717f47: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717f49: jl 0x717f6b */ if ((fS!=fO)) goto L_00717f6b;
L_00717f4b:; BB(0x00717f4b);
    /* 00717f4b: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717f4e: jl 0x717f54 */ if ((fS!=fO)) goto L_00717f54;
L_00717f50:; BB(0x00717f50);
    /* 00717f50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f52: jmp 0x717f58 */ goto L_00717f58;
L_00717f54:; BB(0x00717f54);
    /* 00717f54: mov ecx, dword ptr [edx + ebx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ebx*4+0x54u));
L_00717f58:; BB(0x00717f58);
    /* 00717f58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717f5a: je 0x717f61 */ if (fZ) goto L_00717f61;
L_00717f5c:; BB(0x00717f5c);
    /* 00717f5c: call 0x7160b4 */ r_esp -= 4; W32(r_esp, 0x717f61u); f_007160b4();
L_00717f61:; BB(0x00717f61);
    /* 00717f61: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00717f64: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00717f67: jl 0x717f3d */ if ((fS!=fO)) goto L_00717f3d;
L_00717f69:; BB(0x00717f69);
    /* 00717f69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00717f6a: ret  */ FN_RET(0x00717f38); r_esp += 4; return;
L_00717f6b:; BB(0x00717f6b);
    /* 00717f6b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f6d: jmp 0x717f58 */ goto L_00717f58;
L_00717f6f:; BB(0x00717f6f);
    /* 00717f6f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f71: jmp 0x717f58 */ goto L_00717f58;
}

void f_00717f74(void) /* sub_717F74 */
{
    FN_ENTER(0x00717f74);
    /* 00717f74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00717f75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00717f77: mov ebx, eax */ r_ebx = r_eax;
L_00717f79:; BB(0x00717f79);
    /* 00717f79: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00717f7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717f81: je 0x717fab */ if (fZ) goto L_00717fab;
L_00717f83:; BB(0x00717f83);
    /* 00717f83: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717f85: jl 0x717fa7 */ if ((fS!=fO)) goto L_00717fa7;
L_00717f87:; BB(0x00717f87);
    /* 00717f87: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717f8a: jl 0x717f90 */ if ((fS!=fO)) goto L_00717f90;
L_00717f8c:; BB(0x00717f8c);
    /* 00717f8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717f8e: jmp 0x717f94 */ goto L_00717f94;
L_00717f90:; BB(0x00717f90);
    /* 00717f90: mov ecx, dword ptr [edx + ebx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ebx*4+0x54u));
L_00717f94:; BB(0x00717f94);
    /* 00717f94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717f96: je 0x717f9d */ if (fZ) goto L_00717f9d;
L_00717f98:; BB(0x00717f98);
    /* 00717f98: call 0x7160a0 */ r_esp -= 4; W32(r_esp, 0x717f9du); f_007160a0();
L_00717f9d:; BB(0x00717f9d);
    /* 00717f9d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00717fa0: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00717fa3: jl 0x717f79 */ if ((fS!=fO)) goto L_00717f79;
L_00717fa5:; BB(0x00717fa5);
    /* 00717fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00717fa6: ret  */ FN_RET(0x00717f74); r_esp += 4; return;
L_00717fa7:; BB(0x00717fa7);
    /* 00717fa7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717fa9: jmp 0x717f94 */ goto L_00717f94;
L_00717fab:; BB(0x00717fab);
    /* 00717fab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717fad: jmp 0x717f94 */ goto L_00717f94;
}

void f_00717fb0(void) /* sub_717FB0 */
{
    FN_ENTER(0x00717fb0);
    /* 00717fb0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00717fb4: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717fb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717fbb: je 0x717fdc */ if (fZ) goto L_00717fdc;
L_00717fbd:; BB(0x00717fbd);
    /* 00717fbd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717fbf: jl 0x717fd8 */ if ((fS!=fO)) goto L_00717fd8;
L_00717fc1:; BB(0x00717fc1);
    /* 00717fc1: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717fc4: jl 0x717fca */ if ((fS!=fO)) goto L_00717fca;
L_00717fc6:; BB(0x00717fc6);
    /* 00717fc6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717fc8: jmp 0x717fce */ goto L_00717fce;
L_00717fca:; BB(0x00717fca);
    /* 00717fca: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00717fce:; BB(0x00717fce);
    /* 00717fce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00717fd0: je 0x717fd7 */ if (fZ) goto L_00717fd7;
L_00717fd2:; BB(0x00717fd2);
    /* 00717fd2: call 0x716128 */ r_esp -= 4; W32(r_esp, 0x717fd7u); f_00716128();
L_00717fd7:; BB(0x00717fd7);
    /* 00717fd7: ret  */ FN_RET(0x00717fb0); r_esp += 4; return;
L_00717fd8:; BB(0x00717fd8);
    /* 00717fd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717fda: jmp 0x717fce */ goto L_00717fce;
L_00717fdc:; BB(0x00717fdc);
    /* 00717fdc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717fde: jmp 0x717fce */ goto L_00717fce;
}

void f_00717fe0(void) /* sub_717FE0 */
{
    FN_ENTER(0x00717fe0);
    /* 00717fe0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00717fe4: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00717fe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00717feb: je 0x71800c */ if (fZ) goto L_0071800c;
L_00717fed:; BB(0x00717fed);
    /* 00717fed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00717fef: jl 0x718008 */ if ((fS!=fO)) goto L_00718008;
L_00717ff1:; BB(0x00717ff1);
    /* 00717ff1: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00717ff4: jl 0x717ffa */ if ((fS!=fO)) goto L_00717ffa;
L_00717ff6:; BB(0x00717ff6);
    /* 00717ff6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00717ff8: jmp 0x717ffe */ goto L_00717ffe;
L_00717ffa:; BB(0x00717ffa);
    /* 00717ffa: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00717ffe:; BB(0x00717ffe);
    /* 00717ffe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00718000: je 0x718007 */ if (fZ) goto L_00718007;
L_00718002:; BB(0x00718002);
    /* 00718002: call 0x716138 */ r_esp -= 4; W32(r_esp, 0x718007u); f_00716138();
L_00718007:; BB(0x00718007);
    /* 00718007: ret  */ FN_RET(0x00717fe0); r_esp += 4; return;
L_00718008:; BB(0x00718008);
    /* 00718008: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071800a: jmp 0x717ffe */ goto L_00717ffe;
L_0071800c:; BB(0x0071800c);
    /* 0071800c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071800e: jmp 0x717ffe */ goto L_00717ffe;
}

