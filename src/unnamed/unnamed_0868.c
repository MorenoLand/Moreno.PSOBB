#include "protos.h"

void f_0086805e(void) /* _LangCountryEnumProc@4 */
{
    FN_ENTER(0x0086805e);
    /* 0086805e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086805f: mov ebp, esp */ r_ebp = r_esp;
    /* 00868061: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00868064: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00868069: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0086806c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086806d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00868070: call 0x867f07 */ r_esp -= 4; W32(r_esp, 0x868075u); f_00867f07();
    /* 00868075: mov esi, eax */ r_esi = r_eax;
    /* 00868077: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00868079: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 0086807c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086807d: mov eax, dword ptr [0xae7e80] */ r_eax = R32((u32)(0xae7e80u));
    /* 00868082: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00868084: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00868086: and eax, 0xfffff005 */ {  u32 a = r_eax; u32 b = 0xfffff005u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086808b: add eax, 0x1002 */ {  u32 a = r_eax; u32 b = 0x1002u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00868090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868091: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868092: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x868098u); call_ind(t); }
    /* 00868098: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086809a: jne 0x8680a8 */ if (!fZ) goto L_008680a8;
L_0086809c:; BB(0x0086809c);
    /* 0086809c: and dword ptr [0xae7e70], eax */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008680a2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008680a3: jmp 0x86826b */ goto L_0086826b;
L_008680a8:; BB(0x008680a8);
    /* 008680a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008680a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008680aa: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 008680ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008680ae: push dword ptr [0xae7e84] */ { u32 v = R32((u32)(0xae7e84u)); r_esp -= 4; W32(r_esp, v); }
    /* 008680b4: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x8680b9u); f_008599e3();
    /* 008680b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008680bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008680bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008680bd: mov ebx, 0xfffff002 */ r_ebx = 0xfffff002u;
    /* 008680c2: mov edi, 0x1001 */ r_edi = 0x1001u;
    /* 008680c7: jne 0x868189 */ if (!fZ) goto L_00868189;
L_008680cd:; BB(0x008680cd);
    /* 008680cd: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 008680cf: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 008680d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008680d3: mov eax, dword ptr [0xae7e7c] */ r_eax = R32((u32)(0xae7e7cu));
    /* 008680d8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008680da: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008680dc: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008680de: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008680e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008680e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008680e2: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x8680e8u); call_ind(t); }
    /* 008680e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008680ea: je 0x8681bd */ if (fZ) goto L_008681bd;
L_008680f0:; BB(0x008680f0);
    /* 008680f0: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 008680f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008680f4: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008680fa: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x8680ffu); f_008599e3();
    /* 008680ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868101: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868102: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868103: jne 0x868116 */ if (!fZ) goto L_00868116;
L_00868105:; BB(0x00868105);
    /* 00868105: or word ptr [0xae7e70], 0x304 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R16(ad); u32 b = 0x304u; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 0086810e: mov dword ptr [0xae7e74], esi */ W32((u32)(0xae7e74u), r_esi);
    /* 00868114: jmp 0x868183 */ goto L_00868183;
L_00868116:; BB(0x00868116);
    /* 00868116: test byte ptr [0xae7e70], 2 */ {  u32 a = R8((u32)(0xae7e70u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086811d: jne 0x868189 */ if (!fZ) goto L_00868189;
L_0086811f:; BB(0x0086811f);
    /* 0086811f: mov eax, dword ptr [0xae7e88] */ r_eax = R32((u32)(0xae7e88u));
    /* 00868124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868126: je 0x868168 */ if (fZ) goto L_00868168;
L_00868128:; BB(0x00868128);
    /* 00868128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868129: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 0086812c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086812d: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868133: call 0x85a1fe */ r_esp -= 4; W32(r_esp, 0x868138u); f_0085a1fe();
    /* 00868138: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086813b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086813d: jne 0x868168 */ if (!fZ) goto L_00868168;
L_0086813f:; BB(0x0086813f);
    /* 0086813f: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868145: or dword ptr [0xae7e70], 2 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086814c: mov dword ptr [0xae7e78], esi */ W32((u32)(0xae7e78u), r_esi);
    /* 00868152: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x868157u); f_0085d760();
    /* 00868157: cmp eax, dword ptr [0xae7e88] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae7e88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086815d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086815e: jne 0x868189 */ if (!fZ) goto L_00868189;
L_00868160:; BB(0x00868160);
    /* 00868160: mov dword ptr [0xae7e74], esi */ W32((u32)(0xae7e74u), r_esi);
    /* 00868166: jmp 0x868189 */ goto L_00868189;
L_00868168:; BB(0x00868168);
    /* 00868168: test byte ptr [0xae7e70], 1 */ {  u32 a = R8((u32)(0xae7e70u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086816f: jne 0x868189 */ if (!fZ) goto L_00868189;
L_00868171:; BB(0x00868171);
    /* 00868171: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868172: call 0x867e06 */ r_esp -= 4; W32(r_esp, 0x868177u); f_00867e06();
    /* 00868177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868179: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086817a: je 0x868189 */ if (fZ) goto L_00868189;
L_0086817c:; BB(0x0086817c);
    /* 0086817c: or dword ptr [0xae7e70], 1 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00868183:; BB(0x00868183);
    /* 00868183: mov dword ptr [0xae7e78], esi */ W32((u32)(0xae7e78u), r_esi);
L_00868189:; BB(0x00868189);
    /* 00868189: mov ecx, dword ptr [0xae7e70] */ r_ecx = R32((u32)(0xae7e70u));
    /* 0086818f: mov eax, 0x300 */ r_eax = 0x300u;
    /* 00868194: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00868196: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868198: je 0x86825c */ if (fZ) goto L_0086825c;
L_0086819e:; BB(0x0086819e);
    /* 0086819e: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 008681a0: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 008681a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008681a4: mov eax, dword ptr [0xae7e7c] */ r_eax = R32((u32)(0xae7e7cu));
    /* 008681a9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008681ab: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008681ad: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008681af: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008681b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008681b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008681b3: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x8681b9u); call_ind(t); }
    /* 008681b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008681bb: jne 0x8681cc */ if (!fZ) goto L_008681cc;
L_008681bd:; BB(0x008681bd);
    /* 008681bd: and dword ptr [0xae7e70], 0 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008681c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008681c6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008681c7: jmp 0x868269 */ goto L_00868269;
L_008681cc:; BB(0x008681cc);
    /* 008681cc: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 008681cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008681d0: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008681d6: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x8681dbu); f_008599e3();
    /* 008681db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008681dc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008681de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008681e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008681e1: jne 0x868212 */ if (!fZ) goto L_00868212;
L_008681e3:; BB(0x008681e3);
    /* 008681e3: or byte ptr [0xae7e71], 2 */ { u32 ad = (u32)(0xae7e71u);  u32 a = R8(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008681ea: cmp dword ptr [0xae7e7c], edi */ {  u32 a = R32((u32)(0xae7e7cu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008681f0: jne 0x868247 */ if (!fZ) goto L_00868247;
L_008681f2:; BB(0x008681f2);
    /* 008681f2: cmp dword ptr [0xae7e88], edi */ {  u32 a = R32((u32)(0xae7e88u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008681f8: je 0x868247 */ if (fZ) goto L_00868247;
L_008681fa:; BB(0x008681fa);
    /* 008681fa: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868200: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x868205u); f_0085d760();
    /* 00868205: cmp eax, dword ptr [0xae7e88] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae7e88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086820b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086820c: jne 0x868247 */ if (!fZ) goto L_00868247;
L_0086820e:; BB(0x0086820e);
    /* 0086820e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00868210: jmp 0x86823b */ goto L_0086823b;
L_00868212:; BB(0x00868212);
    /* 00868212: cmp dword ptr [0xae7e7c], edi */ {  u32 a = R32((u32)(0xae7e7cu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868218: jne 0x86825c */ if (!fZ) goto L_0086825c;
L_0086821a:; BB(0x0086821a);
    /* 0086821a: mov eax, dword ptr [0xae7e88] */ r_eax = R32((u32)(0xae7e88u));
    /* 0086821f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868221: je 0x86825c */ if (fZ) goto L_0086825c;
L_00868223:; BB(0x00868223);
    /* 00868223: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868224: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 00868227: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868228: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086822e: call 0x85a1fe */ r_esp -= 4; W32(r_esp, 0x868233u); f_0085a1fe();
    /* 00868233: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00868236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868238: jne 0x86825c */ if (!fZ) goto L_0086825c;
L_0086823a:; BB(0x0086823a);
    /* 0086823a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0086823b:; BB(0x0086823b);
    /* 0086823b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086823c: call 0x867fed */ r_esp -= 4; W32(r_esp, 0x868241u); f_00867fed();
    /* 00868241: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868243: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868245: je 0x86825c */ if (fZ) goto L_0086825c;
L_00868247:; BB(0x00868247);
    /* 00868247: or byte ptr [0xae7e71], 1 */ { u32 ad = (u32)(0xae7e71u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0086824e: cmp dword ptr [0xae7e74], edi */ {  u32 a = R32((u32)(0xae7e74u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868254: jne 0x86825c */ if (!fZ) goto L_0086825c;
L_00868256:; BB(0x00868256);
    /* 00868256: mov dword ptr [0xae7e74], esi */ W32((u32)(0xae7e74u), r_esi);
L_0086825c:; BB(0x0086825c);
    /* 0086825c: mov eax, dword ptr [0xae7e70] */ r_eax = R32((u32)(0xae7e70u));
    /* 00868261: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00868264: not eax */ r_eax = ~r_eax;
    /* 00868266: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00868269:; BB(0x00868269);
    /* 00868269: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086826a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0086826b:; BB(0x0086826b);
    /* 0086826b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086826e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086826f: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x868274u); f_0085e419();
    /* 00868274: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00868275: ret 4 */ FN_RET(0x0086805e); r_esp += 8; return;
}

void f_00868278(void) /* _LanguageEnumProc@4 */
{
    FN_ENTER(0x00868278);
    /* 00868278: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00868279: mov ebp, esp */ r_ebp = r_esp;
    /* 0086827b: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086827e: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00868283: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00868286: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868287: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086828a: call 0x867f07 */ r_esp -= 4; W32(r_esp, 0x86828fu); f_00867f07();
    /* 0086828f: mov esi, eax */ r_esi = r_eax;
    /* 00868291: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00868293: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 00868296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868297: mov eax, dword ptr [0xae7e7c] */ r_eax = R32((u32)(0xae7e7cu));
    /* 0086829c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0086829e: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008682a0: and eax, 0xfffff002 */ {  u32 a = r_eax; u32 b = 0xfffff002u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008682a5: add eax, 0x1001 */ {  u32 a = r_eax; u32 b = 0x1001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008682aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008682ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008682ac: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x8682b2u); call_ind(t); }
    /* 008682b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008682b4: jne 0x8682bf */ if (!fZ) goto L_008682bf;
L_008682b6:; BB(0x008682b6);
    /* 008682b6: and dword ptr [0xae7e70], eax */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008682bc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008682bd: jmp 0x868336 */ goto L_00868336;
L_008682bf:; BB(0x008682bf);
    /* 008682bf: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 008682c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008682c3: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008682c9: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x8682ceu); f_008599e3();
    /* 008682ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008682d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008682d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008682d2: jne 0x8682e0 */ if (!fZ) goto L_008682e0;
L_008682d4:; BB(0x008682d4);
    /* 008682d4: cmp dword ptr [0xae7e7c], eax */ {  u32 a = R32((u32)(0xae7e7cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008682da: jne 0x868316 */ if (!fZ) goto L_00868316;
L_008682dc:; BB(0x008682dc);
    /* 008682dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008682de: jmp 0x86830a */ goto L_0086830a;
L_008682e0:; BB(0x008682e0);
    /* 008682e0: cmp dword ptr [0xae7e7c], 0 */ {  u32 a = R32((u32)(0xae7e7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008682e7: jne 0x868329 */ if (!fZ) goto L_00868329;
L_008682e9:; BB(0x008682e9);
    /* 008682e9: mov eax, dword ptr [0xae7e88] */ r_eax = R32((u32)(0xae7e88u));
    /* 008682ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008682f0: je 0x868329 */ if (fZ) goto L_00868329;
L_008682f2:; BB(0x008682f2);
    /* 008682f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008682f3: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 008682f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008682f7: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008682fd: call 0x85a1fe */ r_esp -= 4; W32(r_esp, 0x868302u); f_0085a1fe();
    /* 00868302: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00868305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868307: jne 0x868329 */ if (!fZ) goto L_00868329;
L_00868309:; BB(0x00868309);
    /* 00868309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_0086830a:; BB(0x0086830a);
    /* 0086830a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086830b: call 0x867fed */ r_esp -= 4; W32(r_esp, 0x868310u); f_00867fed();
    /* 00868310: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868312: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868313: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868314: je 0x868329 */ if (fZ) goto L_00868329;
L_00868316:; BB(0x00868316);
    /* 00868316: or dword ptr [0xae7e70], 4 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086831d: mov dword ptr [0xae7e78], esi */ W32((u32)(0xae7e78u), r_esi);
    /* 00868323: mov dword ptr [0xae7e74], esi */ W32((u32)(0xae7e74u), r_esi);
L_00868329:; BB(0x00868329);
    /* 00868329: mov eax, dword ptr [0xae7e70] */ r_eax = R32((u32)(0xae7e70u));
    /* 0086832e: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00868331: not eax */ r_eax = ~r_eax;
    /* 00868333: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00868336:; BB(0x00868336);
    /* 00868336: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00868339: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086833a: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86833fu); f_0085e419();
    /* 0086833f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00868340: ret 4 */ FN_RET(0x00868278); r_esp += 8; return;
}

void f_00868343(void) /* _GetLcidFromCountry */
{
    FN_ENTER(0x00868343);
    /* 00868343: push dword ptr [0xae7e84] */ { u32 v = R32((u32)(0xae7e84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868349: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x86834eu); f_0085d760();
    /* 0086834e: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00868351: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00868353: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868354: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00868356: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00868358: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00868359: push 0x867f59 */ { u32 v = 0x867f59u; r_esp -= 4; W32(r_esp, v); }
    /* 0086835e: mov dword ptr [0xae7e80], eax */ W32((u32)(0xae7e80u), r_eax);
    /* 00868363: call dword ptr [0x8f82c0] */ { u32 t = R32((u32)(0x8f82c0u)); r_esp -= 4; W32(r_esp, 0x868369u); call_ind(t); }
    /* 00868369: test byte ptr [0xae7e70], 4 */ {  u32 a = R8((u32)(0xae7e70u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00868370: jne 0x868379 */ if (!fZ) goto L_00868379;
L_00868372:; BB(0x00868372);
    /* 00868372: and dword ptr [0xae7e70], 0 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00868379:; BB(0x00868379);
    /* 00868379: ret  */ FN_RET(0x00868343); r_esp += 4; return;
}

void f_0086837a(void) /* _GetLcidFromLangCountry */
{
    FN_ENTER(0x0086837a);
    /* 0086837a: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868380: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x868385u); f_0085d760();
    /* 00868385: push dword ptr [0xae7e84] */ { u32 v = R32((u32)(0xae7e84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086838b: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086838e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00868390: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00868392: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00868393: mov dword ptr [0xae7e7c], eax */ W32((u32)(0xae7e7cu), r_eax);
    /* 00868398: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x86839du); f_0085d760();
    /* 0086839d: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008683a0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008683a2: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008683a4: and dword ptr [0xae7e74], 0 */ { u32 ad = (u32)(0xae7e74u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008683ab: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008683ac: cmp dword ptr [0xae7e7c], 0 */ {  u32 a = R32((u32)(0xae7e7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008683b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008683b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008683b5: mov dword ptr [0xae7e80], eax */ W32((u32)(0xae7e80u), r_eax);
    /* 008683ba: je 0x8683c8 */ if (fZ) goto L_008683c8;
L_008683bc:; BB(0x008683bc);
    /* 008683bc: mov dword ptr [0xae7e88], 2 */ W32((u32)(0xae7e88u), 0x2u);
    /* 008683c6: jmp 0x8683d8 */ goto L_008683d8;
L_008683c8:; BB(0x008683c8);
    /* 008683c8: mov edx, dword ptr [0xae7e8c] */ r_edx = R32((u32)(0xae7e8cu));
    /* 008683ce: call 0x867f3c */ r_esp -= 4; W32(r_esp, 0x8683d3u); f_00867f3c();
    /* 008683d3: mov dword ptr [0xae7e88], eax */ W32((u32)(0xae7e88u), r_eax);
L_008683d8:; BB(0x008683d8);
    /* 008683d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008683da: push 0x86805e */ { u32 v = 0x86805eu; r_esp -= 4; W32(r_esp, v); }
    /* 008683df: call dword ptr [0x8f82c0] */ { u32 t = R32((u32)(0x8f82c0u)); r_esp -= 4; W32(r_esp, 0x8683e5u); call_ind(t); }
    /* 008683e5: mov eax, dword ptr [0xae7e70] */ r_eax = R32((u32)(0xae7e70u));
    /* 008683ea: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008683ed: je 0x8683f8 */ if (fZ) goto L_008683f8;
L_008683ef:; BB(0x008683ef);
    /* 008683ef: test ah, 2 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008683f2: je 0x8683f8 */ if (fZ) goto L_008683f8;
L_008683f4:; BB(0x008683f4);
    /* 008683f4: test al, 7 */ {  u32 a = (u8)r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008683f6: jne 0x8683ff */ if (!fZ) goto L_008683ff;
L_008683f8:; BB(0x008683f8);
    /* 008683f8: and dword ptr [0xae7e70], 0 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008683ff:; BB(0x008683ff);
    /* 008683ff: ret  */ FN_RET(0x0086837a); r_esp += 4; return;
}

void f_00868400(void) /* _GetLcidFromLanguage */
{
    FN_ENTER(0x00868400);
    /* 00868400: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868406: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x86840bu); f_0085d760();
    /* 0086840b: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086840e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00868410: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00868412: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00868413: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868414: mov dword ptr [0xae7e7c], eax */ W32((u32)(0xae7e7cu), r_eax);
    /* 00868419: je 0x868427 */ if (fZ) goto L_00868427;
L_0086841b:; BB(0x0086841b);
    /* 0086841b: mov dword ptr [0xae7e88], 2 */ W32((u32)(0xae7e88u), 0x2u);
    /* 00868425: jmp 0x868437 */ goto L_00868437;
L_00868427:; BB(0x00868427);
    /* 00868427: mov edx, dword ptr [0xae7e8c] */ r_edx = R32((u32)(0xae7e8cu));
    /* 0086842d: call 0x867f3c */ r_esp -= 4; W32(r_esp, 0x868432u); f_00867f3c();
    /* 00868432: mov dword ptr [0xae7e88], eax */ W32((u32)(0xae7e88u), r_eax);
L_00868437:; BB(0x00868437);
    /* 00868437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00868439: push 0x868278 */ { u32 v = 0x868278u; r_esp -= 4; W32(r_esp, v); }
    /* 0086843e: call dword ptr [0x8f82c0] */ { u32 t = R32((u32)(0x8f82c0u)); r_esp -= 4; W32(r_esp, 0x868444u); call_ind(t); }
    /* 00868444: test byte ptr [0xae7e70], 4 */ {  u32 a = R8((u32)(0xae7e70u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086844b: jne 0x868454 */ if (!fZ) goto L_00868454;
L_0086844d:; BB(0x0086844d);
    /* 0086844d: and dword ptr [0xae7e70], 0 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00868454:; BB(0x00868454);
    /* 00868454: ret  */ FN_RET(0x00868400); r_esp += 4; return;
}

void f_00868610(void) /* _memcmp */
{
    FN_ENTER(0x00868610);
    /* 00868610: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00868614: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00868616: je 0x868662 */ if (fZ) goto L_00868662;
L_00868618:; BB(0x00868618);
    /* 00868618: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0086861c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086861d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086861e: mov esi, edx */ r_esi = r_edx;
    /* 00868620: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00868624: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00868626: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00868629: je 0x868663 */ if (fZ) goto L_00868663;
L_0086862b:; BB(0x0086862b);
    /* 0086862b: test eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868630: je 0x868643 */ if (fZ) goto L_00868643;
L_00868632:; BB(0x00868632);
    /* 00868632: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00868634: cmp cl, byte ptr [edi] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00868636: jne 0x868690 */ if (!fZ) goto L_00868690;
L_00868638:; BB(0x00868638);
    /* 00868638: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086863b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086863e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00868641: je 0x868660 */ if (fZ) goto L_00868660;
L_00868643:; BB(0x00868643);
    /* 00868643: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00868645: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00868647: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00868649: jne 0x868690 */ if (!fZ) goto L_00868690;
L_0086864b:; BB(0x0086864b);
    /* 0086864b: mov cl, byte ptr [esi + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 0086864e: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 00868651: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00868653: jne 0x868690 */ if (!fZ) goto L_00868690;
L_00868655:; BB(0x00868655);
    /* 00868655: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00868658: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086865b: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086865e: jne 0x868643 */ if (!fZ) goto L_00868643;
L_00868660:; BB(0x00868660);
    /* 00868660: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00868661: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00868662:; BB(0x00868662);
    /* 00868662: ret  */ FN_RET(0x00868610); r_esp += 4; return;
L_00868663:; BB(0x00868663);
    /* 00868663: mov ecx, eax */ r_ecx = r_eax;
    /* 00868665: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00868668: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086866b: je 0x868698 */ if (fZ) goto L_00868698;
L_0086866d:; BB(0x0086866d);
    /* 0086866d: repe cmpsd dword ptr [esi], dword ptr es:[edi] */ while (r_ecx) { { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0086866f: je 0x868698 */ if (fZ) goto L_00868698;
L_00868671:; BB(0x00868671);
    /* 00868671: mov ecx, dword ptr [esi - 4] */ r_ecx = R32((u32)(r_esi+0xfffffffcu));
    /* 00868674: mov edx, dword ptr [edi - 4] */ r_edx = R32((u32)(r_edi+0xfffffffcu));
    /* 00868677: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00868679: jne 0x86868b */ if (!fZ) goto L_0086868b;
L_0086867b:; BB(0x0086867b);
    /* 0086867b: cmp ch, dh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086867d: jne 0x86868b */ if (!fZ) goto L_0086868b;
L_0086867f:; BB(0x0086867f);
    /* 0086867f: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00868682: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00868685: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00868687: jne 0x86868b */ if (!fZ) goto L_0086868b;
L_00868689:; BB(0x00868689);
    /* 00868689: cmp ch, dh */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a - b) & 0xffu;  fC = (a < b); }
L_0086868b:; BB(0x0086868b);
    /* 0086868b: mov eax, 0 */ r_eax = 0x0u;
L_00868690:; BB(0x00868690);
    /* 00868690: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00868692: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00868693: sbb eax, -1 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
    /* 00868696: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00868697: ret  */ FN_RET(0x00868610); r_esp += 4; return;
L_00868698:; BB(0x00868698);
    /* 00868698: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086869a: je 0x868660 */ if (fZ) goto L_00868660;
L_0086869c:; BB(0x0086869c);
    /* 0086869c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0086869e: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008686a0: cmp dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008686a2: jne 0x86868b */ if (!fZ) goto L_0086868b;
L_008686a4:; BB(0x008686a4);
    /* 008686a4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008686a7: je 0x8686c5 */ if (fZ) goto L_008686c5;
L_008686a9:; BB(0x008686a9);
    /* 008686a9: cmp dh, ch */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008686ab: jne 0x86868b */ if (!fZ) goto L_0086868b;
L_008686ad:; BB(0x008686ad);
    /* 008686ad: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008686b0: je 0x8686c5 */ if (fZ) goto L_008686c5;
L_008686b2:; BB(0x008686b2);
    /* 008686b2: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008686b8: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008686be: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008686c0: jne 0x86868b */ if (!fZ) goto L_0086868b;
L_008686c2:; BB(0x008686c2);
    /* 008686c2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
L_008686c5:; BB(0x008686c5);
    /* 008686c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008686c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008686c7: ret  */ FN_RET(0x00868610); r_esp += 4; return;
}

void f_008686c8(void) /* ___crtGetStringTypeA */
{
    FN_ENTER(0x008686c8);
    /* 008686c8: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008686ca: push 0x99a228 */ { u32 v = 0x99a228u; r_esp -= 4; W32(r_esp, v); }
    /* 008686cf: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8686d4u); f_0085e5ac();
    /* 008686d4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008686d6: cmp dword ptr [0xae7eb4], esi */ {  u32 a = R32((u32)(0xae7eb4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008686dc: jne 0x868713 */ if (!fZ) goto L_00868713;
L_008686de:; BB(0x008686de);
    /* 008686de: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 008686e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008686e2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008686e4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008686e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008686e6: push 0x9983dc */ { u32 v = 0x9983dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008686eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008686ec: call dword ptr [0x8f8254] */ { u32 t = R32((u32)(0x8f8254u)); r_esp -= 4; W32(r_esp, 0x8686f2u); call_ind(t); }
    /* 008686f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008686f4: je 0x8686fe */ if (fZ) goto L_008686fe;
L_008686f6:; BB(0x008686f6);
    /* 008686f6: mov dword ptr [0xae7eb4], edi */ W32((u32)(0xae7eb4u), r_edi);
    /* 008686fc: jmp 0x868713 */ goto L_00868713;
L_008686fe:; BB(0x008686fe);
    /* 008686fe: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x868704u); call_ind(t); }
    /* 00868704: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868707: jne 0x868713 */ if (!fZ) goto L_00868713;
L_00868709:; BB(0x00868709);
    /* 00868709: mov dword ptr [0xae7eb4], 2 */ W32((u32)(0xae7eb4u), 0x2u);
L_00868713:; BB(0x00868713);
    /* 00868713: mov eax, dword ptr [0xae7eb4] */ r_eax = R32((u32)(0xae7eb4u));
    /* 00868718: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086871b: je 0x86880b */ if (fZ) goto L_0086880b;
L_00868721:; BB(0x00868721);
    /* 00868721: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868723: je 0x86880b */ if (fZ) goto L_0086880b;
L_00868729:; BB(0x00868729);
    /* 00868729: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086872c: jne 0x868831 */ if (!fZ) goto L_00868831;
L_00868732:; BB(0x00868732);
    /* 00868732: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00868735: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00868738: cmp dword ptr [ebp + 0x18], esi */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086873b: jne 0x868745 */ if (!fZ) goto L_00868745;
L_0086873d:; BB(0x0086873d);
    /* 0086873d: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 00868742: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_00868745:; BB(0x00868745);
    /* 00868745: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868746: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868747: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086874a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086874d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086874f: cmp dword ptr [ebp + 0x20], esi */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868752: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00868755: lea eax, [eax*8 + 1] */ r_eax = (u32)(r_eax*8+0x1u);
    /* 0086875c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086875d: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868760: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x868766u); call_ind(t); }
    /* 00868766: mov edi, eax */ r_edi = r_eax;
    /* 00868768: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0086876b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086876d: je 0x868831 */ if (fZ) goto L_00868831;
L_00868773:; BB(0x00868773);
    /* 00868773: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00868777: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0086877a: mov eax, ebx */ r_eax = r_ebx;
    /* 0086877c: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086877f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00868782: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x868787u); f_00858020();
    /* 00868787: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086878a: mov esi, esp */ r_esi = r_esp;
    /* 0086878c: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0086878f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868790: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00868792: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868793: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x868798u); f_0085f580();
    /* 00868798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086879b: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086879f: jmp 0x8687b6 */ goto L_008687b6;
L_008687b6:; BB(0x008687b6);
    /* 008687b6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008687b8: jne 0x8687d1 */ if (!fZ) goto L_008687d1;
L_008687ba:; BB(0x008687ba);
    /* 008687ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008687bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008687bd: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x8687c2u); f_008587c7();
    /* 008687c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008687c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008687c4: mov esi, eax */ r_esi = r_eax;
    /* 008687c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008687c8: je 0x868831 */ if (fZ) goto L_00868831;
L_008687ca:; BB(0x008687ca);
    /* 008687ca: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_008687d1:; BB(0x008687d1);
    /* 008687d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008687d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008687d3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008687d6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008687d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008687db: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008687de: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x8687e4u); call_ind(t); }
    /* 008687e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008687e6: je 0x8687f9 */ if (fZ) goto L_008687f9;
L_008687e8:; BB(0x008687e8);
    /* 008687e8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008687eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008687ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008687ed: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008687f0: call dword ptr [0x8f8254] */ { u32 t = R32((u32)(0x8f8254u)); r_esp -= 4; W32(r_esp, 0x8687f6u); call_ind(t); }
    /* 008687f6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_008687f9:; BB(0x008687f9);
    /* 008687f9: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008687fd: je 0x868806 */ if (fZ) goto L_00868806;
L_008687ff:; BB(0x008687ff);
    /* 008687ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868800: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x868805u); f_00858882();
    /* 00868805: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00868806:; BB(0x00868806);
    /* 00868806: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00868809: jmp 0x868879 */ goto L_00868879;
L_0086880b:; BB(0x0086880b);
    /* 0086880b: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 0086880e: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868810: jne 0x868818 */ if (!fZ) goto L_00868818;
L_00868812:; BB(0x00868812);
    /* 00868812: mov ebx, dword ptr [0xae7e9c] */ r_ebx = R32((u32)(0xae7e9cu));
L_00868818:; BB(0x00868818);
    /* 00868818: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 0086881b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086881d: jne 0x868825 */ if (!fZ) goto L_00868825;
L_0086881f:; BB(0x0086881f);
    /* 0086881f: mov edi, dword ptr [0xae7eac] */ r_edi = R32((u32)(0xae7eacu));
L_00868825:; BB(0x00868825);
    /* 00868825: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868826: call 0x868c37 */ r_esp -= 4; W32(r_esp, 0x86882bu); f_00868c37();
    /* 0086882b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086882c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086882f: jne 0x868835 */ if (!fZ) goto L_00868835;
L_00868831:; BB(0x00868831);
    /* 00868831: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00868833: jmp 0x868879 */ goto L_00868879;
L_00868835:; BB(0x00868835);
    /* 00868835: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868837: je 0x868857 */ if (fZ) goto L_00868857;
L_00868839:; BB(0x00868839);
    /* 00868839: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086883b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086883d: lea ecx, [ebp + 0x10] */ r_ecx = (u32)(r_ebp+0x10u);
    /* 00868840: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00868841: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868845: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868846: call 0x868c7a */ r_esp -= 4; W32(r_esp, 0x86884bu); f_00868c7a();
    /* 0086884b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086884e: mov esi, eax */ r_esi = r_eax;
    /* 00868850: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868852: je 0x868831 */ if (fZ) goto L_00868831;
L_00868854:; BB(0x00868854);
    /* 00868854: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
L_00868857:; BB(0x00868857);
    /* 00868857: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086885a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086885d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868860: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868863: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868864: call dword ptr [0x8f8250] */ { u32 t = R32((u32)(0x8f8250u)); r_esp -= 4; W32(r_esp, 0x86886au); call_ind(t); }
    /* 0086886a: mov edi, eax */ r_edi = r_eax;
    /* 0086886c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086886e: je 0x868877 */ if (fZ) goto L_00868877;
L_00868870:; BB(0x00868870);
    /* 00868870: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868871: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x868876u); f_00858882();
    /* 00868876: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00868877:; BB(0x00868877);
    /* 00868877: mov eax, edi */ r_eax = r_edi;
L_00868879:; BB(0x00868879);
    /* 00868879: lea esp, [ebp - 0x38] */ r_esp = (u32)(r_ebp+0xffffffc8u);
    /* 0086887c: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x868881u); f_0085e5e7();
    /* 00868881: ret  */ FN_RET(0x008686c8); r_esp += 4; return;
}

void f_008687a1(void)
{
    FN_ENTER(0x008687a1);
    /* 008687a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008687a3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008687a4: ret  */ FN_RET(0x008687a1); r_esp += 4; return;
}

void f_008687a5(void)
{
    FN_ENTER(0x008687a5);
    /* 008687a5: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008687a8: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x8687adu); f_00865365();
    /* 008687ad: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008687af: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008687b3: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 008687b6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008687b8: jne 0x8687d1 */ if (!fZ) goto L_008687d1;
L_008687ba:; BB(0x008687ba);
    /* 008687ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008687bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008687bd: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x8687c2u); f_008587c7();
    /* 008687c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008687c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008687c4: mov esi, eax */ r_esi = r_eax;
    /* 008687c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008687c8: je 0x868831 */ if (fZ) goto L_00868831;
L_008687ca:; BB(0x008687ca);
    /* 008687ca: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_008687d1:; BB(0x008687d1);
    /* 008687d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008687d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008687d3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008687d6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008687d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008687db: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008687de: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x8687e4u); call_ind(t); }
    /* 008687e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008687e6: je 0x8687f9 */ if (fZ) goto L_008687f9;
L_008687e8:; BB(0x008687e8);
    /* 008687e8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008687eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008687ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008687ed: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008687f0: call dword ptr [0x8f8254] */ { u32 t = R32((u32)(0x8f8254u)); r_esp -= 4; W32(r_esp, 0x8687f6u); call_ind(t); }
    /* 008687f6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_008687f9:; BB(0x008687f9);
    /* 008687f9: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008687fd: je 0x868806 */ if (fZ) goto L_00868806;
L_008687ff:; BB(0x008687ff);
    /* 008687ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868800: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x868805u); f_00858882();
    /* 00868805: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00868806:; BB(0x00868806);
    /* 00868806: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00868809: jmp 0x868879 */ goto L_00868879;
L_00868831:; BB(0x00868831);
    /* 00868831: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00868833: jmp 0x868879 */ goto L_00868879;
L_00868879:; BB(0x00868879);
    /* 00868879: lea esp, [ebp - 0x38] */ r_esp = (u32)(r_ebp+0xffffffc8u);
    /* 0086887c: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x868881u); f_0085e5e7();
    /* 00868881: ret  */ FN_RET(0x008687a5); r_esp += 4; return;
}

void f_00868890(void) /* _strpbrk */
{
    FN_ENTER(0x00868890);
    /* 00868890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00868891: mov ebp, esp */ r_ebp = r_esp;
    /* 00868893: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868894: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00868896: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086889a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086889b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086889c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086889d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086889e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008688a1: lea ecx, [ecx] */ r_ecx = (u32)(r_ecx);
L_008688a4:; BB(0x008688a4);
    /* 008688a4: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008688a6: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 008688a8: je 0x8688b3 */ if (fZ) goto L_008688b3;
L_008688aa:; BB(0x008688aa);
    /* 008688aa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008688ad: bts dword ptr [esp], eax */ { u32 bo = r_eax; u32 ad = (u32)(r_esp) + (u32)(((i32)bo >> 5) * 4); u32 bit = bo & 31; u32 v = R32(ad); fC = (v >> bit) & 1; v |= 1u << bit; W32(ad, v); }
    /* 008688b1: jmp 0x8688a4 */ goto L_008688a4;
L_008688b3:; BB(0x008688b3);
    /* 008688b3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008688b6: mov edi, edi */ r_edi = r_edi;
L_008688b8:; BB(0x008688b8);
    /* 008688b8: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008688ba: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 008688bc: je 0x8688ca */ if (fZ) goto L_008688ca;
L_008688be:; BB(0x008688be);
    /* 008688be: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008688c1: bt dword ptr [esp], eax */ { u32 bo = r_eax; u32 ad = (u32)(r_esp) + (u32)(((i32)bo >> 5) * 4); u32 bit = bo & 31; u32 v = R32(ad); fC = (v >> bit) & 1;   }
    /* 008688c5: jae 0x8688b8 */ if (!fC) goto L_008688b8;
L_008688c7:; BB(0x008688c7);
    /* 008688c7: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
L_008688ca:; BB(0x008688ca);
    /* 008688ca: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008688cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008688ce: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008688cf: ret  */ FN_RET(0x00868890); r_esp += 4; return;
}

void f_0086896e(void)
{
    FN_ENTER(0x0086896e);
    /* 0086896e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00868970: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00868971: ret  */ FN_RET(0x0086896e); r_esp += 4; return;
}

void f_00868972(void)
{
    FN_ENTER(0x00868972);
    goto L_00868972;
L_00868965:; BB(0x00868965);
    /* 00868965: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00868969: jmp 0x868a76 */ goto L_00868a76;
L_00868972:; BB(0x00868972);
    /* 00868972: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00868975: jmp 0x868965 */ goto L_00868965;
L_00868a76:; BB(0x00868a76);
    /* 00868a76: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00868a78: call 0x85a043 */ r_esp -= 4; W32(r_esp, 0x868a7du); f_0085a043();
    /* 00868a7d: int3  */ UNSUP(0x00868a7d, "int3");
}

void f_00868a7e(void) /* ___crtInitCritSecNoSpinCount@8 */
{
    FN_ENTER(0x00868a7e);
    /* 00868a7e: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868a82: call dword ptr [0x8f81bc] */ { u32 t = R32((u32)(0x8f81bcu)); r_esp -= 4; W32(r_esp, 0x868a88u); call_ind(t); }
    /* 00868a88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00868a8a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00868a8b: ret 8 */ FN_RET(0x00868a7e); r_esp += 12; return;
}

void f_00868a8e(void) /* ___crtInitCritSecAndSpinCount */
{
    FN_ENTER(0x00868a8e);
    /* 00868a8e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00868a90: push 0x99a408 */ { u32 v = 0x99a408u; r_esp -= 4; W32(r_esp, v); }
    /* 00868a95: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x868a9au); f_0085e5ac();
    /* 00868a9a: mov eax, dword ptr [0xae7ee0] */ r_eax = R32((u32)(0xae7ee0u));
    /* 00868a9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868aa1: jne 0x868ada */ if (!fZ) goto L_00868ada;
L_00868aa3:; BB(0x00868aa3);
    /* 00868aa3: cmp dword ptr [0xae7a10], 1 */ {  u32 a = R32((u32)(0xae7a10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868aaa: je 0x868ad0 */ if (fZ) goto L_00868ad0;
L_00868aac:; BB(0x00868aac);
    /* 00868aac: push 0x998134 */ { u32 v = 0x998134u; r_esp -= 4; W32(r_esp, v); }
    /* 00868ab1: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x868ab7u); call_ind(t); }
    /* 00868ab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ab9: je 0x868ad0 */ if (fZ) goto L_00868ad0;
L_00868abb:; BB(0x00868abb);
    /* 00868abb: push 0x99a3dc */ { u32 v = 0x99a3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00868ac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868ac1: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x868ac7u); call_ind(t); }
    /* 00868ac7: mov dword ptr [0xae7ee0], eax */ W32((u32)(0xae7ee0u), r_eax);
    /* 00868acc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ace: jne 0x868ada */ if (!fZ) goto L_00868ada;
L_00868ad0:; BB(0x00868ad0);
    /* 00868ad0: mov eax, 0x868a7e */ r_eax = 0x868a7eu;
    /* 00868ad5: mov dword ptr [0xae7ee0], eax */ W32((u32)(0xae7ee0u), r_eax);
L_00868ada:; BB(0x00868ada);
    /* 00868ada: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00868ade: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868ae1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868ae4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x868ae6u); call_ind(t); }
    /* 00868ae6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00868ae9: jmp 0x868b0f */ goto L_00868b0f;
L_00868b0f:; BB(0x00868b0f);
    /* 00868b0f: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00868b13: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x868b18u); f_0085e5e7();
    /* 00868b18: ret  */ FN_RET(0x00868a8e); r_esp += 4; return;
}

void f_00868aeb(void)
{
    FN_ENTER(0x00868aeb);
    /* 00868aeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00868aee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00868af0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00868af2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00868af5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00868af7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00868af8: ret  */ FN_RET(0x00868aeb); r_esp += 4; return;
}

void f_00868af9(void)
{
    FN_ENTER(0x00868af9);
    /* 00868af9: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00868afc: cmp dword ptr [ebp - 0x1c], 0xc0000017 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xc0000017u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868b03: jne 0x868b0d */ if (!fZ) goto L_00868b0d;
L_00868b05:; BB(0x00868b05);
    /* 00868b05: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00868b07: call dword ptr [0x8f8228] */ { u32 t = R32((u32)(0x8f8228u)); r_esp -= 4; W32(r_esp, 0x868b0du); call_ind(t); }
L_00868b0d:; BB(0x00868b0d);
    /* 00868b0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00868b0f: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00868b13: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x868b18u); f_0085e5e7();
    /* 00868b18: ret  */ FN_RET(0x00868af9); r_esp += 4; return;
}

void f_00868c29(void) /* _iswspace */
{
    FN_ENTER(0x00868c29);
    /* 00868c29: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00868c2b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868c2f: call 0x858ba3 */ r_esp -= 4; W32(r_esp, 0x868c34u); f_00858ba3();
    /* 00868c34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868c35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868c36: ret  */ FN_RET(0x00868c29); r_esp += 4; return;
}

void f_00868c37(void) /* ___ansicp */
{
    FN_ENTER(0x00868c37);
    /* 00868c37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00868c38: mov ebp, esp */ r_ebp = r_esp;
    /* 00868c3a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00868c3d: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00868c42: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00868c44: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00868c47: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00868c4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868c4b: push 0x1004 */ { u32 v = 0x1004u; r_esp -= 4; W32(r_esp, v); }
    /* 00868c50: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868c53: mov byte ptr [ebp - 6], 0 */ W8((u32)(r_ebp+0xfffffffau), 0x0u);
    /* 00868c57: call dword ptr [0x8f82bc] */ { u32 t = R32((u32)(0x8f82bcu)); r_esp -= 4; W32(r_esp, 0x868c5du); call_ind(t); }
    /* 00868c5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868c5f: jne 0x868c66 */ if (!fZ) goto L_00868c66;
L_00868c61:; BB(0x00868c61);
    /* 00868c61: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00868c64: jmp 0x868c70 */ goto L_00868c70;
L_00868c66:; BB(0x00868c66);
    /* 00868c66: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00868c69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868c6a: call 0x85a072 */ r_esp -= 4; W32(r_esp, 0x868c6fu); f_0085a072();
    /* 00868c6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00868c70:; BB(0x00868c70);
    /* 00868c70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00868c73: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x868c78u); f_0085e419();
    /* 00868c78: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00868c79: ret  */ FN_RET(0x00868c37); r_esp += 4; return;
}

void f_00868c7a(void) /* ___convertcp */
{
    FN_ENTER(0x00868c7a);
    /* 00868c7a: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00868c7c: push 0x99a418 */ { u32 v = 0x99a418u; r_esp -= 4; W32(r_esp, v); }
    /* 00868c81: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x868c86u); f_0085e5ac();
    /* 00868c86: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00868c8b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00868c8e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00868c90: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00868c93: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 00868c96: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00868c99: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00868c9b: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 00868c9e: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 00868ca1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00868ca4: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ca7: je 0x868e20 */ if (fZ) goto L_00868e20;
L_00868cad:; BB(0x00868cad);
    /* 00868cad: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00868cb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00868cb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868cb2: mov esi, dword ptr [0x8f82b4] */ r_esi = R32((u32)(0x8f82b4u));
    /* 00868cb8: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x868cbau); call_ind(t); }
    /* 00868cba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868cbc: je 0x868cde */ if (fZ) goto L_00868cde;
L_00868cbe:; BB(0x00868cbe);
    /* 00868cbe: cmp dword ptr [ebp - 0x30], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868cc2: jne 0x868cde */ if (!fZ) goto L_00868cde;
L_00868cc4:; BB(0x00868cc4);
    /* 00868cc4: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00868cc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868cc8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868ccb: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x868ccdu); call_ind(t); }
    /* 00868ccd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ccf: je 0x868cde */ if (fZ) goto L_00868cde;
L_00868cd1:; BB(0x00868cd1);
    /* 00868cd1: cmp dword ptr [ebp - 0x30], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868cd5: jne 0x868cde */ if (!fZ) goto L_00868cde;
L_00868cd7:; BB(0x00868cd7);
    /* 00868cd7: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_00868cde:; BB(0x00868cde);
    /* 00868cde: cmp dword ptr [ebp - 0x3c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ce1: je 0x868cfd */ if (fZ) goto L_00868cfd;
L_00868ce3:; BB(0x00868ce3);
    /* 00868ce3: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ce6: je 0x868cec */ if (fZ) goto L_00868cec;
L_00868ce8:; BB(0x00868ce8);
    /* 00868ce8: mov esi, ebx */ r_esi = r_ebx;
    /* 00868cea: jmp 0x868cf8 */ goto L_00868cf8;
L_00868cec:; BB(0x00868cec);
    /* 00868cec: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868cef: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x868cf4u); f_0085d760();
    /* 00868cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868cf5: mov esi, eax */ r_esi = r_eax;
    /* 00868cf7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00868cf8:; BB(0x00868cf8);
    /* 00868cf8: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00868cfb: jmp 0x868d00 */ goto L_00868d00;
L_00868cfd:; BB(0x00868cfd);
    /* 00868cfd: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
L_00868d00:; BB(0x00868d00);
    /* 00868d00: cmp dword ptr [ebp - 0x3c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868d03: jne 0x868d1f */ if (!fZ) goto L_00868d1f;
L_00868d05:; BB(0x00868d05);
    /* 00868d05: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868d06: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868d07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868d08: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868d0b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00868d0d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868d10: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x868d16u); call_ind(t); }
    /* 00868d16: mov esi, eax */ r_esi = r_eax;
    /* 00868d18: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00868d1b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868d1d: je 0x868d77 */ if (fZ) goto L_00868d77;
L_00868d1f:; BB(0x00868d1f);
    /* 00868d1f: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 00868d22: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00868d25: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00868d28: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00868d2b: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x868d30u); f_00858020();
    /* 00868d30: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00868d33: mov ebx, esp */ r_ebx = r_esp;
    /* 00868d35: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00868d38: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00868d3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868d3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868d3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868d3e: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x868d43u); f_0085f580();
    /* 00868d43: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00868d46: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00868d4a: jmp 0x868d63 */ goto L_00868d63;
L_00868d63:; BB(0x00868d63);
    /* 00868d63: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868d65: jne 0x868d85 */ if (!fZ) goto L_00868d85;
L_00868d67:; BB(0x00868d67);
    /* 00868d67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868d68: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00868d6a: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x868d6fu); f_008587c7();
    /* 00868d6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868d70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868d71: mov ebx, eax */ r_ebx = r_eax;
    /* 00868d73: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868d75: jne 0x868d7e */ if (!fZ) goto L_00868d7e;
L_00868d77:; BB(0x00868d77);
    /* 00868d77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00868d79: jmp 0x868e32 */ goto L_00868e32;
L_00868d7e:; BB(0x00868d7e);
    /* 00868d7e: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_00868d85:; BB(0x00868d85);
    /* 00868d85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868d86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868d87: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868d8a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868d8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00868d8f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868d92: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x868d98u); call_ind(t); }
    /* 00868d98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868d9a: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868da0:; BB(0x00868da0);
    /* 00868da0: cmp dword ptr [ebp + 0x18], edi */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868da3: je 0x868dc5 */ if (fZ) goto L_00868dc5;
L_00868da5:; BB(0x00868da5);
    /* 00868da5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868da6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868da7: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868daa: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868dad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868daf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868db0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868db3: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x868db9u); call_ind(t); }
    /* 00868db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868dbb: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868dbd:; BB(0x00868dbd);
    /* 00868dbd: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00868dc0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00868dc3: jmp 0x868e23 */ goto L_00868e23;
L_00868dc5:; BB(0x00868dc5);
    /* 00868dc5: cmp dword ptr [ebp - 0x3c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868dc8: jne 0x868de0 */ if (!fZ) goto L_00868de0;
L_00868dca:; BB(0x00868dca);
    /* 00868dca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dcb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dcd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868dd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dd1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868dd4: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x868ddau); call_ind(t); }
    /* 00868dda: mov esi, eax */ r_esi = r_eax;
    /* 00868ddc: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868dde: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868de0:; BB(0x00868de0);
    /* 00868de0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868de1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00868de3: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x868de8u); f_008587c7();
    /* 00868de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868de9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868dea: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00868ded: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868def: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868df1:; BB(0x00868df1);
    /* 00868df1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868df5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868df7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868dfb: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x868e01u); call_ind(t); }
    /* 00868e01: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868e03: jne 0x868e13 */ if (!fZ) goto L_00868e13;
L_00868e05:; BB(0x00868e05);
    /* 00868e05: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868e08: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x868e0du); f_00858882();
    /* 00868e0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868e0e: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00868e11: jmp 0x868e23 */ goto L_00868e23;
L_00868e13:; BB(0x00868e13);
    /* 00868e13: cmp dword ptr [ebp - 0x40], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868e17: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868e19:; BB(0x00868e19);
    /* 00868e19: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00868e1c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00868e1e: jmp 0x868e23 */ goto L_00868e23;
L_00868e20:; BB(0x00868e20);
    /* 00868e20: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
L_00868e23:; BB(0x00868e23);
    /* 00868e23: cmp dword ptr [ebp - 0x44], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868e26: je 0x868e2f */ if (fZ) goto L_00868e2f;
L_00868e28:; BB(0x00868e28);
    /* 00868e28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868e29: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x868e2eu); f_00858882();
    /* 00868e2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00868e2f:; BB(0x00868e2f);
    /* 00868e2f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_00868e32:; BB(0x00868e32);
    /* 00868e32: lea esp, [ebp - 0x54] */ r_esp = (u32)(r_ebp+0xffffffacu);
    /* 00868e35: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00868e38: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x868e3du); f_0085e419();
    /* 00868e3d: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x868e42u); f_0085e5e7();
    /* 00868e42: ret  */ FN_RET(0x00868c7a); r_esp += 4; return;
}

void f_00868d4c(void)
{
    FN_ENTER(0x00868d4c);
    /* 00868d4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00868d4e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00868d4f: ret  */ FN_RET(0x00868d4c); r_esp += 4; return;
}

void f_00868d50(void)
{
    FN_ENTER(0x00868d50);
    /* 00868d50: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00868d53: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x868d58u); f_00865365();
    /* 00868d58: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00868d5a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00868d5c: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00868d60: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00868d63: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868d65: jne 0x868d85 */ if (!fZ) goto L_00868d85;
L_00868d67:; BB(0x00868d67);
    /* 00868d67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868d68: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00868d6a: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x868d6fu); f_008587c7();
    /* 00868d6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868d70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868d71: mov ebx, eax */ r_ebx = r_eax;
    /* 00868d73: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868d75: jne 0x868d7e */ if (!fZ) goto L_00868d7e;
L_00868d77:; BB(0x00868d77);
    /* 00868d77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00868d79: jmp 0x868e32 */ goto L_00868e32;
L_00868d7e:; BB(0x00868d7e);
    /* 00868d7e: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_00868d85:; BB(0x00868d85);
    /* 00868d85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868d86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868d87: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868d8a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868d8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00868d8f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868d92: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x868d98u); call_ind(t); }
    /* 00868d98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868d9a: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868da0:; BB(0x00868da0);
    /* 00868da0: cmp dword ptr [ebp + 0x18], edi */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868da3: je 0x868dc5 */ if (fZ) goto L_00868dc5;
L_00868da5:; BB(0x00868da5);
    /* 00868da5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868da6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868da7: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868daa: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868dad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868daf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868db0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868db3: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x868db9u); call_ind(t); }
    /* 00868db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868dbb: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868dbd:; BB(0x00868dbd);
    /* 00868dbd: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00868dc0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00868dc3: jmp 0x868e23 */ goto L_00868e23;
L_00868dc5:; BB(0x00868dc5);
    /* 00868dc5: cmp dword ptr [ebp - 0x3c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868dc8: jne 0x868de0 */ if (!fZ) goto L_00868de0;
L_00868dca:; BB(0x00868dca);
    /* 00868dca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dcb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dcd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868dd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868dd1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868dd4: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x868ddau); call_ind(t); }
    /* 00868dda: mov esi, eax */ r_esi = r_eax;
    /* 00868ddc: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868dde: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868de0:; BB(0x00868de0);
    /* 00868de0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868de1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00868de3: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x868de8u); f_008587c7();
    /* 00868de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868de9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868dea: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00868ded: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868def: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868df1:; BB(0x00868df1);
    /* 00868df1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868df5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868df7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868df8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868dfb: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x868e01u); call_ind(t); }
    /* 00868e01: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868e03: jne 0x868e13 */ if (!fZ) goto L_00868e13;
L_00868e05:; BB(0x00868e05);
    /* 00868e05: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868e08: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x868e0du); f_00858882();
    /* 00868e0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868e0e: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00868e11: jmp 0x868e23 */ goto L_00868e23;
L_00868e13:; BB(0x00868e13);
    /* 00868e13: cmp dword ptr [ebp - 0x40], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868e17: je 0x868e23 */ if (fZ) goto L_00868e23;
L_00868e19:; BB(0x00868e19);
    /* 00868e19: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00868e1c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00868e1e: jmp 0x868e23 */ goto L_00868e23;
L_00868e23:; BB(0x00868e23);
    /* 00868e23: cmp dword ptr [ebp - 0x44], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868e26: je 0x868e2f */ if (fZ) goto L_00868e2f;
L_00868e28:; BB(0x00868e28);
    /* 00868e28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868e29: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x868e2eu); f_00858882();
    /* 00868e2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00868e2f:; BB(0x00868e2f);
    /* 00868e2f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_00868e32:; BB(0x00868e32);
    /* 00868e32: lea esp, [ebp - 0x54] */ r_esp = (u32)(r_ebp+0xffffffacu);
    /* 00868e35: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00868e38: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x868e3du); f_0085e419();
    /* 00868e3d: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x868e42u); f_0085e5e7();
    /* 00868e42: ret  */ FN_RET(0x00868d50); r_esp += 4; return;
}

void f_00868e50(void) /* _strrchr */
{
    FN_ENTER(0x00868e50);
    /* 00868e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00868e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00868e53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868e54: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00868e57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00868e59: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00868e5c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 00868e5e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00868e61: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00868e63: sub edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00868e66: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00868e69: std  */ rt_df = 1;
    /* 00868e6a: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 00868e6c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00868e6f: cmp byte ptr [edi], al */ {  u32 a = R8((u32)(r_edi)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00868e71: je 0x868e77 */ if (fZ) goto L_00868e77;
L_00868e73:; BB(0x00868e73);
    /* 00868e73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00868e75: jmp 0x868e79 */ goto L_00868e79;
L_00868e77:; BB(0x00868e77);
    /* 00868e77: mov eax, edi */ r_eax = r_edi;
L_00868e79:; BB(0x00868e79);
    /* 00868e79: cld  */ rt_df = 0;
    /* 00868e7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00868e7b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00868e7c: ret  */ FN_RET(0x00868e50); r_esp += 4; return;
}

