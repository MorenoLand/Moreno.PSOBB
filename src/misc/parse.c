#include "protos.h"

void f_00864fb0(void) /* _parse_cmdline */
{
    FN_ENTER(0x00864fb0);
    /* 00864fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00864fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00864fb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864fb5: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00864fb8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00864fba: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864fbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864fbe: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00864fc0: mov edi, ecx */ r_edi = r_ecx;
    /* 00864fc2: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
    /* 00864fc8: je 0x864fd3 */ if (fZ) goto L_00864fd3;
L_00864fca:; BB(0x00864fca);
    /* 00864fca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00864fcd: add dword ptr [ebp + 8], 4 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00864fd1: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
L_00864fd3:; BB(0x00864fd3);
    /* 00864fd3: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00864fd6: jne 0x864fe6 */ if (!fZ) goto L_00864fe6;
L_00864fd8:; BB(0x00864fd8);
    /* 00864fd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00864fda: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864fdc: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00864fdf: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864fe0: mov edx, ecx */ r_edx = r_ecx;
    /* 00864fe2: mov cl, 0x22 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x22u) & 0xffu);
    /* 00864fe4: jmp 0x865013 */ goto L_00865013;
L_00864fe6:; BB(0x00864fe6);
    /* 00864fe6: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00864fe8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864fea: je 0x864ff1 */ if (fZ) goto L_00864ff1;
L_00864fec:; BB(0x00864fec);
    /* 00864fec: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00864fee: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 00864ff0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00864ff1:; BB(0x00864ff1);
    /* 00864ff1: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00864ff3: movzx ebx, cl */ r_ebx = (u32)(u8)r_ecx;
    /* 00864ff6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864ff7: test byte ptr [ebx + 0xaf0841], 4 */ {  u32 a = R8((u32)(r_ebx+0xaf0841u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00864ffe: je 0x86500c */ if (fZ) goto L_0086500c;
L_00865000:; BB(0x00865000);
    /* 00865000: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865002: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865004: je 0x86500b */ if (fZ) goto L_0086500b;
L_00865006:; BB(0x00865006);
    /* 00865006: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865008: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 0086500a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0086500b:; BB(0x0086500b);
    /* 0086500b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0086500c:; BB(0x0086500c);
    /* 0086500c: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086500e: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00865011: je 0x865045 */ if (fZ) goto L_00865045;
L_00865013:; BB(0x00865013);
    /* 00865013: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865015: jne 0x864fd3 */ if (!fZ) goto L_00864fd3;
L_00865017:; BB(0x00865017);
    /* 00865017: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086501a: je 0x865021 */ if (fZ) goto L_00865021;
L_0086501c:; BB(0x0086501c);
    /* 0086501c: cmp cl, 9 */ {  u32 a = (u8)r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086501f: jne 0x864fd3 */ if (!fZ) goto L_00864fd3;
L_00865021:; BB(0x00865021);
    /* 00865021: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865023: je 0x865029 */ if (fZ) goto L_00865029;
L_00865025:; BB(0x00865025);
    /* 00865025: mov byte ptr [edi - 1], 0 */ W8((u32)(r_edi+0xffffffffu), 0x0u);
L_00865029:; BB(0x00865029);
    /* 00865029: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0086502d:; BB(0x0086502d);
    /* 0086502d: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865030: je 0x86510c */ if (fZ) goto L_0086510c;
L_00865036:; BB(0x00865036);
    /* 00865036: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865038: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086503b: je 0x865042 */ if (fZ) goto L_00865042;
L_0086503d:; BB(0x0086503d);
    /* 0086503d: cmp cl, 9 */ {  u32 a = (u8)r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865040: jne 0x865048 */ if (!fZ) goto L_00865048;
L_00865042:; BB(0x00865042);
    /* 00865042: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865043: jmp 0x865036 */ goto L_00865036;
L_00865045:; BB(0x00865045);
    /* 00865045: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865046: jmp 0x865029 */ goto L_00865029;
L_00865048:; BB(0x00865048);
    /* 00865048: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086504b: je 0x86510c */ if (fZ) goto L_0086510c;
L_00865051:; BB(0x00865051);
    /* 00865051: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865055: je 0x865060 */ if (fZ) goto L_00865060;
L_00865057:; BB(0x00865057);
    /* 00865057: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0086505a: add dword ptr [ebp + 8], 4 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086505e: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
L_00865060:; BB(0x00865060);
    /* 00865060: inc dword ptr [ebx] */ { u32 ad = (u32)(r_ebx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00865062:; BB(0x00865062);
    /* 00865062: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00865064: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00865065: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00865067: jmp 0x86506b */ goto L_0086506b;
L_00865069:; BB(0x00865069);
    /* 00865069: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086506a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0086506b:; BB(0x0086506b);
    /* 0086506b: cmp byte ptr [eax], 0x5c */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086506e: je 0x865069 */ if (fZ) goto L_00865069;
L_00865070:; BB(0x00865070);
    /* 00865070: cmp byte ptr [eax], 0x22 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865073: jne 0x86509b */ if (!fZ) goto L_0086509b;
L_00865075:; BB(0x00865075);
    /* 00865075: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865078: jne 0x865099 */ if (!fZ) goto L_00865099;
L_0086507a:; BB(0x0086507a);
    /* 0086507a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086507e: je 0x86508c */ if (fZ) goto L_0086508c;
L_00865080:; BB(0x00865080);
    /* 00865080: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 00865083: cmp byte ptr [ecx], 0x22 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865086: jne 0x86508c */ if (!fZ) goto L_0086508c;
L_00865088:; BB(0x00865088);
    /* 00865088: mov eax, ecx */ r_eax = r_ecx;
    /* 0086508a: jmp 0x86508e */ goto L_0086508e;
L_0086508c:; BB(0x0086508c);
    /* 0086508c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0086508e:; BB(0x0086508e);
    /* 0086508e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00865090: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865093: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00865096: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00865099:; BB(0x00865099);
    /* 00865099: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_0086509b:; BB(0x0086509b);
    /* 0086509b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086509d: je 0x8650ac */ if (fZ) goto L_008650ac;
L_0086509f:; BB(0x0086509f);
    /* 0086509f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008650a1: je 0x8650a7 */ if (fZ) goto L_008650a7;
L_008650a3:; BB(0x008650a3);
    /* 008650a3: mov byte ptr [edi], 0x5c */ W8((u32)(r_edi), 0x5cu);
    /* 008650a6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008650a7:; BB(0x008650a7);
    /* 008650a7: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008650a9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008650aa: jne 0x86509f */ if (!fZ) goto L_0086509f;
L_008650ac:; BB(0x008650ac);
    /* 008650ac: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008650ae: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008650b0: je 0x8650fa */ if (fZ) goto L_008650fa;
L_008650b2:; BB(0x008650b2);
    /* 008650b2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008650b6: jne 0x8650c2 */ if (!fZ) goto L_008650c2;
L_008650b8:; BB(0x008650b8);
    /* 008650b8: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008650bb: je 0x8650fa */ if (fZ) goto L_008650fa;
L_008650bd:; BB(0x008650bd);
    /* 008650bd: cmp cl, 9 */ {  u32 a = (u8)r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008650c0: je 0x8650fa */ if (fZ) goto L_008650fa;
L_008650c2:; BB(0x008650c2);
    /* 008650c2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008650c4: je 0x8650f4 */ if (fZ) goto L_008650f4;
L_008650c6:; BB(0x008650c6);
    /* 008650c6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008650c8: je 0x8650e3 */ if (fZ) goto L_008650e3;
L_008650ca:; BB(0x008650ca);
    /* 008650ca: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 008650cd: test byte ptr [edx + 0xaf0841], 4 */ {  u32 a = R8((u32)(r_edx+0xaf0841u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008650d4: je 0x8650dc */ if (fZ) goto L_008650dc;
L_008650d6:; BB(0x008650d6);
    /* 008650d6: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 008650d8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008650d9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008650da: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008650dc:; BB(0x008650dc);
    /* 008650dc: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008650de: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 008650e0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008650e1: jmp 0x8650f2 */ goto L_008650f2;
L_008650e3:; BB(0x008650e3);
    /* 008650e3: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008650e6: test byte ptr [ecx + 0xaf0841], 4 */ {  u32 a = R8((u32)(r_ecx+0xaf0841u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008650ed: je 0x8650f2 */ if (fZ) goto L_008650f2;
L_008650ef:; BB(0x008650ef);
    /* 008650ef: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008650f0: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008650f2:; BB(0x008650f2);
    /* 008650f2: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008650f4:; BB(0x008650f4);
    /* 008650f4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008650f5: jmp 0x865062 */ goto L_00865062;
L_008650fa:; BB(0x008650fa);
    /* 008650fa: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008650fc: je 0x865102 */ if (fZ) goto L_00865102;
L_008650fe:; BB(0x008650fe);
    /* 008650fe: mov byte ptr [edi], 0 */ W8((u32)(r_edi), 0x0u);
    /* 00865101: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00865102:; BB(0x00865102);
    /* 00865102: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865104: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00865107: jmp 0x86502d */ goto L_0086502d;
L_0086510c:; BB(0x0086510c);
    /* 0086510c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086510f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00865111: je 0x865116 */ if (fZ) goto L_00865116;
L_00865113:; BB(0x00865113);
    /* 00865113: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fC = 0; }
L_00865116:; BB(0x00865116);
    /* 00865116: inc dword ptr [ebx] */ { u32 ad = (u32)(r_ebx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00865118: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00865119: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086511a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086511b: ret  */ FN_RET(0x00864fb0); r_esp += 4; return;
}

