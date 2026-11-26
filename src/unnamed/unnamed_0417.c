#include "protos.h"

void f_00417014(void) /* sub_417014 */
{
    FN_ENTER(0x00417014);
    /* 00417014: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417015: mov ebp, esp */ r_ebp = r_esp;
    /* 00417017: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417019: push 0x8cd1b8 */ { u32 v = 0x8cd1b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041701e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417025: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041702c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041702f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417032: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00417035: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00417038: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041703b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041703e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417041: mov edx, dword ptr [ecx + 0x81c] */ r_edx = R32((u32)(r_ecx+0x81cu));
    /* 00417047: mov dword ptr [ecx], 0xaf35a0 */ W32((u32)(r_ecx), 0xaf35a0u);
    /* 0041704d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041704f: je 0x41706b */ if (fZ) goto L_0041706b;
L_00417051:; BB(0x00417051);
    /* 00417051: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417054: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00417058: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041705d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00417061: mov dword ptr [ecx + 0x81c], 0 */ W32((u32)(r_ecx+0x81cu), 0x0u);
L_0041706b:; BB(0x0041706b);
    /* 0041706b: mov edx, dword ptr [ecx + 0x820] */ r_edx = R32((u32)(r_ecx+0x820u));
    /* 00417071: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417073: je 0x41708f */ if (fZ) goto L_0041708f;
L_00417075:; BB(0x00417075);
    /* 00417075: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417078: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0041707c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00417081: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00417085: mov dword ptr [ecx + 0x820], 0 */ W32((u32)(r_ecx+0x820u), 0x0u);
L_0041708f:; BB(0x0041708f);
    /* 0041708f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417096: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x41709bu); f_008171e8();
    /* 0041709b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041709e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004170a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004170a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004170a8: ret  */ FN_RET(0x00417014); r_esp += 4; return;
}

void f_004170ac(void) /* sub_4170AC */
{
    FN_ENTER(0x004170ac);
    /* 004170ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004170ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004170af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004170b1: push 0x8cd1ee */ { u32 v = 0x8cd1eeu; r_esp -= 4; W32(r_esp, v); }
    /* 004170b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004170bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004170bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004170c4: sub esp, 0x430 */ {  u32 a = r_esp; u32 b = 0x430u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004170ca: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004170cd: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004170d0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004170d3: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004170d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004170d9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004170dc: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4170e1u); f_008193cc();
    /* 004170e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004170e8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004170eb: mov dword ptr [edi], 0xaf35a0 */ W32((u32)(r_edi), 0xaf35a0u);
    /* 004170f1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004170f3: lea edx, [ebp - 0x43c] */ r_edx = (u32)(r_ebp+0xfffffbc4u);
    /* 004170f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004170fa: push 0x8fb03c */ { u32 v = 0x8fb03cu; r_esp -= 4; W32(r_esp, v); }
    /* 004170ff: call 0x5b9780 */ r_esp -= 4; W32(r_esp, 0x417104u); f_005b9780();
    /* 00417104: mov ebx, eax */ r_ebx = r_eax;
    /* 00417106: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417109: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041710b: je 0x41727d */ if (fZ) goto L_0041727d;
L_00417111:; BB(0x00417111);
    /* 00417111: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00417116: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00417119: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041711a: call 0x85838c */ r_esp -= 4; W32(r_esp, 0x41711fu); f_0085838c();
    /* 0041711f: mov esi, eax */ r_esi = r_eax;
    /* 00417121: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417124: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417126: je 0x417270 */ if (fZ) goto L_00417270;
L_0041712c:; BB(0x0041712c);
    /* 0041712c: lea edx, [ebp - 0x438] */ r_edx = (u32)(r_ebp+0xfffffbc8u);
    /* 00417132: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 00417137: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417139: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041713a: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x41713fu); f_0086b688();
    /* 0041713f: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 00417145: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0041714a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041714c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041714d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x417152u); f_0086b688();
    /* 00417152: lea edx, [ebp - 0x12c] */ r_edx = (u32)(r_ebp+0xfffffed4u);
    /* 00417158: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0041715d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041715f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417160: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x417165u); f_0086b688();
    /* 00417165: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0041716c: lea eax, [ebp - 0x234] */ r_eax = (u32)(r_ebp+0xfffffdccu);
    /* 00417172: lea ecx, [ebp - 0x230] */ r_ecx = (u32)(r_ebp+0xfffffdd0u);
    /* 00417178: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0041717b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041717c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041717d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041717e: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 00417184: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417185: lea edx, [ebp - 0x2b8] */ r_edx = (u32)(r_ebp+0xfffffd48u);
    /* 0041718b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041718c: lea edx, [ebp - 0x12c] */ r_edx = (u32)(r_ebp+0xfffffed4u);
    /* 00417192: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417193: lea edx, [ebp - 0x438] */ r_edx = (u32)(r_ebp+0xfffffbc8u);
    /* 00417199: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041719a: push 0x8fb04c */ { u32 v = 0x8fb04cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041719f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004171a0: call 0x858431 */ r_esp -= 4; W32(r_esp, 0x4171a5u); f_00858431();
    /* 004171a5: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004171a8: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004171ab: jge 0x4171b4 */ if ((fS==fO)) goto L_004171b4;
L_004171ad:; BB(0x004171ad);
    /* 004171ad: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004171b4:; BB(0x004171b4);
    /* 004171b4: call 0x708514 */ r_esp -= 4; W32(r_esp, 0x4171b9u); f_00708514();
    /* 004171b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004171bb: je 0x4171c7 */ if (fZ) goto L_004171c7;
L_004171bd:; BB(0x004171bd);
    /* 004171bd: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004171c0: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004171c3: je 0x4171ce */ if (fZ) goto L_004171ce;
L_004171c5:; BB(0x004171c5);
    /* 004171c5: jmp 0x41723b */ goto L_0041723b;
L_004171c7:; BB(0x004171c7);
    /* 004171c7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004171ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004171cc: jne 0x41723b */ if (!fZ) goto L_0041723b;
L_004171ce:; BB(0x004171ce);
    /* 004171ce: lea ecx, [ebp - 0x2b4] */ r_ecx = (u32)(r_ebp+0xfffffd4cu);
    /* 004171d4: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 004171da: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004171df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004171e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004171e1: call 0x858618 */ r_esp -= 4; W32(r_esp, 0x4171e6u); f_00858618();
    /* 004171e6: lea ecx, [ebp - 0x338] */ r_ecx = (u32)(r_ebp+0xfffffcc8u);
    /* 004171ec: lea edx, [ebp - 0x12c] */ r_edx = (u32)(r_ebp+0xfffffed4u);
    /* 004171f2: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004171f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004171f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004171f9: call 0x858618 */ r_esp -= 4; W32(r_esp, 0x4171feu); f_00858618();
    /* 004171fe: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417201: mov eax, edi */ r_eax = r_edi;
    /* 00417203: lea esi, [ebp - 0x438] */ r_esi = (u32)(r_ebp+0xfffffbc8u);
    /* 00417209: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0041720c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041720e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417210: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417212: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417214: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417216: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417218: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041721a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041721c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041721e: lea edi, [edx + edx + 0xa3b260] */ r_edi = (u32)(r_edx+r_edx+0xa3b260u);
    /* 00417225: mov ecx, 0x20c */ r_ecx = 0x20cu;
    /* 0041722a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041722b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0041722e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00417230: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417231: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00417234: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00417236: mov edi, eax */ r_edi = r_eax;
    /* 00417238: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0041723b:; BB(0x0041723b);
    /* 0041723b: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00417240: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417242: call 0x85838c */ r_esp -= 4; W32(r_esp, 0x417247u); f_0085838c();
    /* 00417247: mov esi, eax */ r_esi = r_eax;
    /* 00417249: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041724c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041724e: je 0x417270 */ if (fZ) goto L_00417270;
L_00417250:; BB(0x00417250);
    /* 00417250: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00417251: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x417256u); f_00858009();
    /* 00417256: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00417259: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041725a: push 0x8fb078 */ { u32 v = 0x8fb078u; r_esp -= 4; W32(r_esp, v); }
    /* 0041725f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00417260: call 0x858643 */ r_esp -= 4; W32(r_esp, 0x417265u); f_00858643();
    /* 00417265: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417268: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041726a: jne 0x41712c */ if (!fZ) goto L_0041712c;
L_00417270:; BB(0x00417270);
    /* 00417270: mov dword ptr [0xa43660], edi */ W32((u32)(0xa43660u), r_edi);
    /* 00417276: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00417277: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x41727cu); f_0082e960();
    /* 0041727c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0041727d:; BB(0x0041727d);
    /* 0041727d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00417284: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 00417289: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41728eu); f_005caba4();
    /* 0041728e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041728f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00417292: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417294: je 0x4172b7 */ if (fZ) goto L_004172b7;
L_00417296:; BB(0x00417296);
    /* 00417296: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0041729d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004172a4: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004172a6: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004172a9: mov ecx, eax */ r_ecx = r_eax;
    /* 004172ab: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x4172b0u); f_00415154();
    /* 004172b0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004172b7:; BB(0x004172b7);
    /* 004172b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004172be: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004172c1: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 004172c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004172c8: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004172cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004172cc: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x4172d1u); f_0086b688();
    /* 004172d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004172d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004172d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004172d9: mov dword ptr [ecx + 0x81c], eax */ W32((u32)(r_ecx+0x81cu), r_eax);
    /* 004172df: mov dword ptr [ecx + 0x820], eax */ W32((u32)(r_ecx+0x820u), r_eax);
    /* 004172e5: call 0x417390 */ r_esp -= 4; W32(r_esp, 0x4172eau); f_00417390();
    /* 004172ea: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004172ed: mov dword ptr [edx + 0x81c], eax */ W32((u32)(r_edx+0x81cu), r_eax);
    /* 004172f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004172f5: je 0x41734e */ if (fZ) goto L_0041734e;
L_004172f7:; BB(0x004172f7);
    /* 004172f7: mov edx, dword ptr [0xa43660] */ r_edx = R32((u32)(0xa43660u));
    /* 004172fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004172ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00417301: jbe 0x41734e */ if ((fC||fZ)) goto L_0041734e;
L_00417303:; BB(0x00417303);
    /* 00417303: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00417306: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417308: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041730a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041730c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041730e: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417310: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417312: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417314: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00417316: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417318: mov ecx, eax */ r_ecx = r_eax;
    /* 0041731a: lea esi, [edx + edx + 0xa3b260] */ r_esi = (u32)(r_edx+r_edx+0xa3b260u);
    /* 00417321: push dword ptr [esi + 0x208] */ { u32 v = R32((u32)(r_esi+0x208u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417327: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00417329: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041732a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x41732fu); f_00735c90();
    /* 0041732f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00417332: cmp ebx, dword ptr [0xa43660] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa43660u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00417338: jae 0x417345 */ if (!fC) goto L_00417345;
L_0041733a:; BB(0x0041733a);
    /* 0041733a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041733d: mov eax, dword ptr [eax + 0x81c] */ r_eax = R32((u32)(r_eax+0x81cu));
    /* 00417343: jmp 0x417303 */ goto L_00417303;
L_00417345:; BB(0x00417345);
    /* 00417345: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417348: mov eax, dword ptr [eax + 0x81c] */ r_eax = R32((u32)(r_eax+0x81cu));
L_0041734e:; BB(0x0041734e);
    /* 0041734e: push dword ptr [0xa43668] */ { u32 v = R32((u32)(0xa43668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417354: mov ecx, eax */ r_ecx = r_eax;
    /* 00417356: push dword ptr [0xa43664] */ { u32 v = R32((u32)(0xa43664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041735c: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x417361u); f_007361d0();
    /* 00417361: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417364: call 0x417414 */ r_esp -= 4; W32(r_esp, 0x417369u); f_00417414();
    /* 00417369: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041736c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041736f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00417372: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417375: mov dword ptr [edx + 0x820], eax */ W32((u32)(r_edx+0x820u), r_eax);
    /* 0041737b: mov eax, edx */ r_eax = r_edx;
    /* 0041737d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417380: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00417387: mov esp, ebp */ r_esp = r_ebp;
    /* 00417389: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041738a: ret 4 */ FN_RET(0x004170ac); r_esp += 8; return;
}

void f_00417367(void)
{
    FN_ENTER(0x00417367);
    /* 00417367: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00417369: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041736c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041736f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00417372: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417375: mov dword ptr [edx + 0x820], eax */ W32((u32)(r_edx+0x820u), r_eax);
    /* 0041737b: mov eax, edx */ r_eax = r_edx;
    /* 0041737d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417380: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00417387: mov esp, ebp */ r_esp = r_ebp;
    /* 00417389: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041738a: ret 4 */ FN_RET(0x00417367); r_esp += 8; return;
}

void f_00417390(void) /* sub_417390 */
{
    FN_ENTER(0x00417390);
    /* 00417390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417391: movzx eax, byte ptr [0xa3b220] */ r_eax = (u32)R8((u32)(0xa3b220u));
    /* 00417398: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041739a: jne 0x4173b8 */ if (!fZ) goto L_004173b8;
L_0041739c:; BB(0x0041739c);
    /* 0041739c: mov dword ptr [0xa3b224], 0x41a00000 */ W32((u32)(0xa3b224u), 0x41a00000u);
    /* 004173a6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004173a9: mov byte ptr [0xa3b220], al */ W8((u32)(0xa3b220u), (u8)r_eax);
    /* 004173ae: mov dword ptr [0xa3b228], 0x43020000 */ W32((u32)(0xa3b228u), 0x43020000u);
L_004173b8:; BB(0x004173b8);
    /* 004173b8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004173ba: jne 0x4173da */ if (!fZ) goto L_004173da;
L_004173bc:; BB(0x004173bc);
    /* 004173bc: mov dword ptr [0xa3b22c], 0x43960000 */ W32((u32)(0xa3b22cu), 0x43960000u);
    /* 004173c6: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004173cb: mov byte ptr [0xa3b220], al */ W8((u32)(0xa3b220u), (u8)r_eax);
    /* 004173d0: mov dword ptr [0xa3b230], 0x43a50000 */ W32((u32)(0xa3b230u), 0x43a50000u);
L_004173da:; BB(0x004173da);
    /* 004173da: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 004173df: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x4173e4u); f_0079317c();
    /* 004173e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004173e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004173e7: push dword ptr [0xa43660] */ { u32 v = R32((u32)(0xa43660u)); r_esp -= 4; W32(r_esp, v); }
    /* 004173ed: push 0xa3b224 */ { u32 v = 0xa3b224u; r_esp -= 4; W32(r_esp, v); }
    /* 004173f2: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x4173f7u); f_0073566c();
    /* 004173f7: mov ebp, eax */ r_ebp = r_eax;
    /* 004173f9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004173fc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004173fe: jne 0x417404 */ if (!fZ) goto L_00417404;
L_00417400:; BB(0x00417400);
    /* 00417400: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417403: ret  */ FN_RET(0x00417390); r_esp += 4; return;
L_00417404:; BB(0x00417404);
    /* 00417404: push 0xa3b22c */ { u32 v = 0xa3b22cu; r_esp -= 4; W32(r_esp, v); }
    /* 00417409: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041740b: call 0x712c14 */ r_esp -= 4; W32(r_esp, 0x417410u); f_00712c14();
    /* 00417410: mov eax, ebp */ r_eax = r_ebp;
    /* 00417412: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417413: ret  */ FN_RET(0x00417390); r_esp += 4; return;
}

void f_00417414(void) /* sub_417414 */
{
    FN_ENTER(0x00417414);
    /* 00417414: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417415: movzx eax, byte ptr [0xa3b234] */ r_eax = (u32)R8((u32)(0xa3b234u));
    /* 0041741c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041741e: jne 0x41743c */ if (!fZ) goto L_0041743c;
L_00417420:; BB(0x00417420);
    /* 00417420: mov dword ptr [0xa3b238], 0x43a50000 */ W32((u32)(0xa3b238u), 0x43a50000u);
    /* 0041742a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041742d: mov byte ptr [0xa3b234], al */ W8((u32)(0xa3b234u), (u8)r_eax);
    /* 00417432: mov dword ptr [0xa3b23c], 0x438e8000 */ W32((u32)(0xa3b23cu), 0x438e8000u);
L_0041743c:; BB(0x0041743c);
    /* 0041743c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041743e: jne 0x41745e */ if (!fZ) goto L_0041745e;
L_00417440:; BB(0x00417440);
    /* 00417440: mov dword ptr [0xa3b240], 0x43960000 */ W32((u32)(0xa3b240u), 0x43960000u);
    /* 0041744a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041744f: mov byte ptr [0xa3b234], al */ W8((u32)(0xa3b234u), (u8)r_eax);
    /* 00417454: mov dword ptr [0xa3b244], 0x432f0000 */ W32((u32)(0xa3b244u), 0x432f0000u);
L_0041745e:; BB(0x0041745e);
    /* 0041745e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417460: push 0xa3b240 */ { u32 v = 0xa3b240u; r_esp -= 4; W32(r_esp, v); }
    /* 00417465: push 0xa3b238 */ { u32 v = 0xa3b238u; r_esp -= 4; W32(r_esp, v); }
    /* 0041746a: call 0x73b698 */ r_esp -= 4; W32(r_esp, 0x41746fu); f_0073b698();
    /* 0041746f: mov ebp, eax */ r_ebp = r_eax;
    /* 00417471: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417474: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417476: je 0x417498 */ if (fZ) goto L_00417498;
L_00417478:; BB(0x00417478);
    /* 00417478: push 0x17f */ { u32 v = 0x17fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041747d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x417482u); f_0079317c();
    /* 00417482: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417483: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417485: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417486: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00417488: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x41748du); f_0073ae38();
    /* 0041748d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041748f: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x417494u); f_0073b0f0();
    /* 00417494: mov eax, ebp */ r_eax = r_ebp;
    /* 00417496: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417497: ret  */ FN_RET(0x00417414); r_esp += 4; return;
L_00417498:; BB(0x00417498);
    /* 00417498: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041749a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041749b: ret  */ FN_RET(0x00417414); r_esp += 4; return;
}

void f_0041749c(void) /* sub_41749C */
{
    FN_ENTER(0x0041749c);
    /* 0041749c: mov dword ptr [0xa43664], 0x43960000 */ W32((u32)(0xa43664u), 0x43960000u);
    /* 004174a6: mov dword ptr [0xa43668], 0x43a50000 */ W32((u32)(0xa43668u), 0x43a50000u);
    /* 004174b0: ret  */ FN_RET(0x0041749c); r_esp += 4; return;
}

void f_004174b4(void) /* sub_4174B4 */
{
    FN_ENTER(0x004174b4);
    /* 004174b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004174b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004174b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004174b9: call 0x4174d8 */ r_esp -= 4; W32(r_esp, 0x4174beu); f_004174d8();
    /* 004174be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004174c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004174c4: jne 0x4174ca */ if (!fZ) goto L_004174ca;
L_004174c6:; BB(0x004174c6);
    /* 004174c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004174c7: ret 4 */ FN_RET(0x004174b4); r_esp += 8; return;
L_004174ca:; BB(0x004174ca);
    /* 004174ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004174cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4174d0u); f_005c2f74();
    /* 004174d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004174d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004174d2: ret 4 */ FN_RET(0x004174b4); r_esp += 8; return;
}

void f_004174d8(void) /* sub_4174D8 */
{
    FN_ENTER(0x004174d8);
    /* 004174d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004174d9: mov ebp, esp */ r_ebp = r_esp;
    /* 004174db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004174dd: push 0x8cd208 */ { u32 v = 0x8cd208u; r_esp -= 4; W32(r_esp, v); }
    /* 004174e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004174e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004174e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004174f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004174f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004174f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004174f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004174fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004174ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00417502: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417505: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00417508: mov dword ptr [ecx], 0xaf3610 */ W32((u32)(r_ecx), 0xaf3610u);
    /* 0041750e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417510: je 0x417529 */ if (fZ) goto L_00417529;
L_00417512:; BB(0x00417512);
    /* 00417512: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417515: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00417519: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041751e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00417522: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_00417529:; BB(0x00417529);
    /* 00417529: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0041752c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041752e: je 0x417547 */ if (fZ) goto L_00417547;
L_00417530:; BB(0x00417530);
    /* 00417530: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417533: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00417537: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041753c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00417540: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_00417547:; BB(0x00417547);
    /* 00417547: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041754e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x417553u); f_008171e8();
    /* 00417553: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417556: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041755d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041755f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417560: ret  */ FN_RET(0x004174d8); r_esp += 4; return;
}

void f_00417564(void) /* sub_417564 */
{
    FN_ENTER(0x00417564);
    /* 00417564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417565: mov ebp, esp */ r_ebp = r_esp;
    /* 00417567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417569: push 0x8cd25a */ { u32 v = 0x8cd25au; r_esp -= 4; W32(r_esp, v); }
    /* 0041756e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041757c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041757f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417582: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00417585: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00417588: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041758b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041758e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00417591: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x417596u); f_008193cc();
    /* 00417596: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041759d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004175a0: mov dword ptr [edx], 0xaf3610 */ W32((u32)(r_edx), 0xaf3610u);
    /* 004175a6: mov eax, dword ptr [0x9a3900] */ r_eax = R32((u32)(0x9a3900u));
    /* 004175ab: mov dword ptr [edx + 0x30], 0x42380000 */ W32((u32)(r_edx+0x30u), 0x42380000u);
    /* 004175b2: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004175b4: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004175b7: mov dword ptr [edx + 0x34], 0x43030000 */ W32((u32)(r_edx+0x34u), 0x43030000u);
    /* 004175be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004175c0: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 004175c3: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004175c6: mov dword ptr [edx + 0x38], 0x44090000 */ W32((u32)(r_edx+0x38u), 0x44090000u);
    /* 004175cd: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004175d0: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 004175d3: mov dword ptr [edx + 0x3c], 0x435c0000 */ W32((u32)(r_edx+0x3cu), 0x435c0000u);
    /* 004175da: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 004175dd: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 004175e0: mov dword ptr [edx + 0x2c], 1 */ W32((u32)(r_edx+0x2cu), 0x1u);
    /* 004175e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4175ecu); f_005caba4();
    /* 004175ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004175ed: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004175f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004175f2: je 0x417614 */ if (fZ) goto L_00417614;
L_004175f4:; BB(0x004175f4);
    /* 004175f4: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 004175fb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00417602: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417605: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00417608: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x41760du); f_004010b0();
    /* 0041760d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00417614:; BB(0x00417614);
    /* 00417614: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041761b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00417622: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00417624: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417629u); f_005caba4();
    /* 00417629: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041762a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0041762d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041762f: je 0x417651 */ if (fZ) goto L_00417651;
L_00417631:; BB(0x00417631);
    /* 00417631: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00417638: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0041763f: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417642: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417645: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x41764au); f_004012cc();
    /* 0041764a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00417651:; BB(0x00417651);
    /* 00417651: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417654: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417657: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041765e: mov esp, ebp */ r_esp = r_ebp;
    /* 00417660: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417661: ret 4 */ FN_RET(0x00417564); r_esp += 8; return;
}

void f_00417664(void) /* sub_417664 */
{
    FN_ENTER(0x00417664);
    /* 00417664: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00417665: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417668: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041766a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0041766d: mov edx, eax */ r_edx = r_eax;
    /* 0041766f: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 00417672: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417674: je 0x4177ad */ if (fZ) goto L_004177ad;
L_0041767a:; BB(0x0041767a);
    /* 0041767a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041767d: je 0x417711 */ if (fZ) goto L_00417711;
L_00417683:; BB(0x00417683);
    /* 00417683: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417686: je 0x4176b0 */ if (fZ) goto L_004176b0;
L_00417688:; BB(0x00417688);
    /* 00417688: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041768b: jne 0x41769c */ if (!fZ) goto L_0041769c;
L_0041768d:; BB(0x0041768d);
    /* 0041768d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041768f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00417691: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x417694u); call_ind(t); }
    /* 00417694: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00417697: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0041769a: jmp 0x417701 */ goto L_00417701;
L_0041769c:; BB(0x0041769c);
    /* 0041769c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041769f: jne 0x417701 */ if (!fZ) goto L_00417701;
L_004176a1:; BB(0x004176a1);
    /* 004176a1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004176a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004176a5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x4176a8u); call_ind(t); }
    /* 004176a8: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004176ab: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004176ae: jmp 0x417701 */ goto L_00417701;
L_004176b0:; BB(0x004176b0);
    /* 004176b0: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004176b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004176b5: je 0x4176c3 */ if (fZ) goto L_004176c3;
L_004176b7:; BB(0x004176b7);
    /* 004176b7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4176bcu); f_007127b0();
    /* 004176bc: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
L_004176c3:; BB(0x004176c3);
    /* 004176c3: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004176c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004176c8: je 0x4176d6 */ if (fZ) goto L_004176d6;
L_004176ca:; BB(0x004176ca);
    /* 004176ca: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4176cfu); f_007127b0();
    /* 004176cf: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
L_004176d6:; BB(0x004176d6);
    /* 004176d6: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004176d9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004176dc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004176df: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004176e2: fcomp dword ptr [0x8fb08c] */ fx_compare(ST(0), R_F32((u32)(0x8fb08cu))); FPOP();
    /* 004176e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004176ea: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 004176ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004176ee: jbe 0x4176fb */ if ((fC||fZ)) goto L_004176fb;
L_004176f0:; BB(0x004176f0);
    /* 004176f0: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004176f3: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004176f6: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004176f9: jmp 0x417701 */ goto L_00417701;
L_004176fb:; BB(0x004176fb);
    /* 004176fb: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004176fe: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_00417701:; BB(0x00417701);
    /* 00417701: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417703: je 0x41770c */ if (fZ) goto L_0041770c;
L_00417705:; BB(0x00417705);
    /* 00417705: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
L_0041770c:; BB(0x0041770c);
    /* 0041770c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041770f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00417710: ret  */ FN_RET(0x00417664); r_esp += 4; return;
L_00417711:; BB(0x00417711);
    /* 00417711: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 00417714: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0041771b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041771d: je 0x417773 */ if (fZ) goto L_00417773;
L_0041771f:; BB(0x0041771f);
    /* 0041771f: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x417724u); f_007365f4();
    /* 00417724: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417726: jne 0x417747 */ if (!fZ) goto L_00417747;
L_00417728:; BB(0x00417728);
    /* 00417728: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041772a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041772c: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x41772fu); call_ind(t); }
    /* 0041772f: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00417732: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
    /* 00417739: mov eax, 2 */ r_eax = 0x2u;
    /* 0041773e: mov dword ptr [ebx + 0x24], 3 */ W32((u32)(r_ebx+0x24u), 0x3u);
    /* 00417745: jmp 0x417701 */ goto L_00417701;
L_00417747:; BB(0x00417747);
    /* 00417747: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041774a: jne 0x41776b */ if (!fZ) goto L_0041776b;
L_0041774c:; BB(0x0041774c);
    /* 0041774c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0041774e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00417750: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x417753u); call_ind(t); }
    /* 00417753: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00417756: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
    /* 0041775d: mov eax, 2 */ r_eax = 0x2u;
    /* 00417762: mov dword ptr [ebx + 0x24], 4 */ W32((u32)(r_ebx+0x24u), 0x4u);
    /* 00417769: jmp 0x417701 */ goto L_00417701;
L_0041776b:; BB(0x0041776b);
    /* 0041776b: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0041776e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00417771: jmp 0x417701 */ goto L_00417701;
L_00417773:; BB(0x00417773);
    /* 00417773: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417779: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0041777e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x417783u); f_007c1160();
    /* 00417783: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417785: jne 0x417792 */ if (!fZ) goto L_00417792;
L_00417787:; BB(0x00417787);
    /* 00417787: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0041778a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0041778d: jmp 0x417701 */ goto L_00417701;
L_00417792:; BB(0x00417792);
    /* 00417792: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00417795: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
    /* 0041779c: mov eax, 2 */ r_eax = 0x2u;
    /* 004177a1: mov dword ptr [ebx + 0x24], 4 */ W32((u32)(r_ebx+0x24u), 0x4u);
    /* 004177a8: jmp 0x417701 */ goto L_00417701;
L_004177ad:; BB(0x004177ad);
    /* 004177ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004177af: call 0x4177d8 */ r_esp -= 4; W32(r_esp, 0x4177b4u); f_004177d8();
    /* 004177b4: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 004177b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004177b9: call 0x417804 */ r_esp -= 4; W32(r_esp, 0x4177beu); f_00417804();
    /* 004177be: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004177c1: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 004177c8: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 004177cb: mov eax, 1 */ r_eax = 0x1u;
    /* 004177d0: jmp 0x417701 */ goto L_00417701;
}

void f_004177d8(void) /* sub_4177D8 */
{
    FN_ENTER(0x004177d8);
    /* 004177d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004177d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004177da: mov edi, ecx */ r_edi = r_ecx;
    /* 004177dc: lea edx, [edi + 0x30] */ r_edx = (u32)(r_edi+0x30u);
    /* 004177df: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004177e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004177e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004177e4: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x4177e9u); f_0073a888();
    /* 004177e9: mov esi, eax */ r_esi = r_eax;
    /* 004177eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004177ee: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004177f0: mov ecx, edi */ r_ecx = r_edi;
    /* 004177f2: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x4177f5u); call_ind(t); }
    /* 004177f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004177f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004177f8: mov ecx, esi */ r_ecx = r_esi;
    /* 004177fa: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4177ffu); f_0073ae38();
    /* 004177ff: mov eax, esi */ r_eax = r_esi;
    /* 00417801: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00417802: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00417803: ret  */ FN_RET(0x004177d8); r_esp += 4; return;
}

void f_00417804(void) /* sub_417804 */
{
    FN_ENTER(0x00417804);
    /* 00417804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00417805: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00417806: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417809: mov edi, ecx */ r_edi = r_ecx;
    /* 0041780b: mov dword ptr [esp], 0x42aa0000 */ W32((u32)(r_esp), 0x42aa0000u);
    /* 00417812: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00417815: mov dword ptr [esp + 4], 0x43c00000 */ W32((u32)(r_esp+0x4u), 0x43c00000u);
    /* 0041781d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041781e: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x417823u); f_00735874();
    /* 00417823: mov esi, eax */ r_esi = r_eax;
    /* 00417825: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417828: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041782d: mov ecx, esi */ r_ecx = r_esi;
    /* 0041782f: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x417834u); f_00736138();
    /* 00417834: mov ecx, esi */ r_ecx = r_esi;
    /* 00417836: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x41783bu); f_00736458();
    /* 0041783b: movsx edx, word ptr [edi + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 0041783f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417840: mov ecx, esi */ r_ecx = r_esi;
    /* 00417842: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x417847u); f_00736510();
    /* 00417847: mov eax, esi */ r_eax = r_esi;
    /* 00417849: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041784c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041784d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041784e: ret  */ FN_RET(0x00417804); r_esp += 4; return;
}

void f_00417845(void)
{
    FN_ENTER(0x00417845);
    /* 00417845: xor dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 00417847: mov eax, esi */ r_eax = r_esi;
    /* 00417849: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041784c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041784d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041784e: ret  */ FN_RET(0x00417845); r_esp += 4; return;
}

void f_00417850(void) /* sub_417850 */
{
    FN_ENTER(0x00417850);
    /* 00417850: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00417851: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00417853: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00417855: call 0x417874 */ r_esp -= 4; W32(r_esp, 0x41785au); f_00417874();
    /* 0041785a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0041785e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417860: jne 0x417866 */ if (!fZ) goto L_00417866;
L_00417862:; BB(0x00417862);
    /* 00417862: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00417863: ret 4 */ FN_RET(0x00417850); r_esp += 8; return;
L_00417866:; BB(0x00417866);
    /* 00417866: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00417867: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x41786cu); f_005c2f74();
    /* 0041786c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041786d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041786e: ret 4 */ FN_RET(0x00417850); r_esp += 8; return;
}

void f_0041786f(void)
{
    FN_ENTER(0x0041786f);
    /* 0041786f: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00417871: nop  */ ;
    /* 00417872: nop  */ ;
    /* 00417873: nop  */ ;
    /* 00417874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417875: mov ebp, esp */ r_ebp = r_esp;
    /* 00417877: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417879: push 0x8cd274 */ { u32 v = 0x8cd274u; r_esp -= 4; W32(r_esp, v); }
    /* 0041787e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417885: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041788c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041788f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417892: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00417895: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00417898: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041789b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041789e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004178a1: mov dword ptr [ecx], 0xaf3738 */ W32((u32)(r_ecx), 0xaf3738u);
    /* 004178a7: mov edx, dword ptr [0xa43694] */ r_edx = R32((u32)(0xa43694u));
    /* 004178ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004178af: je 0x4178cb */ if (fZ) goto L_004178cb;
L_004178b1:; BB(0x004178b1);
    /* 004178b1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004178b4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004178b8: mov dword ptr [0xa43694], 0 */ W32((u32)(0xa43694u), 0x0u);
    /* 004178c2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004178c7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004178cb:; BB(0x004178cb);
    /* 004178cb: mov eax, dword ptr [0xa4369c] */ r_eax = R32((u32)(0xa4369cu));
    /* 004178d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004178d2: je 0x4178de */ if (fZ) goto L_004178de;
L_004178d4:; BB(0x004178d4);
    /* 004178d4: mov dword ptr [0xa4369c], 0 */ W32((u32)(0xa4369cu), 0x0u);
L_004178de:; BB(0x004178de);
    /* 004178de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004178e5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4178eau); f_008171e8();
    /* 004178ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004178ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004178f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004178f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004178f7: ret  */ FN_RET(0x0041786f); r_esp += 4; return;
}

void f_00417874(void) /* sub_417874 */
{
    FN_ENTER(0x00417874);
    /* 00417874: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417875: mov ebp, esp */ r_ebp = r_esp;
    /* 00417877: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417879: push 0x8cd274 */ { u32 v = 0x8cd274u; r_esp -= 4; W32(r_esp, v); }
    /* 0041787e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417885: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041788c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041788f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417892: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00417895: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00417898: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041789b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041789e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004178a1: mov dword ptr [ecx], 0xaf3738 */ W32((u32)(r_ecx), 0xaf3738u);
    /* 004178a7: mov edx, dword ptr [0xa43694] */ r_edx = R32((u32)(0xa43694u));
    /* 004178ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004178af: je 0x4178cb */ if (fZ) goto L_004178cb;
L_004178b1:; BB(0x004178b1);
    /* 004178b1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004178b4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004178b8: mov dword ptr [0xa43694], 0 */ W32((u32)(0xa43694u), 0x0u);
    /* 004178c2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004178c7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_004178cb:; BB(0x004178cb);
    /* 004178cb: mov eax, dword ptr [0xa4369c] */ r_eax = R32((u32)(0xa4369cu));
    /* 004178d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004178d2: je 0x4178de */ if (fZ) goto L_004178de;
L_004178d4:; BB(0x004178d4);
    /* 004178d4: mov dword ptr [0xa4369c], 0 */ W32((u32)(0xa4369cu), 0x0u);
L_004178de:; BB(0x004178de);
    /* 004178de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004178e5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4178eau); f_008171e8();
    /* 004178ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004178ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004178f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004178f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004178f7: ret  */ FN_RET(0x00417874); r_esp += 4; return;
}

void f_004178f8(void) /* sub_4178F8 */
{
    FN_ENTER(0x004178f8);
    /* 004178f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004178f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004178fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004178fd: push 0x8cd2b6 */ { u32 v = 0x8cd2b6u; r_esp -= 4; W32(r_esp, v); }
    /* 00417902: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417908: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417909: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00417910: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417913: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417916: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00417919: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0041791c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0041791f: call 0x4d471c */ r_esp -= 4; W32(r_esp, 0x417924u); f_004d471c();
    /* 00417924: call 0x4d4800 */ r_esp -= 4; W32(r_esp, 0x417929u); f_004d4800();
    /* 00417929: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x41792eu); f_0061cdb0();
    /* 0041792e: mov dword ptr [0xa43698], 0 */ W32((u32)(0xa43698u), 0x0u);
    /* 00417938: jmp 0x4179d9 */ goto L_004179d9;
L_0041793d:; BB(0x0041793d);
    /* 0041793d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00417944: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417949: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41794eu); f_005caba4();
    /* 0041794e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041794f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00417952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417954: je 0x417978 */ if (fZ) goto L_00417978;
L_00417956:; BB(0x00417956);
    /* 00417956: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0041795d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00417964: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 0041796a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041796c: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x417971u); f_004d3408();
    /* 00417971: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00417978:; BB(0x00417978);
    /* 00417978: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041797f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00417986: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00417988: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41798du); f_005caba4();
    /* 0041798d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00417990: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417993: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00417996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417998: je 0x4179d2 */ if (fZ) goto L_004179d2;
L_0041799a:; BB(0x0041799a);
    /* 0041799a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004179a1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004179a8: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 004179ae: mov ecx, eax */ r_ecx = r_eax;
    /* 004179b0: call 0x4179e8 */ r_esp -= 4; W32(r_esp, 0x4179b5u); f_004179e8();
    /* 004179b5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004179bc:; BB(0x004179bc);
    /* 004179bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004179bf: mov dword ptr [0xa4369c], eax */ W32((u32)(0xa4369cu), r_eax);
    /* 004179c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004179c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004179ce: mov esp, ebp */ r_esp = r_ebp;
    /* 004179d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004179d1: ret  */ FN_RET(0x004178f8); r_esp += 4; return;
L_004179d2:; BB(0x004179d2);
    /* 004179d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004179d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004179d7: jmp 0x4179bc */ goto L_004179bc;
L_004179d9:; BB(0x004179d9);
    /* 004179d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004179db: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x4179e0u); f_00815224();
    /* 004179e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004179e1: jmp 0x41793d */ goto L_0041793d;
}

void f_00417965(void)
{
    FN_ENTER(0x00417965);
    /* 00417965: xor eax, 0xaca380 */ {  u32 a = r_eax; u32 b = 0xaca380u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041796a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041796c: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x417971u); f_004d3408();
    /* 00417971: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00417978: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041797f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00417986: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00417988: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41798du); f_005caba4();
    /* 0041798d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00417990: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417993: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00417996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417998: je 0x4179d2 */ if (fZ) goto L_004179d2;
L_0041799a:; BB(0x0041799a);
    /* 0041799a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004179a1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004179a8: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 004179ae: mov ecx, eax */ r_ecx = r_eax;
    /* 004179b0: call 0x4179e8 */ r_esp -= 4; W32(r_esp, 0x4179b5u); f_004179e8();
    /* 004179b5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004179bc:; BB(0x004179bc);
    /* 004179bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004179bf: mov dword ptr [0xa4369c], eax */ W32((u32)(0xa4369cu), r_eax);
    /* 004179c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004179c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004179ce: mov esp, ebp */ r_esp = r_ebp;
    /* 004179d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004179d1: ret  */ FN_RET(0x00417965); r_esp += 4; return;
L_004179d2:; BB(0x004179d2);
    /* 004179d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004179d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004179d7: jmp 0x4179bc */ goto L_004179bc;
}

void f_00417972(void)
{
    FN_ENTER(0x00417972);
    /* 00417972: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00417973: rol byte ptr [eax], 1 */ { u32 ad = (u32)(r_eax); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00417975: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00417977: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00417979: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0041797a: cld  */ rt_df = 0;
    UNSUP(0x0041797b, "falls out of decoded code");
}

void f_004179e8(void) /* sub_4179E8 */
{
    FN_ENTER(0x004179e8);
    /* 004179e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004179e9: mov ebp, esp */ r_ebp = r_esp;
    /* 004179eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004179ed: push 0x8cd2ea */ { u32 v = 0x8cd2eau; r_esp -= 4; W32(r_esp, v); }
    /* 004179f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004179f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004179f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00417a00: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417a03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417a06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00417a09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00417a0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00417a0f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417a12: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00417a15: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x417a1au); f_008193cc();
    /* 00417a1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00417a21: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417a24: mov dword ptr [edx], 0xaf3738 */ W32((u32)(r_edx), 0xaf3738u);
    /* 00417a2a: mov eax, dword ptr [0x9a3904] */ r_eax = R32((u32)(0x9a3904u));
    /* 00417a2f: mov dword ptr [edx + 0x1c], 1 */ W32((u32)(r_edx+0x1cu), 0x1u);
    /* 00417a36: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00417a38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00417a3a: mov dword ptr [0xa43694], ecx */ W32((u32)(0xa43694u), r_ecx);
    /* 00417a40: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00417a43: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00417a46: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00417a49: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417a4eu); f_005caba4();
    /* 00417a4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417a4f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00417a52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417a54: je 0x417a96 */ if (fZ) goto L_00417a96;
L_00417a56:; BB(0x00417a56);
    /* 00417a56: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00417a5d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00417a64: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417a67: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417a69: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417a6f: call 0x409d28 */ r_esp -= 4; W32(r_esp, 0x417a74u); f_00409d28();
    /* 00417a74: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00417a77: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00417a7e:; BB(0x00417a7e);
    /* 00417a7e: mov dword ptr [0xa43694], eax */ W32((u32)(0xa43694u), r_eax);
    /* 00417a83: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417a86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417a89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00417a90: mov esp, ebp */ r_esp = r_ebp;
    /* 00417a92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417a93: ret 4 */ FN_RET(0x004179e8); r_esp += 8; return;
L_00417a96:; BB(0x00417a96);
    /* 00417a96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417a98: jmp 0x417a7e */ goto L_00417a7e;
}

void f_00417a9c(void) /* sub_417A9C */
{
    FN_ENTER(0x00417a9c);
    /* 00417a9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417a9d: mov ebp, esp */ r_ebp = r_esp;
    /* 00417a9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417aa1: push 0x8cd32a */ { u32 v = 0x8cd32au; r_esp -= 4; W32(r_esp, v); }
    /* 00417aa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417aad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00417ab4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417ab7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417aba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00417abd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00417ac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00417ac3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00417ac6: call 0x4d471c */ r_esp -= 4; W32(r_esp, 0x417acbu); f_004d471c();
    /* 00417acb: call 0x4d4800 */ r_esp -= 4; W32(r_esp, 0x417ad0u); f_004d4800();
    /* 00417ad0: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417ad3: jne 0x417af5 */ if (!fZ) goto L_00417af5;
L_00417ad5:; BB(0x00417ad5);
    /* 00417ad5: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 00417ada: call 0x815648 */ r_esp -= 4; W32(r_esp, 0x417adfu); f_00815648();
    /* 00417adf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417ae1: jne 0x417aea */ if (!fZ) goto L_00417aea;
L_00417ae3:; BB(0x00417ae3);
    /* 00417ae3: mov ebx, 3 */ r_ebx = 0x3u;
    /* 00417ae8: jmp 0x417af5 */ goto L_00417af5;
L_00417aea:; BB(0x00417aea);
    /* 00417aea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417aed: je 0x417c03 */ if (fZ) goto L_00417c03;
L_00417af3:; BB(0x00417af3);
    /* 00417af3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00417af5:; BB(0x00417af5);
    /* 00417af5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417af7: je 0x417b15 */ if (fZ) goto L_00417b15;
L_00417af9:; BB(0x00417af9);
    /* 00417af9: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417afc: jne 0x417b05 */ if (!fZ) goto L_00417b05;
L_00417afe:; BB(0x00417afe);
    /* 00417afe: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417b03u); f_0061cdb0();
    /* 00417b03: jmp 0x417b1a */ goto L_00417b1a;
L_00417b05:; BB(0x00417b05);
    /* 00417b05: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00417b08: jb 0x417b1a */ if (fC) goto L_00417b1a;
L_00417b0a:; BB(0x00417b0a);
    /* 00417b0a: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00417b0d: jbe 0x417be8 */ if ((fC||fZ)) goto L_00417be8;
L_00417b13:; BB(0x00417b13);
    /* 00417b13: jmp 0x417b1a */ goto L_00417b1a;
L_00417b15:; BB(0x00417b15);
    /* 00417b15: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417b1au); f_0061cdb0();
L_00417b1a:; BB(0x00417b1a);
    /* 00417b1a: mov dword ptr [0xa43698], ebx */ W32((u32)(0xa43698u), r_ebx);
    /* 00417b20: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b22: je 0x417bf6 */ if (fZ) goto L_00417bf6;
L_00417b28:; BB(0x00417b28);
    /* 00417b28: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b2b: je 0x417b4b */ if (fZ) goto L_00417b4b;
L_00417b2d:; BB(0x00417b2d);
    /* 00417b2d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b30: jne 0x417b3c */ if (!fZ) goto L_00417b3c;
L_00417b32:; BB(0x00417b32);
    /* 00417b32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b34: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x417b39u); f_00815224();
    /* 00417b39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417b3a: jmp 0x417b53 */ goto L_00417b53;
L_00417b3c:; BB(0x00417b3c);
    /* 00417b3c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b3f: jne 0x417b53 */ if (!fZ) goto L_00417b53;
L_00417b41:; BB(0x00417b41);
    /* 00417b41: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b43: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x417b48u); f_00815224();
    /* 00417b48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417b49: jmp 0x417b53 */ goto L_00417b53;
L_00417b4b:; BB(0x00417b4b);
    /* 00417b4b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b4d: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x417b52u); f_00815224();
    /* 00417b52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00417b53:; BB(0x00417b53);
    /* 00417b53: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00417b5a: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b5f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417b64u); f_005caba4();
    /* 00417b64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417b65: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00417b68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b6a: je 0x417b8f */ if (fZ) goto L_00417b8f;
L_00417b6c:; BB(0x00417b6c);
    /* 00417b6c: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00417b73: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00417b7a: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417b80: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00417b83: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x417b88u); f_004d3408();
    /* 00417b88: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00417b8f:; BB(0x00417b8f);
    /* 00417b8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417b96: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00417b9d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b9f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417ba4u); f_005caba4();
    /* 00417ba4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417ba5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00417ba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417baa: je 0x417bf2 */ if (fZ) goto L_00417bf2;
L_00417bac:; BB(0x00417bac);
    /* 00417bac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00417bb3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00417bba: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417bc0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417bc3: call 0x4179e8 */ r_esp -= 4; W32(r_esp, 0x417bc8u); f_004179e8();
    /* 00417bc8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417bcb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00417bd2:; BB(0x00417bd2);
    /* 00417bd2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417bd5: mov dword ptr [0xa4369c], eax */ W32((u32)(0xa4369cu), r_eax);
    /* 00417bda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417bdd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00417be4: mov esp, ebp */ r_esp = r_ebp;
    /* 00417be6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417be7: ret  */ FN_RET(0x00417a9c); r_esp += 4; return;
L_00417be8:; BB(0x00417be8);
    /* 00417be8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417bedu); f_0061cdb0();
    /* 00417bed: jmp 0x417b1a */ goto L_00417b1a;
L_00417bf2:; BB(0x00417bf2);
    /* 00417bf2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417bf4: jmp 0x417bd2 */ goto L_00417bd2;
L_00417bf6:; BB(0x00417bf6);
    /* 00417bf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417bf8: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x417bfdu); f_00815224();
    /* 00417bfd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417bfe: jmp 0x417b53 */ goto L_00417b53;
L_00417c03:; BB(0x00417c03);
    /* 00417c03: mov ebx, 4 */ r_ebx = 0x4u;
    /* 00417c08: jmp 0x417af5 */ goto L_00417af5;
}

void f_00417ac0(void)
{
    FN_ENTER(0x00417ac0);
    /* 00417ac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00417ac3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00417ac6: call 0x4d471c */ r_esp -= 4; W32(r_esp, 0x417acbu); f_004d471c();
    /* 00417acb: call 0x4d4800 */ r_esp -= 4; W32(r_esp, 0x417ad0u); f_004d4800();
    /* 00417ad0: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417ad3: jne 0x417af5 */ if (!fZ) goto L_00417af5;
L_00417ad5:; BB(0x00417ad5);
    /* 00417ad5: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 00417ada: call 0x815648 */ r_esp -= 4; W32(r_esp, 0x417adfu); f_00815648();
    /* 00417adf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417ae1: jne 0x417aea */ if (!fZ) goto L_00417aea;
L_00417ae3:; BB(0x00417ae3);
    /* 00417ae3: mov ebx, 3 */ r_ebx = 0x3u;
    /* 00417ae8: jmp 0x417af5 */ goto L_00417af5;
L_00417aea:; BB(0x00417aea);
    /* 00417aea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417aed: je 0x417c03 */ if (fZ) goto L_00417c03;
L_00417af3:; BB(0x00417af3);
    /* 00417af3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00417af5:; BB(0x00417af5);
    /* 00417af5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417af7: je 0x417b15 */ if (fZ) goto L_00417b15;
L_00417af9:; BB(0x00417af9);
    /* 00417af9: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417afc: jne 0x417b05 */ if (!fZ) goto L_00417b05;
L_00417afe:; BB(0x00417afe);
    /* 00417afe: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417b03u); f_0061cdb0();
    /* 00417b03: jmp 0x417b1a */ goto L_00417b1a;
L_00417b05:; BB(0x00417b05);
    /* 00417b05: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00417b08: jb 0x417b1a */ if (fC) goto L_00417b1a;
L_00417b0a:; BB(0x00417b0a);
    /* 00417b0a: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00417b0d: jbe 0x417be8 */ if ((fC||fZ)) goto L_00417be8;
L_00417b13:; BB(0x00417b13);
    /* 00417b13: jmp 0x417b1a */ goto L_00417b1a;
L_00417b15:; BB(0x00417b15);
    /* 00417b15: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417b1au); f_0061cdb0();
L_00417b1a:; BB(0x00417b1a);
    /* 00417b1a: mov dword ptr [0xa43698], ebx */ W32((u32)(0xa43698u), r_ebx);
    /* 00417b20: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b22: je 0x417bf6 */ if (fZ) goto L_00417bf6;
L_00417b28:; BB(0x00417b28);
    /* 00417b28: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b2b: je 0x417b4b */ if (fZ) goto L_00417b4b;
L_00417b2d:; BB(0x00417b2d);
    /* 00417b2d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b30: jne 0x417b3c */ if (!fZ) goto L_00417b3c;
L_00417b32:; BB(0x00417b32);
    /* 00417b32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b34: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x417b39u); f_00815224();
    /* 00417b39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417b3a: jmp 0x417b53 */ goto L_00417b53;
L_00417b3c:; BB(0x00417b3c);
    /* 00417b3c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b3f: jne 0x417b53 */ if (!fZ) goto L_00417b53;
L_00417b41:; BB(0x00417b41);
    /* 00417b41: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b43: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x417b48u); f_00815224();
    /* 00417b48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417b49: jmp 0x417b53 */ goto L_00417b53;
L_00417b4b:; BB(0x00417b4b);
    /* 00417b4b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b4d: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x417b52u); f_00815224();
    /* 00417b52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00417b53:; BB(0x00417b53);
    /* 00417b53: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00417b5a: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b5f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417b64u); f_005caba4();
    /* 00417b64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417b65: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00417b68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417b6a: je 0x417b8f */ if (fZ) goto L_00417b8f;
L_00417b6c:; BB(0x00417b6c);
    /* 00417b6c: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00417b73: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00417b7a: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417b80: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00417b83: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x417b88u); f_004d3408();
    /* 00417b88: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00417b8f:; BB(0x00417b8f);
    /* 00417b8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417b96: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00417b9d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00417b9f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417ba4u); f_005caba4();
    /* 00417ba4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417ba5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00417ba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417baa: je 0x417bf2 */ if (fZ) goto L_00417bf2;
L_00417bac:; BB(0x00417bac);
    /* 00417bac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00417bb3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00417bba: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417bc0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417bc3: call 0x4179e8 */ r_esp -= 4; W32(r_esp, 0x417bc8u); f_004179e8();
    /* 00417bc8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417bcb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00417bd2:; BB(0x00417bd2);
    /* 00417bd2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00417bd5: mov dword ptr [0xa4369c], eax */ W32((u32)(0xa4369cu), r_eax);
    /* 00417bda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417bdd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00417be4: mov esp, ebp */ r_esp = r_ebp;
    /* 00417be6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417be7: ret  */ FN_RET(0x00417ac0); r_esp += 4; return;
L_00417be8:; BB(0x00417be8);
    /* 00417be8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417bedu); f_0061cdb0();
    /* 00417bed: jmp 0x417b1a */ goto L_00417b1a;
L_00417bf2:; BB(0x00417bf2);
    /* 00417bf2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417bf4: jmp 0x417bd2 */ goto L_00417bd2;
L_00417bf6:; BB(0x00417bf6);
    /* 00417bf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417bf8: call 0x815224 */ r_esp -= 4; W32(r_esp, 0x417bfdu); f_00815224();
    /* 00417bfd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417bfe: jmp 0x417b53 */ goto L_00417b53;
L_00417c03:; BB(0x00417c03);
    /* 00417c03: mov ebx, 4 */ r_ebx = 0x4u;
    /* 00417c08: jmp 0x417af5 */ goto L_00417af5;
}

void f_00417c10(void) /* sub_417C10 */
{
    FN_ENTER(0x00417c10);
    /* 00417c10: mov edx, dword ptr [0xa4369c] */ r_edx = R32((u32)(0xa4369cu));
    /* 00417c16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417c18: je 0x417c31 */ if (fZ) goto L_00417c31;
L_00417c1a:; BB(0x00417c1a);
    /* 00417c1a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00417c1e: mov dword ptr [0xa4369c], 0 */ W32((u32)(0xa4369cu), 0x0u);
    /* 00417c28: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00417c2d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00417c31:; BB(0x00417c31);
    /* 00417c31: mov eax, dword ptr [0xa43698] */ r_eax = R32((u32)(0xa43698u));
    /* 00417c36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417c38: je 0x417c57 */ if (fZ) goto L_00417c57;
L_00417c3a:; BB(0x00417c3a);
    /* 00417c3a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417c3d: jne 0x417c4b */ if (!fZ) goto L_00417c4b;
L_00417c3f:; BB(0x00417c3f);
    /* 00417c3f: call 0x815344 */ r_esp -= 4; W32(r_esp, 0x417c44u); f_00815344();
    /* 00417c44: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417c49u); f_0061cdb0();
    /* 00417c49: jmp 0x417c61 */ goto L_00417c61;
L_00417c4b:; BB(0x00417c4b);
    /* 00417c4b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00417c4e: jb 0x417c61 */ if (fC) goto L_00417c61;
L_00417c50:; BB(0x00417c50);
    /* 00417c50: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00417c53: jbe 0x417c97 */ if ((fC||fZ)) goto L_00417c97;
L_00417c55:; BB(0x00417c55);
    /* 00417c55: jmp 0x417c61 */ goto L_00417c61;
L_00417c57:; BB(0x00417c57);
    /* 00417c57: call 0x815344 */ r_esp -= 4; W32(r_esp, 0x417c5cu); f_00815344();
    /* 00417c5c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417c61u); f_0061cdb0();
L_00417c61:; BB(0x00417c61);
    /* 00417c61: call 0x4d2774 */ r_esp -= 4; W32(r_esp, 0x417c66u); f_004d2774();
    /* 00417c66: call 0x4d2af0 */ r_esp -= 4; W32(r_esp, 0x417c6bu); f_004d2af0();
    /* 00417c6b: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00417c71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417c73: je 0x417c87 */ if (fZ) goto L_00417c87;
L_00417c75:; BB(0x00417c75);
    /* 00417c75: je 0x417c7d */ if (fZ) goto L_00417c7d;
L_00417c77:; BB(0x00417c77);
    /* 00417c77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c79: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00417c7b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x417c7du); call_ind(t); }
L_00417c7d:; BB(0x00417c7d);
    /* 00417c7d: mov dword ptr [0xa48a54], 0 */ W32((u32)(0xa48a54u), 0x0u);
L_00417c87:; BB(0x00417c87);
    /* 00417c87: call 0x4d471c */ r_esp -= 4; W32(r_esp, 0x417c8cu); f_004d471c();
    /* 00417c8c: call 0x4d4800 */ r_esp -= 4; W32(r_esp, 0x417c91u); f_004d4800();
    /* 00417c91: call 0x4d2b18 */ r_esp -= 4; W32(r_esp, 0x417c96u); f_004d2b18();
    /* 00417c96: ret  */ FN_RET(0x00417c10); r_esp += 4; return;
L_00417c97:; BB(0x00417c97);
    /* 00417c97: call 0x815344 */ r_esp -= 4; W32(r_esp, 0x417c9cu); f_00815344();
    /* 00417c9c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417ca1u); f_0061cdb0();
    /* 00417ca1: jmp 0x417c61 */ goto L_00417c61;
}

void f_00417c17(void)
{
    FN_ENTER(0x00417c17);
    /* 00417c17: sal byte ptr [edi + edx + 0xf], cl */ { u32 ad = (u32)(r_edi+r_edx+0xfu); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00417c1b: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 00417c1d: or bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00417c1f: add eax, 0xa4369c */ {  u32 a = r_eax; u32 b = 0xa4369cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00417c24: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00417c26: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00417c28: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00417c2d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00417c31: mov eax, dword ptr [0xa43698] */ r_eax = R32((u32)(0xa43698u));
    /* 00417c36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417c38: je 0x417c57 */ if (fZ) goto L_00417c57;
L_00417c3a:; BB(0x00417c3a);
    /* 00417c3a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417c3d: jne 0x417c4b */ if (!fZ) goto L_00417c4b;
L_00417c3f:; BB(0x00417c3f);
    /* 00417c3f: call 0x815344 */ r_esp -= 4; W32(r_esp, 0x417c44u); f_00815344();
    /* 00417c44: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417c49u); f_0061cdb0();
    /* 00417c49: jmp 0x417c61 */ goto L_00417c61;
L_00417c4b:; BB(0x00417c4b);
    /* 00417c4b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00417c4e: jb 0x417c61 */ if (fC) goto L_00417c61;
L_00417c50:; BB(0x00417c50);
    /* 00417c50: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00417c53: jbe 0x417c97 */ if ((fC||fZ)) goto L_00417c97;
L_00417c55:; BB(0x00417c55);
    /* 00417c55: jmp 0x417c61 */ goto L_00417c61;
L_00417c57:; BB(0x00417c57);
    /* 00417c57: call 0x815344 */ r_esp -= 4; W32(r_esp, 0x417c5cu); f_00815344();
    /* 00417c5c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417c61u); f_0061cdb0();
L_00417c61:; BB(0x00417c61);
    /* 00417c61: call 0x4d2774 */ r_esp -= 4; W32(r_esp, 0x417c66u); f_004d2774();
    /* 00417c66: call 0x4d2af0 */ r_esp -= 4; W32(r_esp, 0x417c6bu); f_004d2af0();
    /* 00417c6b: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00417c71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417c73: je 0x417c87 */ if (fZ) goto L_00417c87;
L_00417c75:; BB(0x00417c75);
    /* 00417c75: je 0x417c7d */ if (fZ) goto L_00417c7d;
L_00417c77:; BB(0x00417c77);
    /* 00417c77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417c79: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00417c7b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x417c7du); call_ind(t); }
L_00417c7d:; BB(0x00417c7d);
    /* 00417c7d: mov dword ptr [0xa48a54], 0 */ W32((u32)(0xa48a54u), 0x0u);
L_00417c87:; BB(0x00417c87);
    /* 00417c87: call 0x4d471c */ r_esp -= 4; W32(r_esp, 0x417c8cu); f_004d471c();
    /* 00417c8c: call 0x4d4800 */ r_esp -= 4; W32(r_esp, 0x417c91u); f_004d4800();
    /* 00417c91: call 0x4d2b18 */ r_esp -= 4; W32(r_esp, 0x417c96u); f_004d2b18();
    /* 00417c96: ret  */ FN_RET(0x00417c17); r_esp += 4; return;
L_00417c97:; BB(0x00417c97);
    /* 00417c97: call 0x815344 */ r_esp -= 4; W32(r_esp, 0x417c9cu); f_00815344();
    /* 00417c9c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x417ca1u); f_0061cdb0();
    /* 00417ca1: jmp 0x417c61 */ goto L_00417c61;
}

void f_00417ca4(void) /* sub_417CA4 */
{
    FN_ENTER(0x00417ca4);
    /* 00417ca4: mov eax, dword ptr [0xa4369c] */ r_eax = R32((u32)(0xa4369cu));
    /* 00417ca9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417cab: je 0x417cb3 */ if (fZ) goto L_00417cb3;
L_00417cad:; BB(0x00417cad);
    /* 00417cad: mov eax, 1 */ r_eax = 0x1u;
    /* 00417cb2: ret  */ FN_RET(0x00417ca4); r_esp += 4; return;
L_00417cb3:; BB(0x00417cb3);
    /* 00417cb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417cb5: ret  */ FN_RET(0x00417ca4); r_esp += 4; return;
}

void f_00417cb8(void) /* sub_417CB8 */
{
    FN_ENTER(0x00417cb8);
    /* 00417cb8: mov edx, dword ptr [0xa4369c] */ r_edx = R32((u32)(0xa4369cu));
    /* 00417cbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417cc0: je 0x417cc9 */ if (fZ) goto L_00417cc9;
L_00417cc2:; BB(0x00417cc2);
    /* 00417cc2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00417cc6: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_00417cc9:; BB(0x00417cc9);
    /* 00417cc9: ret  */ FN_RET(0x00417cb8); r_esp += 4; return;
}

void f_00417ccc(void) /* sub_417CCC */
{
    FN_ENTER(0x00417ccc);
    /* 00417ccc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417ccd: mov ebp, esp */ r_ebp = r_esp;
    /* 00417ccf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417cd1: push 0x8cd3a0 */ { u32 v = 0x8cd3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417cd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417cdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417cdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00417ce4: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417ce7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417cea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00417ced: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00417cf0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00417cf3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00417cf6: mov eax, dword ptr [0xa4369c] */ r_eax = R32((u32)(0xa4369cu));
    /* 00417cfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417cfd: je 0x417d8b */ if (fZ) goto L_00417d8b;
L_00417d03:; BB(0x00417d03);
    /* 00417d03: mov ecx, dword ptr [0xa43694] */ r_ecx = R32((u32)(0xa43694u));
    /* 00417d09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417d0b: je 0x417d20 */ if (fZ) goto L_00417d20;
L_00417d0d:; BB(0x00417d0d);
    /* 00417d0d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x417d12u); f_008173b4();
    /* 00417d12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417d14: jne 0x417d20 */ if (!fZ) goto L_00417d20;
L_00417d16:; BB(0x00417d16);
    /* 00417d16: mov dword ptr [0xa43694], 0 */ W32((u32)(0xa43694u), 0x0u);
L_00417d20:; BB(0x00417d20);
    /* 00417d20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417d23: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00417d26: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417d29: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00417d2c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417d2f: je 0x417d99 */ if (fZ) goto L_00417d99;
L_00417d31:; BB(0x00417d31);
    /* 00417d31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417d34: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00417d37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417d39: je 0x417d45 */ if (fZ) goto L_00417d45;
L_00417d3b:; BB(0x00417d3b);
    /* 00417d3b: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x417d40u); f_007becd4();
    /* 00417d40: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x417d45u); f_007bfba0();
L_00417d45:; BB(0x00417d45);
    /* 00417d45: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x417d4au); f_00814168();
    /* 00417d4a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00417d51: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00417d53: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00417d5a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00417d61: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00417d68: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00417d6f: mov dword ptr [ebp - 0x24], 0xbf800000 */ W32((u32)(r_ebp+0xffffffdcu), 0xbf800000u);
    /* 00417d76: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x417d7bu); f_004d31f4();
    /* 00417d7b: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00417d7e: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00417d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417d82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417d83: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x417d88u); f_004d33c0();
    /* 00417d88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00417d8b:; BB(0x00417d8b);
    /* 00417d8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417d8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00417d95: mov esp, ebp */ r_esp = r_ebp;
    /* 00417d97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417d98: ret  */ FN_RET(0x00417ccc); r_esp += 4; return;
L_00417d99:; BB(0x00417d99);
    /* 00417d99: mov eax, dword ptr [0xa43698] */ r_eax = R32((u32)(0xa43698u));
    /* 00417d9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417da0: je 0x417e8a */ if (fZ) goto L_00417e8a;
L_00417da6:; BB(0x00417da6);
    /* 00417da6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417da9: je 0x417e47 */ if (fZ) goto L_00417e47;
L_00417daf:; BB(0x00417daf);
    /* 00417daf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417db2: jne 0x417df9 */ if (!fZ) goto L_00417df9;
L_00417db4:; BB(0x00417db4);
    /* 00417db4: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00417dbb: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00417dbd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417dc2u); f_005caba4();
    /* 00417dc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417dc3: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00417dc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417dc8: je 0x417ded */ if (fZ) goto L_00417ded;
L_00417dca:; BB(0x00417dca);
    /* 00417dca: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00417dd1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00417dd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417ddb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00417dde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417de1: call 0x40a430 */ r_esp -= 4; W32(r_esp, 0x417de6u); f_0040a430();
    /* 00417de6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00417ded:; BB(0x00417ded);
    /* 00417ded: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417df4: jmp 0x417d31 */ goto L_00417d31;
L_00417df9:; BB(0x00417df9);
    /* 00417df9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417dfc: jne 0x417d31 */ if (!fZ) goto L_00417d31;
L_00417e02:; BB(0x00417e02);
    /* 00417e02: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00417e09: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00417e0b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417e10u); f_005caba4();
    /* 00417e10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417e11: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00417e14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417e16: je 0x417e3b */ if (fZ) goto L_00417e3b;
L_00417e18:; BB(0x00417e18);
    /* 00417e18: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00417e1f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00417e26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417e29: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00417e2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e2f: call 0x40a430 */ r_esp -= 4; W32(r_esp, 0x417e34u); f_0040a430();
    /* 00417e34: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00417e3b:; BB(0x00417e3b);
    /* 00417e3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417e42: jmp 0x417d31 */ goto L_00417d31;
L_00417e47:; BB(0x00417e47);
    /* 00417e47: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00417e4e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00417e50: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417e55u); f_005caba4();
    /* 00417e55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417e56: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00417e59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417e5b: je 0x417e7e */ if (fZ) goto L_00417e7e;
L_00417e5d:; BB(0x00417e5d);
    /* 00417e5d: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00417e64: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00417e6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417e6e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00417e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417e72: call 0x40c624 */ r_esp -= 4; W32(r_esp, 0x417e77u); f_0040c624();
    /* 00417e77: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00417e7e:; BB(0x00417e7e);
    /* 00417e7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417e85: jmp 0x417d31 */ goto L_00417d31;
L_00417e8a:; BB(0x00417e8a);
    /* 00417e8a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00417e91: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00417e93: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x417e98u); f_005caba4();
    /* 00417e98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417e99: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00417e9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417e9e: je 0x417ec6 */ if (fZ) goto L_00417ec6;
L_00417ea0:; BB(0x00417ea0);
    /* 00417ea0: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00417ea7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00417eae: push 0x8fb0b8 */ { u32 v = 0x8fb0b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00417eb3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00417eb6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00417eb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417eba: call 0x418794 */ r_esp -= 4; W32(r_esp, 0x417ebfu); f_00418794();
    /* 00417ebf: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00417ec6:; BB(0x00417ec6);
    /* 00417ec6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417ecd: jmp 0x417d31 */ goto L_00417d31;
}

void f_00417f00(void) /* sub_417F00 */
{
    FN_ENTER(0x00417f00);
    /* 00417f00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00417f01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00417f03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00417f05: call 0x417f24 */ r_esp -= 4; W32(r_esp, 0x417f0au); f_00417f24();
    /* 00417f0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00417f0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417f10: jne 0x417f16 */ if (!fZ) goto L_00417f16;
L_00417f12:; BB(0x00417f12);
    /* 00417f12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00417f13: ret 4 */ FN_RET(0x00417f00); r_esp += 8; return;
L_00417f16:; BB(0x00417f16);
    /* 00417f16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00417f17: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x417f1cu); f_005c2f74();
    /* 00417f1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00417f1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00417f1e: ret 4 */ FN_RET(0x00417f00); r_esp += 8; return;
}

void f_00417f24(void) /* sub_417F24 */
{
    FN_ENTER(0x00417f24);
    /* 00417f24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417f25: mov ebp, esp */ r_ebp = r_esp;
    /* 00417f27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417f29: push 0x8cd3bc */ { u32 v = 0x8cd3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00417f2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417f35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00417f3c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417f3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417f42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00417f45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00417f48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00417f4b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00417f4e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417f51: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00417f54: mov dword ptr [ecx], 0xaf3798 */ W32((u32)(r_ecx), 0xaf3798u);
    /* 00417f5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417f5c: je 0x417f75 */ if (fZ) goto L_00417f75;
L_00417f5e:; BB(0x00417f5e);
    /* 00417f5e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417f61: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00417f65: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00417f6a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00417f6e: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_00417f75:; BB(0x00417f75);
    /* 00417f75: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00417f7c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x417f81u); f_008171e8();
    /* 00417f81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00417f84: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00417f8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00417f8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417f8e: ret  */ FN_RET(0x00417f24); r_esp += 4; return;
}

void f_00417f90(void) /* sub_417F90 */
{
    FN_ENTER(0x00417f90);
    /* 00417f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00417f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00417f95: push 0x8cd3d8 */ { u32 v = 0x8cd3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00417f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00417fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417fa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00417fa8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417fab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00417fae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00417fb1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00417fb4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00417fb7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00417fba: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00417fbd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x417fc2u); f_008193cc();
    /* 00417fc2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00417fc9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417fcc: mov dword ptr [edx], 0xaf3798 */ W32((u32)(r_edx), 0xaf3798u);
    /* 00417fd2: mov eax, dword ptr [0x9a3908] */ r_eax = R32((u32)(0x9a3908u));
    /* 00417fd7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00417fda: add edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00417fdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00417fde: call 0x70a024 */ r_esp -= 4; W32(r_esp, 0x417fe3u); f_0070a024();
    /* 00417fe3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00417fe6: fld dword ptr [0x8fb12c] */ FPUSH(R_F32((u32)(0x8fb12cu)));
    /* 00417fec: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 00417ff3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00417ff5: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 00417ffc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00417fff: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00418002: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
    /* 00418009: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 00418010: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00418013: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00418016: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 0041801d: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 00418023: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 00418029: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 0041802f: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 00418035: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00418037: fadd dword ptr [0xa48780] */ ST(0) = ST(0) + R_F32((u32)(0xa48780u));
    /* 0041803d: fstp dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0)); FPOP();
    /* 00418040: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 00418046: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00418048: fadd dword ptr [0xa48784] */ ST(0) = ST(0) + R_F32((u32)(0xa48784u));
    /* 0041804e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00418050: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00418052: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00418054: fadd dword ptr [0xa48788] */ ST(0) = ST(0) + R_F32((u32)(0xa48788u));
    /* 0041805a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041805c: fstp dword ptr [ebx + 0x48] */ W_F32((u32)(r_ebx+0x48u), ST(0)); FPOP();
    /* 0041805f: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
    /* 00418062: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 00418069: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041806b: fchs  */ ST(0) = -ST(0);
    /* 0041806d: fstp dword ptr [ebx + 0x50] */ W_F32((u32)(r_ebx+0x50u), ST(0)); FPOP();
    /* 00418070: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00418073: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418074: fchs  */ ST(0) = -ST(0);
    /* 00418076: fstp dword ptr [ebx + 0x54] */ W_F32((u32)(r_ebx+0x54u), ST(0)); FPOP();
    /* 00418079: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041807a: fchs  */ ST(0) = -ST(0);
    /* 0041807c: fstp dword ptr [ebx + 0x58] */ W_F32((u32)(r_ebx+0x58u), ST(0)); FPOP();
    /* 0041807f: add ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00418082: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00418083: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x418088u); f_007a8d98();
    /* 00418088: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041808b: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0041808e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418090: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00418093: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00418095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418096: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418097: call 0x50a3a0 */ r_esp -= 4; W32(r_esp, 0x41809cu); f_0050a3a0();
    /* 0041809c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041809f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004180a2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004180a5: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004180a8: mov eax, edx */ r_eax = r_edx;
    /* 004180aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004180ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004180b4: mov esp, ebp */ r_esp = r_ebp;
    /* 004180b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004180b7: ret 8 */ FN_RET(0x00417f90); r_esp += 12; return;
}

