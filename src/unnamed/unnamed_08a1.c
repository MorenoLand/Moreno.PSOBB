#include "protos.h"

void f_008a1605(void)
{
    FN_ENTER(0x008a1605);
    /* 008a1605: add byte ptr [eax - 0x70], ch */ { u32 ad = (u32)(r_eax+0xffffff90u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 008a1608: rcr dword ptr [ecx + 0x37e85600], 0xe2 */ { u32 c = (2u) & 31; u32 a = R32((u32)(r_ecx+0x37e85600u)); while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; W32((u32)(r_ecx+0x37e85600u), a); }
    UNSUP(0x008a160f, "falls out of decoded code");
}

void f_008a16c5(void) /* sub_8A16C5 */
{
    FN_ENTER(0x008a16c5);
    /* 008a16c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a16c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a16c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a16c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a16c9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a16cb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a16cd: mov dword ptr [0xaea328], esi */ W32((u32)(0xaea328u), r_esi);
    /* 008a16d3: mov dword ptr [0xaea324], esi */ W32((u32)(0xaea324u), r_esi);
    /* 008a16d9: mov dword ptr [0xaea31c], 0xae9f28 */ W32((u32)(0xaea31cu), 0xae9f28u);
    /* 008a16e3: mov dword ptr [0xaea318], 0xae9758 */ W32((u32)(0xaea318u), 0xae9758u);
    /* 008a16ed: mov word ptr [0xae9f28], si */ W16((u32)(0xae9f28u), (u16)r_esi);
    /* 008a16f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_008a16f5:; BB(0x008a16f5);
    /* 008a16f5: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a16f8: mov dword ptr [0xaea320], eax */ W32((u32)(0xaea320u), r_eax);
L_008a16fd:; BB(0x008a16fd);
    /* 008a16fd: movsx ecx, word ptr [esi*2 + 0xa348a0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi*2+0xa348a0u));
    /* 008a1705: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1707: jne 0x8a17e3 */ if (!fZ) goto L_008a17e3;
L_008a170d:; BB(0x008a170d);
    /* 008a170d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a170f: jge 0x8a172c */ if ((fS==fO)) goto L_008a172c;
L_008a1711:; BB(0x008a1711);
    /* 008a1711: mov ecx, dword ptr [0xaea330] */ r_ecx = R32((u32)(0xaea330u));
    /* 008a1717: call 0x8a0876 */ r_esp -= 4; W32(r_esp, 0x8a171cu); f_008a0876();
    /* 008a171c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a171e: mov dword ptr [0xaea320], eax */ W32((u32)(0xaea320u), r_eax);
    /* 008a1723: jge 0x8a172c */ if ((fS==fO)) goto L_008a172c;
L_008a1725:; BB(0x008a1725);
    /* 008a1725: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a1727: mov dword ptr [0xaea320], eax */ W32((u32)(0xaea320u), r_eax);
L_008a172c:; BB(0x008a172c);
    /* 008a172c: movsx ecx, word ptr [esi*2 + 0xa34998] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi*2+0xa34998u));
    /* 008a1734: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1736: je 0x8a17a6 */ if (fZ) goto L_008a17a6;
L_008a1738:; BB(0x008a1738);
    /* 008a1738: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 008a173a: js 0x8a17a6 */ if (fS) goto L_008a17a6;
L_008a173c:; BB(0x008a173c);
    /* 008a173c: mov edi, 0x107 */ r_edi = 0x107u;
    /* 008a1741: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a1743: jg 0x8a17ab */ if ((!fZ&&fS==fO)) goto L_008a17ab;
L_008a1745:; BB(0x008a1745);
    /* 008a1745: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1747: movsx edx, word ptr [ecx + 0xa34d68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xa34d68u));
    /* 008a174e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1750: jne 0x8a17ab */ if (!fZ) goto L_008a17ab;
L_008a1752:; BB(0x008a1752);
    /* 008a1752: mov eax, dword ptr [0xaea31c] */ r_eax = R32((u32)(0xaea31cu));
    /* 008a1757: cmp eax, 0xaea30e */ {  u32 a = r_eax; u32 b = 0xaea30eu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a175c: jae 0x8a1aa0 */ if (!fC) goto L_008a1aa0;
L_008a1762:; BB(0x008a1762);
    /* 008a1762: movsx esi, word ptr [ecx + 0xa34b58] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0xa34b58u));
    /* 008a1769: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a176a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a176b: mov dword ptr [0xaea31c], eax */ W32((u32)(0xaea31cu), r_eax);
    /* 008a1770: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 008a1773: add dword ptr [0xaea318], ebp */ { u32 ad = (u32)(0xaea318u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a1779: mov eax, dword ptr [0xaea310] */ r_eax = R32((u32)(0xaea310u));
    /* 008a177e: mov ecx, dword ptr [0xaea318] */ r_ecx = R32((u32)(0xaea318u));
    /* 008a1784: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a1786: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a1789: cmp dword ptr [0xaea324], 0 */ {  u32 a = R32((u32)(0xaea324u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a1790: mov dword ptr [0xaea320], eax */ W32((u32)(0xaea320u), r_eax);
    /* 008a1795: jle 0x8a16fd */ if ((fZ||fS!=fO)) goto L_008a16fd;
L_008a179b:; BB(0x008a179b);
    /* 008a179b: dec dword ptr [0xaea324] */ { u32 ad = (u32)(0xaea324u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a17a1: jmp 0x8a16fd */ goto L_008a16fd;
L_008a17a6:; BB(0x008a17a6);
    /* 008a17a6: mov edi, 0x107 */ r_edi = 0x107u;
L_008a17ab:; BB(0x008a17ab);
    /* 008a17ab: movsx ecx, word ptr [esi*2 + 0xa34a60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi*2+0xa34a60u));
    /* 008a17b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a17b5: je 0x8a19e0 */ if (fZ) goto L_008a19e0;
L_008a17bb:; BB(0x008a17bb);
    /* 008a17bb: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 008a17bd: js 0x8a19e0 */ if (fS) goto L_008a19e0;
L_008a17c3:; BB(0x008a17c3);
    /* 008a17c3: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a17c5: jg 0x8a19e0 */ if ((!fZ&&fS==fO)) goto L_008a19e0;
L_008a17cb:; BB(0x008a17cb);
    /* 008a17cb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a17cd: movsx edx, word ptr [ecx + 0xa34d68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xa34d68u));
    /* 008a17d4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a17d6: jne 0x8a19e0 */ if (!fZ) goto L_008a19e0;
L_008a17dc:; BB(0x008a17dc);
    /* 008a17dc: movsx ecx, word ptr [ecx + 0xa34b58] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0xa34b58u));
L_008a17e3:; BB(0x008a17e3);
    /* 008a17e3: mov eax, dword ptr [0xaea318] */ r_eax = R32((u32)(0xaea318u));
    /* 008a17e8: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 008a17eb: movsx esi, word ptr [edi + 0xa34838] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0xa34838u));
    /* 008a17f2: mov ebx, esi */ r_ebx = r_esi;
    /* 008a17f4: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a17f7: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a17f9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008a17fc: mov dword ptr [0xaea314], eax */ W32((u32)(0xaea314u), r_eax);
    /* 008a1801: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 008a1804: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a1807: ja 0x8a1910 */ if ((!fC&&!fZ)) goto L_008a1910;
L_008a180d:; BB(0x008a180d);
    /* 008a180d: jmp dword ptr [eax*4 + 0x8a1aba] */ { u32 t = R32((u32)(r_eax*4+0x8a1abau)); switch (t) { case 0x8a1814u: goto L_008a1814; case 0x8a181bu: goto L_008a181b; case 0x8a1822u: goto L_008a1822; case 0x8a1828u: goto L_008a1828; case 0x8a182fu: goto L_008a182f; case 0x8a1836u: goto L_008a1836; case 0x8a183du: goto L_008a183d; case 0x8a1844u: goto L_008a1844; case 0x8a184bu: goto L_008a184b; case 0x8a1852u: goto L_008a1852; case 0x8a1859u: goto L_008a1859; case 0x8a1860u: goto L_008a1860; case 0x8a1867u: goto L_008a1867; case 0x8a186eu: goto L_008a186e; case 0x8a1875u: goto L_008a1875; case 0x8a187cu: goto L_008a187c; case 0x8a1883u: goto L_008a1883; case 0x8a1887u: goto L_008a1887; case 0x8a188bu: goto L_008a188b; case 0x8a188fu: goto L_008a188f; case 0x8a1893u: goto L_008a1893; case 0x8a1897u: goto L_008a1897; case 0x8a189bu: goto L_008a189b; case 0x8a189fu: goto L_008a189f; case 0x8a18a3u: goto L_008a18a3; case 0x8a18a7u: goto L_008a18a7; case 0x8a18abu: goto L_008a18ab; case 0x8a18afu: goto L_008a18af; case 0x8a18b3u: goto L_008a18b3; case 0x8a18b7u: goto L_008a18b7; case 0x8a18bbu: goto L_008a18bb; case 0x8a18bfu: goto L_008a18bf; case 0x8a18c3u: goto L_008a18c3; case 0x8a18c7u: goto L_008a18c7; case 0x8a18cbu: goto L_008a18cb; case 0x8a18cfu: goto L_008a18cf; case 0x8a18d3u: goto L_008a18d3; case 0x8a18d7u: goto L_008a18d7; case 0x8a18dbu: goto L_008a18db; case 0x8a18dfu: goto L_008a18df; case 0x8a18e3u: goto L_008a18e3; case 0x8a18e7u: goto L_008a18e7; case 0x8a18ebu: goto L_008a18eb; case 0x8a18efu: goto L_008a18ef; case 0x8a18f3u: goto L_008a18f3; case 0x8a18f7u: goto L_008a18f7; case 0x8a18fbu: goto L_008a18fb; case 0x8a18ffu: goto L_008a18ff; case 0x8a1903u: goto L_008a1903; default: UNSUP(0x008a180d, "jump table entry is not a known target"); } }
L_008a1814:; BB(0x008a1814);
    /* 008a1814: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1816: jmp 0x8a1905 */ goto L_008a1905;
L_008a181b:; BB(0x008a181b);
    /* 008a181b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a181d: jmp 0x8a1905 */ goto L_008a1905;
L_008a1822:; BB(0x008a1822);
    /* 008a1822: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a1823: jmp 0x8a1905 */ goto L_008a1905;
L_008a1828:; BB(0x008a1828);
    /* 008a1828: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a182a: jmp 0x8a1905 */ goto L_008a1905;
L_008a182f:; BB(0x008a182f);
    /* 008a182f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1831: jmp 0x8a1905 */ goto L_008a1905;
L_008a1836:; BB(0x008a1836);
    /* 008a1836: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1838: jmp 0x8a1905 */ goto L_008a1905;
L_008a183d:; BB(0x008a183d);
    /* 008a183d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a183f: jmp 0x8a1905 */ goto L_008a1905;
L_008a1844:; BB(0x008a1844);
    /* 008a1844: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1846: jmp 0x8a1905 */ goto L_008a1905;
L_008a184b:; BB(0x008a184b);
    /* 008a184b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 008a184d: jmp 0x8a1905 */ goto L_008a1905;
L_008a1852:; BB(0x008a1852);
    /* 008a1852: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 008a1854: jmp 0x8a1905 */ goto L_008a1905;
L_008a1859:; BB(0x008a1859);
    /* 008a1859: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008a185b: jmp 0x8a1905 */ goto L_008a1905;
L_008a1860:; BB(0x008a1860);
    /* 008a1860: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008a1862: jmp 0x8a1905 */ goto L_008a1905;
L_008a1867:; BB(0x008a1867);
    /* 008a1867: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 008a1869: jmp 0x8a1905 */ goto L_008a1905;
L_008a186e:; BB(0x008a186e);
    /* 008a186e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008a1870: jmp 0x8a1905 */ goto L_008a1905;
L_008a1875:; BB(0x008a1875);
    /* 008a1875: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1877: jmp 0x8a1905 */ goto L_008a1905;
L_008a187c:; BB(0x008a187c);
    /* 008a187c: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 008a187e: jmp 0x8a1905 */ goto L_008a1905;
L_008a1883:; BB(0x008a1883);
    /* 008a1883: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1885: jmp 0x8a1905 */ goto L_008a1905;
L_008a1887:; BB(0x008a1887);
    /* 008a1887: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1889: jmp 0x8a1905 */ goto L_008a1905;
L_008a188b:; BB(0x008a188b);
    /* 008a188b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008a188d: jmp 0x8a1905 */ goto L_008a1905;
L_008a188f:; BB(0x008a188f);
    /* 008a188f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1891: jmp 0x8a1905 */ goto L_008a1905;
L_008a1893:; BB(0x008a1893);
    /* 008a1893: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1895: jmp 0x8a1905 */ goto L_008a1905;
L_008a1897:; BB(0x008a1897);
    /* 008a1897: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1899: jmp 0x8a1905 */ goto L_008a1905;
L_008a189b:; BB(0x008a189b);
    /* 008a189b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008a189d: jmp 0x8a1905 */ goto L_008a1905;
L_008a189f:; BB(0x008a189f);
    /* 008a189f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18a1: jmp 0x8a1905 */ goto L_008a1905;
L_008a18a3:; BB(0x008a18a3);
    /* 008a18a3: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 008a18a5: jmp 0x8a1905 */ goto L_008a1905;
L_008a18a7:; BB(0x008a18a7);
    /* 008a18a7: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 008a18a9: jmp 0x8a1905 */ goto L_008a1905;
L_008a18ab:; BB(0x008a18ab);
    /* 008a18ab: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a18ad: jmp 0x8a1905 */ goto L_008a1905;
L_008a18af:; BB(0x008a18af);
    /* 008a18af: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 008a18b1: jmp 0x8a1905 */ goto L_008a1905;
L_008a18b3:; BB(0x008a18b3);
    /* 008a18b3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 008a18b5: jmp 0x8a1905 */ goto L_008a1905;
L_008a18b7:; BB(0x008a18b7);
    /* 008a18b7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 008a18b9: jmp 0x8a1905 */ goto L_008a1905;
L_008a18bb:; BB(0x008a18bb);
    /* 008a18bb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18bd: jmp 0x8a1905 */ goto L_008a1905;
L_008a18bf:; BB(0x008a18bf);
    /* 008a18bf: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18c1: jmp 0x8a1905 */ goto L_008a1905;
L_008a18c3:; BB(0x008a18c3);
    /* 008a18c3: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18c5: jmp 0x8a1905 */ goto L_008a1905;
L_008a18c7:; BB(0x008a18c7);
    /* 008a18c7: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18c9: jmp 0x8a1905 */ goto L_008a1905;
L_008a18cb:; BB(0x008a18cb);
    /* 008a18cb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18cd: jmp 0x8a1905 */ goto L_008a1905;
L_008a18cf:; BB(0x008a18cf);
    /* 008a18cf: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18d1: jmp 0x8a1905 */ goto L_008a1905;
L_008a18d3:; BB(0x008a18d3);
    /* 008a18d3: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18d5: jmp 0x8a1905 */ goto L_008a1905;
L_008a18d7:; BB(0x008a18d7);
    /* 008a18d7: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18d9: jmp 0x8a1905 */ goto L_008a1905;
L_008a18db:; BB(0x008a18db);
    /* 008a18db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18dd: jmp 0x8a1905 */ goto L_008a1905;
L_008a18df:; BB(0x008a18df);
    /* 008a18df: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18e1: jmp 0x8a1905 */ goto L_008a1905;
L_008a18e3:; BB(0x008a18e3);
    /* 008a18e3: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 008a18e5: jmp 0x8a1905 */ goto L_008a1905;
L_008a18e7:; BB(0x008a18e7);
    /* 008a18e7: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 008a18e9: jmp 0x8a1905 */ goto L_008a1905;
L_008a18eb:; BB(0x008a18eb);
    /* 008a18eb: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a18ed: jmp 0x8a1905 */ goto L_008a1905;
L_008a18ef:; BB(0x008a18ef);
    /* 008a18ef: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 008a18f1: jmp 0x8a1905 */ goto L_008a1905;
L_008a18f3:; BB(0x008a18f3);
    /* 008a18f3: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 008a18f5: jmp 0x8a1905 */ goto L_008a1905;
L_008a18f7:; BB(0x008a18f7);
    /* 008a18f7: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 008a18f9: jmp 0x8a1905 */ goto L_008a1905;
L_008a18fb:; BB(0x008a18fb);
    /* 008a18fb: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 008a18fd: jmp 0x8a1905 */ goto L_008a1905;
L_008a18ff:; BB(0x008a18ff);
    /* 008a18ff: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1901: jmp 0x8a1905 */ goto L_008a1905;
L_008a1903:; BB(0x008a1903);
    /* 008a1903: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
L_008a1905:; BB(0x008a1905);
    /* 008a1905: mov ecx, dword ptr [0xaea330] */ r_ecx = R32((u32)(0xaea330u));
    /* 008a190b: call 0x8a0d8e */ r_esp -= 4; W32(r_esp, 0x8a1910u); f_008a0d8e();
L_008a1910:; BB(0x008a1910);
    /* 008a1910: mov eax, dword ptr [0xaea31c] */ r_eax = R32((u32)(0xaea31cu));
    /* 008a1915: movsx edx, word ptr [edi + 0xa347d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xa347d0u));
    /* 008a191c: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008a191e: lea eax, [eax + esi*2] */ r_eax = (u32)(r_eax+r_esi*2);
    /* 008a1921: mov dword ptr [0xaea31c], eax */ W32((u32)(0xaea31cu), r_eax);
    /* 008a1926: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008a1929: sub dword ptr [0xaea318], ebx */ { u32 ad = (u32)(0xaea318u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a192f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1931: jne 0x8a198a */ if (!fZ) goto L_008a198a;
L_008a1933:; BB(0x008a1933);
    /* 008a1933: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1935: jne 0x8a198a */ if (!fZ) goto L_008a198a;
L_008a1937:; BB(0x008a1937);
    /* 008a1937: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a1938: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a1939: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a193b: mov dword ptr [0xaea31c], eax */ W32((u32)(0xaea31cu), r_eax);
    /* 008a1940: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a1941: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 008a1944: add dword ptr [0xaea318], ebp */ { u32 ad = (u32)(0xaea318u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a194a: mov eax, dword ptr [0xaea314] */ r_eax = R32((u32)(0xaea314u));
    /* 008a194f: mov ecx, dword ptr [0xaea318] */ r_ecx = R32((u32)(0xaea318u));
    /* 008a1955: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a1957: mov eax, dword ptr [0xaea320] */ r_eax = R32((u32)(0xaea320u));
    /* 008a195c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a195e: jge 0x8a197d */ if ((fS==fO)) goto L_008a197d;
L_008a1960:; BB(0x008a1960);
    /* 008a1960: mov ecx, dword ptr [0xaea330] */ r_ecx = R32((u32)(0xaea330u));
    /* 008a1966: call 0x8a0876 */ r_esp -= 4; W32(r_esp, 0x8a196bu); f_008a0876();
    /* 008a196b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a196d: mov dword ptr [0xaea320], eax */ W32((u32)(0xaea320u), r_eax);
    /* 008a1972: jge 0x8a197d */ if ((fS==fO)) goto L_008a197d;
L_008a1974:; BB(0x008a1974);
    /* 008a1974: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a1976: mov dword ptr [0xaea320], eax */ W32((u32)(0xaea320u), r_eax);
    /* 008a197b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_008a197d:; BB(0x008a197d);
    /* 008a197d: jne 0x8a16fd */ if (!fZ) goto L_008a16fd;
L_008a1983:; BB(0x008a1983);
    /* 008a1983: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a1985: jmp 0x8a1ab5 */ goto L_008a1ab5;
L_008a198a:; BB(0x008a198a);
    /* 008a198a: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008a198d: movsx edx, word ptr [esi + 0xa34b28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xa34b28u));
    /* 008a1994: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1996: je 0x8a19ba */ if (fZ) goto L_008a19ba;
L_008a1998:; BB(0x008a1998);
    /* 008a1998: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 008a199a: js 0x8a19ba */ if (fS) goto L_008a19ba;
L_008a199c:; BB(0x008a199c);
    /* 008a199c: cmp edx, 0x107 */ {  u32 a = r_edx; u32 b = 0x107u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a19a2: jg 0x8a19ba */ if ((!fZ&&fS==fO)) goto L_008a19ba;
L_008a19a4:; BB(0x008a19a4);
    /* 008a19a4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a19a6: movsx edi, word ptr [edx + 0xa34d68] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0xa34d68u));
    /* 008a19ad: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a19af: jne 0x8a19ba */ if (!fZ) goto L_008a19ba;
L_008a19b1:; BB(0x008a19b1);
    /* 008a19b1: movsx esi, word ptr [edx + 0xa34b58] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0xa34b58u));
    /* 008a19b8: jmp 0x8a19c1 */ goto L_008a19c1;
L_008a19ba:; BB(0x008a19ba);
    /* 008a19ba: movsx esi, word ptr [esi + 0xa34968] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0xa34968u));
L_008a19c1:; BB(0x008a19c1);
    /* 008a19c1: cmp eax, 0xaea30e */ {  u32 a = r_eax; u32 b = 0xaea30eu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a19c6: jae 0x8a1aa0 */ if (!fC) goto L_008a1aa0;
L_008a19cc:; BB(0x008a19cc);
    /* 008a19cc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a19cd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a19ce: mov dword ptr [0xaea31c], eax */ W32((u32)(0xaea31cu), r_eax);
    /* 008a19d3: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 008a19d6: mov eax, dword ptr [0xaea314] */ r_eax = R32((u32)(0xaea314u));
    /* 008a19db: jmp 0x8a1a7f */ goto L_008a1a7f;
L_008a19e0:; BB(0x008a19e0);
    /* 008a19e0: cmp dword ptr [0xaea324], 0 */ {  u32 a = R32((u32)(0xaea324u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a19e7: jne 0x8a1a06 */ if (!fZ) goto L_008a1a06;
L_008a19e9:; BB(0x008a19e9);
    /* 008a19e9: push 0x99be98 */ { u32 v = 0x99be98u; r_esp -= 4; W32(r_esp, v); }
    /* 008a19ee: push dword ptr [0xaea330] */ { u32 v = R32((u32)(0xaea330u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a19f4: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a19f9u); f_0089f848();
    /* 008a19f9: inc dword ptr [0xaea328] */ { u32 ad = (u32)(0xaea328u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a19ff: mov eax, dword ptr [0xaea320] */ r_eax = R32((u32)(0xaea320u));
    /* 008a1a04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1a05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a1a06:; BB(0x008a1a06);
    /* 008a1a06: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1a08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1a09: cmp dword ptr [0xaea324], ecx */ {  u32 a = R32((u32)(0xaea324u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a1a0f: jge 0x8a1a97 */ if ((fS==fO)) goto L_008a1a97;
L_008a1a15:; BB(0x008a1a15);
    /* 008a1a15: mov dword ptr [0xaea324], ecx */ W32((u32)(0xaea324u), r_ecx);
    /* 008a1a1b: mov ecx, dword ptr [0xaea31c] */ r_ecx = R32((u32)(0xaea31cu));
    /* 008a1a21: mov edx, 0x100 */ r_edx = 0x100u;
L_008a1a26:; BB(0x008a1a26);
    /* 008a1a26: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 008a1a29: movsx eax, word ptr [eax*2 + 0xa34998] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax*2+0xa34998u));
    /* 008a1a31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1a33: je 0x8a1a47 */ if (fZ) goto L_008a1a47;
L_008a1a35:; BB(0x008a1a35);
    /* 008a1a35: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 008a1a37: js 0x8a1a47 */ if (fS) goto L_008a1a47;
L_008a1a39:; BB(0x008a1a39);
    /* 008a1a39: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a1a3b: jg 0x8a1a47 */ if ((!fZ&&fS==fO)) goto L_008a1a47;
L_008a1a3d:; BB(0x008a1a3d);
    /* 008a1a3d: cmp word ptr [eax*2 + 0xa34d68], dx */ {  u32 a = R16((u32)(r_eax*2+0xa34d68u)); u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a1a45: je 0x8a1a5f */ if (fZ) goto L_008a1a5f;
L_008a1a47:; BB(0x008a1a47);
    /* 008a1a47: cmp ecx, 0xae9f28 */ {  u32 a = r_ecx; u32 b = 0xae9f28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a1a4d: jbe 0x8a1ab2 */ if ((fC||fZ)) goto L_008a1ab2;
L_008a1a4f:; BB(0x008a1a4f);
    /* 008a1a4f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1a50: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1a51: sub dword ptr [0xaea318], ebp */ { u32 ad = (u32)(0xaea318u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a1a57: mov dword ptr [0xaea31c], ecx */ W32((u32)(0xaea31cu), r_ecx);
    /* 008a1a5d: jmp 0x8a1a26 */ goto L_008a1a26;
L_008a1a5f:; BB(0x008a1a5f);
    /* 008a1a5f: cmp ecx, 0xaea30e */ {  u32 a = r_ecx; u32 b = 0xaea30eu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a1a65: jae 0x8a1aa0 */ if (!fC) goto L_008a1aa0;
L_008a1a67:; BB(0x008a1a67);
    /* 008a1a67: movsx esi, word ptr [eax*2 + 0xa34b58] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax*2+0xa34b58u));
    /* 008a1a6f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1a70: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1a71: mov dword ptr [0xaea31c], ecx */ W32((u32)(0xaea31cu), r_ecx);
    /* 008a1a77: mov word ptr [ecx], si */ W16((u32)(r_ecx), (u16)r_esi);
    /* 008a1a7a: mov eax, dword ptr [0xaea310] */ r_eax = R32((u32)(0xaea310u));
L_008a1a7f:; BB(0x008a1a7f);
    /* 008a1a7f: add dword ptr [0xaea318], ebp */ { u32 ad = (u32)(0xaea318u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a1a85: mov ecx, dword ptr [0xaea318] */ r_ecx = R32((u32)(0xaea318u));
    /* 008a1a8b: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a1a8d: mov eax, dword ptr [0xaea320] */ r_eax = R32((u32)(0xaea320u));
    /* 008a1a92: jmp 0x8a16fd */ goto L_008a16fd;
L_008a1a97:; BB(0x008a1a97);
    /* 008a1a97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1a99: je 0x8a1ab2 */ if (fZ) goto L_008a1ab2;
L_008a1a9b:; BB(0x008a1a9b);
    /* 008a1a9b: jmp 0x8a16f5 */ goto L_008a16f5;
L_008a1aa0:; BB(0x008a1aa0);
    /* 008a1aa0: push 0x99c318 */ { u32 v = 0x99c318u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1aa5: push dword ptr [0xaea330] */ { u32 v = R32((u32)(0xaea330u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1aab: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a1ab0u); f_0089f848();
    /* 008a1ab0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1ab1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a1ab2:; BB(0x008a1ab2);
    /* 008a1ab2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008a1ab4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_008a1ab5:; BB(0x008a1ab5);
    /* 008a1ab5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a1ab6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a1ab7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a1ab8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a1ab9: ret  */ FN_RET(0x008a16c5); r_esp += 4; return;
}

void f_008a1b7e(void) /* sub_8A1B7E */
{
    FN_ENTER(0x008a1b7e);
    /* 008a1b7e: mov eax, 0x8cb986 */ r_eax = 0x8cb986u;
    /* 008a1b83: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x8a1b88u); f_008cb064();
    /* 008a1b88: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a1b8b: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008a1b8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a1b8f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1b90: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a1b92: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1b94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1b95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a1b97: je 0x8a1b9b */ if (fZ) goto L_008a1b9b;
L_008a1b99:; BB(0x008a1b99);
    /* 008a1b99: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
L_008a1b9b:; BB(0x008a1b9b);
    /* 008a1b9b: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 008a1b9e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1ba0: je 0x8a1ba4 */ if (fZ) goto L_008a1ba4;
L_008a1ba2:; BB(0x008a1ba2);
    /* 008a1ba2: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
L_008a1ba4:; BB(0x008a1ba4);
    /* 008a1ba4: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 008a1ba7: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1ba9: je 0x8a1bad */ if (fZ) goto L_008a1bad;
L_008a1bab:; BB(0x008a1bab);
    /* 008a1bab: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
L_008a1bad:; BB(0x008a1bad);
    /* 008a1bad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a1bb0: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a1bb2: je 0x8a202b */ if (fZ) goto L_008a202b;
L_008a1bb8:; BB(0x008a1bb8);
    /* 008a1bb8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a1bbb: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a1bbd: je 0x8a202b */ if (fZ) goto L_008a202b;
L_008a1bc3:; BB(0x008a1bc3);
    /* 008a1bc3: mov dword ptr [ebx + 0xb8], eax */ W32((u32)(r_ebx+0xb8u), r_eax);
    /* 008a1bc9: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 008a1bcf: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 008a1bd5: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a1bd7: mov dword ptr [ebx + 0xc4], eax */ W32((u32)(r_ebx+0xc4u), r_eax);
    /* 008a1bdd: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008a1be0: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1be2: jne 0x8a1be7 */ if (!fZ) goto L_008a1be7;
L_008a1be4:; BB(0x008a1be4);
    /* 008a1be4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a1be6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a1be7:; BB(0x008a1be7);
    /* 008a1be7: mov dword ptr [ebx + 0x1d0], eax */ W32((u32)(r_ebx+0x1d0u), r_eax);
    /* 008a1bed: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008a1bf0: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a1bf3: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 008a1bf9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a1bfc: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1bfe: mov dword ptr [ebx + 0x3d8], esi */ W32((u32)(r_ebx+0x3d8u), r_esi);
    /* 008a1c04: mov dword ptr [ebx + 0x3dc], esi */ W32((u32)(r_ebx+0x3dcu), r_esi);
    /* 008a1c0a: mov dword ptr [ebx + 0x3e0], esi */ W32((u32)(r_ebx+0x3e0u), r_esi);
    /* 008a1c10: mov dword ptr [ebx + 0x3e4], esi */ W32((u32)(r_ebx+0x3e4u), r_esi);
    /* 008a1c16: mov dword ptr [ebx + 0xac], esi */ W32((u32)(r_ebx+0xacu), r_esi);
    /* 008a1c1c: mov dword ptr [ebx + 0xb4], esi */ W32((u32)(r_ebx+0xb4u), r_esi);
    /* 008a1c22: je 0x8a1c38 */ if (fZ) goto L_008a1c38;
L_008a1c24:; BB(0x008a1c24);
    /* 008a1c24: lea edx, [ebx + 0x1d4] */ r_edx = (u32)(r_ebx+0x1d4u);
    /* 008a1c2a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008a1c2c:; BB(0x008a1c2c);
    /* 008a1c2c: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a1c2e: mov byte ptr [edx + eax], cl */ W8((u32)(r_edx+r_eax), (u8)r_ecx);
    /* 008a1c31: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a1c32: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a1c34: jne 0x8a1c2c */ if (!fZ) goto L_008a1c2c;
L_008a1c36:; BB(0x008a1c36);
    /* 008a1c36: jmp 0x8a1c46 */ goto L_008a1c46;
L_008a1c38:; BB(0x008a1c38);
    /* 008a1c38: and byte ptr [ebx + 0x1d4], 0 */ { u32 ad = (u32)(r_ebx+0x1d4u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a1c3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008a1c41: call 0x8a0629 */ r_esp -= 4; W32(r_esp, 0x8a1c46u); f_008a0629();
L_008a1c46:; BB(0x008a1c46);
    /* 008a1c46: and byte ptr [ebx + 0x2d8], 0 */ { u32 ad = (u32)(r_ebx+0x2d8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a1c4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1c4e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1c50: mov dword ptr [ebx + 0x2d4], esi */ W32((u32)(r_ebx+0x2d4u), r_esi);
    /* 008a1c56: call 0x85e188 */ r_esp -= 4; W32(r_esp, 0x8a1c5bu); f_0085e188();
    /* 008a1c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1c5c: call 0x86b07a */ r_esp -= 4; W32(r_esp, 0x8a1c61u); f_0086b07a();
    /* 008a1c61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a1c64: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1c66: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a1c69: je 0x8a1c7d */ if (fZ) goto L_008a1c7d;
L_008a1c6b:; BB(0x008a1c6b);
    /* 008a1c6b: mov esi, eax */ r_esi = r_eax;
    /* 008a1c6d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1c6f: mov edi, 0x99c3c0 */ r_edi = 0x99c3c0u;
    /* 008a1c74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1c75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a1c77: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a1c79: je 0x8a1c8d */ if (fZ) goto L_008a1c8d;
L_008a1c7b:; BB(0x008a1c7b);
    /* 008a1c7b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008a1c7d:; BB(0x008a1c7d);
    /* 008a1c7d: push 0x99c3c0 */ { u32 v = 0x99c3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1c82: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1c84: call 0x85e188 */ r_esp -= 4; W32(r_esp, 0x8a1c89u); f_0085e188();
    /* 008a1c89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1c8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1c8b: jmp 0x8a1c8f */ goto L_008a1c8f;
L_008a1c8d:; BB(0x008a1c8d);
    /* 008a1c8d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008a1c8f:; BB(0x008a1c8f);
    /* 008a1c8f: call 0x8a16c5 */ r_esp -= 4; W32(r_esp, 0x8a1c94u); f_008a16c5();
    /* 008a1c94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1c96: je 0x8a1ca2 */ if (fZ) goto L_008a1ca2;
L_008a1c98:; BB(0x008a1c98);
    /* 008a1c98: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
L_008a1ca2:; BB(0x008a1ca2);
    /* 008a1ca2: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1ca5: je 0x8a1ccf */ if (fZ) goto L_008a1ccf;
L_008a1ca7:; BB(0x008a1ca7);
    /* 008a1ca7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a1caa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1cac: mov edi, 0x99c3c0 */ r_edi = 0x99c3c0u;
    /* 008a1cb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1cb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a1cb4: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008a1cb6: je 0x8a1cc4 */ if (fZ) goto L_008a1cc4;
L_008a1cb8:; BB(0x008a1cb8);
    /* 008a1cb8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1cbb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1cbd: call 0x85e188 */ r_esp -= 4; W32(r_esp, 0x8a1cc2u); f_0085e188();
    /* 008a1cc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1cc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a1cc4:; BB(0x008a1cc4);
    /* 008a1cc4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1cc7: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8a1cccu); f_00858882();
    /* 008a1ccc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1ccd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008a1ccf:; BB(0x008a1ccf);
    /* 008a1ccf: cmp dword ptr [ebx + 0x98], esi */ {  u32 a = R32((u32)(r_ebx+0x98u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1cd5: jne 0x8a1ffb */ if (!fZ) goto L_008a1ffb;
L_008a1cdb:; BB(0x008a1cdb);
    /* 008a1cdb: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1cde: je 0x8a1d67 */ if (fZ) goto L_008a1d67;
L_008a1ce4:; BB(0x008a1ce4);
    /* 008a1ce4: cmp dword ptr [ebx + 0xac], esi */ {  u32 a = R32((u32)(r_ebx+0xacu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1cea: jne 0x8a1d67 */ if (!fZ) goto L_008a1d67;
L_008a1cec:; BB(0x008a1cec);
    /* 008a1cec: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1cee: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8a1cf3u); f_008581c5();
    /* 008a1cf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1cf4: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a1cf7: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1cf9: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 008a1cfc: je 0x8a1d09 */ if (fZ) goto L_008a1d09;
L_008a1cfe:; BB(0x008a1cfe);
    /* 008a1cfe: mov ecx, eax */ r_ecx = r_eax;
    /* 008a1d00: call 0x8a8cc9 */ r_esp -= 4; W32(r_esp, 0x8a1d05u); f_008a8cc9();
    /* 008a1d05: mov edi, eax */ r_edi = r_eax;
    /* 008a1d07: jmp 0x8a1d0b */ goto L_008a1d0b;
L_008a1d09:; BB(0x008a1d09);
    /* 008a1d09: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008a1d0b:; BB(0x008a1d0b);
    /* 008a1d0b: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a1d0f: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a1d11: je 0x8a1df3 */ if (fZ) goto L_008a1df3;
L_008a1d17:; BB(0x008a1d17);
    /* 008a1d17: push dword ptr [ebx + 0x9c] */ { u32 v = R32((u32)(r_ebx+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1d1d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a1d1f: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1d21: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x8a1d24u); call_ind(t); }
    /* 008a1d24: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a1d27: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a1d29: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a1d2b: jge 0x8a1d36 */ if ((fS==fO)) goto L_008a1d36;
L_008a1d2d:; BB(0x008a1d2d);
    /* 008a1d2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1d2f: mov ecx, edi */ r_ecx = r_edi;
    /* 008a1d31: jmp 0x8a1df0 */ goto L_008a1df0;
L_008a1d36:; BB(0x008a1d36);
    /* 008a1d36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1d37: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x8a1d3au); call_ind(t); }
    /* 008a1d3a: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a1d3d: jmp 0x8a1d5a */ goto L_008a1d5a;
L_008a1d3f:; BB(0x008a1d3f);
    /* 008a1d3f: add dword ptr [ebx + 0x9c], -4 */ { u32 ad = (u32)(r_ebx+0x9cu);  u32 a = R32(ad); u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a1d46: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 008a1d4c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a1d4f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a1d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1d52: lea ecx, [ebx + 0x64] */ r_ecx = (u32)(r_ebx+0x64u);
    /* 008a1d55: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1d5au); f_008a8ace();
L_008a1d5a:; BB(0x008a1d5a);
    /* 008a1d5a: cmp dword ptr [ebx + 0x9c], esi */ {  u32 a = R32((u32)(r_ebx+0x9cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1d60: jne 0x8a1d3f */ if (!fZ) goto L_008a1d3f;
L_008a1d62:; BB(0x008a1d62);
    /* 008a1d62: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008a1d65: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
L_008a1d67:; BB(0x008a1d67);
    /* 008a1d67: cmp dword ptr [ebx + 0x98], esi */ {  u32 a = R32((u32)(r_ebx+0x98u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1d6d: jne 0x8a1ffb */ if (!fZ) goto L_008a1ffb;
L_008a1d73:; BB(0x008a1d73);
    /* 008a1d73: cmp dword ptr [ebp + 0x20], esi */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1d76: je 0x8a1e84 */ if (fZ) goto L_008a1e84;
L_008a1d7c:; BB(0x008a1d7c);
    /* 008a1d7c: mov eax, dword ptr [ebx + 0xa0] */ r_eax = R32((u32)(r_ebx+0xa0u));
    /* 008a1d82: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1d84: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a1d87: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a1d8a: cmp dword ptr [ebx + 0xac], 0 */ {  u32 a = R32((u32)(r_ebx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1d91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1d92: mov esi, 0x99c39c */ r_esi = 0x99c39cu;
    /* 008a1d97: lea edi, [ebp - 0x30] */ r_edi = (u32)(r_ebp+0xffffffd0u);
    /* 008a1d9a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a1d9c: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 008a1d9f: je 0x8a1daa */ if (fZ) goto L_008a1daa;
L_008a1da1:; BB(0x008a1da1);
    /* 008a1da1: add eax, dword ptr [ebx + 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x9cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a1da7: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
L_008a1daa:; BB(0x008a1daa);
    /* 008a1daa: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1dac: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8a1db1u); f_008581c5();
    /* 008a1db1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1db2: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a1db5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a1db7: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a1db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1dba: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008a1dbd: je 0x8a1dca */ if (fZ) goto L_008a1dca;
L_008a1dbf:; BB(0x008a1dbf);
    /* 008a1dbf: mov ecx, eax */ r_ecx = r_eax;
    /* 008a1dc1: call 0x8a8cc9 */ r_esp -= 4; W32(r_esp, 0x8a1dc6u); f_008a8cc9();
    /* 008a1dc6: mov esi, eax */ r_esi = r_eax;
    /* 008a1dc8: jmp 0x8a1dcc */ goto L_008a1dcc;
L_008a1dca:; BB(0x008a1dca);
    /* 008a1dca: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008a1dcc:; BB(0x008a1dcc);
    /* 008a1dcc: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a1dd0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a1dd2: mov dword ptr [ebp + 0x14], esi */ W32((u32)(r_ebp+0x14u), r_esi);
    /* 008a1dd5: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 008a1dd8: je 0x8a1df3 */ if (fZ) goto L_008a1df3;
L_008a1dda:; BB(0x008a1dda);
    /* 008a1dda: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1ddd: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 008a1de1: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x8a1de4u); call_ind(t); }
    /* 008a1de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a1de6: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a1de9: jge 0x8a1dfd */ if ((fS==fO)) goto L_008a1dfd;
L_008a1deb:; BB(0x008a1deb);
    /* 008a1deb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a1ded: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1dee: mov ecx, esi */ r_ecx = r_esi;
L_008a1df0:; BB(0x008a1df0);
    /* 008a1df0: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x8a1df3u); call_ind(t); }
L_008a1df3:; BB(0x008a1df3);
    /* 008a1df3: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 008a1df8: jmp 0x8a2030 */ goto L_008a2030;
L_008a1dfd:; BB(0x008a1dfd);
    /* 008a1dfd: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008a1e00: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a1e02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1e03: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a1e06u); call_ind(t); }
    /* 008a1e06: mov edx, eax */ r_edx = r_eax;
    /* 008a1e08: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 008a1e0e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008a1e10: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1e12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1e13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a1e15: mov dword ptr [edx + 4], 0x9fffe */ W32((u32)(r_edx+0x4u), 0x9fffeu);
    /* 008a1e1c: lea edi, [edx + 8] */ r_edi = (u32)(r_edx+0x8u);
    /* 008a1e1f: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a1e21: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008a1e24: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1e26: lea edi, [edx + 8] */ r_edi = (u32)(r_edx+0x8u);
    /* 008a1e29: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a1e2b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1e2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1e30: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 008a1e33: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a1e35: mov dword ptr [edx - 4], 0xffff */ W32((u32)(r_edx+0xfffffffcu), 0xffffu);
    /* 008a1e3c: lea edi, [edx - 8] */ r_edi = (u32)(r_edx+0xfffffff8u);
    /* 008a1e3f: je 0x8a1e55 */ if (fZ) goto L_008a1e55;
L_008a1e41:; BB(0x008a1e41);
    /* 008a1e41: lea esi, [ebx + 0x74] */ r_esi = (u32)(r_ebx+0x74u);
L_008a1e44:; BB(0x008a1e44);
    /* 008a1e44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1e45: mov ecx, esi */ r_ecx = r_esi;
    /* 008a1e47: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1e4cu); f_008a8ace();
    /* 008a1e4c: sub edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a1e4f: sub dword ptr [ebp + 0xc], 4 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a1e53: jne 0x8a1e44 */ if (!fZ) goto L_008a1e44;
L_008a1e55:; BB(0x008a1e55);
    /* 008a1e55: cmp dword ptr [ebx + 0xac], 0 */ {  u32 a = R32((u32)(r_ebx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1e5c: je 0x8a1e7a */ if (fZ) goto L_008a1e7a;
L_008a1e5e:; BB(0x008a1e5e);
    /* 008a1e5e: lea esi, [ebx + 0x9c] */ r_esi = (u32)(r_ebx+0x9cu);
    /* 008a1e64: jmp 0x8a1e75 */ goto L_008a1e75;
L_008a1e66:; BB(0x008a1e66);
    /* 008a1e66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1e67: lea ecx, [ebx + 0x64] */ r_ecx = (u32)(r_ebx+0x64u);
    /* 008a1e6a: call 0x8a8ace */ r_esp -= 4; W32(r_esp, 0x8a1e6fu); f_008a8ace();
    /* 008a1e6f: sub edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a1e72: add dword ptr [esi], -4 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008a1e75:; BB(0x008a1e75);
    /* 008a1e75: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1e78: jne 0x8a1e66 */ if (!fZ) goto L_008a1e66;
L_008a1e7a:; BB(0x008a1e7a);
    /* 008a1e7a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008a1e7d: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 008a1e80: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a1e82: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008a1e84:; BB(0x008a1e84);
    /* 008a1e84: cmp dword ptr [ebx + 0x98], esi */ {  u32 a = R32((u32)(r_ebx+0x98u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1e8a: jne 0x8a1ffb */ if (!fZ) goto L_008a1ffb;
L_008a1e90:; BB(0x008a1e90);
    /* 008a1e90: test byte ptr [ebp + 0x18], 2 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a1e94: jne 0x8a1ffb */ if (!fZ) goto L_008a1ffb;
L_008a1e9a:; BB(0x008a1e9a);
    /* 008a1e9a: cmp dword ptr [ebx + 0xa0], esi */ {  u32 a = R32((u32)(r_ebx+0xa0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1ea0: je 0x8a1fee */ if (fZ) goto L_008a1fee;
L_008a1ea6:; BB(0x008a1ea6);
    /* 008a1ea6: lea eax, [ebp + 0x20] */ r_eax = (u32)(r_ebp+0x20u);
    /* 008a1ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1eaa: push 0x99c380 */ { u32 v = 0x99c380u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1eaf: push 0x80000002 */ { u32 v = 0x80000002u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1eb4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a1eb6: call dword ptr [0x8f8014] */ { u32 t = R32((u32)(0x8f8014u)); r_esp -= 4; W32(r_esp, 0x8a1ebcu); call_ind(t); }
    /* 008a1ebc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1ebe: jne 0x8a1f22 */ if (!fZ) goto L_008a1f22;
L_008a1ec0:; BB(0x008a1ec0);
    /* 008a1ec0: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 008a1ec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1ec4: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 008a1ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1ec8: lea eax, [ebp + 0x18] */ r_eax = (u32)(r_ebp+0x18u);
    /* 008a1ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1ecc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1ecd: push 0x99c36c */ { u32 v = 0x99c36cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a1ed2: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1ed5: mov dword ptr [ebp + 0x1c], 4 */ W32((u32)(r_ebp+0x1cu), 0x4u);
    /* 008a1edc: call dword ptr [0x8f8008] */ { u32 t = R32((u32)(0x8f8008u)); r_esp -= 4; W32(r_esp, 0x8a1ee2u); call_ind(t); }
    /* 008a1ee2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1ee4: jne 0x8a1efa */ if (!fZ) goto L_008a1efa;
L_008a1ee6:; BB(0x008a1ee6);
    /* 008a1ee6: cmp dword ptr [ebp + 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1eea: jne 0x8a1efa */ if (!fZ) goto L_008a1efa;
L_008a1eec:; BB(0x008a1eec);
    /* 008a1eec: cmp dword ptr [ebp + 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1ef0: jne 0x8a1efa */ if (!fZ) goto L_008a1efa;
L_008a1ef2:; BB(0x008a1ef2);
    /* 008a1ef2: cmp dword ptr [ebp + 0xc], esi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1ef5: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008a1ef8: mov edi, eax */ r_edi = r_eax;
L_008a1efa:; BB(0x008a1efa);
    /* 008a1efa: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1efd: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8a1f03u); call_ind(t); }
    /* 008a1f03: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f05: je 0x8a1f22 */ if (fZ) goto L_008a1f22;
L_008a1f07:; BB(0x008a1f07);
    /* 008a1f07: mov edi, 0x99ba04 */ r_edi = 0x99ba04u;
    /* 008a1f0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f0d: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x8a1f13u); call_ind(t); }
    /* 008a1f13: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f15: jne 0x8a1f41 */ if (!fZ) goto L_008a1f41;
L_008a1f17:; BB(0x008a1f17);
    /* 008a1f17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f18: call dword ptr [0x8f8130] */ { u32 t = R32((u32)(0x8f8130u)); r_esp -= 4; W32(r_esp, 0x8a1f1eu); call_ind(t); }
    /* 008a1f1e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f20: jne 0x8a1f41 */ if (!fZ) goto L_008a1f41;
L_008a1f22:; BB(0x008a1f22);
    /* 008a1f22: mov edi, 0x99ba20 */ r_edi = 0x99ba20u;
    /* 008a1f27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f28: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x8a1f2eu); call_ind(t); }
    /* 008a1f2e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f30: jne 0x8a1f41 */ if (!fZ) goto L_008a1f41;
L_008a1f32:; BB(0x008a1f32);
    /* 008a1f32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f33: call dword ptr [0x8f8130] */ { u32 t = R32((u32)(0x8f8130u)); r_esp -= 4; W32(r_esp, 0x8a1f39u); call_ind(t); }
    /* 008a1f39: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f3b: je 0x8a1ffb */ if (fZ) goto L_008a1ffb;
L_008a1f41:; BB(0x008a1f41);
    /* 008a1f41: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 008a1f44: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); fC = (b != 0); }
    /* 008a1f46: sbb edi, edi */ { u32 c = fC; u32 a = r_edi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 008a1f48: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 008a1f4b: and edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008a1f4d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a1f4f: cmp dword ptr [ebp + 0x24], esi */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f52: mov dword ptr [ebp + 0x1c], esi */ W32((u32)(r_ebp+0x1cu), r_esi);
    /* 008a1f55: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008a1f58: cmp dword ptr [ebx + 0xac], esi */ {  u32 a = R32((u32)(r_ebx+0xacu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f5e: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 008a1f61: je 0x8a1f8a */ if (fZ) goto L_008a1f8a;
L_008a1f63:; BB(0x008a1f63);
    /* 008a1f63: push 0x99c358 */ { u32 v = 0x99c358u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f69: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x8a1f6fu); call_ind(t); }
    /* 008a1f6f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f71: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a1f74: je 0x8a1fb3 */ if (fZ) goto L_008a1fb3;
L_008a1f76:; BB(0x008a1f76);
    /* 008a1f76: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a1f79: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a1f7b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f7c: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1f7f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f81: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a1f84u); call_ind(t); }
    /* 008a1f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f85: call dword ptr [ebp + 0xc] */ { u32 t = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, 0x8a1f88u); call_ind(t); }
    /* 008a1f88: jmp 0x8a1fb0 */ goto L_008a1fb0;
L_008a1f8a:; BB(0x008a1f8a);
    /* 008a1f8a: push 0x99c340 */ { u32 v = 0x99c340u; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1f90: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x8a1f96u); call_ind(t); }
    /* 008a1f96: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1f98: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a1f9b: je 0x8a1fb3 */ if (fZ) goto L_008a1fb3;
L_008a1f9d:; BB(0x008a1f9d);
    /* 008a1f9d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a1fa0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a1fa2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1fa3: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1fa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1fa7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1fa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1fa9: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a1facu); call_ind(t); }
    /* 008a1fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1fad: call dword ptr [ebp + 0xc] */ { u32 t = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, 0x8a1fb0u); call_ind(t); }
L_008a1fb0:; BB(0x008a1fb0);
    /* 008a1fb0: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a1fb3:; BB(0x008a1fb3);
    /* 008a1fb3: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a1fb6: jge 0x8a1fc2 */ if ((fS==fO)) goto L_008a1fc2;
L_008a1fb8:; BB(0x008a1fb8);
    /* 008a1fb8: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
L_008a1fc2:; BB(0x008a1fc2);
    /* 008a1fc2: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a1fc5: je 0x8a1ffb */ if (fZ) goto L_008a1ffb;
L_008a1fc7:; BB(0x008a1fc7);
    /* 008a1fc7: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1fca: lea ecx, [ebx + 0x84] */ r_ecx = (u32)(r_ebx+0x84u);
    /* 008a1fd0: call 0x8a8a1b */ r_esp -= 4; W32(r_esp, 0x8a1fd5u); f_008a8a1b();
    /* 008a1fd5: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a1fd8: inc dword ptr [ebx + 0xa4] */ { u32 ad = (u32)(r_ebx+0xa4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a1fde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a1fdf: call dword ptr [0x8f82fc] */ { u32 t = R32((u32)(0x8f82fcu)); r_esp -= 4; W32(r_esp, 0x8a1fe5u); call_ind(t); }
    /* 008a1fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a1fe6: call dword ptr [0x8f81dc] */ { u32 t = R32((u32)(0x8f81dcu)); r_esp -= 4; W32(r_esp, 0x8a1fecu); call_ind(t); }
    /* 008a1fec: jmp 0x8a1ffb */ goto L_008a1ffb;
L_008a1fee:; BB(0x008a1fee);
    /* 008a1fee: push 0x99c32c */ { u32 v = 0x99c32cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a1ff3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a1ff4: call 0x89f848 */ r_esp -= 4; W32(r_esp, 0x8a1ff9u); f_0089f848();
    /* 008a1ff9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a1ffa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a1ffb:; BB(0x008a1ffb);
    /* 008a1ffb: cmp dword ptr [ebx + 0xa4], esi */ {  u32 a = R32((u32)(r_ebx+0xa4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2001: je 0x8a201a */ if (fZ) goto L_008a201a;
L_008a2003:; BB(0x008a2003);
    /* 008a2003: cmp dword ptr [ebp + 0x24], esi */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a2006: je 0x8a201a */ if (fZ) goto L_008a201a;
L_008a2008:; BB(0x008a2008);
    /* 008a2008: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a200b: lea ecx, [ebx + 0x84] */ r_ecx = (u32)(r_ebx+0x84u);
    /* 008a2011: call 0x8a8b02 */ r_esp -= 4; W32(r_esp, 0x8a2016u); f_008a8b02();
    /* 008a2016: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a2018: jl 0x8a2030 */ if ((fS!=fO)) goto L_008a2030;
L_008a201a:; BB(0x008a201a);
    /* 008a201a: mov eax, dword ptr [ebx + 0x98] */ r_eax = R32((u32)(r_ebx+0x98u));
    /* 008a2020: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008a2022: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008a2024: and eax, 0x88760b59 */ {  u32 a = r_eax; u32 b = 0x88760b59u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a2029: jmp 0x8a2030 */ goto L_008a2030;
L_008a202b:; BB(0x008a202b);
    /* 008a202b: mov eax, 0x8876086c */ r_eax = 0x8876086cu;
L_008a2030:; BB(0x008a2030);
    /* 008a2030: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a2033: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a2034: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a2035: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a2036: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008a203d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a203e: ret 0x20 */ FN_RET(0x008a1b7e); r_esp += 36; return;
}

