#include "protos.h"

void f_0064a424(void) /* sub_64A424 */
{
    FN_ENTER(0x0064a424);
    /* 0064a424: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0064a428: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a429: mov ecx, dword ptr [0xa8f500] */ r_ecx = R32((u32)(0xa8f500u));
    /* 0064a42f: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0064a435: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a437: je 0x64a5dc */ if (fZ) goto L_0064a5dc;
L_0064a43d:; BB(0x0064a43d);
    /* 0064a43d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a440: jne 0x64a502 */ if (!fZ) goto L_0064a502;
L_0064a446:; BB(0x0064a446);
    /* 0064a446: or ecx, 0x215 */ {  u32 a = r_ecx; u32 b = 0x215u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a44c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a44e: je 0x64a4e3 */ if (fZ) goto L_0064a4e3;
L_0064a454:; BB(0x0064a454);
    /* 0064a454: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a457: jne 0x64a48e */ if (!fZ) goto L_0064a48e;
L_0064a459:; BB(0x0064a459);
    /* 0064a459: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a45c: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a462: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64a467u); f_00694cc8();
    /* 0064a467: mov eax, 0x21b */ r_eax = 0x21bu;
    /* 0064a46c: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a471u); f_0064a650();
    /* 0064a471: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a473: je 0x64a480 */ if (fZ) goto L_0064a480;
L_0064a475:; BB(0x0064a475);
    /* 0064a475: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
    /* 0064a47b: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a47e: jmp 0x64a486 */ goto L_0064a486;
L_0064a480:; BB(0x0064a480);
    /* 0064a480: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
L_0064a486:; BB(0x0064a486);
    /* 0064a486: and ecx, 0xfffe780f */ {  u32 a = r_ecx; u32 b = 0xfffe780fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a48c: jmp 0x64a4f4 */ goto L_0064a4f4;
L_0064a48e:; BB(0x0064a48e);
    /* 0064a48e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a491: jne 0x64a4f4 */ if (!fZ) goto L_0064a4f4;
L_0064a493:; BB(0x0064a493);
    /* 0064a493: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a499: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64a49eu); f_00694cc8();
    /* 0064a49e: mov eax, 0x225 */ r_eax = 0x225u;
    /* 0064a4a3: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a4a8u); f_0064a650();
    /* 0064a4a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a4aa: je 0x64a4b9 */ if (fZ) goto L_0064a4b9;
L_0064a4ac:; BB(0x0064a4ac);
    /* 0064a4ac: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a4b1: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a4b4: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a4b9:; BB(0x0064a4b9);
    /* 0064a4b9: mov eax, 0x22f */ r_eax = 0x22fu;
    /* 0064a4be: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a4c3u); f_0064a650();
    /* 0064a4c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a4c5: je 0x64a4d5 */ if (fZ) goto L_0064a4d5;
L_0064a4c7:; BB(0x0064a4c7);
    /* 0064a4c7: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
    /* 0064a4cd: or ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a4d3: jmp 0x64a4db */ goto L_0064a4db;
L_0064a4d5:; BB(0x0064a4d5);
    /* 0064a4d5: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
L_0064a4db:; BB(0x0064a4db);
    /* 0064a4db: and ecx, 0xfffe7ff0 */ {  u32 a = r_ecx; u32 b = 0xfffe7ff0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a4e1: jmp 0x64a4f4 */ goto L_0064a4f4;
L_0064a4e3:; BB(0x0064a4e3);
    /* 0064a4e3: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a4e9: call 0x64a668 */ r_esp -= 4; W32(r_esp, 0x64a4eeu); f_0064a668();
    /* 0064a4ee: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
L_0064a4f4:; BB(0x0064a4f4);
    /* 0064a4f4: and ecx, 0xffff87ff */ {  u32 a = r_ecx; u32 b = 0xffff87ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a4fa: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a501: ret  */ FN_RET(0x0064a424); r_esp += 4; return;
L_0064a502:; BB(0x0064a502);
    /* 0064a502: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064a505: je 0x64a50f */ if (fZ) goto L_0064a50f;
L_0064a507:; BB(0x0064a507);
    /* 0064a507: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a50e: ret  */ FN_RET(0x0064a424); r_esp += 4; return;
L_0064a50f:; BB(0x0064a50f);
    /* 0064a50f: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a512: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a518: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x64a51du); f_006dc358();
    /* 0064a51d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a520: je 0x64a52f */ if (fZ) goto L_0064a52f;
L_0064a522:; BB(0x0064a522);
    /* 0064a522: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a527: or eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a52a: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a52f:; BB(0x0064a52f);
    /* 0064a52f: push 0x2bd */ { u32 v = 0x2bdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a534: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a539u); f_006bb254();
    /* 0064a539: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a53a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a53c: je 0x64a54b */ if (fZ) goto L_0064a54b;
L_0064a53e:; BB(0x0064a53e);
    /* 0064a53e: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a543: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a546: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a54b:; BB(0x0064a54b);
    /* 0064a54b: push 0x2be */ { u32 v = 0x2beu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a550: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a555u); f_006bb254();
    /* 0064a555: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a556: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a558: je 0x64a567 */ if (fZ) goto L_0064a567;
L_0064a55a:; BB(0x0064a55a);
    /* 0064a55a: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a55f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a562: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a567:; BB(0x0064a567);
    /* 0064a567: push 0x2bf */ { u32 v = 0x2bfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a56c: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a571u); f_006bb254();
    /* 0064a571: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a574: je 0x64a583 */ if (fZ) goto L_0064a583;
L_0064a576:; BB(0x0064a576);
    /* 0064a576: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a57b: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a57e: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a583:; BB(0x0064a583);
    /* 0064a583: push 0x2c0 */ { u32 v = 0x2c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a588: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a58du); f_006bb254();
    /* 0064a58d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a58e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a590: je 0x64a59f */ if (fZ) goto L_0064a59f;
L_0064a592:; BB(0x0064a592);
    /* 0064a592: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a597: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a59a: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a59f:; BB(0x0064a59f);
    /* 0064a59f: push 0x2c1 */ { u32 v = 0x2c1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a5a4: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a5a9u); f_006bb254();
    /* 0064a5a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a5aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a5ac: je 0x64a5b8 */ if (fZ) goto L_0064a5b8;
L_0064a5ae:; BB(0x0064a5ae);
    /* 0064a5ae: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a5b3: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a5b6: jmp 0x64a5bd */ goto L_0064a5bd;
L_0064a5b8:; BB(0x0064a5b8);
    /* 0064a5b8: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
L_0064a5bd:; BB(0x0064a5bd);
    /* 0064a5bd: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a5bf: jne 0x64a5c4 */ if (!fZ) goto L_0064a5c4;
L_0064a5c1:; BB(0x0064a5c1);
    /* 0064a5c1: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0064a5c4:; BB(0x0064a5c4);
    /* 0064a5c4: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a5c9: jne 0x64a5d0 */ if (!fZ) goto L_0064a5d0;
L_0064a5cb:; BB(0x0064a5cb);
    /* 0064a5cb: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0064a5d0:; BB(0x0064a5d0);
    /* 0064a5d0: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a5d5: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
    /* 0064a5da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a5db: ret  */ FN_RET(0x0064a424); r_esp += 4; return;
L_0064a5dc:; BB(0x0064a5dc);
    /* 0064a5dc: or ecx, 0xa5 */ {  u32 a = r_ecx; u32 b = 0xa5u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a5e2: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a5e8: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64a5edu); f_00694cc8();
    /* 0064a5ed: mov eax, 0x1f9 */ r_eax = 0x1f9u;
    /* 0064a5f2: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a5f7u); f_0064a650();
    /* 0064a5f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a5f9: je 0x64a608 */ if (fZ) goto L_0064a608;
L_0064a5fb:; BB(0x0064a5fb);
    /* 0064a5fb: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a600: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a603: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a608:; BB(0x0064a608);
    /* 0064a608: mov eax, 0x201 */ r_eax = 0x201u;
    /* 0064a60d: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a612u); f_0064a650();
    /* 0064a612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a614: je 0x64a623 */ if (fZ) goto L_0064a623;
L_0064a616:; BB(0x0064a616);
    /* 0064a616: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a61b: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a61e: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a623:; BB(0x0064a623);
    /* 0064a623: mov eax, 0x207 */ r_eax = 0x207u;
    /* 0064a628: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a62du); f_0064a650();
    /* 0064a62d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a62f: je 0x64a63d */ if (fZ) goto L_0064a63d;
L_0064a631:; BB(0x0064a631);
    /* 0064a631: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a636: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a63b: jmp 0x64a642 */ goto L_0064a642;
L_0064a63d:; BB(0x0064a63d);
    /* 0064a63d: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
L_0064a642:; BB(0x0064a642);
    /* 0064a642: and eax, 0xfffe03ff */ {  u32 a = r_eax; u32 b = 0xfffe03ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a647: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
    /* 0064a64c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a64d: ret  */ FN_RET(0x0064a424); r_esp += 4; return;
}

void f_0064a428(void)
{
    FN_ENTER(0x0064a428);
    /* 0064a428: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a429: mov ecx, dword ptr [0xa8f500] */ r_ecx = R32((u32)(0xa8f500u));
    /* 0064a42f: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0064a435: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a437: je 0x64a5dc */ if (fZ) goto L_0064a5dc;
L_0064a43d:; BB(0x0064a43d);
    /* 0064a43d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a440: jne 0x64a502 */ if (!fZ) goto L_0064a502;
L_0064a446:; BB(0x0064a446);
    /* 0064a446: or ecx, 0x215 */ {  u32 a = r_ecx; u32 b = 0x215u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a44c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a44e: je 0x64a4e3 */ if (fZ) goto L_0064a4e3;
L_0064a454:; BB(0x0064a454);
    /* 0064a454: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a457: jne 0x64a48e */ if (!fZ) goto L_0064a48e;
L_0064a459:; BB(0x0064a459);
    /* 0064a459: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a45c: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a462: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64a467u); f_00694cc8();
    /* 0064a467: mov eax, 0x21b */ r_eax = 0x21bu;
    /* 0064a46c: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a471u); f_0064a650();
    /* 0064a471: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a473: je 0x64a480 */ if (fZ) goto L_0064a480;
L_0064a475:; BB(0x0064a475);
    /* 0064a475: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
    /* 0064a47b: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a47e: jmp 0x64a486 */ goto L_0064a486;
L_0064a480:; BB(0x0064a480);
    /* 0064a480: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
L_0064a486:; BB(0x0064a486);
    /* 0064a486: and ecx, 0xfffe780f */ {  u32 a = r_ecx; u32 b = 0xfffe780fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a48c: jmp 0x64a4f4 */ goto L_0064a4f4;
L_0064a48e:; BB(0x0064a48e);
    /* 0064a48e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a491: jne 0x64a4f4 */ if (!fZ) goto L_0064a4f4;
L_0064a493:; BB(0x0064a493);
    /* 0064a493: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a499: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64a49eu); f_00694cc8();
    /* 0064a49e: mov eax, 0x225 */ r_eax = 0x225u;
    /* 0064a4a3: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a4a8u); f_0064a650();
    /* 0064a4a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a4aa: je 0x64a4b9 */ if (fZ) goto L_0064a4b9;
L_0064a4ac:; BB(0x0064a4ac);
    /* 0064a4ac: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a4b1: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a4b4: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a4b9:; BB(0x0064a4b9);
    /* 0064a4b9: mov eax, 0x22f */ r_eax = 0x22fu;
    /* 0064a4be: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a4c3u); f_0064a650();
    /* 0064a4c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a4c5: je 0x64a4d5 */ if (fZ) goto L_0064a4d5;
L_0064a4c7:; BB(0x0064a4c7);
    /* 0064a4c7: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
    /* 0064a4cd: or ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a4d3: jmp 0x64a4db */ goto L_0064a4db;
L_0064a4d5:; BB(0x0064a4d5);
    /* 0064a4d5: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
L_0064a4db:; BB(0x0064a4db);
    /* 0064a4db: and ecx, 0xfffe7ff0 */ {  u32 a = r_ecx; u32 b = 0xfffe7ff0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a4e1: jmp 0x64a4f4 */ goto L_0064a4f4;
L_0064a4e3:; BB(0x0064a4e3);
    /* 0064a4e3: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a4e9: call 0x64a668 */ r_esp -= 4; W32(r_esp, 0x64a4eeu); f_0064a668();
    /* 0064a4ee: mov ecx, dword ptr [0xa8f4fc] */ r_ecx = R32((u32)(0xa8f4fcu));
L_0064a4f4:; BB(0x0064a4f4);
    /* 0064a4f4: and ecx, 0xffff87ff */ {  u32 a = r_ecx; u32 b = 0xffff87ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a4fa: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a501: ret  */ FN_RET(0x0064a428); r_esp += 4; return;
L_0064a502:; BB(0x0064a502);
    /* 0064a502: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064a505: je 0x64a50f */ if (fZ) goto L_0064a50f;
L_0064a507:; BB(0x0064a507);
    /* 0064a507: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a50e: ret  */ FN_RET(0x0064a428); r_esp += 4; return;
L_0064a50f:; BB(0x0064a50f);
    /* 0064a50f: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a512: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a518: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x64a51du); f_006dc358();
    /* 0064a51d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a520: je 0x64a52f */ if (fZ) goto L_0064a52f;
L_0064a522:; BB(0x0064a522);
    /* 0064a522: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a527: or eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a52a: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a52f:; BB(0x0064a52f);
    /* 0064a52f: push 0x2bd */ { u32 v = 0x2bdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a534: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a539u); f_006bb254();
    /* 0064a539: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a53a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a53c: je 0x64a54b */ if (fZ) goto L_0064a54b;
L_0064a53e:; BB(0x0064a53e);
    /* 0064a53e: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a543: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a546: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a54b:; BB(0x0064a54b);
    /* 0064a54b: push 0x2be */ { u32 v = 0x2beu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a550: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a555u); f_006bb254();
    /* 0064a555: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a556: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a558: je 0x64a567 */ if (fZ) goto L_0064a567;
L_0064a55a:; BB(0x0064a55a);
    /* 0064a55a: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a55f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a562: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a567:; BB(0x0064a567);
    /* 0064a567: push 0x2bf */ { u32 v = 0x2bfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a56c: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a571u); f_006bb254();
    /* 0064a571: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a574: je 0x64a583 */ if (fZ) goto L_0064a583;
L_0064a576:; BB(0x0064a576);
    /* 0064a576: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a57b: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a57e: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a583:; BB(0x0064a583);
    /* 0064a583: push 0x2c0 */ { u32 v = 0x2c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a588: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a58du); f_006bb254();
    /* 0064a58d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a58e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a590: je 0x64a59f */ if (fZ) goto L_0064a59f;
L_0064a592:; BB(0x0064a592);
    /* 0064a592: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a597: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a59a: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a59f:; BB(0x0064a59f);
    /* 0064a59f: push 0x2c1 */ { u32 v = 0x2c1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a5a4: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a5a9u); f_006bb254();
    /* 0064a5a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a5aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a5ac: je 0x64a5b8 */ if (fZ) goto L_0064a5b8;
L_0064a5ae:; BB(0x0064a5ae);
    /* 0064a5ae: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a5b3: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a5b6: jmp 0x64a5bd */ goto L_0064a5bd;
L_0064a5b8:; BB(0x0064a5b8);
    /* 0064a5b8: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
L_0064a5bd:; BB(0x0064a5bd);
    /* 0064a5bd: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a5bf: jne 0x64a5c4 */ if (!fZ) goto L_0064a5c4;
L_0064a5c1:; BB(0x0064a5c1);
    /* 0064a5c1: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0064a5c4:; BB(0x0064a5c4);
    /* 0064a5c4: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a5c9: jne 0x64a5d0 */ if (!fZ) goto L_0064a5d0;
L_0064a5cb:; BB(0x0064a5cb);
    /* 0064a5cb: and eax, 0xffffff7f */ {  u32 a = r_eax; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0064a5d0:; BB(0x0064a5d0);
    /* 0064a5d0: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a5d5: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
    /* 0064a5da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a5db: ret  */ FN_RET(0x0064a428); r_esp += 4; return;
L_0064a5dc:; BB(0x0064a5dc);
    /* 0064a5dc: or ecx, 0xa5 */ {  u32 a = r_ecx; u32 b = 0xa5u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a5e2: mov dword ptr [0xa8f4fc], ecx */ W32((u32)(0xa8f4fcu), r_ecx);
    /* 0064a5e8: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64a5edu); f_00694cc8();
    /* 0064a5ed: mov eax, 0x1f9 */ r_eax = 0x1f9u;
    /* 0064a5f2: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a5f7u); f_0064a650();
    /* 0064a5f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a5f9: je 0x64a608 */ if (fZ) goto L_0064a608;
L_0064a5fb:; BB(0x0064a5fb);
    /* 0064a5fb: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a600: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a603: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a608:; BB(0x0064a608);
    /* 0064a608: mov eax, 0x201 */ r_eax = 0x201u;
    /* 0064a60d: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a612u); f_0064a650();
    /* 0064a612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a614: je 0x64a623 */ if (fZ) goto L_0064a623;
L_0064a616:; BB(0x0064a616);
    /* 0064a616: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a61b: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a61e: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a623:; BB(0x0064a623);
    /* 0064a623: mov eax, 0x207 */ r_eax = 0x207u;
    /* 0064a628: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a62du); f_0064a650();
    /* 0064a62d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a62f: je 0x64a63d */ if (fZ) goto L_0064a63d;
L_0064a631:; BB(0x0064a631);
    /* 0064a631: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a636: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a63b: jmp 0x64a642 */ goto L_0064a642;
L_0064a63d:; BB(0x0064a63d);
    /* 0064a63d: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
L_0064a642:; BB(0x0064a642);
    /* 0064a642: and eax, 0xfffe03ff */ {  u32 a = r_eax; u32 b = 0xfffe03ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a647: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
    /* 0064a64c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a64d: ret  */ FN_RET(0x0064a428); r_esp += 4; return;
}

void f_0064a650(void) /* sub_64A650 */
{
    FN_ENTER(0x0064a650);
    /* 0064a650: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0064a656: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a658: jne 0x64a662 */ if (!fZ) goto L_0064a662;
L_0064a65a:; BB(0x0064a65a);
    /* 0064a65a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a65b: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x64a660u); f_006bb254();
    /* 0064a660: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a661: ret  */ FN_RET(0x0064a650); r_esp += 4; return;
L_0064a662:; BB(0x0064a662);
    /* 0064a662: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a667: ret  */ FN_RET(0x0064a650); r_esp += 4; return;
}

void f_0064a668(void) /* sub_64A668 */
{
    FN_ENTER(0x0064a668);
    /* 0064a668: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a669: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a66e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a671: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
    /* 0064a676: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64a67bu); f_00694cc8();
    /* 0064a67b: mov eax, 0x21b */ r_eax = 0x21bu;
    /* 0064a680: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a685u); f_0064a650();
    /* 0064a685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a687: je 0x64a696 */ if (fZ) goto L_0064a696;
L_0064a689:; BB(0x0064a689);
    /* 0064a689: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a68e: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a691: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a696:; BB(0x0064a696);
    /* 0064a696: mov eax, 0x225 */ r_eax = 0x225u;
    /* 0064a69b: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a6a0u); f_0064a650();
    /* 0064a6a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a6a2: je 0x64a6b1 */ if (fZ) goto L_0064a6b1;
L_0064a6a4:; BB(0x0064a6a4);
    /* 0064a6a4: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a6a9: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064a6ac: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a6b1:; BB(0x0064a6b1);
    /* 0064a6b1: mov eax, 0x22f */ r_eax = 0x22fu;
    /* 0064a6b6: call 0x64a650 */ r_esp -= 4; W32(r_esp, 0x64a6bbu); f_0064a650();
    /* 0064a6bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a6bd: je 0x64a6ce */ if (fZ) goto L_0064a6ce;
L_0064a6bf:; BB(0x0064a6bf);
    /* 0064a6bf: mov eax, dword ptr [0xa8f4fc] */ r_eax = R32((u32)(0xa8f4fcu));
    /* 0064a6c4: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a6c9: mov dword ptr [0xa8f4fc], eax */ W32((u32)(0xa8f4fcu), r_eax);
L_0064a6ce:; BB(0x0064a6ce);
    /* 0064a6ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a6cf: ret  */ FN_RET(0x0064a668); r_esp += 4; return;
}

void f_0064a6d0(void) /* sub_64A6D0 */
{
    FN_ENTER(0x0064a6d0);
    /* 0064a6d0: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0064a6d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a6d8: je 0x64a6e4 */ if (fZ) goto L_0064a6e4;
L_0064a6da:; BB(0x0064a6da);
    /* 0064a6da: call 0x668638 */ r_esp -= 4; W32(r_esp, 0x64a6dfu); f_00668638();
    /* 0064a6df: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x64a6e4u); f_00717d48();
L_0064a6e4:; BB(0x0064a6e4);
    /* 0064a6e4: ret  */ FN_RET(0x0064a6d0); r_esp += 4; return;
}

void f_0064a6e8(void) /* sub_64A6E8 */
{
    FN_ENTER(0x0064a6e8);
    /* 0064a6e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064a6e9: mov edi, ecx */ r_edi = r_ecx;
    /* 0064a6eb: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0064a6f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a6f2: jne 0x64a74c */ if (!fZ) goto L_0064a74c;
L_0064a6f4:; BB(0x0064a6f4);
    /* 0064a6f4: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0064a6fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a6fc: je 0x64a729 */ if (fZ) goto L_0064a729;
L_0064a6fe:; BB(0x0064a6fe);
    /* 0064a6fe: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0064a705: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a707: je 0x64a729 */ if (fZ) goto L_0064a729;
L_0064a709:; BB(0x0064a709);
    /* 0064a709: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x64a70eu); f_007365f4();
    /* 0064a70e: mov edx, dword ptr [edi + eax*4 + 0xcc] */ r_edx = R32((u32)(r_edi+r_eax*4+0xccu));
    /* 0064a715: mov eax, dword ptr [edx*4 + 0x936260] */ r_eax = R32((u32)(r_edx*4+0x936260u));
    /* 0064a71c: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0064a722: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a727: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a728: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
L_0064a729:; BB(0x0064a729);
    /* 0064a729: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a72b: je 0x64a748 */ if (fZ) goto L_0064a748;
L_0064a72d:; BB(0x0064a72d);
    /* 0064a72d: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x64a732u); f_00791b48();
    /* 0064a732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a734: je 0x64a748 */ if (fZ) goto L_0064a748;
L_0064a736:; BB(0x0064a736);
    /* 0064a736: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0064a73c: movsx edx, word ptr [eax + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 0064a743: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a746: je 0x64a7ad */ if (fZ) goto L_0064a7ad;
L_0064a748:; BB(0x0064a748);
    /* 0064a748: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a74a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a74b: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
L_0064a74c:; BB(0x0064a74c);
    /* 0064a74c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a74f: je 0x64a81d */ if (fZ) goto L_0064a81d;
L_0064a755:; BB(0x0064a755);
    /* 0064a755: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0064a75b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a75d: je 0x64a78a */ if (fZ) goto L_0064a78a;
L_0064a75f:; BB(0x0064a75f);
    /* 0064a75f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0064a766: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a768: je 0x64a78a */ if (fZ) goto L_0064a78a;
L_0064a76a:; BB(0x0064a76a);
    /* 0064a76a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x64a76fu); f_007365f4();
    /* 0064a76f: mov edx, dword ptr [edi + eax*4 + 0x110] */ r_edx = R32((u32)(r_edi+r_eax*4+0x110u));
    /* 0064a776: mov eax, dword ptr [edx*4 + 0x936404] */ r_eax = R32((u32)(r_edx*4+0x936404u));
    /* 0064a77d: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0064a783: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a788: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a789: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
L_0064a78a:; BB(0x0064a78a);
    /* 0064a78a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a78c: je 0x64a7a9 */ if (fZ) goto L_0064a7a9;
L_0064a78e:; BB(0x0064a78e);
    /* 0064a78e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x64a793u); f_00791b48();
    /* 0064a793: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a795: je 0x64a7a9 */ if (fZ) goto L_0064a7a9;
L_0064a797:; BB(0x0064a797);
    /* 0064a797: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0064a79d: movsx edx, word ptr [eax + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 0064a7a4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a7a7: je 0x64a7e5 */ if (fZ) goto L_0064a7e5;
L_0064a7a9:; BB(0x0064a7a9);
    /* 0064a7a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a7ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a7ac: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
L_0064a7ad:; BB(0x0064a7ad);
    /* 0064a7ad: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x64a7b2u); f_00791b48();
    /* 0064a7b2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0064a7b6: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x64a7bbu); f_0078fd68();
    /* 0064a7bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a7bd: je 0x64a748 */ if (fZ) goto L_0064a748;
L_0064a7bf:; BB(0x0064a7bf);
    /* 0064a7bf: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0064a7c5: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x64a7cau); f_007365f4();
    /* 0064a7ca: mov edx, dword ptr [edi + eax*4 + 0xcc] */ r_edx = R32((u32)(r_edi+r_eax*4+0xccu));
    /* 0064a7d1: mov eax, dword ptr [edx*4 + 0x936260] */ r_eax = R32((u32)(r_edx*4+0x936260u));
    /* 0064a7d8: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0064a7de: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a7e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a7e4: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
L_0064a7e5:; BB(0x0064a7e5);
    /* 0064a7e5: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x64a7eau); f_00791b48();
    /* 0064a7ea: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a7ec: mov ecx, eax */ r_ecx = r_eax;
    /* 0064a7ee: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x64a7f3u); f_0078fd68();
    /* 0064a7f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a7f5: je 0x64a7a9 */ if (fZ) goto L_0064a7a9;
L_0064a7f7:; BB(0x0064a7f7);
    /* 0064a7f7: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0064a7fd: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x64a802u); f_007365f4();
    /* 0064a802: mov edx, dword ptr [edi + eax*4 + 0x110] */ r_edx = R32((u32)(r_edi+r_eax*4+0x110u));
    /* 0064a809: mov eax, dword ptr [edx*4 + 0x936404] */ r_eax = R32((u32)(r_edx*4+0x936404u));
    /* 0064a810: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0064a816: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a81b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a81c: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
L_0064a81d:; BB(0x0064a81d);
    /* 0064a81d: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0064a823: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a825: je 0x64a852 */ if (fZ) goto L_0064a852;
L_0064a827:; BB(0x0064a827);
    /* 0064a827: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0064a82e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064a830: je 0x64a852 */ if (fZ) goto L_0064a852;
L_0064a832:; BB(0x0064a832);
    /* 0064a832: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x64a837u); f_007365f4();
    /* 0064a837: mov edx, dword ptr [edi + eax*4 + 0x110] */ r_edx = R32((u32)(r_edi+r_eax*4+0x110u));
    /* 0064a83e: mov eax, dword ptr [edx*4 + 0x9362a0] */ r_eax = R32((u32)(r_edx*4+0x9362a0u));
    /* 0064a845: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0064a84b: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a850: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a851: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
L_0064a852:; BB(0x0064a852);
    /* 0064a852: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a854: je 0x64a871 */ if (fZ) goto L_0064a871;
L_0064a856:; BB(0x0064a856);
    /* 0064a856: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x64a85bu); f_00791b48();
    /* 0064a85b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a85d: je 0x64a871 */ if (fZ) goto L_0064a871;
L_0064a85f:; BB(0x0064a85f);
    /* 0064a85f: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0064a865: movsx edx, word ptr [eax + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 0064a86c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a86f: je 0x64a875 */ if (fZ) goto L_0064a875;
L_0064a871:; BB(0x0064a871);
    /* 0064a871: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a873: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a874: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
L_0064a875:; BB(0x0064a875);
    /* 0064a875: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x64a87au); f_00791b48();
    /* 0064a87a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a87c: mov ecx, eax */ r_ecx = r_eax;
    /* 0064a87e: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x64a883u); f_0078fd68();
    /* 0064a883: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a885: je 0x64a871 */ if (fZ) goto L_0064a871;
L_0064a887:; BB(0x0064a887);
    /* 0064a887: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0064a88d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x64a892u); f_007365f4();
    /* 0064a892: mov edx, dword ptr [edi + eax*4 + 0x110] */ r_edx = R32((u32)(r_edi+r_eax*4+0x110u));
    /* 0064a899: mov eax, dword ptr [edx*4 + 0x9362a0] */ r_eax = R32((u32)(r_edx*4+0x9362a0u));
    /* 0064a8a0: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0064a8a6: mov eax, 1 */ r_eax = 0x1u;
    /* 0064a8ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064a8ac: ret  */ FN_RET(0x0064a6e8); r_esp += 4; return;
}

void f_0064a8b0(void) /* sub_64A8B0 */
{
    FN_ENTER(0x0064a8b0);
    /* 0064a8b0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0064a8b2: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x64a8b5u); call_ind(t); }
    /* 0064a8b5: ret 4 */ FN_RET(0x0064a8b0); r_esp += 8; return;
}

void f_0064a8b8(void) /* sub_64A8B8 */
{
    FN_ENTER(0x0064a8b8);
    /* 0064a8b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064a8b9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064a8bb: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x64a8c0u); f_0078b1c4();
    /* 0064a8c0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a8c3: je 0x64a8ce */ if (fZ) goto L_0064a8ce;
L_0064a8c5:; BB(0x0064a8c5);
    /* 0064a8c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064a8c7: call 0x669508 */ r_esp -= 4; W32(r_esp, 0x64a8ccu); f_00669508();
    /* 0064a8cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064a8cd: ret  */ FN_RET(0x0064a8b8); r_esp += 4; return;
L_0064a8ce:; BB(0x0064a8ce);
    /* 0064a8ce: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 0064a8d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a8d5: jne 0x64a8c5 */ if (!fZ) goto L_0064a8c5;
L_0064a8d7:; BB(0x0064a8d7);
    /* 0064a8d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064a8d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064a8da: ret  */ FN_RET(0x0064a8b8); r_esp += 4; return;
}

void f_0064a8dc(void)
{
    FN_ENTER(0x0064a8dc);
    /* 0064a8dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064a8dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0064a8df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a8e1: push 0x8e61b6 */ { u32 v = 0x8e61b6u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a8e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064a8ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a8ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064a8f4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064a8f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064a8fa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064a8fd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064a900: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064a903: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a908: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0064a90f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64a914u); f_005caba4();
    /* 0064a914: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064a917: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a91a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064a91d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a91f: je 0x64aa7f */ if (fZ) goto L_0064aa7f;
L_0064a925:; BB(0x0064a925);
    /* 0064a925: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0064a92c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064a933: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064a936: mov ecx, eax */ r_ecx = r_eax;
    /* 0064a938: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0064a93d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0064a940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a941: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064a944: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x64a949u); f_0066982c();
    /* 0064a949: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0064a94c: mov ebx, dword ptr [esi + 0x88] */ r_ebx = R32((u32)(r_esi+0x88u));
    /* 0064a952: mov dword ptr [esi], 0xb301e0 */ W32((u32)(r_esi), 0xb301e0u);
    /* 0064a958: mov eax, dword ptr [0x9c730c] */ r_eax = R32((u32)(0x9c730cu));
    /* 0064a95d: mov dword ptr [esi + 0xac], 0x41c80000 */ W32((u32)(r_esi+0xacu), 0x41c80000u);
    /* 0064a967: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0064a96a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0064a96c: mov dword ptr [esi + 0xc8], 0 */ W32((u32)(r_esi+0xc8u), 0x0u);
    /* 0064a976: mov dword ptr [esi + 0xcc], edi */ W32((u32)(r_esi+0xccu), r_edi);
    /* 0064a97c: mov dword ptr [esi + 0xd0], edi */ W32((u32)(r_esi+0xd0u), r_edi);
    /* 0064a982: mov dword ptr [esi + 0xd4], edi */ W32((u32)(r_esi+0xd4u), r_edi);
    /* 0064a988: mov dword ptr [esi + 0xd8], edi */ W32((u32)(r_esi+0xd8u), r_edi);
    /* 0064a98e: mov dword ptr [esi + 0xdc], edi */ W32((u32)(r_esi+0xdcu), r_edi);
    /* 0064a994: mov dword ptr [esi + 0xe0], edi */ W32((u32)(r_esi+0xe0u), r_edi);
    /* 0064a99a: mov dword ptr [esi + 0xe4], edi */ W32((u32)(r_esi+0xe4u), r_edi);
    /* 0064a9a0: mov dword ptr [esi + 0xe8], edi */ W32((u32)(r_esi+0xe8u), r_edi);
    /* 0064a9a6: mov dword ptr [esi + 0xec], edi */ W32((u32)(r_esi+0xecu), r_edi);
    /* 0064a9ac: mov dword ptr [esi + 0xf0], edi */ W32((u32)(r_esi+0xf0u), r_edi);
    /* 0064a9b2: mov dword ptr [esi + 0xf4], edi */ W32((u32)(r_esi+0xf4u), r_edi);
    /* 0064a9b8: mov dword ptr [esi + 0xf8], edi */ W32((u32)(r_esi+0xf8u), r_edi);
    /* 0064a9be: mov dword ptr [esi + 0xfc], edi */ W32((u32)(r_esi+0xfcu), r_edi);
    /* 0064a9c4: mov dword ptr [esi + 0x100], edi */ W32((u32)(r_esi+0x100u), r_edi);
    /* 0064a9ca: mov dword ptr [esi + 0x104], edi */ W32((u32)(r_esi+0x104u), r_edi);
    /* 0064a9d0: mov dword ptr [esi + 0x108], edi */ W32((u32)(r_esi+0x108u), r_edi);
    /* 0064a9d6: mov dword ptr [esi + 0x10c], edi */ W32((u32)(r_esi+0x10cu), r_edi);
    /* 0064a9dc: mov dword ptr [esi + 0x110], edi */ W32((u32)(r_esi+0x110u), r_edi);
    /* 0064a9e2: mov dword ptr [esi + 0x114], edi */ W32((u32)(r_esi+0x114u), r_edi);
    /* 0064a9e8: mov dword ptr [esi + 0x118], edi */ W32((u32)(r_esi+0x118u), r_edi);
    /* 0064a9ee: mov dword ptr [esi + 0x11c], edi */ W32((u32)(r_esi+0x11cu), r_edi);
    /* 0064a9f4: mov dword ptr [esi + 0x120], edi */ W32((u32)(r_esi+0x120u), r_edi);
    /* 0064a9fa: mov dword ptr [esi + 0x124], edi */ W32((u32)(r_esi+0x124u), r_edi);
    /* 0064aa00: mov dword ptr [esi + 0x128], edi */ W32((u32)(r_esi+0x128u), r_edi);
    /* 0064aa06: mov dword ptr [esi + 0x12c], edi */ W32((u32)(r_esi+0x12cu), r_edi);
    /* 0064aa0c: mov dword ptr [esi + 0x130], edi */ W32((u32)(r_esi+0x130u), r_edi);
    /* 0064aa12: mov dword ptr [esi + 0x134], edi */ W32((u32)(r_esi+0x134u), r_edi);
    /* 0064aa18: mov dword ptr [esi + 0x138], edi */ W32((u32)(r_esi+0x138u), r_edi);
    /* 0064aa1e: mov dword ptr [esi + 0x13c], edi */ W32((u32)(r_esi+0x13cu), r_edi);
    /* 0064aa24: mov dword ptr [esi + 0x140], edi */ W32((u32)(r_esi+0x140u), r_edi);
    /* 0064aa2a: mov dword ptr [esi + 0x144], edi */ W32((u32)(r_esi+0x144u), r_edi);
    /* 0064aa30: mov dword ptr [esi + 0x148], edi */ W32((u32)(r_esi+0x148u), r_edi);
    /* 0064aa36: mov dword ptr [esi + 0x14c], edi */ W32((u32)(r_esi+0x14cu), r_edi);
    /* 0064aa3c: mov dword ptr [esi + 0x150], edi */ W32((u32)(r_esi+0x150u), r_edi);
    /* 0064aa42: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0064aa45: mov dword ptr [esi + 0xc4], edi */ W32((u32)(r_esi+0xc4u), r_edi);
    /* 0064aa4b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064aa4d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064aa4f: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0064aa54: jg 0x64aa58 */ if ((!fZ&&fS==fO)) goto L_0064aa58;
L_0064aa56:; BB(0x0064aa56);
    /* 0064aa56: mov ebx, edx */ r_ebx = r_edx;
L_0064aa58:; BB(0x0064aa58);
    /* 0064aa58: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064aa5b: jl 0x64aa5f */ if ((fS!=fO)) goto L_0064aa5f;
L_0064aa5d:; BB(0x0064aa5d);
    /* 0064aa5d: mov ebx, ecx */ r_ebx = r_ecx;
L_0064aa5f:; BB(0x0064aa5f);
    /* 0064aa5f: mov dword ptr [esi + 0x154], ebx */ W32((u32)(r_esi+0x154u), r_ebx);
L_0064aa65:; BB(0x0064aa65);
    /* 0064aa65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064aa68: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064aa6b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064aa6e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064aa71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064aa74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064aa7b: mov esp, ebp */ r_esp = r_ebp;
    /* 0064aa7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064aa7e: ret  */ FN_RET(0x0064a8dc); r_esp += 4; return;
L_0064aa7f:; BB(0x0064aa7f);
    /* 0064aa7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064aa81: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064aa84: jmp 0x64aa65 */ goto L_0064aa65;
}

void f_0064aa88(void) /* sub_64AA88 */
{
    FN_ENTER(0x0064aa88);
    /* 0064aa88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064aa89: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064aa8d: call 0x64aab0 */ r_esp -= 4; W32(r_esp, 0x64aa92u); f_0064aab0();
    /* 0064aa92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064aa94: jl 0x64aaa7 */ if ((fS!=fO)) goto L_0064aaa7;
L_0064aa96:; BB(0x0064aa96);
    /* 0064aa96: mov ecx, eax */ r_ecx = r_eax;
    /* 0064aa98: mov edx, 1 */ r_edx = 0x1u;
    /* 0064aa9d: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0064aa9f: not edx */ r_edx = ~r_edx;
    /* 0064aaa1: and dword ptr [0xa8f500], edx */ { u32 ad = (u32)(0xa8f500u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0064aaa7:; BB(0x0064aaa7);
    /* 0064aaa7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064aaa8: ret  */ FN_RET(0x0064aa88); r_esp += 4; return;
}

void f_0064aab0(void) /* sub_64AAB0 */
{
    FN_ENTER(0x0064aab0);
    /* 0064aab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064aab1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064aab2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064aab3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064aab4: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064aaba: mov ebp, eax */ r_ebp = r_eax;
    /* 0064aabc: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0064aac1: mov esi, 0x936160 */ r_esi = 0x936160u;
    /* 0064aac6: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0064aac9: mov ecx, 0xbc */ r_ecx = 0xbcu;
    /* 0064aace: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064aacf: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0064aad2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0064aad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064aad5: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0064aad8: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0064aada: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064aadb: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x64aae0u); f_0080c2dc();
    /* 0064aae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064aae1: call 0x807dc8 */ r_esp -= 4; W32(r_esp, 0x64aae6u); f_00807dc8();
    /* 0064aae6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064aae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064aaeb: jne 0x64aaf0 */ if (!fZ) goto L_0064aaf0;
L_0064aaed:; BB(0x0064aaed);
    /* 0064aaed: mov ebx, dword ptr [esp + ebp*4] */ r_ebx = R32((u32)(r_esp+r_ebp*4));
L_0064aaf0:; BB(0x0064aaf0);
    /* 0064aaf0: mov eax, ebx */ r_eax = r_ebx;
    /* 0064aaf2: add esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064aaf8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064aaf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064aafa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064aafb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064aafc: ret  */ FN_RET(0x0064aab0); r_esp += 4; return;
}

void f_0064ab00(void) /* sub_64AB00 */
{
    FN_ENTER(0x0064ab00);
    /* 0064ab00: mov dword ptr [0xa8f500], 0 */ W32((u32)(0xa8f500u), 0x0u);
    /* 0064ab0a: ret  */ FN_RET(0x0064ab00); r_esp += 4; return;
}

void f_0064ab0c(void) /* sub_64AB0C */
{
    FN_ENTER(0x0064ab0c);
    /* 0064ab0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ab0d: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0064ab12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ab14: je 0x64ab51 */ if (fZ) goto L_0064ab51;
L_0064ab16:; BB(0x0064ab16);
    /* 0064ab16: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ab19: jne 0x64ab41 */ if (!fZ) goto L_0064ab41;
L_0064ab1b:; BB(0x0064ab1b);
    /* 0064ab1b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064ab1f: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
    /* 0064ab22: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064ab25: ja 0x64ab36 */ if ((!fC&&!fZ)) goto L_0064ab36;
L_0064ab27:; BB(0x0064ab27);
    /* 0064ab27: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064ab2b: mov edx, dword ptr [eax*4 + 0x936208] */ r_edx = R32((u32)(r_eax*4+0x936208u));
    /* 0064ab32: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0064ab36:; BB(0x0064ab36);
    /* 0064ab36: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064ab3a: call 0x64ab74 */ r_esp -= 4; W32(r_esp, 0x64ab3fu); f_0064ab74();
    /* 0064ab3f: jmp 0x64ab6b */ goto L_0064ab6b;
L_0064ab41:; BB(0x0064ab41);
    /* 0064ab41: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064ab44: jne 0x64ab6b */ if (!fZ) goto L_0064ab6b;
L_0064ab46:; BB(0x0064ab46);
    /* 0064ab46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064ab4a: call 0x64ab74 */ r_esp -= 4; W32(r_esp, 0x64ab4fu); f_0064ab74();
    /* 0064ab4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ab50: ret  */ FN_RET(0x0064ab0c); r_esp += 4; return;
L_0064ab51:; BB(0x0064ab51);
    /* 0064ab51: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064ab55: call 0x64ab74 */ r_esp -= 4; W32(r_esp, 0x64ab5au); f_0064ab74();
    /* 0064ab5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064ab5e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064ab61: jne 0x64ab6b */ if (!fZ) goto L_0064ab6b;
L_0064ab63:; BB(0x0064ab63);
    /* 0064ab63: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ab65: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x64ab6au); f_006bb100();
    /* 0064ab6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0064ab6b:; BB(0x0064ab6b);
    /* 0064ab6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ab6c: ret  */ FN_RET(0x0064ab0c); r_esp += 4; return;
}

void f_0064ab34(void)
{
    FN_ENTER(0x0064ab34);
    /* 0064ab34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ab35: ret  */ FN_RET(0x0064ab34); r_esp += 4; return;
}

void f_0064ab36(void)
{
    FN_ENTER(0x0064ab36);
    /* 0064ab36: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064ab3a: call 0x64ab74 */ r_esp -= 4; W32(r_esp, 0x64ab3fu); f_0064ab74();
    /* 0064ab3f: jmp 0x64ab6b */ goto L_0064ab6b;
L_0064ab6b:; BB(0x0064ab6b);
    /* 0064ab6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ab6c: ret  */ FN_RET(0x0064ab36); r_esp += 4; return;
}

void f_0064ab70(void) /* sub_64AB70 */
{
    FN_ENTER(0x0064ab70);
    /* 0064ab70: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0064ab74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ab75: call 0x64aab0 */ r_esp -= 4; W32(r_esp, 0x64ab7au); f_0064aab0();
    /* 0064ab7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064ab7c: jl 0x64ab8d */ if ((fS!=fO)) goto L_0064ab8d;
L_0064ab7e:; BB(0x0064ab7e);
    /* 0064ab7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0064ab80: mov edx, 1 */ r_edx = 0x1u;
    /* 0064ab85: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0064ab87: or dword ptr [0xa8f500], edx */ { u32 ad = (u32)(0xa8f500u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0064ab8d:; BB(0x0064ab8d);
    /* 0064ab8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ab8e: ret  */ FN_RET(0x0064ab70); r_esp += 4; return;
}

void f_0064ab74(void) /* sub_64AB74 */
{
    FN_ENTER(0x0064ab74);
    /* 0064ab74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064ab75: call 0x64aab0 */ r_esp -= 4; W32(r_esp, 0x64ab7au); f_0064aab0();
    /* 0064ab7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064ab7c: jl 0x64ab8d */ if ((fS!=fO)) goto L_0064ab8d;
L_0064ab7e:; BB(0x0064ab7e);
    /* 0064ab7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0064ab80: mov edx, 1 */ r_edx = 0x1u;
    /* 0064ab85: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0064ab87: or dword ptr [0xa8f500], edx */ { u32 ad = (u32)(0xa8f500u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0064ab8d:; BB(0x0064ab8d);
    /* 0064ab8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ab8e: ret  */ FN_RET(0x0064ab74); r_esp += 4; return;
}

void f_0064ab90(void) /* sub_64AB90 */
{
    FN_ENTER(0x0064ab90);
    /* 0064ab90: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ab93: mov edx, dword ptr [0xa8f434] */ r_edx = R32((u32)(0xa8f434u));
    /* 0064ab99: fld dword ptr [0x9363f4] */ FPUSH(R_F32((u32)(0x9363f4u)));
    /* 0064ab9f: fadd dword ptr [ecx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc8u));
    /* 0064aba5: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0064abab: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0064abae: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0064abb1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064abb4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0064abb7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0064abba: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0064abbd: fadd dword ptr [eax*4 + 0x9363a0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9363a0u));
    /* 0064abc4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064abc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064abc8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064abc9: ja 0x64abd5 */ if ((!fC&&!fZ)) goto L_0064abd5;
L_0064abcb:; BB(0x0064abcb);
    /* 0064abcb: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0064abcd: fstp dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0)); FPOP();
    /* 0064abd3: jmp 0x64abdd */ goto L_0064abdd;
L_0064abd5:; BB(0x0064abd5);
    /* 0064abd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064abd7: fstp dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0)); FPOP();
L_0064abdd:; BB(0x0064abdd);
    /* 0064abdd: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x64abe2u); f_006698e0();
    /* 0064abe2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064abe5: ret  */ FN_RET(0x0064ab90); r_esp += 4; return;
}

void f_0064abe8(void) /* sub_64ABE8 */
{
    FN_ENTER(0x0064abe8);
    /* 0064abe8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064abe9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064abeb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0064abed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064abef: push 0x420c0000 */ { u32 v = 0x420c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064abf4: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064abf9: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64abfcu); call_ind(t); }
    /* 0064abfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064abfe: jne 0x64ac02 */ if (!fZ) goto L_0064ac02;
L_0064ac00:; BB(0x0064ac00);
    /* 0064ac00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064ac01: ret  */ FN_RET(0x0064abe8); r_esp += 4; return;
L_0064ac02:; BB(0x0064ac02);
    /* 0064ac02: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 0064ac08: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64ac0du); f_00829cc8();
    /* 0064ac0d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64ac12u); f_0082d7b0();
    /* 0064ac12: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0064ac15: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64ac1au); f_0082d838();
    /* 0064ac1a: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0064ac1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ac1f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64ac24u); f_0082d8bc();
    /* 0064ac24: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064ac29: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064ac2f: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 0064ac35: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64ac3au); f_00831758();
    /* 0064ac3a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x64ac3fu); f_0082dbac();
    /* 0064ac3f: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064ac44: push dword ptr [ebx + 0xc8] */ { u32 v = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064ac4a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064ac50: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0064ac56: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0064ac59: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064ac5c: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64ac61u); f_0083bd00();
    /* 0064ac61: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x64ac66u); f_0082dab0();
    /* 0064ac66: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64ac6bu); f_0082da80();
    /* 0064ac6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064ac6c: ret  */ FN_RET(0x0064abe8); r_esp += 4; return;
}

void f_0064ac70(void) /* sub_64AC70 */
{
    FN_ENTER(0x0064ac70);
    /* 0064ac70: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ac73: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 0064ac79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064ac7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064ac7d: jg 0x64ac81 */ if ((!fZ&&fS==fO)) goto L_0064ac81;
L_0064ac7f:; BB(0x0064ac7f);
    /* 0064ac7f: mov eax, edx */ r_eax = r_edx;
L_0064ac81:; BB(0x0064ac81);
    /* 0064ac81: mov edx, 2 */ r_edx = 0x2u;
    /* 0064ac86: mov dword ptr [esp], 0x9364b0 */ W32((u32)(r_esp), 0x9364b0u);
    /* 0064ac8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064ac90: jl 0x64ac94 */ if ((fS!=fO)) goto L_0064ac94;
L_0064ac92:; BB(0x0064ac92);
    /* 0064ac92: mov eax, edx */ r_eax = r_edx;
L_0064ac94:; BB(0x0064ac94);
    /* 0064ac94: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
    /* 0064ac9a: mov dword ptr [esp + 4], 0x9364c4 */ W32((u32)(r_esp+0x4u), 0x9364c4u);
    /* 0064aca2: mov dword ptr [esp + 8], 0x9364d4 */ W32((u32)(r_esp+0x8u), 0x9364d4u);
    /* 0064acaa: push dword ptr [esp + eax*4] */ { u32 v = R32((u32)(r_esp+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0064acad: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 0064acb2: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0064acb7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64acbcu); f_0061cdb0();
    /* 0064acbc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064acbf: ret  */ FN_RET(0x0064ac70); r_esp += 4; return;
}

void f_0064acc0(void) /* sub_64ACC0 */
{
    FN_ENTER(0x0064acc0);
    /* 0064acc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064acc1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064acc3: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0064acc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064accb: je 0x64acd1 */ if (fZ) goto L_0064acd1;
L_0064accd:; BB(0x0064accd);
    /* 0064accd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064acce: ret 4 */ FN_RET(0x0064acc0); r_esp += 8; return;
L_0064acd1:; BB(0x0064acd1);
    /* 0064acd1: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0064acd3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64acd8u); f_0073ec50();
    /* 0064acd8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0064acdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064acdd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064acdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ace0: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x64ace5u); f_007354fc();
    /* 0064ace5: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ace7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064ace9: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0064acef: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x64acf4u); f_00792fe8();
    /* 0064acf4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064acf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064acf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064acfb: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0064ad01: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad04: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x64ad09u); f_00735db8();
    /* 0064ad09: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0064ad0f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0064ad16: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064ad1b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0064ad22: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0064ad28: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0064ad2f: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064ad34: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0064ad3b: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0064ad41: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x64ad46u); f_0073608c();
    /* 0064ad46: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0064ad4c: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x64ad51u); f_00736458();
    /* 0064ad51: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064ad55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad57: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0064ad5e: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64ad63u); f_00791748();
    /* 0064ad63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ad64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ad65: ret 4 */ FN_RET(0x0064acc0); r_esp += 8; return;
}

void f_0064ad68(void)
{
    FN_ENTER(0x0064ad68);
    /* 0064ad68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad69: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ad6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad6d: push 0x8e61dc */ { u32 v = 0x8e61dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ad78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064ad80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ad83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064ad86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064ad89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064ad8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064ad8f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad94: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064ad9b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64ada0u); f_005caba4();
    /* 0064ada0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ada1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064ada4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ada6: je 0x64addf */ if (fZ) goto L_0064addf;
L_0064ada8:; BB(0x0064ada8);
    /* 0064ada8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064adaf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064adb6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064adb9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064adbf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064adc2: call 0x64ade4 */ r_esp -= 4; W32(r_esp, 0x64adc7u); f_0064ade4();
    /* 0064adc7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064adca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064add1:; BB(0x0064add1);
    /* 0064add1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064add4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064addb: mov esp, ebp */ r_esp = r_ebp;
    /* 0064addd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064adde: ret  */ FN_RET(0x0064ad68); r_esp += 4; return;
L_0064addf:; BB(0x0064addf);
    /* 0064addf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064ade1: jmp 0x64add1 */ goto L_0064add1;
}

void f_0064ade4(void) /* sub_64ADE4 */
{
    FN_ENTER(0x0064ade4);
    /* 0064ade4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ade5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064ade7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064adeb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064adef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064adf1: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x64adf6u); f_0066982c();
    /* 0064adf6: mov dword ptr [ebx], 0xb30240 */ W32((u32)(r_ebx), 0xb30240u);
    /* 0064adfc: mov edx, dword ptr [0x9c7310] */ r_edx = R32((u32)(0x9c7310u));
    /* 0064ae02: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0064ae05: mov eax, ebx */ r_eax = r_ebx;
    /* 0064ae07: mov dword ptr [ebx + 0xac], 0x41b80000 */ W32((u32)(r_ebx+0xacu), 0x41b80000u);
    /* 0064ae11: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 0064ae1b: mov dword ptr [ebx + 0xc0], 0xf */ W32((u32)(r_ebx+0xc0u), 0xfu);
    /* 0064ae25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064ae26: ret 8 */ FN_RET(0x0064ade4); r_esp += 12; return;
}

void f_0064ae2c(void) /* sub_64AE2C */
{
    FN_ENTER(0x0064ae2c);
    /* 0064ae2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae2d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ae30: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064ae32: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64ae37u); f_00694cc8();
    /* 0064ae37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ae39: je 0x64ae8c */ if (fZ) goto L_0064ae8c;
L_0064ae3b:; BB(0x0064ae3b);
    /* 0064ae3b: mov edx, dword ptr [0xa8f434] */ r_edx = R32((u32)(0xa8f434u));
    /* 0064ae41: fld dword ptr [0x9363f4] */ FPUSH(R_F32((u32)(0x9363f4u)));
    /* 0064ae47: fadd dword ptr [ebx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc8u));
    /* 0064ae4d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0064ae53: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0064ae56: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0064ae59: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ae5c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0064ae5f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0064ae62: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0064ae65: fadd dword ptr [eax*4 + 0x936398] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x936398u));
    /* 0064ae6c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0064ae6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064ae70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064ae71: ja 0x64ae7d */ if ((!fC&&!fZ)) goto L_0064ae7d;
L_0064ae73:; BB(0x0064ae73);
    /* 0064ae73: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0064ae75: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 0064ae7b: jmp 0x64ae85 */ goto L_0064ae85;
L_0064ae7d:; BB(0x0064ae7d);
    /* 0064ae7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064ae7f: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
L_0064ae85:; BB(0x0064ae85);
    /* 0064ae85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064ae87: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x64ae8cu); f_006698e0();
L_0064ae8c:; BB(0x0064ae8c);
    /* 0064ae8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064ae8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064ae90: ret  */ FN_RET(0x0064ae2c); r_esp += 4; return;
}

void f_0064ae94(void) /* sub_64AE94 */
{
    FN_ENTER(0x0064ae94);
    /* 0064ae94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064ae97: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x64ae9cu); f_00694cc8();
    /* 0064ae9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064ae9e: jne 0x64aea2 */ if (!fZ) goto L_0064aea2;
L_0064aea0:; BB(0x0064aea0);
    /* 0064aea0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064aea1: ret  */ FN_RET(0x0064ae94); r_esp += 4; return;
L_0064aea2:; BB(0x0064aea2);
    /* 0064aea2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064aea4: call 0x64aeac */ r_esp -= 4; W32(r_esp, 0x64aea9u); f_0064aeac();
    /* 0064aea9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064aeaa: ret  */ FN_RET(0x0064ae94); r_esp += 4; return;
}

void f_0064aeac(void) /* sub_64AEAC */
{
    FN_ENTER(0x0064aeac);
    /* 0064aeac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064aead: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064aeaf: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0064aeb2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064aeb4: push 0x42000000 */ { u32 v = 0x42000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064aeb9: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064aebe: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64aec1u); call_ind(t); }
    /* 0064aec1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064aec3: jne 0x64aec7 */ if (!fZ) goto L_0064aec7;
L_0064aec5:; BB(0x0064aec5);
    /* 0064aec5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064aec6: ret  */ FN_RET(0x0064aeac); r_esp += 4; return;
L_0064aec7:; BB(0x0064aec7);
    /* 0064aec7: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 0064aecd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64aed2u); f_00829cc8();
    /* 0064aed2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64aed7u); f_0082d7b0();
    /* 0064aed7: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0064aeda: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64aedfu); f_0082d838();
    /* 0064aedf: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0064aee2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064aee4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64aee9u); f_0082d8bc();
    /* 0064aee9: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x64aeeeu); f_0082dbac();
    /* 0064aeee: mov eax, dword ptr [0xa8f434] */ r_eax = R32((u32)(0xa8f434u));
    /* 0064aef3: push dword ptr [ebp + 0xc8] */ { u32 v = R32((u32)(r_ebp+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064aef9: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0064aeff: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0064af05: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0064af08: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064af0b: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x64af10u); f_0083bd00();
    /* 0064af10: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x64af15u); f_0082dab0();
    /* 0064af15: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64af1au); f_0082da80();
    /* 0064af1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064af1b: ret  */ FN_RET(0x0064aeac); r_esp += 4; return;
}

void f_0064af1c(void) /* sub_64AF1C */
{
    FN_ENTER(0x0064af1c);
    /* 0064af1c: call 0x64aeac */ r_esp -= 4; W32(r_esp, 0x64af21u); f_0064aeac();
    /* 0064af21: ret  */ FN_RET(0x0064af1c); r_esp += 4; return;
}

void f_0064af24(void) /* sub_64AF24 */
{
    FN_ENTER(0x0064af24);
    /* 0064af24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064af25: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0064af29: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064af2b: je 0x64af5d */ if (fZ) goto L_0064af5d;
L_0064af2d:; BB(0x0064af2d);
    /* 0064af2d: mov ecx, edi */ r_ecx = r_edi;
    /* 0064af2f: call 0x68cd34 */ r_esp -= 4; W32(r_esp, 0x64af34u); f_0068cd34();
    /* 0064af34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064af36: je 0x64af5d */ if (fZ) goto L_0064af5d;
L_0064af38:; BB(0x0064af38);
    /* 0064af38: mov edx, dword ptr [edi + 0x45c] */ r_edx = R32((u32)(r_edi+0x45cu));
    /* 0064af3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064af40: je 0x64af5d */ if (fZ) goto L_0064af5d;
L_0064af42:; BB(0x0064af42);
    /* 0064af42: mov eax, dword ptr [eax + 0xa8] */ r_eax = R32((u32)(r_eax+0xa8u));
    /* 0064af48: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064af4a: je 0x64af53 */ if (fZ) goto L_0064af53;
L_0064af4c:; BB(0x0064af4c);
    /* 0064af4c: mov eax, 1 */ r_eax = 0x1u;
    /* 0064af51: jmp 0x64af55 */ goto L_0064af55;
L_0064af53:; BB(0x0064af53);
    /* 0064af53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064af55:; BB(0x0064af55);
    /* 0064af55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064af57: jne 0x64af5d */ if (!fZ) goto L_0064af5d;
L_0064af59:; BB(0x0064af59);
    /* 0064af59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064af5a: ret 4 */ FN_RET(0x0064af24); r_esp += 8; return;
L_0064af5d:; BB(0x0064af5d);
    /* 0064af5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064af5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064af60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064af61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064af62: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0064af64: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x64af69u); f_00814298();
    /* 0064af69: mov eax, 1 */ r_eax = 0x1u;
    /* 0064af6e: mov word ptr [0xaae6d4], ax */ W16((u32)(0xaae6d4u), (u16)r_eax);
    /* 0064af74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064af77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064af78: ret 4 */ FN_RET(0x0064af24); r_esp += 8; return;
}

void f_0064af7c(void) /* sub_64AF7C */
{
    FN_ENTER(0x0064af7c);
    /* 0064af7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064af7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064af7e: mov edi, ecx */ r_edi = r_ecx;
    /* 0064af80: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0064af84: mov eax, dword ptr [edi + esi*4 + 0xf0] */ r_eax = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064af8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064af8d: je 0x64af94 */ if (fZ) goto L_0064af94;
L_0064af8f:; BB(0x0064af8f);
    /* 0064af8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064af90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064af91: ret 4 */ FN_RET(0x0064af7c); r_esp += 8; return;
L_0064af94:; BB(0x0064af94);
    /* 0064af94: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0064af96: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x64af9bu); f_0073ec50();
    /* 0064af9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064af9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064af9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064af9f: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x64afa4u); f_007354fc();
    /* 0064afa4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064afa7: mov dword ptr [edi + esi*4 + 0xf0], eax */ W32((u32)(r_edi+r_esi*4+0xf0u), r_eax);
    /* 0064afae: mov ecx, edi */ r_ecx = r_edi;
    /* 0064afb0: call 0x64b038 */ r_esp -= 4; W32(r_esp, 0x64afb5u); f_0064b038();
    /* 0064afb5: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0064afbb: push dword ptr [eax*4 + 0x9363d0] */ { u32 v = R32((u32)(r_eax*4+0x9363d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064afc2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064afc4: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x64afc9u); f_00792fe8();
    /* 0064afc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064afcc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064afce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064afd0: mov ecx, dword ptr [edi + esi*4 + 0xf0] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064afd7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064afd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064afda: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x64afdfu); f_00735db8();
    /* 0064afdf: mov edx, dword ptr [edi + esi*4 + 0xf0] */ r_edx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064afe6: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0064afed: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064aff2: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0064aff9: mov edx, dword ptr [edi + esi*4 + 0xf0] */ r_edx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b000: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0064b007: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064b00c: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0064b013: mov ecx, dword ptr [edi + esi*4 + 0xf0] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b01a: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x64b01fu); f_0073608c();
    /* 0064b01f: mov ecx, dword ptr [edi + esi*4 + 0xf0] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xf0u));
    /* 0064b026: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x64b02bu); f_00736458();
    /* 0064b02b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b02d: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x64b032u); f_00791748();
    /* 0064b032: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b033: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064b034: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064b035: ret 4 */ FN_RET(0x0064af7c); r_esp += 8; return;
}

